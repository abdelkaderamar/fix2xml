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
  multiset<string> all_compo_names;
  multiset<string> SecurityListUpdateReport_0;
  FIX::ClearingBusinessDate ClearingBusinessDate_23("LOCALMKTDATE_1105510128");
  msg.set(ClearingBusinessDate_23);
  SecurityListUpdateReport_0.insert(ClearingBusinessDate_23.getString());
  FIX::CorporateAction CorporateAction_9("MULTIPLECHARVALUE_G");
  msg.set(CorporateAction_9);
  SecurityListUpdateReport_0.insert(CorporateAction_9.getString());
  FIX::EncodedSecurityListDesc EncodedSecurityListDesc_1("DATA_276047679");
  msg.set(EncodedSecurityListDesc_1);
  FIX::EncodedSecurityListDescLen EncodedSecurityListDescLen_1(1785846662);
  msg.set(EncodedSecurityListDescLen_1);
  FIX::LastFragment LastFragment_15(false);
  msg.set(LastFragment_15);
  SecurityListUpdateReport_0.insert(LastFragment_15.getString());
  FIX::MarketID MarketID_22("EXCHANGE_829967822");
  msg.set(MarketID_22);
  SecurityListUpdateReport_0.insert(MarketID_22.getString());
  FIX::MarketSegmentID MarketSegmentID_22("STRING_633324808");
  msg.set(MarketSegmentID_22);
  SecurityListUpdateReport_0.insert(MarketSegmentID_22.getString());
  FIX::SecurityListDesc SecurityListDesc_1("STRING_2056847757");
  msg.set(SecurityListDesc_1);
  SecurityListUpdateReport_0.insert(SecurityListDesc_1.getString());
  FIX::SecurityListID SecurityListID_2("STRING_844502722");
  msg.set(SecurityListID_2);
  SecurityListUpdateReport_0.insert(SecurityListID_2.getString());
  FIX::SecurityListRefID SecurityListRefID_1("STRING_11673996");
  msg.set(SecurityListRefID_1);
  SecurityListUpdateReport_0.insert(SecurityListRefID_1.getString());
  FIX::SecurityListType SecurityListType_2(3);
  msg.set(SecurityListType_2);
  SecurityListUpdateReport_0.insert(SecurityListType_2.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_2(2);
  msg.set(SecurityListTypeSource_2);
  SecurityListUpdateReport_0.insert(SecurityListTypeSource_2.getString());
  FIX::SecurityReportID SecurityReportID_4(636066431);
  msg.set(SecurityReportID_4);
  SecurityListUpdateReport_0.insert(SecurityReportID_4.getString());
  FIX::SecurityReqID SecurityReqID_8("STRING_438452321");
  msg.set(SecurityReqID_8);
  SecurityListUpdateReport_0.insert(SecurityReqID_8.getString());
  FIX::SecurityRequestResult SecurityRequestResult_3(1);
  msg.set(SecurityRequestResult_3);
  SecurityListUpdateReport_0.insert(SecurityRequestResult_3.getString());
  FIX::SecurityResponseID SecurityResponseID_5("STRING_1863847999");
  msg.set(SecurityResponseID_5);
  SecurityListUpdateReport_0.insert(SecurityResponseID_5.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_2('D');
  msg.set(SecurityUpdateAction_2);
  SecurityListUpdateReport_0.insert(SecurityUpdateAction_2.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_4(287592561);
  msg.set(TotNoRelatedSym_4);
  SecurityListUpdateReport_0.insert(TotNoRelatedSym_4.getString());
  FIX::TransactTime TransactTime_66(FIX::UTCTIMESTAMP(19, 0, 38, 18, 5, 2010));
  msg.set(TransactTime_66);
  SecurityListUpdateReport_0.insert(TransactTime_66.getString());
  all_values.push_back(SecurityListUpdateReport_0);

  all_compo_names.insert("SecurityListUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_15;
  FIX::ApplID ApplID_15("STRING_1426892185");
  msg.set(ApplID_15);
  ApplicationSequenceControl_15.insert(ApplID_15.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_15(965569585);
  msg.set(ApplLastSeqNum_15);
  ApplicationSequenceControl_15.insert(ApplLastSeqNum_15.getString());
  FIX::ApplResendFlag ApplResendFlag_15(false);
  msg.set(ApplResendFlag_15);
  ApplicationSequenceControl_15.insert(ApplResendFlag_15.getString());
  FIX::ApplSeqNum ApplSeqNum_15(1784868512);
  msg.set(ApplSeqNum_15);
  ApplicationSequenceControl_15.insert(ApplSeqNum_15.getString());
  all_values.push_back(ApplicationSequenceControl_15);
  all_compo_names.insert("ApplicationSequenceControl");

  // SecLstUpdRelSymGrp
  // Group SecLstUpdRelSymGrp.NoRelatedSym
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_0;
    FIX::Currency Currency_70("USD");
    noRelatedSym_0_0.set(Currency_70);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(Currency_70.getString());
    FIX::EncodedText EncodedText_89("DATA_1397964219");
    noRelatedSym_0_0.set(EncodedText_89);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(EncodedText_89.getString());
    FIX::EncodedTextLen EncodedTextLen_89(1893669050);
    noRelatedSym_0_0.set(EncodedTextLen_89);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(EncodedTextLen_89.getString());
    FIX::ListUpdateAction ListUpdateAction_3('3');
    noRelatedSym_0_0.set(ListUpdateAction_3);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(ListUpdateAction_3.getString());
    FIX::RelSymTransactTime RelSymTransactTime_8(FIX::UTCTIMESTAMP(8, 35, 38, 11, 12, 2000));
    noRelatedSym_0_0.set(RelSymTransactTime_8);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(RelSymTransactTime_8.getString());
    FIX::Text Text_89("STRING_2113660772");
    noRelatedSym_0_0.set(Text_89);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(Text_89.getString());
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_0);
    all_compo_names.insert("SecLstUpdRelSymGrp.NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_29;
    FIX::AgreementCurrency AgreementCurrency_29("CAN");
    noRelatedSym_0_0.set(AgreementCurrency_29);
    FinancingDetails_29.insert(AgreementCurrency_29.getString());
    FIX::AgreementDate AgreementDate_29("LOCALMKTDATE_1646223577");
    noRelatedSym_0_0.set(AgreementDate_29);
    FinancingDetails_29.insert(AgreementDate_29.getString());
    FIX::AgreementDesc AgreementDesc_29("STRING_1378687593");
    noRelatedSym_0_0.set(AgreementDesc_29);
    FinancingDetails_29.insert(AgreementDesc_29.getString());
    FIX::AgreementID AgreementID_29("STRING_1544642332");
    noRelatedSym_0_0.set(AgreementID_29);
    FinancingDetails_29.insert(AgreementID_29.getString());
    FIX::DeliveryType DeliveryType_29(3);
    noRelatedSym_0_0.set(DeliveryType_29);
    FinancingDetails_29.insert(DeliveryType_29.getString());
    FIX::EndDate EndDate_29("LOCALMKTDATE_384011073");
    noRelatedSym_0_0.set(EndDate_29);
    FinancingDetails_29.insert(EndDate_29.getString());
    FIX::MarginRatio MarginRatio_29;
    MarginRatio_29.setString("50.630000");
    noRelatedSym_0_0.set(MarginRatio_29);
    FinancingDetails_29.insert(MarginRatio_29.getString());
    FIX::StartDate StartDate_29("LOCALMKTDATE_943176951");
    noRelatedSym_0_0.set(StartDate_29);
    FinancingDetails_29.insert(StartDate_29.getString());
    FIX::TerminationType TerminationType_29(4);
    noRelatedSym_0_0.set(TerminationType_29);
    FinancingDetails_29.insert(TerminationType_29.getString());
    all_values.push_back(FinancingDetails_29);
    all_compo_names.insert("FinancingDetails");

    // Instrument
    multiset<string> Instrument_87;
    FIX::AttachmentPoint AttachmentPoint_87;
    AttachmentPoint_87.setString("14.970000");
    noRelatedSym_0_0.set(AttachmentPoint_87);
    Instrument_87.insert(AttachmentPoint_87.getString());
    FIX::CFICode CFICode_87("STRING_597340511");
    noRelatedSym_0_0.set(CFICode_87);
    Instrument_87.insert(CFICode_87.getString());
    FIX::CPProgram CPProgram_87(2);
    noRelatedSym_0_0.set(CPProgram_87);
    Instrument_87.insert(CPProgram_87.getString());
    FIX::CPRegType CPRegType_87("STRING_57220035");
    noRelatedSym_0_0.set(CPRegType_87);
    Instrument_87.insert(CPRegType_87.getString());
    FIX::CapPrice CapPrice_87;
    CapPrice_87.setString("15629100");
    noRelatedSym_0_0.set(CapPrice_87);
    Instrument_87.insert(CapPrice_87.getString());
    FIX::ContractMultiplier ContractMultiplier_87;
    ContractMultiplier_87.setString("19941455");
    noRelatedSym_0_0.set(ContractMultiplier_87);
    Instrument_87.insert(ContractMultiplier_87.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_87(2);
    noRelatedSym_0_0.set(ContractMultiplierUnit_87);
    Instrument_87.insert(ContractMultiplierUnit_87.getString());
    FIX::ContractSettlMonth ContractSettlMonth_87("MONTHYEAR_1443378814");
    noRelatedSym_0_0.set(ContractSettlMonth_87);
    Instrument_87.insert(ContractSettlMonth_87.getString());
    FIX::CountryOfIssue CountryOfIssue_87("COUNTRY_1464283305");
    noRelatedSym_0_0.set(CountryOfIssue_87);
    Instrument_87.insert(CountryOfIssue_87.getString());
    FIX::CouponPaymentDate CouponPaymentDate_87("LOCALMKTDATE_437499891");
    noRelatedSym_0_0.set(CouponPaymentDate_87);
    Instrument_87.insert(CouponPaymentDate_87.getString());
    FIX::CouponRate CouponRate_87;
    CouponRate_87.setString("93.860000");
    noRelatedSym_0_0.set(CouponRate_87);
    Instrument_87.insert(CouponRate_87.getString());
    FIX::CreditRating CreditRating_87("STRING_1210468707");
    noRelatedSym_0_0.set(CreditRating_87);
    Instrument_87.insert(CreditRating_87.getString());
    FIX::DatedDate DatedDate_87("LOCALMKTDATE_818757898");
    noRelatedSym_0_0.set(DatedDate_87);
    Instrument_87.insert(DatedDate_87.getString());
    FIX::DetachmentPoint DetachmentPoint_87;
    DetachmentPoint_87.setString("87.750000");
    noRelatedSym_0_0.set(DetachmentPoint_87);
    Instrument_87.insert(DetachmentPoint_87.getString());
    FIX::EncodedIssuer EncodedIssuer_87("DATA_1786621932");
    noRelatedSym_0_0.set(EncodedIssuer_87);
    Instrument_87.insert(EncodedIssuer_87.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_87(1833340713);
    noRelatedSym_0_0.set(EncodedIssuerLen_87);
    Instrument_87.insert(EncodedIssuerLen_87.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_87("DATA_1306422273");
    noRelatedSym_0_0.set(EncodedSecurityDesc_87);
    Instrument_87.insert(EncodedSecurityDesc_87.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_87(1059794231);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_87);
    Instrument_87.insert(EncodedSecurityDescLen_87.getString());
    FIX::ExerciseStyle ExerciseStyle_87(1);
    noRelatedSym_0_0.set(ExerciseStyle_87);
    Instrument_87.insert(ExerciseStyle_87.getString());
    FIX::Factor Factor_87;
    Factor_87.setString("643969");
    noRelatedSym_0_0.set(Factor_87);
    Instrument_87.insert(Factor_87.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_87(false);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_87);
    Instrument_87.insert(FlexProductEligibilityIndicator_87.getString());
    FIX::FlexibleIndicator FlexibleIndicator_87(false);
    noRelatedSym_0_0.set(FlexibleIndicator_87);
    Instrument_87.insert(FlexibleIndicator_87.getString());
    FIX::FloorPrice FloorPrice_87;
    FloorPrice_87.setString("14083076");
    noRelatedSym_0_0.set(FloorPrice_87);
    Instrument_87.insert(FloorPrice_87.getString());
    FIX::FlowScheduleType FlowScheduleType_87(4);
    noRelatedSym_0_0.set(FlowScheduleType_87);
    Instrument_87.insert(FlowScheduleType_87.getString());
    FIX::InstrRegistry InstrRegistry_87("STRING_1605641065");
    noRelatedSym_0_0.set(InstrRegistry_87);
    Instrument_87.insert(InstrRegistry_87.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_87('8');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_87);
    Instrument_87.insert(InstrmtAssignmentMethod_87.getString());
    FIX::InterestAccrualDate InterestAccrualDate_87("LOCALMKTDATE_311043775");
    noRelatedSym_0_0.set(InterestAccrualDate_87);
    Instrument_87.insert(InterestAccrualDate_87.getString());
    FIX::IssueDate IssueDate_87("LOCALMKTDATE_1989652138");
    noRelatedSym_0_0.set(IssueDate_87);
    Instrument_87.insert(IssueDate_87.getString());
    FIX::Issuer Issuer_87("STRING_1354661405");
    noRelatedSym_0_0.set(Issuer_87);
    Instrument_87.insert(Issuer_87.getString());
    FIX::ListMethod ListMethod_87(0);
    noRelatedSym_0_0.set(ListMethod_87);
    Instrument_87.insert(ListMethod_87.getString());
    FIX::LocaleOfIssue LocaleOfIssue_87("STRING_65392733");
    noRelatedSym_0_0.set(LocaleOfIssue_87);
    Instrument_87.insert(LocaleOfIssue_87.getString());
    FIX::MaturityDate MaturityDate_87("LOCALMKTDATE_2132472903");
    noRelatedSym_0_0.set(MaturityDate_87);
    Instrument_87.insert(MaturityDate_87.getString());
    FIX::MaturityMonthYear MaturityMonthYear_87("MONTHYEAR_1851561238");
    noRelatedSym_0_0.set(MaturityMonthYear_87);
    Instrument_87.insert(MaturityMonthYear_87.getString());
    FIX::MaturityTime MaturityTime_87("TZTIMEONLY_792384570");
    noRelatedSym_0_0.set(MaturityTime_87);
    Instrument_87.insert(MaturityTime_87.getString());
    FIX::MinPriceIncrement MinPriceIncrement_87;
    MinPriceIncrement_87.setString("422092");
    noRelatedSym_0_0.set(MinPriceIncrement_87);
    Instrument_87.insert(MinPriceIncrement_87.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_87;
    MinPriceIncrementAmount_87.setString("12669876");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_87);
    Instrument_87.insert(MinPriceIncrementAmount_87.getString());
    FIX::NTPositionLimit NTPositionLimit_87(639046504);
    noRelatedSym_0_0.set(NTPositionLimit_87);
    Instrument_87.insert(NTPositionLimit_87.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_87;
    NotionalPercentageOutstanding_87.setString("78.370000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_87);
    Instrument_87.insert(NotionalPercentageOutstanding_87.getString());
    FIX::OptAttribute OptAttribute_87('5');
    noRelatedSym_0_0.set(OptAttribute_87);
    Instrument_87.insert(OptAttribute_87.getString());
    FIX::OptPayoutAmount OptPayoutAmount_87;
    OptPayoutAmount_87.setString("21033298");
    noRelatedSym_0_0.set(OptPayoutAmount_87);
    Instrument_87.insert(OptPayoutAmount_87.getString());
    FIX::OptPayoutType OptPayoutType_87(2);
    noRelatedSym_0_0.set(OptPayoutType_87);
    Instrument_87.insert(OptPayoutType_87.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_87;
    OriginalNotionalPercentageOutstanding_87.setString("22.390000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_87);
    Instrument_87.insert(OriginalNotionalPercentageOutstanding_87.getString());
    FIX::Pool Pool_87("STRING_1166314868");
    noRelatedSym_0_0.set(Pool_87);
    Instrument_87.insert(Pool_87.getString());
    FIX::PositionLimit PositionLimit_87(993071979);
    noRelatedSym_0_0.set(PositionLimit_87);
    Instrument_87.insert(PositionLimit_87.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_87("STRING_INT");
    noRelatedSym_0_0.set(PriceQuoteMethod_87);
    Instrument_87.insert(PriceQuoteMethod_87.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_87("STRING_805453152");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_87);
    Instrument_87.insert(PriceUnitOfMeasure_87.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_87;
    PriceUnitOfMeasureQty_87.setString("6789290");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_87);
    Instrument_87.insert(PriceUnitOfMeasureQty_87.getString());
    FIX::Product Product_89(12);
    noRelatedSym_0_0.set(Product_89);
    Instrument_87.insert(Product_89.getString());
    FIX::ProductComplex ProductComplex_87("STRING_1865247383");
    noRelatedSym_0_0.set(ProductComplex_87);
    Instrument_87.insert(ProductComplex_87.getString());
    FIX::PutOrCall PutOrCall_87(1);
    noRelatedSym_0_0.set(PutOrCall_87);
    Instrument_87.insert(PutOrCall_87.getString());
    FIX::RedemptionDate RedemptionDate_87("LOCALMKTDATE_1525536620");
    noRelatedSym_0_0.set(RedemptionDate_87);
    Instrument_87.insert(RedemptionDate_87.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_87("STRING_743735090");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_87);
    Instrument_87.insert(RepoCollateralSecurityType_87.getString());
    FIX::RepurchaseRate RepurchaseRate_87;
    RepurchaseRate_87.setString("63.930000");
    noRelatedSym_0_0.set(RepurchaseRate_87);
    Instrument_87.insert(RepurchaseRate_87.getString());
    FIX::RepurchaseTerm RepurchaseTerm_87(786360630);
    noRelatedSym_0_0.set(RepurchaseTerm_87);
    Instrument_87.insert(RepurchaseTerm_87.getString());
    FIX::RestructuringType RestructuringType_87("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_87);
    Instrument_87.insert(RestructuringType_87.getString());
    FIX::SecurityDesc SecurityDesc_87("STRING_1076153810");
    noRelatedSym_0_0.set(SecurityDesc_87);
    Instrument_87.insert(SecurityDesc_87.getString());
    FIX::SecurityExchange SecurityExchange_87("EXCHANGE_1591826973");
    noRelatedSym_0_0.set(SecurityExchange_87);
    Instrument_87.insert(SecurityExchange_87.getString());
    FIX::SecurityGroup SecurityGroup_87("STRING_1579490150");
    noRelatedSym_0_0.set(SecurityGroup_87);
    Instrument_87.insert(SecurityGroup_87.getString());
    FIX::SecurityID SecurityID_87("STRING_918322300");
    noRelatedSym_0_0.set(SecurityID_87);
    Instrument_87.insert(SecurityID_87.getString());
    FIX::SecurityIDSource SecurityIDSource_87("STRING_J");
    noRelatedSym_0_0.set(SecurityIDSource_87);
    Instrument_87.insert(SecurityIDSource_87.getString());
    FIX::SecurityStatus SecurityStatus_87("STRING_2");
    noRelatedSym_0_0.set(SecurityStatus_87);
    Instrument_87.insert(SecurityStatus_87.getString());
    FIX::SecuritySubType SecuritySubType_88("STRING_983715033");
    noRelatedSym_0_0.set(SecuritySubType_88);
    Instrument_87.insert(SecuritySubType_88.getString());
    FIX::SecurityType SecurityType_89("STRING_RAN");
    noRelatedSym_0_0.set(SecurityType_89);
    Instrument_87.insert(SecurityType_89.getString());
    FIX::Seniority Seniority_87("STRING_SR");
    noRelatedSym_0_0.set(Seniority_87);
    Instrument_87.insert(Seniority_87.getString());
    FIX::SettlMethod SettlMethod_87('P');
    noRelatedSym_0_0.set(SettlMethod_87);
    Instrument_87.insert(SettlMethod_87.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_87("STRING_826203275");
    noRelatedSym_0_0.set(SettleOnOpenFlag_87);
    Instrument_87.insert(SettleOnOpenFlag_87.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_87("STRING_1657292505");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_87);
    Instrument_87.insert(StateOrProvinceOfIssue_87.getString());
    FIX::StrikeCurrency StrikeCurrency_87("USD");
    noRelatedSym_0_0.set(StrikeCurrency_87);
    Instrument_87.insert(StrikeCurrency_87.getString());
    FIX::StrikeMultiplier StrikeMultiplier_87;
    StrikeMultiplier_87.setString("726917");
    noRelatedSym_0_0.set(StrikeMultiplier_87);
    Instrument_87.insert(StrikeMultiplier_87.getString());
    FIX::StrikePrice StrikePrice_87;
    StrikePrice_87.setString("2235086");
    noRelatedSym_0_0.set(StrikePrice_87);
    Instrument_87.insert(StrikePrice_87.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_87(1);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_87);
    Instrument_87.insert(StrikePriceBoundaryMethod_87.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_87;
    StrikePriceBoundaryPrecision_87.setString("39.490000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_87);
    Instrument_87.insert(StrikePriceBoundaryPrecision_87.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_87(1);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_87);
    Instrument_87.insert(StrikePriceDeterminationMethod_87.getString());
    FIX::StrikeValue StrikeValue_87;
    StrikeValue_87.setString("17304035");
    noRelatedSym_0_0.set(StrikeValue_87);
    Instrument_87.insert(StrikeValue_87.getString());
    FIX::Symbol Symbol_87("STRING_1484151315");
    noRelatedSym_0_0.set(Symbol_87);
    Instrument_87.insert(Symbol_87.getString());
    FIX::SymbolSfx SymbolSfx_87("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_87);
    Instrument_87.insert(SymbolSfx_87.getString());
    FIX::TimeUnit TimeUnit_87("STRING_Wk");
    noRelatedSym_0_0.set(TimeUnit_87);
    Instrument_87.insert(TimeUnit_87.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_87(3);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_87);
    Instrument_87.insert(UnderlyingPriceDeterminationMethod_87.getString());
    FIX::UnitOfMeasure UnitOfMeasure_87("STRING_Bcf");
    noRelatedSym_0_0.set(UnitOfMeasure_87);
    Instrument_87.insert(UnitOfMeasure_87.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_87;
    UnitOfMeasureQty_87.setString("16528918");
    noRelatedSym_0_0.set(UnitOfMeasureQty_87);
    Instrument_87.insert(UnitOfMeasureQty_87.getString());
    FIX::ValuationMethod ValuationMethod_87("STRING_CDS");
    noRelatedSym_0_0.set(ValuationMethod_87);
    Instrument_87.insert(ValuationMethod_87.getString());
    all_values.push_back(Instrument_87);
    all_compo_names.insert("Instrument");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_176;
      FIX::ComplexEventCondition ComplexEventCondition_176(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_176);
      ComplexEvents_NoComplexEvents_176.insert(ComplexEventCondition_176.getString());
      FIX::ComplexEventPrice ComplexEventPrice_176;
      ComplexEventPrice_176.setString("9622209");
      noComplexEvents_0_1_0.set(ComplexEventPrice_176);
      ComplexEvents_NoComplexEvents_176.insert(ComplexEventPrice_176.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_176(5);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_176);
      ComplexEvents_NoComplexEvents_176.insert(ComplexEventPriceBoundaryMethod_176.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_176;
      ComplexEventPriceBoundaryPrecision_176.setString("47.490000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_176);
      ComplexEvents_NoComplexEvents_176.insert(ComplexEventPriceBoundaryPrecision_176.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_176(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_176);
      ComplexEvents_NoComplexEvents_176.insert(ComplexEventPriceTimeType_176.getString());
      FIX::ComplexEventType ComplexEventType_176(4);
      noComplexEvents_0_1_0.set(ComplexEventType_176);
      ComplexEvents_NoComplexEvents_176.insert(ComplexEventType_176.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_176;
      ComplexOptPayoutAmount_176.setString("9703970");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_176);
      ComplexEvents_NoComplexEvents_176.insert(ComplexOptPayoutAmount_176.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_176);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_359;
        FIX::ComplexEventEndDate ComplexEventEndDate_359(FIX::UTCTIMESTAMP(18, 30, 16, 9, 10, 2008));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_359);
        ComplexEventDates_NoComplexEventDates_359.insert(ComplexEventEndDate_359.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_359(FIX::UTCTIMESTAMP(10, 32, 16, 27, 7, 2008));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_359);
        ComplexEventDates_NoComplexEventDates_359.insert(ComplexEventStartDate_359.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_359);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_729;
          FIX::ComplexEventEndTime ComplexEventEndTime_729(FIX::UTCTIMEONLY(13, 43, 28));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_729);
          ComplexEventTimes_NoComplexEventTimes_729.insert(ComplexEventEndTime_729.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_729(FIX::UTCTIMEONLY(9, 6, 57));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_729);
          ComplexEventTimes_NoComplexEventTimes_729.insert(ComplexEventStartTime_729.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_729);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_360;
        FIX::ComplexEventEndDate ComplexEventEndDate_360(FIX::UTCTIMESTAMP(7, 43, 5, 5, 12, 2014));
        noComplexEventDates_0_0_2_1.set(ComplexEventEndDate_360);
        ComplexEventDates_NoComplexEventDates_360.insert(ComplexEventEndDate_360.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_360(FIX::UTCTIMESTAMP(9, 48, 8, 13, 6, 2015));
        noComplexEventDates_0_0_2_1.set(ComplexEventStartDate_360);
        ComplexEventDates_NoComplexEventDates_360.insert(ComplexEventStartDate_360.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_360);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_730;
          FIX::ComplexEventEndTime ComplexEventEndTime_730(FIX::UTCTIMEONLY(7, 52, 53));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventEndTime_730);
          ComplexEventTimes_NoComplexEventTimes_730.insert(ComplexEventEndTime_730.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_730(FIX::UTCTIMEONLY(2, 50, 33));
          noComplexEventTimes_0_0_1_3_0.set(ComplexEventStartTime_730);
          ComplexEventTimes_NoComplexEventTimes_730.insert(ComplexEventStartTime_730.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_730);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_177;
      FIX::ComplexEventCondition ComplexEventCondition_177(2);
      noComplexEvents_0_1_1.set(ComplexEventCondition_177);
      ComplexEvents_NoComplexEvents_177.insert(ComplexEventCondition_177.getString());
      FIX::ComplexEventPrice ComplexEventPrice_177;
      ComplexEventPrice_177.setString("7211837");
      noComplexEvents_0_1_1.set(ComplexEventPrice_177);
      ComplexEvents_NoComplexEvents_177.insert(ComplexEventPrice_177.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_177(5);
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryMethod_177);
      ComplexEvents_NoComplexEvents_177.insert(ComplexEventPriceBoundaryMethod_177.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_177;
      ComplexEventPriceBoundaryPrecision_177.setString("49.190000");
      noComplexEvents_0_1_1.set(ComplexEventPriceBoundaryPrecision_177);
      ComplexEvents_NoComplexEvents_177.insert(ComplexEventPriceBoundaryPrecision_177.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_177(3);
      noComplexEvents_0_1_1.set(ComplexEventPriceTimeType_177);
      ComplexEvents_NoComplexEvents_177.insert(ComplexEventPriceTimeType_177.getString());
      FIX::ComplexEventType ComplexEventType_177(7);
      noComplexEvents_0_1_1.set(ComplexEventType_177);
      ComplexEvents_NoComplexEvents_177.insert(ComplexEventType_177.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_177;
      ComplexOptPayoutAmount_177.setString("14254777");
      noComplexEvents_0_1_1.set(ComplexOptPayoutAmount_177);
      ComplexEvents_NoComplexEvents_177.insert(ComplexOptPayoutAmount_177.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_177);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_361;
        FIX::ComplexEventEndDate ComplexEventEndDate_361(FIX::UTCTIMESTAMP(1, 53, 40, 15, 6, 2013));
        noComplexEventDates_0_1_2_0.set(ComplexEventEndDate_361);
        ComplexEventDates_NoComplexEventDates_361.insert(ComplexEventEndDate_361.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_361(FIX::UTCTIMESTAMP(14, 35, 33, 27, 6, 2012));
        noComplexEventDates_0_1_2_0.set(ComplexEventStartDate_361);
        ComplexEventDates_NoComplexEventDates_361.insert(ComplexEventStartDate_361.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_361);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_731;
          FIX::ComplexEventEndTime ComplexEventEndTime_731(FIX::UTCTIMEONLY(18, 43, 32));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventEndTime_731);
          ComplexEventTimes_NoComplexEventTimes_731.insert(ComplexEventEndTime_731.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_731(FIX::UTCTIMEONLY(9, 14, 46));
          noComplexEventTimes_0_1_0_3_0.set(ComplexEventStartTime_731);
          ComplexEventTimes_NoComplexEventTimes_731.insert(ComplexEventStartTime_731.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_731);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_732;
          FIX::ComplexEventEndTime ComplexEventEndTime_732(FIX::UTCTIMEONLY(9, 55, 52));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventEndTime_732);
          ComplexEventTimes_NoComplexEventTimes_732.insert(ComplexEventEndTime_732.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_732(FIX::UTCTIMEONLY(17, 58, 17));
          noComplexEventTimes_0_1_0_3_1.set(ComplexEventStartTime_732);
          ComplexEventTimes_NoComplexEventTimes_732.insert(ComplexEventStartTime_732.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_732);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_733;
          FIX::ComplexEventEndTime ComplexEventEndTime_733(FIX::UTCTIMEONLY(15, 11, 17));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventEndTime_733);
          ComplexEventTimes_NoComplexEventTimes_733.insert(ComplexEventEndTime_733.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_733(FIX::UTCTIMEONLY(4, 4, 15));
          noComplexEventTimes_0_1_0_3_2.set(ComplexEventStartTime_733);
          ComplexEventTimes_NoComplexEventTimes_733.insert(ComplexEventStartTime_733.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_733);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_178;
      FIX::ComplexEventCondition ComplexEventCondition_178(1);
      noComplexEvents_0_1_2.set(ComplexEventCondition_178);
      ComplexEvents_NoComplexEvents_178.insert(ComplexEventCondition_178.getString());
      FIX::ComplexEventPrice ComplexEventPrice_178;
      ComplexEventPrice_178.setString("16813324");
      noComplexEvents_0_1_2.set(ComplexEventPrice_178);
      ComplexEvents_NoComplexEvents_178.insert(ComplexEventPrice_178.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_178(4);
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryMethod_178);
      ComplexEvents_NoComplexEvents_178.insert(ComplexEventPriceBoundaryMethod_178.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_178;
      ComplexEventPriceBoundaryPrecision_178.setString("49.610000");
      noComplexEvents_0_1_2.set(ComplexEventPriceBoundaryPrecision_178);
      ComplexEvents_NoComplexEvents_178.insert(ComplexEventPriceBoundaryPrecision_178.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_178(1);
      noComplexEvents_0_1_2.set(ComplexEventPriceTimeType_178);
      ComplexEvents_NoComplexEvents_178.insert(ComplexEventPriceTimeType_178.getString());
      FIX::ComplexEventType ComplexEventType_178(3);
      noComplexEvents_0_1_2.set(ComplexEventType_178);
      ComplexEvents_NoComplexEvents_178.insert(ComplexEventType_178.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_178;
      ComplexOptPayoutAmount_178.setString("2594192");
      noComplexEvents_0_1_2.set(ComplexOptPayoutAmount_178);
      ComplexEvents_NoComplexEvents_178.insert(ComplexOptPayoutAmount_178.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_178);
      all_compo_names.insert("ComplexEvents.NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_362;
        FIX::ComplexEventEndDate ComplexEventEndDate_362(FIX::UTCTIMESTAMP(11, 27, 5, 4, 6, 2003));
        noComplexEventDates_0_2_2_0.set(ComplexEventEndDate_362);
        ComplexEventDates_NoComplexEventDates_362.insert(ComplexEventEndDate_362.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_362(FIX::UTCTIMESTAMP(18, 38, 33, 17, 9, 2013));
        noComplexEventDates_0_2_2_0.set(ComplexEventStartDate_362);
        ComplexEventDates_NoComplexEventDates_362.insert(ComplexEventStartDate_362.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_362);
        all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_734;
          FIX::ComplexEventEndTime ComplexEventEndTime_734(FIX::UTCTIMEONLY(2, 46, 9));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventEndTime_734);
          ComplexEventTimes_NoComplexEventTimes_734.insert(ComplexEventEndTime_734.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_734(FIX::UTCTIMEONLY(18, 13, 24));
          noComplexEventTimes_0_2_0_3_0.set(ComplexEventStartTime_734);
          ComplexEventTimes_NoComplexEventTimes_734.insert(ComplexEventStartTime_734.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_734);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_735;
          FIX::ComplexEventEndTime ComplexEventEndTime_735(FIX::UTCTIMEONLY(9, 13, 9));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventEndTime_735);
          ComplexEventTimes_NoComplexEventTimes_735.insert(ComplexEventEndTime_735.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_735(FIX::UTCTIMEONLY(4, 2, 4));
          noComplexEventTimes_0_2_0_3_1.set(ComplexEventStartTime_735);
          ComplexEventTimes_NoComplexEventTimes_735.insert(ComplexEventStartTime_735.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_735);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_736;
          FIX::ComplexEventEndTime ComplexEventEndTime_736(FIX::UTCTIMEONLY(13, 23, 58));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventEndTime_736);
          ComplexEventTimes_NoComplexEventTimes_736.insert(ComplexEventEndTime_736.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_736(FIX::UTCTIMEONLY(4, 42, 7));
          noComplexEventTimes_0_2_0_3_2.set(ComplexEventStartTime_736);
          ComplexEventTimes_NoComplexEventTimes_736.insert(ComplexEventStartTime_736.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_736);
          all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
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
      multiset<string> EvntGrp_NoEvents_174;
      FIX::EventDate EventDate_174("LOCALMKTDATE_1448815280");
      noEvents_0_1_0.set(EventDate_174);
      EvntGrp_NoEvents_174.insert(EventDate_174.getString());
      FIX::EventPx EventPx_174;
      EventPx_174.setString("12151952");
      noEvents_0_1_0.set(EventPx_174);
      EvntGrp_NoEvents_174.insert(EventPx_174.getString());
      FIX::EventText EventText_174("STRING_501211232");
      noEvents_0_1_0.set(EventText_174);
      EvntGrp_NoEvents_174.insert(EventText_174.getString());
      FIX::EventTime EventTime_174(FIX::UTCTIMESTAMP(3, 7, 45, 25, 6, 2012));
      noEvents_0_1_0.set(EventTime_174);
      EvntGrp_NoEvents_174.insert(EventTime_174.getString());
      FIX::EventType EventType_174(19);
      noEvents_0_1_0.set(EventType_174);
      EvntGrp_NoEvents_174.insert(EventType_174.getString());
      all_values.push_back(EvntGrp_NoEvents_174);
      all_compo_names.insert("EvntGrp.NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_183;
      FIX::InstrumentPartyID InstrumentPartyID_183("STRING_449629080");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_183);
      InstrumentParties_NoInstrumentParties_183.insert(InstrumentPartyID_183.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_183('6');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_183);
      InstrumentParties_NoInstrumentParties_183.insert(InstrumentPartyIDSource_183.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_183(1626452395);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_183);
      InstrumentParties_NoInstrumentParties_183.insert(InstrumentPartyRole_183.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_183);
      all_compo_names.insert("InstrumentParties.NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356;
        FIX::InstrumentPartySubID InstrumentPartySubID_356("STRING_605742548");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_356);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356.insert(InstrumentPartySubID_356.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_356(1952835425);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_356);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356.insert(InstrumentPartySubIDType_356.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_356);
        all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_162;
      FIX::SecurityAltID SecurityAltID_162("STRING_1929335424");
      noSecurityAltID_0_1_0.set(SecurityAltID_162);
      SecAltIDGrp_NoSecurityAltID_162.insert(SecurityAltID_162.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_162("STRING_391154099");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_162);
      SecAltIDGrp_NoSecurityAltID_162.insert(SecurityAltIDSource_162.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_162);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_163;
      FIX::SecurityAltID SecurityAltID_163("STRING_334543963");
      noSecurityAltID_0_1_1.set(SecurityAltID_163);
      SecAltIDGrp_NoSecurityAltID_163.insert(SecurityAltID_163.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_163("STRING_991189217");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_163);
      SecAltIDGrp_NoSecurityAltID_163.insert(SecurityAltIDSource_163.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_163);
      all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_174;
    FIX::SecurityXML SecurityXML_175("XMLDATA_1786006776");
    noRelatedSym_0_0.set(SecurityXML_175);
    FIX::SecurityXMLLen SecurityXMLLen_87(336638646);
    noRelatedSym_0_0.set(SecurityXMLLen_87);
    FIX::SecurityXMLSchema SecurityXMLSchema_87("STRING_1834107555");
    noRelatedSym_0_0.set(SecurityXMLSchema_87);
    SecurityXML_174.insert(SecurityXMLSchema_87.getString());
    all_values.push_back(SecurityXML_174);
    all_compo_names.insert("SecurityXML");

    // InstrumentExtension
    multiset<string> InstrumentExtension_16;
    FIX::DeliveryForm DeliveryForm_16(1);
    noRelatedSym_0_0.set(DeliveryForm_16);
    InstrumentExtension_16.insert(DeliveryForm_16.getString());
    FIX::PctAtRisk PctAtRisk_16;
    PctAtRisk_16.setString("35.310000");
    noRelatedSym_0_0.set(PctAtRisk_16);
    InstrumentExtension_16.insert(PctAtRisk_16.getString());
    all_values.push_back(InstrumentExtension_16);
    all_compo_names.insert("InstrumentExtension");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_32;
      FIX::InstrAttribType InstrAttribType_32(2);
      noInstrAttrib_0_1_0.set(InstrAttribType_32);
      AttrbGrp_NoInstrAttrib_32.insert(InstrAttribType_32.getString());
      FIX::InstrAttribValue InstrAttribValue_32("STRING_349264938");
      noInstrAttrib_0_1_0.set(InstrAttribValue_32);
      AttrbGrp_NoInstrAttrib_32.insert(InstrAttribValue_32.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_32);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_33;
      FIX::InstrAttribType InstrAttribType_33(11);
      noInstrAttrib_0_1_1.set(InstrAttribType_33);
      AttrbGrp_NoInstrAttrib_33.insert(InstrAttribType_33.getString());
      FIX::InstrAttribValue InstrAttribValue_33("STRING_1115579613");
      noInstrAttrib_0_1_1.set(InstrAttribValue_33);
      AttrbGrp_NoInstrAttrib_33.insert(InstrAttribValue_33.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_33);
      all_compo_names.insert("AttrbGrp.NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_0;
      FIX::LegSettlType LegSettlType_25('1');
      noLegs_0_1_0.set(LegSettlType_25);
      SecLstUpdRelSymsLegGrp_NoLegs_0.insert(LegSettlType_25.getString());
      FIX::LegSwapType LegSwapType_25(1);
      noLegs_0_1_0.set(LegSwapType_25);
      SecLstUpdRelSymsLegGrp_NoLegs_0.insert(LegSwapType_25.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_0);
      all_compo_names.insert("SecLstUpdRelSymsLegGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_143;
      FIX::EncodedLegIssuer EncodedLegIssuer_143("DATA_1721445178");
      noLegs_0_1_0.set(EncodedLegIssuer_143);
      InstrumentLeg_143.insert(EncodedLegIssuer_143.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_143(304944511);
      noLegs_0_1_0.set(EncodedLegIssuerLen_143);
      InstrumentLeg_143.insert(EncodedLegIssuerLen_143.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_143("DATA_795581758");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_143);
      InstrumentLeg_143.insert(EncodedLegSecurityDesc_143.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_143(1643920543);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_143);
      InstrumentLeg_143.insert(EncodedLegSecurityDescLen_143.getString());
      FIX::LegCFICode LegCFICode_143("STRING_1199592386");
      noLegs_0_1_0.set(LegCFICode_143);
      InstrumentLeg_143.insert(LegCFICode_143.getString());
      FIX::LegContractMultiplier LegContractMultiplier_143;
      LegContractMultiplier_143.setString("13202093");
      noLegs_0_1_0.set(LegContractMultiplier_143);
      InstrumentLeg_143.insert(LegContractMultiplier_143.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_143(94867575);
      noLegs_0_1_0.set(LegContractMultiplierUnit_143);
      InstrumentLeg_143.insert(LegContractMultiplierUnit_143.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_143("MONTHYEAR_1649221466");
      noLegs_0_1_0.set(LegContractSettlMonth_143);
      InstrumentLeg_143.insert(LegContractSettlMonth_143.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_143("COUNTRY_1943526819");
      noLegs_0_1_0.set(LegCountryOfIssue_143);
      InstrumentLeg_143.insert(LegCountryOfIssue_143.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_143("LOCALMKTDATE_1721319970");
      noLegs_0_1_0.set(LegCouponPaymentDate_143);
      InstrumentLeg_143.insert(LegCouponPaymentDate_143.getString());
      FIX::LegCouponRate LegCouponRate_143;
      LegCouponRate_143.setString("5.630000");
      noLegs_0_1_0.set(LegCouponRate_143);
      InstrumentLeg_143.insert(LegCouponRate_143.getString());
      FIX::LegCreditRating LegCreditRating_143("STRING_401785719");
      noLegs_0_1_0.set(LegCreditRating_143);
      InstrumentLeg_143.insert(LegCreditRating_143.getString());
      FIX::LegCurrency LegCurrency_143("CAN");
      noLegs_0_1_0.set(LegCurrency_143);
      InstrumentLeg_143.insert(LegCurrency_143.getString());
      FIX::LegDatedDate LegDatedDate_143("LOCALMKTDATE_183637495");
      noLegs_0_1_0.set(LegDatedDate_143);
      InstrumentLeg_143.insert(LegDatedDate_143.getString());
      FIX::LegExerciseStyle LegExerciseStyle_143(1917825846);
      noLegs_0_1_0.set(LegExerciseStyle_143);
      InstrumentLeg_143.insert(LegExerciseStyle_143.getString());
      FIX::LegFactor LegFactor_143;
      LegFactor_143.setString("6220868");
      noLegs_0_1_0.set(LegFactor_143);
      InstrumentLeg_143.insert(LegFactor_143.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_143(1174826712);
      noLegs_0_1_0.set(LegFlowScheduleType_143);
      InstrumentLeg_143.insert(LegFlowScheduleType_143.getString());
      FIX::LegInstrRegistry LegInstrRegistry_143("STRING_1556348975");
      noLegs_0_1_0.set(LegInstrRegistry_143);
      InstrumentLeg_143.insert(LegInstrRegistry_143.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_143("LOCALMKTDATE_958725451");
      noLegs_0_1_0.set(LegInterestAccrualDate_143);
      InstrumentLeg_143.insert(LegInterestAccrualDate_143.getString());
      FIX::LegIssueDate LegIssueDate_143("LOCALMKTDATE_861450620");
      noLegs_0_1_0.set(LegIssueDate_143);
      InstrumentLeg_143.insert(LegIssueDate_143.getString());
      FIX::LegIssuer LegIssuer_143("STRING_292739601");
      noLegs_0_1_0.set(LegIssuer_143);
      InstrumentLeg_143.insert(LegIssuer_143.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_143("STRING_811125334");
      noLegs_0_1_0.set(LegLocaleOfIssue_143);
      InstrumentLeg_143.insert(LegLocaleOfIssue_143.getString());
      FIX::LegMaturityDate LegMaturityDate_143("LOCALMKTDATE_1379737449");
      noLegs_0_1_0.set(LegMaturityDate_143);
      InstrumentLeg_143.insert(LegMaturityDate_143.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_143("MONTHYEAR_193123935");
      noLegs_0_1_0.set(LegMaturityMonthYear_143);
      InstrumentLeg_143.insert(LegMaturityMonthYear_143.getString());
      FIX::LegMaturityTime LegMaturityTime_143("TZTIMEONLY_1160390272");
      noLegs_0_1_0.set(LegMaturityTime_143);
      InstrumentLeg_143.insert(LegMaturityTime_143.getString());
      FIX::LegOptAttribute LegOptAttribute_143('1');
      noLegs_0_1_0.set(LegOptAttribute_143);
      InstrumentLeg_143.insert(LegOptAttribute_143.getString());
      FIX::LegOptionRatio LegOptionRatio_143;
      LegOptionRatio_143.setString("13087035");
      noLegs_0_1_0.set(LegOptionRatio_143);
      InstrumentLeg_143.insert(LegOptionRatio_143.getString());
      FIX::LegPool LegPool_143("STRING_2010866442");
      noLegs_0_1_0.set(LegPool_143);
      InstrumentLeg_143.insert(LegPool_143.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_143("STRING_1010435158");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_143);
      InstrumentLeg_143.insert(LegPriceUnitOfMeasure_143.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_143;
      LegPriceUnitOfMeasureQty_143.setString("9537495");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_143);
      InstrumentLeg_143.insert(LegPriceUnitOfMeasureQty_143.getString());
      FIX::LegProduct LegProduct_143(1584827972);
      noLegs_0_1_0.set(LegProduct_143);
      InstrumentLeg_143.insert(LegProduct_143.getString());
      FIX::LegPutOrCall LegPutOrCall_143(1315379669);
      noLegs_0_1_0.set(LegPutOrCall_143);
      InstrumentLeg_143.insert(LegPutOrCall_143.getString());
      FIX::LegRatioQty LegRatioQty_143;
      LegRatioQty_143.setString("17493312");
      noLegs_0_1_0.set(LegRatioQty_143);
      InstrumentLeg_143.insert(LegRatioQty_143.getString());
      FIX::LegRedemptionDate LegRedemptionDate_143("LOCALMKTDATE_1081264868");
      noLegs_0_1_0.set(LegRedemptionDate_143);
      InstrumentLeg_143.insert(LegRedemptionDate_143.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_143("STRING_367488407");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_143);
      InstrumentLeg_143.insert(LegRepoCollateralSecurityType_143.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_143;
      LegRepurchaseRate_143.setString("70.030000");
      noLegs_0_1_0.set(LegRepurchaseRate_143);
      InstrumentLeg_143.insert(LegRepurchaseRate_143.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_143(1176132443);
      noLegs_0_1_0.set(LegRepurchaseTerm_143);
      InstrumentLeg_143.insert(LegRepurchaseTerm_143.getString());
      FIX::LegSecurityDesc LegSecurityDesc_143("STRING_2016709873");
      noLegs_0_1_0.set(LegSecurityDesc_143);
      InstrumentLeg_143.insert(LegSecurityDesc_143.getString());
      FIX::LegSecurityExchange LegSecurityExchange_143("EXCHANGE_718100175");
      noLegs_0_1_0.set(LegSecurityExchange_143);
      InstrumentLeg_143.insert(LegSecurityExchange_143.getString());
      FIX::LegSecurityID LegSecurityID_143("STRING_749968765");
      noLegs_0_1_0.set(LegSecurityID_143);
      InstrumentLeg_143.insert(LegSecurityID_143.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_143("STRING_1056906788");
      noLegs_0_1_0.set(LegSecurityIDSource_143);
      InstrumentLeg_143.insert(LegSecurityIDSource_143.getString());
      FIX::LegSecuritySubType LegSecuritySubType_143("STRING_1119885894");
      noLegs_0_1_0.set(LegSecuritySubType_143);
      InstrumentLeg_143.insert(LegSecuritySubType_143.getString());
      FIX::LegSecurityType LegSecurityType_143("STRING_129156865");
      noLegs_0_1_0.set(LegSecurityType_143);
      InstrumentLeg_143.insert(LegSecurityType_143.getString());
      FIX::LegSide LegSide_143('1');
      noLegs_0_1_0.set(LegSide_143);
      InstrumentLeg_143.insert(LegSide_143.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_143("STRING_1303523390");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_143);
      InstrumentLeg_143.insert(LegStateOrProvinceOfIssue_143.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_143("GBP");
      noLegs_0_1_0.set(LegStrikeCurrency_143);
      InstrumentLeg_143.insert(LegStrikeCurrency_143.getString());
      FIX::LegStrikePrice LegStrikePrice_143;
      LegStrikePrice_143.setString("3308664");
      noLegs_0_1_0.set(LegStrikePrice_143);
      InstrumentLeg_143.insert(LegStrikePrice_143.getString());
      FIX::LegSymbol LegSymbol_143("STRING_1455848038");
      noLegs_0_1_0.set(LegSymbol_143);
      InstrumentLeg_143.insert(LegSymbol_143.getString());
      FIX::LegSymbolSfx LegSymbolSfx_143("STRING_777778237");
      noLegs_0_1_0.set(LegSymbolSfx_143);
      InstrumentLeg_143.insert(LegSymbolSfx_143.getString());
      FIX::LegTimeUnit LegTimeUnit_143("STRING_1192317074");
      noLegs_0_1_0.set(LegTimeUnit_143);
      InstrumentLeg_143.insert(LegTimeUnit_143.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_143("STRING_1748587640");
      noLegs_0_1_0.set(LegUnitOfMeasure_143);
      InstrumentLeg_143.insert(LegUnitOfMeasure_143.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_143;
      LegUnitOfMeasureQty_143.setString("15889035");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_143);
      InstrumentLeg_143.insert(LegUnitOfMeasureQty_143.getString());
      all_values.push_back(InstrumentLeg_143);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_277;
        FIX::LegSecurityAltID LegSecurityAltID_277("STRING_1941711575");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_277);
        LegSecAltIDGrp_NoLegSecurityAltID_277.insert(LegSecurityAltID_277.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_277("STRING_601810195");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_277);
        LegSecAltIDGrp_NoLegSecurityAltID_277.insert(LegSecurityAltIDSource_277.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_277);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_278;
        FIX::LegSecurityAltID LegSecurityAltID_278("STRING_1623926787");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltID_278);
        LegSecAltIDGrp_NoLegSecurityAltID_278.insert(LegSecurityAltID_278.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_278("STRING_1102931475");
        noLegSecurityAltID_0_0_2_1.set(LegSecurityAltIDSource_278);
        LegSecAltIDGrp_NoLegSecurityAltID_278.insert(LegSecurityAltIDSource_278.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_278);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_20;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_20("CAN");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_20);
      LegBenchmarkCurveData_20.insert(LegBenchmarkCurveCurrency_20.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_20("STRING_2056680992");
      noLegs_0_1_0.set(LegBenchmarkCurveName_20);
      LegBenchmarkCurveData_20.insert(LegBenchmarkCurveName_20.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_20("STRING_2050020962");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_20);
      LegBenchmarkCurveData_20.insert(LegBenchmarkCurvePoint_20.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_20;
      LegBenchmarkPrice_20.setString("18022579");
      noLegs_0_1_0.set(LegBenchmarkPrice_20);
      LegBenchmarkCurveData_20.insert(LegBenchmarkPrice_20.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_20(1658528619);
      noLegs_0_1_0.set(LegBenchmarkPriceType_20);
      LegBenchmarkCurveData_20.insert(LegBenchmarkPriceType_20.getString());
      all_values.push_back(LegBenchmarkCurveData_20);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_58;
        FIX::LegStipulationType LegStipulationType_58("STRING_22262726");
        noLegStipulations_0_0_2_0.set(LegStipulationType_58);
        LegStipulations_NoLegStipulations_58.insert(LegStipulationType_58.getString());
        FIX::LegStipulationValue LegStipulationValue_58("STRING_433101975");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_58);
        LegStipulations_NoLegStipulations_58.insert(LegStipulationValue_58.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_58);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_59;
        FIX::LegStipulationType LegStipulationType_59("STRING_12450977");
        noLegStipulations_0_0_2_1.set(LegStipulationType_59);
        LegStipulations_NoLegStipulations_59.insert(LegStipulationType_59.getString());
        FIX::LegStipulationValue LegStipulationValue_59("STRING_2038972600");
        noLegStipulations_0_0_2_1.set(LegStipulationValue_59);
        LegStipulations_NoLegStipulations_59.insert(LegStipulationValue_59.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_59);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_60;
        FIX::LegStipulationType LegStipulationType_60("STRING_1151202150");
        noLegStipulations_0_0_2_2.set(LegStipulationType_60);
        LegStipulations_NoLegStipulations_60.insert(LegStipulationType_60.getString());
        FIX::LegStipulationValue LegStipulationValue_60("STRING_762419743");
        noLegStipulations_0_0_2_2.set(LegStipulationValue_60);
        LegStipulations_NoLegStipulations_60.insert(LegStipulationValue_60.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_60);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_1;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_1;
      FIX::LegSettlType LegSettlType_26('9');
      noLegs_0_1_1.set(LegSettlType_26);
      SecLstUpdRelSymsLegGrp_NoLegs_1.insert(LegSettlType_26.getString());
      FIX::LegSwapType LegSwapType_26(1);
      noLegs_0_1_1.set(LegSwapType_26);
      SecLstUpdRelSymsLegGrp_NoLegs_1.insert(LegSwapType_26.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_1);
      all_compo_names.insert("SecLstUpdRelSymsLegGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_144;
      FIX::EncodedLegIssuer EncodedLegIssuer_144("DATA_891576608");
      noLegs_0_1_1.set(EncodedLegIssuer_144);
      InstrumentLeg_144.insert(EncodedLegIssuer_144.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_144(145361722);
      noLegs_0_1_1.set(EncodedLegIssuerLen_144);
      InstrumentLeg_144.insert(EncodedLegIssuerLen_144.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_144("DATA_1427127786");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_144);
      InstrumentLeg_144.insert(EncodedLegSecurityDesc_144.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_144(791075671);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_144);
      InstrumentLeg_144.insert(EncodedLegSecurityDescLen_144.getString());
      FIX::LegCFICode LegCFICode_144("STRING_2111898157");
      noLegs_0_1_1.set(LegCFICode_144);
      InstrumentLeg_144.insert(LegCFICode_144.getString());
      FIX::LegContractMultiplier LegContractMultiplier_144;
      LegContractMultiplier_144.setString("17579942");
      noLegs_0_1_1.set(LegContractMultiplier_144);
      InstrumentLeg_144.insert(LegContractMultiplier_144.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_144(99440062);
      noLegs_0_1_1.set(LegContractMultiplierUnit_144);
      InstrumentLeg_144.insert(LegContractMultiplierUnit_144.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_144("MONTHYEAR_742192746");
      noLegs_0_1_1.set(LegContractSettlMonth_144);
      InstrumentLeg_144.insert(LegContractSettlMonth_144.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_144("COUNTRY_802827667");
      noLegs_0_1_1.set(LegCountryOfIssue_144);
      InstrumentLeg_144.insert(LegCountryOfIssue_144.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_144("LOCALMKTDATE_1848027702");
      noLegs_0_1_1.set(LegCouponPaymentDate_144);
      InstrumentLeg_144.insert(LegCouponPaymentDate_144.getString());
      FIX::LegCouponRate LegCouponRate_144;
      LegCouponRate_144.setString("26.700000");
      noLegs_0_1_1.set(LegCouponRate_144);
      InstrumentLeg_144.insert(LegCouponRate_144.getString());
      FIX::LegCreditRating LegCreditRating_144("STRING_1227398543");
      noLegs_0_1_1.set(LegCreditRating_144);
      InstrumentLeg_144.insert(LegCreditRating_144.getString());
      FIX::LegCurrency LegCurrency_144("CAN");
      noLegs_0_1_1.set(LegCurrency_144);
      InstrumentLeg_144.insert(LegCurrency_144.getString());
      FIX::LegDatedDate LegDatedDate_144("LOCALMKTDATE_703841683");
      noLegs_0_1_1.set(LegDatedDate_144);
      InstrumentLeg_144.insert(LegDatedDate_144.getString());
      FIX::LegExerciseStyle LegExerciseStyle_144(597703456);
      noLegs_0_1_1.set(LegExerciseStyle_144);
      InstrumentLeg_144.insert(LegExerciseStyle_144.getString());
      FIX::LegFactor LegFactor_144;
      LegFactor_144.setString("12506158");
      noLegs_0_1_1.set(LegFactor_144);
      InstrumentLeg_144.insert(LegFactor_144.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_144(1190719980);
      noLegs_0_1_1.set(LegFlowScheduleType_144);
      InstrumentLeg_144.insert(LegFlowScheduleType_144.getString());
      FIX::LegInstrRegistry LegInstrRegistry_144("STRING_506900801");
      noLegs_0_1_1.set(LegInstrRegistry_144);
      InstrumentLeg_144.insert(LegInstrRegistry_144.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_144("LOCALMKTDATE_1153153170");
      noLegs_0_1_1.set(LegInterestAccrualDate_144);
      InstrumentLeg_144.insert(LegInterestAccrualDate_144.getString());
      FIX::LegIssueDate LegIssueDate_144("LOCALMKTDATE_845494299");
      noLegs_0_1_1.set(LegIssueDate_144);
      InstrumentLeg_144.insert(LegIssueDate_144.getString());
      FIX::LegIssuer LegIssuer_144("STRING_17945772");
      noLegs_0_1_1.set(LegIssuer_144);
      InstrumentLeg_144.insert(LegIssuer_144.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_144("STRING_2136955352");
      noLegs_0_1_1.set(LegLocaleOfIssue_144);
      InstrumentLeg_144.insert(LegLocaleOfIssue_144.getString());
      FIX::LegMaturityDate LegMaturityDate_144("LOCALMKTDATE_867757026");
      noLegs_0_1_1.set(LegMaturityDate_144);
      InstrumentLeg_144.insert(LegMaturityDate_144.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_144("MONTHYEAR_451047747");
      noLegs_0_1_1.set(LegMaturityMonthYear_144);
      InstrumentLeg_144.insert(LegMaturityMonthYear_144.getString());
      FIX::LegMaturityTime LegMaturityTime_144("TZTIMEONLY_1922682");
      noLegs_0_1_1.set(LegMaturityTime_144);
      InstrumentLeg_144.insert(LegMaturityTime_144.getString());
      FIX::LegOptAttribute LegOptAttribute_144('7');
      noLegs_0_1_1.set(LegOptAttribute_144);
      InstrumentLeg_144.insert(LegOptAttribute_144.getString());
      FIX::LegOptionRatio LegOptionRatio_144;
      LegOptionRatio_144.setString("16022498");
      noLegs_0_1_1.set(LegOptionRatio_144);
      InstrumentLeg_144.insert(LegOptionRatio_144.getString());
      FIX::LegPool LegPool_144("STRING_764342425");
      noLegs_0_1_1.set(LegPool_144);
      InstrumentLeg_144.insert(LegPool_144.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_144("STRING_1707641718");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_144);
      InstrumentLeg_144.insert(LegPriceUnitOfMeasure_144.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_144;
      LegPriceUnitOfMeasureQty_144.setString("17258542");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_144);
      InstrumentLeg_144.insert(LegPriceUnitOfMeasureQty_144.getString());
      FIX::LegProduct LegProduct_144(1655919033);
      noLegs_0_1_1.set(LegProduct_144);
      InstrumentLeg_144.insert(LegProduct_144.getString());
      FIX::LegPutOrCall LegPutOrCall_144(1853003441);
      noLegs_0_1_1.set(LegPutOrCall_144);
      InstrumentLeg_144.insert(LegPutOrCall_144.getString());
      FIX::LegRatioQty LegRatioQty_144;
      LegRatioQty_144.setString("10054984");
      noLegs_0_1_1.set(LegRatioQty_144);
      InstrumentLeg_144.insert(LegRatioQty_144.getString());
      FIX::LegRedemptionDate LegRedemptionDate_144("LOCALMKTDATE_299511056");
      noLegs_0_1_1.set(LegRedemptionDate_144);
      InstrumentLeg_144.insert(LegRedemptionDate_144.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_144("STRING_1817417950");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_144);
      InstrumentLeg_144.insert(LegRepoCollateralSecurityType_144.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_144;
      LegRepurchaseRate_144.setString("90.250000");
      noLegs_0_1_1.set(LegRepurchaseRate_144);
      InstrumentLeg_144.insert(LegRepurchaseRate_144.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_144(398951118);
      noLegs_0_1_1.set(LegRepurchaseTerm_144);
      InstrumentLeg_144.insert(LegRepurchaseTerm_144.getString());
      FIX::LegSecurityDesc LegSecurityDesc_144("STRING_412127048");
      noLegs_0_1_1.set(LegSecurityDesc_144);
      InstrumentLeg_144.insert(LegSecurityDesc_144.getString());
      FIX::LegSecurityExchange LegSecurityExchange_144("EXCHANGE_1418836693");
      noLegs_0_1_1.set(LegSecurityExchange_144);
      InstrumentLeg_144.insert(LegSecurityExchange_144.getString());
      FIX::LegSecurityID LegSecurityID_144("STRING_99495172");
      noLegs_0_1_1.set(LegSecurityID_144);
      InstrumentLeg_144.insert(LegSecurityID_144.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_144("STRING_595739718");
      noLegs_0_1_1.set(LegSecurityIDSource_144);
      InstrumentLeg_144.insert(LegSecurityIDSource_144.getString());
      FIX::LegSecuritySubType LegSecuritySubType_144("STRING_498751588");
      noLegs_0_1_1.set(LegSecuritySubType_144);
      InstrumentLeg_144.insert(LegSecuritySubType_144.getString());
      FIX::LegSecurityType LegSecurityType_144("STRING_1741750801");
      noLegs_0_1_1.set(LegSecurityType_144);
      InstrumentLeg_144.insert(LegSecurityType_144.getString());
      FIX::LegSide LegSide_144('1');
      noLegs_0_1_1.set(LegSide_144);
      InstrumentLeg_144.insert(LegSide_144.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_144("STRING_1202593271");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_144);
      InstrumentLeg_144.insert(LegStateOrProvinceOfIssue_144.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_144("CHF");
      noLegs_0_1_1.set(LegStrikeCurrency_144);
      InstrumentLeg_144.insert(LegStrikeCurrency_144.getString());
      FIX::LegStrikePrice LegStrikePrice_144;
      LegStrikePrice_144.setString("2458296");
      noLegs_0_1_1.set(LegStrikePrice_144);
      InstrumentLeg_144.insert(LegStrikePrice_144.getString());
      FIX::LegSymbol LegSymbol_144("STRING_698871411");
      noLegs_0_1_1.set(LegSymbol_144);
      InstrumentLeg_144.insert(LegSymbol_144.getString());
      FIX::LegSymbolSfx LegSymbolSfx_144("STRING_1637447961");
      noLegs_0_1_1.set(LegSymbolSfx_144);
      InstrumentLeg_144.insert(LegSymbolSfx_144.getString());
      FIX::LegTimeUnit LegTimeUnit_144("STRING_1091323903");
      noLegs_0_1_1.set(LegTimeUnit_144);
      InstrumentLeg_144.insert(LegTimeUnit_144.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_144("STRING_716817183");
      noLegs_0_1_1.set(LegUnitOfMeasure_144);
      InstrumentLeg_144.insert(LegUnitOfMeasure_144.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_144;
      LegUnitOfMeasureQty_144.setString("16269196");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_144);
      InstrumentLeg_144.insert(LegUnitOfMeasureQty_144.getString());
      all_values.push_back(InstrumentLeg_144);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_279;
        FIX::LegSecurityAltID LegSecurityAltID_279("STRING_1167864931");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_279);
        LegSecAltIDGrp_NoLegSecurityAltID_279.insert(LegSecurityAltID_279.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_279("STRING_1628842348");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_279);
        LegSecAltIDGrp_NoLegSecurityAltID_279.insert(LegSecurityAltIDSource_279.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_279);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_280;
        FIX::LegSecurityAltID LegSecurityAltID_280("STRING_570843259");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_280);
        LegSecAltIDGrp_NoLegSecurityAltID_280.insert(LegSecurityAltID_280.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_280("STRING_622631180");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_280);
        LegSecAltIDGrp_NoLegSecurityAltID_280.insert(LegSecurityAltIDSource_280.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_280);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_21;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_21("USD");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_21);
      LegBenchmarkCurveData_21.insert(LegBenchmarkCurveCurrency_21.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_21("STRING_201001826");
      noLegs_0_1_1.set(LegBenchmarkCurveName_21);
      LegBenchmarkCurveData_21.insert(LegBenchmarkCurveName_21.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_21("STRING_1901620158");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_21);
      LegBenchmarkCurveData_21.insert(LegBenchmarkCurvePoint_21.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_21;
      LegBenchmarkPrice_21.setString("19840047");
      noLegs_0_1_1.set(LegBenchmarkPrice_21);
      LegBenchmarkCurveData_21.insert(LegBenchmarkPrice_21.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_21(1206500259);
      noLegs_0_1_1.set(LegBenchmarkPriceType_21);
      LegBenchmarkCurveData_21.insert(LegBenchmarkPriceType_21.getString());
      all_values.push_back(LegBenchmarkCurveData_21);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_61;
        FIX::LegStipulationType LegStipulationType_61("STRING_1653939073");
        noLegStipulations_0_1_2_0.set(LegStipulationType_61);
        LegStipulations_NoLegStipulations_61.insert(LegStipulationType_61.getString());
        FIX::LegStipulationValue LegStipulationValue_61("STRING_1822509284");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_61);
        LegStipulations_NoLegStipulations_61.insert(LegStipulationValue_61.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_61);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_2;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_2;
      FIX::LegSettlType LegSettlType_27('4');
      noLegs_0_1_2.set(LegSettlType_27);
      SecLstUpdRelSymsLegGrp_NoLegs_2.insert(LegSettlType_27.getString());
      FIX::LegSwapType LegSwapType_27(2);
      noLegs_0_1_2.set(LegSwapType_27);
      SecLstUpdRelSymsLegGrp_NoLegs_2.insert(LegSwapType_27.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_2);
      all_compo_names.insert("SecLstUpdRelSymsLegGrp.NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_145;
      FIX::EncodedLegIssuer EncodedLegIssuer_145("DATA_1093862329");
      noLegs_0_1_2.set(EncodedLegIssuer_145);
      InstrumentLeg_145.insert(EncodedLegIssuer_145.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_145(552093857);
      noLegs_0_1_2.set(EncodedLegIssuerLen_145);
      InstrumentLeg_145.insert(EncodedLegIssuerLen_145.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_145("DATA_514322192");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_145);
      InstrumentLeg_145.insert(EncodedLegSecurityDesc_145.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_145(1592613918);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_145);
      InstrumentLeg_145.insert(EncodedLegSecurityDescLen_145.getString());
      FIX::LegCFICode LegCFICode_145("STRING_146361011");
      noLegs_0_1_2.set(LegCFICode_145);
      InstrumentLeg_145.insert(LegCFICode_145.getString());
      FIX::LegContractMultiplier LegContractMultiplier_145;
      LegContractMultiplier_145.setString("18954847");
      noLegs_0_1_2.set(LegContractMultiplier_145);
      InstrumentLeg_145.insert(LegContractMultiplier_145.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_145(647723541);
      noLegs_0_1_2.set(LegContractMultiplierUnit_145);
      InstrumentLeg_145.insert(LegContractMultiplierUnit_145.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_145("MONTHYEAR_338331621");
      noLegs_0_1_2.set(LegContractSettlMonth_145);
      InstrumentLeg_145.insert(LegContractSettlMonth_145.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_145("COUNTRY_232295919");
      noLegs_0_1_2.set(LegCountryOfIssue_145);
      InstrumentLeg_145.insert(LegCountryOfIssue_145.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_145("LOCALMKTDATE_893553145");
      noLegs_0_1_2.set(LegCouponPaymentDate_145);
      InstrumentLeg_145.insert(LegCouponPaymentDate_145.getString());
      FIX::LegCouponRate LegCouponRate_145;
      LegCouponRate_145.setString("30.320000");
      noLegs_0_1_2.set(LegCouponRate_145);
      InstrumentLeg_145.insert(LegCouponRate_145.getString());
      FIX::LegCreditRating LegCreditRating_145("STRING_1869743881");
      noLegs_0_1_2.set(LegCreditRating_145);
      InstrumentLeg_145.insert(LegCreditRating_145.getString());
      FIX::LegCurrency LegCurrency_145("CHF");
      noLegs_0_1_2.set(LegCurrency_145);
      InstrumentLeg_145.insert(LegCurrency_145.getString());
      FIX::LegDatedDate LegDatedDate_145("LOCALMKTDATE_1349179899");
      noLegs_0_1_2.set(LegDatedDate_145);
      InstrumentLeg_145.insert(LegDatedDate_145.getString());
      FIX::LegExerciseStyle LegExerciseStyle_145(1796474330);
      noLegs_0_1_2.set(LegExerciseStyle_145);
      InstrumentLeg_145.insert(LegExerciseStyle_145.getString());
      FIX::LegFactor LegFactor_145;
      LegFactor_145.setString("7744014");
      noLegs_0_1_2.set(LegFactor_145);
      InstrumentLeg_145.insert(LegFactor_145.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_145(830538599);
      noLegs_0_1_2.set(LegFlowScheduleType_145);
      InstrumentLeg_145.insert(LegFlowScheduleType_145.getString());
      FIX::LegInstrRegistry LegInstrRegistry_145("STRING_219833942");
      noLegs_0_1_2.set(LegInstrRegistry_145);
      InstrumentLeg_145.insert(LegInstrRegistry_145.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_145("LOCALMKTDATE_1397032679");
      noLegs_0_1_2.set(LegInterestAccrualDate_145);
      InstrumentLeg_145.insert(LegInterestAccrualDate_145.getString());
      FIX::LegIssueDate LegIssueDate_145("LOCALMKTDATE_1076239724");
      noLegs_0_1_2.set(LegIssueDate_145);
      InstrumentLeg_145.insert(LegIssueDate_145.getString());
      FIX::LegIssuer LegIssuer_145("STRING_350835272");
      noLegs_0_1_2.set(LegIssuer_145);
      InstrumentLeg_145.insert(LegIssuer_145.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_145("STRING_1598034505");
      noLegs_0_1_2.set(LegLocaleOfIssue_145);
      InstrumentLeg_145.insert(LegLocaleOfIssue_145.getString());
      FIX::LegMaturityDate LegMaturityDate_145("LOCALMKTDATE_830376234");
      noLegs_0_1_2.set(LegMaturityDate_145);
      InstrumentLeg_145.insert(LegMaturityDate_145.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_145("MONTHYEAR_187356395");
      noLegs_0_1_2.set(LegMaturityMonthYear_145);
      InstrumentLeg_145.insert(LegMaturityMonthYear_145.getString());
      FIX::LegMaturityTime LegMaturityTime_145("TZTIMEONLY_657051116");
      noLegs_0_1_2.set(LegMaturityTime_145);
      InstrumentLeg_145.insert(LegMaturityTime_145.getString());
      FIX::LegOptAttribute LegOptAttribute_145('8');
      noLegs_0_1_2.set(LegOptAttribute_145);
      InstrumentLeg_145.insert(LegOptAttribute_145.getString());
      FIX::LegOptionRatio LegOptionRatio_145;
      LegOptionRatio_145.setString("18412954");
      noLegs_0_1_2.set(LegOptionRatio_145);
      InstrumentLeg_145.insert(LegOptionRatio_145.getString());
      FIX::LegPool LegPool_145("STRING_332076753");
      noLegs_0_1_2.set(LegPool_145);
      InstrumentLeg_145.insert(LegPool_145.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_145("STRING_1336622485");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_145);
      InstrumentLeg_145.insert(LegPriceUnitOfMeasure_145.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_145;
      LegPriceUnitOfMeasureQty_145.setString("17598779");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_145);
      InstrumentLeg_145.insert(LegPriceUnitOfMeasureQty_145.getString());
      FIX::LegProduct LegProduct_145(1425939082);
      noLegs_0_1_2.set(LegProduct_145);
      InstrumentLeg_145.insert(LegProduct_145.getString());
      FIX::LegPutOrCall LegPutOrCall_145(1888716343);
      noLegs_0_1_2.set(LegPutOrCall_145);
      InstrumentLeg_145.insert(LegPutOrCall_145.getString());
      FIX::LegRatioQty LegRatioQty_145;
      LegRatioQty_145.setString("1267164");
      noLegs_0_1_2.set(LegRatioQty_145);
      InstrumentLeg_145.insert(LegRatioQty_145.getString());
      FIX::LegRedemptionDate LegRedemptionDate_145("LOCALMKTDATE_871069352");
      noLegs_0_1_2.set(LegRedemptionDate_145);
      InstrumentLeg_145.insert(LegRedemptionDate_145.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_145("STRING_2035077354");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_145);
      InstrumentLeg_145.insert(LegRepoCollateralSecurityType_145.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_145;
      LegRepurchaseRate_145.setString("12.610000");
      noLegs_0_1_2.set(LegRepurchaseRate_145);
      InstrumentLeg_145.insert(LegRepurchaseRate_145.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_145(1518792894);
      noLegs_0_1_2.set(LegRepurchaseTerm_145);
      InstrumentLeg_145.insert(LegRepurchaseTerm_145.getString());
      FIX::LegSecurityDesc LegSecurityDesc_145("STRING_225925327");
      noLegs_0_1_2.set(LegSecurityDesc_145);
      InstrumentLeg_145.insert(LegSecurityDesc_145.getString());
      FIX::LegSecurityExchange LegSecurityExchange_145("EXCHANGE_107013533");
      noLegs_0_1_2.set(LegSecurityExchange_145);
      InstrumentLeg_145.insert(LegSecurityExchange_145.getString());
      FIX::LegSecurityID LegSecurityID_145("STRING_264862391");
      noLegs_0_1_2.set(LegSecurityID_145);
      InstrumentLeg_145.insert(LegSecurityID_145.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_145("STRING_1263128359");
      noLegs_0_1_2.set(LegSecurityIDSource_145);
      InstrumentLeg_145.insert(LegSecurityIDSource_145.getString());
      FIX::LegSecuritySubType LegSecuritySubType_145("STRING_1976757414");
      noLegs_0_1_2.set(LegSecuritySubType_145);
      InstrumentLeg_145.insert(LegSecuritySubType_145.getString());
      FIX::LegSecurityType LegSecurityType_145("STRING_102255792");
      noLegs_0_1_2.set(LegSecurityType_145);
      InstrumentLeg_145.insert(LegSecurityType_145.getString());
      FIX::LegSide LegSide_145('8');
      noLegs_0_1_2.set(LegSide_145);
      InstrumentLeg_145.insert(LegSide_145.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_145("STRING_1178453665");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_145);
      InstrumentLeg_145.insert(LegStateOrProvinceOfIssue_145.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_145("CAN");
      noLegs_0_1_2.set(LegStrikeCurrency_145);
      InstrumentLeg_145.insert(LegStrikeCurrency_145.getString());
      FIX::LegStrikePrice LegStrikePrice_145;
      LegStrikePrice_145.setString("20089922");
      noLegs_0_1_2.set(LegStrikePrice_145);
      InstrumentLeg_145.insert(LegStrikePrice_145.getString());
      FIX::LegSymbol LegSymbol_145("STRING_2118564065");
      noLegs_0_1_2.set(LegSymbol_145);
      InstrumentLeg_145.insert(LegSymbol_145.getString());
      FIX::LegSymbolSfx LegSymbolSfx_145("STRING_893615456");
      noLegs_0_1_2.set(LegSymbolSfx_145);
      InstrumentLeg_145.insert(LegSymbolSfx_145.getString());
      FIX::LegTimeUnit LegTimeUnit_145("STRING_937748340");
      noLegs_0_1_2.set(LegTimeUnit_145);
      InstrumentLeg_145.insert(LegTimeUnit_145.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_145("STRING_321915689");
      noLegs_0_1_2.set(LegUnitOfMeasure_145);
      InstrumentLeg_145.insert(LegUnitOfMeasure_145.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_145;
      LegUnitOfMeasureQty_145.setString("3441663");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_145);
      InstrumentLeg_145.insert(LegUnitOfMeasureQty_145.getString());
      all_values.push_back(InstrumentLeg_145);
      all_compo_names.insert("InstrumentLeg");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_281;
        FIX::LegSecurityAltID LegSecurityAltID_281("STRING_509272084");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_281);
        LegSecAltIDGrp_NoLegSecurityAltID_281.insert(LegSecurityAltID_281.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_281("STRING_1001217430");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_281);
        LegSecAltIDGrp_NoLegSecurityAltID_281.insert(LegSecurityAltIDSource_281.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_281);
        all_compo_names.insert("LegSecAltIDGrp.NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_22;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_22("GBP");
      noLegs_0_1_2.set(LegBenchmarkCurveCurrency_22);
      LegBenchmarkCurveData_22.insert(LegBenchmarkCurveCurrency_22.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_22("STRING_1333294183");
      noLegs_0_1_2.set(LegBenchmarkCurveName_22);
      LegBenchmarkCurveData_22.insert(LegBenchmarkCurveName_22.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_22("STRING_1841287212");
      noLegs_0_1_2.set(LegBenchmarkCurvePoint_22);
      LegBenchmarkCurveData_22.insert(LegBenchmarkCurvePoint_22.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_22;
      LegBenchmarkPrice_22.setString("19629618");
      noLegs_0_1_2.set(LegBenchmarkPrice_22);
      LegBenchmarkCurveData_22.insert(LegBenchmarkPrice_22.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_22(611749617);
      noLegs_0_1_2.set(LegBenchmarkPriceType_22);
      LegBenchmarkCurveData_22.insert(LegBenchmarkPriceType_22.getString());
      all_values.push_back(LegBenchmarkCurveData_22);
      all_compo_names.insert("LegBenchmarkCurveData");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_62;
        FIX::LegStipulationType LegStipulationType_62("STRING_2089678331");
        noLegStipulations_0_2_2_0.set(LegStipulationType_62);
        LegStipulations_NoLegStipulations_62.insert(LegStipulationType_62.getString());
        FIX::LegStipulationValue LegStipulationValue_62("STRING_1482818970");
        noLegStipulations_0_2_2_0.set(LegStipulationValue_62);
        LegStipulations_NoLegStipulations_62.insert(LegStipulationValue_62.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_62);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_63;
        FIX::LegStipulationType LegStipulationType_63("STRING_1470113613");
        noLegStipulations_0_2_2_1.set(LegStipulationType_63);
        LegStipulations_NoLegStipulations_63.insert(LegStipulationType_63.getString());
        FIX::LegStipulationValue LegStipulationValue_63("STRING_1964395944");
        noLegStipulations_0_2_2_1.set(LegStipulationValue_63);
        LegStipulations_NoLegStipulations_63.insert(LegStipulationValue_63.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_63);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_64;
        FIX::LegStipulationType LegStipulationType_64("STRING_854128216");
        noLegStipulations_0_2_2_2.set(LegStipulationType_64);
        LegStipulations_NoLegStipulations_64.insert(LegStipulationType_64.getString());
        FIX::LegStipulationValue LegStipulationValue_64("STRING_1696038940");
        noLegStipulations_0_2_2_2.set(LegStipulationValue_64);
        LegStipulations_NoLegStipulations_64.insert(LegStipulationValue_64.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_64);
        all_compo_names.insert("LegStipulations.NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_15;
    FIX::ExpirationCycle ExpirationCycle_16(2);
    noRelatedSym_0_0.set(ExpirationCycle_16);
    BaseTradingRules_15.insert(ExpirationCycle_16.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_15(3);
    noRelatedSym_0_0.set(ImpliedMarketIndicator_15);
    BaseTradingRules_15.insert(ImpliedMarketIndicator_15.getString());
    FIX::MaxPriceVariation MaxPriceVariation_15;
    MaxPriceVariation_15.setString("8116836");
    noRelatedSym_0_0.set(MaxPriceVariation_15);
    BaseTradingRules_15.insert(MaxPriceVariation_15.getString());
    FIX::MaxTradeVol MaxTradeVol_15;
    MaxTradeVol_15.setString("19006832");
    noRelatedSym_0_0.set(MaxTradeVol_15);
    BaseTradingRules_15.insert(MaxTradeVol_15.getString());
    FIX::MinTradeVol MinTradeVol_15;
    MinTradeVol_15.setString("12212464");
    noRelatedSym_0_0.set(MinTradeVol_15);
    BaseTradingRules_15.insert(MinTradeVol_15.getString());
    FIX::MultilegModel MultilegModel_17(2);
    noRelatedSym_0_0.set(MultilegModel_17);
    BaseTradingRules_15.insert(MultilegModel_17.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_17(2);
    noRelatedSym_0_0.set(MultilegPriceMethod_17);
    BaseTradingRules_15.insert(MultilegPriceMethod_17.getString());
    FIX::PriceType PriceType_49(19);
    noRelatedSym_0_0.set(PriceType_49);
    BaseTradingRules_15.insert(PriceType_49.getString());
    FIX::RoundLot RoundLot_15;
    RoundLot_15.setString("11779313");
    noRelatedSym_0_0.set(RoundLot_15);
    BaseTradingRules_15.insert(RoundLot_15.getString());
    FIX::TradingCurrency TradingCurrency_15("GBP");
    noRelatedSym_0_0.set(TradingCurrency_15);
    BaseTradingRules_15.insert(TradingCurrency_15.getString());
    all_values.push_back(BaseTradingRules_15);
    all_compo_names.insert("BaseTradingRules");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_30;
      FIX::LotType LotType_34('1');
      noLotTypeRules_0_1_0.set(LotType_34);
      LotTypeRules_NoLotTypeRules_30.insert(LotType_34.getString());
      FIX::MinLotSize MinLotSize_30;
      MinLotSize_30.setString("12654889");
      noLotTypeRules_0_1_0.set(MinLotSize_30);
      LotTypeRules_NoLotTypeRules_30.insert(MinLotSize_30.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_30);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_31;
      FIX::LotType LotType_35('1');
      noLotTypeRules_0_1_1.set(LotType_35);
      LotTypeRules_NoLotTypeRules_31.insert(LotType_35.getString());
      FIX::MinLotSize MinLotSize_31;
      MinLotSize_31.setString("13515511");
      noLotTypeRules_0_1_1.set(MinLotSize_31);
      LotTypeRules_NoLotTypeRules_31.insert(MinLotSize_31.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_31);
      all_compo_names.insert("LotTypeRules.NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_15;
    FIX::HighLimitPrice HighLimitPrice_15;
    HighLimitPrice_15.setString("17747610");
    noRelatedSym_0_0.set(HighLimitPrice_15);
    PriceLimits_15.insert(HighLimitPrice_15.getString());
    FIX::LowLimitPrice LowLimitPrice_15;
    LowLimitPrice_15.setString("12694469");
    noRelatedSym_0_0.set(LowLimitPrice_15);
    PriceLimits_15.insert(LowLimitPrice_15.getString());
    FIX::PriceLimitType PriceLimitType_15(0);
    noRelatedSym_0_0.set(PriceLimitType_15);
    PriceLimits_15.insert(PriceLimitType_15.getString());
    FIX::TradingReferencePrice TradingReferencePrice_15;
    TradingReferencePrice_15.setString("19778449");
    noRelatedSym_0_0.set(TradingReferencePrice_15);
    PriceLimits_15.insert(TradingReferencePrice_15.getString());
    all_values.push_back(PriceLimits_15);
    all_compo_names.insert("PriceLimits");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_32;
      FIX::EndTickPriceRange EndTickPriceRange_32;
      EndTickPriceRange_32.setString("15500194");
      noTickRules_0_1_0.set(EndTickPriceRange_32);
      TickRules_NoTickRules_32.insert(EndTickPriceRange_32.getString());
      FIX::StartTickPriceRange StartTickPriceRange_32;
      StartTickPriceRange_32.setString("17933231");
      noTickRules_0_1_0.set(StartTickPriceRange_32);
      TickRules_NoTickRules_32.insert(StartTickPriceRange_32.getString());
      FIX::TickIncrement TickIncrement_32;
      TickIncrement_32.setString("10670070");
      noTickRules_0_1_0.set(TickIncrement_32);
      TickRules_NoTickRules_32.insert(TickIncrement_32.getString());
      FIX::TickRuleType TickRuleType_32(2);
      noTickRules_0_1_0.set(TickRuleType_32);
      TickRules_NoTickRules_32.insert(TickRuleType_32.getString());
      all_values.push_back(TickRules_NoTickRules_32);
      all_compo_names.insert("TickRules.NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_33;
      FIX::EndTickPriceRange EndTickPriceRange_33;
      EndTickPriceRange_33.setString("17355178");
      noTickRules_0_1_1.set(EndTickPriceRange_33);
      TickRules_NoTickRules_33.insert(EndTickPriceRange_33.getString());
      FIX::StartTickPriceRange StartTickPriceRange_33;
      StartTickPriceRange_33.setString("4023423");
      noTickRules_0_1_1.set(StartTickPriceRange_33);
      TickRules_NoTickRules_33.insert(StartTickPriceRange_33.getString());
      FIX::TickIncrement TickIncrement_33;
      TickIncrement_33.setString("3076856");
      noTickRules_0_1_1.set(TickIncrement_33);
      TickRules_NoTickRules_33.insert(TickIncrement_33.getString());
      FIX::TickRuleType TickRuleType_33(1);
      noTickRules_0_1_1.set(TickRuleType_33);
      TickRules_NoTickRules_33.insert(TickRuleType_33.getString());
      all_values.push_back(TickRules_NoTickRules_33);
      all_compo_names.insert("TickRules.NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_26;
      FIX::NestedInstrAttribType NestedInstrAttribType_26(2003724597);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_26);
      NestedInstrumentAttribute_NoNestedInstrAttrib_26.insert(NestedInstrAttribType_26.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_26("STRING_1476355975");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_26);
      NestedInstrumentAttribute_NoNestedInstrAttrib_26.insert(NestedInstrAttribValue_26.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_26);
      all_compo_names.insert("NestedInstrumentAttribute.NoNestedInstrAttrib");

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_27;
      FIX::TradingSessionID TradingSessionID_110("STRING_5");
      noTradingSessionRules_0_1_0.set(TradingSessionID_110);
      TradingSessionRulesGrp_NoTradingSessionRules_27.insert(TradingSessionID_110.getString());
      FIX::TradingSessionSubID TradingSessionSubID_110("STRING_7");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_110);
      TradingSessionRulesGrp_NoTradingSessionRules_27.insert(TradingSessionSubID_110.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_27);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_56;
        FIX::ExecInstValue ExecInstValue_56('2');
        noExecInstRules_0_0_2_0.set(ExecInstValue_56);
        ExecInstRules_NoExecInstRules_56.insert(ExecInstValue_56.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_56);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_51;
        FIX::MDBookType MDBookType_53(1);
        noMDFeedTypes_0_0_2_0.set(MDBookType_53);
        MarketDataFeedTypes_NoMDFeedTypes_51.insert(MDBookType_53.getString());
        FIX::MDFeedType MDFeedType_53("STRING_1379720884");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_53);
        MarketDataFeedTypes_NoMDFeedTypes_51.insert(MDFeedType_53.getString());
        FIX::MarketDepth MarketDepth_54(806887060);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_54);
        MarketDataFeedTypes_NoMDFeedTypes_51.insert(MarketDepth_54.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_51);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_55;
        FIX::MatchAlgorithm MatchAlgorithm_55("STRING_1303784046");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_55);
        MatchRules_NoMatchRules_55.insert(MatchAlgorithm_55.getString());
        FIX::MatchType MatchType_60("STRING_A5");
        noMatchRules_0_0_2_0.set(MatchType_60);
        MatchRules_NoMatchRules_55.insert(MatchType_60.getString());
        all_values.push_back(MatchRules_NoMatchRules_55);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_56;
        FIX::MatchAlgorithm MatchAlgorithm_56("STRING_335811808");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_56);
        MatchRules_NoMatchRules_56.insert(MatchAlgorithm_56.getString());
        FIX::MatchType MatchType_61("STRING_A3");
        noMatchRules_0_0_2_1.set(MatchType_61);
        MatchRules_NoMatchRules_56.insert(MatchType_61.getString());
        all_values.push_back(MatchRules_NoMatchRules_56);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_57;
        FIX::MatchAlgorithm MatchAlgorithm_57("STRING_1741864771");
        noMatchRules_0_0_2_2.set(MatchAlgorithm_57);
        MatchRules_NoMatchRules_57.insert(MatchAlgorithm_57.getString());
        FIX::MatchType MatchType_62("STRING_S2");
        noMatchRules_0_0_2_2.set(MatchType_62);
        MatchRules_NoMatchRules_57.insert(MatchType_62.getString());
        all_values.push_back(MatchRules_NoMatchRules_57);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_53;
        FIX::OrdType OrdType_86('9');
        noOrdTypeRules_0_0_2_0.set(OrdType_86);
        OrdTypeRules_NoOrdTypeRules_53.insert(OrdType_86.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_53);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_54;
        FIX::OrdType OrdType_87('3');
        noOrdTypeRules_0_0_2_1.set(OrdType_87);
        OrdTypeRules_NoOrdTypeRules_54.insert(OrdType_87.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_54);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_55;
        FIX::TimeInForce TimeInForce_68('7');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_68);
        TimeInForceRules_NoTimeInForceRules_55.insert(TimeInForce_68.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_55);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_56;
        FIX::TimeInForce TimeInForce_69('2');
        noTimeInForceRules_0_0_2_1.set(TimeInForce_69);
        TimeInForceRules_NoTimeInForceRules_56.insert(TimeInForce_69.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_56);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_57;
        FIX::TimeInForce TimeInForce_70('2');
        noTimeInForceRules_0_0_2_2.set(TimeInForce_70);
        TimeInForceRules_NoTimeInForceRules_57.insert(TimeInForce_70.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_57);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_28;
      FIX::TradingSessionID TradingSessionID_111("STRING_6");
      noTradingSessionRules_0_1_1.set(TradingSessionID_111);
      TradingSessionRulesGrp_NoTradingSessionRules_28.insert(TradingSessionID_111.getString());
      FIX::TradingSessionSubID TradingSessionSubID_111("STRING_1");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_111);
      TradingSessionRulesGrp_NoTradingSessionRules_28.insert(TradingSessionSubID_111.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_28);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_57;
        FIX::ExecInstValue ExecInstValue_57('2');
        noExecInstRules_0_1_2_0.set(ExecInstValue_57);
        ExecInstRules_NoExecInstRules_57.insert(ExecInstValue_57.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_57);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_58;
        FIX::ExecInstValue ExecInstValue_58('5');
        noExecInstRules_0_1_2_1.set(ExecInstValue_58);
        ExecInstRules_NoExecInstRules_58.insert(ExecInstValue_58.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_58);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_52;
        FIX::MDBookType MDBookType_54(3);
        noMDFeedTypes_0_1_2_0.set(MDBookType_54);
        MarketDataFeedTypes_NoMDFeedTypes_52.insert(MDBookType_54.getString());
        FIX::MDFeedType MDFeedType_54("STRING_2056110387");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_54);
        MarketDataFeedTypes_NoMDFeedTypes_52.insert(MDFeedType_54.getString());
        FIX::MarketDepth MarketDepth_55(1955548165);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_55);
        MarketDataFeedTypes_NoMDFeedTypes_52.insert(MarketDepth_55.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_52);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_53;
        FIX::MDBookType MDBookType_55(2);
        noMDFeedTypes_0_1_2_1.set(MDBookType_55);
        MarketDataFeedTypes_NoMDFeedTypes_53.insert(MDBookType_55.getString());
        FIX::MDFeedType MDFeedType_55("STRING_1138182310");
        noMDFeedTypes_0_1_2_1.set(MDFeedType_55);
        MarketDataFeedTypes_NoMDFeedTypes_53.insert(MDFeedType_55.getString());
        FIX::MarketDepth MarketDepth_56(1257288473);
        noMDFeedTypes_0_1_2_1.set(MarketDepth_56);
        MarketDataFeedTypes_NoMDFeedTypes_53.insert(MarketDepth_56.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_53);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_54;
        FIX::MDBookType MDBookType_56(3);
        noMDFeedTypes_0_1_2_2.set(MDBookType_56);
        MarketDataFeedTypes_NoMDFeedTypes_54.insert(MDBookType_56.getString());
        FIX::MDFeedType MDFeedType_56("STRING_1151907494");
        noMDFeedTypes_0_1_2_2.set(MDFeedType_56);
        MarketDataFeedTypes_NoMDFeedTypes_54.insert(MDFeedType_56.getString());
        FIX::MarketDepth MarketDepth_57(1531521656);
        noMDFeedTypes_0_1_2_2.set(MarketDepth_57);
        MarketDataFeedTypes_NoMDFeedTypes_54.insert(MarketDepth_57.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_54);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_58;
        FIX::MatchAlgorithm MatchAlgorithm_58("STRING_1958794554");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_58);
        MatchRules_NoMatchRules_58.insert(MatchAlgorithm_58.getString());
        FIX::MatchType MatchType_63("STRING_S2");
        noMatchRules_0_1_2_0.set(MatchType_63);
        MatchRules_NoMatchRules_58.insert(MatchType_63.getString());
        all_values.push_back(MatchRules_NoMatchRules_58);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_55;
        FIX::OrdType OrdType_88('7');
        noOrdTypeRules_0_1_2_0.set(OrdType_88);
        OrdTypeRules_NoOrdTypeRules_55.insert(OrdType_88.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_55);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_56;
        FIX::OrdType OrdType_89('4');
        noOrdTypeRules_0_1_2_1.set(OrdType_89);
        OrdTypeRules_NoOrdTypeRules_56.insert(OrdType_89.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_56);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_57;
        FIX::OrdType OrdType_90('2');
        noOrdTypeRules_0_1_2_2.set(OrdType_90);
        OrdTypeRules_NoOrdTypeRules_57.insert(OrdType_90.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_57);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_58;
        FIX::TimeInForce TimeInForce_71('6');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_71);
        TimeInForceRules_NoTimeInForceRules_58.insert(TimeInForce_71.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_58);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_59;
        FIX::TimeInForce TimeInForce_72('4');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_72);
        TimeInForceRules_NoTimeInForceRules_59.insert(TimeInForce_72.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_59);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_29;
      FIX::TradingSessionID TradingSessionID_112("STRING_2");
      noTradingSessionRules_0_1_2.set(TradingSessionID_112);
      TradingSessionRulesGrp_NoTradingSessionRules_29.insert(TradingSessionID_112.getString());
      FIX::TradingSessionSubID TradingSessionSubID_112("STRING_1");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_112);
      TradingSessionRulesGrp_NoTradingSessionRules_29.insert(TradingSessionSubID_112.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_29);
      all_compo_names.insert("TradingSessionRulesGrp.NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_59;
        FIX::ExecInstValue ExecInstValue_59('2');
        noExecInstRules_0_2_2_0.set(ExecInstValue_59);
        ExecInstRules_NoExecInstRules_59.insert(ExecInstValue_59.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_59);
        all_compo_names.insert("ExecInstRules.NoExecInstRules");

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_55;
        FIX::MDBookType MDBookType_57(3);
        noMDFeedTypes_0_2_2_0.set(MDBookType_57);
        MarketDataFeedTypes_NoMDFeedTypes_55.insert(MDBookType_57.getString());
        FIX::MDFeedType MDFeedType_57("STRING_1790440247");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_57);
        MarketDataFeedTypes_NoMDFeedTypes_55.insert(MDFeedType_57.getString());
        FIX::MarketDepth MarketDepth_58(1308294040);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_58);
        MarketDataFeedTypes_NoMDFeedTypes_55.insert(MarketDepth_58.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_55);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_56;
        FIX::MDBookType MDBookType_58(2);
        noMDFeedTypes_0_2_2_1.set(MDBookType_58);
        MarketDataFeedTypes_NoMDFeedTypes_56.insert(MDBookType_58.getString());
        FIX::MDFeedType MDFeedType_58("STRING_1788830725");
        noMDFeedTypes_0_2_2_1.set(MDFeedType_58);
        MarketDataFeedTypes_NoMDFeedTypes_56.insert(MDFeedType_58.getString());
        FIX::MarketDepth MarketDepth_59(1888048452);
        noMDFeedTypes_0_2_2_1.set(MarketDepth_59);
        MarketDataFeedTypes_NoMDFeedTypes_56.insert(MarketDepth_59.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_56);
        all_compo_names.insert("MarketDataFeedTypes.NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_59;
        FIX::MatchAlgorithm MatchAlgorithm_59("STRING_1643462152");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_59);
        MatchRules_NoMatchRules_59.insert(MatchAlgorithm_59.getString());
        FIX::MatchType MatchType_64("STRING_1");
        noMatchRules_0_2_2_0.set(MatchType_64);
        MatchRules_NoMatchRules_59.insert(MatchType_64.getString());
        all_values.push_back(MatchRules_NoMatchRules_59);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_60;
        FIX::MatchAlgorithm MatchAlgorithm_60("STRING_308633190");
        noMatchRules_0_2_2_1.set(MatchAlgorithm_60);
        MatchRules_NoMatchRules_60.insert(MatchAlgorithm_60.getString());
        FIX::MatchType MatchType_65("STRING_A4");
        noMatchRules_0_2_2_1.set(MatchType_65);
        MatchRules_NoMatchRules_60.insert(MatchType_65.getString());
        all_values.push_back(MatchRules_NoMatchRules_60);
        all_compo_names.insert("MatchRules.NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_58;
        FIX::OrdType OrdType_91('Q');
        noOrdTypeRules_0_2_2_0.set(OrdType_91);
        OrdTypeRules_NoOrdTypeRules_58.insert(OrdType_91.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_58);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_59;
        FIX::OrdType OrdType_92('1');
        noOrdTypeRules_0_2_2_1.set(OrdType_92);
        OrdTypeRules_NoOrdTypeRules_59.insert(OrdType_92.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_59);
        all_compo_names.insert("OrdTypeRules.NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_60;
        FIX::TimeInForce TimeInForce_73('1');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_73);
        TimeInForceRules_NoTimeInForceRules_60.insert(TimeInForce_73.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_60);
        all_compo_names.insert("TimeInForceRules.NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_33;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_33("JPY");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkCurveCurrency_33.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_33("STRING_SWAP");
    noRelatedSym_0_0.set(BenchmarkCurveName_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkCurveName_33.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_33("STRING_1959829719");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkCurvePoint_33.getString());
    FIX::BenchmarkPrice BenchmarkPrice_33;
    BenchmarkPrice_33.setString("19522167");
    noRelatedSym_0_0.set(BenchmarkPrice_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkPrice_33.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_33(341976797);
    noRelatedSym_0_0.set(BenchmarkPriceType_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkPriceType_33.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_33("STRING_497242785");
    noRelatedSym_0_0.set(BenchmarkSecurityID_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkSecurityID_33.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_33("STRING_1748222446");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_33);
    SpreadOrBenchmarkCurveData_33.insert(BenchmarkSecurityIDSource_33.getString());
    FIX::Spread Spread_33;
    Spread_33.setString("12427223");
    noRelatedSym_0_0.set(Spread_33);
    SpreadOrBenchmarkCurveData_33.insert(Spread_33.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_33);
    all_compo_names.insert("SpreadOrBenchmarkCurveData");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_55;
      FIX::StipulationType StipulationType_55("STRING_HAIRCUT");
      noStipulations_0_1_0.set(StipulationType_55);
      Stipulations_NoStipulations_55.insert(StipulationType_55.getString());
      FIX::StipulationValue StipulationValue_55("STRING_1936918375");
      noStipulations_0_1_0.set(StipulationValue_55);
      Stipulations_NoStipulations_55.insert(StipulationValue_55.getString());
      all_values.push_back(Stipulations_NoStipulations_55);
      all_compo_names.insert("Stipulations.NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_24;
      FIX::EndStrikePxRange EndStrikePxRange_24;
      EndStrikePxRange_24.setString("7995932");
      noStrikeRules_0_1_0.set(EndStrikePxRange_24);
      StrikeRules_NoStrikeRules_24.insert(EndStrikePxRange_24.getString());
      FIX::StartStrikePxRange StartStrikePxRange_24;
      StartStrikePxRange_24.setString("20704045");
      noStrikeRules_0_1_0.set(StartStrikePxRange_24);
      StrikeRules_NoStrikeRules_24.insert(StartStrikePxRange_24.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_24(558638398);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_24);
      StrikeRules_NoStrikeRules_24.insert(StrikeExerciseStyle_24.getString());
      FIX::StrikeIncrement StrikeIncrement_24;
      StrikeIncrement_24.setString("4425498");
      noStrikeRules_0_1_0.set(StrikeIncrement_24);
      StrikeRules_NoStrikeRules_24.insert(StrikeIncrement_24.getString());
      FIX::StrikeRuleID StrikeRuleID_24("STRING_1231214894");
      noStrikeRules_0_1_0.set(StrikeRuleID_24);
      StrikeRules_NoStrikeRules_24.insert(StrikeRuleID_24.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_24);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_52;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_52("MONTHYEAR_83896903");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_52);
        MaturityRules_NoMaturityRules_52.insert(EndMaturityMonthYear_52.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_52(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_52);
        MaturityRules_NoMaturityRules_52.insert(MaturityMonthYearFormat_52.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_52(1979688783);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_52);
        MaturityRules_NoMaturityRules_52.insert(MaturityMonthYearIncrement_52.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_52(0);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_52);
        MaturityRules_NoMaturityRules_52.insert(MaturityMonthYearIncrementUnits_52.getString());
        FIX::MaturityRuleID MaturityRuleID_52("STRING_620971242");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_52);
        MaturityRules_NoMaturityRules_52.insert(MaturityRuleID_52.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_52("MONTHYEAR_140838325");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_52);
        MaturityRules_NoMaturityRules_52.insert(StartMaturityMonthYear_52.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_52);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_53;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_53("MONTHYEAR_1745893587");
        noMaturityRules_0_0_2_1.set(EndMaturityMonthYear_53);
        MaturityRules_NoMaturityRules_53.insert(EndMaturityMonthYear_53.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_53(2);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearFormat_53);
        MaturityRules_NoMaturityRules_53.insert(MaturityMonthYearFormat_53.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_53(1706759988);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrement_53);
        MaturityRules_NoMaturityRules_53.insert(MaturityMonthYearIncrement_53.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_53(3);
        noMaturityRules_0_0_2_1.set(MaturityMonthYearIncrementUnits_53);
        MaturityRules_NoMaturityRules_53.insert(MaturityMonthYearIncrementUnits_53.getString());
        FIX::MaturityRuleID MaturityRuleID_53("STRING_1200142797");
        noMaturityRules_0_0_2_1.set(MaturityRuleID_53);
        MaturityRules_NoMaturityRules_53.insert(MaturityRuleID_53.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_53("MONTHYEAR_509236011");
        noMaturityRules_0_0_2_1.set(StartMaturityMonthYear_53);
        MaturityRules_NoMaturityRules_53.insert(StartMaturityMonthYear_53.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_53);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_54;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_54("MONTHYEAR_1040752908");
        noMaturityRules_0_0_2_2.set(EndMaturityMonthYear_54);
        MaturityRules_NoMaturityRules_54.insert(EndMaturityMonthYear_54.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_54(0);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearFormat_54);
        MaturityRules_NoMaturityRules_54.insert(MaturityMonthYearFormat_54.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_54(2061040165);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrement_54);
        MaturityRules_NoMaturityRules_54.insert(MaturityMonthYearIncrement_54.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_54(3);
        noMaturityRules_0_0_2_2.set(MaturityMonthYearIncrementUnits_54);
        MaturityRules_NoMaturityRules_54.insert(MaturityMonthYearIncrementUnits_54.getString());
        FIX::MaturityRuleID MaturityRuleID_54("STRING_607984545");
        noMaturityRules_0_0_2_2.set(MaturityRuleID_54);
        MaturityRules_NoMaturityRules_54.insert(MaturityRuleID_54.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_54("MONTHYEAR_255533314");
        noMaturityRules_0_0_2_2.set(StartMaturityMonthYear_54);
        MaturityRules_NoMaturityRules_54.insert(StartMaturityMonthYear_54.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_54);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_25;
      FIX::EndStrikePxRange EndStrikePxRange_25;
      EndStrikePxRange_25.setString("13503417");
      noStrikeRules_0_1_1.set(EndStrikePxRange_25);
      StrikeRules_NoStrikeRules_25.insert(EndStrikePxRange_25.getString());
      FIX::StartStrikePxRange StartStrikePxRange_25;
      StartStrikePxRange_25.setString("2087233");
      noStrikeRules_0_1_1.set(StartStrikePxRange_25);
      StrikeRules_NoStrikeRules_25.insert(StartStrikePxRange_25.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_25(1498255627);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_25);
      StrikeRules_NoStrikeRules_25.insert(StrikeExerciseStyle_25.getString());
      FIX::StrikeIncrement StrikeIncrement_25;
      StrikeIncrement_25.setString("10789743");
      noStrikeRules_0_1_1.set(StrikeIncrement_25);
      StrikeRules_NoStrikeRules_25.insert(StrikeIncrement_25.getString());
      FIX::StrikeRuleID StrikeRuleID_25("STRING_1056064791");
      noStrikeRules_0_1_1.set(StrikeRuleID_25);
      StrikeRules_NoStrikeRules_25.insert(StrikeRuleID_25.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_25);
      all_compo_names.insert("StrikeRules.NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_55;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_55("MONTHYEAR_1188231094");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_55);
        MaturityRules_NoMaturityRules_55.insert(EndMaturityMonthYear_55.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_55(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_55);
        MaturityRules_NoMaturityRules_55.insert(MaturityMonthYearFormat_55.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_55(1210611207);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_55);
        MaturityRules_NoMaturityRules_55.insert(MaturityMonthYearIncrement_55.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_55(0);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_55);
        MaturityRules_NoMaturityRules_55.insert(MaturityMonthYearIncrementUnits_55.getString());
        FIX::MaturityRuleID MaturityRuleID_55("STRING_150724196");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_55);
        MaturityRules_NoMaturityRules_55.insert(MaturityRuleID_55.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_55("MONTHYEAR_294342453");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_55);
        MaturityRules_NoMaturityRules_55.insert(StartMaturityMonthYear_55.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_55);
        all_compo_names.insert("MaturityRules.NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_139;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_139("DATA_234621099");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_139);
      UnderlyingInstrument_139.insert(EncodedUnderlyingIssuer_139.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_139(1266122152);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_139);
      UnderlyingInstrument_139.insert(EncodedUnderlyingIssuerLen_139.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_139("DATA_910711089");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_139);
      UnderlyingInstrument_139.insert(EncodedUnderlyingSecurityDesc_139.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_139(1961980155);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_139);
      UnderlyingInstrument_139.insert(EncodedUnderlyingSecurityDescLen_139.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_139;
      UnderlyingAdjustedQuantity_139.setString("18870933");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_139);
      UnderlyingInstrument_139.insert(UnderlyingAdjustedQuantity_139.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_139;
      UnderlyingAllocationPercent_139.setString("94.140000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_139);
      UnderlyingInstrument_139.insert(UnderlyingAllocationPercent_139.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_139;
      UnderlyingAttachmentPoint_139.setString("0.950000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_139);
      UnderlyingInstrument_139.insert(UnderlyingAttachmentPoint_139.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_139("STRING_1147954843");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_139);
      UnderlyingInstrument_139.insert(UnderlyingCFICode_139.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_139("STRING_610825754");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_139);
      UnderlyingInstrument_139.insert(UnderlyingCPProgram_139.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_139("STRING_1901680122");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_139);
      UnderlyingInstrument_139.insert(UnderlyingCPRegType_139.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_139;
      UnderlyingCapValue_139.setString("2006139");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_139);
      UnderlyingInstrument_139.insert(UnderlyingCapValue_139.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_139;
      UnderlyingCashAmount_139.setString("11200617");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_139);
      UnderlyingInstrument_139.insert(UnderlyingCashAmount_139.getString());
      FIX::UnderlyingCashType UnderlyingCashType_139("STRING_FIXED");
      noUnderlyings_0_1_0.set(UnderlyingCashType_139);
      UnderlyingInstrument_139.insert(UnderlyingCashType_139.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_139;
      UnderlyingContractMultiplier_139.setString("10038653");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_139);
      UnderlyingInstrument_139.insert(UnderlyingContractMultiplier_139.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_139(1033618282);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_139);
      UnderlyingInstrument_139.insert(UnderlyingContractMultiplierUnit_139.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_139("COUNTRY_1648048362");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_139);
      UnderlyingInstrument_139.insert(UnderlyingCountryOfIssue_139.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_139("LOCALMKTDATE_1611849942");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_139);
      UnderlyingInstrument_139.insert(UnderlyingCouponPaymentDate_139.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_139;
      UnderlyingCouponRate_139.setString("15.960000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_139);
      UnderlyingInstrument_139.insert(UnderlyingCouponRate_139.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_139("STRING_850906478");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_139);
      UnderlyingInstrument_139.insert(UnderlyingCreditRating_139.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_139("EUR");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_139);
      UnderlyingInstrument_139.insert(UnderlyingCurrency_139.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_139;
      UnderlyingCurrentValue_139.setString("19298808");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_139);
      UnderlyingInstrument_139.insert(UnderlyingCurrentValue_139.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_139;
      UnderlyingDetachmentPoint_139.setString("44.290000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_139);
      UnderlyingInstrument_139.insert(UnderlyingDetachmentPoint_139.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_139;
      UnderlyingDirtyPrice_139.setString("19276139");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_139);
      UnderlyingInstrument_139.insert(UnderlyingDirtyPrice_139.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_139;
      UnderlyingEndPrice_139.setString("9706283");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_139);
      UnderlyingInstrument_139.insert(UnderlyingEndPrice_139.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_139;
      UnderlyingEndValue_139.setString("4373287");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_139);
      UnderlyingInstrument_139.insert(UnderlyingEndValue_139.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_139(990741488);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_139);
      UnderlyingInstrument_139.insert(UnderlyingExerciseStyle_139.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_139;
      UnderlyingFXRate_139.setString("5700141");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_139);
      UnderlyingInstrument_139.insert(UnderlyingFXRate_139.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_139('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_139);
      UnderlyingInstrument_139.insert(UnderlyingFXRateCalc_139.getString());
      FIX::UnderlyingFactor UnderlyingFactor_139;
      UnderlyingFactor_139.setString("12850839");
      noUnderlyings_0_1_0.set(UnderlyingFactor_139);
      UnderlyingInstrument_139.insert(UnderlyingFactor_139.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_139(1648520118);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_139);
      UnderlyingInstrument_139.insert(UnderlyingFlowScheduleType_139.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_139("STRING_822674094");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_139);
      UnderlyingInstrument_139.insert(UnderlyingInstrRegistry_139.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_139("LOCALMKTDATE_403722446");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_139);
      UnderlyingInstrument_139.insert(UnderlyingIssueDate_139.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_139("STRING_411747559");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_139);
      UnderlyingInstrument_139.insert(UnderlyingIssuer_139.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_139("STRING_637170602");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_139);
      UnderlyingInstrument_139.insert(UnderlyingLocaleOfIssue_139.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_139("LOCALMKTDATE_143332192");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_139);
      UnderlyingInstrument_139.insert(UnderlyingMaturityDate_139.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_139("MONTHYEAR_1463296973");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_139);
      UnderlyingInstrument_139.insert(UnderlyingMaturityMonthYear_139.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_139("TZTIMEONLY_50077049");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_139);
      UnderlyingInstrument_139.insert(UnderlyingMaturityTime_139.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_139;
      UnderlyingNotionalPercentageOutstanding_139.setString("70.360000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_139);
      UnderlyingInstrument_139.insert(UnderlyingNotionalPercentageOutstanding_139.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_139('2');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_139);
      UnderlyingInstrument_139.insert(UnderlyingOptAttribute_139.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_139;
      UnderlyingOriginalNotionalPercentageOutstanding_139.setString("71.710000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_139);
      UnderlyingInstrument_139.insert(UnderlyingOriginalNotionalPercentageOutstanding_139.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_139("STRING_1491901029");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_139);
      UnderlyingInstrument_139.insert(UnderlyingPriceUnitOfMeasure_139.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_139;
      UnderlyingPriceUnitOfMeasureQty_139.setString("10467008");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_139);
      UnderlyingInstrument_139.insert(UnderlyingPriceUnitOfMeasureQty_139.getString());
      FIX::UnderlyingProduct UnderlyingProduct_139(599222906);
      noUnderlyings_0_1_0.set(UnderlyingProduct_139);
      UnderlyingInstrument_139.insert(UnderlyingProduct_139.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_139(348282778);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_139);
      UnderlyingInstrument_139.insert(UnderlyingPutOrCall_139.getString());
      FIX::UnderlyingPx UnderlyingPx_139;
      UnderlyingPx_139.setString("20803191");
      noUnderlyings_0_1_0.set(UnderlyingPx_139);
      UnderlyingInstrument_139.insert(UnderlyingPx_139.getString());
      FIX::UnderlyingQty UnderlyingQty_139;
      UnderlyingQty_139.setString("997876");
      noUnderlyings_0_1_0.set(UnderlyingQty_139);
      UnderlyingInstrument_139.insert(UnderlyingQty_139.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_139("LOCALMKTDATE_1960132720");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_139);
      UnderlyingInstrument_139.insert(UnderlyingRedemptionDate_139.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_139("STRING_1221987074");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_139);
      UnderlyingInstrument_139.insert(UnderlyingRepoCollateralSecurityType_139.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_139;
      UnderlyingRepurchaseRate_139.setString("40.980000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_139);
      UnderlyingInstrument_139.insert(UnderlyingRepurchaseRate_139.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_139(1633222357);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_139);
      UnderlyingInstrument_139.insert(UnderlyingRepurchaseTerm_139.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_139("STRING_1861910649");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_139);
      UnderlyingInstrument_139.insert(UnderlyingRestructuringType_139.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_139("STRING_733091324");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_139);
      UnderlyingInstrument_139.insert(UnderlyingSecurityDesc_139.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_139("EXCHANGE_214893138");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_139);
      UnderlyingInstrument_139.insert(UnderlyingSecurityExchange_139.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_139("STRING_1642040930");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_139);
      UnderlyingInstrument_139.insert(UnderlyingSecurityID_139.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_139("STRING_1703719644");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_139);
      UnderlyingInstrument_139.insert(UnderlyingSecurityIDSource_139.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_139("STRING_652221937");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_139);
      UnderlyingInstrument_139.insert(UnderlyingSecuritySubType_139.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_139("STRING_485298770");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_139);
      UnderlyingInstrument_139.insert(UnderlyingSecurityType_139.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_139("STRING_126250160");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_139);
      UnderlyingInstrument_139.insert(UnderlyingSeniority_139.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_139("STRING_1240274932");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_139);
      UnderlyingInstrument_139.insert(UnderlyingSettlMethod_139.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_139(5);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_139);
      UnderlyingInstrument_139.insert(UnderlyingSettlementType_139.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_139;
      UnderlyingStartValue_139.setString("17747702");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_139);
      UnderlyingInstrument_139.insert(UnderlyingStartValue_139.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_139("STRING_2062949027");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_139);
      UnderlyingInstrument_139.insert(UnderlyingStateOrProvinceOfIssue_139.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_139("EUR");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_139);
      UnderlyingInstrument_139.insert(UnderlyingStrikeCurrency_139.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_139;
      UnderlyingStrikePrice_139.setString("5526359");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_139);
      UnderlyingInstrument_139.insert(UnderlyingStrikePrice_139.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_139("STRING_169953703");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_139);
      UnderlyingInstrument_139.insert(UnderlyingSymbol_139.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_139("STRING_1502331162");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_139);
      UnderlyingInstrument_139.insert(UnderlyingSymbolSfx_139.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_139("STRING_602713030");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_139);
      UnderlyingInstrument_139.insert(UnderlyingTimeUnit_139.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_139("STRING_1461240739");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_139);
      UnderlyingInstrument_139.insert(UnderlyingUnitOfMeasure_139.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_139;
      UnderlyingUnitOfMeasureQty_139.setString("14289702");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_139);
      UnderlyingInstrument_139.insert(UnderlyingUnitOfMeasureQty_139.getString());
      all_values.push_back(UnderlyingInstrument_139);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_279;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_279("STRING_805658120");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_279);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_279.insert(UnderlyingSecurityAltID_279.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_279("STRING_328187437");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_279);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_279.insert(UnderlyingSecurityAltIDSource_279.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_280;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_280("STRING_1006209459");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltID_280);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_280.insert(UnderlyingSecurityAltID_280.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_280("STRING_1153940898");
        noUnderlyingSecurityAltID_0_0_2_1.set(UnderlyingSecurityAltIDSource_280);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_280.insert(UnderlyingSecurityAltIDSource_280.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_274;
        FIX::UnderlyingStipType UnderlyingStipType_274("STRING_1105997079");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_274);
        UnderlyingStipulations_NoUnderlyingStips_274.insert(UnderlyingStipType_274.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_274("STRING_966589970");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_274);
        UnderlyingStipulations_NoUnderlyingStips_274.insert(UnderlyingStipValue_274.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_274);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_275;
        FIX::UnderlyingStipType UnderlyingStipType_275("STRING_1483009989");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipType_275);
        UnderlyingStipulations_NoUnderlyingStips_275.insert(UnderlyingStipType_275.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_275("STRING_2056691178");
        noUnderlyingStips_0_0_2_1.set(UnderlyingStipValue_275);
        UnderlyingStipulations_NoUnderlyingStips_275.insert(UnderlyingStipValue_275.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_275);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_268;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_268("STRING_1197436990");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_268);
        UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyID_268.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_268('6');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_268);
        UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyIDSource_268.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_268(667221818);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_268);
        UndlyInstrumentParties_NoUndlyInstrumentParties_268.insert(UnderlyingInstrumentPartyRole_268.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_268);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_541("STRING_198534851");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_541);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541.insert(UnderlyingInstrumentPartySubID_541.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_541(1319443755);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_541);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541.insert(UnderlyingInstrumentPartySubIDType_541.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_541);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_542("STRING_1177293043");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_542);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542.insert(UnderlyingInstrumentPartySubID_542.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_542(324785011);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_542);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542.insert(UnderlyingInstrumentPartySubIDType_542.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_542);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_269;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_269("STRING_412235040");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_269);
        UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyID_269.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_269('8');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_269);
        UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyIDSource_269.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_269(2099555290);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_269);
        UndlyInstrumentParties_NoUndlyInstrumentParties_269.insert(UnderlyingInstrumentPartyRole_269.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_269);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_543("STRING_826813618");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_543);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543.insert(UnderlyingInstrumentPartySubID_543.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_543(2138589479);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_543);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543.insert(UnderlyingInstrumentPartySubIDType_543.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_543);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_140;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_140("DATA_880336400");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_140);
      UnderlyingInstrument_140.insert(EncodedUnderlyingIssuer_140.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_140(996767321);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_140);
      UnderlyingInstrument_140.insert(EncodedUnderlyingIssuerLen_140.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_140("DATA_1493436994");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_140);
      UnderlyingInstrument_140.insert(EncodedUnderlyingSecurityDesc_140.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_140(1483049430);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_140);
      UnderlyingInstrument_140.insert(EncodedUnderlyingSecurityDescLen_140.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_140;
      UnderlyingAdjustedQuantity_140.setString("3105244");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_140);
      UnderlyingInstrument_140.insert(UnderlyingAdjustedQuantity_140.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_140;
      UnderlyingAllocationPercent_140.setString("35.870000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_140);
      UnderlyingInstrument_140.insert(UnderlyingAllocationPercent_140.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_140;
      UnderlyingAttachmentPoint_140.setString("59.830000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_140);
      UnderlyingInstrument_140.insert(UnderlyingAttachmentPoint_140.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_140("STRING_1116182532");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_140);
      UnderlyingInstrument_140.insert(UnderlyingCFICode_140.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_140("STRING_1103111025");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_140);
      UnderlyingInstrument_140.insert(UnderlyingCPProgram_140.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_140("STRING_748761795");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_140);
      UnderlyingInstrument_140.insert(UnderlyingCPRegType_140.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_140;
      UnderlyingCapValue_140.setString("1226397");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_140);
      UnderlyingInstrument_140.insert(UnderlyingCapValue_140.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_140;
      UnderlyingCashAmount_140.setString("13641339");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_140);
      UnderlyingInstrument_140.insert(UnderlyingCashAmount_140.getString());
      FIX::UnderlyingCashType UnderlyingCashType_140("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_140);
      UnderlyingInstrument_140.insert(UnderlyingCashType_140.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_140;
      UnderlyingContractMultiplier_140.setString("10892297");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_140);
      UnderlyingInstrument_140.insert(UnderlyingContractMultiplier_140.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_140(699660282);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_140);
      UnderlyingInstrument_140.insert(UnderlyingContractMultiplierUnit_140.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_140("COUNTRY_1763966404");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_140);
      UnderlyingInstrument_140.insert(UnderlyingCountryOfIssue_140.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_140("LOCALMKTDATE_1541558431");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_140);
      UnderlyingInstrument_140.insert(UnderlyingCouponPaymentDate_140.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_140;
      UnderlyingCouponRate_140.setString("72.720000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_140);
      UnderlyingInstrument_140.insert(UnderlyingCouponRate_140.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_140("STRING_258781611");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_140);
      UnderlyingInstrument_140.insert(UnderlyingCreditRating_140.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_140("EUR");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_140);
      UnderlyingInstrument_140.insert(UnderlyingCurrency_140.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_140;
      UnderlyingCurrentValue_140.setString("4573164");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_140);
      UnderlyingInstrument_140.insert(UnderlyingCurrentValue_140.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_140;
      UnderlyingDetachmentPoint_140.setString("3.570000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_140);
      UnderlyingInstrument_140.insert(UnderlyingDetachmentPoint_140.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_140;
      UnderlyingDirtyPrice_140.setString("16189009");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_140);
      UnderlyingInstrument_140.insert(UnderlyingDirtyPrice_140.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_140;
      UnderlyingEndPrice_140.setString("7821014");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_140);
      UnderlyingInstrument_140.insert(UnderlyingEndPrice_140.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_140;
      UnderlyingEndValue_140.setString("17929753");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_140);
      UnderlyingInstrument_140.insert(UnderlyingEndValue_140.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_140(271609399);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_140);
      UnderlyingInstrument_140.insert(UnderlyingExerciseStyle_140.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_140;
      UnderlyingFXRate_140.setString("7341731");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_140);
      UnderlyingInstrument_140.insert(UnderlyingFXRate_140.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_140('D');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_140);
      UnderlyingInstrument_140.insert(UnderlyingFXRateCalc_140.getString());
      FIX::UnderlyingFactor UnderlyingFactor_140;
      UnderlyingFactor_140.setString("10984230");
      noUnderlyings_0_1_1.set(UnderlyingFactor_140);
      UnderlyingInstrument_140.insert(UnderlyingFactor_140.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_140(725278947);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_140);
      UnderlyingInstrument_140.insert(UnderlyingFlowScheduleType_140.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_140("STRING_853528568");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_140);
      UnderlyingInstrument_140.insert(UnderlyingInstrRegistry_140.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_140("LOCALMKTDATE_2095190338");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_140);
      UnderlyingInstrument_140.insert(UnderlyingIssueDate_140.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_140("STRING_71232293");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_140);
      UnderlyingInstrument_140.insert(UnderlyingIssuer_140.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_140("STRING_189094350");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_140);
      UnderlyingInstrument_140.insert(UnderlyingLocaleOfIssue_140.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_140("LOCALMKTDATE_258231102");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_140);
      UnderlyingInstrument_140.insert(UnderlyingMaturityDate_140.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_140("MONTHYEAR_846155880");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_140);
      UnderlyingInstrument_140.insert(UnderlyingMaturityMonthYear_140.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_140("TZTIMEONLY_2079130333");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_140);
      UnderlyingInstrument_140.insert(UnderlyingMaturityTime_140.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_140;
      UnderlyingNotionalPercentageOutstanding_140.setString("36.340000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_140);
      UnderlyingInstrument_140.insert(UnderlyingNotionalPercentageOutstanding_140.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_140('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_140);
      UnderlyingInstrument_140.insert(UnderlyingOptAttribute_140.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_140;
      UnderlyingOriginalNotionalPercentageOutstanding_140.setString("84.800000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_140);
      UnderlyingInstrument_140.insert(UnderlyingOriginalNotionalPercentageOutstanding_140.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_140("STRING_1497053416");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_140);
      UnderlyingInstrument_140.insert(UnderlyingPriceUnitOfMeasure_140.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_140;
      UnderlyingPriceUnitOfMeasureQty_140.setString("11659171");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_140);
      UnderlyingInstrument_140.insert(UnderlyingPriceUnitOfMeasureQty_140.getString());
      FIX::UnderlyingProduct UnderlyingProduct_140(387683707);
      noUnderlyings_0_1_1.set(UnderlyingProduct_140);
      UnderlyingInstrument_140.insert(UnderlyingProduct_140.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_140(438799520);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_140);
      UnderlyingInstrument_140.insert(UnderlyingPutOrCall_140.getString());
      FIX::UnderlyingPx UnderlyingPx_140;
      UnderlyingPx_140.setString("18655774");
      noUnderlyings_0_1_1.set(UnderlyingPx_140);
      UnderlyingInstrument_140.insert(UnderlyingPx_140.getString());
      FIX::UnderlyingQty UnderlyingQty_140;
      UnderlyingQty_140.setString("41664");
      noUnderlyings_0_1_1.set(UnderlyingQty_140);
      UnderlyingInstrument_140.insert(UnderlyingQty_140.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_140("LOCALMKTDATE_1980357952");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_140);
      UnderlyingInstrument_140.insert(UnderlyingRedemptionDate_140.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_140("STRING_1615191104");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_140);
      UnderlyingInstrument_140.insert(UnderlyingRepoCollateralSecurityType_140.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_140;
      UnderlyingRepurchaseRate_140.setString("80.740000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_140);
      UnderlyingInstrument_140.insert(UnderlyingRepurchaseRate_140.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_140(2041654553);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_140);
      UnderlyingInstrument_140.insert(UnderlyingRepurchaseTerm_140.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_140("STRING_2056799001");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_140);
      UnderlyingInstrument_140.insert(UnderlyingRestructuringType_140.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_140("STRING_720264536");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_140);
      UnderlyingInstrument_140.insert(UnderlyingSecurityDesc_140.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_140("EXCHANGE_1274911262");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_140);
      UnderlyingInstrument_140.insert(UnderlyingSecurityExchange_140.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_140("STRING_1528216293");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_140);
      UnderlyingInstrument_140.insert(UnderlyingSecurityID_140.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_140("STRING_1502366010");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_140);
      UnderlyingInstrument_140.insert(UnderlyingSecurityIDSource_140.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_140("STRING_920403011");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_140);
      UnderlyingInstrument_140.insert(UnderlyingSecuritySubType_140.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_140("STRING_1799825693");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_140);
      UnderlyingInstrument_140.insert(UnderlyingSecurityType_140.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_140("STRING_89055477");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_140);
      UnderlyingInstrument_140.insert(UnderlyingSeniority_140.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_140("STRING_893595179");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_140);
      UnderlyingInstrument_140.insert(UnderlyingSettlMethod_140.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_140(5);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_140);
      UnderlyingInstrument_140.insert(UnderlyingSettlementType_140.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_140;
      UnderlyingStartValue_140.setString("8143344");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_140);
      UnderlyingInstrument_140.insert(UnderlyingStartValue_140.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_140("STRING_1747123747");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_140);
      UnderlyingInstrument_140.insert(UnderlyingStateOrProvinceOfIssue_140.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_140("CAN");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_140);
      UnderlyingInstrument_140.insert(UnderlyingStrikeCurrency_140.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_140;
      UnderlyingStrikePrice_140.setString("19362180");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_140);
      UnderlyingInstrument_140.insert(UnderlyingStrikePrice_140.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_140("STRING_956702855");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_140);
      UnderlyingInstrument_140.insert(UnderlyingSymbol_140.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_140("STRING_1731722598");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_140);
      UnderlyingInstrument_140.insert(UnderlyingSymbolSfx_140.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_140("STRING_1867864783");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_140);
      UnderlyingInstrument_140.insert(UnderlyingTimeUnit_140.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_140("STRING_183632842");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_140);
      UnderlyingInstrument_140.insert(UnderlyingUnitOfMeasure_140.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_140;
      UnderlyingUnitOfMeasureQty_140.setString("15335058");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_140);
      UnderlyingInstrument_140.insert(UnderlyingUnitOfMeasureQty_140.getString());
      all_values.push_back(UnderlyingInstrument_140);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_281;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_281("STRING_1680686258");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_281);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_281.insert(UnderlyingSecurityAltID_281.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_281("STRING_551939405");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_281);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_281.insert(UnderlyingSecurityAltIDSource_281.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_282;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_282("STRING_788473322");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltID_282);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_282.insert(UnderlyingSecurityAltID_282.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_282("STRING_2119485779");
        noUnderlyingSecurityAltID_0_1_2_1.set(UnderlyingSecurityAltIDSource_282);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_282.insert(UnderlyingSecurityAltIDSource_282.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_276;
        FIX::UnderlyingStipType UnderlyingStipType_276("STRING_792639786");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_276);
        UnderlyingStipulations_NoUnderlyingStips_276.insert(UnderlyingStipType_276.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_276("STRING_1952360083");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_276);
        UnderlyingStipulations_NoUnderlyingStips_276.insert(UnderlyingStipValue_276.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_276);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_270;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_270("STRING_1055587860");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_270);
        UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyID_270.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_270('1');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_270);
        UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyIDSource_270.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_270(1794539695);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_270);
        UndlyInstrumentParties_NoUndlyInstrumentParties_270.insert(UnderlyingInstrumentPartyRole_270.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_270);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_544("STRING_973958603");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_544);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544.insert(UnderlyingInstrumentPartySubID_544.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_544(1175272341);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_544);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544.insert(UnderlyingInstrumentPartySubIDType_544.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_544);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_141;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_141("DATA_1130734759");
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuer_141);
      UnderlyingInstrument_141.insert(EncodedUnderlyingIssuer_141.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_141(1894361614);
      noUnderlyings_0_1_2.set(EncodedUnderlyingIssuerLen_141);
      UnderlyingInstrument_141.insert(EncodedUnderlyingIssuerLen_141.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_141("DATA_827614386");
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDesc_141);
      UnderlyingInstrument_141.insert(EncodedUnderlyingSecurityDesc_141.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_141(1219790236);
      noUnderlyings_0_1_2.set(EncodedUnderlyingSecurityDescLen_141);
      UnderlyingInstrument_141.insert(EncodedUnderlyingSecurityDescLen_141.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_141;
      UnderlyingAdjustedQuantity_141.setString("6404731");
      noUnderlyings_0_1_2.set(UnderlyingAdjustedQuantity_141);
      UnderlyingInstrument_141.insert(UnderlyingAdjustedQuantity_141.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_141;
      UnderlyingAllocationPercent_141.setString("94.480000");
      noUnderlyings_0_1_2.set(UnderlyingAllocationPercent_141);
      UnderlyingInstrument_141.insert(UnderlyingAllocationPercent_141.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_141;
      UnderlyingAttachmentPoint_141.setString("46.610000");
      noUnderlyings_0_1_2.set(UnderlyingAttachmentPoint_141);
      UnderlyingInstrument_141.insert(UnderlyingAttachmentPoint_141.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_141("STRING_240113245");
      noUnderlyings_0_1_2.set(UnderlyingCFICode_141);
      UnderlyingInstrument_141.insert(UnderlyingCFICode_141.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_141("STRING_129367553");
      noUnderlyings_0_1_2.set(UnderlyingCPProgram_141);
      UnderlyingInstrument_141.insert(UnderlyingCPProgram_141.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_141("STRING_772207730");
      noUnderlyings_0_1_2.set(UnderlyingCPRegType_141);
      UnderlyingInstrument_141.insert(UnderlyingCPRegType_141.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_141;
      UnderlyingCapValue_141.setString("288476");
      noUnderlyings_0_1_2.set(UnderlyingCapValue_141);
      UnderlyingInstrument_141.insert(UnderlyingCapValue_141.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_141;
      UnderlyingCashAmount_141.setString("10860704");
      noUnderlyings_0_1_2.set(UnderlyingCashAmount_141);
      UnderlyingInstrument_141.insert(UnderlyingCashAmount_141.getString());
      FIX::UnderlyingCashType UnderlyingCashType_141("STRING_FIXED");
      noUnderlyings_0_1_2.set(UnderlyingCashType_141);
      UnderlyingInstrument_141.insert(UnderlyingCashType_141.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_141;
      UnderlyingContractMultiplier_141.setString("18967124");
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplier_141);
      UnderlyingInstrument_141.insert(UnderlyingContractMultiplier_141.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_141(1269703251);
      noUnderlyings_0_1_2.set(UnderlyingContractMultiplierUnit_141);
      UnderlyingInstrument_141.insert(UnderlyingContractMultiplierUnit_141.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_141("COUNTRY_1889952536");
      noUnderlyings_0_1_2.set(UnderlyingCountryOfIssue_141);
      UnderlyingInstrument_141.insert(UnderlyingCountryOfIssue_141.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_141("LOCALMKTDATE_150018445");
      noUnderlyings_0_1_2.set(UnderlyingCouponPaymentDate_141);
      UnderlyingInstrument_141.insert(UnderlyingCouponPaymentDate_141.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_141;
      UnderlyingCouponRate_141.setString("58.610000");
      noUnderlyings_0_1_2.set(UnderlyingCouponRate_141);
      UnderlyingInstrument_141.insert(UnderlyingCouponRate_141.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_141("STRING_294408293");
      noUnderlyings_0_1_2.set(UnderlyingCreditRating_141);
      UnderlyingInstrument_141.insert(UnderlyingCreditRating_141.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_141("USD");
      noUnderlyings_0_1_2.set(UnderlyingCurrency_141);
      UnderlyingInstrument_141.insert(UnderlyingCurrency_141.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_141;
      UnderlyingCurrentValue_141.setString("5644415");
      noUnderlyings_0_1_2.set(UnderlyingCurrentValue_141);
      UnderlyingInstrument_141.insert(UnderlyingCurrentValue_141.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_141;
      UnderlyingDetachmentPoint_141.setString("15.540000");
      noUnderlyings_0_1_2.set(UnderlyingDetachmentPoint_141);
      UnderlyingInstrument_141.insert(UnderlyingDetachmentPoint_141.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_141;
      UnderlyingDirtyPrice_141.setString("5797844");
      noUnderlyings_0_1_2.set(UnderlyingDirtyPrice_141);
      UnderlyingInstrument_141.insert(UnderlyingDirtyPrice_141.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_141;
      UnderlyingEndPrice_141.setString("3021822");
      noUnderlyings_0_1_2.set(UnderlyingEndPrice_141);
      UnderlyingInstrument_141.insert(UnderlyingEndPrice_141.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_141;
      UnderlyingEndValue_141.setString("6392357");
      noUnderlyings_0_1_2.set(UnderlyingEndValue_141);
      UnderlyingInstrument_141.insert(UnderlyingEndValue_141.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_141(278831768);
      noUnderlyings_0_1_2.set(UnderlyingExerciseStyle_141);
      UnderlyingInstrument_141.insert(UnderlyingExerciseStyle_141.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_141;
      UnderlyingFXRate_141.setString("20967219");
      noUnderlyings_0_1_2.set(UnderlyingFXRate_141);
      UnderlyingInstrument_141.insert(UnderlyingFXRate_141.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_141('M');
      noUnderlyings_0_1_2.set(UnderlyingFXRateCalc_141);
      UnderlyingInstrument_141.insert(UnderlyingFXRateCalc_141.getString());
      FIX::UnderlyingFactor UnderlyingFactor_141;
      UnderlyingFactor_141.setString("12527903");
      noUnderlyings_0_1_2.set(UnderlyingFactor_141);
      UnderlyingInstrument_141.insert(UnderlyingFactor_141.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_141(1124510613);
      noUnderlyings_0_1_2.set(UnderlyingFlowScheduleType_141);
      UnderlyingInstrument_141.insert(UnderlyingFlowScheduleType_141.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_141("STRING_1398339274");
      noUnderlyings_0_1_2.set(UnderlyingInstrRegistry_141);
      UnderlyingInstrument_141.insert(UnderlyingInstrRegistry_141.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_141("LOCALMKTDATE_999668337");
      noUnderlyings_0_1_2.set(UnderlyingIssueDate_141);
      UnderlyingInstrument_141.insert(UnderlyingIssueDate_141.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_141("STRING_1952124999");
      noUnderlyings_0_1_2.set(UnderlyingIssuer_141);
      UnderlyingInstrument_141.insert(UnderlyingIssuer_141.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_141("STRING_470645863");
      noUnderlyings_0_1_2.set(UnderlyingLocaleOfIssue_141);
      UnderlyingInstrument_141.insert(UnderlyingLocaleOfIssue_141.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_141("LOCALMKTDATE_1640141483");
      noUnderlyings_0_1_2.set(UnderlyingMaturityDate_141);
      UnderlyingInstrument_141.insert(UnderlyingMaturityDate_141.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_141("MONTHYEAR_1383020800");
      noUnderlyings_0_1_2.set(UnderlyingMaturityMonthYear_141);
      UnderlyingInstrument_141.insert(UnderlyingMaturityMonthYear_141.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_141("TZTIMEONLY_357286876");
      noUnderlyings_0_1_2.set(UnderlyingMaturityTime_141);
      UnderlyingInstrument_141.insert(UnderlyingMaturityTime_141.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_141;
      UnderlyingNotionalPercentageOutstanding_141.setString("47.290000");
      noUnderlyings_0_1_2.set(UnderlyingNotionalPercentageOutstanding_141);
      UnderlyingInstrument_141.insert(UnderlyingNotionalPercentageOutstanding_141.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_141('1');
      noUnderlyings_0_1_2.set(UnderlyingOptAttribute_141);
      UnderlyingInstrument_141.insert(UnderlyingOptAttribute_141.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_141;
      UnderlyingOriginalNotionalPercentageOutstanding_141.setString("46.060000");
      noUnderlyings_0_1_2.set(UnderlyingOriginalNotionalPercentageOutstanding_141);
      UnderlyingInstrument_141.insert(UnderlyingOriginalNotionalPercentageOutstanding_141.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_141("STRING_1909102424");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasure_141);
      UnderlyingInstrument_141.insert(UnderlyingPriceUnitOfMeasure_141.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_141;
      UnderlyingPriceUnitOfMeasureQty_141.setString("4509751");
      noUnderlyings_0_1_2.set(UnderlyingPriceUnitOfMeasureQty_141);
      UnderlyingInstrument_141.insert(UnderlyingPriceUnitOfMeasureQty_141.getString());
      FIX::UnderlyingProduct UnderlyingProduct_141(1485941287);
      noUnderlyings_0_1_2.set(UnderlyingProduct_141);
      UnderlyingInstrument_141.insert(UnderlyingProduct_141.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_141(1658331254);
      noUnderlyings_0_1_2.set(UnderlyingPutOrCall_141);
      UnderlyingInstrument_141.insert(UnderlyingPutOrCall_141.getString());
      FIX::UnderlyingPx UnderlyingPx_141;
      UnderlyingPx_141.setString("17206783");
      noUnderlyings_0_1_2.set(UnderlyingPx_141);
      UnderlyingInstrument_141.insert(UnderlyingPx_141.getString());
      FIX::UnderlyingQty UnderlyingQty_141;
      UnderlyingQty_141.setString("12284101");
      noUnderlyings_0_1_2.set(UnderlyingQty_141);
      UnderlyingInstrument_141.insert(UnderlyingQty_141.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_141("LOCALMKTDATE_1808349699");
      noUnderlyings_0_1_2.set(UnderlyingRedemptionDate_141);
      UnderlyingInstrument_141.insert(UnderlyingRedemptionDate_141.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_141("STRING_376100579");
      noUnderlyings_0_1_2.set(UnderlyingRepoCollateralSecurityType_141);
      UnderlyingInstrument_141.insert(UnderlyingRepoCollateralSecurityType_141.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_141;
      UnderlyingRepurchaseRate_141.setString("84.680000");
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseRate_141);
      UnderlyingInstrument_141.insert(UnderlyingRepurchaseRate_141.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_141(599357819);
      noUnderlyings_0_1_2.set(UnderlyingRepurchaseTerm_141);
      UnderlyingInstrument_141.insert(UnderlyingRepurchaseTerm_141.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_141("STRING_1151008571");
      noUnderlyings_0_1_2.set(UnderlyingRestructuringType_141);
      UnderlyingInstrument_141.insert(UnderlyingRestructuringType_141.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_141("STRING_2087259999");
      noUnderlyings_0_1_2.set(UnderlyingSecurityDesc_141);
      UnderlyingInstrument_141.insert(UnderlyingSecurityDesc_141.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_141("EXCHANGE_183005725");
      noUnderlyings_0_1_2.set(UnderlyingSecurityExchange_141);
      UnderlyingInstrument_141.insert(UnderlyingSecurityExchange_141.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_141("STRING_1730792999");
      noUnderlyings_0_1_2.set(UnderlyingSecurityID_141);
      UnderlyingInstrument_141.insert(UnderlyingSecurityID_141.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_141("STRING_241958576");
      noUnderlyings_0_1_2.set(UnderlyingSecurityIDSource_141);
      UnderlyingInstrument_141.insert(UnderlyingSecurityIDSource_141.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_141("STRING_822241492");
      noUnderlyings_0_1_2.set(UnderlyingSecuritySubType_141);
      UnderlyingInstrument_141.insert(UnderlyingSecuritySubType_141.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_141("STRING_2009624767");
      noUnderlyings_0_1_2.set(UnderlyingSecurityType_141);
      UnderlyingInstrument_141.insert(UnderlyingSecurityType_141.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_141("STRING_191196849");
      noUnderlyings_0_1_2.set(UnderlyingSeniority_141);
      UnderlyingInstrument_141.insert(UnderlyingSeniority_141.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_141("STRING_1089846007");
      noUnderlyings_0_1_2.set(UnderlyingSettlMethod_141);
      UnderlyingInstrument_141.insert(UnderlyingSettlMethod_141.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_141(2);
      noUnderlyings_0_1_2.set(UnderlyingSettlementType_141);
      UnderlyingInstrument_141.insert(UnderlyingSettlementType_141.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_141;
      UnderlyingStartValue_141.setString("13157074");
      noUnderlyings_0_1_2.set(UnderlyingStartValue_141);
      UnderlyingInstrument_141.insert(UnderlyingStartValue_141.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_141("STRING_340701634");
      noUnderlyings_0_1_2.set(UnderlyingStateOrProvinceOfIssue_141);
      UnderlyingInstrument_141.insert(UnderlyingStateOrProvinceOfIssue_141.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_141("GBP");
      noUnderlyings_0_1_2.set(UnderlyingStrikeCurrency_141);
      UnderlyingInstrument_141.insert(UnderlyingStrikeCurrency_141.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_141;
      UnderlyingStrikePrice_141.setString("8113474");
      noUnderlyings_0_1_2.set(UnderlyingStrikePrice_141);
      UnderlyingInstrument_141.insert(UnderlyingStrikePrice_141.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_141("STRING_1607257663");
      noUnderlyings_0_1_2.set(UnderlyingSymbol_141);
      UnderlyingInstrument_141.insert(UnderlyingSymbol_141.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_141("STRING_355885966");
      noUnderlyings_0_1_2.set(UnderlyingSymbolSfx_141);
      UnderlyingInstrument_141.insert(UnderlyingSymbolSfx_141.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_141("STRING_1168634373");
      noUnderlyings_0_1_2.set(UnderlyingTimeUnit_141);
      UnderlyingInstrument_141.insert(UnderlyingTimeUnit_141.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_141("STRING_1340028744");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasure_141);
      UnderlyingInstrument_141.insert(UnderlyingUnitOfMeasure_141.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_141;
      UnderlyingUnitOfMeasureQty_141.setString("18682743");
      noUnderlyings_0_1_2.set(UnderlyingUnitOfMeasureQty_141);
      UnderlyingInstrument_141.insert(UnderlyingUnitOfMeasureQty_141.getString());
      all_values.push_back(UnderlyingInstrument_141);
      all_compo_names.insert("UnderlyingInstrument");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_283;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_283("STRING_1101647520");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltID_283);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_283.insert(UnderlyingSecurityAltID_283.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_283("STRING_171765786");
        noUnderlyingSecurityAltID_0_2_2_0.set(UnderlyingSecurityAltIDSource_283);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_283.insert(UnderlyingSecurityAltIDSource_283.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_284;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_284("STRING_1636586618");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltID_284);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_284.insert(UnderlyingSecurityAltID_284.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_284("STRING_612495126");
        noUnderlyingSecurityAltID_0_2_2_1.set(UnderlyingSecurityAltIDSource_284);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_284.insert(UnderlyingSecurityAltIDSource_284.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);
        all_compo_names.insert("UndSecAltIDGrp.NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_277;
        FIX::UnderlyingStipType UnderlyingStipType_277("STRING_717513145");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipType_277);
        UnderlyingStipulations_NoUnderlyingStips_277.insert(UnderlyingStipType_277.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_277("STRING_273361177");
        noUnderlyingStips_0_2_2_0.set(UnderlyingStipValue_277);
        UnderlyingStipulations_NoUnderlyingStips_277.insert(UnderlyingStipValue_277.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_277);
        all_compo_names.insert("UnderlyingStipulations.NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_271;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_271("STRING_92847966");
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyID_271);
        UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyID_271.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_271('8');
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyIDSource_271);
        UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyIDSource_271.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_271(1272069654);
        noUndlyInstrumentParties_0_2_2_0.set(UnderlyingInstrumentPartyRole_271);
        UndlyInstrumentParties_NoUndlyInstrumentParties_271.insert(UnderlyingInstrumentPartyRole_271.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_271);
        all_compo_names.insert("UndlyInstrumentParties.NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_545("STRING_1055724722");
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubID_545);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545.insert(UnderlyingInstrumentPartySubID_545.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_545(855379005);
          noUndlyInstrumentPartySubIDs_0_2_0_3_0.set(UnderlyingInstrumentPartySubIDType_545);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545.insert(UnderlyingInstrumentPartySubIDType_545.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_546("STRING_274582894");
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubID_546);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546.insert(UnderlyingInstrumentPartySubID_546.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_546(1877966214);
          noUndlyInstrumentPartySubIDs_0_2_0_3_1.set(UnderlyingInstrumentPartySubIDType_546);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546.insert(UnderlyingInstrumentPartySubIDType_546.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_546);
          all_compo_names.insert("UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_28;
    FIX::Yield Yield_28;
    Yield_28.setString("1.240000");
    noRelatedSym_0_0.set(Yield_28);
    YieldData_28.insert(Yield_28.getString());
    FIX::YieldCalcDate YieldCalcDate_28("LOCALMKTDATE_465779743");
    noRelatedSym_0_0.set(YieldCalcDate_28);
    YieldData_28.insert(YieldCalcDate_28.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_28("LOCALMKTDATE_820328574");
    noRelatedSym_0_0.set(YieldRedemptionDate_28);
    YieldData_28.insert(YieldRedemptionDate_28.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_28;
    YieldRedemptionPrice_28.setString("18324516");
    noRelatedSym_0_0.set(YieldRedemptionPrice_28);
    YieldData_28.insert(YieldRedemptionPrice_28.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_28(1781487205);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_28);
    YieldData_28.insert(YieldRedemptionPriceType_28.getString());
    FIX::YieldType YieldType_28("STRING_GOVTEQUIV");
    noRelatedSym_0_0.set(YieldType_28);
    YieldData_28.insert(YieldType_28.getString());
    all_values.push_back(YieldData_28);
    all_compo_names.insert("YieldData");

    msg.addGroup(noRelatedSym_0_0);
  }

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
