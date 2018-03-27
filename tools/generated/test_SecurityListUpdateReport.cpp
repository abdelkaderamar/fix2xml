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

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityListUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> SecurityListUpdateReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_23("LOCALMKTDATE_346282662");
  msg.set(ClearingBusinessDate_23);
  SecurityListUpdateReport_0.insert(ClearingBusinessDate_23.getString());
  FIX::CorporateAction CorporateAction_8("MULTIPLECHARVALUE_D");
  msg.set(CorporateAction_8);
  SecurityListUpdateReport_0.insert(CorporateAction_8.getString());
  FIX::EncodedSecurityListDesc EncodedSecurityListDesc_1("DATA_1249037719");
  msg.set(EncodedSecurityListDesc_1);
  FIX::EncodedSecurityListDescLen EncodedSecurityListDescLen_1(285991653);
  msg.set(EncodedSecurityListDescLen_1);
  FIX::LastFragment LastFragment_13(false);
  msg.set(LastFragment_13);
  SecurityListUpdateReport_0.insert(LastFragment_13.getString());
  FIX::MarketID MarketID_23("EXCHANGE_1234176517");
  msg.set(MarketID_23);
  SecurityListUpdateReport_0.insert(MarketID_23.getString());
  FIX::MarketSegmentID MarketSegmentID_23("STRING_550269671");
  msg.set(MarketSegmentID_23);
  SecurityListUpdateReport_0.insert(MarketSegmentID_23.getString());
  FIX::SecurityListDesc SecurityListDesc_1("STRING_1110654553");
  msg.set(SecurityListDesc_1);
  SecurityListUpdateReport_0.insert(SecurityListDesc_1.getString());
  FIX::SecurityListID SecurityListID_2("STRING_1599904392");
  msg.set(SecurityListID_2);
  SecurityListUpdateReport_0.insert(SecurityListID_2.getString());
  FIX::SecurityListRefID SecurityListRefID_1("STRING_515656023");
  msg.set(SecurityListRefID_1);
  SecurityListUpdateReport_0.insert(SecurityListRefID_1.getString());
  FIX::SecurityListType SecurityListType_2(2);
  msg.set(SecurityListType_2);
  SecurityListUpdateReport_0.insert(SecurityListType_2.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_2(1);
  msg.set(SecurityListTypeSource_2);
  SecurityListUpdateReport_0.insert(SecurityListTypeSource_2.getString());
  FIX::SecurityReportID SecurityReportID_4(1668511046);
  msg.set(SecurityReportID_4);
  SecurityListUpdateReport_0.insert(SecurityReportID_4.getString());
  FIX::SecurityReqID SecurityReqID_8("STRING_16326464");
  msg.set(SecurityReqID_8);
  SecurityListUpdateReport_0.insert(SecurityReqID_8.getString());
  FIX::SecurityRequestResult SecurityRequestResult_3(2);
  msg.set(SecurityRequestResult_3);
  SecurityListUpdateReport_0.insert(SecurityRequestResult_3.getString());
  FIX::SecurityResponseID SecurityResponseID_5("STRING_1981709316");
  msg.set(SecurityResponseID_5);
  SecurityListUpdateReport_0.insert(SecurityResponseID_5.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_2('D');
  msg.set(SecurityUpdateAction_2);
  SecurityListUpdateReport_0.insert(SecurityUpdateAction_2.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_4(1431303758);
  msg.set(TotNoRelatedSym_4);
  SecurityListUpdateReport_0.insert(TotNoRelatedSym_4.getString());
  FIX::TransactTime TransactTime_56(FIX::UTCTIMESTAMP(15, 6, 10, 4, 112017));
  msg.set(TransactTime_56);
  SecurityListUpdateReport_0.insert(TransactTime_56.getString());
  all_values.push_back(SecurityListUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_15;
  FIX::ApplID ApplID_15("STRING_1298199110");
  msg.set(ApplID_15);
  ApplicationSequenceControl_15.insert(ApplID_15.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_15(651080150);
  msg.set(ApplLastSeqNum_15);
  ApplicationSequenceControl_15.insert(ApplLastSeqNum_15.getString());
  FIX::ApplResendFlag ApplResendFlag_15(false);
  msg.set(ApplResendFlag_15);
  ApplicationSequenceControl_15.insert(ApplResendFlag_15.getString());
  FIX::ApplSeqNum ApplSeqNum_15(499300867);
  msg.set(ApplSeqNum_15);
  ApplicationSequenceControl_15.insert(ApplSeqNum_15.getString());
  all_values.push_back(ApplicationSequenceControl_15);

  // SecLstUpdRelSymGrp
  // Group SecLstUpdRelSymGrp.NoRelatedSym
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_0;
    FIX::Currency Currency_58("EUR");
    noRelatedSym_0_0.set(Currency_58);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(Currency_58.getString());
    FIX::EncodedText EncodedText_82("DATA_2115591794");
    noRelatedSym_0_0.set(EncodedText_82);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(EncodedText_82.getString());
    FIX::EncodedTextLen EncodedTextLen_82(1023378037);
    noRelatedSym_0_0.set(EncodedTextLen_82);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(EncodedTextLen_82.getString());
    FIX::ListUpdateAction ListUpdateAction_2('1');
    noRelatedSym_0_0.set(ListUpdateAction_2);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(ListUpdateAction_2.getString());
    FIX::RelSymTransactTime RelSymTransactTime_5(FIX::UTCTIMESTAMP(18, 34, 9, 10, 62000));
    noRelatedSym_0_0.set(RelSymTransactTime_5);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(RelSymTransactTime_5.getString());
    FIX::Text Text_82("STRING_160994881");
    noRelatedSym_0_0.set(Text_82);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(Text_82.getString());
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_28;
    FIX::AgreementCurrency AgreementCurrency_28("CHF");
    noRelatedSym_0_0.set(AgreementCurrency_28);
    FinancingDetails_28.insert(AgreementCurrency_28.getString());
    FIX::AgreementDate AgreementDate_28("LOCALMKTDATE_656819751");
    noRelatedSym_0_0.set(AgreementDate_28);
    FinancingDetails_28.insert(AgreementDate_28.getString());
    FIX::AgreementDesc AgreementDesc_28("STRING_1552753943");
    noRelatedSym_0_0.set(AgreementDesc_28);
    FinancingDetails_28.insert(AgreementDesc_28.getString());
    FIX::AgreementID AgreementID_28("STRING_1747342078");
    noRelatedSym_0_0.set(AgreementID_28);
    FinancingDetails_28.insert(AgreementID_28.getString());
    FIX::DeliveryType DeliveryType_28(1);
    noRelatedSym_0_0.set(DeliveryType_28);
    FinancingDetails_28.insert(DeliveryType_28.getString());
    FIX::EndDate EndDate_28("LOCALMKTDATE_1111978540");
    noRelatedSym_0_0.set(EndDate_28);
    FinancingDetails_28.insert(EndDate_28.getString());
    FIX::MarginRatio MarginRatio_28;
    MarginRatio_28.setString("87.090000");
    noRelatedSym_0_0.set(MarginRatio_28);
    FinancingDetails_28.insert(MarginRatio_28.getString());
    FIX::StartDate StartDate_28("LOCALMKTDATE_1662394587");
    noRelatedSym_0_0.set(StartDate_28);
    FinancingDetails_28.insert(StartDate_28.getString());
    FIX::TerminationType TerminationType_28(3);
    noRelatedSym_0_0.set(TerminationType_28);
    FinancingDetails_28.insert(TerminationType_28.getString());
    all_values.push_back(FinancingDetails_28);

    // Instrument
    multiset<string> Instrument_76;
    FIX::AttachmentPoint AttachmentPoint_76;
    AttachmentPoint_76.setString("9.970000");
    noRelatedSym_0_0.set(AttachmentPoint_76);
    Instrument_76.insert(AttachmentPoint_76.getString());
    FIX::CFICode CFICode_76("STRING_2106826034");
    noRelatedSym_0_0.set(CFICode_76);
    Instrument_76.insert(CFICode_76.getString());
    FIX::CPProgram CPProgram_76(1);
    noRelatedSym_0_0.set(CPProgram_76);
    Instrument_76.insert(CPProgram_76.getString());
    FIX::CPRegType CPRegType_76("STRING_1142806460");
    noRelatedSym_0_0.set(CPRegType_76);
    Instrument_76.insert(CPRegType_76.getString());
    FIX::CapPrice CapPrice_76;
    CapPrice_76.setString("6104225");
    noRelatedSym_0_0.set(CapPrice_76);
    Instrument_76.insert(CapPrice_76.getString());
    FIX::ContractMultiplier ContractMultiplier_76;
    ContractMultiplier_76.setString("8903020");
    noRelatedSym_0_0.set(ContractMultiplier_76);
    Instrument_76.insert(ContractMultiplier_76.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_76(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_76);
    Instrument_76.insert(ContractMultiplierUnit_76.getString());
    FIX::ContractSettlMonth ContractSettlMonth_76("MONTHYEAR_402483321");
    noRelatedSym_0_0.set(ContractSettlMonth_76);
    Instrument_76.insert(ContractSettlMonth_76.getString());
    FIX::CountryOfIssue CountryOfIssue_76("COUNTRY_664642355");
    noRelatedSym_0_0.set(CountryOfIssue_76);
    Instrument_76.insert(CountryOfIssue_76.getString());
    FIX::CouponPaymentDate CouponPaymentDate_76("LOCALMKTDATE_340207208");
    noRelatedSym_0_0.set(CouponPaymentDate_76);
    Instrument_76.insert(CouponPaymentDate_76.getString());
    FIX::CouponRate CouponRate_76;
    CouponRate_76.setString("14.670000");
    noRelatedSym_0_0.set(CouponRate_76);
    Instrument_76.insert(CouponRate_76.getString());
    FIX::CreditRating CreditRating_76("STRING_1688020392");
    noRelatedSym_0_0.set(CreditRating_76);
    Instrument_76.insert(CreditRating_76.getString());
    FIX::DatedDate DatedDate_76("LOCALMKTDATE_1471782391");
    noRelatedSym_0_0.set(DatedDate_76);
    Instrument_76.insert(DatedDate_76.getString());
    FIX::DetachmentPoint DetachmentPoint_76;
    DetachmentPoint_76.setString("98.030000");
    noRelatedSym_0_0.set(DetachmentPoint_76);
    Instrument_76.insert(DetachmentPoint_76.getString());
    FIX::EncodedIssuer EncodedIssuer_76("DATA_1798091298");
    noRelatedSym_0_0.set(EncodedIssuer_76);
    Instrument_76.insert(EncodedIssuer_76.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_76(1006143597);
    noRelatedSym_0_0.set(EncodedIssuerLen_76);
    Instrument_76.insert(EncodedIssuerLen_76.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_76("DATA_2131602692");
    noRelatedSym_0_0.set(EncodedSecurityDesc_76);
    Instrument_76.insert(EncodedSecurityDesc_76.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_76(1360582948);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_76);
    Instrument_76.insert(EncodedSecurityDescLen_76.getString());
    FIX::ExerciseStyle ExerciseStyle_76(2);
    noRelatedSym_0_0.set(ExerciseStyle_76);
    Instrument_76.insert(ExerciseStyle_76.getString());
    FIX::Factor Factor_76;
    Factor_76.setString("1479738");
    noRelatedSym_0_0.set(Factor_76);
    Instrument_76.insert(Factor_76.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_76(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_76);
    Instrument_76.insert(FlexProductEligibilityIndicator_76.getString());
    FIX::FlexibleIndicator FlexibleIndicator_76(true);
    noRelatedSym_0_0.set(FlexibleIndicator_76);
    Instrument_76.insert(FlexibleIndicator_76.getString());
    FIX::FloorPrice FloorPrice_76;
    FloorPrice_76.setString("3281552");
    noRelatedSym_0_0.set(FloorPrice_76);
    Instrument_76.insert(FloorPrice_76.getString());
    FIX::FlowScheduleType FlowScheduleType_76(2);
    noRelatedSym_0_0.set(FlowScheduleType_76);
    Instrument_76.insert(FlowScheduleType_76.getString());
    FIX::InstrRegistry InstrRegistry_76("STRING_32475749");
    noRelatedSym_0_0.set(InstrRegistry_76);
    Instrument_76.insert(InstrRegistry_76.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_76('2');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_76);
    Instrument_76.insert(InstrmtAssignmentMethod_76.getString());
    FIX::InterestAccrualDate InterestAccrualDate_76("LOCALMKTDATE_2119037441");
    noRelatedSym_0_0.set(InterestAccrualDate_76);
    Instrument_76.insert(InterestAccrualDate_76.getString());
    FIX::IssueDate IssueDate_76("LOCALMKTDATE_1144454290");
    noRelatedSym_0_0.set(IssueDate_76);
    Instrument_76.insert(IssueDate_76.getString());
    FIX::Issuer Issuer_76("STRING_1733522342");
    noRelatedSym_0_0.set(Issuer_76);
    Instrument_76.insert(Issuer_76.getString());
    FIX::ListMethod ListMethod_76(1);
    noRelatedSym_0_0.set(ListMethod_76);
    Instrument_76.insert(ListMethod_76.getString());
    FIX::LocaleOfIssue LocaleOfIssue_76("STRING_1095562552");
    noRelatedSym_0_0.set(LocaleOfIssue_76);
    Instrument_76.insert(LocaleOfIssue_76.getString());
    FIX::MaturityDate MaturityDate_76("LOCALMKTDATE_1578129691");
    noRelatedSym_0_0.set(MaturityDate_76);
    Instrument_76.insert(MaturityDate_76.getString());
    FIX::MaturityMonthYear MaturityMonthYear_76("MONTHYEAR_1593290767");
    noRelatedSym_0_0.set(MaturityMonthYear_76);
    Instrument_76.insert(MaturityMonthYear_76.getString());
    FIX::MaturityTime MaturityTime_76("TZTIMEONLY_196542638");
    noRelatedSym_0_0.set(MaturityTime_76);
    Instrument_76.insert(MaturityTime_76.getString());
    FIX::MinPriceIncrement MinPriceIncrement_76;
    MinPriceIncrement_76.setString("5734525");
    noRelatedSym_0_0.set(MinPriceIncrement_76);
    Instrument_76.insert(MinPriceIncrement_76.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_76;
    MinPriceIncrementAmount_76.setString("562296");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_76);
    Instrument_76.insert(MinPriceIncrementAmount_76.getString());
    FIX::NTPositionLimit NTPositionLimit_76(1086844676);
    noRelatedSym_0_0.set(NTPositionLimit_76);
    Instrument_76.insert(NTPositionLimit_76.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_76;
    NotionalPercentageOutstanding_76.setString("61.820000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_76);
    Instrument_76.insert(NotionalPercentageOutstanding_76.getString());
    FIX::OptAttribute OptAttribute_76('4');
    noRelatedSym_0_0.set(OptAttribute_76);
    Instrument_76.insert(OptAttribute_76.getString());
    FIX::OptPayoutAmount OptPayoutAmount_76;
    OptPayoutAmount_76.setString("17514870");
    noRelatedSym_0_0.set(OptPayoutAmount_76);
    Instrument_76.insert(OptPayoutAmount_76.getString());
    FIX::OptPayoutType OptPayoutType_76(3);
    noRelatedSym_0_0.set(OptPayoutType_76);
    Instrument_76.insert(OptPayoutType_76.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_76;
    OriginalNotionalPercentageOutstanding_76.setString("44.440000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_76);
    Instrument_76.insert(OriginalNotionalPercentageOutstanding_76.getString());
    FIX::Pool Pool_76("STRING_1292023775");
    noRelatedSym_0_0.set(Pool_76);
    Instrument_76.insert(Pool_76.getString());
    FIX::PositionLimit PositionLimit_76(1880065782);
    noRelatedSym_0_0.set(PositionLimit_76);
    Instrument_76.insert(PositionLimit_76.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_76("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_76);
    Instrument_76.insert(PriceQuoteMethod_76.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_76("STRING_942631425");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_76);
    Instrument_76.insert(PriceUnitOfMeasure_76.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_76;
    PriceUnitOfMeasureQty_76.setString("7387257");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_76);
    Instrument_76.insert(PriceUnitOfMeasureQty_76.getString());
    FIX::Product Product_78(10);
    noRelatedSym_0_0.set(Product_78);
    Instrument_76.insert(Product_78.getString());
    FIX::ProductComplex ProductComplex_76("STRING_155730725");
    noRelatedSym_0_0.set(ProductComplex_76);
    Instrument_76.insert(ProductComplex_76.getString());
    FIX::PutOrCall PutOrCall_76(1);
    noRelatedSym_0_0.set(PutOrCall_76);
    Instrument_76.insert(PutOrCall_76.getString());
    FIX::RedemptionDate RedemptionDate_76("LOCALMKTDATE_1657167183");
    noRelatedSym_0_0.set(RedemptionDate_76);
    Instrument_76.insert(RedemptionDate_76.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_76("STRING_1677308554");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_76);
    Instrument_76.insert(RepoCollateralSecurityType_76.getString());
    FIX::RepurchaseRate RepurchaseRate_76;
    RepurchaseRate_76.setString("83.630000");
    noRelatedSym_0_0.set(RepurchaseRate_76);
    Instrument_76.insert(RepurchaseRate_76.getString());
    FIX::RepurchaseTerm RepurchaseTerm_76(1985322385);
    noRelatedSym_0_0.set(RepurchaseTerm_76);
    Instrument_76.insert(RepurchaseTerm_76.getString());
    FIX::RestructuringType RestructuringType_76("STRING_MM");
    noRelatedSym_0_0.set(RestructuringType_76);
    Instrument_76.insert(RestructuringType_76.getString());
    FIX::SecurityDesc SecurityDesc_76("STRING_307084113");
    noRelatedSym_0_0.set(SecurityDesc_76);
    Instrument_76.insert(SecurityDesc_76.getString());
    FIX::SecurityExchange SecurityExchange_76("EXCHANGE_1913336017");
    noRelatedSym_0_0.set(SecurityExchange_76);
    Instrument_76.insert(SecurityExchange_76.getString());
    FIX::SecurityGroup SecurityGroup_76("STRING_1679776279");
    noRelatedSym_0_0.set(SecurityGroup_76);
    Instrument_76.insert(SecurityGroup_76.getString());
    FIX::SecurityID SecurityID_76("STRING_1451538403");
    noRelatedSym_0_0.set(SecurityID_76);
    Instrument_76.insert(SecurityID_76.getString());
    FIX::SecurityIDSource SecurityIDSource_76("STRING_M");
    noRelatedSym_0_0.set(SecurityIDSource_76);
    Instrument_76.insert(SecurityIDSource_76.getString());
    FIX::SecurityStatus SecurityStatus_76("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_76);
    Instrument_76.insert(SecurityStatus_76.getString());
    FIX::SecuritySubType SecuritySubType_77("STRING_399617307");
    noRelatedSym_0_0.set(SecuritySubType_77);
    Instrument_76.insert(SecuritySubType_77.getString());
    FIX::SecurityType SecurityType_78("STRING_RAN");
    noRelatedSym_0_0.set(SecurityType_78);
    Instrument_76.insert(SecurityType_78.getString());
    FIX::Seniority Seniority_76("STRING_SB");
    noRelatedSym_0_0.set(Seniority_76);
    Instrument_76.insert(Seniority_76.getString());
    FIX::SettlMethod SettlMethod_76('C');
    noRelatedSym_0_0.set(SettlMethod_76);
    Instrument_76.insert(SettlMethod_76.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_76("STRING_1503473258");
    noRelatedSym_0_0.set(SettleOnOpenFlag_76);
    Instrument_76.insert(SettleOnOpenFlag_76.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_76("STRING_668277787");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_76);
    Instrument_76.insert(StateOrProvinceOfIssue_76.getString());
    FIX::StrikeCurrency StrikeCurrency_76("CAN");
    noRelatedSym_0_0.set(StrikeCurrency_76);
    Instrument_76.insert(StrikeCurrency_76.getString());
    FIX::StrikeMultiplier StrikeMultiplier_76;
    StrikeMultiplier_76.setString("11269907");
    noRelatedSym_0_0.set(StrikeMultiplier_76);
    Instrument_76.insert(StrikeMultiplier_76.getString());
    FIX::StrikePrice StrikePrice_76;
    StrikePrice_76.setString("12870080");
    noRelatedSym_0_0.set(StrikePrice_76);
    Instrument_76.insert(StrikePrice_76.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_76(3);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_76);
    Instrument_76.insert(StrikePriceBoundaryMethod_76.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_76;
    StrikePriceBoundaryPrecision_76.setString("52.070000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_76);
    Instrument_76.insert(StrikePriceBoundaryPrecision_76.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_76(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_76);
    Instrument_76.insert(StrikePriceDeterminationMethod_76.getString());
    FIX::StrikeValue StrikeValue_76;
    StrikeValue_76.setString("17124149");
    noRelatedSym_0_0.set(StrikeValue_76);
    Instrument_76.insert(StrikeValue_76.getString());
    FIX::Symbol Symbol_76("STRING_1333885807");
    noRelatedSym_0_0.set(Symbol_76);
    Instrument_76.insert(Symbol_76.getString());
    FIX::SymbolSfx SymbolSfx_76("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_76);
    Instrument_76.insert(SymbolSfx_76.getString());
    FIX::TimeUnit TimeUnit_76("STRING_D");
    noRelatedSym_0_0.set(TimeUnit_76);
    Instrument_76.insert(TimeUnit_76.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_76(4);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_76);
    Instrument_76.insert(UnderlyingPriceDeterminationMethod_76.getString());
    FIX::UnitOfMeasure UnitOfMeasure_76("STRING_Bbl");
    noRelatedSym_0_0.set(UnitOfMeasure_76);
    Instrument_76.insert(UnitOfMeasure_76.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_76;
    UnitOfMeasureQty_76.setString("20985436");
    noRelatedSym_0_0.set(UnitOfMeasureQty_76);
    Instrument_76.insert(UnitOfMeasureQty_76.getString());
    FIX::ValuationMethod ValuationMethod_76("STRING_FUT");
    noRelatedSym_0_0.set(ValuationMethod_76);
    Instrument_76.insert(ValuationMethod_76.getString());
    all_values.push_back(Instrument_76);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_143;
      FIX::ComplexEventCondition ComplexEventCondition_143(1);
      noComplexEvents_0_1_0.set(ComplexEventCondition_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventCondition_143.getString());
      FIX::ComplexEventPrice ComplexEventPrice_143;
      ComplexEventPrice_143.setString("431177");
      noComplexEvents_0_1_0.set(ComplexEventPrice_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventPrice_143.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_143(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceBoundaryMethod_143.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_143;
      ComplexEventPriceBoundaryPrecision_143.setString("24.350000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceBoundaryPrecision_143.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_143(3);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventPriceTimeType_143.getString());
      FIX::ComplexEventType ComplexEventType_143(1);
      noComplexEvents_0_1_0.set(ComplexEventType_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexEventType_143.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_143;
      ComplexOptPayoutAmount_143.setString("19842908");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_143);
      ComplexEvents_NoComplexEvents_143.insert(ComplexOptPayoutAmount_143.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_143);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_298;
        FIX::ComplexEventEndDate ComplexEventEndDate_298(FIX::UTCTIMESTAMP(17, 31, 21, 19, 102008));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_298);
        ComplexEventDates_NoComplexEventDates_298.insert(ComplexEventEndDate_298.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_298(FIX::UTCTIMESTAMP(18, 44, 42, 2, 82016));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_298);
        ComplexEventDates_NoComplexEventDates_298.insert(ComplexEventStartDate_298.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_298);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_592;
          FIX::ComplexEventEndTime ComplexEventEndTime_592(FIX::UTCTIMEONLY(15, 33, 13));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_592);
          ComplexEventTimes_NoComplexEventTimes_592.insert(ComplexEventEndTime_592.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_592(FIX::UTCTIMEONLY(0, 39, 45));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_592);
          ComplexEventTimes_NoComplexEventTimes_592.insert(ComplexEventStartTime_592.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_592);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_593;
          FIX::ComplexEventEndTime ComplexEventEndTime_593(FIX::UTCTIMEONLY(22, 23, 9));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_593);
          ComplexEventTimes_NoComplexEventTimes_593.insert(ComplexEventEndTime_593.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_593(FIX::UTCTIMEONLY(9, 59, 11));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_593);
          ComplexEventTimes_NoComplexEventTimes_593.insert(ComplexEventStartTime_593.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_593);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_594;
          FIX::ComplexEventEndTime ComplexEventEndTime_594(FIX::UTCTIMEONLY(4, 42, 44));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventEndTime_594);
          ComplexEventTimes_NoComplexEventTimes_594.insert(ComplexEventEndTime_594.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_594(FIX::UTCTIMEONLY(7, 5, 49));
          noComplexEventTimes_0_0_0_3_2.set(ComplexEventStartTime_594);
          ComplexEventTimes_NoComplexEventTimes_594.insert(ComplexEventStartTime_594.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_594);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_299;
        FIX::ComplexEventEndDate ComplexEventEndDate_299(FIX::UTCTIMESTAMP(5, 24, 52, 12, 32005));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_299);
        ComplexEventDates_NoComplexEventDates_299.insert(ComplexEventEndDate_299.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_299(FIX::UTCTIMESTAMP(18, 2, 4, 7, 32002));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_299);
        ComplexEventDates_NoComplexEventDates_299.insert(ComplexEventStartDate_299.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_299);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_595;
          FIX::ComplexEventEndTime ComplexEventEndTime_595(FIX::UTCTIMEONLY(22, 32, 9));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_595);
          ComplexEventTimes_NoComplexEventTimes_595.insert(ComplexEventEndTime_595.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_595(FIX::UTCTIMEONLY(9, 0, 36));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_595);
          ComplexEventTimes_NoComplexEventTimes_595.insert(ComplexEventStartTime_595.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_595);

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_300;
        FIX::ComplexEventEndDate ComplexEventEndDate_300(FIX::UTCTIMESTAMP(21, 18, 53, 13, 32008));
        noComplexEventDates_0_0_2_2.set(ComplexEventEndDate_300);
        ComplexEventDates_NoComplexEventDates_300.insert(ComplexEventEndDate_300.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_300(FIX::UTCTIMESTAMP(8, 23, 54, 20, 42003));
        noComplexEventDates_0_0_2_2.set(ComplexEventStartDate_300);
        ComplexEventDates_NoComplexEventDates_300.insert(ComplexEventStartDate_300.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_300);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_596;
          FIX::ComplexEventEndTime ComplexEventEndTime_596(FIX::UTCTIMEONLY(19, 36, 35));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventEndTime_596);
          ComplexEventTimes_NoComplexEventTimes_596.insert(ComplexEventEndTime_596.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_596(FIX::UTCTIMEONLY(6, 19, 3));
          noComplexEventTimes_0_0_2_3_0.set(ComplexEventStartTime_596);
          ComplexEventTimes_NoComplexEventTimes_596.insert(ComplexEventStartTime_596.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_596);

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_144;
      FIX::ComplexEventCondition ComplexEventCondition_144(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventCondition_144.getString());
      FIX::ComplexEventPrice ComplexEventPrice_144;
      ComplexEventPrice_144.setString("8503512");
      noComplexEvents_0_1_1.set(ComplexEventPrice_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventPrice_144.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_144(4);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceBoundaryMethod_144.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_144;
      ComplexEventPriceBoundaryPrecision_144.setString("20.040000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceBoundaryPrecision_144.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_144(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventPriceTimeType_144.getString());
      FIX::ComplexEventType ComplexEventType_144(8);
      noComplexEvents_0_1_1.set(ComplexEventType_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexEventType_144.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_144;
      ComplexOptPayoutAmount_144.setString("12480443");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_144);
      ComplexEvents_NoComplexEvents_144.insert(ComplexOptPayoutAmount_144.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_144);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_301;
        FIX::ComplexEventEndDate ComplexEventEndDate_301(FIX::UTCTIMESTAMP(18, 22, 7, 15, 52009));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_301);
        ComplexEventDates_NoComplexEventDates_301.insert(ComplexEventEndDate_301.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_301(FIX::UTCTIMESTAMP(12, 20, 52, 0, 122017));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_301);
        ComplexEventDates_NoComplexEventDates_301.insert(ComplexEventStartDate_301.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_301);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_597;
          FIX::ComplexEventEndTime ComplexEventEndTime_597(FIX::UTCTIMEONLY(0, 42, 5));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_597);
          ComplexEventTimes_NoComplexEventTimes_597.insert(ComplexEventEndTime_597.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_597(FIX::UTCTIMEONLY(0, 16, 50));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_597);
          ComplexEventTimes_NoComplexEventTimes_597.insert(ComplexEventStartTime_597.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_597);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_598;
          FIX::ComplexEventEndTime ComplexEventEndTime_598(FIX::UTCTIMEONLY(17, 18, 52));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_598);
          ComplexEventTimes_NoComplexEventTimes_598.insert(ComplexEventEndTime_598.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_598(FIX::UTCTIMEONLY(23, 29, 56));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_598);
          ComplexEventTimes_NoComplexEventTimes_598.insert(ComplexEventStartTime_598.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_598);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_599;
          FIX::ComplexEventEndTime ComplexEventEndTime_599(FIX::UTCTIMEONLY(3, 10, 52));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_599);
          ComplexEventTimes_NoComplexEventTimes_599.insert(ComplexEventEndTime_599.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_599(FIX::UTCTIMEONLY(2, 41, 39));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_599);
          ComplexEventTimes_NoComplexEventTimes_599.insert(ComplexEventStartTime_599.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_599);

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_302;
        FIX::ComplexEventEndDate ComplexEventEndDate_302(FIX::UTCTIMESTAMP(1, 23, 34, 17, 52012));
        noComplexEventDates_0_1_2_1.set(ComplexEventEndDate_302);
        ComplexEventDates_NoComplexEventDates_302.insert(ComplexEventEndDate_302.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_302(FIX::UTCTIMESTAMP(16, 30, 12, 7, 82004));
        noComplexEventDates_0_1_2_1.set(ComplexEventStartDate_302);
        ComplexEventDates_NoComplexEventDates_302.insert(ComplexEventStartDate_302.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_302);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_600;
          FIX::ComplexEventEndTime ComplexEventEndTime_600(FIX::UTCTIMEONLY(21, 47, 38));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventEndTime_600);
          ComplexEventTimes_NoComplexEventTimes_600.insert(ComplexEventEndTime_600.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_600(FIX::UTCTIMEONLY(2, 7, 26));
          noComplexEventTimes_0_1_1_3_0.set(ComplexEventStartTime_600);
          ComplexEventTimes_NoComplexEventTimes_600.insert(ComplexEventStartTime_600.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_600);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_601;
          FIX::ComplexEventEndTime ComplexEventEndTime_601(FIX::UTCTIMEONLY(2, 28, 24));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventEndTime_601);
          ComplexEventTimes_NoComplexEventTimes_601.insert(ComplexEventEndTime_601.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_601(FIX::UTCTIMEONLY(6, 6, 36));
          noComplexEventTimes_0_1_1_3_1.set(ComplexEventStartTime_601);
          ComplexEventTimes_NoComplexEventTimes_601.insert(ComplexEventStartTime_601.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_601);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_602;
          FIX::ComplexEventEndTime ComplexEventEndTime_602(FIX::UTCTIMEONLY(23, 59, 22));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventEndTime_602);
          ComplexEventTimes_NoComplexEventTimes_602.insert(ComplexEventEndTime_602.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_602(FIX::UTCTIMEONLY(16, 11, 59));
          noComplexEventTimes_0_1_1_3_2.set(ComplexEventStartTime_602);
          ComplexEventTimes_NoComplexEventTimes_602.insert(ComplexEventStartTime_602.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_602);

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_303;
        FIX::ComplexEventEndDate ComplexEventEndDate_303(FIX::UTCTIMESTAMP(21, 11, 15, 20, 82008));
        noComplexEventDates_0_1_2_2.set(ComplexEventEndDate_303);
        ComplexEventDates_NoComplexEventDates_303.insert(ComplexEventEndDate_303.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_303(FIX::UTCTIMESTAMP(9, 31, 45, 15, 32009));
        noComplexEventDates_0_1_2_2.set(ComplexEventStartDate_303);
        ComplexEventDates_NoComplexEventDates_303.insert(ComplexEventStartDate_303.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_303);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_603;
          FIX::ComplexEventEndTime ComplexEventEndTime_603(FIX::UTCTIMEONLY(11, 17, 30));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventEndTime_603);
          ComplexEventTimes_NoComplexEventTimes_603.insert(ComplexEventEndTime_603.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_603(FIX::UTCTIMEONLY(23, 36, 32));
          noComplexEventTimes_0_1_2_3_0.set(ComplexEventStartTime_603);
          ComplexEventTimes_NoComplexEventTimes_603.insert(ComplexEventStartTime_603.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_603);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_604;
          FIX::ComplexEventEndTime ComplexEventEndTime_604(FIX::UTCTIMEONLY(4, 23, 21));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventEndTime_604);
          ComplexEventTimes_NoComplexEventTimes_604.insert(ComplexEventEndTime_604.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_604(FIX::UTCTIMEONLY(3, 24, 12));
          noComplexEventTimes_0_1_2_3_1.set(ComplexEventStartTime_604);
          ComplexEventTimes_NoComplexEventTimes_604.insert(ComplexEventStartTime_604.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_604);

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_145;
      FIX::ComplexEventCondition ComplexEventCondition_145(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventCondition_145.getString());
      FIX::ComplexEventPrice ComplexEventPrice_145;
      ComplexEventPrice_145.setString("5307733");
      noComplexEvents_0_1_2.set(ComplexEventPrice_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventPrice_145.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_145(1);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceBoundaryMethod_145.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_145;
      ComplexEventPriceBoundaryPrecision_145.setString("25.870000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceBoundaryPrecision_145.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_145(2);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventPriceTimeType_145.getString());
      FIX::ComplexEventType ComplexEventType_145(4);
      noComplexEvents_0_1_2.set(ComplexEventType_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexEventType_145.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_145;
      ComplexOptPayoutAmount_145.setString("18469827");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_145);
      ComplexEvents_NoComplexEvents_145.insert(ComplexOptPayoutAmount_145.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_145);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_304;
        FIX::ComplexEventEndDate ComplexEventEndDate_304(FIX::UTCTIMESTAMP(15, 55, 19, 21, 92002));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_304);
        ComplexEventDates_NoComplexEventDates_304.insert(ComplexEventEndDate_304.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_304(FIX::UTCTIMESTAMP(7, 17, 10, 27, 52014));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_304);
        ComplexEventDates_NoComplexEventDates_304.insert(ComplexEventStartDate_304.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_304);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_605;
          FIX::ComplexEventEndTime ComplexEventEndTime_605(FIX::UTCTIMEONLY(6, 7, 40));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_605);
          ComplexEventTimes_NoComplexEventTimes_605.insert(ComplexEventEndTime_605.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_605(FIX::UTCTIMEONLY(10, 57, 23));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_605);
          ComplexEventTimes_NoComplexEventTimes_605.insert(ComplexEventStartTime_605.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_605);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_606;
          FIX::ComplexEventEndTime ComplexEventEndTime_606(FIX::UTCTIMEONLY(23, 38, 6));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_606);
          ComplexEventTimes_NoComplexEventTimes_606.insert(ComplexEventEndTime_606.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_606(FIX::UTCTIMEONLY(17, 50, 59));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_606);
          ComplexEventTimes_NoComplexEventTimes_606.insert(ComplexEventStartTime_606.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_606);

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_305;
        FIX::ComplexEventEndDate ComplexEventEndDate_305(FIX::UTCTIMESTAMP(9, 46, 8, 23, 72002));
        noComplexEventDates_0_2_2_1.set(ComplexEventEndDate_305);
        ComplexEventDates_NoComplexEventDates_305.insert(ComplexEventEndDate_305.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_305(FIX::UTCTIMESTAMP(5, 25, 20, 1, 102017));
        noComplexEventDates_0_2_2_1.set(ComplexEventStartDate_305);
        ComplexEventDates_NoComplexEventDates_305.insert(ComplexEventStartDate_305.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_305);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_607;
          FIX::ComplexEventEndTime ComplexEventEndTime_607(FIX::UTCTIMEONLY(17, 43, 37));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventEndTime_607);
          ComplexEventTimes_NoComplexEventTimes_607.insert(ComplexEventEndTime_607.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_607(FIX::UTCTIMEONLY(10, 34, 47));
          noComplexEventTimes_0_2_1_3_0.set(ComplexEventStartTime_607);
          ComplexEventTimes_NoComplexEventTimes_607.insert(ComplexEventStartTime_607.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_607);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_608;
          FIX::ComplexEventEndTime ComplexEventEndTime_608(FIX::UTCTIMEONLY(13, 18, 2));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventEndTime_608);
          ComplexEventTimes_NoComplexEventTimes_608.insert(ComplexEventEndTime_608.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_608(FIX::UTCTIMEONLY(15, 52, 53));
          noComplexEventTimes_0_2_1_3_1.set(ComplexEventStartTime_608);
          ComplexEventTimes_NoComplexEventTimes_608.insert(ComplexEventStartTime_608.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_608);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_609;
          FIX::ComplexEventEndTime ComplexEventEndTime_609(FIX::UTCTIMEONLY(14, 39, 25));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventEndTime_609);
          ComplexEventTimes_NoComplexEventTimes_609.insert(ComplexEventEndTime_609.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_609(FIX::UTCTIMEONLY(1, 26, 31));
          noComplexEventTimes_0_2_1_3_2.set(ComplexEventStartTime_609);
          ComplexEventTimes_NoComplexEventTimes_609.insert(ComplexEventStartTime_609.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_609);

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_306;
        FIX::ComplexEventEndDate ComplexEventEndDate_306(FIX::UTCTIMESTAMP(7, 52, 24, 1, 42000));
        noComplexEventDates_0_2_2_2.set(ComplexEventEndDate_306);
        ComplexEventDates_NoComplexEventDates_306.insert(ComplexEventEndDate_306.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_306(FIX::UTCTIMESTAMP(0, 44, 10, 17, 72006));
        noComplexEventDates_0_2_2_2.set(ComplexEventStartDate_306);
        ComplexEventDates_NoComplexEventDates_306.insert(ComplexEventStartDate_306.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_306);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_610;
          FIX::ComplexEventEndTime ComplexEventEndTime_610(FIX::UTCTIMEONLY(13, 2, 33));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventEndTime_610);
          ComplexEventTimes_NoComplexEventTimes_610.insert(ComplexEventEndTime_610.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_610(FIX::UTCTIMEONLY(6, 25, 29));
          noComplexEventTimes_0_2_2_3_0.set(ComplexEventStartTime_610);
          ComplexEventTimes_NoComplexEventTimes_610.insert(ComplexEventStartTime_610.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_610);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_611;
          FIX::ComplexEventEndTime ComplexEventEndTime_611(FIX::UTCTIMEONLY(19, 1, 56));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventEndTime_611);
          ComplexEventTimes_NoComplexEventTimes_611.insert(ComplexEventEndTime_611.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_611(FIX::UTCTIMEONLY(14, 22, 52));
          noComplexEventTimes_0_2_2_3_1.set(ComplexEventStartTime_611);
          ComplexEventTimes_NoComplexEventTimes_611.insert(ComplexEventStartTime_611.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_611);

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_147;
      FIX::EventDate EventDate_147("LOCALMKTDATE_198585118");
      noEvents_0_1_0.set(EventDate_147);
      EvntGrp_NoEvents_147.insert(EventDate_147.getString());
      FIX::EventPx EventPx_147;
      EventPx_147.setString("15325549");
      noEvents_0_1_0.set(EventPx_147);
      EvntGrp_NoEvents_147.insert(EventPx_147.getString());
      FIX::EventText EventText_147("STRING_506488297");
      noEvents_0_1_0.set(EventText_147);
      EvntGrp_NoEvents_147.insert(EventText_147.getString());
      FIX::EventTime EventTime_147(FIX::UTCTIMESTAMP(19, 38, 52, 27, 32009));
      noEvents_0_1_0.set(EventTime_147);
      EvntGrp_NoEvents_147.insert(EventTime_147.getString());
      FIX::EventType EventType_147(5);
      noEvents_0_1_0.set(EventType_147);
      EvntGrp_NoEvents_147.insert(EventType_147.getString());
      all_values.push_back(EvntGrp_NoEvents_147);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_145;
      FIX::InstrumentPartyID InstrumentPartyID_145("STRING_166257751");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_145);
      InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyID_145.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_145('2');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_145);
      InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyIDSource_145.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_145(1281435686);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_145);
      InstrumentParties_NoInstrumentParties_145.insert(InstrumentPartyRole_145.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_145);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291;
        FIX::InstrumentPartySubID InstrumentPartySubID_291("STRING_1267005051");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_291);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291.insert(InstrumentPartySubID_291.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_291(1657319279);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_291);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291.insert(InstrumentPartySubIDType_291.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_146;
      FIX::InstrumentPartyID InstrumentPartyID_146("STRING_1229646837");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_146);
      InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyID_146.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_146('1');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_146);
      InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyIDSource_146.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_146(1493366477);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_146);
      InstrumentParties_NoInstrumentParties_146.insert(InstrumentPartyRole_146.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_146);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292;
        FIX::InstrumentPartySubID InstrumentPartySubID_292("STRING_1841398492");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_292);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292.insert(InstrumentPartySubID_292.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_292(917894896);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_292);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292.insert(InstrumentPartySubIDType_292.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293;
        FIX::InstrumentPartySubID InstrumentPartySubID_293("STRING_92043019");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_293);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293.insert(InstrumentPartySubID_293.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_293(244865861);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_293);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293.insert(InstrumentPartySubIDType_293.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294;
        FIX::InstrumentPartySubID InstrumentPartySubID_294("STRING_1794474997");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_294);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294.insert(InstrumentPartySubID_294.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_294(943968250);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_294);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294.insert(InstrumentPartySubIDType_294.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_147;
      FIX::InstrumentPartyID InstrumentPartyID_147("STRING_2077639683");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyID_147.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_147('1');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyIDSource_147.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_147(848579303);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_147);
      InstrumentParties_NoInstrumentParties_147.insert(InstrumentPartyRole_147.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_147);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295;
        FIX::InstrumentPartySubID InstrumentPartySubID_295("STRING_1112348689");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_295);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295.insert(InstrumentPartySubID_295.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_295(1355067601);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_295);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295.insert(InstrumentPartySubIDType_295.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296;
        FIX::InstrumentPartySubID InstrumentPartySubID_296("STRING_1148109200");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_296);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296.insert(InstrumentPartySubID_296.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_296(448337340);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_296);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296.insert(InstrumentPartySubIDType_296.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_296);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297;
        FIX::InstrumentPartySubID InstrumentPartySubID_297("STRING_245594431");
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubID_297);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297.insert(InstrumentPartySubID_297.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_297(1306196413);
        noInstrumentPartySubIDs_0_2_2_2.set(InstrumentPartySubIDType_297);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297.insert(InstrumentPartySubIDType_297.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_297);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_158;
      FIX::SecurityAltID SecurityAltID_158("STRING_316818825");
      noSecurityAltID_0_1_0.set(SecurityAltID_158);
      SecAltIDGrp_NoSecurityAltID_158.insert(SecurityAltID_158.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_158("STRING_789871748");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_158);
      SecAltIDGrp_NoSecurityAltID_158.insert(SecurityAltIDSource_158.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_158);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_159;
      FIX::SecurityAltID SecurityAltID_159("STRING_880655284");
      noSecurityAltID_0_1_1.set(SecurityAltID_159);
      SecAltIDGrp_NoSecurityAltID_159.insert(SecurityAltID_159.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_159("STRING_2121667841");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_159);
      SecAltIDGrp_NoSecurityAltID_159.insert(SecurityAltIDSource_159.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_159);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_160;
      FIX::SecurityAltID SecurityAltID_160("STRING_956129499");
      noSecurityAltID_0_1_2.set(SecurityAltID_160);
      SecAltIDGrp_NoSecurityAltID_160.insert(SecurityAltID_160.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_160("STRING_1089480593");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_160);
      SecAltIDGrp_NoSecurityAltID_160.insert(SecurityAltIDSource_160.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_160);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_152;
    FIX::SecurityXML SecurityXML_153("XMLDATA_1255619879");
    noRelatedSym_0_0.set(SecurityXML_153);
    FIX::SecurityXMLLen SecurityXMLLen_76(567895312);
    noRelatedSym_0_0.set(SecurityXMLLen_76);
    FIX::SecurityXMLSchema SecurityXMLSchema_76("STRING_209001996");
    noRelatedSym_0_0.set(SecurityXMLSchema_76);
    SecurityXML_152.insert(SecurityXMLSchema_76.getString());
    all_values.push_back(SecurityXML_152);

    // InstrumentExtension
    multiset<string> InstrumentExtension_13;
    FIX::DeliveryForm DeliveryForm_13(2);
    noRelatedSym_0_0.set(DeliveryForm_13);
    InstrumentExtension_13.insert(DeliveryForm_13.getString());
    FIX::PctAtRisk PctAtRisk_13;
    PctAtRisk_13.setString("21.490000");
    noRelatedSym_0_0.set(PctAtRisk_13);
    InstrumentExtension_13.insert(PctAtRisk_13.getString());
    all_values.push_back(InstrumentExtension_13);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_27;
      FIX::InstrAttribType InstrAttribType_27(1);
      noInstrAttrib_0_1_0.set(InstrAttribType_27);
      AttrbGrp_NoInstrAttrib_27.insert(InstrAttribType_27.getString());
      FIX::InstrAttribValue InstrAttribValue_27("STRING_1597126268");
      noInstrAttrib_0_1_0.set(InstrAttribValue_27);
      AttrbGrp_NoInstrAttrib_27.insert(InstrAttribValue_27.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_27);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_28;
      FIX::InstrAttribType InstrAttribType_28(5);
      noInstrAttrib_0_1_1.set(InstrAttribType_28);
      AttrbGrp_NoInstrAttrib_28.insert(InstrAttribType_28.getString());
      FIX::InstrAttribValue InstrAttribValue_28("STRING_1029233236");
      noInstrAttrib_0_1_1.set(InstrAttribValue_28);
      AttrbGrp_NoInstrAttrib_28.insert(InstrAttribValue_28.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_28);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_29;
      FIX::InstrAttribType InstrAttribType_29(28);
      noInstrAttrib_0_1_2.set(InstrAttribType_29);
      AttrbGrp_NoInstrAttrib_29.insert(InstrAttribType_29.getString());
      FIX::InstrAttribValue InstrAttribValue_29("STRING_1391495175");
      noInstrAttrib_0_1_2.set(InstrAttribValue_29);
      AttrbGrp_NoInstrAttrib_29.insert(InstrAttribValue_29.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_29);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_0;
      FIX::LegSettlType LegSettlType_21('4');
      noLegs_0_1_0.set(LegSettlType_21);
      SecLstUpdRelSymsLegGrp_NoLegs_0.insert(LegSettlType_21.getString());
      FIX::LegSwapType LegSwapType_21(5);
      noLegs_0_1_0.set(LegSwapType_21);
      SecLstUpdRelSymsLegGrp_NoLegs_0.insert(LegSwapType_21.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_0);

      // InstrumentLeg
      multiset<string> InstrumentLeg_109;
      FIX::EncodedLegIssuer EncodedLegIssuer_109("DATA_256018318");
      noLegs_0_1_0.set(EncodedLegIssuer_109);
      InstrumentLeg_109.insert(EncodedLegIssuer_109.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_109(1334233193);
      noLegs_0_1_0.set(EncodedLegIssuerLen_109);
      InstrumentLeg_109.insert(EncodedLegIssuerLen_109.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_109("DATA_1450392364");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_109);
      InstrumentLeg_109.insert(EncodedLegSecurityDesc_109.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_109(1368367007);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_109);
      InstrumentLeg_109.insert(EncodedLegSecurityDescLen_109.getString());
      FIX::LegCFICode LegCFICode_109("STRING_541817146");
      noLegs_0_1_0.set(LegCFICode_109);
      InstrumentLeg_109.insert(LegCFICode_109.getString());
      FIX::LegContractMultiplier LegContractMultiplier_109;
      LegContractMultiplier_109.setString("4510179");
      noLegs_0_1_0.set(LegContractMultiplier_109);
      InstrumentLeg_109.insert(LegContractMultiplier_109.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_109(1816704347);
      noLegs_0_1_0.set(LegContractMultiplierUnit_109);
      InstrumentLeg_109.insert(LegContractMultiplierUnit_109.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_109("MONTHYEAR_787411577");
      noLegs_0_1_0.set(LegContractSettlMonth_109);
      InstrumentLeg_109.insert(LegContractSettlMonth_109.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_109("COUNTRY_1757214330");
      noLegs_0_1_0.set(LegCountryOfIssue_109);
      InstrumentLeg_109.insert(LegCountryOfIssue_109.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_109("LOCALMKTDATE_229983219");
      noLegs_0_1_0.set(LegCouponPaymentDate_109);
      InstrumentLeg_109.insert(LegCouponPaymentDate_109.getString());
      FIX::LegCouponRate LegCouponRate_109;
      LegCouponRate_109.setString("4.020000");
      noLegs_0_1_0.set(LegCouponRate_109);
      InstrumentLeg_109.insert(LegCouponRate_109.getString());
      FIX::LegCreditRating LegCreditRating_109("STRING_399602430");
      noLegs_0_1_0.set(LegCreditRating_109);
      InstrumentLeg_109.insert(LegCreditRating_109.getString());
      FIX::LegCurrency LegCurrency_109("CAN");
      noLegs_0_1_0.set(LegCurrency_109);
      InstrumentLeg_109.insert(LegCurrency_109.getString());
      FIX::LegDatedDate LegDatedDate_109("LOCALMKTDATE_1355731929");
      noLegs_0_1_0.set(LegDatedDate_109);
      InstrumentLeg_109.insert(LegDatedDate_109.getString());
      FIX::LegExerciseStyle LegExerciseStyle_109(52635448);
      noLegs_0_1_0.set(LegExerciseStyle_109);
      InstrumentLeg_109.insert(LegExerciseStyle_109.getString());
      FIX::LegFactor LegFactor_109;
      LegFactor_109.setString("1865508");
      noLegs_0_1_0.set(LegFactor_109);
      InstrumentLeg_109.insert(LegFactor_109.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_109(1923627242);
      noLegs_0_1_0.set(LegFlowScheduleType_109);
      InstrumentLeg_109.insert(LegFlowScheduleType_109.getString());
      FIX::LegInstrRegistry LegInstrRegistry_109("STRING_261637444");
      noLegs_0_1_0.set(LegInstrRegistry_109);
      InstrumentLeg_109.insert(LegInstrRegistry_109.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_109("LOCALMKTDATE_952006337");
      noLegs_0_1_0.set(LegInterestAccrualDate_109);
      InstrumentLeg_109.insert(LegInterestAccrualDate_109.getString());
      FIX::LegIssueDate LegIssueDate_109("LOCALMKTDATE_1573685743");
      noLegs_0_1_0.set(LegIssueDate_109);
      InstrumentLeg_109.insert(LegIssueDate_109.getString());
      FIX::LegIssuer LegIssuer_109("STRING_1714351914");
      noLegs_0_1_0.set(LegIssuer_109);
      InstrumentLeg_109.insert(LegIssuer_109.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_109("STRING_1063344677");
      noLegs_0_1_0.set(LegLocaleOfIssue_109);
      InstrumentLeg_109.insert(LegLocaleOfIssue_109.getString());
      FIX::LegMaturityDate LegMaturityDate_109("LOCALMKTDATE_1023328363");
      noLegs_0_1_0.set(LegMaturityDate_109);
      InstrumentLeg_109.insert(LegMaturityDate_109.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_109("MONTHYEAR_713497581");
      noLegs_0_1_0.set(LegMaturityMonthYear_109);
      InstrumentLeg_109.insert(LegMaturityMonthYear_109.getString());
      FIX::LegMaturityTime LegMaturityTime_109("TZTIMEONLY_2092577914");
      noLegs_0_1_0.set(LegMaturityTime_109);
      InstrumentLeg_109.insert(LegMaturityTime_109.getString());
      FIX::LegOptAttribute LegOptAttribute_109('5');
      noLegs_0_1_0.set(LegOptAttribute_109);
      InstrumentLeg_109.insert(LegOptAttribute_109.getString());
      FIX::LegOptionRatio LegOptionRatio_109;
      LegOptionRatio_109.setString("21049927");
      noLegs_0_1_0.set(LegOptionRatio_109);
      InstrumentLeg_109.insert(LegOptionRatio_109.getString());
      FIX::LegPool LegPool_109("STRING_621318851");
      noLegs_0_1_0.set(LegPool_109);
      InstrumentLeg_109.insert(LegPool_109.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_109("STRING_1050667892");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_109);
      InstrumentLeg_109.insert(LegPriceUnitOfMeasure_109.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_109;
      LegPriceUnitOfMeasureQty_109.setString("12791603");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_109);
      InstrumentLeg_109.insert(LegPriceUnitOfMeasureQty_109.getString());
      FIX::LegProduct LegProduct_109(877337170);
      noLegs_0_1_0.set(LegProduct_109);
      InstrumentLeg_109.insert(LegProduct_109.getString());
      FIX::LegPutOrCall LegPutOrCall_109(237417437);
      noLegs_0_1_0.set(LegPutOrCall_109);
      InstrumentLeg_109.insert(LegPutOrCall_109.getString());
      FIX::LegRatioQty LegRatioQty_109;
      LegRatioQty_109.setString("5820690");
      noLegs_0_1_0.set(LegRatioQty_109);
      InstrumentLeg_109.insert(LegRatioQty_109.getString());
      FIX::LegRedemptionDate LegRedemptionDate_109("LOCALMKTDATE_98220529");
      noLegs_0_1_0.set(LegRedemptionDate_109);
      InstrumentLeg_109.insert(LegRedemptionDate_109.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_109("STRING_779234583");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_109);
      InstrumentLeg_109.insert(LegRepoCollateralSecurityType_109.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_109;
      LegRepurchaseRate_109.setString("69.530000");
      noLegs_0_1_0.set(LegRepurchaseRate_109);
      InstrumentLeg_109.insert(LegRepurchaseRate_109.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_109(1914924877);
      noLegs_0_1_0.set(LegRepurchaseTerm_109);
      InstrumentLeg_109.insert(LegRepurchaseTerm_109.getString());
      FIX::LegSecurityDesc LegSecurityDesc_109("STRING_1566646160");
      noLegs_0_1_0.set(LegSecurityDesc_109);
      InstrumentLeg_109.insert(LegSecurityDesc_109.getString());
      FIX::LegSecurityExchange LegSecurityExchange_109("EXCHANGE_642817635");
      noLegs_0_1_0.set(LegSecurityExchange_109);
      InstrumentLeg_109.insert(LegSecurityExchange_109.getString());
      FIX::LegSecurityID LegSecurityID_109("STRING_2144908096");
      noLegs_0_1_0.set(LegSecurityID_109);
      InstrumentLeg_109.insert(LegSecurityID_109.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_109("STRING_523392914");
      noLegs_0_1_0.set(LegSecurityIDSource_109);
      InstrumentLeg_109.insert(LegSecurityIDSource_109.getString());
      FIX::LegSecuritySubType LegSecuritySubType_109("STRING_1042420065");
      noLegs_0_1_0.set(LegSecuritySubType_109);
      InstrumentLeg_109.insert(LegSecuritySubType_109.getString());
      FIX::LegSecurityType LegSecurityType_109("STRING_1108062951");
      noLegs_0_1_0.set(LegSecurityType_109);
      InstrumentLeg_109.insert(LegSecurityType_109.getString());
      FIX::LegSide LegSide_109('1');
      noLegs_0_1_0.set(LegSide_109);
      InstrumentLeg_109.insert(LegSide_109.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_109("STRING_250668346");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_109);
      InstrumentLeg_109.insert(LegStateOrProvinceOfIssue_109.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_109("JPY");
      noLegs_0_1_0.set(LegStrikeCurrency_109);
      InstrumentLeg_109.insert(LegStrikeCurrency_109.getString());
      FIX::LegStrikePrice LegStrikePrice_109;
      LegStrikePrice_109.setString("268119");
      noLegs_0_1_0.set(LegStrikePrice_109);
      InstrumentLeg_109.insert(LegStrikePrice_109.getString());
      FIX::LegSymbol LegSymbol_109("STRING_1422335843");
      noLegs_0_1_0.set(LegSymbol_109);
      InstrumentLeg_109.insert(LegSymbol_109.getString());
      FIX::LegSymbolSfx LegSymbolSfx_109("STRING_592881025");
      noLegs_0_1_0.set(LegSymbolSfx_109);
      InstrumentLeg_109.insert(LegSymbolSfx_109.getString());
      FIX::LegTimeUnit LegTimeUnit_109("STRING_1600497684");
      noLegs_0_1_0.set(LegTimeUnit_109);
      InstrumentLeg_109.insert(LegTimeUnit_109.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_109("STRING_989204110");
      noLegs_0_1_0.set(LegUnitOfMeasure_109);
      InstrumentLeg_109.insert(LegUnitOfMeasure_109.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_109;
      LegUnitOfMeasureQty_109.setString("16562257");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_109);
      InstrumentLeg_109.insert(LegUnitOfMeasureQty_109.getString());
      all_values.push_back(InstrumentLeg_109);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_194;
        FIX::LegSecurityAltID LegSecurityAltID_194("STRING_1702701691");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_194);
        LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltID_194.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_194("STRING_1601319969");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_194);
        LegSecAltIDGrp_NoLegSecurityAltID_194.insert(LegSecurityAltIDSource_194.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_194);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_195;
        FIX::LegSecurityAltID LegSecurityAltID_195("STRING_1041356402");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_195);
        LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltID_195.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_195("STRING_1660210799");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_195);
        LegSecAltIDGrp_NoLegSecurityAltID_195.insert(LegSecurityAltIDSource_195.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_195);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_196;
        FIX::LegSecurityAltID LegSecurityAltID_196("STRING_75155172");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltID_196);
        LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltID_196.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_196("STRING_2092024295");
        noLegSecurityAltID_0_0_2_2.set(LegSecurityAltIDSource_196);
        LegSecAltIDGrp_NoLegSecurityAltID_196.insert(LegSecurityAltIDSource_196.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_196);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_14;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_14("JPY");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurveCurrency_14.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_14("STRING_181958084");
      noLegs_0_1_0.set(LegBenchmarkCurveName_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurveName_14.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_14("STRING_1373956507");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkCurvePoint_14.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_14;
      LegBenchmarkPrice_14.setString("10507128");
      noLegs_0_1_0.set(LegBenchmarkPrice_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkPrice_14.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_14(961192668);
      noLegs_0_1_0.set(LegBenchmarkPriceType_14);
      LegBenchmarkCurveData_14.insert(LegBenchmarkPriceType_14.getString());
      all_values.push_back(LegBenchmarkCurveData_14);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_50;
        FIX::LegStipulationType LegStipulationType_50("STRING_818154101");
        noLegStipulations_0_0_2_0.set(LegStipulationType_50);
        LegStipulations_NoLegStipulations_50.insert(LegStipulationType_50.getString());
        FIX::LegStipulationValue LegStipulationValue_50("STRING_380355180");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_50);
        LegStipulations_NoLegStipulations_50.insert(LegStipulationValue_50.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_50);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_51;
        FIX::LegStipulationType LegStipulationType_51("STRING_902377447");
        noLegStipulations_0_0_2_1.set(LegStipulationType_51);
        LegStipulations_NoLegStipulations_51.insert(LegStipulationType_51.getString());
        FIX::LegStipulationValue LegStipulationValue_51("STRING_815578549");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_51);
        LegStipulations_NoLegStipulations_51.insert(LegStipulationValue_51.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_51);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_14;
    FIX::ExpirationCycle ExpirationCycle_15(0);
    noRelatedSym_0_0.set(ExpirationCycle_15);
    BaseTradingRules_14.insert(ExpirationCycle_15.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_14(0);
    noRelatedSym_0_0.set(ImpliedMarketIndicator_14);
    BaseTradingRules_14.insert(ImpliedMarketIndicator_14.getString());
    FIX::MaxPriceVariation MaxPriceVariation_14;
    MaxPriceVariation_14.setString("19236415");
    noRelatedSym_0_0.set(MaxPriceVariation_14);
    BaseTradingRules_14.insert(MaxPriceVariation_14.getString());
    FIX::MaxTradeVol MaxTradeVol_14;
    MaxTradeVol_14.setString("3580719");
    noRelatedSym_0_0.set(MaxTradeVol_14);
    BaseTradingRules_14.insert(MaxTradeVol_14.getString());
    FIX::MinTradeVol MinTradeVol_14;
    MinTradeVol_14.setString("479822");
    noRelatedSym_0_0.set(MinTradeVol_14);
    BaseTradingRules_14.insert(MinTradeVol_14.getString());
    FIX::MultilegModel MultilegModel_16(0);
    noRelatedSym_0_0.set(MultilegModel_16);
    BaseTradingRules_14.insert(MultilegModel_16.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_16(0);
    noRelatedSym_0_0.set(MultilegPriceMethod_16);
    BaseTradingRules_14.insert(MultilegPriceMethod_16.getString());
    FIX::PriceType PriceType_47(13);
    noRelatedSym_0_0.set(PriceType_47);
    BaseTradingRules_14.insert(PriceType_47.getString());
    FIX::RoundLot RoundLot_14;
    RoundLot_14.setString("2117084");
    noRelatedSym_0_0.set(RoundLot_14);
    BaseTradingRules_14.insert(RoundLot_14.getString());
    FIX::TradingCurrency TradingCurrency_14("CAN");
    noRelatedSym_0_0.set(TradingCurrency_14);
    BaseTradingRules_14.insert(TradingCurrency_14.getString());
    all_values.push_back(BaseTradingRules_14);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_31;
      FIX::LotType LotType_35('2');
      noLotTypeRules_0_1_0.set(LotType_35);
      LotTypeRules_NoLotTypeRules_31.insert(LotType_35.getString());
      FIX::MinLotSize MinLotSize_31;
      MinLotSize_31.setString("41505");
      noLotTypeRules_0_1_0.set(MinLotSize_31);
      LotTypeRules_NoLotTypeRules_31.insert(MinLotSize_31.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_31);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_32;
      FIX::LotType LotType_36('4');
      noLotTypeRules_0_1_1.set(LotType_36);
      LotTypeRules_NoLotTypeRules_32.insert(LotType_36.getString());
      FIX::MinLotSize MinLotSize_32;
      MinLotSize_32.setString("17018896");
      noLotTypeRules_0_1_1.set(MinLotSize_32);
      LotTypeRules_NoLotTypeRules_32.insert(MinLotSize_32.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_32);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_14;
    FIX::HighLimitPrice HighLimitPrice_14;
    HighLimitPrice_14.setString("10455069");
    noRelatedSym_0_0.set(HighLimitPrice_14);
    PriceLimits_14.insert(HighLimitPrice_14.getString());
    FIX::LowLimitPrice LowLimitPrice_14;
    LowLimitPrice_14.setString("2688577");
    noRelatedSym_0_0.set(LowLimitPrice_14);
    PriceLimits_14.insert(LowLimitPrice_14.getString());
    FIX::PriceLimitType PriceLimitType_14(2);
    noRelatedSym_0_0.set(PriceLimitType_14);
    PriceLimits_14.insert(PriceLimitType_14.getString());
    FIX::TradingReferencePrice TradingReferencePrice_14;
    TradingReferencePrice_14.setString("9900476");
    noRelatedSym_0_0.set(TradingReferencePrice_14);
    PriceLimits_14.insert(TradingReferencePrice_14.getString());
    all_values.push_back(PriceLimits_14);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_24;
      FIX::EndTickPriceRange EndTickPriceRange_24;
      EndTickPriceRange_24.setString("5820535");
      noTickRules_0_1_0.set(EndTickPriceRange_24);
      TickRules_NoTickRules_24.insert(EndTickPriceRange_24.getString());
      FIX::StartTickPriceRange StartTickPriceRange_24;
      StartTickPriceRange_24.setString("11720057");
      noTickRules_0_1_0.set(StartTickPriceRange_24);
      TickRules_NoTickRules_24.insert(StartTickPriceRange_24.getString());
      FIX::TickIncrement TickIncrement_24;
      TickIncrement_24.setString("2872180");
      noTickRules_0_1_0.set(TickIncrement_24);
      TickRules_NoTickRules_24.insert(TickIncrement_24.getString());
      FIX::TickRuleType TickRuleType_24(3);
      noTickRules_0_1_0.set(TickRuleType_24);
      TickRules_NoTickRules_24.insert(TickRuleType_24.getString());
      all_values.push_back(TickRules_NoTickRules_24);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_25;
      FIX::EndTickPriceRange EndTickPriceRange_25;
      EndTickPriceRange_25.setString("21331983");
      noTickRules_0_1_1.set(EndTickPriceRange_25);
      TickRules_NoTickRules_25.insert(EndTickPriceRange_25.getString());
      FIX::StartTickPriceRange StartTickPriceRange_25;
      StartTickPriceRange_25.setString("5467778");
      noTickRules_0_1_1.set(StartTickPriceRange_25);
      TickRules_NoTickRules_25.insert(StartTickPriceRange_25.getString());
      FIX::TickIncrement TickIncrement_25;
      TickIncrement_25.setString("3034368");
      noTickRules_0_1_1.set(TickIncrement_25);
      TickRules_NoTickRules_25.insert(TickIncrement_25.getString());
      FIX::TickRuleType TickRuleType_25(1);
      noTickRules_0_1_1.set(TickRuleType_25);
      TickRules_NoTickRules_25.insert(TickRuleType_25.getString());
      all_values.push_back(TickRules_NoTickRules_25);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_26;
      FIX::EndTickPriceRange EndTickPriceRange_26;
      EndTickPriceRange_26.setString("14491553");
      noTickRules_0_1_2.set(EndTickPriceRange_26);
      TickRules_NoTickRules_26.insert(EndTickPriceRange_26.getString());
      FIX::StartTickPriceRange StartTickPriceRange_26;
      StartTickPriceRange_26.setString("11190154");
      noTickRules_0_1_2.set(StartTickPriceRange_26);
      TickRules_NoTickRules_26.insert(StartTickPriceRange_26.getString());
      FIX::TickIncrement TickIncrement_26;
      TickIncrement_26.setString("12698180");
      noTickRules_0_1_2.set(TickIncrement_26);
      TickRules_NoTickRules_26.insert(TickIncrement_26.getString());
      FIX::TickRuleType TickRuleType_26(4);
      noTickRules_0_1_2.set(TickRuleType_26);
      TickRules_NoTickRules_26.insert(TickRuleType_26.getString());
      all_values.push_back(TickRules_NoTickRules_26);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_28;
      FIX::NestedInstrAttribType NestedInstrAttribType_28(1627889972);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_28);
      NestedInstrumentAttribute_NoNestedInstrAttrib_28.insert(NestedInstrAttribType_28.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_28("STRING_1294451414");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_28);
      NestedInstrumentAttribute_NoNestedInstrAttrib_28.insert(NestedInstrAttribValue_28.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_28);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_29;
      FIX::NestedInstrAttribType NestedInstrAttribType_29(1832029538);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_29);
      NestedInstrumentAttribute_NoNestedInstrAttrib_29.insert(NestedInstrAttribType_29.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_29("STRING_1626836617");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_29);
      NestedInstrumentAttribute_NoNestedInstrAttrib_29.insert(NestedInstrAttribValue_29.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_29);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_30;
      FIX::NestedInstrAttribType NestedInstrAttribType_30(1369245565);
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribType_30);
      NestedInstrumentAttribute_NoNestedInstrAttrib_30.insert(NestedInstrAttribType_30.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_30("STRING_2043737984");
      noNestedInstrAttrib_0_1_2.set(NestedInstrAttribValue_30);
      NestedInstrumentAttribute_NoNestedInstrAttrib_30.insert(NestedInstrAttribValue_30.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_30);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_24;
      FIX::TradingSessionID TradingSessionID_88("STRING_5");
      noTradingSessionRules_0_1_0.set(TradingSessionID_88);
      TradingSessionRulesGrp_NoTradingSessionRules_24.insert(TradingSessionID_88.getString());
      FIX::TradingSessionSubID TradingSessionSubID_88("STRING_5");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_88);
      TradingSessionRulesGrp_NoTradingSessionRules_24.insert(TradingSessionSubID_88.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_24);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_52;
        FIX::ExecInstValue ExecInstValue_52('9');
        noExecInstRules_0_0_2_0.set(ExecInstValue_52);
        ExecInstRules_NoExecInstRules_52.insert(ExecInstValue_52.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_52);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_53;
        FIX::ExecInstValue ExecInstValue_53('1');
        noExecInstRules_0_0_2_1.set(ExecInstValue_53);
        ExecInstRules_NoExecInstRules_53.insert(ExecInstValue_53.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_53);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_48;
        FIX::MDBookType MDBookType_50(1);
        noMDFeedTypes_0_0_2_0.set(MDBookType_50);
        MarketDataFeedTypes_NoMDFeedTypes_48.insert(MDBookType_50.getString());
        FIX::MDFeedType MDFeedType_50("STRING_2122155243");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_50);
        MarketDataFeedTypes_NoMDFeedTypes_48.insert(MDFeedType_50.getString());
        FIX::MarketDepth MarketDepth_51(1503201276);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_51);
        MarketDataFeedTypes_NoMDFeedTypes_48.insert(MarketDepth_51.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_48);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_54;
        FIX::MatchAlgorithm MatchAlgorithm_54("STRING_1035416817");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_54);
        MatchRules_NoMatchRules_54.insert(MatchAlgorithm_54.getString());
        FIX::MatchType MatchType_59("STRING_4");
        noMatchRules_0_0_2_0.set(MatchType_59);
        MatchRules_NoMatchRules_54.insert(MatchType_59.getString());
        all_values.push_back(MatchRules_NoMatchRules_54);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_57;
        FIX::OrdType OrdType_80('B');
        noOrdTypeRules_0_0_2_0.set(OrdType_80);
        OrdTypeRules_NoOrdTypeRules_57.insert(OrdType_80.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_57);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_58;
        FIX::OrdType OrdType_81('F');
        noOrdTypeRules_0_0_2_1.set(OrdType_81);
        OrdTypeRules_NoOrdTypeRules_58.insert(OrdType_81.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_58);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_53;
        FIX::TimeInForce TimeInForce_66('1');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_66);
        TimeInForceRules_NoTimeInForceRules_53.insert(TimeInForce_66.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_53);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_54;
        FIX::TimeInForce TimeInForce_67('8');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_67);
        TimeInForceRules_NoTimeInForceRules_54.insert(TimeInForce_67.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_54);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_25;
      FIX::TradingSessionID TradingSessionID_89("STRING_3");
      noTradingSessionRules_0_1_1.set(TradingSessionID_89);
      TradingSessionRulesGrp_NoTradingSessionRules_25.insert(TradingSessionID_89.getString());
      FIX::TradingSessionSubID TradingSessionSubID_89("STRING_3");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_89);
      TradingSessionRulesGrp_NoTradingSessionRules_25.insert(TradingSessionSubID_89.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_25);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_54;
        FIX::ExecInstValue ExecInstValue_54('1');
        noExecInstRules_0_1_2_0.set(ExecInstValue_54);
        ExecInstRules_NoExecInstRules_54.insert(ExecInstValue_54.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_54);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_55;
        FIX::ExecInstValue ExecInstValue_55('2');
        noExecInstRules_0_1_2_1.set(ExecInstValue_55);
        ExecInstRules_NoExecInstRules_55.insert(ExecInstValue_55.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_55);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_56;
        FIX::ExecInstValue ExecInstValue_56('1');
        noExecInstRules_0_1_2_2.set(ExecInstValue_56);
        ExecInstRules_NoExecInstRules_56.insert(ExecInstValue_56.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_56);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_49;
        FIX::MDBookType MDBookType_51(2);
        noMDFeedTypes_0_1_2_0.set(MDBookType_51);
        MarketDataFeedTypes_NoMDFeedTypes_49.insert(MDBookType_51.getString());
        FIX::MDFeedType MDFeedType_51("STRING_1425225472");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_51);
        MarketDataFeedTypes_NoMDFeedTypes_49.insert(MDFeedType_51.getString());
        FIX::MarketDepth MarketDepth_52(395159359);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_52);
        MarketDataFeedTypes_NoMDFeedTypes_49.insert(MarketDepth_52.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_49);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_50;
        FIX::MDBookType MDBookType_52(1);
        noMDFeedTypes_0_1_2_1.set(MDBookType_52);
        MarketDataFeedTypes_NoMDFeedTypes_50.insert(MDBookType_52.getString());
        FIX::MDFeedType MDFeedType_52("STRING_1321479809");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_52);
        MarketDataFeedTypes_NoMDFeedTypes_50.insert(MDFeedType_52.getString());
        FIX::MarketDepth MarketDepth_53(466339998);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_53);
        MarketDataFeedTypes_NoMDFeedTypes_50.insert(MarketDepth_53.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_50);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_51;
        FIX::MDBookType MDBookType_53(3);
        noMDFeedTypes_0_1_2_2.set(MDBookType_53);
        MarketDataFeedTypes_NoMDFeedTypes_51.insert(MDBookType_53.getString());
        FIX::MDFeedType MDFeedType_53("STRING_271163054");
        noMDFeedTypes_0_1_2_2.set(MDFeedType_53);
        MarketDataFeedTypes_NoMDFeedTypes_51.insert(MDFeedType_53.getString());
        FIX::MarketDepth MarketDepth_54(638090362);
        noMDFeedTypes_0_1_2_2.set(MarketDepth_54);
        MarketDataFeedTypes_NoMDFeedTypes_51.insert(MarketDepth_54.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_51);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_55;
        FIX::MatchAlgorithm MatchAlgorithm_55("STRING_2124460546");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_55);
        MatchRules_NoMatchRules_55.insert(MatchAlgorithm_55.getString());
        FIX::MatchType MatchType_60("STRING_7");
        noMatchRules_0_1_2_0.set(MatchType_60);
        MatchRules_NoMatchRules_55.insert(MatchType_60.getString());
        all_values.push_back(MatchRules_NoMatchRules_55);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_56;
        FIX::MatchAlgorithm MatchAlgorithm_56("STRING_236285495");
        noMatchRules_0_1_2_1.set(MatchAlgorithm_56);
        MatchRules_NoMatchRules_56.insert(MatchAlgorithm_56.getString());
        FIX::MatchType MatchType_61("STRING_A5");
        noMatchRules_0_1_2_1.set(MatchType_61);
        MatchRules_NoMatchRules_56.insert(MatchType_61.getString());
        all_values.push_back(MatchRules_NoMatchRules_56);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_59;
        FIX::OrdType OrdType_82('C');
        noOrdTypeRules_0_1_2_0.set(OrdType_82);
        OrdTypeRules_NoOrdTypeRules_59.insert(OrdType_82.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_59);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_55;
        FIX::TimeInForce TimeInForce_68('8');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_68);
        TimeInForceRules_NoTimeInForceRules_55.insert(TimeInForce_68.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_55);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_56;
        FIX::TimeInForce TimeInForce_69('9');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_69);
        TimeInForceRules_NoTimeInForceRules_56.insert(TimeInForce_69.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_56);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_26;
      FIX::TradingSessionID TradingSessionID_90("STRING_5");
      noTradingSessionRules_0_1_2.set(TradingSessionID_90);
      TradingSessionRulesGrp_NoTradingSessionRules_26.insert(TradingSessionID_90.getString());
      FIX::TradingSessionSubID TradingSessionSubID_90("STRING_7");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_90);
      TradingSessionRulesGrp_NoTradingSessionRules_26.insert(TradingSessionSubID_90.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_26);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_57;
        FIX::ExecInstValue ExecInstValue_57('2');
        noExecInstRules_0_2_2_0.set(ExecInstValue_57);
        ExecInstRules_NoExecInstRules_57.insert(ExecInstValue_57.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_57);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_52;
        FIX::MDBookType MDBookType_54(3);
        noMDFeedTypes_0_2_2_0.set(MDBookType_54);
        MarketDataFeedTypes_NoMDFeedTypes_52.insert(MDBookType_54.getString());
        FIX::MDFeedType MDFeedType_54("STRING_1055230189");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_54);
        MarketDataFeedTypes_NoMDFeedTypes_52.insert(MDFeedType_54.getString());
        FIX::MarketDepth MarketDepth_55(1800270369);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_55);
        MarketDataFeedTypes_NoMDFeedTypes_52.insert(MarketDepth_55.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_52);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_57;
        FIX::MatchAlgorithm MatchAlgorithm_57("STRING_1325300228");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_57);
        MatchRules_NoMatchRules_57.insert(MatchAlgorithm_57.getString());
        FIX::MatchType MatchType_62("STRING_S4");
        noMatchRules_0_2_2_0.set(MatchType_62);
        MatchRules_NoMatchRules_57.insert(MatchType_62.getString());
        all_values.push_back(MatchRules_NoMatchRules_57);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_58;
        FIX::MatchAlgorithm MatchAlgorithm_58("STRING_1008175187");
        noMatchRules_0_2_2_1.set(MatchAlgorithm_58);
        MatchRules_NoMatchRules_58.insert(MatchAlgorithm_58.getString());
        FIX::MatchType MatchType_63("STRING_S5");
        noMatchRules_0_2_2_1.set(MatchType_63);
        MatchRules_NoMatchRules_58.insert(MatchType_63.getString());
        all_values.push_back(MatchRules_NoMatchRules_58);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_59;
        FIX::MatchAlgorithm MatchAlgorithm_59("STRING_671208128");
        noMatchRules_0_2_2_2.set(MatchAlgorithm_59);
        MatchRules_NoMatchRules_59.insert(MatchAlgorithm_59.getString());
        FIX::MatchType MatchType_64("STRING_A5");
        noMatchRules_0_2_2_2.set(MatchType_64);
        MatchRules_NoMatchRules_59.insert(MatchType_64.getString());
        all_values.push_back(MatchRules_NoMatchRules_59);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_60;
        FIX::OrdType OrdType_83('2');
        noOrdTypeRules_0_2_2_0.set(OrdType_83);
        OrdTypeRules_NoOrdTypeRules_60.insert(OrdType_83.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_60);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_61;
        FIX::OrdType OrdType_84('2');
        noOrdTypeRules_0_2_2_1.set(OrdType_84);
        OrdTypeRules_NoOrdTypeRules_61.insert(OrdType_84.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_61);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_62;
        FIX::OrdType OrdType_85('3');
        noOrdTypeRules_0_2_2_2.set(OrdType_85);
        OrdTypeRules_NoOrdTypeRules_62.insert(OrdType_85.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_62);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_57;
        FIX::TimeInForce TimeInForce_70('9');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_70);
        TimeInForceRules_NoTimeInForceRules_57.insert(TimeInForce_70.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_57);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_58;
        FIX::TimeInForce TimeInForce_71('7');
        noTimeInForceRules_0_2_2_1.set(TimeInForce_71);
        TimeInForceRules_NoTimeInForceRules_58.insert(TimeInForce_71.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_58);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_32;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_32("USD");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurveCurrency_32.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_32("STRING_Pfandbriefe");
    noRelatedSym_0_0.set(BenchmarkCurveName_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurveName_32.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_32("STRING_44992735");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkCurvePoint_32.getString());
    FIX::BenchmarkPrice BenchmarkPrice_32;
    BenchmarkPrice_32.setString("4444924");
    noRelatedSym_0_0.set(BenchmarkPrice_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkPrice_32.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_32(615895355);
    noRelatedSym_0_0.set(BenchmarkPriceType_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkPriceType_32.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_32("STRING_1032058047");
    noRelatedSym_0_0.set(BenchmarkSecurityID_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkSecurityID_32.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_32("STRING_102228023");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_32);
    SpreadOrBenchmarkCurveData_32.insert(BenchmarkSecurityIDSource_32.getString());
    FIX::Spread Spread_32;
    Spread_32.setString("14552535");
    noRelatedSym_0_0.set(Spread_32);
    SpreadOrBenchmarkCurveData_32.insert(Spread_32.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_32);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_59;
      FIX::StipulationType StipulationType_59("STRING_RESTRICTED");
      noStipulations_0_1_0.set(StipulationType_59);
      Stipulations_NoStipulations_59.insert(StipulationType_59.getString());
      FIX::StipulationValue StipulationValue_59("STRING_2094123883");
      noStipulations_0_1_0.set(StipulationValue_59);
      Stipulations_NoStipulations_59.insert(StipulationValue_59.getString());
      all_values.push_back(Stipulations_NoStipulations_59);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_60;
      FIX::StipulationType StipulationType_60("STRING_HEP");
      noStipulations_0_1_1.set(StipulationType_60);
      Stipulations_NoStipulations_60.insert(StipulationType_60.getString());
      FIX::StipulationValue StipulationValue_60("STRING_137781662");
      noStipulations_0_1_1.set(StipulationValue_60);
      Stipulations_NoStipulations_60.insert(StipulationValue_60.getString());
      all_values.push_back(Stipulations_NoStipulations_60);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_22;
      FIX::EndStrikePxRange EndStrikePxRange_22;
      EndStrikePxRange_22.setString("21336505");
      noStrikeRules_0_1_0.set(EndStrikePxRange_22);
      StrikeRules_NoStrikeRules_22.insert(EndStrikePxRange_22.getString());
      FIX::StartStrikePxRange StartStrikePxRange_22;
      StartStrikePxRange_22.setString("19380520");
      noStrikeRules_0_1_0.set(StartStrikePxRange_22);
      StrikeRules_NoStrikeRules_22.insert(StartStrikePxRange_22.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_22(843461410);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_22);
      StrikeRules_NoStrikeRules_22.insert(StrikeExerciseStyle_22.getString());
      FIX::StrikeIncrement StrikeIncrement_22;
      StrikeIncrement_22.setString("13114670");
      noStrikeRules_0_1_0.set(StrikeIncrement_22);
      StrikeRules_NoStrikeRules_22.insert(StrikeIncrement_22.getString());
      FIX::StrikeRuleID StrikeRuleID_22("STRING_1184034686");
      noStrikeRules_0_1_0.set(StrikeRuleID_22);
      StrikeRules_NoStrikeRules_22.insert(StrikeRuleID_22.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_22);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_44;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_44("MONTHYEAR_2053805118");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_44);
        MaturityRules_NoMaturityRules_44.insert(EndMaturityMonthYear_44.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_44(1);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_44);
        MaturityRules_NoMaturityRules_44.insert(MaturityMonthYearFormat_44.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_44(1107487495);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_44);
        MaturityRules_NoMaturityRules_44.insert(MaturityMonthYearIncrement_44.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_44(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_44);
        MaturityRules_NoMaturityRules_44.insert(MaturityMonthYearIncrementUnits_44.getString());
        FIX::MaturityRuleID MaturityRuleID_44("STRING_1700447103");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_44);
        MaturityRules_NoMaturityRules_44.insert(MaturityRuleID_44.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_44("MONTHYEAR_829678392");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_44);
        MaturityRules_NoMaturityRules_44.insert(StartMaturityMonthYear_44.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_44);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_23;
      FIX::EndStrikePxRange EndStrikePxRange_23;
      EndStrikePxRange_23.setString("3519341");
      noStrikeRules_0_1_1.set(EndStrikePxRange_23);
      StrikeRules_NoStrikeRules_23.insert(EndStrikePxRange_23.getString());
      FIX::StartStrikePxRange StartStrikePxRange_23;
      StartStrikePxRange_23.setString("18168144");
      noStrikeRules_0_1_1.set(StartStrikePxRange_23);
      StrikeRules_NoStrikeRules_23.insert(StartStrikePxRange_23.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_23(1189959652);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_23);
      StrikeRules_NoStrikeRules_23.insert(StrikeExerciseStyle_23.getString());
      FIX::StrikeIncrement StrikeIncrement_23;
      StrikeIncrement_23.setString("18534668");
      noStrikeRules_0_1_1.set(StrikeIncrement_23);
      StrikeRules_NoStrikeRules_23.insert(StrikeIncrement_23.getString());
      FIX::StrikeRuleID StrikeRuleID_23("STRING_1910158688");
      noStrikeRules_0_1_1.set(StrikeRuleID_23);
      StrikeRules_NoStrikeRules_23.insert(StrikeRuleID_23.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_23);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_45;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_45("MONTHYEAR_1443801351");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_45);
        MaturityRules_NoMaturityRules_45.insert(EndMaturityMonthYear_45.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_45(0);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_45);
        MaturityRules_NoMaturityRules_45.insert(MaturityMonthYearFormat_45.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_45(211496469);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_45);
        MaturityRules_NoMaturityRules_45.insert(MaturityMonthYearIncrement_45.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_45(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_45);
        MaturityRules_NoMaturityRules_45.insert(MaturityMonthYearIncrementUnits_45.getString());
        FIX::MaturityRuleID MaturityRuleID_45("STRING_839725822");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_45);
        MaturityRules_NoMaturityRules_45.insert(MaturityRuleID_45.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_45("MONTHYEAR_313724492");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_45);
        MaturityRules_NoMaturityRules_45.insert(StartMaturityMonthYear_45.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_45);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_46;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_46("MONTHYEAR_1367466613");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_46);
        MaturityRules_NoMaturityRules_46.insert(EndMaturityMonthYear_46.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_46(2);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_46);
        MaturityRules_NoMaturityRules_46.insert(MaturityMonthYearFormat_46.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_46(1644225729);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_46);
        MaturityRules_NoMaturityRules_46.insert(MaturityMonthYearIncrement_46.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_46(0);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_46);
        MaturityRules_NoMaturityRules_46.insert(MaturityMonthYearIncrementUnits_46.getString());
        FIX::MaturityRuleID MaturityRuleID_46("STRING_964937098");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_46);
        MaturityRules_NoMaturityRules_46.insert(MaturityRuleID_46.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_46("MONTHYEAR_1782007391");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_46);
        MaturityRules_NoMaturityRules_46.insert(StartMaturityMonthYear_46.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_46);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_133;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_133("DATA_951103953");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingIssuer_133.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_133(1572575774);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingIssuerLen_133.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_133("DATA_761177223");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingSecurityDesc_133.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_133(115087389);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_133);
      UnderlyingInstrument_133.insert(EncodedUnderlyingSecurityDescLen_133.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_133;
      UnderlyingAdjustedQuantity_133.setString("6091268");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_133);
      UnderlyingInstrument_133.insert(UnderlyingAdjustedQuantity_133.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_133;
      UnderlyingAllocationPercent_133.setString("1.720000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_133);
      UnderlyingInstrument_133.insert(UnderlyingAllocationPercent_133.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_133;
      UnderlyingAttachmentPoint_133.setString("88.600000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_133);
      UnderlyingInstrument_133.insert(UnderlyingAttachmentPoint_133.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_133("STRING_316885979");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_133);
      UnderlyingInstrument_133.insert(UnderlyingCFICode_133.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_133("STRING_1572817668");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_133);
      UnderlyingInstrument_133.insert(UnderlyingCPProgram_133.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_133("STRING_1456351736");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_133);
      UnderlyingInstrument_133.insert(UnderlyingCPRegType_133.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_133;
      UnderlyingCapValue_133.setString("20173330");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_133);
      UnderlyingInstrument_133.insert(UnderlyingCapValue_133.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_133;
      UnderlyingCashAmount_133.setString("2550124");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_133);
      UnderlyingInstrument_133.insert(UnderlyingCashAmount_133.getString());
      FIX::UnderlyingCashType UnderlyingCashType_133("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_133);
      UnderlyingInstrument_133.insert(UnderlyingCashType_133.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_133;
      UnderlyingContractMultiplier_133.setString("16866638");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_133);
      UnderlyingInstrument_133.insert(UnderlyingContractMultiplier_133.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_133(1444972064);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_133);
      UnderlyingInstrument_133.insert(UnderlyingContractMultiplierUnit_133.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_133("COUNTRY_1514269006");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_133);
      UnderlyingInstrument_133.insert(UnderlyingCountryOfIssue_133.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_133("LOCALMKTDATE_1449338921");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_133);
      UnderlyingInstrument_133.insert(UnderlyingCouponPaymentDate_133.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_133;
      UnderlyingCouponRate_133.setString("61.000000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_133);
      UnderlyingInstrument_133.insert(UnderlyingCouponRate_133.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_133("STRING_810586710");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_133);
      UnderlyingInstrument_133.insert(UnderlyingCreditRating_133.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_133("EUR");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_133);
      UnderlyingInstrument_133.insert(UnderlyingCurrency_133.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_133;
      UnderlyingCurrentValue_133.setString("7227997");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_133);
      UnderlyingInstrument_133.insert(UnderlyingCurrentValue_133.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_133;
      UnderlyingDetachmentPoint_133.setString("25.190000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_133);
      UnderlyingInstrument_133.insert(UnderlyingDetachmentPoint_133.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_133;
      UnderlyingDirtyPrice_133.setString("17371970");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_133);
      UnderlyingInstrument_133.insert(UnderlyingDirtyPrice_133.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_133;
      UnderlyingEndPrice_133.setString("20902663");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_133);
      UnderlyingInstrument_133.insert(UnderlyingEndPrice_133.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_133;
      UnderlyingEndValue_133.setString("19832493");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_133);
      UnderlyingInstrument_133.insert(UnderlyingEndValue_133.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_133(1233939143);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_133);
      UnderlyingInstrument_133.insert(UnderlyingExerciseStyle_133.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_133;
      UnderlyingFXRate_133.setString("12568895");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_133);
      UnderlyingInstrument_133.insert(UnderlyingFXRate_133.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_133('D');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_133);
      UnderlyingInstrument_133.insert(UnderlyingFXRateCalc_133.getString());
      FIX::UnderlyingFactor UnderlyingFactor_133;
      UnderlyingFactor_133.setString("8684628");
      noUnderlyings_0_1_0.set(UnderlyingFactor_133);
      UnderlyingInstrument_133.insert(UnderlyingFactor_133.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_133(1174605395);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_133);
      UnderlyingInstrument_133.insert(UnderlyingFlowScheduleType_133.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_133("STRING_1751806706");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_133);
      UnderlyingInstrument_133.insert(UnderlyingInstrRegistry_133.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_133("LOCALMKTDATE_293555012");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_133);
      UnderlyingInstrument_133.insert(UnderlyingIssueDate_133.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_133("STRING_1935782618");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_133);
      UnderlyingInstrument_133.insert(UnderlyingIssuer_133.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_133("STRING_1866894095");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_133);
      UnderlyingInstrument_133.insert(UnderlyingLocaleOfIssue_133.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_133("LOCALMKTDATE_902681824");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_133);
      UnderlyingInstrument_133.insert(UnderlyingMaturityDate_133.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_133("MONTHYEAR_253629143");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_133);
      UnderlyingInstrument_133.insert(UnderlyingMaturityMonthYear_133.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_133("TZTIMEONLY_1888302955");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_133);
      UnderlyingInstrument_133.insert(UnderlyingMaturityTime_133.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_133;
      UnderlyingNotionalPercentageOutstanding_133.setString("78.030000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_133);
      UnderlyingInstrument_133.insert(UnderlyingNotionalPercentageOutstanding_133.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_133('1');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_133);
      UnderlyingInstrument_133.insert(UnderlyingOptAttribute_133.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_133;
      UnderlyingOriginalNotionalPercentageOutstanding_133.setString("10.440000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_133);
      UnderlyingInstrument_133.insert(UnderlyingOriginalNotionalPercentageOutstanding_133.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_133("STRING_1089417238");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_133);
      UnderlyingInstrument_133.insert(UnderlyingPriceUnitOfMeasure_133.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_133;
      UnderlyingPriceUnitOfMeasureQty_133.setString("20814592");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_133);
      UnderlyingInstrument_133.insert(UnderlyingPriceUnitOfMeasureQty_133.getString());
      FIX::UnderlyingProduct UnderlyingProduct_133(857973243);
      noUnderlyings_0_1_0.set(UnderlyingProduct_133);
      UnderlyingInstrument_133.insert(UnderlyingProduct_133.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_133(628597471);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_133);
      UnderlyingInstrument_133.insert(UnderlyingPutOrCall_133.getString());
      FIX::UnderlyingPx UnderlyingPx_133;
      UnderlyingPx_133.setString("13789476");
      noUnderlyings_0_1_0.set(UnderlyingPx_133);
      UnderlyingInstrument_133.insert(UnderlyingPx_133.getString());
      FIX::UnderlyingQty UnderlyingQty_133;
      UnderlyingQty_133.setString("2247586");
      noUnderlyings_0_1_0.set(UnderlyingQty_133);
      UnderlyingInstrument_133.insert(UnderlyingQty_133.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_133("LOCALMKTDATE_2077936392");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_133);
      UnderlyingInstrument_133.insert(UnderlyingRedemptionDate_133.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_133("STRING_443440092");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_133);
      UnderlyingInstrument_133.insert(UnderlyingRepoCollateralSecurityType_133.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_133;
      UnderlyingRepurchaseRate_133.setString("53.110000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_133);
      UnderlyingInstrument_133.insert(UnderlyingRepurchaseRate_133.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_133(1187459440);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_133);
      UnderlyingInstrument_133.insert(UnderlyingRepurchaseTerm_133.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_133("STRING_1866912662");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_133);
      UnderlyingInstrument_133.insert(UnderlyingRestructuringType_133.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_133("STRING_1758145080");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityDesc_133.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_133("EXCHANGE_1136708311");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityExchange_133.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_133("STRING_1456626076");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityID_133.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_133("STRING_1700927813");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityIDSource_133.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_133("STRING_972473966");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_133);
      UnderlyingInstrument_133.insert(UnderlyingSecuritySubType_133.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_133("STRING_543081571");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_133);
      UnderlyingInstrument_133.insert(UnderlyingSecurityType_133.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_133("STRING_810333747");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_133);
      UnderlyingInstrument_133.insert(UnderlyingSeniority_133.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_133("STRING_1773176718");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_133);
      UnderlyingInstrument_133.insert(UnderlyingSettlMethod_133.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_133(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_133);
      UnderlyingInstrument_133.insert(UnderlyingSettlementType_133.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_133;
      UnderlyingStartValue_133.setString("19849391");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_133);
      UnderlyingInstrument_133.insert(UnderlyingStartValue_133.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_133("STRING_1377499776");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_133);
      UnderlyingInstrument_133.insert(UnderlyingStateOrProvinceOfIssue_133.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_133("GBP");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_133);
      UnderlyingInstrument_133.insert(UnderlyingStrikeCurrency_133.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_133;
      UnderlyingStrikePrice_133.setString("10969102");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_133);
      UnderlyingInstrument_133.insert(UnderlyingStrikePrice_133.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_133("STRING_460297645");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_133);
      UnderlyingInstrument_133.insert(UnderlyingSymbol_133.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_133("STRING_2026867255");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_133);
      UnderlyingInstrument_133.insert(UnderlyingSymbolSfx_133.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_133("STRING_837729531");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_133);
      UnderlyingInstrument_133.insert(UnderlyingTimeUnit_133.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_133("STRING_1679865449");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_133);
      UnderlyingInstrument_133.insert(UnderlyingUnitOfMeasure_133.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_133;
      UnderlyingUnitOfMeasureQty_133.setString("17058304");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_133);
      UnderlyingInstrument_133.insert(UnderlyingUnitOfMeasureQty_133.getString());
      all_values.push_back(UnderlyingInstrument_133);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_268;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_268("STRING_621799039");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_268);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_268.insert(UnderlyingSecurityAltID_268.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_268("STRING_1639805994");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_268);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_268.insert(UnderlyingSecurityAltIDSource_268.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_268);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_269;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_269("STRING_745390170");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_269);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_269.insert(UnderlyingSecurityAltID_269.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_269("STRING_1250396510");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_269);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_269.insert(UnderlyingSecurityAltIDSource_269.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_269);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_270;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_270("STRING_871269986");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltID_270);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_270.insert(UnderlyingSecurityAltID_270.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_270("STRING_970148772");
        noUnderlyingSecurityAltID_0_0_2_2.set(UnderlyingSecurityAltIDSource_270);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_270.insert(UnderlyingSecurityAltIDSource_270.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_270);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_258;
        FIX::UnderlyingStipType UnderlyingStipType_258("STRING_1314710078");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_258);
        UnderlyingStipulations_NoUnderlyingStips_258.insert(UnderlyingStipType_258.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_258("STRING_2005494083");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_258);
        UnderlyingStipulations_NoUnderlyingStips_258.insert(UnderlyingStipValue_258.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_258);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_268;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_268("STRING_1034139092");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_268);
        UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyID_268.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_268('1');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_268);
        UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyIDSource_268.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_268(1357533358);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_268);
        UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyRole_268.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_268);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_524("STRING_1169599681");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_524);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524.insert(UnderlyingInstrumentPartySubID_524.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_524(182523676);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_524);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524.insert(UnderlyingInstrumentPartySubIDType_524.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_525("STRING_886363091");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_525);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525.insert(UnderlyingInstrumentPartySubID_525.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_525(1979933428);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_525);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525.insert(UnderlyingInstrumentPartySubIDType_525.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_269;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_269("STRING_1955700394");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_269);
        UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyID_269.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_269('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_269);
        UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyIDSource_269.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_269(1817388922);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_269);
        UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyRole_269.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_269);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_526("STRING_1855523369");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_526);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526.insert(UnderlyingInstrumentPartySubID_526.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_526(1443143386);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_526);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526.insert(UnderlyingInstrumentPartySubIDType_526.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_270;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_270("STRING_135143099");
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyID_270);
        UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyID_270.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_270('1');
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyIDSource_270);
        UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyIDSource_270.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_270(1322526994);
        noUndlyInstrumentParties_0_0_2_2.set(UnderlyingInstrumentPartyRole_270);
        UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyRole_270.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_270);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_527("STRING_1848202816");
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubID_527);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527.insert(UnderlyingInstrumentPartySubID_527.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_527(880873764);
          noUndlyInstrumentPartySubIDs_0_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_527);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527.insert(UnderlyingInstrumentPartySubIDType_527.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_528("STRING_860289558");
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubID_528);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528.insert(UnderlyingInstrumentPartySubID_528.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_528(322518207);
          noUndlyInstrumentPartySubIDs_0_0_2_3_1.set(UnderlyingInstrumentPartySubIDType_528);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528.insert(UnderlyingInstrumentPartySubIDType_528.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_529("STRING_373196110");
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubID_529);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529.insert(UnderlyingInstrumentPartySubID_529.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_529(1605679728);
          noUndlyInstrumentPartySubIDs_0_0_2_3_2.set(UnderlyingInstrumentPartySubIDType_529);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529.insert(UnderlyingInstrumentPartySubIDType_529.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);

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
      multiset<string> UnderlyingInstrument_134;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_134("DATA_1572914717");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingIssuer_134.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_134(1244466096);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingIssuerLen_134.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_134("DATA_428344852");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingSecurityDesc_134.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_134(606280323);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_134);
      UnderlyingInstrument_134.insert(EncodedUnderlyingSecurityDescLen_134.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_134;
      UnderlyingAdjustedQuantity_134.setString("4116925");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_134);
      UnderlyingInstrument_134.insert(UnderlyingAdjustedQuantity_134.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_134;
      UnderlyingAllocationPercent_134.setString("52.880000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_134);
      UnderlyingInstrument_134.insert(UnderlyingAllocationPercent_134.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_134;
      UnderlyingAttachmentPoint_134.setString("53.690000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_134);
      UnderlyingInstrument_134.insert(UnderlyingAttachmentPoint_134.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_134("STRING_1445831619");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_134);
      UnderlyingInstrument_134.insert(UnderlyingCFICode_134.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_134("STRING_1902510803");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_134);
      UnderlyingInstrument_134.insert(UnderlyingCPProgram_134.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_134("STRING_37155079");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_134);
      UnderlyingInstrument_134.insert(UnderlyingCPRegType_134.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_134;
      UnderlyingCapValue_134.setString("17891131");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_134);
      UnderlyingInstrument_134.insert(UnderlyingCapValue_134.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_134;
      UnderlyingCashAmount_134.setString("9246268");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_134);
      UnderlyingInstrument_134.insert(UnderlyingCashAmount_134.getString());
      FIX::UnderlyingCashType UnderlyingCashType_134("STRING_DIFF");
      noUnderlyings_0_1_1.set(UnderlyingCashType_134);
      UnderlyingInstrument_134.insert(UnderlyingCashType_134.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_134;
      UnderlyingContractMultiplier_134.setString("5279925");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_134);
      UnderlyingInstrument_134.insert(UnderlyingContractMultiplier_134.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_134(757076616);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_134);
      UnderlyingInstrument_134.insert(UnderlyingContractMultiplierUnit_134.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_134("COUNTRY_27895502");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_134);
      UnderlyingInstrument_134.insert(UnderlyingCountryOfIssue_134.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_134("LOCALMKTDATE_678416484");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_134);
      UnderlyingInstrument_134.insert(UnderlyingCouponPaymentDate_134.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_134;
      UnderlyingCouponRate_134.setString("18.900000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_134);
      UnderlyingInstrument_134.insert(UnderlyingCouponRate_134.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_134("STRING_1213612025");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_134);
      UnderlyingInstrument_134.insert(UnderlyingCreditRating_134.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_134("EUR");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_134);
      UnderlyingInstrument_134.insert(UnderlyingCurrency_134.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_134;
      UnderlyingCurrentValue_134.setString("13487551");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_134);
      UnderlyingInstrument_134.insert(UnderlyingCurrentValue_134.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_134;
      UnderlyingDetachmentPoint_134.setString("35.720000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_134);
      UnderlyingInstrument_134.insert(UnderlyingDetachmentPoint_134.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_134;
      UnderlyingDirtyPrice_134.setString("10451686");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_134);
      UnderlyingInstrument_134.insert(UnderlyingDirtyPrice_134.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_134;
      UnderlyingEndPrice_134.setString("1741441");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_134);
      UnderlyingInstrument_134.insert(UnderlyingEndPrice_134.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_134;
      UnderlyingEndValue_134.setString("2555127");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_134);
      UnderlyingInstrument_134.insert(UnderlyingEndValue_134.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_134(1926042387);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_134);
      UnderlyingInstrument_134.insert(UnderlyingExerciseStyle_134.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_134;
      UnderlyingFXRate_134.setString("10344336");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_134);
      UnderlyingInstrument_134.insert(UnderlyingFXRate_134.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_134('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_134);
      UnderlyingInstrument_134.insert(UnderlyingFXRateCalc_134.getString());
      FIX::UnderlyingFactor UnderlyingFactor_134;
      UnderlyingFactor_134.setString("1517548");
      noUnderlyings_0_1_1.set(UnderlyingFactor_134);
      UnderlyingInstrument_134.insert(UnderlyingFactor_134.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_134(492629745);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_134);
      UnderlyingInstrument_134.insert(UnderlyingFlowScheduleType_134.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_134("STRING_3462016");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_134);
      UnderlyingInstrument_134.insert(UnderlyingInstrRegistry_134.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_134("LOCALMKTDATE_1396220946");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_134);
      UnderlyingInstrument_134.insert(UnderlyingIssueDate_134.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_134("STRING_920974597");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_134);
      UnderlyingInstrument_134.insert(UnderlyingIssuer_134.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_134("STRING_609742339");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_134);
      UnderlyingInstrument_134.insert(UnderlyingLocaleOfIssue_134.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_134("LOCALMKTDATE_1807913473");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_134);
      UnderlyingInstrument_134.insert(UnderlyingMaturityDate_134.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_134("MONTHYEAR_1207329885");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_134);
      UnderlyingInstrument_134.insert(UnderlyingMaturityMonthYear_134.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_134("TZTIMEONLY_1436847709");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_134);
      UnderlyingInstrument_134.insert(UnderlyingMaturityTime_134.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_134;
      UnderlyingNotionalPercentageOutstanding_134.setString("14.450000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_134);
      UnderlyingInstrument_134.insert(UnderlyingNotionalPercentageOutstanding_134.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_134('9');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_134);
      UnderlyingInstrument_134.insert(UnderlyingOptAttribute_134.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_134;
      UnderlyingOriginalNotionalPercentageOutstanding_134.setString("27.880000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_134);
      UnderlyingInstrument_134.insert(UnderlyingOriginalNotionalPercentageOutstanding_134.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_134("STRING_747890937");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_134);
      UnderlyingInstrument_134.insert(UnderlyingPriceUnitOfMeasure_134.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_134;
      UnderlyingPriceUnitOfMeasureQty_134.setString("18869838");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_134);
      UnderlyingInstrument_134.insert(UnderlyingPriceUnitOfMeasureQty_134.getString());
      FIX::UnderlyingProduct UnderlyingProduct_134(1693681544);
      noUnderlyings_0_1_1.set(UnderlyingProduct_134);
      UnderlyingInstrument_134.insert(UnderlyingProduct_134.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_134(1275883520);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_134);
      UnderlyingInstrument_134.insert(UnderlyingPutOrCall_134.getString());
      FIX::UnderlyingPx UnderlyingPx_134;
      UnderlyingPx_134.setString("4965768");
      noUnderlyings_0_1_1.set(UnderlyingPx_134);
      UnderlyingInstrument_134.insert(UnderlyingPx_134.getString());
      FIX::UnderlyingQty UnderlyingQty_134;
      UnderlyingQty_134.setString("17215770");
      noUnderlyings_0_1_1.set(UnderlyingQty_134);
      UnderlyingInstrument_134.insert(UnderlyingQty_134.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_134("LOCALMKTDATE_1954300004");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_134);
      UnderlyingInstrument_134.insert(UnderlyingRedemptionDate_134.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_134("STRING_923558736");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_134);
      UnderlyingInstrument_134.insert(UnderlyingRepoCollateralSecurityType_134.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_134;
      UnderlyingRepurchaseRate_134.setString("54.230000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_134);
      UnderlyingInstrument_134.insert(UnderlyingRepurchaseRate_134.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_134(193272562);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_134);
      UnderlyingInstrument_134.insert(UnderlyingRepurchaseTerm_134.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_134("STRING_646200365");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_134);
      UnderlyingInstrument_134.insert(UnderlyingRestructuringType_134.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_134("STRING_2136460547");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityDesc_134.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_134("EXCHANGE_748066134");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityExchange_134.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_134("STRING_1691368988");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityID_134.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_134("STRING_163121005");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityIDSource_134.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_134("STRING_1003578875");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_134);
      UnderlyingInstrument_134.insert(UnderlyingSecuritySubType_134.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_134("STRING_1469927728");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_134);
      UnderlyingInstrument_134.insert(UnderlyingSecurityType_134.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_134("STRING_1197554670");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_134);
      UnderlyingInstrument_134.insert(UnderlyingSeniority_134.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_134("STRING_1581609822");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_134);
      UnderlyingInstrument_134.insert(UnderlyingSettlMethod_134.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_134(4);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_134);
      UnderlyingInstrument_134.insert(UnderlyingSettlementType_134.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_134;
      UnderlyingStartValue_134.setString("16901844");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_134);
      UnderlyingInstrument_134.insert(UnderlyingStartValue_134.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_134("STRING_1585071839");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_134);
      UnderlyingInstrument_134.insert(UnderlyingStateOrProvinceOfIssue_134.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_134("GBP");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_134);
      UnderlyingInstrument_134.insert(UnderlyingStrikeCurrency_134.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_134;
      UnderlyingStrikePrice_134.setString("473305");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_134);
      UnderlyingInstrument_134.insert(UnderlyingStrikePrice_134.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_134("STRING_530849702");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_134);
      UnderlyingInstrument_134.insert(UnderlyingSymbol_134.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_134("STRING_1671005250");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_134);
      UnderlyingInstrument_134.insert(UnderlyingSymbolSfx_134.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_134("STRING_1484178239");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_134);
      UnderlyingInstrument_134.insert(UnderlyingTimeUnit_134.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_134("STRING_1637111147");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_134);
      UnderlyingInstrument_134.insert(UnderlyingUnitOfMeasure_134.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_134;
      UnderlyingUnitOfMeasureQty_134.setString("4858786");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_134);
      UnderlyingInstrument_134.insert(UnderlyingUnitOfMeasureQty_134.getString());
      all_values.push_back(UnderlyingInstrument_134);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_271;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_271("STRING_237518436");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_271);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_271.insert(UnderlyingSecurityAltID_271.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_271("STRING_225378872");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_271);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_271.insert(UnderlyingSecurityAltIDSource_271.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_271);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_259;
        FIX::UnderlyingStipType UnderlyingStipType_259("STRING_1513401956");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_259);
        UnderlyingStipulations_NoUnderlyingStips_259.insert(UnderlyingStipType_259.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_259("STRING_721955718");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_259);
        UnderlyingStipulations_NoUnderlyingStips_259.insert(UnderlyingStipValue_259.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_259);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_271;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_271("STRING_1320218313");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_271);
        UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyID_271.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_271('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_271);
        UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyIDSource_271.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_271(718694097);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_271);
        UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyRole_271.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_271);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_530("STRING_144231172");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_530);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530.insert(UnderlyingInstrumentPartySubID_530.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_530(707670996);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_530);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530.insert(UnderlyingInstrumentPartySubIDType_530.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_531("STRING_114073361");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_531);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531.insert(UnderlyingInstrumentPartySubID_531.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_531(1835600161);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_531);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531.insert(UnderlyingInstrumentPartySubIDType_531.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_272;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_272("STRING_870792001");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_272);
        UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyID_272.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_272('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_272);
        UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyIDSource_272.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_272(1158044241);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_272);
        UndlyInstrumentParties_NoUndlyInstrumentParties_272.insert(UnderlyingInstrumentPartyRole_272.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_272);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_532("STRING_551778411");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_532);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532.insert(UnderlyingInstrumentPartySubID_532.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_532(632243171);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_532);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532.insert(UnderlyingInstrumentPartySubIDType_532.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_533("STRING_1611047438");
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubID_533);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533.insert(UnderlyingInstrumentPartySubID_533.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_533(2136850250);
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_533);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533.insert(UnderlyingInstrumentPartySubIDType_533.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_533);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_27;
    FIX::Yield Yield_27;
    Yield_27.setString("30.470000");
    noRelatedSym_0_0.set(Yield_27);
    YieldData_27.insert(Yield_27.getString());
    FIX::YieldCalcDate YieldCalcDate_27("LOCALMKTDATE_2074722803");
    noRelatedSym_0_0.set(YieldCalcDate_27);
    YieldData_27.insert(YieldCalcDate_27.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_27("LOCALMKTDATE_36697132");
    noRelatedSym_0_0.set(YieldRedemptionDate_27);
    YieldData_27.insert(YieldRedemptionDate_27.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_27;
    YieldRedemptionPrice_27.setString("20335127");
    noRelatedSym_0_0.set(YieldRedemptionPrice_27);
    YieldData_27.insert(YieldRedemptionPrice_27.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_27(1598244405);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_27);
    YieldData_27.insert(YieldRedemptionPriceType_27.getString());
    FIX::YieldType YieldType_27("STRING_MATURITY");
    noRelatedSym_0_0.set(YieldType_27);
    YieldData_27.insert(YieldType_27.getString());
    all_values.push_back(YieldData_27);

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_1;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_1;
    FIX::Currency Currency_59("GBP");
    noRelatedSym_0_1.set(Currency_59);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(Currency_59.getString());
    FIX::EncodedText EncodedText_83("DATA_184089104");
    noRelatedSym_0_1.set(EncodedText_83);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(EncodedText_83.getString());
    FIX::EncodedTextLen EncodedTextLen_83(1760658684);
    noRelatedSym_0_1.set(EncodedTextLen_83);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(EncodedTextLen_83.getString());
    FIX::ListUpdateAction ListUpdateAction_3('1');
    noRelatedSym_0_1.set(ListUpdateAction_3);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(ListUpdateAction_3.getString());
    FIX::RelSymTransactTime RelSymTransactTime_6(FIX::UTCTIMESTAMP(1, 51, 34, 2, 32001));
    noRelatedSym_0_1.set(RelSymTransactTime_6);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(RelSymTransactTime_6.getString());
    FIX::Text Text_83("STRING_1812802533");
    noRelatedSym_0_1.set(Text_83);
    SecLstUpdRelSymGrp_NoRelatedSym_1.insert(Text_83.getString());
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_1);

    // FinancingDetails
    multiset<string> FinancingDetails_29;
    FIX::AgreementCurrency AgreementCurrency_29("EUR");
    noRelatedSym_0_1.set(AgreementCurrency_29);
    FinancingDetails_29.insert(AgreementCurrency_29.getString());
    FIX::AgreementDate AgreementDate_29("LOCALMKTDATE_1926875894");
    noRelatedSym_0_1.set(AgreementDate_29);
    FinancingDetails_29.insert(AgreementDate_29.getString());
    FIX::AgreementDesc AgreementDesc_29("STRING_214352483");
    noRelatedSym_0_1.set(AgreementDesc_29);
    FinancingDetails_29.insert(AgreementDesc_29.getString());
    FIX::AgreementID AgreementID_29("STRING_621646500");
    noRelatedSym_0_1.set(AgreementID_29);
    FinancingDetails_29.insert(AgreementID_29.getString());
    FIX::DeliveryType DeliveryType_29(3);
    noRelatedSym_0_1.set(DeliveryType_29);
    FinancingDetails_29.insert(DeliveryType_29.getString());
    FIX::EndDate EndDate_29("LOCALMKTDATE_1372396724");
    noRelatedSym_0_1.set(EndDate_29);
    FinancingDetails_29.insert(EndDate_29.getString());
    FIX::MarginRatio MarginRatio_29;
    MarginRatio_29.setString("95.240000");
    noRelatedSym_0_1.set(MarginRatio_29);
    FinancingDetails_29.insert(MarginRatio_29.getString());
    FIX::StartDate StartDate_29("LOCALMKTDATE_1448822894");
    noRelatedSym_0_1.set(StartDate_29);
    FinancingDetails_29.insert(StartDate_29.getString());
    FIX::TerminationType TerminationType_29(4);
    noRelatedSym_0_1.set(TerminationType_29);
    FinancingDetails_29.insert(TerminationType_29.getString());
    all_values.push_back(FinancingDetails_29);

    // Instrument
    multiset<string> Instrument_77;
    FIX::AttachmentPoint AttachmentPoint_77;
    AttachmentPoint_77.setString("33.140000");
    noRelatedSym_0_1.set(AttachmentPoint_77);
    Instrument_77.insert(AttachmentPoint_77.getString());
    FIX::CFICode CFICode_77("STRING_1438189496");
    noRelatedSym_0_1.set(CFICode_77);
    Instrument_77.insert(CFICode_77.getString());
    FIX::CPProgram CPProgram_77(2);
    noRelatedSym_0_1.set(CPProgram_77);
    Instrument_77.insert(CPProgram_77.getString());
    FIX::CPRegType CPRegType_77("STRING_2080796117");
    noRelatedSym_0_1.set(CPRegType_77);
    Instrument_77.insert(CPRegType_77.getString());
    FIX::CapPrice CapPrice_77;
    CapPrice_77.setString("14748866");
    noRelatedSym_0_1.set(CapPrice_77);
    Instrument_77.insert(CapPrice_77.getString());
    FIX::ContractMultiplier ContractMultiplier_77;
    ContractMultiplier_77.setString("12458483");
    noRelatedSym_0_1.set(ContractMultiplier_77);
    Instrument_77.insert(ContractMultiplier_77.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_77(0);
    noRelatedSym_0_1.set(ContractMultiplierUnit_77);
    Instrument_77.insert(ContractMultiplierUnit_77.getString());
    FIX::ContractSettlMonth ContractSettlMonth_77("MONTHYEAR_848278352");
    noRelatedSym_0_1.set(ContractSettlMonth_77);
    Instrument_77.insert(ContractSettlMonth_77.getString());
    FIX::CountryOfIssue CountryOfIssue_77("COUNTRY_621504997");
    noRelatedSym_0_1.set(CountryOfIssue_77);
    Instrument_77.insert(CountryOfIssue_77.getString());
    FIX::CouponPaymentDate CouponPaymentDate_77("LOCALMKTDATE_1468196274");
    noRelatedSym_0_1.set(CouponPaymentDate_77);
    Instrument_77.insert(CouponPaymentDate_77.getString());
    FIX::CouponRate CouponRate_77;
    CouponRate_77.setString("74.560000");
    noRelatedSym_0_1.set(CouponRate_77);
    Instrument_77.insert(CouponRate_77.getString());
    FIX::CreditRating CreditRating_77("STRING_234680033");
    noRelatedSym_0_1.set(CreditRating_77);
    Instrument_77.insert(CreditRating_77.getString());
    FIX::DatedDate DatedDate_77("LOCALMKTDATE_1630214547");
    noRelatedSym_0_1.set(DatedDate_77);
    Instrument_77.insert(DatedDate_77.getString());
    FIX::DetachmentPoint DetachmentPoint_77;
    DetachmentPoint_77.setString("18.360000");
    noRelatedSym_0_1.set(DetachmentPoint_77);
    Instrument_77.insert(DetachmentPoint_77.getString());
    FIX::EncodedIssuer EncodedIssuer_77("DATA_1361257026");
    noRelatedSym_0_1.set(EncodedIssuer_77);
    Instrument_77.insert(EncodedIssuer_77.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_77(366704890);
    noRelatedSym_0_1.set(EncodedIssuerLen_77);
    Instrument_77.insert(EncodedIssuerLen_77.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_77("DATA_2045324890");
    noRelatedSym_0_1.set(EncodedSecurityDesc_77);
    Instrument_77.insert(EncodedSecurityDesc_77.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_77(1660568684);
    noRelatedSym_0_1.set(EncodedSecurityDescLen_77);
    Instrument_77.insert(EncodedSecurityDescLen_77.getString());
    FIX::ExerciseStyle ExerciseStyle_77(0);
    noRelatedSym_0_1.set(ExerciseStyle_77);
    Instrument_77.insert(ExerciseStyle_77.getString());
    FIX::Factor Factor_77;
    Factor_77.setString("10885083");
    noRelatedSym_0_1.set(Factor_77);
    Instrument_77.insert(Factor_77.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_77(false);
    noRelatedSym_0_1.set(FlexProductEligibilityIndicator_77);
    Instrument_77.insert(FlexProductEligibilityIndicator_77.getString());
    FIX::FlexibleIndicator FlexibleIndicator_77(true);
    noRelatedSym_0_1.set(FlexibleIndicator_77);
    Instrument_77.insert(FlexibleIndicator_77.getString());
    FIX::FloorPrice FloorPrice_77;
    FloorPrice_77.setString("8393628");
    noRelatedSym_0_1.set(FloorPrice_77);
    Instrument_77.insert(FloorPrice_77.getString());
    FIX::FlowScheduleType FlowScheduleType_77(1);
    noRelatedSym_0_1.set(FlowScheduleType_77);
    Instrument_77.insert(FlowScheduleType_77.getString());
    FIX::InstrRegistry InstrRegistry_77("STRING_1489298142");
    noRelatedSym_0_1.set(InstrRegistry_77);
    Instrument_77.insert(InstrRegistry_77.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_77('1');
    noRelatedSym_0_1.set(InstrmtAssignmentMethod_77);
    Instrument_77.insert(InstrmtAssignmentMethod_77.getString());
    FIX::InterestAccrualDate InterestAccrualDate_77("LOCALMKTDATE_2002324299");
    noRelatedSym_0_1.set(InterestAccrualDate_77);
    Instrument_77.insert(InterestAccrualDate_77.getString());
    FIX::IssueDate IssueDate_77("LOCALMKTDATE_714211218");
    noRelatedSym_0_1.set(IssueDate_77);
    Instrument_77.insert(IssueDate_77.getString());
    FIX::Issuer Issuer_77("STRING_2003518917");
    noRelatedSym_0_1.set(Issuer_77);
    Instrument_77.insert(Issuer_77.getString());
    FIX::ListMethod ListMethod_77(1);
    noRelatedSym_0_1.set(ListMethod_77);
    Instrument_77.insert(ListMethod_77.getString());
    FIX::LocaleOfIssue LocaleOfIssue_77("STRING_571367466");
    noRelatedSym_0_1.set(LocaleOfIssue_77);
    Instrument_77.insert(LocaleOfIssue_77.getString());
    FIX::MaturityDate MaturityDate_77("LOCALMKTDATE_2009592231");
    noRelatedSym_0_1.set(MaturityDate_77);
    Instrument_77.insert(MaturityDate_77.getString());
    FIX::MaturityMonthYear MaturityMonthYear_77("MONTHYEAR_594369393");
    noRelatedSym_0_1.set(MaturityMonthYear_77);
    Instrument_77.insert(MaturityMonthYear_77.getString());
    FIX::MaturityTime MaturityTime_77("TZTIMEONLY_1931186761");
    noRelatedSym_0_1.set(MaturityTime_77);
    Instrument_77.insert(MaturityTime_77.getString());
    FIX::MinPriceIncrement MinPriceIncrement_77;
    MinPriceIncrement_77.setString("19429047");
    noRelatedSym_0_1.set(MinPriceIncrement_77);
    Instrument_77.insert(MinPriceIncrement_77.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_77;
    MinPriceIncrementAmount_77.setString("20692560");
    noRelatedSym_0_1.set(MinPriceIncrementAmount_77);
    Instrument_77.insert(MinPriceIncrementAmount_77.getString());
    FIX::NTPositionLimit NTPositionLimit_77(1029551509);
    noRelatedSym_0_1.set(NTPositionLimit_77);
    Instrument_77.insert(NTPositionLimit_77.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_77;
    NotionalPercentageOutstanding_77.setString("79.270000");
    noRelatedSym_0_1.set(NotionalPercentageOutstanding_77);
    Instrument_77.insert(NotionalPercentageOutstanding_77.getString());
    FIX::OptAttribute OptAttribute_77('7');
    noRelatedSym_0_1.set(OptAttribute_77);
    Instrument_77.insert(OptAttribute_77.getString());
    FIX::OptPayoutAmount OptPayoutAmount_77;
    OptPayoutAmount_77.setString("16510565");
    noRelatedSym_0_1.set(OptPayoutAmount_77);
    Instrument_77.insert(OptPayoutAmount_77.getString());
    FIX::OptPayoutType OptPayoutType_77(2);
    noRelatedSym_0_1.set(OptPayoutType_77);
    Instrument_77.insert(OptPayoutType_77.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_77;
    OriginalNotionalPercentageOutstanding_77.setString("81.820000");
    noRelatedSym_0_1.set(OriginalNotionalPercentageOutstanding_77);
    Instrument_77.insert(OriginalNotionalPercentageOutstanding_77.getString());
    FIX::Pool Pool_77("STRING_1885736540");
    noRelatedSym_0_1.set(Pool_77);
    Instrument_77.insert(Pool_77.getString());
    FIX::PositionLimit PositionLimit_77(130421453);
    noRelatedSym_0_1.set(PositionLimit_77);
    Instrument_77.insert(PositionLimit_77.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_77("STRING_PCTPAR");
    noRelatedSym_0_1.set(PriceQuoteMethod_77);
    Instrument_77.insert(PriceQuoteMethod_77.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_77("STRING_1099509918");
    noRelatedSym_0_1.set(PriceUnitOfMeasure_77);
    Instrument_77.insert(PriceUnitOfMeasure_77.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_77;
    PriceUnitOfMeasureQty_77.setString("4971263");
    noRelatedSym_0_1.set(PriceUnitOfMeasureQty_77);
    Instrument_77.insert(PriceUnitOfMeasureQty_77.getString());
    FIX::Product Product_79(1);
    noRelatedSym_0_1.set(Product_79);
    Instrument_77.insert(Product_79.getString());
    FIX::ProductComplex ProductComplex_77("STRING_612594955");
    noRelatedSym_0_1.set(ProductComplex_77);
    Instrument_77.insert(ProductComplex_77.getString());
    FIX::PutOrCall PutOrCall_77(1);
    noRelatedSym_0_1.set(PutOrCall_77);
    Instrument_77.insert(PutOrCall_77.getString());
    FIX::RedemptionDate RedemptionDate_77("LOCALMKTDATE_67152359");
    noRelatedSym_0_1.set(RedemptionDate_77);
    Instrument_77.insert(RedemptionDate_77.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_77("STRING_1938482524");
    noRelatedSym_0_1.set(RepoCollateralSecurityType_77);
    Instrument_77.insert(RepoCollateralSecurityType_77.getString());
    FIX::RepurchaseRate RepurchaseRate_77;
    RepurchaseRate_77.setString("80.410000");
    noRelatedSym_0_1.set(RepurchaseRate_77);
    Instrument_77.insert(RepurchaseRate_77.getString());
    FIX::RepurchaseTerm RepurchaseTerm_77(906515251);
    noRelatedSym_0_1.set(RepurchaseTerm_77);
    Instrument_77.insert(RepurchaseTerm_77.getString());
    FIX::RestructuringType RestructuringType_77("STRING_FR");
    noRelatedSym_0_1.set(RestructuringType_77);
    Instrument_77.insert(RestructuringType_77.getString());
    FIX::SecurityDesc SecurityDesc_77("STRING_1862596183");
    noRelatedSym_0_1.set(SecurityDesc_77);
    Instrument_77.insert(SecurityDesc_77.getString());
    FIX::SecurityExchange SecurityExchange_77("EXCHANGE_220040996");
    noRelatedSym_0_1.set(SecurityExchange_77);
    Instrument_77.insert(SecurityExchange_77.getString());
    FIX::SecurityGroup SecurityGroup_77("STRING_751119343");
    noRelatedSym_0_1.set(SecurityGroup_77);
    Instrument_77.insert(SecurityGroup_77.getString());
    FIX::SecurityID SecurityID_77("STRING_429323754");
    noRelatedSym_0_1.set(SecurityID_77);
    Instrument_77.insert(SecurityID_77.getString());
    FIX::SecurityIDSource SecurityIDSource_77("STRING_2");
    noRelatedSym_0_1.set(SecurityIDSource_77);
    Instrument_77.insert(SecurityIDSource_77.getString());
    FIX::SecurityStatus SecurityStatus_77("STRING_1");
    noRelatedSym_0_1.set(SecurityStatus_77);
    Instrument_77.insert(SecurityStatus_77.getString());
    FIX::SecuritySubType SecuritySubType_78("STRING_1000691220");
    noRelatedSym_0_1.set(SecuritySubType_78);
    Instrument_77.insert(SecuritySubType_78.getString());
    FIX::SecurityType SecurityType_79("STRING_MPT");
    noRelatedSym_0_1.set(SecurityType_79);
    Instrument_77.insert(SecurityType_79.getString());
    FIX::Seniority Seniority_77("STRING_SB");
    noRelatedSym_0_1.set(Seniority_77);
    Instrument_77.insert(Seniority_77.getString());
    FIX::SettlMethod SettlMethod_77('P');
    noRelatedSym_0_1.set(SettlMethod_77);
    Instrument_77.insert(SettlMethod_77.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_77("STRING_1881089550");
    noRelatedSym_0_1.set(SettleOnOpenFlag_77);
    Instrument_77.insert(SettleOnOpenFlag_77.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_77("STRING_423441007");
    noRelatedSym_0_1.set(StateOrProvinceOfIssue_77);
    Instrument_77.insert(StateOrProvinceOfIssue_77.getString());
    FIX::StrikeCurrency StrikeCurrency_77("CHF");
    noRelatedSym_0_1.set(StrikeCurrency_77);
    Instrument_77.insert(StrikeCurrency_77.getString());
    FIX::StrikeMultiplier StrikeMultiplier_77;
    StrikeMultiplier_77.setString("11934917");
    noRelatedSym_0_1.set(StrikeMultiplier_77);
    Instrument_77.insert(StrikeMultiplier_77.getString());
    FIX::StrikePrice StrikePrice_77;
    StrikePrice_77.setString("13175187");
    noRelatedSym_0_1.set(StrikePrice_77);
    Instrument_77.insert(StrikePrice_77.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_77(4);
    noRelatedSym_0_1.set(StrikePriceBoundaryMethod_77);
    Instrument_77.insert(StrikePriceBoundaryMethod_77.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_77;
    StrikePriceBoundaryPrecision_77.setString("62.670000");
    noRelatedSym_0_1.set(StrikePriceBoundaryPrecision_77);
    Instrument_77.insert(StrikePriceBoundaryPrecision_77.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_77(2);
    noRelatedSym_0_1.set(StrikePriceDeterminationMethod_77);
    Instrument_77.insert(StrikePriceDeterminationMethod_77.getString());
    FIX::StrikeValue StrikeValue_77;
    StrikeValue_77.setString("18386958");
    noRelatedSym_0_1.set(StrikeValue_77);
    Instrument_77.insert(StrikeValue_77.getString());
    FIX::Symbol Symbol_77("STRING_2076712638");
    noRelatedSym_0_1.set(Symbol_77);
    Instrument_77.insert(Symbol_77.getString());
    FIX::SymbolSfx SymbolSfx_77("STRING_WI");
    noRelatedSym_0_1.set(SymbolSfx_77);
    Instrument_77.insert(SymbolSfx_77.getString());
    FIX::TimeUnit TimeUnit_77("STRING_D");
    noRelatedSym_0_1.set(TimeUnit_77);
    Instrument_77.insert(TimeUnit_77.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_77(1);
    noRelatedSym_0_1.set(UnderlyingPriceDeterminationMethod_77);
    Instrument_77.insert(UnderlyingPriceDeterminationMethod_77.getString());
    FIX::UnitOfMeasure UnitOfMeasure_77("STRING_lbs");
    noRelatedSym_0_1.set(UnitOfMeasure_77);
    Instrument_77.insert(UnitOfMeasure_77.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_77;
    UnitOfMeasureQty_77.setString("14341745");
    noRelatedSym_0_1.set(UnitOfMeasureQty_77);
    Instrument_77.insert(UnitOfMeasureQty_77.getString());
    FIX::ValuationMethod ValuationMethod_77("STRING_CDS");
    noRelatedSym_0_1.set(ValuationMethod_77);
    Instrument_77.insert(ValuationMethod_77.getString());
    all_values.push_back(Instrument_77);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_146;
      FIX::ComplexEventCondition ComplexEventCondition_146(1);
      noComplexEvents_1_1_0.set(ComplexEventCondition_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventCondition_146.getString());
      FIX::ComplexEventPrice ComplexEventPrice_146;
      ComplexEventPrice_146.setString("20290242");
      noComplexEvents_1_1_0.set(ComplexEventPrice_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPrice_146.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_146(3);
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryMethod_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceBoundaryMethod_146.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_146;
      ComplexEventPriceBoundaryPrecision_146.setString("51.390000");
      noComplexEvents_1_1_0.set(ComplexEventPriceBoundaryPrecision_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceBoundaryPrecision_146.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_146(1);
      noComplexEvents_1_1_0.set(ComplexEventPriceTimeType_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventPriceTimeType_146.getString());
      FIX::ComplexEventType ComplexEventType_146(6);
      noComplexEvents_1_1_0.set(ComplexEventType_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexEventType_146.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_146;
      ComplexOptPayoutAmount_146.setString("19519088");
      noComplexEvents_1_1_0.set(ComplexOptPayoutAmount_146);
      ComplexEvents_NoComplexEvents_146.insert(ComplexOptPayoutAmount_146.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_146);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_307;
        FIX::ComplexEventEndDate ComplexEventEndDate_307(FIX::UTCTIMESTAMP(9, 17, 17, 22, 122000));
        noComplexEventDates_1_0_2_0.set(ComplexEventEndDate_307);
        ComplexEventDates_NoComplexEventDates_307.insert(ComplexEventEndDate_307.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_307(FIX::UTCTIMESTAMP(1, 17, 6, 8, 92001));
        noComplexEventDates_1_0_2_0.set(ComplexEventStartDate_307);
        ComplexEventDates_NoComplexEventDates_307.insert(ComplexEventStartDate_307.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_307);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_612;
          FIX::ComplexEventEndTime ComplexEventEndTime_612(FIX::UTCTIMEONLY(6, 24, 51));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventEndTime_612);
          ComplexEventTimes_NoComplexEventTimes_612.insert(ComplexEventEndTime_612.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_612(FIX::UTCTIMEONLY(11, 26, 8));
          noComplexEventTimes_1_0_0_3_0.set(ComplexEventStartTime_612);
          ComplexEventTimes_NoComplexEventTimes_612.insert(ComplexEventStartTime_612.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_612);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_613;
          FIX::ComplexEventEndTime ComplexEventEndTime_613(FIX::UTCTIMEONLY(8, 35, 54));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventEndTime_613);
          ComplexEventTimes_NoComplexEventTimes_613.insert(ComplexEventEndTime_613.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_613(FIX::UTCTIMEONLY(14, 40, 24));
          noComplexEventTimes_1_0_0_3_1.set(ComplexEventStartTime_613);
          ComplexEventTimes_NoComplexEventTimes_613.insert(ComplexEventStartTime_613.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_613);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_614;
          FIX::ComplexEventEndTime ComplexEventEndTime_614(FIX::UTCTIMEONLY(1, 41, 19));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventEndTime_614);
          ComplexEventTimes_NoComplexEventTimes_614.insert(ComplexEventEndTime_614.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_614(FIX::UTCTIMEONLY(9, 35, 9));
          noComplexEventTimes_1_0_0_3_2.set(ComplexEventStartTime_614);
          ComplexEventTimes_NoComplexEventTimes_614.insert(ComplexEventStartTime_614.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_614);

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_148;
      FIX::EventDate EventDate_148("LOCALMKTDATE_117688484");
      noEvents_1_1_0.set(EventDate_148);
      EvntGrp_NoEvents_148.insert(EventDate_148.getString());
      FIX::EventPx EventPx_148;
      EventPx_148.setString("4057051");
      noEvents_1_1_0.set(EventPx_148);
      EvntGrp_NoEvents_148.insert(EventPx_148.getString());
      FIX::EventText EventText_148("STRING_2104686994");
      noEvents_1_1_0.set(EventText_148);
      EvntGrp_NoEvents_148.insert(EventText_148.getString());
      FIX::EventTime EventTime_148(FIX::UTCTIMESTAMP(14, 19, 47, 4, 92006));
      noEvents_1_1_0.set(EventTime_148);
      EvntGrp_NoEvents_148.insert(EventTime_148.getString());
      FIX::EventType EventType_148(14);
      noEvents_1_1_0.set(EventType_148);
      EvntGrp_NoEvents_148.insert(EventType_148.getString());
      all_values.push_back(EvntGrp_NoEvents_148);

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_149;
      FIX::EventDate EventDate_149("LOCALMKTDATE_106677323");
      noEvents_1_1_1.set(EventDate_149);
      EvntGrp_NoEvents_149.insert(EventDate_149.getString());
      FIX::EventPx EventPx_149;
      EventPx_149.setString("13962275");
      noEvents_1_1_1.set(EventPx_149);
      EvntGrp_NoEvents_149.insert(EventPx_149.getString());
      FIX::EventText EventText_149("STRING_1565943661");
      noEvents_1_1_1.set(EventText_149);
      EvntGrp_NoEvents_149.insert(EventText_149.getString());
      FIX::EventTime EventTime_149(FIX::UTCTIMESTAMP(5, 29, 12, 16, 122010));
      noEvents_1_1_1.set(EventTime_149);
      EvntGrp_NoEvents_149.insert(EventTime_149.getString());
      FIX::EventType EventType_149(1);
      noEvents_1_1_1.set(EventType_149);
      EvntGrp_NoEvents_149.insert(EventType_149.getString());
      all_values.push_back(EvntGrp_NoEvents_149);

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_148;
      FIX::InstrumentPartyID InstrumentPartyID_148("STRING_129130990");
      noInstrumentParties_1_1_0.set(InstrumentPartyID_148);
      InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyID_148.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_148('1');
      noInstrumentParties_1_1_0.set(InstrumentPartyIDSource_148);
      InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyIDSource_148.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_148(1541090592);
      noInstrumentParties_1_1_0.set(InstrumentPartyRole_148);
      InstrumentParties_NoInstrumentParties_148.insert(InstrumentPartyRole_148.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_148);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298;
        FIX::InstrumentPartySubID InstrumentPartySubID_298("STRING_518197935");
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubID_298);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298.insert(InstrumentPartySubID_298.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_298(1869056027);
        noInstrumentPartySubIDs_1_0_2_0.set(InstrumentPartySubIDType_298);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298.insert(InstrumentPartySubIDType_298.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_298);

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_149;
      FIX::InstrumentPartyID InstrumentPartyID_149("STRING_980035807");
      noInstrumentParties_1_1_1.set(InstrumentPartyID_149);
      InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyID_149.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_149('4');
      noInstrumentParties_1_1_1.set(InstrumentPartyIDSource_149);
      InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyIDSource_149.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_149(1986744511);
      noInstrumentParties_1_1_1.set(InstrumentPartyRole_149);
      InstrumentParties_NoInstrumentParties_149.insert(InstrumentPartyRole_149.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_149);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299;
        FIX::InstrumentPartySubID InstrumentPartySubID_299("STRING_2109265131");
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubID_299);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299.insert(InstrumentPartySubID_299.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_299(595098664);
        noInstrumentPartySubIDs_1_1_2_0.set(InstrumentPartySubIDType_299);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299.insert(InstrumentPartySubIDType_299.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_299);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300;
        FIX::InstrumentPartySubID InstrumentPartySubID_300("STRING_1125742052");
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubID_300);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300.insert(InstrumentPartySubID_300.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_300(81020163);
        noInstrumentPartySubIDs_1_1_2_1.set(InstrumentPartySubIDType_300);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300.insert(InstrumentPartySubIDType_300.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_300);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301;
        FIX::InstrumentPartySubID InstrumentPartySubID_301("STRING_1918314771");
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubID_301);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301.insert(InstrumentPartySubID_301.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_301(207837024);
        noInstrumentPartySubIDs_1_1_2_2.set(InstrumentPartySubIDType_301);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301.insert(InstrumentPartySubIDType_301.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_301);

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_161;
      FIX::SecurityAltID SecurityAltID_161("STRING_569298494");
      noSecurityAltID_1_1_0.set(SecurityAltID_161);
      SecAltIDGrp_NoSecurityAltID_161.insert(SecurityAltID_161.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_161("STRING_1399902318");
      noSecurityAltID_1_1_0.set(SecurityAltIDSource_161);
      SecAltIDGrp_NoSecurityAltID_161.insert(SecurityAltIDSource_161.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_161);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_162;
      FIX::SecurityAltID SecurityAltID_162("STRING_657310030");
      noSecurityAltID_1_1_1.set(SecurityAltID_162);
      SecAltIDGrp_NoSecurityAltID_162.insert(SecurityAltID_162.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_162("STRING_1965526090");
      noSecurityAltID_1_1_1.set(SecurityAltIDSource_162);
      SecAltIDGrp_NoSecurityAltID_162.insert(SecurityAltIDSource_162.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_162);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_163;
      FIX::SecurityAltID SecurityAltID_163("STRING_818362331");
      noSecurityAltID_1_1_2.set(SecurityAltID_163);
      SecAltIDGrp_NoSecurityAltID_163.insert(SecurityAltID_163.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_163("STRING_61041088");
      noSecurityAltID_1_1_2.set(SecurityAltIDSource_163);
      SecAltIDGrp_NoSecurityAltID_163.insert(SecurityAltIDSource_163.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_163);

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_154;
    FIX::SecurityXML SecurityXML_155("XMLDATA_1693570831");
    noRelatedSym_0_1.set(SecurityXML_155);
    FIX::SecurityXMLLen SecurityXMLLen_77(1918371100);
    noRelatedSym_0_1.set(SecurityXMLLen_77);
    FIX::SecurityXMLSchema SecurityXMLSchema_77("STRING_284411020");
    noRelatedSym_0_1.set(SecurityXMLSchema_77);
    SecurityXML_154.insert(SecurityXMLSchema_77.getString());
    all_values.push_back(SecurityXML_154);

    // InstrumentExtension
    multiset<string> InstrumentExtension_14;
    FIX::DeliveryForm DeliveryForm_14(1);
    noRelatedSym_0_1.set(DeliveryForm_14);
    InstrumentExtension_14.insert(DeliveryForm_14.getString());
    FIX::PctAtRisk PctAtRisk_14;
    PctAtRisk_14.setString("74.120000");
    noRelatedSym_0_1.set(PctAtRisk_14);
    InstrumentExtension_14.insert(PctAtRisk_14.getString());
    all_values.push_back(InstrumentExtension_14);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_30;
      FIX::InstrAttribType InstrAttribType_30(11);
      noInstrAttrib_1_1_0.set(InstrAttribType_30);
      AttrbGrp_NoInstrAttrib_30.insert(InstrAttribType_30.getString());
      FIX::InstrAttribValue InstrAttribValue_30("STRING_125623885");
      noInstrAttrib_1_1_0.set(InstrAttribValue_30);
      AttrbGrp_NoInstrAttrib_30.insert(InstrAttribValue_30.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_30);

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_1;
      FIX::LegSettlType LegSettlType_22('7');
      noLegs_1_1_0.set(LegSettlType_22);
      SecLstUpdRelSymsLegGrp_NoLegs_1.insert(LegSettlType_22.getString());
      FIX::LegSwapType LegSwapType_22(4);
      noLegs_1_1_0.set(LegSwapType_22);
      SecLstUpdRelSymsLegGrp_NoLegs_1.insert(LegSwapType_22.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_1);

      // InstrumentLeg
      multiset<string> InstrumentLeg_110;
      FIX::EncodedLegIssuer EncodedLegIssuer_110("DATA_113831141");
      noLegs_1_1_0.set(EncodedLegIssuer_110);
      InstrumentLeg_110.insert(EncodedLegIssuer_110.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_110(1235045989);
      noLegs_1_1_0.set(EncodedLegIssuerLen_110);
      InstrumentLeg_110.insert(EncodedLegIssuerLen_110.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_110("DATA_1388286857");
      noLegs_1_1_0.set(EncodedLegSecurityDesc_110);
      InstrumentLeg_110.insert(EncodedLegSecurityDesc_110.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_110(1093866948);
      noLegs_1_1_0.set(EncodedLegSecurityDescLen_110);
      InstrumentLeg_110.insert(EncodedLegSecurityDescLen_110.getString());
      FIX::LegCFICode LegCFICode_110("STRING_1239624126");
      noLegs_1_1_0.set(LegCFICode_110);
      InstrumentLeg_110.insert(LegCFICode_110.getString());
      FIX::LegContractMultiplier LegContractMultiplier_110;
      LegContractMultiplier_110.setString("12275477");
      noLegs_1_1_0.set(LegContractMultiplier_110);
      InstrumentLeg_110.insert(LegContractMultiplier_110.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_110(332124234);
      noLegs_1_1_0.set(LegContractMultiplierUnit_110);
      InstrumentLeg_110.insert(LegContractMultiplierUnit_110.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_110("MONTHYEAR_1201405610");
      noLegs_1_1_0.set(LegContractSettlMonth_110);
      InstrumentLeg_110.insert(LegContractSettlMonth_110.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_110("COUNTRY_1822646385");
      noLegs_1_1_0.set(LegCountryOfIssue_110);
      InstrumentLeg_110.insert(LegCountryOfIssue_110.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_110("LOCALMKTDATE_1457866286");
      noLegs_1_1_0.set(LegCouponPaymentDate_110);
      InstrumentLeg_110.insert(LegCouponPaymentDate_110.getString());
      FIX::LegCouponRate LegCouponRate_110;
      LegCouponRate_110.setString("57.730000");
      noLegs_1_1_0.set(LegCouponRate_110);
      InstrumentLeg_110.insert(LegCouponRate_110.getString());
      FIX::LegCreditRating LegCreditRating_110("STRING_1593477508");
      noLegs_1_1_0.set(LegCreditRating_110);
      InstrumentLeg_110.insert(LegCreditRating_110.getString());
      FIX::LegCurrency LegCurrency_110("JPY");
      noLegs_1_1_0.set(LegCurrency_110);
      InstrumentLeg_110.insert(LegCurrency_110.getString());
      FIX::LegDatedDate LegDatedDate_110("LOCALMKTDATE_15292354");
      noLegs_1_1_0.set(LegDatedDate_110);
      InstrumentLeg_110.insert(LegDatedDate_110.getString());
      FIX::LegExerciseStyle LegExerciseStyle_110(918121980);
      noLegs_1_1_0.set(LegExerciseStyle_110);
      InstrumentLeg_110.insert(LegExerciseStyle_110.getString());
      FIX::LegFactor LegFactor_110;
      LegFactor_110.setString("3428848");
      noLegs_1_1_0.set(LegFactor_110);
      InstrumentLeg_110.insert(LegFactor_110.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_110(1980818445);
      noLegs_1_1_0.set(LegFlowScheduleType_110);
      InstrumentLeg_110.insert(LegFlowScheduleType_110.getString());
      FIX::LegInstrRegistry LegInstrRegistry_110("STRING_1736484312");
      noLegs_1_1_0.set(LegInstrRegistry_110);
      InstrumentLeg_110.insert(LegInstrRegistry_110.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_110("LOCALMKTDATE_403925950");
      noLegs_1_1_0.set(LegInterestAccrualDate_110);
      InstrumentLeg_110.insert(LegInterestAccrualDate_110.getString());
      FIX::LegIssueDate LegIssueDate_110("LOCALMKTDATE_1526905628");
      noLegs_1_1_0.set(LegIssueDate_110);
      InstrumentLeg_110.insert(LegIssueDate_110.getString());
      FIX::LegIssuer LegIssuer_110("STRING_1507371764");
      noLegs_1_1_0.set(LegIssuer_110);
      InstrumentLeg_110.insert(LegIssuer_110.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_110("STRING_688336970");
      noLegs_1_1_0.set(LegLocaleOfIssue_110);
      InstrumentLeg_110.insert(LegLocaleOfIssue_110.getString());
      FIX::LegMaturityDate LegMaturityDate_110("LOCALMKTDATE_1381919908");
      noLegs_1_1_0.set(LegMaturityDate_110);
      InstrumentLeg_110.insert(LegMaturityDate_110.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_110("MONTHYEAR_1823639176");
      noLegs_1_1_0.set(LegMaturityMonthYear_110);
      InstrumentLeg_110.insert(LegMaturityMonthYear_110.getString());
      FIX::LegMaturityTime LegMaturityTime_110("TZTIMEONLY_1820182043");
      noLegs_1_1_0.set(LegMaturityTime_110);
      InstrumentLeg_110.insert(LegMaturityTime_110.getString());
      FIX::LegOptAttribute LegOptAttribute_110('1');
      noLegs_1_1_0.set(LegOptAttribute_110);
      InstrumentLeg_110.insert(LegOptAttribute_110.getString());
      FIX::LegOptionRatio LegOptionRatio_110;
      LegOptionRatio_110.setString("19492630");
      noLegs_1_1_0.set(LegOptionRatio_110);
      InstrumentLeg_110.insert(LegOptionRatio_110.getString());
      FIX::LegPool LegPool_110("STRING_933674458");
      noLegs_1_1_0.set(LegPool_110);
      InstrumentLeg_110.insert(LegPool_110.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_110("STRING_873765875");
      noLegs_1_1_0.set(LegPriceUnitOfMeasure_110);
      InstrumentLeg_110.insert(LegPriceUnitOfMeasure_110.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_110;
      LegPriceUnitOfMeasureQty_110.setString("14684938");
      noLegs_1_1_0.set(LegPriceUnitOfMeasureQty_110);
      InstrumentLeg_110.insert(LegPriceUnitOfMeasureQty_110.getString());
      FIX::LegProduct LegProduct_110(1047505599);
      noLegs_1_1_0.set(LegProduct_110);
      InstrumentLeg_110.insert(LegProduct_110.getString());
      FIX::LegPutOrCall LegPutOrCall_110(2108811865);
      noLegs_1_1_0.set(LegPutOrCall_110);
      InstrumentLeg_110.insert(LegPutOrCall_110.getString());
      FIX::LegRatioQty LegRatioQty_110;
      LegRatioQty_110.setString("7092971");
      noLegs_1_1_0.set(LegRatioQty_110);
      InstrumentLeg_110.insert(LegRatioQty_110.getString());
      FIX::LegRedemptionDate LegRedemptionDate_110("LOCALMKTDATE_2141372547");
      noLegs_1_1_0.set(LegRedemptionDate_110);
      InstrumentLeg_110.insert(LegRedemptionDate_110.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_110("STRING_1200952343");
      noLegs_1_1_0.set(LegRepoCollateralSecurityType_110);
      InstrumentLeg_110.insert(LegRepoCollateralSecurityType_110.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_110;
      LegRepurchaseRate_110.setString("48.220000");
      noLegs_1_1_0.set(LegRepurchaseRate_110);
      InstrumentLeg_110.insert(LegRepurchaseRate_110.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_110(326013133);
      noLegs_1_1_0.set(LegRepurchaseTerm_110);
      InstrumentLeg_110.insert(LegRepurchaseTerm_110.getString());
      FIX::LegSecurityDesc LegSecurityDesc_110("STRING_254874305");
      noLegs_1_1_0.set(LegSecurityDesc_110);
      InstrumentLeg_110.insert(LegSecurityDesc_110.getString());
      FIX::LegSecurityExchange LegSecurityExchange_110("EXCHANGE_1612007559");
      noLegs_1_1_0.set(LegSecurityExchange_110);
      InstrumentLeg_110.insert(LegSecurityExchange_110.getString());
      FIX::LegSecurityID LegSecurityID_110("STRING_1783879419");
      noLegs_1_1_0.set(LegSecurityID_110);
      InstrumentLeg_110.insert(LegSecurityID_110.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_110("STRING_1537300078");
      noLegs_1_1_0.set(LegSecurityIDSource_110);
      InstrumentLeg_110.insert(LegSecurityIDSource_110.getString());
      FIX::LegSecuritySubType LegSecuritySubType_110("STRING_1058001420");
      noLegs_1_1_0.set(LegSecuritySubType_110);
      InstrumentLeg_110.insert(LegSecuritySubType_110.getString());
      FIX::LegSecurityType LegSecurityType_110("STRING_1302099082");
      noLegs_1_1_0.set(LegSecurityType_110);
      InstrumentLeg_110.insert(LegSecurityType_110.getString());
      FIX::LegSide LegSide_110('1');
      noLegs_1_1_0.set(LegSide_110);
      InstrumentLeg_110.insert(LegSide_110.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_110("STRING_1073293774");
      noLegs_1_1_0.set(LegStateOrProvinceOfIssue_110);
      InstrumentLeg_110.insert(LegStateOrProvinceOfIssue_110.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_110("USD");
      noLegs_1_1_0.set(LegStrikeCurrency_110);
      InstrumentLeg_110.insert(LegStrikeCurrency_110.getString());
      FIX::LegStrikePrice LegStrikePrice_110;
      LegStrikePrice_110.setString("9066285");
      noLegs_1_1_0.set(LegStrikePrice_110);
      InstrumentLeg_110.insert(LegStrikePrice_110.getString());
      FIX::LegSymbol LegSymbol_110("STRING_1809221726");
      noLegs_1_1_0.set(LegSymbol_110);
      InstrumentLeg_110.insert(LegSymbol_110.getString());
      FIX::LegSymbolSfx LegSymbolSfx_110("STRING_1969685722");
      noLegs_1_1_0.set(LegSymbolSfx_110);
      InstrumentLeg_110.insert(LegSymbolSfx_110.getString());
      FIX::LegTimeUnit LegTimeUnit_110("STRING_286050552");
      noLegs_1_1_0.set(LegTimeUnit_110);
      InstrumentLeg_110.insert(LegTimeUnit_110.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_110("STRING_1169109843");
      noLegs_1_1_0.set(LegUnitOfMeasure_110);
      InstrumentLeg_110.insert(LegUnitOfMeasure_110.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_110;
      LegUnitOfMeasureQty_110.setString("5105390");
      noLegs_1_1_0.set(LegUnitOfMeasureQty_110);
      InstrumentLeg_110.insert(LegUnitOfMeasureQty_110.getString());
      all_values.push_back(InstrumentLeg_110);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_197;
        FIX::LegSecurityAltID LegSecurityAltID_197("STRING_845265371");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltID_197);
        LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltID_197.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_197("STRING_183237440");
        noLegSecurityAltID_1_0_2_0.set(LegSecurityAltIDSource_197);
        LegSecAltIDGrp_NoLegSecurityAltID_197.insert(LegSecurityAltIDSource_197.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_197);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_198;
        FIX::LegSecurityAltID LegSecurityAltID_198("STRING_1824888281");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltID_198);
        LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltID_198.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_198("STRING_647044785");
        noLegSecurityAltID_1_0_2_1.set(LegSecurityAltIDSource_198);
        LegSecAltIDGrp_NoLegSecurityAltID_198.insert(LegSecurityAltIDSource_198.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_198);

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_15;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_15("CHF");
      noLegs_1_1_0.set(LegBenchmarkCurveCurrency_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurveCurrency_15.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_15("STRING_2115538677");
      noLegs_1_1_0.set(LegBenchmarkCurveName_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurveName_15.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_15("STRING_16933850");
      noLegs_1_1_0.set(LegBenchmarkCurvePoint_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurvePoint_15.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_15;
      LegBenchmarkPrice_15.setString("5124987");
      noLegs_1_1_0.set(LegBenchmarkPrice_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkPrice_15.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_15(677352131);
      noLegs_1_1_0.set(LegBenchmarkPriceType_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkPriceType_15.getString());
      all_values.push_back(LegBenchmarkCurveData_15);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_52;
        FIX::LegStipulationType LegStipulationType_52("STRING_1713451069");
        noLegStipulations_1_0_2_0.set(LegStipulationType_52);
        LegStipulations_NoLegStipulations_52.insert(LegStipulationType_52.getString());
        FIX::LegStipulationValue LegStipulationValue_52("STRING_466713305");
        noLegStipulations_1_0_2_0.set(LegStipulationValue_52);
        LegStipulations_NoLegStipulations_52.insert(LegStipulationValue_52.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_52);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_53;
        FIX::LegStipulationType LegStipulationType_53("STRING_336835883");
        noLegStipulations_1_0_2_1.set(LegStipulationType_53);
        LegStipulations_NoLegStipulations_53.insert(LegStipulationType_53.getString());
        FIX::LegStipulationValue LegStipulationValue_53("STRING_1968325375");
        noLegStipulations_1_0_2_1.set(LegStipulationValue_53);
        LegStipulations_NoLegStipulations_53.insert(LegStipulationValue_53.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_53);

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_1_1_1;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_2;
      FIX::LegSettlType LegSettlType_23('2');
      noLegs_1_1_1.set(LegSettlType_23);
      SecLstUpdRelSymsLegGrp_NoLegs_2.insert(LegSettlType_23.getString());
      FIX::LegSwapType LegSwapType_23(5);
      noLegs_1_1_1.set(LegSwapType_23);
      SecLstUpdRelSymsLegGrp_NoLegs_2.insert(LegSwapType_23.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_2);

      // InstrumentLeg
      multiset<string> InstrumentLeg_111;
      FIX::EncodedLegIssuer EncodedLegIssuer_111("DATA_1358141805");
      noLegs_1_1_1.set(EncodedLegIssuer_111);
      InstrumentLeg_111.insert(EncodedLegIssuer_111.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_111(989238637);
      noLegs_1_1_1.set(EncodedLegIssuerLen_111);
      InstrumentLeg_111.insert(EncodedLegIssuerLen_111.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_111("DATA_1275330737");
      noLegs_1_1_1.set(EncodedLegSecurityDesc_111);
      InstrumentLeg_111.insert(EncodedLegSecurityDesc_111.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_111(433533068);
      noLegs_1_1_1.set(EncodedLegSecurityDescLen_111);
      InstrumentLeg_111.insert(EncodedLegSecurityDescLen_111.getString());
      FIX::LegCFICode LegCFICode_111("STRING_2062532411");
      noLegs_1_1_1.set(LegCFICode_111);
      InstrumentLeg_111.insert(LegCFICode_111.getString());
      FIX::LegContractMultiplier LegContractMultiplier_111;
      LegContractMultiplier_111.setString("13480681");
      noLegs_1_1_1.set(LegContractMultiplier_111);
      InstrumentLeg_111.insert(LegContractMultiplier_111.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_111(1999292840);
      noLegs_1_1_1.set(LegContractMultiplierUnit_111);
      InstrumentLeg_111.insert(LegContractMultiplierUnit_111.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_111("MONTHYEAR_821677335");
      noLegs_1_1_1.set(LegContractSettlMonth_111);
      InstrumentLeg_111.insert(LegContractSettlMonth_111.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_111("COUNTRY_1009806230");
      noLegs_1_1_1.set(LegCountryOfIssue_111);
      InstrumentLeg_111.insert(LegCountryOfIssue_111.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_111("LOCALMKTDATE_1821494915");
      noLegs_1_1_1.set(LegCouponPaymentDate_111);
      InstrumentLeg_111.insert(LegCouponPaymentDate_111.getString());
      FIX::LegCouponRate LegCouponRate_111;
      LegCouponRate_111.setString("78.870000");
      noLegs_1_1_1.set(LegCouponRate_111);
      InstrumentLeg_111.insert(LegCouponRate_111.getString());
      FIX::LegCreditRating LegCreditRating_111("STRING_31432425");
      noLegs_1_1_1.set(LegCreditRating_111);
      InstrumentLeg_111.insert(LegCreditRating_111.getString());
      FIX::LegCurrency LegCurrency_111("CAN");
      noLegs_1_1_1.set(LegCurrency_111);
      InstrumentLeg_111.insert(LegCurrency_111.getString());
      FIX::LegDatedDate LegDatedDate_111("LOCALMKTDATE_876697796");
      noLegs_1_1_1.set(LegDatedDate_111);
      InstrumentLeg_111.insert(LegDatedDate_111.getString());
      FIX::LegExerciseStyle LegExerciseStyle_111(367787752);
      noLegs_1_1_1.set(LegExerciseStyle_111);
      InstrumentLeg_111.insert(LegExerciseStyle_111.getString());
      FIX::LegFactor LegFactor_111;
      LegFactor_111.setString("3056193");
      noLegs_1_1_1.set(LegFactor_111);
      InstrumentLeg_111.insert(LegFactor_111.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_111(1523742582);
      noLegs_1_1_1.set(LegFlowScheduleType_111);
      InstrumentLeg_111.insert(LegFlowScheduleType_111.getString());
      FIX::LegInstrRegistry LegInstrRegistry_111("STRING_1484699651");
      noLegs_1_1_1.set(LegInstrRegistry_111);
      InstrumentLeg_111.insert(LegInstrRegistry_111.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_111("LOCALMKTDATE_856789842");
      noLegs_1_1_1.set(LegInterestAccrualDate_111);
      InstrumentLeg_111.insert(LegInterestAccrualDate_111.getString());
      FIX::LegIssueDate LegIssueDate_111("LOCALMKTDATE_1491797611");
      noLegs_1_1_1.set(LegIssueDate_111);
      InstrumentLeg_111.insert(LegIssueDate_111.getString());
      FIX::LegIssuer LegIssuer_111("STRING_1501633502");
      noLegs_1_1_1.set(LegIssuer_111);
      InstrumentLeg_111.insert(LegIssuer_111.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_111("STRING_1369288568");
      noLegs_1_1_1.set(LegLocaleOfIssue_111);
      InstrumentLeg_111.insert(LegLocaleOfIssue_111.getString());
      FIX::LegMaturityDate LegMaturityDate_111("LOCALMKTDATE_21666094");
      noLegs_1_1_1.set(LegMaturityDate_111);
      InstrumentLeg_111.insert(LegMaturityDate_111.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_111("MONTHYEAR_1512456252");
      noLegs_1_1_1.set(LegMaturityMonthYear_111);
      InstrumentLeg_111.insert(LegMaturityMonthYear_111.getString());
      FIX::LegMaturityTime LegMaturityTime_111("TZTIMEONLY_935255989");
      noLegs_1_1_1.set(LegMaturityTime_111);
      InstrumentLeg_111.insert(LegMaturityTime_111.getString());
      FIX::LegOptAttribute LegOptAttribute_111('4');
      noLegs_1_1_1.set(LegOptAttribute_111);
      InstrumentLeg_111.insert(LegOptAttribute_111.getString());
      FIX::LegOptionRatio LegOptionRatio_111;
      LegOptionRatio_111.setString("18492921");
      noLegs_1_1_1.set(LegOptionRatio_111);
      InstrumentLeg_111.insert(LegOptionRatio_111.getString());
      FIX::LegPool LegPool_111("STRING_756097716");
      noLegs_1_1_1.set(LegPool_111);
      InstrumentLeg_111.insert(LegPool_111.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_111("STRING_419616617");
      noLegs_1_1_1.set(LegPriceUnitOfMeasure_111);
      InstrumentLeg_111.insert(LegPriceUnitOfMeasure_111.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_111;
      LegPriceUnitOfMeasureQty_111.setString("18225237");
      noLegs_1_1_1.set(LegPriceUnitOfMeasureQty_111);
      InstrumentLeg_111.insert(LegPriceUnitOfMeasureQty_111.getString());
      FIX::LegProduct LegProduct_111(2114239522);
      noLegs_1_1_1.set(LegProduct_111);
      InstrumentLeg_111.insert(LegProduct_111.getString());
      FIX::LegPutOrCall LegPutOrCall_111(1408855254);
      noLegs_1_1_1.set(LegPutOrCall_111);
      InstrumentLeg_111.insert(LegPutOrCall_111.getString());
      FIX::LegRatioQty LegRatioQty_111;
      LegRatioQty_111.setString("9503708");
      noLegs_1_1_1.set(LegRatioQty_111);
      InstrumentLeg_111.insert(LegRatioQty_111.getString());
      FIX::LegRedemptionDate LegRedemptionDate_111("LOCALMKTDATE_400288942");
      noLegs_1_1_1.set(LegRedemptionDate_111);
      InstrumentLeg_111.insert(LegRedemptionDate_111.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_111("STRING_1323904017");
      noLegs_1_1_1.set(LegRepoCollateralSecurityType_111);
      InstrumentLeg_111.insert(LegRepoCollateralSecurityType_111.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_111;
      LegRepurchaseRate_111.setString("53.830000");
      noLegs_1_1_1.set(LegRepurchaseRate_111);
      InstrumentLeg_111.insert(LegRepurchaseRate_111.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_111(252098134);
      noLegs_1_1_1.set(LegRepurchaseTerm_111);
      InstrumentLeg_111.insert(LegRepurchaseTerm_111.getString());
      FIX::LegSecurityDesc LegSecurityDesc_111("STRING_2145581352");
      noLegs_1_1_1.set(LegSecurityDesc_111);
      InstrumentLeg_111.insert(LegSecurityDesc_111.getString());
      FIX::LegSecurityExchange LegSecurityExchange_111("EXCHANGE_1160761613");
      noLegs_1_1_1.set(LegSecurityExchange_111);
      InstrumentLeg_111.insert(LegSecurityExchange_111.getString());
      FIX::LegSecurityID LegSecurityID_111("STRING_2073593049");
      noLegs_1_1_1.set(LegSecurityID_111);
      InstrumentLeg_111.insert(LegSecurityID_111.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_111("STRING_1105825591");
      noLegs_1_1_1.set(LegSecurityIDSource_111);
      InstrumentLeg_111.insert(LegSecurityIDSource_111.getString());
      FIX::LegSecuritySubType LegSecuritySubType_111("STRING_1192194038");
      noLegs_1_1_1.set(LegSecuritySubType_111);
      InstrumentLeg_111.insert(LegSecuritySubType_111.getString());
      FIX::LegSecurityType LegSecurityType_111("STRING_110659713");
      noLegs_1_1_1.set(LegSecurityType_111);
      InstrumentLeg_111.insert(LegSecurityType_111.getString());
      FIX::LegSide LegSide_111('1');
      noLegs_1_1_1.set(LegSide_111);
      InstrumentLeg_111.insert(LegSide_111.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_111("STRING_2068891834");
      noLegs_1_1_1.set(LegStateOrProvinceOfIssue_111);
      InstrumentLeg_111.insert(LegStateOrProvinceOfIssue_111.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_111("JPY");
      noLegs_1_1_1.set(LegStrikeCurrency_111);
      InstrumentLeg_111.insert(LegStrikeCurrency_111.getString());
      FIX::LegStrikePrice LegStrikePrice_111;
      LegStrikePrice_111.setString("14451507");
      noLegs_1_1_1.set(LegStrikePrice_111);
      InstrumentLeg_111.insert(LegStrikePrice_111.getString());
      FIX::LegSymbol LegSymbol_111("STRING_1963147117");
      noLegs_1_1_1.set(LegSymbol_111);
      InstrumentLeg_111.insert(LegSymbol_111.getString());
      FIX::LegSymbolSfx LegSymbolSfx_111("STRING_748965818");
      noLegs_1_1_1.set(LegSymbolSfx_111);
      InstrumentLeg_111.insert(LegSymbolSfx_111.getString());
      FIX::LegTimeUnit LegTimeUnit_111("STRING_789464732");
      noLegs_1_1_1.set(LegTimeUnit_111);
      InstrumentLeg_111.insert(LegTimeUnit_111.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_111("STRING_1317296971");
      noLegs_1_1_1.set(LegUnitOfMeasure_111);
      InstrumentLeg_111.insert(LegUnitOfMeasure_111.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_111;
      LegUnitOfMeasureQty_111.setString("21182543");
      noLegs_1_1_1.set(LegUnitOfMeasureQty_111);
      InstrumentLeg_111.insert(LegUnitOfMeasureQty_111.getString());
      all_values.push_back(InstrumentLeg_111);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_199;
        FIX::LegSecurityAltID LegSecurityAltID_199("STRING_682269575");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltID_199);
        LegSecAltIDGrp_NoLegSecurityAltID_199.insert(LegSecurityAltID_199.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_199("STRING_906026727");
        noLegSecurityAltID_1_1_2_0.set(LegSecurityAltIDSource_199);
        LegSecAltIDGrp_NoLegSecurityAltID_199.insert(LegSecurityAltIDSource_199.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_199);

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_16;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_16("CHF");
      noLegs_1_1_1.set(LegBenchmarkCurveCurrency_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurveCurrency_16.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_16("STRING_1662124444");
      noLegs_1_1_1.set(LegBenchmarkCurveName_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurveName_16.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_16("STRING_1719126843");
      noLegs_1_1_1.set(LegBenchmarkCurvePoint_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurvePoint_16.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_16;
      LegBenchmarkPrice_16.setString("591182");
      noLegs_1_1_1.set(LegBenchmarkPrice_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkPrice_16.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_16(1628880318);
      noLegs_1_1_1.set(LegBenchmarkPriceType_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkPriceType_16.getString());
      all_values.push_back(LegBenchmarkCurveData_16);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_54;
        FIX::LegStipulationType LegStipulationType_54("STRING_1009489085");
        noLegStipulations_1_1_2_0.set(LegStipulationType_54);
        LegStipulations_NoLegStipulations_54.insert(LegStipulationType_54.getString());
        FIX::LegStipulationValue LegStipulationValue_54("STRING_2029169260");
        noLegStipulations_1_1_2_0.set(LegStipulationValue_54);
        LegStipulations_NoLegStipulations_54.insert(LegStipulationValue_54.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_54);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_55;
        FIX::LegStipulationType LegStipulationType_55("STRING_156918819");
        noLegStipulations_1_1_2_1.set(LegStipulationType_55);
        LegStipulations_NoLegStipulations_55.insert(LegStipulationType_55.getString());
        FIX::LegStipulationValue LegStipulationValue_55("STRING_1160444468");
        noLegStipulations_1_1_2_1.set(LegStipulationValue_55);
        LegStipulations_NoLegStipulations_55.insert(LegStipulationValue_55.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_55);

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_15;
    FIX::ExpirationCycle ExpirationCycle_16(0);
    noRelatedSym_0_1.set(ExpirationCycle_16);
    BaseTradingRules_15.insert(ExpirationCycle_16.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_15(3);
    noRelatedSym_0_1.set(ImpliedMarketIndicator_15);
    BaseTradingRules_15.insert(ImpliedMarketIndicator_15.getString());
    FIX::MaxPriceVariation MaxPriceVariation_15;
    MaxPriceVariation_15.setString("1737224");
    noRelatedSym_0_1.set(MaxPriceVariation_15);
    BaseTradingRules_15.insert(MaxPriceVariation_15.getString());
    FIX::MaxTradeVol MaxTradeVol_15;
    MaxTradeVol_15.setString("598931");
    noRelatedSym_0_1.set(MaxTradeVol_15);
    BaseTradingRules_15.insert(MaxTradeVol_15.getString());
    FIX::MinTradeVol MinTradeVol_15;
    MinTradeVol_15.setString("12608421");
    noRelatedSym_0_1.set(MinTradeVol_15);
    BaseTradingRules_15.insert(MinTradeVol_15.getString());
    FIX::MultilegModel MultilegModel_17(1);
    noRelatedSym_0_1.set(MultilegModel_17);
    BaseTradingRules_15.insert(MultilegModel_17.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_17(5);
    noRelatedSym_0_1.set(MultilegPriceMethod_17);
    BaseTradingRules_15.insert(MultilegPriceMethod_17.getString());
    FIX::PriceType PriceType_48(16);
    noRelatedSym_0_1.set(PriceType_48);
    BaseTradingRules_15.insert(PriceType_48.getString());
    FIX::RoundLot RoundLot_15;
    RoundLot_15.setString("12873246");
    noRelatedSym_0_1.set(RoundLot_15);
    BaseTradingRules_15.insert(RoundLot_15.getString());
    FIX::TradingCurrency TradingCurrency_15("JPY");
    noRelatedSym_0_1.set(TradingCurrency_15);
    BaseTradingRules_15.insert(TradingCurrency_15.getString());
    all_values.push_back(BaseTradingRules_15);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_33;
      FIX::LotType LotType_37('2');
      noLotTypeRules_1_1_0.set(LotType_37);
      LotTypeRules_NoLotTypeRules_33.insert(LotType_37.getString());
      FIX::MinLotSize MinLotSize_33;
      MinLotSize_33.setString("14885405");
      noLotTypeRules_1_1_0.set(MinLotSize_33);
      LotTypeRules_NoLotTypeRules_33.insert(MinLotSize_33.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_33);

      noRelatedSym_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_34;
      FIX::LotType LotType_38('3');
      noLotTypeRules_1_1_1.set(LotType_38);
      LotTypeRules_NoLotTypeRules_34.insert(LotType_38.getString());
      FIX::MinLotSize MinLotSize_34;
      MinLotSize_34.setString("17819607");
      noLotTypeRules_1_1_1.set(MinLotSize_34);
      LotTypeRules_NoLotTypeRules_34.insert(MinLotSize_34.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_34);

      noRelatedSym_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_15;
    FIX::HighLimitPrice HighLimitPrice_15;
    HighLimitPrice_15.setString("14593112");
    noRelatedSym_0_1.set(HighLimitPrice_15);
    PriceLimits_15.insert(HighLimitPrice_15.getString());
    FIX::LowLimitPrice LowLimitPrice_15;
    LowLimitPrice_15.setString("381036");
    noRelatedSym_0_1.set(LowLimitPrice_15);
    PriceLimits_15.insert(LowLimitPrice_15.getString());
    FIX::PriceLimitType PriceLimitType_15(0);
    noRelatedSym_0_1.set(PriceLimitType_15);
    PriceLimits_15.insert(PriceLimitType_15.getString());
    FIX::TradingReferencePrice TradingReferencePrice_15;
    TradingReferencePrice_15.setString("2178543");
    noRelatedSym_0_1.set(TradingReferencePrice_15);
    PriceLimits_15.insert(TradingReferencePrice_15.getString());
    all_values.push_back(PriceLimits_15);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_27;
      FIX::EndTickPriceRange EndTickPriceRange_27;
      EndTickPriceRange_27.setString("7008247");
      noTickRules_1_1_0.set(EndTickPriceRange_27);
      TickRules_NoTickRules_27.insert(EndTickPriceRange_27.getString());
      FIX::StartTickPriceRange StartTickPriceRange_27;
      StartTickPriceRange_27.setString("18799788");
      noTickRules_1_1_0.set(StartTickPriceRange_27);
      TickRules_NoTickRules_27.insert(StartTickPriceRange_27.getString());
      FIX::TickIncrement TickIncrement_27;
      TickIncrement_27.setString("9092571");
      noTickRules_1_1_0.set(TickIncrement_27);
      TickRules_NoTickRules_27.insert(TickIncrement_27.getString());
      FIX::TickRuleType TickRuleType_27(4);
      noTickRules_1_1_0.set(TickRuleType_27);
      TickRules_NoTickRules_27.insert(TickRuleType_27.getString());
      all_values.push_back(TickRules_NoTickRules_27);

      noRelatedSym_0_1.addGroup(noTickRules_1_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_31;
      FIX::NestedInstrAttribType NestedInstrAttribType_31(1889755560);
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribType_31);
      NestedInstrumentAttribute_NoNestedInstrAttrib_31.insert(NestedInstrAttribType_31.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_31("STRING_1769432049");
      noNestedInstrAttrib_1_1_0.set(NestedInstrAttribValue_31);
      NestedInstrumentAttribute_NoNestedInstrAttrib_31.insert(NestedInstrAttribValue_31.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_31);

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_32;
      FIX::NestedInstrAttribType NestedInstrAttribType_32(1243061095);
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribType_32);
      NestedInstrumentAttribute_NoNestedInstrAttrib_32.insert(NestedInstrAttribType_32.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_32("STRING_2046674379");
      noNestedInstrAttrib_1_1_1.set(NestedInstrAttribValue_32);
      NestedInstrumentAttribute_NoNestedInstrAttrib_32.insert(NestedInstrAttribValue_32.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_32);

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_33;
      FIX::NestedInstrAttribType NestedInstrAttribType_33(782392869);
      noNestedInstrAttrib_1_1_2.set(NestedInstrAttribType_33);
      NestedInstrumentAttribute_NoNestedInstrAttrib_33.insert(NestedInstrAttribType_33.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_33("STRING_1376844842");
      noNestedInstrAttrib_1_1_2.set(NestedInstrAttribValue_33);
      NestedInstrumentAttribute_NoNestedInstrAttrib_33.insert(NestedInstrAttribValue_33.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_33);

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_27;
      FIX::TradingSessionID TradingSessionID_91("STRING_3");
      noTradingSessionRules_1_1_0.set(TradingSessionID_91);
      TradingSessionRulesGrp_NoTradingSessionRules_27.insert(TradingSessionID_91.getString());
      FIX::TradingSessionSubID TradingSessionSubID_91("STRING_3");
      noTradingSessionRules_1_1_0.set(TradingSessionSubID_91);
      TradingSessionRulesGrp_NoTradingSessionRules_27.insert(TradingSessionSubID_91.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_27);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_58;
        FIX::ExecInstValue ExecInstValue_58('1');
        noExecInstRules_1_0_2_0.set(ExecInstValue_58);
        ExecInstRules_NoExecInstRules_58.insert(ExecInstValue_58.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_58);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_59;
        FIX::ExecInstValue ExecInstValue_59('1');
        noExecInstRules_1_0_2_1.set(ExecInstValue_59);
        ExecInstRules_NoExecInstRules_59.insert(ExecInstValue_59.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_59);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_60;
        FIX::ExecInstValue ExecInstValue_60('1');
        noExecInstRules_1_0_2_2.set(ExecInstValue_60);
        ExecInstRules_NoExecInstRules_60.insert(ExecInstValue_60.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_60);

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_53;
        FIX::MDBookType MDBookType_55(1);
        noMDFeedTypes_1_0_2_0.set(MDBookType_55);
        MarketDataFeedTypes_NoMDFeedTypes_53.insert(MDBookType_55.getString());
        FIX::MDFeedType MDFeedType_55("STRING_754539213");
        noMDFeedTypes_1_0_2_0.set(MDFeedType_55);
        MarketDataFeedTypes_NoMDFeedTypes_53.insert(MDFeedType_55.getString());
        FIX::MarketDepth MarketDepth_56(2046864561);
        noMDFeedTypes_1_0_2_0.set(MarketDepth_56);
        MarketDataFeedTypes_NoMDFeedTypes_53.insert(MarketDepth_56.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_53);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_54;
        FIX::MDBookType MDBookType_56(2);
        noMDFeedTypes_1_0_2_1.set(MDBookType_56);
        MarketDataFeedTypes_NoMDFeedTypes_54.insert(MDBookType_56.getString());
        FIX::MDFeedType MDFeedType_56("STRING_95596117");
        noMDFeedTypes_1_0_2_1.set(MDFeedType_56);
        MarketDataFeedTypes_NoMDFeedTypes_54.insert(MDFeedType_56.getString());
        FIX::MarketDepth MarketDepth_57(1273837423);
        noMDFeedTypes_1_0_2_1.set(MarketDepth_57);
        MarketDataFeedTypes_NoMDFeedTypes_54.insert(MarketDepth_57.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_54);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_55;
        FIX::MDBookType MDBookType_57(2);
        noMDFeedTypes_1_0_2_2.set(MDBookType_57);
        MarketDataFeedTypes_NoMDFeedTypes_55.insert(MDBookType_57.getString());
        FIX::MDFeedType MDFeedType_57("STRING_1554907407");
        noMDFeedTypes_1_0_2_2.set(MDFeedType_57);
        MarketDataFeedTypes_NoMDFeedTypes_55.insert(MDFeedType_57.getString());
        FIX::MarketDepth MarketDepth_58(1311941111);
        noMDFeedTypes_1_0_2_2.set(MarketDepth_58);
        MarketDataFeedTypes_NoMDFeedTypes_55.insert(MarketDepth_58.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_55);

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_60;
        FIX::MatchAlgorithm MatchAlgorithm_60("STRING_1772761777");
        noMatchRules_1_0_2_0.set(MatchAlgorithm_60);
        MatchRules_NoMatchRules_60.insert(MatchAlgorithm_60.getString());
        FIX::MatchType MatchType_65("STRING_A5");
        noMatchRules_1_0_2_0.set(MatchType_65);
        MatchRules_NoMatchRules_60.insert(MatchType_65.getString());
        all_values.push_back(MatchRules_NoMatchRules_60);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_61;
        FIX::MatchAlgorithm MatchAlgorithm_61("STRING_1225519903");
        noMatchRules_1_0_2_1.set(MatchAlgorithm_61);
        MatchRules_NoMatchRules_61.insert(MatchAlgorithm_61.getString());
        FIX::MatchType MatchType_66("STRING_S3");
        noMatchRules_1_0_2_1.set(MatchType_66);
        MatchRules_NoMatchRules_61.insert(MatchType_66.getString());
        all_values.push_back(MatchRules_NoMatchRules_61);

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_63;
        FIX::OrdType OrdType_86('D');
        noOrdTypeRules_1_0_2_0.set(OrdType_86);
        OrdTypeRules_NoOrdTypeRules_63.insert(OrdType_86.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_63);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_64;
        FIX::OrdType OrdType_87('B');
        noOrdTypeRules_1_0_2_1.set(OrdType_87);
        OrdTypeRules_NoOrdTypeRules_64.insert(OrdType_87.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_64);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_65;
        FIX::OrdType OrdType_88('A');
        noOrdTypeRules_1_0_2_2.set(OrdType_88);
        OrdTypeRules_NoOrdTypeRules_65.insert(OrdType_88.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_65);

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_59;
        FIX::TimeInForce TimeInForce_72('3');
        noTimeInForceRules_1_0_2_0.set(TimeInForce_72);
        TimeInForceRules_NoTimeInForceRules_59.insert(TimeInForce_72.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_59);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_60;
        FIX::TimeInForce TimeInForce_73('2');
        noTimeInForceRules_1_0_2_1.set(TimeInForce_73);
        TimeInForceRules_NoTimeInForceRules_60.insert(TimeInForce_73.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_60);

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_28;
      FIX::TradingSessionID TradingSessionID_92("STRING_4");
      noTradingSessionRules_1_1_1.set(TradingSessionID_92);
      TradingSessionRulesGrp_NoTradingSessionRules_28.insert(TradingSessionID_92.getString());
      FIX::TradingSessionSubID TradingSessionSubID_92("STRING_2");
      noTradingSessionRules_1_1_1.set(TradingSessionSubID_92);
      TradingSessionRulesGrp_NoTradingSessionRules_28.insert(TradingSessionSubID_92.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_28);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_61;
        FIX::ExecInstValue ExecInstValue_61('1');
        noExecInstRules_1_1_2_0.set(ExecInstValue_61);
        ExecInstRules_NoExecInstRules_61.insert(ExecInstValue_61.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_61);

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_56;
        FIX::MDBookType MDBookType_58(2);
        noMDFeedTypes_1_1_2_0.set(MDBookType_58);
        MarketDataFeedTypes_NoMDFeedTypes_56.insert(MDBookType_58.getString());
        FIX::MDFeedType MDFeedType_58("STRING_1372983919");
        noMDFeedTypes_1_1_2_0.set(MDFeedType_58);
        MarketDataFeedTypes_NoMDFeedTypes_56.insert(MDFeedType_58.getString());
        FIX::MarketDepth MarketDepth_59(2088116261);
        noMDFeedTypes_1_1_2_0.set(MarketDepth_59);
        MarketDataFeedTypes_NoMDFeedTypes_56.insert(MarketDepth_59.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_56);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_57;
        FIX::MDBookType MDBookType_59(1);
        noMDFeedTypes_1_1_2_1.set(MDBookType_59);
        MarketDataFeedTypes_NoMDFeedTypes_57.insert(MDBookType_59.getString());
        FIX::MDFeedType MDFeedType_59("STRING_687373054");
        noMDFeedTypes_1_1_2_1.set(MDFeedType_59);
        MarketDataFeedTypes_NoMDFeedTypes_57.insert(MDFeedType_59.getString());
        FIX::MarketDepth MarketDepth_60(49440144);
        noMDFeedTypes_1_1_2_1.set(MarketDepth_60);
        MarketDataFeedTypes_NoMDFeedTypes_57.insert(MarketDepth_60.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_57);

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_62;
        FIX::MatchAlgorithm MatchAlgorithm_62("STRING_586753967");
        noMatchRules_1_1_2_0.set(MatchAlgorithm_62);
        MatchRules_NoMatchRules_62.insert(MatchAlgorithm_62.getString());
        FIX::MatchType MatchType_67("STRING_A3");
        noMatchRules_1_1_2_0.set(MatchType_67);
        MatchRules_NoMatchRules_62.insert(MatchType_67.getString());
        all_values.push_back(MatchRules_NoMatchRules_62);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_63;
        FIX::MatchAlgorithm MatchAlgorithm_63("STRING_1139663918");
        noMatchRules_1_1_2_1.set(MatchAlgorithm_63);
        MatchRules_NoMatchRules_63.insert(MatchAlgorithm_63.getString());
        FIX::MatchType MatchType_68("STRING_M3");
        noMatchRules_1_1_2_1.set(MatchType_68);
        MatchRules_NoMatchRules_63.insert(MatchType_68.getString());
        all_values.push_back(MatchRules_NoMatchRules_63);

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_66;
        FIX::OrdType OrdType_89('P');
        noOrdTypeRules_1_1_2_0.set(OrdType_89);
        OrdTypeRules_NoOrdTypeRules_66.insert(OrdType_89.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_66);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_67;
        FIX::OrdType OrdType_90('M');
        noOrdTypeRules_1_1_2_1.set(OrdType_90);
        OrdTypeRules_NoOrdTypeRules_67.insert(OrdType_90.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_67);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_68;
        FIX::OrdType OrdType_91('2');
        noOrdTypeRules_1_1_2_2.set(OrdType_91);
        OrdTypeRules_NoOrdTypeRules_68.insert(OrdType_91.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_68);

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_61;
        FIX::TimeInForce TimeInForce_74('2');
        noTimeInForceRules_1_1_2_0.set(TimeInForce_74);
        TimeInForceRules_NoTimeInForceRules_61.insert(TimeInForce_74.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_61);

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_29;
      FIX::TradingSessionID TradingSessionID_93("STRING_1");
      noTradingSessionRules_1_1_2.set(TradingSessionID_93);
      TradingSessionRulesGrp_NoTradingSessionRules_29.insert(TradingSessionID_93.getString());
      FIX::TradingSessionSubID TradingSessionSubID_93("STRING_6");
      noTradingSessionRules_1_1_2.set(TradingSessionSubID_93);
      TradingSessionRulesGrp_NoTradingSessionRules_29.insert(TradingSessionSubID_93.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_29);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_62;
        FIX::ExecInstValue ExecInstValue_62('2');
        noExecInstRules_1_2_2_0.set(ExecInstValue_62);
        ExecInstRules_NoExecInstRules_62.insert(ExecInstValue_62.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_62);

        noTradingSessionRules_1_1_2.addGroup(noExecInstRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_2_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_63;
        FIX::ExecInstValue ExecInstValue_63('2');
        noExecInstRules_1_2_2_1.set(ExecInstValue_63);
        ExecInstRules_NoExecInstRules_63.insert(ExecInstValue_63.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_63);

        noTradingSessionRules_1_1_2.addGroup(noExecInstRules_1_2_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_58;
        FIX::MDBookType MDBookType_60(1);
        noMDFeedTypes_1_2_2_0.set(MDBookType_60);
        MarketDataFeedTypes_NoMDFeedTypes_58.insert(MDBookType_60.getString());
        FIX::MDFeedType MDFeedType_60("STRING_64014105");
        noMDFeedTypes_1_2_2_0.set(MDFeedType_60);
        MarketDataFeedTypes_NoMDFeedTypes_58.insert(MDFeedType_60.getString());
        FIX::MarketDepth MarketDepth_61(849872958);
        noMDFeedTypes_1_2_2_0.set(MarketDepth_61);
        MarketDataFeedTypes_NoMDFeedTypes_58.insert(MarketDepth_61.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_58);

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_59;
        FIX::MDBookType MDBookType_61(1);
        noMDFeedTypes_1_2_2_1.set(MDBookType_61);
        MarketDataFeedTypes_NoMDFeedTypes_59.insert(MDBookType_61.getString());
        FIX::MDFeedType MDFeedType_61("STRING_1255585172");
        noMDFeedTypes_1_2_2_1.set(MDFeedType_61);
        MarketDataFeedTypes_NoMDFeedTypes_59.insert(MDFeedType_61.getString());
        FIX::MarketDepth MarketDepth_62(1956871344);
        noMDFeedTypes_1_2_2_1.set(MarketDepth_62);
        MarketDataFeedTypes_NoMDFeedTypes_59.insert(MarketDepth_62.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_59);

        noTradingSessionRules_1_1_2.addGroup(noMDFeedTypes_1_2_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_64;
        FIX::MatchAlgorithm MatchAlgorithm_64("STRING_1736410582");
        noMatchRules_1_2_2_0.set(MatchAlgorithm_64);
        MatchRules_NoMatchRules_64.insert(MatchAlgorithm_64.getString());
        FIX::MatchType MatchType_69("STRING_A3");
        noMatchRules_1_2_2_0.set(MatchType_69);
        MatchRules_NoMatchRules_64.insert(MatchType_69.getString());
        all_values.push_back(MatchRules_NoMatchRules_64);

        noTradingSessionRules_1_1_2.addGroup(noMatchRules_1_2_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_69;
        FIX::OrdType OrdType_92('K');
        noOrdTypeRules_1_2_2_0.set(OrdType_92);
        OrdTypeRules_NoOrdTypeRules_69.insert(OrdType_92.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_69);

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_70;
        FIX::OrdType OrdType_93('1');
        noOrdTypeRules_1_2_2_1.set(OrdType_93);
        OrdTypeRules_NoOrdTypeRules_70.insert(OrdType_93.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_70);

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_2_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_71;
        FIX::OrdType OrdType_94('4');
        noOrdTypeRules_1_2_2_2.set(OrdType_94);
        OrdTypeRules_NoOrdTypeRules_71.insert(OrdType_94.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_71);

        noTradingSessionRules_1_1_2.addGroup(noOrdTypeRules_1_2_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_62;
        FIX::TimeInForce TimeInForce_75('3');
        noTimeInForceRules_1_2_2_0.set(TimeInForce_75);
        TimeInForceRules_NoTimeInForceRules_62.insert(TimeInForce_75.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_62);

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_63;
        FIX::TimeInForce TimeInForce_76('8');
        noTimeInForceRules_1_2_2_1.set(TimeInForce_76);
        TimeInForceRules_NoTimeInForceRules_63.insert(TimeInForce_76.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_63);

        noTradingSessionRules_1_1_2.addGroup(noTimeInForceRules_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_33;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_33("EUR");
    noRelatedSym_0_1.set(BenchmarkCurveCurrency_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkCurveCurrency_33.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_33("STRING_EONIA");
    noRelatedSym_0_1.set(BenchmarkCurveName_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkCurveName_33.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_33("STRING_1032771083");
    noRelatedSym_0_1.set(BenchmarkCurvePoint_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkCurvePoint_33.getString());
    FIX::BenchmarkPrice BenchmarkPrice_33;
    BenchmarkPrice_33.setString("9568161");
    noRelatedSym_0_1.set(BenchmarkPrice_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkPrice_33.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_33(262554686);
    noRelatedSym_0_1.set(BenchmarkPriceType_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkPriceType_33.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_33("STRING_240842500");
    noRelatedSym_0_1.set(BenchmarkSecurityID_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkSecurityID_33.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_33("STRING_1129181948");
    noRelatedSym_0_1.set(BenchmarkSecurityIDSource_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkSecurityIDSource_33.getString());
    FIX::Spread Spread_33;
    Spread_33.setString("17896749");
    noRelatedSym_0_1.set(Spread_33);
    SpreadOrBenchmarkCurveData_33.insert(Spread_33.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_33);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_61;
      FIX::StipulationType StipulationType_61("STRING_ISSUE");
      noStipulations_1_1_0.set(StipulationType_61);
      Stipulations_NoStipulations_61.insert(StipulationType_61.getString());
      FIX::StipulationValue StipulationValue_61("STRING_433156343");
      noStipulations_1_1_0.set(StipulationValue_61);
      Stipulations_NoStipulations_61.insert(StipulationValue_61.getString());
      all_values.push_back(Stipulations_NoStipulations_61);

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_1_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_62;
      FIX::StipulationType StipulationType_62("STRING_SUBSLEFT");
      noStipulations_1_1_1.set(StipulationType_62);
      Stipulations_NoStipulations_62.insert(StipulationType_62.getString());
      FIX::StipulationValue StipulationValue_62("STRING_908608929");
      noStipulations_1_1_1.set(StipulationValue_62);
      Stipulations_NoStipulations_62.insert(StipulationValue_62.getString());
      all_values.push_back(Stipulations_NoStipulations_62);

      noRelatedSym_0_1.addGroup(noStipulations_1_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_1_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_63;
      FIX::StipulationType StipulationType_63("STRING_INSURED");
      noStipulations_1_1_2.set(StipulationType_63);
      Stipulations_NoStipulations_63.insert(StipulationType_63.getString());
      FIX::StipulationValue StipulationValue_63("STRING_677502523");
      noStipulations_1_1_2.set(StipulationValue_63);
      Stipulations_NoStipulations_63.insert(StipulationValue_63.getString());
      all_values.push_back(Stipulations_NoStipulations_63);

      noRelatedSym_0_1.addGroup(noStipulations_1_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_24;
      FIX::EndStrikePxRange EndStrikePxRange_24;
      EndStrikePxRange_24.setString("10801111");
      noStrikeRules_1_1_0.set(EndStrikePxRange_24);
      StrikeRules_NoStrikeRules_24.insert(EndStrikePxRange_24.getString());
      FIX::StartStrikePxRange StartStrikePxRange_24;
      StartStrikePxRange_24.setString("6513211");
      noStrikeRules_1_1_0.set(StartStrikePxRange_24);
      StrikeRules_NoStrikeRules_24.insert(StartStrikePxRange_24.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_24(80724559);
      noStrikeRules_1_1_0.set(StrikeExerciseStyle_24);
      StrikeRules_NoStrikeRules_24.insert(StrikeExerciseStyle_24.getString());
      FIX::StrikeIncrement StrikeIncrement_24;
      StrikeIncrement_24.setString("8894988");
      noStrikeRules_1_1_0.set(StrikeIncrement_24);
      StrikeRules_NoStrikeRules_24.insert(StrikeIncrement_24.getString());
      FIX::StrikeRuleID StrikeRuleID_24("STRING_1823575623");
      noStrikeRules_1_1_0.set(StrikeRuleID_24);
      StrikeRules_NoStrikeRules_24.insert(StrikeRuleID_24.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_24);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_47;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_47("MONTHYEAR_973450628");
        noMaturityRules_1_0_2_0.set(EndMaturityMonthYear_47);
        MaturityRules_NoMaturityRules_47.insert(EndMaturityMonthYear_47.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_47(0);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearFormat_47);
        MaturityRules_NoMaturityRules_47.insert(MaturityMonthYearFormat_47.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_47(1346694688);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrement_47);
        MaturityRules_NoMaturityRules_47.insert(MaturityMonthYearIncrement_47.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_47(0);
        noMaturityRules_1_0_2_0.set(MaturityMonthYearIncrementUnits_47);
        MaturityRules_NoMaturityRules_47.insert(MaturityMonthYearIncrementUnits_47.getString());
        FIX::MaturityRuleID MaturityRuleID_47("STRING_1158974464");
        noMaturityRules_1_0_2_0.set(MaturityRuleID_47);
        MaturityRules_NoMaturityRules_47.insert(MaturityRuleID_47.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_47("MONTHYEAR_925694379");
        noMaturityRules_1_0_2_0.set(StartMaturityMonthYear_47);
        MaturityRules_NoMaturityRules_47.insert(StartMaturityMonthYear_47.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_47);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_48;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_48("MONTHYEAR_616995565");
        noMaturityRules_1_0_2_1.set(EndMaturityMonthYear_48);
        MaturityRules_NoMaturityRules_48.insert(EndMaturityMonthYear_48.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_48(1);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearFormat_48);
        MaturityRules_NoMaturityRules_48.insert(MaturityMonthYearFormat_48.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_48(1127605542);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrement_48);
        MaturityRules_NoMaturityRules_48.insert(MaturityMonthYearIncrement_48.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_48(0);
        noMaturityRules_1_0_2_1.set(MaturityMonthYearIncrementUnits_48);
        MaturityRules_NoMaturityRules_48.insert(MaturityMonthYearIncrementUnits_48.getString());
        FIX::MaturityRuleID MaturityRuleID_48("STRING_2068362035");
        noMaturityRules_1_0_2_1.set(MaturityRuleID_48);
        MaturityRules_NoMaturityRules_48.insert(MaturityRuleID_48.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_48("MONTHYEAR_12892977");
        noMaturityRules_1_0_2_1.set(StartMaturityMonthYear_48);
        MaturityRules_NoMaturityRules_48.insert(StartMaturityMonthYear_48.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_48);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_49;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_49("MONTHYEAR_1983540170");
        noMaturityRules_1_0_2_2.set(EndMaturityMonthYear_49);
        MaturityRules_NoMaturityRules_49.insert(EndMaturityMonthYear_49.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_49(2);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearFormat_49);
        MaturityRules_NoMaturityRules_49.insert(MaturityMonthYearFormat_49.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_49(253735478);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrement_49);
        MaturityRules_NoMaturityRules_49.insert(MaturityMonthYearIncrement_49.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_49(2);
        noMaturityRules_1_0_2_2.set(MaturityMonthYearIncrementUnits_49);
        MaturityRules_NoMaturityRules_49.insert(MaturityMonthYearIncrementUnits_49.getString());
        FIX::MaturityRuleID MaturityRuleID_49("STRING_1973107991");
        noMaturityRules_1_0_2_2.set(MaturityRuleID_49);
        MaturityRules_NoMaturityRules_49.insert(MaturityRuleID_49.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_49("MONTHYEAR_928169299");
        noMaturityRules_1_0_2_2.set(StartMaturityMonthYear_49);
        MaturityRules_NoMaturityRules_49.insert(StartMaturityMonthYear_49.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_49);

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noStrikeRules_1_1_0);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_135;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_135("DATA_258780686");
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuer_135);
      UnderlyingInstrument_135.insert(EncodedUnderlyingIssuer_135.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_135(1874173660);
      noUnderlyings_1_1_0.set(EncodedUnderlyingIssuerLen_135);
      UnderlyingInstrument_135.insert(EncodedUnderlyingIssuerLen_135.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_135("DATA_385684802");
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDesc_135);
      UnderlyingInstrument_135.insert(EncodedUnderlyingSecurityDesc_135.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_135(489018855);
      noUnderlyings_1_1_0.set(EncodedUnderlyingSecurityDescLen_135);
      UnderlyingInstrument_135.insert(EncodedUnderlyingSecurityDescLen_135.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_135;
      UnderlyingAdjustedQuantity_135.setString("4041925");
      noUnderlyings_1_1_0.set(UnderlyingAdjustedQuantity_135);
      UnderlyingInstrument_135.insert(UnderlyingAdjustedQuantity_135.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_135;
      UnderlyingAllocationPercent_135.setString("78.360000");
      noUnderlyings_1_1_0.set(UnderlyingAllocationPercent_135);
      UnderlyingInstrument_135.insert(UnderlyingAllocationPercent_135.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_135;
      UnderlyingAttachmentPoint_135.setString("99.820000");
      noUnderlyings_1_1_0.set(UnderlyingAttachmentPoint_135);
      UnderlyingInstrument_135.insert(UnderlyingAttachmentPoint_135.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_135("STRING_1055513712");
      noUnderlyings_1_1_0.set(UnderlyingCFICode_135);
      UnderlyingInstrument_135.insert(UnderlyingCFICode_135.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_135("STRING_1439032395");
      noUnderlyings_1_1_0.set(UnderlyingCPProgram_135);
      UnderlyingInstrument_135.insert(UnderlyingCPProgram_135.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_135("STRING_311145157");
      noUnderlyings_1_1_0.set(UnderlyingCPRegType_135);
      UnderlyingInstrument_135.insert(UnderlyingCPRegType_135.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_135;
      UnderlyingCapValue_135.setString("7316056");
      noUnderlyings_1_1_0.set(UnderlyingCapValue_135);
      UnderlyingInstrument_135.insert(UnderlyingCapValue_135.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_135;
      UnderlyingCashAmount_135.setString("11086838");
      noUnderlyings_1_1_0.set(UnderlyingCashAmount_135);
      UnderlyingInstrument_135.insert(UnderlyingCashAmount_135.getString());
      FIX::UnderlyingCashType UnderlyingCashType_135("STRING_DIFF");
      noUnderlyings_1_1_0.set(UnderlyingCashType_135);
      UnderlyingInstrument_135.insert(UnderlyingCashType_135.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_135;
      UnderlyingContractMultiplier_135.setString("8054523");
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplier_135);
      UnderlyingInstrument_135.insert(UnderlyingContractMultiplier_135.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_135(307894928);
      noUnderlyings_1_1_0.set(UnderlyingContractMultiplierUnit_135);
      UnderlyingInstrument_135.insert(UnderlyingContractMultiplierUnit_135.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_135("COUNTRY_484043157");
      noUnderlyings_1_1_0.set(UnderlyingCountryOfIssue_135);
      UnderlyingInstrument_135.insert(UnderlyingCountryOfIssue_135.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_135("LOCALMKTDATE_1964426844");
      noUnderlyings_1_1_0.set(UnderlyingCouponPaymentDate_135);
      UnderlyingInstrument_135.insert(UnderlyingCouponPaymentDate_135.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_135;
      UnderlyingCouponRate_135.setString("93.070000");
      noUnderlyings_1_1_0.set(UnderlyingCouponRate_135);
      UnderlyingInstrument_135.insert(UnderlyingCouponRate_135.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_135("STRING_1101038722");
      noUnderlyings_1_1_0.set(UnderlyingCreditRating_135);
      UnderlyingInstrument_135.insert(UnderlyingCreditRating_135.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_135("CHF");
      noUnderlyings_1_1_0.set(UnderlyingCurrency_135);
      UnderlyingInstrument_135.insert(UnderlyingCurrency_135.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_135;
      UnderlyingCurrentValue_135.setString("21277627");
      noUnderlyings_1_1_0.set(UnderlyingCurrentValue_135);
      UnderlyingInstrument_135.insert(UnderlyingCurrentValue_135.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_135;
      UnderlyingDetachmentPoint_135.setString("41.370000");
      noUnderlyings_1_1_0.set(UnderlyingDetachmentPoint_135);
      UnderlyingInstrument_135.insert(UnderlyingDetachmentPoint_135.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_135;
      UnderlyingDirtyPrice_135.setString("2266041");
      noUnderlyings_1_1_0.set(UnderlyingDirtyPrice_135);
      UnderlyingInstrument_135.insert(UnderlyingDirtyPrice_135.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_135;
      UnderlyingEndPrice_135.setString("19638192");
      noUnderlyings_1_1_0.set(UnderlyingEndPrice_135);
      UnderlyingInstrument_135.insert(UnderlyingEndPrice_135.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_135;
      UnderlyingEndValue_135.setString("6046272");
      noUnderlyings_1_1_0.set(UnderlyingEndValue_135);
      UnderlyingInstrument_135.insert(UnderlyingEndValue_135.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_135(480339657);
      noUnderlyings_1_1_0.set(UnderlyingExerciseStyle_135);
      UnderlyingInstrument_135.insert(UnderlyingExerciseStyle_135.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_135;
      UnderlyingFXRate_135.setString("7815740");
      noUnderlyings_1_1_0.set(UnderlyingFXRate_135);
      UnderlyingInstrument_135.insert(UnderlyingFXRate_135.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_135('M');
      noUnderlyings_1_1_0.set(UnderlyingFXRateCalc_135);
      UnderlyingInstrument_135.insert(UnderlyingFXRateCalc_135.getString());
      FIX::UnderlyingFactor UnderlyingFactor_135;
      UnderlyingFactor_135.setString("14085089");
      noUnderlyings_1_1_0.set(UnderlyingFactor_135);
      UnderlyingInstrument_135.insert(UnderlyingFactor_135.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_135(258649968);
      noUnderlyings_1_1_0.set(UnderlyingFlowScheduleType_135);
      UnderlyingInstrument_135.insert(UnderlyingFlowScheduleType_135.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_135("STRING_689032239");
      noUnderlyings_1_1_0.set(UnderlyingInstrRegistry_135);
      UnderlyingInstrument_135.insert(UnderlyingInstrRegistry_135.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_135("LOCALMKTDATE_1135198968");
      noUnderlyings_1_1_0.set(UnderlyingIssueDate_135);
      UnderlyingInstrument_135.insert(UnderlyingIssueDate_135.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_135("STRING_644334770");
      noUnderlyings_1_1_0.set(UnderlyingIssuer_135);
      UnderlyingInstrument_135.insert(UnderlyingIssuer_135.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_135("STRING_1178051094");
      noUnderlyings_1_1_0.set(UnderlyingLocaleOfIssue_135);
      UnderlyingInstrument_135.insert(UnderlyingLocaleOfIssue_135.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_135("LOCALMKTDATE_1539391504");
      noUnderlyings_1_1_0.set(UnderlyingMaturityDate_135);
      UnderlyingInstrument_135.insert(UnderlyingMaturityDate_135.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_135("MONTHYEAR_2002642606");
      noUnderlyings_1_1_0.set(UnderlyingMaturityMonthYear_135);
      UnderlyingInstrument_135.insert(UnderlyingMaturityMonthYear_135.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_135("TZTIMEONLY_599697428");
      noUnderlyings_1_1_0.set(UnderlyingMaturityTime_135);
      UnderlyingInstrument_135.insert(UnderlyingMaturityTime_135.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_135;
      UnderlyingNotionalPercentageOutstanding_135.setString("15.690000");
      noUnderlyings_1_1_0.set(UnderlyingNotionalPercentageOutstanding_135);
      UnderlyingInstrument_135.insert(UnderlyingNotionalPercentageOutstanding_135.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_135('1');
      noUnderlyings_1_1_0.set(UnderlyingOptAttribute_135);
      UnderlyingInstrument_135.insert(UnderlyingOptAttribute_135.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_135;
      UnderlyingOriginalNotionalPercentageOutstanding_135.setString("25.860000");
      noUnderlyings_1_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_135);
      UnderlyingInstrument_135.insert(UnderlyingOriginalNotionalPercentageOutstanding_135.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_135("STRING_1179027256");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasure_135);
      UnderlyingInstrument_135.insert(UnderlyingPriceUnitOfMeasure_135.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_135;
      UnderlyingPriceUnitOfMeasureQty_135.setString("2553915");
      noUnderlyings_1_1_0.set(UnderlyingPriceUnitOfMeasureQty_135);
      UnderlyingInstrument_135.insert(UnderlyingPriceUnitOfMeasureQty_135.getString());
      FIX::UnderlyingProduct UnderlyingProduct_135(47954723);
      noUnderlyings_1_1_0.set(UnderlyingProduct_135);
      UnderlyingInstrument_135.insert(UnderlyingProduct_135.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_135(1984479636);
      noUnderlyings_1_1_0.set(UnderlyingPutOrCall_135);
      UnderlyingInstrument_135.insert(UnderlyingPutOrCall_135.getString());
      FIX::UnderlyingPx UnderlyingPx_135;
      UnderlyingPx_135.setString("5632865");
      noUnderlyings_1_1_0.set(UnderlyingPx_135);
      UnderlyingInstrument_135.insert(UnderlyingPx_135.getString());
      FIX::UnderlyingQty UnderlyingQty_135;
      UnderlyingQty_135.setString("5319978");
      noUnderlyings_1_1_0.set(UnderlyingQty_135);
      UnderlyingInstrument_135.insert(UnderlyingQty_135.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_135("LOCALMKTDATE_1801422832");
      noUnderlyings_1_1_0.set(UnderlyingRedemptionDate_135);
      UnderlyingInstrument_135.insert(UnderlyingRedemptionDate_135.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_135("STRING_1796875830");
      noUnderlyings_1_1_0.set(UnderlyingRepoCollateralSecurityType_135);
      UnderlyingInstrument_135.insert(UnderlyingRepoCollateralSecurityType_135.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_135;
      UnderlyingRepurchaseRate_135.setString("66.030000");
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseRate_135);
      UnderlyingInstrument_135.insert(UnderlyingRepurchaseRate_135.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_135(154254935);
      noUnderlyings_1_1_0.set(UnderlyingRepurchaseTerm_135);
      UnderlyingInstrument_135.insert(UnderlyingRepurchaseTerm_135.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_135("STRING_2010587032");
      noUnderlyings_1_1_0.set(UnderlyingRestructuringType_135);
      UnderlyingInstrument_135.insert(UnderlyingRestructuringType_135.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_135("STRING_1613315706");
      noUnderlyings_1_1_0.set(UnderlyingSecurityDesc_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityDesc_135.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_135("EXCHANGE_575449072");
      noUnderlyings_1_1_0.set(UnderlyingSecurityExchange_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityExchange_135.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_135("STRING_89707563");
      noUnderlyings_1_1_0.set(UnderlyingSecurityID_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityID_135.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_135("STRING_1429651331");
      noUnderlyings_1_1_0.set(UnderlyingSecurityIDSource_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityIDSource_135.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_135("STRING_1180076283");
      noUnderlyings_1_1_0.set(UnderlyingSecuritySubType_135);
      UnderlyingInstrument_135.insert(UnderlyingSecuritySubType_135.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_135("STRING_570047220");
      noUnderlyings_1_1_0.set(UnderlyingSecurityType_135);
      UnderlyingInstrument_135.insert(UnderlyingSecurityType_135.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_135("STRING_63741779");
      noUnderlyings_1_1_0.set(UnderlyingSeniority_135);
      UnderlyingInstrument_135.insert(UnderlyingSeniority_135.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_135("STRING_1610327836");
      noUnderlyings_1_1_0.set(UnderlyingSettlMethod_135);
      UnderlyingInstrument_135.insert(UnderlyingSettlMethod_135.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_135(4);
      noUnderlyings_1_1_0.set(UnderlyingSettlementType_135);
      UnderlyingInstrument_135.insert(UnderlyingSettlementType_135.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_135;
      UnderlyingStartValue_135.setString("3223917");
      noUnderlyings_1_1_0.set(UnderlyingStartValue_135);
      UnderlyingInstrument_135.insert(UnderlyingStartValue_135.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_135("STRING_151876428");
      noUnderlyings_1_1_0.set(UnderlyingStateOrProvinceOfIssue_135);
      UnderlyingInstrument_135.insert(UnderlyingStateOrProvinceOfIssue_135.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_135("EUR");
      noUnderlyings_1_1_0.set(UnderlyingStrikeCurrency_135);
      UnderlyingInstrument_135.insert(UnderlyingStrikeCurrency_135.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_135;
      UnderlyingStrikePrice_135.setString("13299275");
      noUnderlyings_1_1_0.set(UnderlyingStrikePrice_135);
      UnderlyingInstrument_135.insert(UnderlyingStrikePrice_135.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_135("STRING_358179353");
      noUnderlyings_1_1_0.set(UnderlyingSymbol_135);
      UnderlyingInstrument_135.insert(UnderlyingSymbol_135.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_135("STRING_821885475");
      noUnderlyings_1_1_0.set(UnderlyingSymbolSfx_135);
      UnderlyingInstrument_135.insert(UnderlyingSymbolSfx_135.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_135("STRING_1929624951");
      noUnderlyings_1_1_0.set(UnderlyingTimeUnit_135);
      UnderlyingInstrument_135.insert(UnderlyingTimeUnit_135.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_135("STRING_805600922");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasure_135);
      UnderlyingInstrument_135.insert(UnderlyingUnitOfMeasure_135.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_135;
      UnderlyingUnitOfMeasureQty_135.setString("21160768");
      noUnderlyings_1_1_0.set(UnderlyingUnitOfMeasureQty_135);
      UnderlyingInstrument_135.insert(UnderlyingUnitOfMeasureQty_135.getString());
      all_values.push_back(UnderlyingInstrument_135);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_272;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_272("STRING_1984628178");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltID_272);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_272.insert(UnderlyingSecurityAltID_272.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_272("STRING_223984776");
        noUnderlyingSecurityAltID_1_0_2_0.set(UnderlyingSecurityAltIDSource_272);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_272.insert(UnderlyingSecurityAltIDSource_272.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_273;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_273("STRING_740938612");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltID_273);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_273.insert(UnderlyingSecurityAltID_273.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_273("STRING_1821624167");
        noUnderlyingSecurityAltID_1_0_2_1.set(UnderlyingSecurityAltIDSource_273);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_273.insert(UnderlyingSecurityAltIDSource_273.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_273);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_274;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_274("STRING_787271299");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltID_274);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_274.insert(UnderlyingSecurityAltID_274.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_274("STRING_1272936493");
        noUnderlyingSecurityAltID_1_0_2_2.set(UnderlyingSecurityAltIDSource_274);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_274.insert(UnderlyingSecurityAltIDSource_274.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_274);

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_260;
        FIX::UnderlyingStipType UnderlyingStipType_260("STRING_436663481");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipType_260);
        UnderlyingStipulations_NoUnderlyingStips_260.insert(UnderlyingStipType_260.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_260("STRING_758489449");
        noUnderlyingStips_1_0_2_0.set(UnderlyingStipValue_260);
        UnderlyingStipulations_NoUnderlyingStips_260.insert(UnderlyingStipValue_260.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_260);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_261;
        FIX::UnderlyingStipType UnderlyingStipType_261("STRING_1629818286");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipType_261);
        UnderlyingStipulations_NoUnderlyingStips_261.insert(UnderlyingStipType_261.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_261("STRING_299766865");
        noUnderlyingStips_1_0_2_1.set(UnderlyingStipValue_261);
        UnderlyingStipulations_NoUnderlyingStips_261.insert(UnderlyingStipValue_261.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_261);

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_273;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_273("STRING_57783711");
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyID_273);
        UndlyInstrumentParties_NoUndlyInstrumentParties_273.insert(UnderlyingInstrumentPartyID_273.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_273('3');
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyIDSource_273);
        UndlyInstrumentParties_NoUndlyInstrumentParties_273.insert(UnderlyingInstrumentPartyIDSource_273.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_273(1653972839);
        noUndlyInstrumentParties_1_0_2_0.set(UnderlyingInstrumentPartyRole_273);
        UndlyInstrumentParties_NoUndlyInstrumentParties_273.insert(UnderlyingInstrumentPartyRole_273.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_273);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_534("STRING_959521648");
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubID_534);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534.insert(UnderlyingInstrumentPartySubID_534.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_534(1717714618);
          noUndlyInstrumentPartySubIDs_1_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_534);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534.insert(UnderlyingInstrumentPartySubIDType_534.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_534);

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_274;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_274("STRING_700704182");
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyID_274);
        UndlyInstrumentParties_NoUndlyInstrumentParties_274.insert(UnderlyingInstrumentPartyID_274.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_274('7');
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyIDSource_274);
        UndlyInstrumentParties_NoUndlyInstrumentParties_274.insert(UnderlyingInstrumentPartyIDSource_274.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_274(2040106365);
        noUndlyInstrumentParties_1_0_2_1.set(UnderlyingInstrumentPartyRole_274);
        UndlyInstrumentParties_NoUndlyInstrumentParties_274.insert(UnderlyingInstrumentPartyRole_274.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_274);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_535("STRING_1756865673");
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubID_535);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535.insert(UnderlyingInstrumentPartySubID_535.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_535(859349234);
          noUndlyInstrumentPartySubIDs_1_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_535);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535.insert(UnderlyingInstrumentPartySubIDType_535.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_535);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_536("STRING_35024485");
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubID_536);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536.insert(UnderlyingInstrumentPartySubID_536.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_536(2115045026);
          noUndlyInstrumentPartySubIDs_1_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_536);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536.insert(UnderlyingInstrumentPartySubIDType_536.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_536);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_537("STRING_1681234709");
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubID_537);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537.insert(UnderlyingInstrumentPartySubID_537.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_537(1964649436);
          noUndlyInstrumentPartySubIDs_1_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_537);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537.insert(UnderlyingInstrumentPartySubIDType_537.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_537);

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_275;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_275("STRING_773162300");
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyID_275);
        UndlyInstrumentParties_NoUndlyInstrumentParties_275.insert(UnderlyingInstrumentPartyID_275.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_275('1');
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyIDSource_275);
        UndlyInstrumentParties_NoUndlyInstrumentParties_275.insert(UnderlyingInstrumentPartyIDSource_275.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_275(510149677);
        noUndlyInstrumentParties_1_0_2_2.set(UnderlyingInstrumentPartyRole_275);
        UndlyInstrumentParties_NoUndlyInstrumentParties_275.insert(UnderlyingInstrumentPartyRole_275.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_275);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_538("STRING_1873812667");
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubID_538);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538.insert(UnderlyingInstrumentPartySubID_538.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_538(1251088289);
          noUndlyInstrumentPartySubIDs_1_0_2_3_0.set(UnderlyingInstrumentPartySubIDType_538);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538.insert(UnderlyingInstrumentPartySubIDType_538.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_538);

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    // YieldData
    multiset<string> YieldData_28;
    FIX::Yield Yield_28;
    Yield_28.setString("73.490000");
    noRelatedSym_0_1.set(Yield_28);
    YieldData_28.insert(Yield_28.getString());
    FIX::YieldCalcDate YieldCalcDate_28("LOCALMKTDATE_513600318");
    noRelatedSym_0_1.set(YieldCalcDate_28);
    YieldData_28.insert(YieldCalcDate_28.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_28("LOCALMKTDATE_376541135");
    noRelatedSym_0_1.set(YieldRedemptionDate_28);
    YieldData_28.insert(YieldRedemptionDate_28.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_28;
    YieldRedemptionPrice_28.setString("17600107");
    noRelatedSym_0_1.set(YieldRedemptionPrice_28);
    YieldData_28.insert(YieldRedemptionPrice_28.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_28(950263799);
    noRelatedSym_0_1.set(YieldRedemptionPriceType_28);
    YieldData_28.insert(YieldRedemptionPriceType_28.getString());
    FIX::YieldType YieldType_28("STRING_LASTQUARTER");
    noRelatedSym_0_1.set(YieldType_28);
    YieldData_28.insert(YieldType_28.getString());
    all_values.push_back(YieldData_28);

    msg.addGroup(noRelatedSym_0_1);
  }
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_2;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_2;
    FIX::Currency Currency_60("EUR");
    noRelatedSym_0_2.set(Currency_60);
    SecLstUpdRelSymGrp_NoRelatedSym_2.insert(Currency_60.getString());
    FIX::EncodedText EncodedText_84("DATA_1359352091");
    noRelatedSym_0_2.set(EncodedText_84);
    SecLstUpdRelSymGrp_NoRelatedSym_2.insert(EncodedText_84.getString());
    FIX::EncodedTextLen EncodedTextLen_84(1300129050);
    noRelatedSym_0_2.set(EncodedTextLen_84);
    SecLstUpdRelSymGrp_NoRelatedSym_2.insert(EncodedTextLen_84.getString());
    FIX::ListUpdateAction ListUpdateAction_4('1');
    noRelatedSym_0_2.set(ListUpdateAction_4);
    SecLstUpdRelSymGrp_NoRelatedSym_2.insert(ListUpdateAction_4.getString());
    FIX::RelSymTransactTime RelSymTransactTime_7(FIX::UTCTIMESTAMP(4, 14, 52, 19, 32011));
    noRelatedSym_0_2.set(RelSymTransactTime_7);
    SecLstUpdRelSymGrp_NoRelatedSym_2.insert(RelSymTransactTime_7.getString());
    FIX::Text Text_84("STRING_1943790189");
    noRelatedSym_0_2.set(Text_84);
    SecLstUpdRelSymGrp_NoRelatedSym_2.insert(Text_84.getString());
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_2);

    // FinancingDetails
    multiset<string> FinancingDetails_30;
    FIX::AgreementCurrency AgreementCurrency_30("EUR");
    noRelatedSym_0_2.set(AgreementCurrency_30);
    FinancingDetails_30.insert(AgreementCurrency_30.getString());
    FIX::AgreementDate AgreementDate_30("LOCALMKTDATE_1978814674");
    noRelatedSym_0_2.set(AgreementDate_30);
    FinancingDetails_30.insert(AgreementDate_30.getString());
    FIX::AgreementDesc AgreementDesc_30("STRING_819080673");
    noRelatedSym_0_2.set(AgreementDesc_30);
    FinancingDetails_30.insert(AgreementDesc_30.getString());
    FIX::AgreementID AgreementID_30("STRING_721795265");
    noRelatedSym_0_2.set(AgreementID_30);
    FinancingDetails_30.insert(AgreementID_30.getString());
    FIX::DeliveryType DeliveryType_30(2);
    noRelatedSym_0_2.set(DeliveryType_30);
    FinancingDetails_30.insert(DeliveryType_30.getString());
    FIX::EndDate EndDate_30("LOCALMKTDATE_1592242973");
    noRelatedSym_0_2.set(EndDate_30);
    FinancingDetails_30.insert(EndDate_30.getString());
    FIX::MarginRatio MarginRatio_30;
    MarginRatio_30.setString("95.080000");
    noRelatedSym_0_2.set(MarginRatio_30);
    FinancingDetails_30.insert(MarginRatio_30.getString());
    FIX::StartDate StartDate_30("LOCALMKTDATE_158646491");
    noRelatedSym_0_2.set(StartDate_30);
    FinancingDetails_30.insert(StartDate_30.getString());
    FIX::TerminationType TerminationType_30(1);
    noRelatedSym_0_2.set(TerminationType_30);
    FinancingDetails_30.insert(TerminationType_30.getString());
    all_values.push_back(FinancingDetails_30);

    // Instrument
    multiset<string> Instrument_78;
    FIX::AttachmentPoint AttachmentPoint_78;
    AttachmentPoint_78.setString("21.750000");
    noRelatedSym_0_2.set(AttachmentPoint_78);
    Instrument_78.insert(AttachmentPoint_78.getString());
    FIX::CFICode CFICode_78("STRING_1409734781");
    noRelatedSym_0_2.set(CFICode_78);
    Instrument_78.insert(CFICode_78.getString());
    FIX::CPProgram CPProgram_78(2);
    noRelatedSym_0_2.set(CPProgram_78);
    Instrument_78.insert(CPProgram_78.getString());
    FIX::CPRegType CPRegType_78("STRING_464068845");
    noRelatedSym_0_2.set(CPRegType_78);
    Instrument_78.insert(CPRegType_78.getString());
    FIX::CapPrice CapPrice_78;
    CapPrice_78.setString("17862759");
    noRelatedSym_0_2.set(CapPrice_78);
    Instrument_78.insert(CapPrice_78.getString());
    FIX::ContractMultiplier ContractMultiplier_78;
    ContractMultiplier_78.setString("20995242");
    noRelatedSym_0_2.set(ContractMultiplier_78);
    Instrument_78.insert(ContractMultiplier_78.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_78(2);
    noRelatedSym_0_2.set(ContractMultiplierUnit_78);
    Instrument_78.insert(ContractMultiplierUnit_78.getString());
    FIX::ContractSettlMonth ContractSettlMonth_78("MONTHYEAR_773822852");
    noRelatedSym_0_2.set(ContractSettlMonth_78);
    Instrument_78.insert(ContractSettlMonth_78.getString());
    FIX::CountryOfIssue CountryOfIssue_78("COUNTRY_1194385898");
    noRelatedSym_0_2.set(CountryOfIssue_78);
    Instrument_78.insert(CountryOfIssue_78.getString());
    FIX::CouponPaymentDate CouponPaymentDate_78("LOCALMKTDATE_516879661");
    noRelatedSym_0_2.set(CouponPaymentDate_78);
    Instrument_78.insert(CouponPaymentDate_78.getString());
    FIX::CouponRate CouponRate_78;
    CouponRate_78.setString("49.430000");
    noRelatedSym_0_2.set(CouponRate_78);
    Instrument_78.insert(CouponRate_78.getString());
    FIX::CreditRating CreditRating_78("STRING_347031300");
    noRelatedSym_0_2.set(CreditRating_78);
    Instrument_78.insert(CreditRating_78.getString());
    FIX::DatedDate DatedDate_78("LOCALMKTDATE_8901107");
    noRelatedSym_0_2.set(DatedDate_78);
    Instrument_78.insert(DatedDate_78.getString());
    FIX::DetachmentPoint DetachmentPoint_78;
    DetachmentPoint_78.setString("25.780000");
    noRelatedSym_0_2.set(DetachmentPoint_78);
    Instrument_78.insert(DetachmentPoint_78.getString());
    FIX::EncodedIssuer EncodedIssuer_78("DATA_737536697");
    noRelatedSym_0_2.set(EncodedIssuer_78);
    Instrument_78.insert(EncodedIssuer_78.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_78(460444201);
    noRelatedSym_0_2.set(EncodedIssuerLen_78);
    Instrument_78.insert(EncodedIssuerLen_78.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_78("DATA_1287604830");
    noRelatedSym_0_2.set(EncodedSecurityDesc_78);
    Instrument_78.insert(EncodedSecurityDesc_78.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_78(1828746276);
    noRelatedSym_0_2.set(EncodedSecurityDescLen_78);
    Instrument_78.insert(EncodedSecurityDescLen_78.getString());
    FIX::ExerciseStyle ExerciseStyle_78(0);
    noRelatedSym_0_2.set(ExerciseStyle_78);
    Instrument_78.insert(ExerciseStyle_78.getString());
    FIX::Factor Factor_78;
    Factor_78.setString("16162998");
    noRelatedSym_0_2.set(Factor_78);
    Instrument_78.insert(Factor_78.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_78(false);
    noRelatedSym_0_2.set(FlexProductEligibilityIndicator_78);
    Instrument_78.insert(FlexProductEligibilityIndicator_78.getString());
    FIX::FlexibleIndicator FlexibleIndicator_78(false);
    noRelatedSym_0_2.set(FlexibleIndicator_78);
    Instrument_78.insert(FlexibleIndicator_78.getString());
    FIX::FloorPrice FloorPrice_78;
    FloorPrice_78.setString("6568603");
    noRelatedSym_0_2.set(FloorPrice_78);
    Instrument_78.insert(FloorPrice_78.getString());
    FIX::FlowScheduleType FlowScheduleType_78(4);
    noRelatedSym_0_2.set(FlowScheduleType_78);
    Instrument_78.insert(FlowScheduleType_78.getString());
    FIX::InstrRegistry InstrRegistry_78("STRING_1225697792");
    noRelatedSym_0_2.set(InstrRegistry_78);
    Instrument_78.insert(InstrRegistry_78.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_78('1');
    noRelatedSym_0_2.set(InstrmtAssignmentMethod_78);
    Instrument_78.insert(InstrmtAssignmentMethod_78.getString());
    FIX::InterestAccrualDate InterestAccrualDate_78("LOCALMKTDATE_1104880658");
    noRelatedSym_0_2.set(InterestAccrualDate_78);
    Instrument_78.insert(InterestAccrualDate_78.getString());
    FIX::IssueDate IssueDate_78("LOCALMKTDATE_670457118");
    noRelatedSym_0_2.set(IssueDate_78);
    Instrument_78.insert(IssueDate_78.getString());
    FIX::Issuer Issuer_78("STRING_1602795128");
    noRelatedSym_0_2.set(Issuer_78);
    Instrument_78.insert(Issuer_78.getString());
    FIX::ListMethod ListMethod_78(0);
    noRelatedSym_0_2.set(ListMethod_78);
    Instrument_78.insert(ListMethod_78.getString());
    FIX::LocaleOfIssue LocaleOfIssue_78("STRING_725523274");
    noRelatedSym_0_2.set(LocaleOfIssue_78);
    Instrument_78.insert(LocaleOfIssue_78.getString());
    FIX::MaturityDate MaturityDate_78("LOCALMKTDATE_1553263655");
    noRelatedSym_0_2.set(MaturityDate_78);
    Instrument_78.insert(MaturityDate_78.getString());
    FIX::MaturityMonthYear MaturityMonthYear_78("MONTHYEAR_525778283");
    noRelatedSym_0_2.set(MaturityMonthYear_78);
    Instrument_78.insert(MaturityMonthYear_78.getString());
    FIX::MaturityTime MaturityTime_78("TZTIMEONLY_1065036779");
    noRelatedSym_0_2.set(MaturityTime_78);
    Instrument_78.insert(MaturityTime_78.getString());
    FIX::MinPriceIncrement MinPriceIncrement_78;
    MinPriceIncrement_78.setString("20173325");
    noRelatedSym_0_2.set(MinPriceIncrement_78);
    Instrument_78.insert(MinPriceIncrement_78.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_78;
    MinPriceIncrementAmount_78.setString("1645705");
    noRelatedSym_0_2.set(MinPriceIncrementAmount_78);
    Instrument_78.insert(MinPriceIncrementAmount_78.getString());
    FIX::NTPositionLimit NTPositionLimit_78(1017077338);
    noRelatedSym_0_2.set(NTPositionLimit_78);
    Instrument_78.insert(NTPositionLimit_78.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_78;
    NotionalPercentageOutstanding_78.setString("14.970000");
    noRelatedSym_0_2.set(NotionalPercentageOutstanding_78);
    Instrument_78.insert(NotionalPercentageOutstanding_78.getString());
    FIX::OptAttribute OptAttribute_78('9');
    noRelatedSym_0_2.set(OptAttribute_78);
    Instrument_78.insert(OptAttribute_78.getString());
    FIX::OptPayoutAmount OptPayoutAmount_78;
    OptPayoutAmount_78.setString("639795");
    noRelatedSym_0_2.set(OptPayoutAmount_78);
    Instrument_78.insert(OptPayoutAmount_78.getString());
    FIX::OptPayoutType OptPayoutType_78(2);
    noRelatedSym_0_2.set(OptPayoutType_78);
    Instrument_78.insert(OptPayoutType_78.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_78;
    OriginalNotionalPercentageOutstanding_78.setString("46.980000");
    noRelatedSym_0_2.set(OriginalNotionalPercentageOutstanding_78);
    Instrument_78.insert(OriginalNotionalPercentageOutstanding_78.getString());
    FIX::Pool Pool_78("STRING_411010888");
    noRelatedSym_0_2.set(Pool_78);
    Instrument_78.insert(Pool_78.getString());
    FIX::PositionLimit PositionLimit_78(1809962265);
    noRelatedSym_0_2.set(PositionLimit_78);
    Instrument_78.insert(PositionLimit_78.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_78("STRING_STD");
    noRelatedSym_0_2.set(PriceQuoteMethod_78);
    Instrument_78.insert(PriceQuoteMethod_78.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_78("STRING_1148547585");
    noRelatedSym_0_2.set(PriceUnitOfMeasure_78);
    Instrument_78.insert(PriceUnitOfMeasure_78.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_78;
    PriceUnitOfMeasureQty_78.setString("1229228");
    noRelatedSym_0_2.set(PriceUnitOfMeasureQty_78);
    Instrument_78.insert(PriceUnitOfMeasureQty_78.getString());
    FIX::Product Product_80(13);
    noRelatedSym_0_2.set(Product_80);
    Instrument_78.insert(Product_80.getString());
    FIX::ProductComplex ProductComplex_78("STRING_829810213");
    noRelatedSym_0_2.set(ProductComplex_78);
    Instrument_78.insert(ProductComplex_78.getString());
    FIX::PutOrCall PutOrCall_78(0);
    noRelatedSym_0_2.set(PutOrCall_78);
    Instrument_78.insert(PutOrCall_78.getString());
    FIX::RedemptionDate RedemptionDate_78("LOCALMKTDATE_384554611");
    noRelatedSym_0_2.set(RedemptionDate_78);
    Instrument_78.insert(RedemptionDate_78.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_78("STRING_307379383");
    noRelatedSym_0_2.set(RepoCollateralSecurityType_78);
    Instrument_78.insert(RepoCollateralSecurityType_78.getString());
    FIX::RepurchaseRate RepurchaseRate_78;
    RepurchaseRate_78.setString("77.610000");
    noRelatedSym_0_2.set(RepurchaseRate_78);
    Instrument_78.insert(RepurchaseRate_78.getString());
    FIX::RepurchaseTerm RepurchaseTerm_78(1041414966);
    noRelatedSym_0_2.set(RepurchaseTerm_78);
    Instrument_78.insert(RepurchaseTerm_78.getString());
    FIX::RestructuringType RestructuringType_78("STRING_XR");
    noRelatedSym_0_2.set(RestructuringType_78);
    Instrument_78.insert(RestructuringType_78.getString());
    FIX::SecurityDesc SecurityDesc_78("STRING_1310335553");
    noRelatedSym_0_2.set(SecurityDesc_78);
    Instrument_78.insert(SecurityDesc_78.getString());
    FIX::SecurityExchange SecurityExchange_78("EXCHANGE_272586939");
    noRelatedSym_0_2.set(SecurityExchange_78);
    Instrument_78.insert(SecurityExchange_78.getString());
    FIX::SecurityGroup SecurityGroup_78("STRING_721160237");
    noRelatedSym_0_2.set(SecurityGroup_78);
    Instrument_78.insert(SecurityGroup_78.getString());
    FIX::SecurityID SecurityID_78("STRING_1980792671");
    noRelatedSym_0_2.set(SecurityID_78);
    Instrument_78.insert(SecurityID_78.getString());
    FIX::SecurityIDSource SecurityIDSource_78("STRING_A");
    noRelatedSym_0_2.set(SecurityIDSource_78);
    Instrument_78.insert(SecurityIDSource_78.getString());
    FIX::SecurityStatus SecurityStatus_78("STRING_2");
    noRelatedSym_0_2.set(SecurityStatus_78);
    Instrument_78.insert(SecurityStatus_78.getString());
    FIX::SecuritySubType SecuritySubType_79("STRING_558832297");
    noRelatedSym_0_2.set(SecuritySubType_79);
    Instrument_78.insert(SecuritySubType_79.getString());
    FIX::SecurityType SecurityType_80("STRING_MBS");
    noRelatedSym_0_2.set(SecurityType_80);
    Instrument_78.insert(SecurityType_80.getString());
    FIX::Seniority Seniority_78("STRING_SR");
    noRelatedSym_0_2.set(Seniority_78);
    Instrument_78.insert(Seniority_78.getString());
    FIX::SettlMethod SettlMethod_78('P');
    noRelatedSym_0_2.set(SettlMethod_78);
    Instrument_78.insert(SettlMethod_78.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_78("STRING_1151010927");
    noRelatedSym_0_2.set(SettleOnOpenFlag_78);
    Instrument_78.insert(SettleOnOpenFlag_78.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_78("STRING_527552573");
    noRelatedSym_0_2.set(StateOrProvinceOfIssue_78);
    Instrument_78.insert(StateOrProvinceOfIssue_78.getString());
    FIX::StrikeCurrency StrikeCurrency_78("JPY");
    noRelatedSym_0_2.set(StrikeCurrency_78);
    Instrument_78.insert(StrikeCurrency_78.getString());
    FIX::StrikeMultiplier StrikeMultiplier_78;
    StrikeMultiplier_78.setString("14659459");
    noRelatedSym_0_2.set(StrikeMultiplier_78);
    Instrument_78.insert(StrikeMultiplier_78.getString());
    FIX::StrikePrice StrikePrice_78;
    StrikePrice_78.setString("5574423");
    noRelatedSym_0_2.set(StrikePrice_78);
    Instrument_78.insert(StrikePrice_78.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_78(1);
    noRelatedSym_0_2.set(StrikePriceBoundaryMethod_78);
    Instrument_78.insert(StrikePriceBoundaryMethod_78.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_78;
    StrikePriceBoundaryPrecision_78.setString("70.270000");
    noRelatedSym_0_2.set(StrikePriceBoundaryPrecision_78);
    Instrument_78.insert(StrikePriceBoundaryPrecision_78.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_78(4);
    noRelatedSym_0_2.set(StrikePriceDeterminationMethod_78);
    Instrument_78.insert(StrikePriceDeterminationMethod_78.getString());
    FIX::StrikeValue StrikeValue_78;
    StrikeValue_78.setString("17512485");
    noRelatedSym_0_2.set(StrikeValue_78);
    Instrument_78.insert(StrikeValue_78.getString());
    FIX::Symbol Symbol_78("STRING_2018164303");
    noRelatedSym_0_2.set(Symbol_78);
    Instrument_78.insert(Symbol_78.getString());
    FIX::SymbolSfx SymbolSfx_78("STRING_WI");
    noRelatedSym_0_2.set(SymbolSfx_78);
    Instrument_78.insert(SymbolSfx_78.getString());
    FIX::TimeUnit TimeUnit_78("STRING_S");
    noRelatedSym_0_2.set(TimeUnit_78);
    Instrument_78.insert(TimeUnit_78.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_78(3);
    noRelatedSym_0_2.set(UnderlyingPriceDeterminationMethod_78);
    Instrument_78.insert(UnderlyingPriceDeterminationMethod_78.getString());
    FIX::UnitOfMeasure UnitOfMeasure_78("STRING_oz_tr");
    noRelatedSym_0_2.set(UnitOfMeasure_78);
    Instrument_78.insert(UnitOfMeasure_78.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_78;
    UnitOfMeasureQty_78.setString("15521920");
    noRelatedSym_0_2.set(UnitOfMeasureQty_78);
    Instrument_78.insert(UnitOfMeasureQty_78.getString());
    FIX::ValuationMethod ValuationMethod_78("STRING_EQTY");
    noRelatedSym_0_2.set(ValuationMethod_78);
    Instrument_78.insert(ValuationMethod_78.getString());
    all_values.push_back(Instrument_78);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_2_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_147;
      FIX::ComplexEventCondition ComplexEventCondition_147(1);
      noComplexEvents_2_1_0.set(ComplexEventCondition_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventCondition_147.getString());
      FIX::ComplexEventPrice ComplexEventPrice_147;
      ComplexEventPrice_147.setString("649050");
      noComplexEvents_2_1_0.set(ComplexEventPrice_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPrice_147.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_147(2);
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryMethod_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryMethod_147.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_147;
      ComplexEventPriceBoundaryPrecision_147.setString("16.790000");
      noComplexEvents_2_1_0.set(ComplexEventPriceBoundaryPrecision_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceBoundaryPrecision_147.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_147(3);
      noComplexEvents_2_1_0.set(ComplexEventPriceTimeType_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventPriceTimeType_147.getString());
      FIX::ComplexEventType ComplexEventType_147(7);
      noComplexEvents_2_1_0.set(ComplexEventType_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexEventType_147.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_147;
      ComplexOptPayoutAmount_147.setString("6329907");
      noComplexEvents_2_1_0.set(ComplexOptPayoutAmount_147);
      ComplexEvents_NoComplexEvents_147.insert(ComplexOptPayoutAmount_147.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_147);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_308;
        FIX::ComplexEventEndDate ComplexEventEndDate_308(FIX::UTCTIMESTAMP(16, 17, 16, 21, 22013));
        noComplexEventDates_2_0_2_0.set(ComplexEventEndDate_308);
        ComplexEventDates_NoComplexEventDates_308.insert(ComplexEventEndDate_308.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_308(FIX::UTCTIMESTAMP(5, 58, 31, 16, 22005));
        noComplexEventDates_2_0_2_0.set(ComplexEventStartDate_308);
        ComplexEventDates_NoComplexEventDates_308.insert(ComplexEventStartDate_308.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_308);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_615;
          FIX::ComplexEventEndTime ComplexEventEndTime_615(FIX::UTCTIMEONLY(0, 16, 7));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventEndTime_615);
          ComplexEventTimes_NoComplexEventTimes_615.insert(ComplexEventEndTime_615.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_615(FIX::UTCTIMEONLY(13, 52, 52));
          noComplexEventTimes_2_0_0_3_0.set(ComplexEventStartTime_615);
          ComplexEventTimes_NoComplexEventTimes_615.insert(ComplexEventStartTime_615.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_615);

          noComplexEventDates_2_0_2_0.addGroup(noComplexEventTimes_2_0_0_3_0);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_309;
        FIX::ComplexEventEndDate ComplexEventEndDate_309(FIX::UTCTIMESTAMP(0, 28, 6, 15, 32001));
        noComplexEventDates_2_0_2_1.set(ComplexEventEndDate_309);
        ComplexEventDates_NoComplexEventDates_309.insert(ComplexEventEndDate_309.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_309(FIX::UTCTIMESTAMP(8, 42, 11, 24, 42000));
        noComplexEventDates_2_0_2_1.set(ComplexEventStartDate_309);
        ComplexEventDates_NoComplexEventDates_309.insert(ComplexEventStartDate_309.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_309);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_616;
          FIX::ComplexEventEndTime ComplexEventEndTime_616(FIX::UTCTIMEONLY(18, 7, 43));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventEndTime_616);
          ComplexEventTimes_NoComplexEventTimes_616.insert(ComplexEventEndTime_616.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_616(FIX::UTCTIMEONLY(12, 30, 19));
          noComplexEventTimes_2_0_1_3_0.set(ComplexEventStartTime_616);
          ComplexEventTimes_NoComplexEventTimes_616.insert(ComplexEventStartTime_616.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_616);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_617;
          FIX::ComplexEventEndTime ComplexEventEndTime_617(FIX::UTCTIMEONLY(6, 27, 32));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventEndTime_617);
          ComplexEventTimes_NoComplexEventTimes_617.insert(ComplexEventEndTime_617.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_617(FIX::UTCTIMEONLY(16, 16, 5));
          noComplexEventTimes_2_0_1_3_1.set(ComplexEventStartTime_617);
          ComplexEventTimes_NoComplexEventTimes_617.insert(ComplexEventStartTime_617.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_617);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_618;
          FIX::ComplexEventEndTime ComplexEventEndTime_618(FIX::UTCTIMEONLY(21, 25, 26));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventEndTime_618);
          ComplexEventTimes_NoComplexEventTimes_618.insert(ComplexEventEndTime_618.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_618(FIX::UTCTIMEONLY(16, 27, 38));
          noComplexEventTimes_2_0_1_3_2.set(ComplexEventStartTime_618);
          ComplexEventTimes_NoComplexEventTimes_618.insert(ComplexEventStartTime_618.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_618);

          noComplexEventDates_2_0_2_1.addGroup(noComplexEventTimes_2_0_1_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_310;
        FIX::ComplexEventEndDate ComplexEventEndDate_310(FIX::UTCTIMESTAMP(9, 42, 56, 13, 112013));
        noComplexEventDates_2_0_2_2.set(ComplexEventEndDate_310);
        ComplexEventDates_NoComplexEventDates_310.insert(ComplexEventEndDate_310.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_310(FIX::UTCTIMESTAMP(20, 13, 48, 19, 22005));
        noComplexEventDates_2_0_2_2.set(ComplexEventStartDate_310);
        ComplexEventDates_NoComplexEventDates_310.insert(ComplexEventStartDate_310.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_310);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_619;
          FIX::ComplexEventEndTime ComplexEventEndTime_619(FIX::UTCTIMEONLY(21, 18, 26));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventEndTime_619);
          ComplexEventTimes_NoComplexEventTimes_619.insert(ComplexEventEndTime_619.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_619(FIX::UTCTIMEONLY(2, 35, 31));
          noComplexEventTimes_2_0_2_3_0.set(ComplexEventStartTime_619);
          ComplexEventTimes_NoComplexEventTimes_619.insert(ComplexEventStartTime_619.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_619);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_620;
          FIX::ComplexEventEndTime ComplexEventEndTime_620(FIX::UTCTIMEONLY(8, 57, 24));
          noComplexEventTimes_2_0_2_3_1.set(ComplexEventEndTime_620);
          ComplexEventTimes_NoComplexEventTimes_620.insert(ComplexEventEndTime_620.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_620(FIX::UTCTIMEONLY(1, 51, 27));
          noComplexEventTimes_2_0_2_3_1.set(ComplexEventStartTime_620);
          ComplexEventTimes_NoComplexEventTimes_620.insert(ComplexEventStartTime_620.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_620);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_621;
          FIX::ComplexEventEndTime ComplexEventEndTime_621(FIX::UTCTIMEONLY(5, 9, 13));
          noComplexEventTimes_2_0_2_3_2.set(ComplexEventEndTime_621);
          ComplexEventTimes_NoComplexEventTimes_621.insert(ComplexEventEndTime_621.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_621(FIX::UTCTIMEONLY(19, 18, 35));
          noComplexEventTimes_2_0_2_3_2.set(ComplexEventStartTime_621);
          ComplexEventTimes_NoComplexEventTimes_621.insert(ComplexEventStartTime_621.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_621);

          noComplexEventDates_2_0_2_2.addGroup(noComplexEventTimes_2_0_2_3_2);
        }
        noComplexEvents_2_1_0.addGroup(noComplexEventDates_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noComplexEvents_2_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_2_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_150;
      FIX::EventDate EventDate_150("LOCALMKTDATE_958067551");
      noEvents_2_1_0.set(EventDate_150);
      EvntGrp_NoEvents_150.insert(EventDate_150.getString());
      FIX::EventPx EventPx_150;
      EventPx_150.setString("613749");
      noEvents_2_1_0.set(EventPx_150);
      EvntGrp_NoEvents_150.insert(EventPx_150.getString());
      FIX::EventText EventText_150("STRING_773084571");
      noEvents_2_1_0.set(EventText_150);
      EvntGrp_NoEvents_150.insert(EventText_150.getString());
      FIX::EventTime EventTime_150(FIX::UTCTIMESTAMP(2, 41, 3, 12, 42010));
      noEvents_2_1_0.set(EventTime_150);
      EvntGrp_NoEvents_150.insert(EventTime_150.getString());
      FIX::EventType EventType_150(15);
      noEvents_2_1_0.set(EventType_150);
      EvntGrp_NoEvents_150.insert(EventType_150.getString());
      all_values.push_back(EvntGrp_NoEvents_150);

      noRelatedSym_0_2.addGroup(noEvents_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_2_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_151;
      FIX::EventDate EventDate_151("LOCALMKTDATE_1559732782");
      noEvents_2_1_1.set(EventDate_151);
      EvntGrp_NoEvents_151.insert(EventDate_151.getString());
      FIX::EventPx EventPx_151;
      EventPx_151.setString("6491069");
      noEvents_2_1_1.set(EventPx_151);
      EvntGrp_NoEvents_151.insert(EventPx_151.getString());
      FIX::EventText EventText_151("STRING_641805226");
      noEvents_2_1_1.set(EventText_151);
      EvntGrp_NoEvents_151.insert(EventText_151.getString());
      FIX::EventTime EventTime_151(FIX::UTCTIMESTAMP(5, 43, 36, 9, 92001));
      noEvents_2_1_1.set(EventTime_151);
      EvntGrp_NoEvents_151.insert(EventTime_151.getString());
      FIX::EventType EventType_151(13);
      noEvents_2_1_1.set(EventType_151);
      EvntGrp_NoEvents_151.insert(EventType_151.getString());
      all_values.push_back(EvntGrp_NoEvents_151);

      noRelatedSym_0_2.addGroup(noEvents_2_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_2_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_152;
      FIX::EventDate EventDate_152("LOCALMKTDATE_1812362797");
      noEvents_2_1_2.set(EventDate_152);
      EvntGrp_NoEvents_152.insert(EventDate_152.getString());
      FIX::EventPx EventPx_152;
      EventPx_152.setString("264208");
      noEvents_2_1_2.set(EventPx_152);
      EvntGrp_NoEvents_152.insert(EventPx_152.getString());
      FIX::EventText EventText_152("STRING_1255529733");
      noEvents_2_1_2.set(EventText_152);
      EvntGrp_NoEvents_152.insert(EventText_152.getString());
      FIX::EventTime EventTime_152(FIX::UTCTIMESTAMP(6, 57, 0, 25, 62000));
      noEvents_2_1_2.set(EventTime_152);
      EvntGrp_NoEvents_152.insert(EventTime_152.getString());
      FIX::EventType EventType_152(6);
      noEvents_2_1_2.set(EventType_152);
      EvntGrp_NoEvents_152.insert(EventType_152.getString());
      all_values.push_back(EvntGrp_NoEvents_152);

      noRelatedSym_0_2.addGroup(noEvents_2_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_150;
      FIX::InstrumentPartyID InstrumentPartyID_150("STRING_1488239973");
      noInstrumentParties_2_1_0.set(InstrumentPartyID_150);
      InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyID_150.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_150('8');
      noInstrumentParties_2_1_0.set(InstrumentPartyIDSource_150);
      InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyIDSource_150.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_150(2087517221);
      noInstrumentParties_2_1_0.set(InstrumentPartyRole_150);
      InstrumentParties_NoInstrumentParties_150.insert(InstrumentPartyRole_150.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_150);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302;
        FIX::InstrumentPartySubID InstrumentPartySubID_302("STRING_2118777039");
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubID_302);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302.insert(InstrumentPartySubID_302.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_302(1818387265);
        noInstrumentPartySubIDs_2_0_2_0.set(InstrumentPartySubIDType_302);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302.insert(InstrumentPartySubIDType_302.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_302);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303;
        FIX::InstrumentPartySubID InstrumentPartySubID_303("STRING_275250890");
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubID_303);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303.insert(InstrumentPartySubID_303.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_303(328005526);
        noInstrumentPartySubIDs_2_0_2_1.set(InstrumentPartySubIDType_303);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303.insert(InstrumentPartySubIDType_303.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_303);

        noInstrumentParties_2_1_0.addGroup(noInstrumentPartySubIDs_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_151;
      FIX::InstrumentPartyID InstrumentPartyID_151("STRING_1230636399");
      noInstrumentParties_2_1_1.set(InstrumentPartyID_151);
      InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyID_151.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_151('9');
      noInstrumentParties_2_1_1.set(InstrumentPartyIDSource_151);
      InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyIDSource_151.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_151(969810752);
      noInstrumentParties_2_1_1.set(InstrumentPartyRole_151);
      InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyRole_151.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_151);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304;
        FIX::InstrumentPartySubID InstrumentPartySubID_304("STRING_385807316");
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubID_304);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304.insert(InstrumentPartySubID_304.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_304(1901744235);
        noInstrumentPartySubIDs_2_1_2_0.set(InstrumentPartySubIDType_304);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304.insert(InstrumentPartySubIDType_304.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_304);

        noInstrumentParties_2_1_1.addGroup(noInstrumentPartySubIDs_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_152;
      FIX::InstrumentPartyID InstrumentPartyID_152("STRING_2132409267");
      noInstrumentParties_2_1_2.set(InstrumentPartyID_152);
      InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyID_152.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_152('9');
      noInstrumentParties_2_1_2.set(InstrumentPartyIDSource_152);
      InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyIDSource_152.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_152(1269157647);
      noInstrumentParties_2_1_2.set(InstrumentPartyRole_152);
      InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyRole_152.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_152);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305;
        FIX::InstrumentPartySubID InstrumentPartySubID_305("STRING_294743066");
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubID_305);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305.insert(InstrumentPartySubID_305.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_305(934036796);
        noInstrumentPartySubIDs_2_2_2_0.set(InstrumentPartySubIDType_305);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305.insert(InstrumentPartySubIDType_305.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_305);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306;
        FIX::InstrumentPartySubID InstrumentPartySubID_306("STRING_511104943");
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubID_306);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306.insert(InstrumentPartySubID_306.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_306(1550272800);
        noInstrumentPartySubIDs_2_2_2_1.set(InstrumentPartySubIDType_306);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306.insert(InstrumentPartySubIDType_306.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307;
        FIX::InstrumentPartySubID InstrumentPartySubID_307("STRING_1676883038");
        noInstrumentPartySubIDs_2_2_2_2.set(InstrumentPartySubID_307);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307.insert(InstrumentPartySubID_307.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_307(2138053885);
        noInstrumentPartySubIDs_2_2_2_2.set(InstrumentPartySubIDType_307);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307.insert(InstrumentPartySubIDType_307.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);

        noInstrumentParties_2_1_2.addGroup(noInstrumentPartySubIDs_2_2_2_2);
      }
      noRelatedSym_0_2.addGroup(noInstrumentParties_2_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_164;
      FIX::SecurityAltID SecurityAltID_164("STRING_1073630910");
      noSecurityAltID_2_1_0.set(SecurityAltID_164);
      SecAltIDGrp_NoSecurityAltID_164.insert(SecurityAltID_164.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_164("STRING_2107419095");
      noSecurityAltID_2_1_0.set(SecurityAltIDSource_164);
      SecAltIDGrp_NoSecurityAltID_164.insert(SecurityAltIDSource_164.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_164);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_165;
      FIX::SecurityAltID SecurityAltID_165("STRING_1994435586");
      noSecurityAltID_2_1_1.set(SecurityAltID_165);
      SecAltIDGrp_NoSecurityAltID_165.insert(SecurityAltID_165.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_165("STRING_1428446334");
      noSecurityAltID_2_1_1.set(SecurityAltIDSource_165);
      SecAltIDGrp_NoSecurityAltID_165.insert(SecurityAltIDSource_165.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_165);

      noRelatedSym_0_2.addGroup(noSecurityAltID_2_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_156;
    FIX::SecurityXML SecurityXML_157("XMLDATA_2138159220");
    noRelatedSym_0_2.set(SecurityXML_157);
    FIX::SecurityXMLLen SecurityXMLLen_78(1978575366);
    noRelatedSym_0_2.set(SecurityXMLLen_78);
    FIX::SecurityXMLSchema SecurityXMLSchema_78("STRING_769202659");
    noRelatedSym_0_2.set(SecurityXMLSchema_78);
    SecurityXML_156.insert(SecurityXMLSchema_78.getString());
    all_values.push_back(SecurityXML_156);

    // InstrumentExtension
    multiset<string> InstrumentExtension_15;
    FIX::DeliveryForm DeliveryForm_15(2);
    noRelatedSym_0_2.set(DeliveryForm_15);
    InstrumentExtension_15.insert(DeliveryForm_15.getString());
    FIX::PctAtRisk PctAtRisk_15;
    PctAtRisk_15.setString("89.390000");
    noRelatedSym_0_2.set(PctAtRisk_15);
    InstrumentExtension_15.insert(PctAtRisk_15.getString());
    all_values.push_back(InstrumentExtension_15);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_2_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_31;
      FIX::InstrAttribType InstrAttribType_31(16);
      noInstrAttrib_2_1_0.set(InstrAttribType_31);
      AttrbGrp_NoInstrAttrib_31.insert(InstrAttribType_31.getString());
      FIX::InstrAttribValue InstrAttribValue_31("STRING_1589512556");
      noInstrAttrib_2_1_0.set(InstrAttribValue_31);
      AttrbGrp_NoInstrAttrib_31.insert(InstrAttribValue_31.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_31);

      noRelatedSym_0_2.addGroup(noInstrAttrib_2_1_0);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_2_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_3;
      FIX::LegSettlType LegSettlType_24('1');
      noLegs_2_1_0.set(LegSettlType_24);
      SecLstUpdRelSymsLegGrp_NoLegs_3.insert(LegSettlType_24.getString());
      FIX::LegSwapType LegSwapType_24(5);
      noLegs_2_1_0.set(LegSwapType_24);
      SecLstUpdRelSymsLegGrp_NoLegs_3.insert(LegSwapType_24.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_3);

      // InstrumentLeg
      multiset<string> InstrumentLeg_112;
      FIX::EncodedLegIssuer EncodedLegIssuer_112("DATA_2093115326");
      noLegs_2_1_0.set(EncodedLegIssuer_112);
      InstrumentLeg_112.insert(EncodedLegIssuer_112.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_112(2145561633);
      noLegs_2_1_0.set(EncodedLegIssuerLen_112);
      InstrumentLeg_112.insert(EncodedLegIssuerLen_112.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_112("DATA_1854398358");
      noLegs_2_1_0.set(EncodedLegSecurityDesc_112);
      InstrumentLeg_112.insert(EncodedLegSecurityDesc_112.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_112(331438994);
      noLegs_2_1_0.set(EncodedLegSecurityDescLen_112);
      InstrumentLeg_112.insert(EncodedLegSecurityDescLen_112.getString());
      FIX::LegCFICode LegCFICode_112("STRING_1899822220");
      noLegs_2_1_0.set(LegCFICode_112);
      InstrumentLeg_112.insert(LegCFICode_112.getString());
      FIX::LegContractMultiplier LegContractMultiplier_112;
      LegContractMultiplier_112.setString("18393239");
      noLegs_2_1_0.set(LegContractMultiplier_112);
      InstrumentLeg_112.insert(LegContractMultiplier_112.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_112(1268585416);
      noLegs_2_1_0.set(LegContractMultiplierUnit_112);
      InstrumentLeg_112.insert(LegContractMultiplierUnit_112.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_112("MONTHYEAR_1021496219");
      noLegs_2_1_0.set(LegContractSettlMonth_112);
      InstrumentLeg_112.insert(LegContractSettlMonth_112.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_112("COUNTRY_176524448");
      noLegs_2_1_0.set(LegCountryOfIssue_112);
      InstrumentLeg_112.insert(LegCountryOfIssue_112.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_112("LOCALMKTDATE_1563328483");
      noLegs_2_1_0.set(LegCouponPaymentDate_112);
      InstrumentLeg_112.insert(LegCouponPaymentDate_112.getString());
      FIX::LegCouponRate LegCouponRate_112;
      LegCouponRate_112.setString("30.150000");
      noLegs_2_1_0.set(LegCouponRate_112);
      InstrumentLeg_112.insert(LegCouponRate_112.getString());
      FIX::LegCreditRating LegCreditRating_112("STRING_687629391");
      noLegs_2_1_0.set(LegCreditRating_112);
      InstrumentLeg_112.insert(LegCreditRating_112.getString());
      FIX::LegCurrency LegCurrency_112("EUR");
      noLegs_2_1_0.set(LegCurrency_112);
      InstrumentLeg_112.insert(LegCurrency_112.getString());
      FIX::LegDatedDate LegDatedDate_112("LOCALMKTDATE_678199628");
      noLegs_2_1_0.set(LegDatedDate_112);
      InstrumentLeg_112.insert(LegDatedDate_112.getString());
      FIX::LegExerciseStyle LegExerciseStyle_112(1602014364);
      noLegs_2_1_0.set(LegExerciseStyle_112);
      InstrumentLeg_112.insert(LegExerciseStyle_112.getString());
      FIX::LegFactor LegFactor_112;
      LegFactor_112.setString("4110796");
      noLegs_2_1_0.set(LegFactor_112);
      InstrumentLeg_112.insert(LegFactor_112.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_112(638135075);
      noLegs_2_1_0.set(LegFlowScheduleType_112);
      InstrumentLeg_112.insert(LegFlowScheduleType_112.getString());
      FIX::LegInstrRegistry LegInstrRegistry_112("STRING_1448966302");
      noLegs_2_1_0.set(LegInstrRegistry_112);
      InstrumentLeg_112.insert(LegInstrRegistry_112.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_112("LOCALMKTDATE_1839526002");
      noLegs_2_1_0.set(LegInterestAccrualDate_112);
      InstrumentLeg_112.insert(LegInterestAccrualDate_112.getString());
      FIX::LegIssueDate LegIssueDate_112("LOCALMKTDATE_628810647");
      noLegs_2_1_0.set(LegIssueDate_112);
      InstrumentLeg_112.insert(LegIssueDate_112.getString());
      FIX::LegIssuer LegIssuer_112("STRING_1280058020");
      noLegs_2_1_0.set(LegIssuer_112);
      InstrumentLeg_112.insert(LegIssuer_112.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_112("STRING_461245013");
      noLegs_2_1_0.set(LegLocaleOfIssue_112);
      InstrumentLeg_112.insert(LegLocaleOfIssue_112.getString());
      FIX::LegMaturityDate LegMaturityDate_112("LOCALMKTDATE_1505262611");
      noLegs_2_1_0.set(LegMaturityDate_112);
      InstrumentLeg_112.insert(LegMaturityDate_112.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_112("MONTHYEAR_1051183311");
      noLegs_2_1_0.set(LegMaturityMonthYear_112);
      InstrumentLeg_112.insert(LegMaturityMonthYear_112.getString());
      FIX::LegMaturityTime LegMaturityTime_112("TZTIMEONLY_1354751561");
      noLegs_2_1_0.set(LegMaturityTime_112);
      InstrumentLeg_112.insert(LegMaturityTime_112.getString());
      FIX::LegOptAttribute LegOptAttribute_112('2');
      noLegs_2_1_0.set(LegOptAttribute_112);
      InstrumentLeg_112.insert(LegOptAttribute_112.getString());
      FIX::LegOptionRatio LegOptionRatio_112;
      LegOptionRatio_112.setString("4932122");
      noLegs_2_1_0.set(LegOptionRatio_112);
      InstrumentLeg_112.insert(LegOptionRatio_112.getString());
      FIX::LegPool LegPool_112("STRING_376025352");
      noLegs_2_1_0.set(LegPool_112);
      InstrumentLeg_112.insert(LegPool_112.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_112("STRING_1381275199");
      noLegs_2_1_0.set(LegPriceUnitOfMeasure_112);
      InstrumentLeg_112.insert(LegPriceUnitOfMeasure_112.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_112;
      LegPriceUnitOfMeasureQty_112.setString("11658775");
      noLegs_2_1_0.set(LegPriceUnitOfMeasureQty_112);
      InstrumentLeg_112.insert(LegPriceUnitOfMeasureQty_112.getString());
      FIX::LegProduct LegProduct_112(321657030);
      noLegs_2_1_0.set(LegProduct_112);
      InstrumentLeg_112.insert(LegProduct_112.getString());
      FIX::LegPutOrCall LegPutOrCall_112(1379353184);
      noLegs_2_1_0.set(LegPutOrCall_112);
      InstrumentLeg_112.insert(LegPutOrCall_112.getString());
      FIX::LegRatioQty LegRatioQty_112;
      LegRatioQty_112.setString("8727922");
      noLegs_2_1_0.set(LegRatioQty_112);
      InstrumentLeg_112.insert(LegRatioQty_112.getString());
      FIX::LegRedemptionDate LegRedemptionDate_112("LOCALMKTDATE_653096024");
      noLegs_2_1_0.set(LegRedemptionDate_112);
      InstrumentLeg_112.insert(LegRedemptionDate_112.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_112("STRING_1131691756");
      noLegs_2_1_0.set(LegRepoCollateralSecurityType_112);
      InstrumentLeg_112.insert(LegRepoCollateralSecurityType_112.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_112;
      LegRepurchaseRate_112.setString("25.670000");
      noLegs_2_1_0.set(LegRepurchaseRate_112);
      InstrumentLeg_112.insert(LegRepurchaseRate_112.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_112(1921681441);
      noLegs_2_1_0.set(LegRepurchaseTerm_112);
      InstrumentLeg_112.insert(LegRepurchaseTerm_112.getString());
      FIX::LegSecurityDesc LegSecurityDesc_112("STRING_5704327");
      noLegs_2_1_0.set(LegSecurityDesc_112);
      InstrumentLeg_112.insert(LegSecurityDesc_112.getString());
      FIX::LegSecurityExchange LegSecurityExchange_112("EXCHANGE_741157015");
      noLegs_2_1_0.set(LegSecurityExchange_112);
      InstrumentLeg_112.insert(LegSecurityExchange_112.getString());
      FIX::LegSecurityID LegSecurityID_112("STRING_1337526276");
      noLegs_2_1_0.set(LegSecurityID_112);
      InstrumentLeg_112.insert(LegSecurityID_112.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_112("STRING_1961237342");
      noLegs_2_1_0.set(LegSecurityIDSource_112);
      InstrumentLeg_112.insert(LegSecurityIDSource_112.getString());
      FIX::LegSecuritySubType LegSecuritySubType_112("STRING_1428786406");
      noLegs_2_1_0.set(LegSecuritySubType_112);
      InstrumentLeg_112.insert(LegSecuritySubType_112.getString());
      FIX::LegSecurityType LegSecurityType_112("STRING_156160263");
      noLegs_2_1_0.set(LegSecurityType_112);
      InstrumentLeg_112.insert(LegSecurityType_112.getString());
      FIX::LegSide LegSide_112('1');
      noLegs_2_1_0.set(LegSide_112);
      InstrumentLeg_112.insert(LegSide_112.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_112("STRING_2106986035");
      noLegs_2_1_0.set(LegStateOrProvinceOfIssue_112);
      InstrumentLeg_112.insert(LegStateOrProvinceOfIssue_112.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_112("USD");
      noLegs_2_1_0.set(LegStrikeCurrency_112);
      InstrumentLeg_112.insert(LegStrikeCurrency_112.getString());
      FIX::LegStrikePrice LegStrikePrice_112;
      LegStrikePrice_112.setString("5976374");
      noLegs_2_1_0.set(LegStrikePrice_112);
      InstrumentLeg_112.insert(LegStrikePrice_112.getString());
      FIX::LegSymbol LegSymbol_112("STRING_1059657281");
      noLegs_2_1_0.set(LegSymbol_112);
      InstrumentLeg_112.insert(LegSymbol_112.getString());
      FIX::LegSymbolSfx LegSymbolSfx_112("STRING_1401808120");
      noLegs_2_1_0.set(LegSymbolSfx_112);
      InstrumentLeg_112.insert(LegSymbolSfx_112.getString());
      FIX::LegTimeUnit LegTimeUnit_112("STRING_1226448110");
      noLegs_2_1_0.set(LegTimeUnit_112);
      InstrumentLeg_112.insert(LegTimeUnit_112.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_112("STRING_192231653");
      noLegs_2_1_0.set(LegUnitOfMeasure_112);
      InstrumentLeg_112.insert(LegUnitOfMeasure_112.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_112;
      LegUnitOfMeasureQty_112.setString("18630531");
      noLegs_2_1_0.set(LegUnitOfMeasureQty_112);
      InstrumentLeg_112.insert(LegUnitOfMeasureQty_112.getString());
      all_values.push_back(InstrumentLeg_112);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_200;
        FIX::LegSecurityAltID LegSecurityAltID_200("STRING_1243414964");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltID_200);
        LegSecAltIDGrp_NoLegSecurityAltID_200.insert(LegSecurityAltID_200.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_200("STRING_1070321047");
        noLegSecurityAltID_2_0_2_0.set(LegSecurityAltIDSource_200);
        LegSecAltIDGrp_NoLegSecurityAltID_200.insert(LegSecurityAltIDSource_200.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_200);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_201;
        FIX::LegSecurityAltID LegSecurityAltID_201("STRING_789751391");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltID_201);
        LegSecAltIDGrp_NoLegSecurityAltID_201.insert(LegSecurityAltID_201.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_201("STRING_1736627184");
        noLegSecurityAltID_2_0_2_1.set(LegSecurityAltIDSource_201);
        LegSecAltIDGrp_NoLegSecurityAltID_201.insert(LegSecurityAltIDSource_201.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_201);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_202;
        FIX::LegSecurityAltID LegSecurityAltID_202("STRING_1446346399");
        noLegSecurityAltID_2_0_2_2.set(LegSecurityAltID_202);
        LegSecAltIDGrp_NoLegSecurityAltID_202.insert(LegSecurityAltID_202.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_202("STRING_23542942");
        noLegSecurityAltID_2_0_2_2.set(LegSecurityAltIDSource_202);
        LegSecAltIDGrp_NoLegSecurityAltID_202.insert(LegSecurityAltIDSource_202.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_202);

        noLegs_2_1_0.addGroup(noLegSecurityAltID_2_0_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_17;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_17("EUR");
      noLegs_2_1_0.set(LegBenchmarkCurveCurrency_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurveCurrency_17.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_17("STRING_1402896126");
      noLegs_2_1_0.set(LegBenchmarkCurveName_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurveName_17.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_17("STRING_1627813302");
      noLegs_2_1_0.set(LegBenchmarkCurvePoint_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurvePoint_17.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_17;
      LegBenchmarkPrice_17.setString("2736158");
      noLegs_2_1_0.set(LegBenchmarkPrice_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkPrice_17.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_17(387104234);
      noLegs_2_1_0.set(LegBenchmarkPriceType_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkPriceType_17.getString());
      all_values.push_back(LegBenchmarkCurveData_17);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_56;
        FIX::LegStipulationType LegStipulationType_56("STRING_47813599");
        noLegStipulations_2_0_2_0.set(LegStipulationType_56);
        LegStipulations_NoLegStipulations_56.insert(LegStipulationType_56.getString());
        FIX::LegStipulationValue LegStipulationValue_56("STRING_392808561");
        noLegStipulations_2_0_2_0.set(LegStipulationValue_56);
        LegStipulations_NoLegStipulations_56.insert(LegStipulationValue_56.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_56);

        noLegs_2_1_0.addGroup(noLegStipulations_2_0_2_0);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_2_1_1;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_4;
      FIX::LegSettlType LegSettlType_25('7');
      noLegs_2_1_1.set(LegSettlType_25);
      SecLstUpdRelSymsLegGrp_NoLegs_4.insert(LegSettlType_25.getString());
      FIX::LegSwapType LegSwapType_25(5);
      noLegs_2_1_1.set(LegSwapType_25);
      SecLstUpdRelSymsLegGrp_NoLegs_4.insert(LegSwapType_25.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_4);

      // InstrumentLeg
      multiset<string> InstrumentLeg_113;
      FIX::EncodedLegIssuer EncodedLegIssuer_113("DATA_206562255");
      noLegs_2_1_1.set(EncodedLegIssuer_113);
      InstrumentLeg_113.insert(EncodedLegIssuer_113.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_113(67421995);
      noLegs_2_1_1.set(EncodedLegIssuerLen_113);
      InstrumentLeg_113.insert(EncodedLegIssuerLen_113.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_113("DATA_1541500138");
      noLegs_2_1_1.set(EncodedLegSecurityDesc_113);
      InstrumentLeg_113.insert(EncodedLegSecurityDesc_113.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_113(1505248354);
      noLegs_2_1_1.set(EncodedLegSecurityDescLen_113);
      InstrumentLeg_113.insert(EncodedLegSecurityDescLen_113.getString());
      FIX::LegCFICode LegCFICode_113("STRING_26924382");
      noLegs_2_1_1.set(LegCFICode_113);
      InstrumentLeg_113.insert(LegCFICode_113.getString());
      FIX::LegContractMultiplier LegContractMultiplier_113;
      LegContractMultiplier_113.setString("11521911");
      noLegs_2_1_1.set(LegContractMultiplier_113);
      InstrumentLeg_113.insert(LegContractMultiplier_113.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_113(1067530472);
      noLegs_2_1_1.set(LegContractMultiplierUnit_113);
      InstrumentLeg_113.insert(LegContractMultiplierUnit_113.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_113("MONTHYEAR_624561845");
      noLegs_2_1_1.set(LegContractSettlMonth_113);
      InstrumentLeg_113.insert(LegContractSettlMonth_113.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_113("COUNTRY_64364750");
      noLegs_2_1_1.set(LegCountryOfIssue_113);
      InstrumentLeg_113.insert(LegCountryOfIssue_113.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_113("LOCALMKTDATE_321854945");
      noLegs_2_1_1.set(LegCouponPaymentDate_113);
      InstrumentLeg_113.insert(LegCouponPaymentDate_113.getString());
      FIX::LegCouponRate LegCouponRate_113;
      LegCouponRate_113.setString("99.550000");
      noLegs_2_1_1.set(LegCouponRate_113);
      InstrumentLeg_113.insert(LegCouponRate_113.getString());
      FIX::LegCreditRating LegCreditRating_113("STRING_256596403");
      noLegs_2_1_1.set(LegCreditRating_113);
      InstrumentLeg_113.insert(LegCreditRating_113.getString());
      FIX::LegCurrency LegCurrency_113("JPY");
      noLegs_2_1_1.set(LegCurrency_113);
      InstrumentLeg_113.insert(LegCurrency_113.getString());
      FIX::LegDatedDate LegDatedDate_113("LOCALMKTDATE_1500011367");
      noLegs_2_1_1.set(LegDatedDate_113);
      InstrumentLeg_113.insert(LegDatedDate_113.getString());
      FIX::LegExerciseStyle LegExerciseStyle_113(1107745478);
      noLegs_2_1_1.set(LegExerciseStyle_113);
      InstrumentLeg_113.insert(LegExerciseStyle_113.getString());
      FIX::LegFactor LegFactor_113;
      LegFactor_113.setString("10775047");
      noLegs_2_1_1.set(LegFactor_113);
      InstrumentLeg_113.insert(LegFactor_113.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_113(1089154904);
      noLegs_2_1_1.set(LegFlowScheduleType_113);
      InstrumentLeg_113.insert(LegFlowScheduleType_113.getString());
      FIX::LegInstrRegistry LegInstrRegistry_113("STRING_406608230");
      noLegs_2_1_1.set(LegInstrRegistry_113);
      InstrumentLeg_113.insert(LegInstrRegistry_113.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_113("LOCALMKTDATE_1101047713");
      noLegs_2_1_1.set(LegInterestAccrualDate_113);
      InstrumentLeg_113.insert(LegInterestAccrualDate_113.getString());
      FIX::LegIssueDate LegIssueDate_113("LOCALMKTDATE_1844175968");
      noLegs_2_1_1.set(LegIssueDate_113);
      InstrumentLeg_113.insert(LegIssueDate_113.getString());
      FIX::LegIssuer LegIssuer_113("STRING_27128011");
      noLegs_2_1_1.set(LegIssuer_113);
      InstrumentLeg_113.insert(LegIssuer_113.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_113("STRING_356460191");
      noLegs_2_1_1.set(LegLocaleOfIssue_113);
      InstrumentLeg_113.insert(LegLocaleOfIssue_113.getString());
      FIX::LegMaturityDate LegMaturityDate_113("LOCALMKTDATE_1324505622");
      noLegs_2_1_1.set(LegMaturityDate_113);
      InstrumentLeg_113.insert(LegMaturityDate_113.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_113("MONTHYEAR_300743817");
      noLegs_2_1_1.set(LegMaturityMonthYear_113);
      InstrumentLeg_113.insert(LegMaturityMonthYear_113.getString());
      FIX::LegMaturityTime LegMaturityTime_113("TZTIMEONLY_743564425");
      noLegs_2_1_1.set(LegMaturityTime_113);
      InstrumentLeg_113.insert(LegMaturityTime_113.getString());
      FIX::LegOptAttribute LegOptAttribute_113('1');
      noLegs_2_1_1.set(LegOptAttribute_113);
      InstrumentLeg_113.insert(LegOptAttribute_113.getString());
      FIX::LegOptionRatio LegOptionRatio_113;
      LegOptionRatio_113.setString("3485574");
      noLegs_2_1_1.set(LegOptionRatio_113);
      InstrumentLeg_113.insert(LegOptionRatio_113.getString());
      FIX::LegPool LegPool_113("STRING_1136372986");
      noLegs_2_1_1.set(LegPool_113);
      InstrumentLeg_113.insert(LegPool_113.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_113("STRING_8103432");
      noLegs_2_1_1.set(LegPriceUnitOfMeasure_113);
      InstrumentLeg_113.insert(LegPriceUnitOfMeasure_113.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_113;
      LegPriceUnitOfMeasureQty_113.setString("17338972");
      noLegs_2_1_1.set(LegPriceUnitOfMeasureQty_113);
      InstrumentLeg_113.insert(LegPriceUnitOfMeasureQty_113.getString());
      FIX::LegProduct LegProduct_113(1342935241);
      noLegs_2_1_1.set(LegProduct_113);
      InstrumentLeg_113.insert(LegProduct_113.getString());
      FIX::LegPutOrCall LegPutOrCall_113(75525428);
      noLegs_2_1_1.set(LegPutOrCall_113);
      InstrumentLeg_113.insert(LegPutOrCall_113.getString());
      FIX::LegRatioQty LegRatioQty_113;
      LegRatioQty_113.setString("11279137");
      noLegs_2_1_1.set(LegRatioQty_113);
      InstrumentLeg_113.insert(LegRatioQty_113.getString());
      FIX::LegRedemptionDate LegRedemptionDate_113("LOCALMKTDATE_700699947");
      noLegs_2_1_1.set(LegRedemptionDate_113);
      InstrumentLeg_113.insert(LegRedemptionDate_113.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_113("STRING_102449810");
      noLegs_2_1_1.set(LegRepoCollateralSecurityType_113);
      InstrumentLeg_113.insert(LegRepoCollateralSecurityType_113.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_113;
      LegRepurchaseRate_113.setString("12.500000");
      noLegs_2_1_1.set(LegRepurchaseRate_113);
      InstrumentLeg_113.insert(LegRepurchaseRate_113.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_113(1768230419);
      noLegs_2_1_1.set(LegRepurchaseTerm_113);
      InstrumentLeg_113.insert(LegRepurchaseTerm_113.getString());
      FIX::LegSecurityDesc LegSecurityDesc_113("STRING_727011655");
      noLegs_2_1_1.set(LegSecurityDesc_113);
      InstrumentLeg_113.insert(LegSecurityDesc_113.getString());
      FIX::LegSecurityExchange LegSecurityExchange_113("EXCHANGE_196986000");
      noLegs_2_1_1.set(LegSecurityExchange_113);
      InstrumentLeg_113.insert(LegSecurityExchange_113.getString());
      FIX::LegSecurityID LegSecurityID_113("STRING_2090085364");
      noLegs_2_1_1.set(LegSecurityID_113);
      InstrumentLeg_113.insert(LegSecurityID_113.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_113("STRING_430537962");
      noLegs_2_1_1.set(LegSecurityIDSource_113);
      InstrumentLeg_113.insert(LegSecurityIDSource_113.getString());
      FIX::LegSecuritySubType LegSecuritySubType_113("STRING_453582403");
      noLegs_2_1_1.set(LegSecuritySubType_113);
      InstrumentLeg_113.insert(LegSecuritySubType_113.getString());
      FIX::LegSecurityType LegSecurityType_113("STRING_2127509795");
      noLegs_2_1_1.set(LegSecurityType_113);
      InstrumentLeg_113.insert(LegSecurityType_113.getString());
      FIX::LegSide LegSide_113('7');
      noLegs_2_1_1.set(LegSide_113);
      InstrumentLeg_113.insert(LegSide_113.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_113("STRING_1953593771");
      noLegs_2_1_1.set(LegStateOrProvinceOfIssue_113);
      InstrumentLeg_113.insert(LegStateOrProvinceOfIssue_113.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_113("EUR");
      noLegs_2_1_1.set(LegStrikeCurrency_113);
      InstrumentLeg_113.insert(LegStrikeCurrency_113.getString());
      FIX::LegStrikePrice LegStrikePrice_113;
      LegStrikePrice_113.setString("8952650");
      noLegs_2_1_1.set(LegStrikePrice_113);
      InstrumentLeg_113.insert(LegStrikePrice_113.getString());
      FIX::LegSymbol LegSymbol_113("STRING_1494379856");
      noLegs_2_1_1.set(LegSymbol_113);
      InstrumentLeg_113.insert(LegSymbol_113.getString());
      FIX::LegSymbolSfx LegSymbolSfx_113("STRING_749360178");
      noLegs_2_1_1.set(LegSymbolSfx_113);
      InstrumentLeg_113.insert(LegSymbolSfx_113.getString());
      FIX::LegTimeUnit LegTimeUnit_113("STRING_591957347");
      noLegs_2_1_1.set(LegTimeUnit_113);
      InstrumentLeg_113.insert(LegTimeUnit_113.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_113("STRING_1521507867");
      noLegs_2_1_1.set(LegUnitOfMeasure_113);
      InstrumentLeg_113.insert(LegUnitOfMeasure_113.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_113;
      LegUnitOfMeasureQty_113.setString("11058203");
      noLegs_2_1_1.set(LegUnitOfMeasureQty_113);
      InstrumentLeg_113.insert(LegUnitOfMeasureQty_113.getString());
      all_values.push_back(InstrumentLeg_113);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_203;
        FIX::LegSecurityAltID LegSecurityAltID_203("STRING_1822251685");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltID_203);
        LegSecAltIDGrp_NoLegSecurityAltID_203.insert(LegSecurityAltID_203.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_203("STRING_1849384794");
        noLegSecurityAltID_2_1_2_0.set(LegSecurityAltIDSource_203);
        LegSecAltIDGrp_NoLegSecurityAltID_203.insert(LegSecurityAltIDSource_203.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_203);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_204;
        FIX::LegSecurityAltID LegSecurityAltID_204("STRING_1138447164");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltID_204);
        LegSecAltIDGrp_NoLegSecurityAltID_204.insert(LegSecurityAltID_204.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_204("STRING_23325453");
        noLegSecurityAltID_2_1_2_1.set(LegSecurityAltIDSource_204);
        LegSecAltIDGrp_NoLegSecurityAltID_204.insert(LegSecurityAltIDSource_204.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_204);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_205;
        FIX::LegSecurityAltID LegSecurityAltID_205("STRING_838274132");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltID_205);
        LegSecAltIDGrp_NoLegSecurityAltID_205.insert(LegSecurityAltID_205.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_205("STRING_1146550597");
        noLegSecurityAltID_2_1_2_2.set(LegSecurityAltIDSource_205);
        LegSecAltIDGrp_NoLegSecurityAltID_205.insert(LegSecurityAltIDSource_205.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_205);

        noLegs_2_1_1.addGroup(noLegSecurityAltID_2_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_18;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_18("EUR");
      noLegs_2_1_1.set(LegBenchmarkCurveCurrency_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkCurveCurrency_18.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_18("STRING_1222076025");
      noLegs_2_1_1.set(LegBenchmarkCurveName_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkCurveName_18.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_18("STRING_737652878");
      noLegs_2_1_1.set(LegBenchmarkCurvePoint_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkCurvePoint_18.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_18;
      LegBenchmarkPrice_18.setString("7344256");
      noLegs_2_1_1.set(LegBenchmarkPrice_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkPrice_18.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_18(1324525835);
      noLegs_2_1_1.set(LegBenchmarkPriceType_18);
      LegBenchmarkCurveData_18.insert(LegBenchmarkPriceType_18.getString());
      all_values.push_back(LegBenchmarkCurveData_18);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_57;
        FIX::LegStipulationType LegStipulationType_57("STRING_355172444");
        noLegStipulations_2_1_2_0.set(LegStipulationType_57);
        LegStipulations_NoLegStipulations_57.insert(LegStipulationType_57.getString());
        FIX::LegStipulationValue LegStipulationValue_57("STRING_2051537491");
        noLegStipulations_2_1_2_0.set(LegStipulationValue_57);
        LegStipulations_NoLegStipulations_57.insert(LegStipulationValue_57.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_57);

        noLegs_2_1_1.addGroup(noLegStipulations_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_58;
        FIX::LegStipulationType LegStipulationType_58("STRING_1067260129");
        noLegStipulations_2_1_2_1.set(LegStipulationType_58);
        LegStipulations_NoLegStipulations_58.insert(LegStipulationType_58.getString());
        FIX::LegStipulationValue LegStipulationValue_58("STRING_297774160");
        noLegStipulations_2_1_2_1.set(LegStipulationValue_58);
        LegStipulations_NoLegStipulations_58.insert(LegStipulationValue_58.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_58);

        noLegs_2_1_1.addGroup(noLegStipulations_2_1_2_1);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_2_1_2;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_5;
      FIX::LegSettlType LegSettlType_26('3');
      noLegs_2_1_2.set(LegSettlType_26);
      SecLstUpdRelSymsLegGrp_NoLegs_5.insert(LegSettlType_26.getString());
      FIX::LegSwapType LegSwapType_26(2);
      noLegs_2_1_2.set(LegSwapType_26);
      SecLstUpdRelSymsLegGrp_NoLegs_5.insert(LegSwapType_26.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_5);

      // InstrumentLeg
      multiset<string> InstrumentLeg_114;
      FIX::EncodedLegIssuer EncodedLegIssuer_114("DATA_277800308");
      noLegs_2_1_2.set(EncodedLegIssuer_114);
      InstrumentLeg_114.insert(EncodedLegIssuer_114.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_114(1052883148);
      noLegs_2_1_2.set(EncodedLegIssuerLen_114);
      InstrumentLeg_114.insert(EncodedLegIssuerLen_114.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_114("DATA_1326952656");
      noLegs_2_1_2.set(EncodedLegSecurityDesc_114);
      InstrumentLeg_114.insert(EncodedLegSecurityDesc_114.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_114(1365571934);
      noLegs_2_1_2.set(EncodedLegSecurityDescLen_114);
      InstrumentLeg_114.insert(EncodedLegSecurityDescLen_114.getString());
      FIX::LegCFICode LegCFICode_114("STRING_701195613");
      noLegs_2_1_2.set(LegCFICode_114);
      InstrumentLeg_114.insert(LegCFICode_114.getString());
      FIX::LegContractMultiplier LegContractMultiplier_114;
      LegContractMultiplier_114.setString("747340");
      noLegs_2_1_2.set(LegContractMultiplier_114);
      InstrumentLeg_114.insert(LegContractMultiplier_114.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_114(712468142);
      noLegs_2_1_2.set(LegContractMultiplierUnit_114);
      InstrumentLeg_114.insert(LegContractMultiplierUnit_114.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_114("MONTHYEAR_1450555792");
      noLegs_2_1_2.set(LegContractSettlMonth_114);
      InstrumentLeg_114.insert(LegContractSettlMonth_114.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_114("COUNTRY_666691382");
      noLegs_2_1_2.set(LegCountryOfIssue_114);
      InstrumentLeg_114.insert(LegCountryOfIssue_114.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_114("LOCALMKTDATE_86492361");
      noLegs_2_1_2.set(LegCouponPaymentDate_114);
      InstrumentLeg_114.insert(LegCouponPaymentDate_114.getString());
      FIX::LegCouponRate LegCouponRate_114;
      LegCouponRate_114.setString("25.130000");
      noLegs_2_1_2.set(LegCouponRate_114);
      InstrumentLeg_114.insert(LegCouponRate_114.getString());
      FIX::LegCreditRating LegCreditRating_114("STRING_435670703");
      noLegs_2_1_2.set(LegCreditRating_114);
      InstrumentLeg_114.insert(LegCreditRating_114.getString());
      FIX::LegCurrency LegCurrency_114("USD");
      noLegs_2_1_2.set(LegCurrency_114);
      InstrumentLeg_114.insert(LegCurrency_114.getString());
      FIX::LegDatedDate LegDatedDate_114("LOCALMKTDATE_1574117867");
      noLegs_2_1_2.set(LegDatedDate_114);
      InstrumentLeg_114.insert(LegDatedDate_114.getString());
      FIX::LegExerciseStyle LegExerciseStyle_114(1932069500);
      noLegs_2_1_2.set(LegExerciseStyle_114);
      InstrumentLeg_114.insert(LegExerciseStyle_114.getString());
      FIX::LegFactor LegFactor_114;
      LegFactor_114.setString("9490677");
      noLegs_2_1_2.set(LegFactor_114);
      InstrumentLeg_114.insert(LegFactor_114.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_114(573184816);
      noLegs_2_1_2.set(LegFlowScheduleType_114);
      InstrumentLeg_114.insert(LegFlowScheduleType_114.getString());
      FIX::LegInstrRegistry LegInstrRegistry_114("STRING_1541808597");
      noLegs_2_1_2.set(LegInstrRegistry_114);
      InstrumentLeg_114.insert(LegInstrRegistry_114.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_114("LOCALMKTDATE_982793518");
      noLegs_2_1_2.set(LegInterestAccrualDate_114);
      InstrumentLeg_114.insert(LegInterestAccrualDate_114.getString());
      FIX::LegIssueDate LegIssueDate_114("LOCALMKTDATE_1795260841");
      noLegs_2_1_2.set(LegIssueDate_114);
      InstrumentLeg_114.insert(LegIssueDate_114.getString());
      FIX::LegIssuer LegIssuer_114("STRING_131977827");
      noLegs_2_1_2.set(LegIssuer_114);
      InstrumentLeg_114.insert(LegIssuer_114.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_114("STRING_1717219190");
      noLegs_2_1_2.set(LegLocaleOfIssue_114);
      InstrumentLeg_114.insert(LegLocaleOfIssue_114.getString());
      FIX::LegMaturityDate LegMaturityDate_114("LOCALMKTDATE_972303029");
      noLegs_2_1_2.set(LegMaturityDate_114);
      InstrumentLeg_114.insert(LegMaturityDate_114.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_114("MONTHYEAR_1002251956");
      noLegs_2_1_2.set(LegMaturityMonthYear_114);
      InstrumentLeg_114.insert(LegMaturityMonthYear_114.getString());
      FIX::LegMaturityTime LegMaturityTime_114("TZTIMEONLY_2072391634");
      noLegs_2_1_2.set(LegMaturityTime_114);
      InstrumentLeg_114.insert(LegMaturityTime_114.getString());
      FIX::LegOptAttribute LegOptAttribute_114('8');
      noLegs_2_1_2.set(LegOptAttribute_114);
      InstrumentLeg_114.insert(LegOptAttribute_114.getString());
      FIX::LegOptionRatio LegOptionRatio_114;
      LegOptionRatio_114.setString("20695120");
      noLegs_2_1_2.set(LegOptionRatio_114);
      InstrumentLeg_114.insert(LegOptionRatio_114.getString());
      FIX::LegPool LegPool_114("STRING_222682147");
      noLegs_2_1_2.set(LegPool_114);
      InstrumentLeg_114.insert(LegPool_114.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_114("STRING_1210948677");
      noLegs_2_1_2.set(LegPriceUnitOfMeasure_114);
      InstrumentLeg_114.insert(LegPriceUnitOfMeasure_114.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_114;
      LegPriceUnitOfMeasureQty_114.setString("14428709");
      noLegs_2_1_2.set(LegPriceUnitOfMeasureQty_114);
      InstrumentLeg_114.insert(LegPriceUnitOfMeasureQty_114.getString());
      FIX::LegProduct LegProduct_114(500482455);
      noLegs_2_1_2.set(LegProduct_114);
      InstrumentLeg_114.insert(LegProduct_114.getString());
      FIX::LegPutOrCall LegPutOrCall_114(116348177);
      noLegs_2_1_2.set(LegPutOrCall_114);
      InstrumentLeg_114.insert(LegPutOrCall_114.getString());
      FIX::LegRatioQty LegRatioQty_114;
      LegRatioQty_114.setString("6223399");
      noLegs_2_1_2.set(LegRatioQty_114);
      InstrumentLeg_114.insert(LegRatioQty_114.getString());
      FIX::LegRedemptionDate LegRedemptionDate_114("LOCALMKTDATE_1866054389");
      noLegs_2_1_2.set(LegRedemptionDate_114);
      InstrumentLeg_114.insert(LegRedemptionDate_114.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_114("STRING_817543791");
      noLegs_2_1_2.set(LegRepoCollateralSecurityType_114);
      InstrumentLeg_114.insert(LegRepoCollateralSecurityType_114.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_114;
      LegRepurchaseRate_114.setString("40.140000");
      noLegs_2_1_2.set(LegRepurchaseRate_114);
      InstrumentLeg_114.insert(LegRepurchaseRate_114.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_114(431038883);
      noLegs_2_1_2.set(LegRepurchaseTerm_114);
      InstrumentLeg_114.insert(LegRepurchaseTerm_114.getString());
      FIX::LegSecurityDesc LegSecurityDesc_114("STRING_120615935");
      noLegs_2_1_2.set(LegSecurityDesc_114);
      InstrumentLeg_114.insert(LegSecurityDesc_114.getString());
      FIX::LegSecurityExchange LegSecurityExchange_114("EXCHANGE_1363765396");
      noLegs_2_1_2.set(LegSecurityExchange_114);
      InstrumentLeg_114.insert(LegSecurityExchange_114.getString());
      FIX::LegSecurityID LegSecurityID_114("STRING_517531244");
      noLegs_2_1_2.set(LegSecurityID_114);
      InstrumentLeg_114.insert(LegSecurityID_114.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_114("STRING_529508448");
      noLegs_2_1_2.set(LegSecurityIDSource_114);
      InstrumentLeg_114.insert(LegSecurityIDSource_114.getString());
      FIX::LegSecuritySubType LegSecuritySubType_114("STRING_1799436099");
      noLegs_2_1_2.set(LegSecuritySubType_114);
      InstrumentLeg_114.insert(LegSecuritySubType_114.getString());
      FIX::LegSecurityType LegSecurityType_114("STRING_278791643");
      noLegs_2_1_2.set(LegSecurityType_114);
      InstrumentLeg_114.insert(LegSecurityType_114.getString());
      FIX::LegSide LegSide_114('6');
      noLegs_2_1_2.set(LegSide_114);
      InstrumentLeg_114.insert(LegSide_114.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_114("STRING_1226070318");
      noLegs_2_1_2.set(LegStateOrProvinceOfIssue_114);
      InstrumentLeg_114.insert(LegStateOrProvinceOfIssue_114.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_114("CHF");
      noLegs_2_1_2.set(LegStrikeCurrency_114);
      InstrumentLeg_114.insert(LegStrikeCurrency_114.getString());
      FIX::LegStrikePrice LegStrikePrice_114;
      LegStrikePrice_114.setString("17992551");
      noLegs_2_1_2.set(LegStrikePrice_114);
      InstrumentLeg_114.insert(LegStrikePrice_114.getString());
      FIX::LegSymbol LegSymbol_114("STRING_1605186092");
      noLegs_2_1_2.set(LegSymbol_114);
      InstrumentLeg_114.insert(LegSymbol_114.getString());
      FIX::LegSymbolSfx LegSymbolSfx_114("STRING_424679771");
      noLegs_2_1_2.set(LegSymbolSfx_114);
      InstrumentLeg_114.insert(LegSymbolSfx_114.getString());
      FIX::LegTimeUnit LegTimeUnit_114("STRING_1447032328");
      noLegs_2_1_2.set(LegTimeUnit_114);
      InstrumentLeg_114.insert(LegTimeUnit_114.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_114("STRING_1737163919");
      noLegs_2_1_2.set(LegUnitOfMeasure_114);
      InstrumentLeg_114.insert(LegUnitOfMeasure_114.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_114;
      LegUnitOfMeasureQty_114.setString("21418989");
      noLegs_2_1_2.set(LegUnitOfMeasureQty_114);
      InstrumentLeg_114.insert(LegUnitOfMeasureQty_114.getString());
      all_values.push_back(InstrumentLeg_114);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_206;
        FIX::LegSecurityAltID LegSecurityAltID_206("STRING_591932228");
        noLegSecurityAltID_2_2_2_0.set(LegSecurityAltID_206);
        LegSecAltIDGrp_NoLegSecurityAltID_206.insert(LegSecurityAltID_206.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_206("STRING_2066806948");
        noLegSecurityAltID_2_2_2_0.set(LegSecurityAltIDSource_206);
        LegSecAltIDGrp_NoLegSecurityAltID_206.insert(LegSecurityAltIDSource_206.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_206);

        noLegs_2_1_2.addGroup(noLegSecurityAltID_2_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_207;
        FIX::LegSecurityAltID LegSecurityAltID_207("STRING_1148208581");
        noLegSecurityAltID_2_2_2_1.set(LegSecurityAltID_207);
        LegSecAltIDGrp_NoLegSecurityAltID_207.insert(LegSecurityAltID_207.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_207("STRING_513960666");
        noLegSecurityAltID_2_2_2_1.set(LegSecurityAltIDSource_207);
        LegSecAltIDGrp_NoLegSecurityAltID_207.insert(LegSecurityAltIDSource_207.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_207);

        noLegs_2_1_2.addGroup(noLegSecurityAltID_2_2_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_19;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_19("EUR");
      noLegs_2_1_2.set(LegBenchmarkCurveCurrency_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkCurveCurrency_19.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_19("STRING_1956831637");
      noLegs_2_1_2.set(LegBenchmarkCurveName_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkCurveName_19.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_19("STRING_642487902");
      noLegs_2_1_2.set(LegBenchmarkCurvePoint_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkCurvePoint_19.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_19;
      LegBenchmarkPrice_19.setString("3280217");
      noLegs_2_1_2.set(LegBenchmarkPrice_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkPrice_19.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_19(431687968);
      noLegs_2_1_2.set(LegBenchmarkPriceType_19);
      LegBenchmarkCurveData_19.insert(LegBenchmarkPriceType_19.getString());
      all_values.push_back(LegBenchmarkCurveData_19);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_2_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_59;
        FIX::LegStipulationType LegStipulationType_59("STRING_1145565579");
        noLegStipulations_2_2_2_0.set(LegStipulationType_59);
        LegStipulations_NoLegStipulations_59.insert(LegStipulationType_59.getString());
        FIX::LegStipulationValue LegStipulationValue_59("STRING_1128761982");
        noLegStipulations_2_2_2_0.set(LegStipulationValue_59);
        LegStipulations_NoLegStipulations_59.insert(LegStipulationValue_59.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_59);

        noLegs_2_1_2.addGroup(noLegStipulations_2_2_2_0);
      }
      noRelatedSym_0_2.addGroup(noLegs_2_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_16;
    FIX::ExpirationCycle ExpirationCycle_17(2);
    noRelatedSym_0_2.set(ExpirationCycle_17);
    BaseTradingRules_16.insert(ExpirationCycle_17.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_16(2);
    noRelatedSym_0_2.set(ImpliedMarketIndicator_16);
    BaseTradingRules_16.insert(ImpliedMarketIndicator_16.getString());
    FIX::MaxPriceVariation MaxPriceVariation_16;
    MaxPriceVariation_16.setString("3450437");
    noRelatedSym_0_2.set(MaxPriceVariation_16);
    BaseTradingRules_16.insert(MaxPriceVariation_16.getString());
    FIX::MaxTradeVol MaxTradeVol_16;
    MaxTradeVol_16.setString("13096287");
    noRelatedSym_0_2.set(MaxTradeVol_16);
    BaseTradingRules_16.insert(MaxTradeVol_16.getString());
    FIX::MinTradeVol MinTradeVol_16;
    MinTradeVol_16.setString("17956899");
    noRelatedSym_0_2.set(MinTradeVol_16);
    BaseTradingRules_16.insert(MinTradeVol_16.getString());
    FIX::MultilegModel MultilegModel_18(2);
    noRelatedSym_0_2.set(MultilegModel_18);
    BaseTradingRules_16.insert(MultilegModel_18.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_18(3);
    noRelatedSym_0_2.set(MultilegPriceMethod_18);
    BaseTradingRules_16.insert(MultilegPriceMethod_18.getString());
    FIX::PriceType PriceType_49(15);
    noRelatedSym_0_2.set(PriceType_49);
    BaseTradingRules_16.insert(PriceType_49.getString());
    FIX::RoundLot RoundLot_16;
    RoundLot_16.setString("12230664");
    noRelatedSym_0_2.set(RoundLot_16);
    BaseTradingRules_16.insert(RoundLot_16.getString());
    FIX::TradingCurrency TradingCurrency_16("JPY");
    noRelatedSym_0_2.set(TradingCurrency_16);
    BaseTradingRules_16.insert(TradingCurrency_16.getString());
    all_values.push_back(BaseTradingRules_16);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_2_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_35;
      FIX::LotType LotType_39('1');
      noLotTypeRules_2_1_0.set(LotType_39);
      LotTypeRules_NoLotTypeRules_35.insert(LotType_39.getString());
      FIX::MinLotSize MinLotSize_35;
      MinLotSize_35.setString("1550744");
      noLotTypeRules_2_1_0.set(MinLotSize_35);
      LotTypeRules_NoLotTypeRules_35.insert(MinLotSize_35.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_35);

      noRelatedSym_0_2.addGroup(noLotTypeRules_2_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_16;
    FIX::HighLimitPrice HighLimitPrice_16;
    HighLimitPrice_16.setString("1743866");
    noRelatedSym_0_2.set(HighLimitPrice_16);
    PriceLimits_16.insert(HighLimitPrice_16.getString());
    FIX::LowLimitPrice LowLimitPrice_16;
    LowLimitPrice_16.setString("6991806");
    noRelatedSym_0_2.set(LowLimitPrice_16);
    PriceLimits_16.insert(LowLimitPrice_16.getString());
    FIX::PriceLimitType PriceLimitType_16(1);
    noRelatedSym_0_2.set(PriceLimitType_16);
    PriceLimits_16.insert(PriceLimitType_16.getString());
    FIX::TradingReferencePrice TradingReferencePrice_16;
    TradingReferencePrice_16.setString("4462383");
    noRelatedSym_0_2.set(TradingReferencePrice_16);
    PriceLimits_16.insert(TradingReferencePrice_16.getString());
    all_values.push_back(PriceLimits_16);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_2_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_28;
      FIX::EndTickPriceRange EndTickPriceRange_28;
      EndTickPriceRange_28.setString("688130");
      noTickRules_2_1_0.set(EndTickPriceRange_28);
      TickRules_NoTickRules_28.insert(EndTickPriceRange_28.getString());
      FIX::StartTickPriceRange StartTickPriceRange_28;
      StartTickPriceRange_28.setString("15944469");
      noTickRules_2_1_0.set(StartTickPriceRange_28);
      TickRules_NoTickRules_28.insert(StartTickPriceRange_28.getString());
      FIX::TickIncrement TickIncrement_28;
      TickIncrement_28.setString("18050735");
      noTickRules_2_1_0.set(TickIncrement_28);
      TickRules_NoTickRules_28.insert(TickIncrement_28.getString());
      FIX::TickRuleType TickRuleType_28(3);
      noTickRules_2_1_0.set(TickRuleType_28);
      TickRules_NoTickRules_28.insert(TickRuleType_28.getString());
      all_values.push_back(TickRules_NoTickRules_28);

      noRelatedSym_0_2.addGroup(noTickRules_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_2_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_29;
      FIX::EndTickPriceRange EndTickPriceRange_29;
      EndTickPriceRange_29.setString("18061205");
      noTickRules_2_1_1.set(EndTickPriceRange_29);
      TickRules_NoTickRules_29.insert(EndTickPriceRange_29.getString());
      FIX::StartTickPriceRange StartTickPriceRange_29;
      StartTickPriceRange_29.setString("16144215");
      noTickRules_2_1_1.set(StartTickPriceRange_29);
      TickRules_NoTickRules_29.insert(StartTickPriceRange_29.getString());
      FIX::TickIncrement TickIncrement_29;
      TickIncrement_29.setString("8533064");
      noTickRules_2_1_1.set(TickIncrement_29);
      TickRules_NoTickRules_29.insert(TickIncrement_29.getString());
      FIX::TickRuleType TickRuleType_29(2);
      noTickRules_2_1_1.set(TickRuleType_29);
      TickRules_NoTickRules_29.insert(TickRuleType_29.getString());
      all_values.push_back(TickRules_NoTickRules_29);

      noRelatedSym_0_2.addGroup(noTickRules_2_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_2_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_30;
      FIX::EndTickPriceRange EndTickPriceRange_30;
      EndTickPriceRange_30.setString("20461094");
      noTickRules_2_1_2.set(EndTickPriceRange_30);
      TickRules_NoTickRules_30.insert(EndTickPriceRange_30.getString());
      FIX::StartTickPriceRange StartTickPriceRange_30;
      StartTickPriceRange_30.setString("12143650");
      noTickRules_2_1_2.set(StartTickPriceRange_30);
      TickRules_NoTickRules_30.insert(StartTickPriceRange_30.getString());
      FIX::TickIncrement TickIncrement_30;
      TickIncrement_30.setString("11322242");
      noTickRules_2_1_2.set(TickIncrement_30);
      TickRules_NoTickRules_30.insert(TickIncrement_30.getString());
      FIX::TickRuleType TickRuleType_30(4);
      noTickRules_2_1_2.set(TickRuleType_30);
      TickRules_NoTickRules_30.insert(TickRuleType_30.getString());
      all_values.push_back(TickRules_NoTickRules_30);

      noRelatedSym_0_2.addGroup(noTickRules_2_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_2_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_34;
      FIX::NestedInstrAttribType NestedInstrAttribType_34(250922155);
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribType_34);
      NestedInstrumentAttribute_NoNestedInstrAttrib_34.insert(NestedInstrAttribType_34.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_34("STRING_1372431539");
      noNestedInstrAttrib_2_1_0.set(NestedInstrAttribValue_34);
      NestedInstrumentAttribute_NoNestedInstrAttrib_34.insert(NestedInstrAttribValue_34.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_34);

      noRelatedSym_0_2.addGroup(noNestedInstrAttrib_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_2_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_35;
      FIX::NestedInstrAttribType NestedInstrAttribType_35(1168607701);
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribType_35);
      NestedInstrumentAttribute_NoNestedInstrAttrib_35.insert(NestedInstrAttribType_35.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_35("STRING_2046612118");
      noNestedInstrAttrib_2_1_1.set(NestedInstrAttribValue_35);
      NestedInstrumentAttribute_NoNestedInstrAttrib_35.insert(NestedInstrAttribValue_35.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_35);

      noRelatedSym_0_2.addGroup(noNestedInstrAttrib_2_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_2_1_2;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_36;
      FIX::NestedInstrAttribType NestedInstrAttribType_36(1369427720);
      noNestedInstrAttrib_2_1_2.set(NestedInstrAttribType_36);
      NestedInstrumentAttribute_NoNestedInstrAttrib_36.insert(NestedInstrAttribType_36.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_36("STRING_609544467");
      noNestedInstrAttrib_2_1_2.set(NestedInstrAttribValue_36);
      NestedInstrumentAttribute_NoNestedInstrAttrib_36.insert(NestedInstrAttribValue_36.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_36);

      noRelatedSym_0_2.addGroup(noNestedInstrAttrib_2_1_2);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_2_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_30;
      FIX::TradingSessionID TradingSessionID_94("STRING_4");
      noTradingSessionRules_2_1_0.set(TradingSessionID_94);
      TradingSessionRulesGrp_NoTradingSessionRules_30.insert(TradingSessionID_94.getString());
      FIX::TradingSessionSubID TradingSessionSubID_94("STRING_4");
      noTradingSessionRules_2_1_0.set(TradingSessionSubID_94);
      TradingSessionRulesGrp_NoTradingSessionRules_30.insert(TradingSessionSubID_94.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_30);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_64;
        FIX::ExecInstValue ExecInstValue_64('1');
        noExecInstRules_2_0_2_0.set(ExecInstValue_64);
        ExecInstRules_NoExecInstRules_64.insert(ExecInstValue_64.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_64);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_65;
        FIX::ExecInstValue ExecInstValue_65('1');
        noExecInstRules_2_0_2_1.set(ExecInstValue_65);
        ExecInstRules_NoExecInstRules_65.insert(ExecInstValue_65.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_65);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_66;
        FIX::ExecInstValue ExecInstValue_66('7');
        noExecInstRules_2_0_2_2.set(ExecInstValue_66);
        ExecInstRules_NoExecInstRules_66.insert(ExecInstValue_66.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_66);

        noTradingSessionRules_2_1_0.addGroup(noExecInstRules_2_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_60;
        FIX::MDBookType MDBookType_62(1);
        noMDFeedTypes_2_0_2_0.set(MDBookType_62);
        MarketDataFeedTypes_NoMDFeedTypes_60.insert(MDBookType_62.getString());
        FIX::MDFeedType MDFeedType_62("STRING_222595779");
        noMDFeedTypes_2_0_2_0.set(MDFeedType_62);
        MarketDataFeedTypes_NoMDFeedTypes_60.insert(MDFeedType_62.getString());
        FIX::MarketDepth MarketDepth_63(1940473601);
        noMDFeedTypes_2_0_2_0.set(MarketDepth_63);
        MarketDataFeedTypes_NoMDFeedTypes_60.insert(MarketDepth_63.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_60);

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_61;
        FIX::MDBookType MDBookType_63(1);
        noMDFeedTypes_2_0_2_1.set(MDBookType_63);
        MarketDataFeedTypes_NoMDFeedTypes_61.insert(MDBookType_63.getString());
        FIX::MDFeedType MDFeedType_63("STRING_291408840");
        noMDFeedTypes_2_0_2_1.set(MDFeedType_63);
        MarketDataFeedTypes_NoMDFeedTypes_61.insert(MDFeedType_63.getString());
        FIX::MarketDepth MarketDepth_64(1387436911);
        noMDFeedTypes_2_0_2_1.set(MarketDepth_64);
        MarketDataFeedTypes_NoMDFeedTypes_61.insert(MarketDepth_64.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_61);

        noTradingSessionRules_2_1_0.addGroup(noMDFeedTypes_2_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_65;
        FIX::MatchAlgorithm MatchAlgorithm_65("STRING_502227348");
        noMatchRules_2_0_2_0.set(MatchAlgorithm_65);
        MatchRules_NoMatchRules_65.insert(MatchAlgorithm_65.getString());
        FIX::MatchType MatchType_70("STRING_M2");
        noMatchRules_2_0_2_0.set(MatchType_70);
        MatchRules_NoMatchRules_65.insert(MatchType_70.getString());
        all_values.push_back(MatchRules_NoMatchRules_65);

        noTradingSessionRules_2_1_0.addGroup(noMatchRules_2_0_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_72;
        FIX::OrdType OrdType_95('7');
        noOrdTypeRules_2_0_2_0.set(OrdType_95);
        OrdTypeRules_NoOrdTypeRules_72.insert(OrdType_95.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_72);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_73;
        FIX::OrdType OrdType_96('F');
        noOrdTypeRules_2_0_2_1.set(OrdType_96);
        OrdTypeRules_NoOrdTypeRules_73.insert(OrdType_96.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_73);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_0_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_74;
        FIX::OrdType OrdType_97('9');
        noOrdTypeRules_2_0_2_2.set(OrdType_97);
        OrdTypeRules_NoOrdTypeRules_74.insert(OrdType_97.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_74);

        noTradingSessionRules_2_1_0.addGroup(noOrdTypeRules_2_0_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_64;
        FIX::TimeInForce TimeInForce_77('3');
        noTimeInForceRules_2_0_2_0.set(TimeInForce_77);
        TimeInForceRules_NoTimeInForceRules_64.insert(TimeInForce_77.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_64);

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_65;
        FIX::TimeInForce TimeInForce_78('3');
        noTimeInForceRules_2_0_2_1.set(TimeInForce_78);
        TimeInForceRules_NoTimeInForceRules_65.insert(TimeInForce_78.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_65);

        noTradingSessionRules_2_1_0.addGroup(noTimeInForceRules_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noTradingSessionRules_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_2_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_31;
      FIX::TradingSessionID TradingSessionID_95("STRING_5");
      noTradingSessionRules_2_1_1.set(TradingSessionID_95);
      TradingSessionRulesGrp_NoTradingSessionRules_31.insert(TradingSessionID_95.getString());
      FIX::TradingSessionSubID TradingSessionSubID_95("STRING_2");
      noTradingSessionRules_2_1_1.set(TradingSessionSubID_95);
      TradingSessionRulesGrp_NoTradingSessionRules_31.insert(TradingSessionSubID_95.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_31);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_67;
        FIX::ExecInstValue ExecInstValue_67('1');
        noExecInstRules_2_1_2_0.set(ExecInstValue_67);
        ExecInstRules_NoExecInstRules_67.insert(ExecInstValue_67.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_67);

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_68;
        FIX::ExecInstValue ExecInstValue_68('1');
        noExecInstRules_2_1_2_1.set(ExecInstValue_68);
        ExecInstRules_NoExecInstRules_68.insert(ExecInstValue_68.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_68);

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_2_1_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_69;
        FIX::ExecInstValue ExecInstValue_69('1');
        noExecInstRules_2_1_2_2.set(ExecInstValue_69);
        ExecInstRules_NoExecInstRules_69.insert(ExecInstValue_69.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_69);

        noTradingSessionRules_2_1_1.addGroup(noExecInstRules_2_1_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_62;
        FIX::MDBookType MDBookType_64(1);
        noMDFeedTypes_2_1_2_0.set(MDBookType_64);
        MarketDataFeedTypes_NoMDFeedTypes_62.insert(MDBookType_64.getString());
        FIX::MDFeedType MDFeedType_64("STRING_8612807");
        noMDFeedTypes_2_1_2_0.set(MDFeedType_64);
        MarketDataFeedTypes_NoMDFeedTypes_62.insert(MDFeedType_64.getString());
        FIX::MarketDepth MarketDepth_65(25921342);
        noMDFeedTypes_2_1_2_0.set(MarketDepth_65);
        MarketDataFeedTypes_NoMDFeedTypes_62.insert(MarketDepth_65.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_62);

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_63;
        FIX::MDBookType MDBookType_65(1);
        noMDFeedTypes_2_1_2_1.set(MDBookType_65);
        MarketDataFeedTypes_NoMDFeedTypes_63.insert(MDBookType_65.getString());
        FIX::MDFeedType MDFeedType_65("STRING_1328461365");
        noMDFeedTypes_2_1_2_1.set(MDFeedType_65);
        MarketDataFeedTypes_NoMDFeedTypes_63.insert(MDFeedType_65.getString());
        FIX::MarketDepth MarketDepth_66(1249280422);
        noMDFeedTypes_2_1_2_1.set(MarketDepth_66);
        MarketDataFeedTypes_NoMDFeedTypes_63.insert(MarketDepth_66.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_63);

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_2_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_64;
        FIX::MDBookType MDBookType_66(3);
        noMDFeedTypes_2_1_2_2.set(MDBookType_66);
        MarketDataFeedTypes_NoMDFeedTypes_64.insert(MDBookType_66.getString());
        FIX::MDFeedType MDFeedType_66("STRING_675212942");
        noMDFeedTypes_2_1_2_2.set(MDFeedType_66);
        MarketDataFeedTypes_NoMDFeedTypes_64.insert(MDFeedType_66.getString());
        FIX::MarketDepth MarketDepth_67(1024336478);
        noMDFeedTypes_2_1_2_2.set(MarketDepth_67);
        MarketDataFeedTypes_NoMDFeedTypes_64.insert(MarketDepth_67.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_64);

        noTradingSessionRules_2_1_1.addGroup(noMDFeedTypes_2_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_66;
        FIX::MatchAlgorithm MatchAlgorithm_66("STRING_468202896");
        noMatchRules_2_1_2_0.set(MatchAlgorithm_66);
        MatchRules_NoMatchRules_66.insert(MatchAlgorithm_66.getString());
        FIX::MatchType MatchType_71("STRING_M3");
        noMatchRules_2_1_2_0.set(MatchType_71);
        MatchRules_NoMatchRules_66.insert(MatchType_71.getString());
        all_values.push_back(MatchRules_NoMatchRules_66);

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_67;
        FIX::MatchAlgorithm MatchAlgorithm_67("STRING_860302910");
        noMatchRules_2_1_2_1.set(MatchAlgorithm_67);
        MatchRules_NoMatchRules_67.insert(MatchAlgorithm_67.getString());
        FIX::MatchType MatchType_72("STRING_S4");
        noMatchRules_2_1_2_1.set(MatchType_72);
        MatchRules_NoMatchRules_67.insert(MatchType_72.getString());
        all_values.push_back(MatchRules_NoMatchRules_67);

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_2_1_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_68;
        FIX::MatchAlgorithm MatchAlgorithm_68("STRING_666780516");
        noMatchRules_2_1_2_2.set(MatchAlgorithm_68);
        MatchRules_NoMatchRules_68.insert(MatchAlgorithm_68.getString());
        FIX::MatchType MatchType_73("STRING_M2");
        noMatchRules_2_1_2_2.set(MatchType_73);
        MatchRules_NoMatchRules_68.insert(MatchType_73.getString());
        all_values.push_back(MatchRules_NoMatchRules_68);

        noTradingSessionRules_2_1_1.addGroup(noMatchRules_2_1_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_75;
        FIX::OrdType OrdType_98('I');
        noOrdTypeRules_2_1_2_0.set(OrdType_98);
        OrdTypeRules_NoOrdTypeRules_75.insert(OrdType_98.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_75);

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_2_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_76;
        FIX::OrdType OrdType_99('1');
        noOrdTypeRules_2_1_2_1.set(OrdType_99);
        OrdTypeRules_NoOrdTypeRules_76.insert(OrdType_99.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_76);

        noTradingSessionRules_2_1_1.addGroup(noOrdTypeRules_2_1_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_2_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_66;
        FIX::TimeInForce TimeInForce_79('7');
        noTimeInForceRules_2_1_2_0.set(TimeInForce_79);
        TimeInForceRules_NoTimeInForceRules_66.insert(TimeInForce_79.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_66);

        noTradingSessionRules_2_1_1.addGroup(noTimeInForceRules_2_1_2_0);
      }
      noRelatedSym_0_2.addGroup(noTradingSessionRules_2_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_34;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_34("EUR");
    noRelatedSym_0_2.set(BenchmarkCurveCurrency_34);
    SpreadOrBenchmarkCurveData_34.insert(BenchmarkCurveCurrency_34.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_34("STRING_MuniAAA");
    noRelatedSym_0_2.set(BenchmarkCurveName_34);
    SpreadOrBenchmarkCurveData_34.insert(BenchmarkCurveName_34.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_34("STRING_1274389625");
    noRelatedSym_0_2.set(BenchmarkCurvePoint_34);
    SpreadOrBenchmarkCurveData_34.insert(BenchmarkCurvePoint_34.getString());
    FIX::BenchmarkPrice BenchmarkPrice_34;
    BenchmarkPrice_34.setString("20728310");
    noRelatedSym_0_2.set(BenchmarkPrice_34);
    SpreadOrBenchmarkCurveData_34.insert(BenchmarkPrice_34.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_34(257684406);
    noRelatedSym_0_2.set(BenchmarkPriceType_34);
    SpreadOrBenchmarkCurveData_34.insert(BenchmarkPriceType_34.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_34("STRING_576907773");
    noRelatedSym_0_2.set(BenchmarkSecurityID_34);
    SpreadOrBenchmarkCurveData_34.insert(BenchmarkSecurityID_34.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_34("STRING_92871216");
    noRelatedSym_0_2.set(BenchmarkSecurityIDSource_34);
    SpreadOrBenchmarkCurveData_34.insert(BenchmarkSecurityIDSource_34.getString());
    FIX::Spread Spread_34;
    Spread_34.setString("19687702");
    noRelatedSym_0_2.set(Spread_34);
    SpreadOrBenchmarkCurveData_34.insert(Spread_34.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_34);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_2_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_64;
      FIX::StipulationType StipulationType_64("STRING_SMM");
      noStipulations_2_1_0.set(StipulationType_64);
      Stipulations_NoStipulations_64.insert(StipulationType_64.getString());
      FIX::StipulationValue StipulationValue_64("STRING_1977383097");
      noStipulations_2_1_0.set(StipulationValue_64);
      Stipulations_NoStipulations_64.insert(StipulationValue_64.getString());
      all_values.push_back(Stipulations_NoStipulations_64);

      noRelatedSym_0_2.addGroup(noStipulations_2_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_2_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_25;
      FIX::EndStrikePxRange EndStrikePxRange_25;
      EndStrikePxRange_25.setString("7212241");
      noStrikeRules_2_1_0.set(EndStrikePxRange_25);
      StrikeRules_NoStrikeRules_25.insert(EndStrikePxRange_25.getString());
      FIX::StartStrikePxRange StartStrikePxRange_25;
      StartStrikePxRange_25.setString("11583608");
      noStrikeRules_2_1_0.set(StartStrikePxRange_25);
      StrikeRules_NoStrikeRules_25.insert(StartStrikePxRange_25.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_25(1764172151);
      noStrikeRules_2_1_0.set(StrikeExerciseStyle_25);
      StrikeRules_NoStrikeRules_25.insert(StrikeExerciseStyle_25.getString());
      FIX::StrikeIncrement StrikeIncrement_25;
      StrikeIncrement_25.setString("10675224");
      noStrikeRules_2_1_0.set(StrikeIncrement_25);
      StrikeRules_NoStrikeRules_25.insert(StrikeIncrement_25.getString());
      FIX::StrikeRuleID StrikeRuleID_25("STRING_1833573757");
      noStrikeRules_2_1_0.set(StrikeRuleID_25);
      StrikeRules_NoStrikeRules_25.insert(StrikeRuleID_25.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_25);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_50;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_50("MONTHYEAR_1636416555");
        noMaturityRules_2_0_2_0.set(EndMaturityMonthYear_50);
        MaturityRules_NoMaturityRules_50.insert(EndMaturityMonthYear_50.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_50(2);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearFormat_50);
        MaturityRules_NoMaturityRules_50.insert(MaturityMonthYearFormat_50.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_50(584046719);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrement_50);
        MaturityRules_NoMaturityRules_50.insert(MaturityMonthYearIncrement_50.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_50(1);
        noMaturityRules_2_0_2_0.set(MaturityMonthYearIncrementUnits_50);
        MaturityRules_NoMaturityRules_50.insert(MaturityMonthYearIncrementUnits_50.getString());
        FIX::MaturityRuleID MaturityRuleID_50("STRING_2009932813");
        noMaturityRules_2_0_2_0.set(MaturityRuleID_50);
        MaturityRules_NoMaturityRules_50.insert(MaturityRuleID_50.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_50("MONTHYEAR_1250827235");
        noMaturityRules_2_0_2_0.set(StartMaturityMonthYear_50);
        MaturityRules_NoMaturityRules_50.insert(StartMaturityMonthYear_50.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_50);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_51;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_51("MONTHYEAR_1711766076");
        noMaturityRules_2_0_2_1.set(EndMaturityMonthYear_51);
        MaturityRules_NoMaturityRules_51.insert(EndMaturityMonthYear_51.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_51(0);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearFormat_51);
        MaturityRules_NoMaturityRules_51.insert(MaturityMonthYearFormat_51.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_51(2108304388);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrement_51);
        MaturityRules_NoMaturityRules_51.insert(MaturityMonthYearIncrement_51.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_51(0);
        noMaturityRules_2_0_2_1.set(MaturityMonthYearIncrementUnits_51);
        MaturityRules_NoMaturityRules_51.insert(MaturityMonthYearIncrementUnits_51.getString());
        FIX::MaturityRuleID MaturityRuleID_51("STRING_256158043");
        noMaturityRules_2_0_2_1.set(MaturityRuleID_51);
        MaturityRules_NoMaturityRules_51.insert(MaturityRuleID_51.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_51("MONTHYEAR_907620357");
        noMaturityRules_2_0_2_1.set(StartMaturityMonthYear_51);
        MaturityRules_NoMaturityRules_51.insert(StartMaturityMonthYear_51.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_51);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_52;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_52("MONTHYEAR_1127858328");
        noMaturityRules_2_0_2_2.set(EndMaturityMonthYear_52);
        MaturityRules_NoMaturityRules_52.insert(EndMaturityMonthYear_52.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_52(2);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearFormat_52);
        MaturityRules_NoMaturityRules_52.insert(MaturityMonthYearFormat_52.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_52(823646599);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearIncrement_52);
        MaturityRules_NoMaturityRules_52.insert(MaturityMonthYearIncrement_52.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_52(1);
        noMaturityRules_2_0_2_2.set(MaturityMonthYearIncrementUnits_52);
        MaturityRules_NoMaturityRules_52.insert(MaturityMonthYearIncrementUnits_52.getString());
        FIX::MaturityRuleID MaturityRuleID_52("STRING_1985941167");
        noMaturityRules_2_0_2_2.set(MaturityRuleID_52);
        MaturityRules_NoMaturityRules_52.insert(MaturityRuleID_52.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_52("MONTHYEAR_1081331005");
        noMaturityRules_2_0_2_2.set(StartMaturityMonthYear_52);
        MaturityRules_NoMaturityRules_52.insert(StartMaturityMonthYear_52.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_52);

        noStrikeRules_2_1_0.addGroup(noMaturityRules_2_0_2_2);
      }
      noRelatedSym_0_2.addGroup(noStrikeRules_2_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_2_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_26;
      FIX::EndStrikePxRange EndStrikePxRange_26;
      EndStrikePxRange_26.setString("8316720");
      noStrikeRules_2_1_1.set(EndStrikePxRange_26);
      StrikeRules_NoStrikeRules_26.insert(EndStrikePxRange_26.getString());
      FIX::StartStrikePxRange StartStrikePxRange_26;
      StartStrikePxRange_26.setString("20788123");
      noStrikeRules_2_1_1.set(StartStrikePxRange_26);
      StrikeRules_NoStrikeRules_26.insert(StartStrikePxRange_26.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_26(902617647);
      noStrikeRules_2_1_1.set(StrikeExerciseStyle_26);
      StrikeRules_NoStrikeRules_26.insert(StrikeExerciseStyle_26.getString());
      FIX::StrikeIncrement StrikeIncrement_26;
      StrikeIncrement_26.setString("13206424");
      noStrikeRules_2_1_1.set(StrikeIncrement_26);
      StrikeRules_NoStrikeRules_26.insert(StrikeIncrement_26.getString());
      FIX::StrikeRuleID StrikeRuleID_26("STRING_379360655");
      noStrikeRules_2_1_1.set(StrikeRuleID_26);
      StrikeRules_NoStrikeRules_26.insert(StrikeRuleID_26.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_26);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_53;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_53("MONTHYEAR_1835534195");
        noMaturityRules_2_1_2_0.set(EndMaturityMonthYear_53);
        MaturityRules_NoMaturityRules_53.insert(EndMaturityMonthYear_53.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_53(0);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearFormat_53);
        MaturityRules_NoMaturityRules_53.insert(MaturityMonthYearFormat_53.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_53(1890877912);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrement_53);
        MaturityRules_NoMaturityRules_53.insert(MaturityMonthYearIncrement_53.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_53(3);
        noMaturityRules_2_1_2_0.set(MaturityMonthYearIncrementUnits_53);
        MaturityRules_NoMaturityRules_53.insert(MaturityMonthYearIncrementUnits_53.getString());
        FIX::MaturityRuleID MaturityRuleID_53("STRING_20623685");
        noMaturityRules_2_1_2_0.set(MaturityRuleID_53);
        MaturityRules_NoMaturityRules_53.insert(MaturityRuleID_53.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_53("MONTHYEAR_1576968021");
        noMaturityRules_2_1_2_0.set(StartMaturityMonthYear_53);
        MaturityRules_NoMaturityRules_53.insert(StartMaturityMonthYear_53.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_53);

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_54;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_54("MONTHYEAR_2093247680");
        noMaturityRules_2_1_2_1.set(EndMaturityMonthYear_54);
        MaturityRules_NoMaturityRules_54.insert(EndMaturityMonthYear_54.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_54(2);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearFormat_54);
        MaturityRules_NoMaturityRules_54.insert(MaturityMonthYearFormat_54.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_54(1731261027);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearIncrement_54);
        MaturityRules_NoMaturityRules_54.insert(MaturityMonthYearIncrement_54.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_54(0);
        noMaturityRules_2_1_2_1.set(MaturityMonthYearIncrementUnits_54);
        MaturityRules_NoMaturityRules_54.insert(MaturityMonthYearIncrementUnits_54.getString());
        FIX::MaturityRuleID MaturityRuleID_54("STRING_2006276057");
        noMaturityRules_2_1_2_1.set(MaturityRuleID_54);
        MaturityRules_NoMaturityRules_54.insert(MaturityRuleID_54.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_54("MONTHYEAR_1593710192");
        noMaturityRules_2_1_2_1.set(StartMaturityMonthYear_54);
        MaturityRules_NoMaturityRules_54.insert(StartMaturityMonthYear_54.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_54);

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_2_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_55;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_55("MONTHYEAR_1780637987");
        noMaturityRules_2_1_2_2.set(EndMaturityMonthYear_55);
        MaturityRules_NoMaturityRules_55.insert(EndMaturityMonthYear_55.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_55(0);
        noMaturityRules_2_1_2_2.set(MaturityMonthYearFormat_55);
        MaturityRules_NoMaturityRules_55.insert(MaturityMonthYearFormat_55.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_55(62905701);
        noMaturityRules_2_1_2_2.set(MaturityMonthYearIncrement_55);
        MaturityRules_NoMaturityRules_55.insert(MaturityMonthYearIncrement_55.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_55(0);
        noMaturityRules_2_1_2_2.set(MaturityMonthYearIncrementUnits_55);
        MaturityRules_NoMaturityRules_55.insert(MaturityMonthYearIncrementUnits_55.getString());
        FIX::MaturityRuleID MaturityRuleID_55("STRING_1705421282");
        noMaturityRules_2_1_2_2.set(MaturityRuleID_55);
        MaturityRules_NoMaturityRules_55.insert(MaturityRuleID_55.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_55("MONTHYEAR_319063744");
        noMaturityRules_2_1_2_2.set(StartMaturityMonthYear_55);
        MaturityRules_NoMaturityRules_55.insert(StartMaturityMonthYear_55.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_55);

        noStrikeRules_2_1_1.addGroup(noMaturityRules_2_1_2_2);
      }
      noRelatedSym_0_2.addGroup(noStrikeRules_2_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_2_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_136;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_136("DATA_685795962");
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuer_136);
      UnderlyingInstrument_136.insert(EncodedUnderlyingIssuer_136.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_136(232173856);
      noUnderlyings_2_1_0.set(EncodedUnderlyingIssuerLen_136);
      UnderlyingInstrument_136.insert(EncodedUnderlyingIssuerLen_136.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_136("DATA_1325242037");
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDesc_136);
      UnderlyingInstrument_136.insert(EncodedUnderlyingSecurityDesc_136.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_136(940560267);
      noUnderlyings_2_1_0.set(EncodedUnderlyingSecurityDescLen_136);
      UnderlyingInstrument_136.insert(EncodedUnderlyingSecurityDescLen_136.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_136;
      UnderlyingAdjustedQuantity_136.setString("706313");
      noUnderlyings_2_1_0.set(UnderlyingAdjustedQuantity_136);
      UnderlyingInstrument_136.insert(UnderlyingAdjustedQuantity_136.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_136;
      UnderlyingAllocationPercent_136.setString("93.940000");
      noUnderlyings_2_1_0.set(UnderlyingAllocationPercent_136);
      UnderlyingInstrument_136.insert(UnderlyingAllocationPercent_136.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_136;
      UnderlyingAttachmentPoint_136.setString("23.460000");
      noUnderlyings_2_1_0.set(UnderlyingAttachmentPoint_136);
      UnderlyingInstrument_136.insert(UnderlyingAttachmentPoint_136.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_136("STRING_1960111");
      noUnderlyings_2_1_0.set(UnderlyingCFICode_136);
      UnderlyingInstrument_136.insert(UnderlyingCFICode_136.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_136("STRING_1161707042");
      noUnderlyings_2_1_0.set(UnderlyingCPProgram_136);
      UnderlyingInstrument_136.insert(UnderlyingCPProgram_136.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_136("STRING_945391164");
      noUnderlyings_2_1_0.set(UnderlyingCPRegType_136);
      UnderlyingInstrument_136.insert(UnderlyingCPRegType_136.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_136;
      UnderlyingCapValue_136.setString("3813207");
      noUnderlyings_2_1_0.set(UnderlyingCapValue_136);
      UnderlyingInstrument_136.insert(UnderlyingCapValue_136.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_136;
      UnderlyingCashAmount_136.setString("18942241");
      noUnderlyings_2_1_0.set(UnderlyingCashAmount_136);
      UnderlyingInstrument_136.insert(UnderlyingCashAmount_136.getString());
      FIX::UnderlyingCashType UnderlyingCashType_136("STRING_DIFF");
      noUnderlyings_2_1_0.set(UnderlyingCashType_136);
      UnderlyingInstrument_136.insert(UnderlyingCashType_136.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_136;
      UnderlyingContractMultiplier_136.setString("14819056");
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplier_136);
      UnderlyingInstrument_136.insert(UnderlyingContractMultiplier_136.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_136(1637618403);
      noUnderlyings_2_1_0.set(UnderlyingContractMultiplierUnit_136);
      UnderlyingInstrument_136.insert(UnderlyingContractMultiplierUnit_136.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_136("COUNTRY_2085664410");
      noUnderlyings_2_1_0.set(UnderlyingCountryOfIssue_136);
      UnderlyingInstrument_136.insert(UnderlyingCountryOfIssue_136.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_136("LOCALMKTDATE_1502529300");
      noUnderlyings_2_1_0.set(UnderlyingCouponPaymentDate_136);
      UnderlyingInstrument_136.insert(UnderlyingCouponPaymentDate_136.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_136;
      UnderlyingCouponRate_136.setString("27.760000");
      noUnderlyings_2_1_0.set(UnderlyingCouponRate_136);
      UnderlyingInstrument_136.insert(UnderlyingCouponRate_136.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_136("STRING_2031428443");
      noUnderlyings_2_1_0.set(UnderlyingCreditRating_136);
      UnderlyingInstrument_136.insert(UnderlyingCreditRating_136.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_136("CAN");
      noUnderlyings_2_1_0.set(UnderlyingCurrency_136);
      UnderlyingInstrument_136.insert(UnderlyingCurrency_136.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_136;
      UnderlyingCurrentValue_136.setString("4137555");
      noUnderlyings_2_1_0.set(UnderlyingCurrentValue_136);
      UnderlyingInstrument_136.insert(UnderlyingCurrentValue_136.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_136;
      UnderlyingDetachmentPoint_136.setString("83.020000");
      noUnderlyings_2_1_0.set(UnderlyingDetachmentPoint_136);
      UnderlyingInstrument_136.insert(UnderlyingDetachmentPoint_136.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_136;
      UnderlyingDirtyPrice_136.setString("971066");
      noUnderlyings_2_1_0.set(UnderlyingDirtyPrice_136);
      UnderlyingInstrument_136.insert(UnderlyingDirtyPrice_136.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_136;
      UnderlyingEndPrice_136.setString("469098");
      noUnderlyings_2_1_0.set(UnderlyingEndPrice_136);
      UnderlyingInstrument_136.insert(UnderlyingEndPrice_136.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_136;
      UnderlyingEndValue_136.setString("2939531");
      noUnderlyings_2_1_0.set(UnderlyingEndValue_136);
      UnderlyingInstrument_136.insert(UnderlyingEndValue_136.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_136(160012400);
      noUnderlyings_2_1_0.set(UnderlyingExerciseStyle_136);
      UnderlyingInstrument_136.insert(UnderlyingExerciseStyle_136.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_136;
      UnderlyingFXRate_136.setString("17883686");
      noUnderlyings_2_1_0.set(UnderlyingFXRate_136);
      UnderlyingInstrument_136.insert(UnderlyingFXRate_136.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_136('M');
      noUnderlyings_2_1_0.set(UnderlyingFXRateCalc_136);
      UnderlyingInstrument_136.insert(UnderlyingFXRateCalc_136.getString());
      FIX::UnderlyingFactor UnderlyingFactor_136;
      UnderlyingFactor_136.setString("4790761");
      noUnderlyings_2_1_0.set(UnderlyingFactor_136);
      UnderlyingInstrument_136.insert(UnderlyingFactor_136.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_136(142480404);
      noUnderlyings_2_1_0.set(UnderlyingFlowScheduleType_136);
      UnderlyingInstrument_136.insert(UnderlyingFlowScheduleType_136.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_136("STRING_537686735");
      noUnderlyings_2_1_0.set(UnderlyingInstrRegistry_136);
      UnderlyingInstrument_136.insert(UnderlyingInstrRegistry_136.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_136("LOCALMKTDATE_711250000");
      noUnderlyings_2_1_0.set(UnderlyingIssueDate_136);
      UnderlyingInstrument_136.insert(UnderlyingIssueDate_136.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_136("STRING_1467722441");
      noUnderlyings_2_1_0.set(UnderlyingIssuer_136);
      UnderlyingInstrument_136.insert(UnderlyingIssuer_136.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_136("STRING_1478247003");
      noUnderlyings_2_1_0.set(UnderlyingLocaleOfIssue_136);
      UnderlyingInstrument_136.insert(UnderlyingLocaleOfIssue_136.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_136("LOCALMKTDATE_781881376");
      noUnderlyings_2_1_0.set(UnderlyingMaturityDate_136);
      UnderlyingInstrument_136.insert(UnderlyingMaturityDate_136.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_136("MONTHYEAR_1726811835");
      noUnderlyings_2_1_0.set(UnderlyingMaturityMonthYear_136);
      UnderlyingInstrument_136.insert(UnderlyingMaturityMonthYear_136.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_136("TZTIMEONLY_1102995701");
      noUnderlyings_2_1_0.set(UnderlyingMaturityTime_136);
      UnderlyingInstrument_136.insert(UnderlyingMaturityTime_136.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_136;
      UnderlyingNotionalPercentageOutstanding_136.setString("14.870000");
      noUnderlyings_2_1_0.set(UnderlyingNotionalPercentageOutstanding_136);
      UnderlyingInstrument_136.insert(UnderlyingNotionalPercentageOutstanding_136.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_136('7');
      noUnderlyings_2_1_0.set(UnderlyingOptAttribute_136);
      UnderlyingInstrument_136.insert(UnderlyingOptAttribute_136.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_136;
      UnderlyingOriginalNotionalPercentageOutstanding_136.setString("68.650000");
      noUnderlyings_2_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_136);
      UnderlyingInstrument_136.insert(UnderlyingOriginalNotionalPercentageOutstanding_136.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_136("STRING_1165162254");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasure_136);
      UnderlyingInstrument_136.insert(UnderlyingPriceUnitOfMeasure_136.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_136;
      UnderlyingPriceUnitOfMeasureQty_136.setString("4877757");
      noUnderlyings_2_1_0.set(UnderlyingPriceUnitOfMeasureQty_136);
      UnderlyingInstrument_136.insert(UnderlyingPriceUnitOfMeasureQty_136.getString());
      FIX::UnderlyingProduct UnderlyingProduct_136(534344928);
      noUnderlyings_2_1_0.set(UnderlyingProduct_136);
      UnderlyingInstrument_136.insert(UnderlyingProduct_136.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_136(499584222);
      noUnderlyings_2_1_0.set(UnderlyingPutOrCall_136);
      UnderlyingInstrument_136.insert(UnderlyingPutOrCall_136.getString());
      FIX::UnderlyingPx UnderlyingPx_136;
      UnderlyingPx_136.setString("21253941");
      noUnderlyings_2_1_0.set(UnderlyingPx_136);
      UnderlyingInstrument_136.insert(UnderlyingPx_136.getString());
      FIX::UnderlyingQty UnderlyingQty_136;
      UnderlyingQty_136.setString("4725256");
      noUnderlyings_2_1_0.set(UnderlyingQty_136);
      UnderlyingInstrument_136.insert(UnderlyingQty_136.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_136("LOCALMKTDATE_2002113522");
      noUnderlyings_2_1_0.set(UnderlyingRedemptionDate_136);
      UnderlyingInstrument_136.insert(UnderlyingRedemptionDate_136.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_136("STRING_1045013252");
      noUnderlyings_2_1_0.set(UnderlyingRepoCollateralSecurityType_136);
      UnderlyingInstrument_136.insert(UnderlyingRepoCollateralSecurityType_136.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_136;
      UnderlyingRepurchaseRate_136.setString("4.860000");
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseRate_136);
      UnderlyingInstrument_136.insert(UnderlyingRepurchaseRate_136.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_136(866715767);
      noUnderlyings_2_1_0.set(UnderlyingRepurchaseTerm_136);
      UnderlyingInstrument_136.insert(UnderlyingRepurchaseTerm_136.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_136("STRING_1695893407");
      noUnderlyings_2_1_0.set(UnderlyingRestructuringType_136);
      UnderlyingInstrument_136.insert(UnderlyingRestructuringType_136.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_136("STRING_770226033");
      noUnderlyings_2_1_0.set(UnderlyingSecurityDesc_136);
      UnderlyingInstrument_136.insert(UnderlyingSecurityDesc_136.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_136("EXCHANGE_1737594069");
      noUnderlyings_2_1_0.set(UnderlyingSecurityExchange_136);
      UnderlyingInstrument_136.insert(UnderlyingSecurityExchange_136.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_136("STRING_1793000107");
      noUnderlyings_2_1_0.set(UnderlyingSecurityID_136);
      UnderlyingInstrument_136.insert(UnderlyingSecurityID_136.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_136("STRING_817135919");
      noUnderlyings_2_1_0.set(UnderlyingSecurityIDSource_136);
      UnderlyingInstrument_136.insert(UnderlyingSecurityIDSource_136.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_136("STRING_2031547208");
      noUnderlyings_2_1_0.set(UnderlyingSecuritySubType_136);
      UnderlyingInstrument_136.insert(UnderlyingSecuritySubType_136.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_136("STRING_1953012507");
      noUnderlyings_2_1_0.set(UnderlyingSecurityType_136);
      UnderlyingInstrument_136.insert(UnderlyingSecurityType_136.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_136("STRING_458020886");
      noUnderlyings_2_1_0.set(UnderlyingSeniority_136);
      UnderlyingInstrument_136.insert(UnderlyingSeniority_136.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_136("STRING_1883437982");
      noUnderlyings_2_1_0.set(UnderlyingSettlMethod_136);
      UnderlyingInstrument_136.insert(UnderlyingSettlMethod_136.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_136(5);
      noUnderlyings_2_1_0.set(UnderlyingSettlementType_136);
      UnderlyingInstrument_136.insert(UnderlyingSettlementType_136.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_136;
      UnderlyingStartValue_136.setString("6005012");
      noUnderlyings_2_1_0.set(UnderlyingStartValue_136);
      UnderlyingInstrument_136.insert(UnderlyingStartValue_136.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_136("STRING_273641069");
      noUnderlyings_2_1_0.set(UnderlyingStateOrProvinceOfIssue_136);
      UnderlyingInstrument_136.insert(UnderlyingStateOrProvinceOfIssue_136.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_136("EUR");
      noUnderlyings_2_1_0.set(UnderlyingStrikeCurrency_136);
      UnderlyingInstrument_136.insert(UnderlyingStrikeCurrency_136.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_136;
      UnderlyingStrikePrice_136.setString("17518880");
      noUnderlyings_2_1_0.set(UnderlyingStrikePrice_136);
      UnderlyingInstrument_136.insert(UnderlyingStrikePrice_136.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_136("STRING_1777736380");
      noUnderlyings_2_1_0.set(UnderlyingSymbol_136);
      UnderlyingInstrument_136.insert(UnderlyingSymbol_136.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_136("STRING_1647551918");
      noUnderlyings_2_1_0.set(UnderlyingSymbolSfx_136);
      UnderlyingInstrument_136.insert(UnderlyingSymbolSfx_136.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_136("STRING_707400125");
      noUnderlyings_2_1_0.set(UnderlyingTimeUnit_136);
      UnderlyingInstrument_136.insert(UnderlyingTimeUnit_136.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_136("STRING_414094220");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasure_136);
      UnderlyingInstrument_136.insert(UnderlyingUnitOfMeasure_136.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_136;
      UnderlyingUnitOfMeasureQty_136.setString("2411035");
      noUnderlyings_2_1_0.set(UnderlyingUnitOfMeasureQty_136);
      UnderlyingInstrument_136.insert(UnderlyingUnitOfMeasureQty_136.getString());
      all_values.push_back(UnderlyingInstrument_136);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_275;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_275("STRING_1579256474");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltID_275);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_275.insert(UnderlyingSecurityAltID_275.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_275("STRING_728879220");
        noUnderlyingSecurityAltID_2_0_2_0.set(UnderlyingSecurityAltIDSource_275);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_275.insert(UnderlyingSecurityAltIDSource_275.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_275);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_276;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_276("STRING_1142648271");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltID_276);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_276.insert(UnderlyingSecurityAltID_276.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_276("STRING_2078840696");
        noUnderlyingSecurityAltID_2_0_2_1.set(UnderlyingSecurityAltIDSource_276);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_276.insert(UnderlyingSecurityAltIDSource_276.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_276);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_277;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_277("STRING_706789696");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltID_277);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_277.insert(UnderlyingSecurityAltID_277.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_277("STRING_1615173962");
        noUnderlyingSecurityAltID_2_0_2_2.set(UnderlyingSecurityAltIDSource_277);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_277.insert(UnderlyingSecurityAltIDSource_277.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);

        noUnderlyings_2_1_0.addGroup(noUnderlyingSecurityAltID_2_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_262;
        FIX::UnderlyingStipType UnderlyingStipType_262("STRING_1751802948");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipType_262);
        UnderlyingStipulations_NoUnderlyingStips_262.insert(UnderlyingStipType_262.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_262("STRING_1971644448");
        noUnderlyingStips_2_0_2_0.set(UnderlyingStipValue_262);
        UnderlyingStipulations_NoUnderlyingStips_262.insert(UnderlyingStipValue_262.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_262);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_263;
        FIX::UnderlyingStipType UnderlyingStipType_263("STRING_652702690");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipType_263);
        UnderlyingStipulations_NoUnderlyingStips_263.insert(UnderlyingStipType_263.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_263("STRING_1300212707");
        noUnderlyingStips_2_0_2_1.set(UnderlyingStipValue_263);
        UnderlyingStipulations_NoUnderlyingStips_263.insert(UnderlyingStipValue_263.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_263);

        noUnderlyings_2_1_0.addGroup(noUnderlyingStips_2_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_276;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_276("STRING_242813111");
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyID_276);
        UndlyInstrumentParties_NoUndlyInstrumentParties_276.insert(UnderlyingInstrumentPartyID_276.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_276('9');
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyIDSource_276);
        UndlyInstrumentParties_NoUndlyInstrumentParties_276.insert(UnderlyingInstrumentPartyIDSource_276.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_276(1411522752);
        noUndlyInstrumentParties_2_0_2_0.set(UnderlyingInstrumentPartyRole_276);
        UndlyInstrumentParties_NoUndlyInstrumentParties_276.insert(UnderlyingInstrumentPartyRole_276.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_276);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_539("STRING_751258026");
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubID_539);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539.insert(UnderlyingInstrumentPartySubID_539.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_539(1869543638);
          noUndlyInstrumentPartySubIDs_2_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_539);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539.insert(UnderlyingInstrumentPartySubIDType_539.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_539);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_540("STRING_2010314653");
          noUndlyInstrumentPartySubIDs_2_0_0_3_1.set(UnderlyingInstrumentPartySubID_540);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540.insert(UnderlyingInstrumentPartySubID_540.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_540(1035863030);
          noUndlyInstrumentPartySubIDs_2_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_540);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540.insert(UnderlyingInstrumentPartySubIDType_540.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_540);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_541("STRING_322561280");
          noUndlyInstrumentPartySubIDs_2_0_0_3_2.set(UnderlyingInstrumentPartySubID_541);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541.insert(UnderlyingInstrumentPartySubID_541.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_541(136472075);
          noUndlyInstrumentPartySubIDs_2_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_541);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541.insert(UnderlyingInstrumentPartySubIDType_541.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541);

          noUndlyInstrumentParties_2_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_0_3_2);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_277;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_277("STRING_2031718034");
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyID_277);
        UndlyInstrumentParties_NoUndlyInstrumentParties_277.insert(UnderlyingInstrumentPartyID_277.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_277('2');
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyIDSource_277);
        UndlyInstrumentParties_NoUndlyInstrumentParties_277.insert(UnderlyingInstrumentPartyIDSource_277.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_277(1888360147);
        noUndlyInstrumentParties_2_0_2_1.set(UnderlyingInstrumentPartyRole_277);
        UndlyInstrumentParties_NoUndlyInstrumentParties_277.insert(UnderlyingInstrumentPartyRole_277.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_277);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_542("STRING_1890853282");
          noUndlyInstrumentPartySubIDs_2_0_1_3_0.set(UnderlyingInstrumentPartySubID_542);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542.insert(UnderlyingInstrumentPartySubID_542.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_542(448276625);
          noUndlyInstrumentPartySubIDs_2_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_542);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542.insert(UnderlyingInstrumentPartySubIDType_542.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);

          noUndlyInstrumentParties_2_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_543("STRING_2076064987");
          noUndlyInstrumentPartySubIDs_2_0_1_3_1.set(UnderlyingInstrumentPartySubID_543);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543.insert(UnderlyingInstrumentPartySubID_543.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_543(2131956782);
          noUndlyInstrumentPartySubIDs_2_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_543);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543.insert(UnderlyingInstrumentPartySubIDType_543.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);

          noUndlyInstrumentParties_2_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_0_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_544("STRING_1056579967");
          noUndlyInstrumentPartySubIDs_2_0_1_3_2.set(UnderlyingInstrumentPartySubID_544);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544.insert(UnderlyingInstrumentPartySubID_544.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_544(1507837813);
          noUndlyInstrumentPartySubIDs_2_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_544);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544.insert(UnderlyingInstrumentPartySubIDType_544.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);

          noUndlyInstrumentParties_2_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_2_0_1_3_2);
        }
        noUnderlyings_2_1_0.addGroup(noUndlyInstrumentParties_2_0_2_1);
      }
      noRelatedSym_0_2.addGroup(noUnderlyings_2_1_0);
    }
    // YieldData
    multiset<string> YieldData_29;
    FIX::Yield Yield_29;
    Yield_29.setString("23.540000");
    noRelatedSym_0_2.set(Yield_29);
    YieldData_29.insert(Yield_29.getString());
    FIX::YieldCalcDate YieldCalcDate_29("LOCALMKTDATE_51744590");
    noRelatedSym_0_2.set(YieldCalcDate_29);
    YieldData_29.insert(YieldCalcDate_29.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_29("LOCALMKTDATE_1439194862");
    noRelatedSym_0_2.set(YieldRedemptionDate_29);
    YieldData_29.insert(YieldRedemptionDate_29.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_29;
    YieldRedemptionPrice_29.setString("14201420");
    noRelatedSym_0_2.set(YieldRedemptionPrice_29);
    YieldData_29.insert(YieldRedemptionPrice_29.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_29(1666918552);
    noRelatedSym_0_2.set(YieldRedemptionPriceType_29);
    YieldData_29.insert(YieldRedemptionPriceType_29.getString());
    FIX::YieldType YieldType_29("STRING_INVERSEFLOATER");
    noRelatedSym_0_2.set(YieldType_29);
    YieldData_29.insert(YieldType_29.getString());
    all_values.push_back(YieldData_29);

    msg.addGroup(noRelatedSym_0_2);
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
