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
  FIX::ClearingBusinessDate ClearingBusinessDate_23("LOCALMKTDATE_1470532034");
  msg.set(ClearingBusinessDate_23);
  SecurityListUpdateReport_0.insert(ClearingBusinessDate_23.getString());
  FIX::CorporateAction CorporateAction_10("MULTIPLECHARVALUE_K");
  msg.set(CorporateAction_10);
  SecurityListUpdateReport_0.insert(CorporateAction_10.getString());
  FIX::EncodedSecurityListDesc EncodedSecurityListDesc_1("DATA_869032055");
  msg.set(EncodedSecurityListDesc_1);
  FIX::EncodedSecurityListDescLen EncodedSecurityListDescLen_1(558098877);
  msg.set(EncodedSecurityListDescLen_1);
  FIX::LastFragment LastFragment_14(false);
  msg.set(LastFragment_14);
  SecurityListUpdateReport_0.insert(LastFragment_14.getString());
  FIX::MarketID MarketID_19("EXCHANGE_1978462717");
  msg.set(MarketID_19);
  SecurityListUpdateReport_0.insert(MarketID_19.getString());
  FIX::MarketSegmentID MarketSegmentID_19("STRING_2015321361");
  msg.set(MarketSegmentID_19);
  SecurityListUpdateReport_0.insert(MarketSegmentID_19.getString());
  FIX::SecurityListDesc SecurityListDesc_1("STRING_1067122995");
  msg.set(SecurityListDesc_1);
  SecurityListUpdateReport_0.insert(SecurityListDesc_1.getString());
  FIX::SecurityListID SecurityListID_2("STRING_1810703853");
  msg.set(SecurityListID_2);
  SecurityListUpdateReport_0.insert(SecurityListID_2.getString());
  FIX::SecurityListRefID SecurityListRefID_1("STRING_1562862352");
  msg.set(SecurityListRefID_1);
  SecurityListUpdateReport_0.insert(SecurityListRefID_1.getString());
  FIX::SecurityListType SecurityListType_2(2);
  msg.set(SecurityListType_2);
  SecurityListUpdateReport_0.insert(SecurityListType_2.getString());
  FIX::SecurityListTypeSource SecurityListTypeSource_2(3);
  msg.set(SecurityListTypeSource_2);
  SecurityListUpdateReport_0.insert(SecurityListTypeSource_2.getString());
  FIX::SecurityReportID SecurityReportID_4(472197046);
  msg.set(SecurityReportID_4);
  SecurityListUpdateReport_0.insert(SecurityReportID_4.getString());
  FIX::SecurityReqID SecurityReqID_8("STRING_1815175294");
  msg.set(SecurityReqID_8);
  SecurityListUpdateReport_0.insert(SecurityReqID_8.getString());
  FIX::SecurityRequestResult SecurityRequestResult_3(1);
  msg.set(SecurityRequestResult_3);
  SecurityListUpdateReport_0.insert(SecurityRequestResult_3.getString());
  FIX::SecurityResponseID SecurityResponseID_5("STRING_1754105739");
  msg.set(SecurityResponseID_5);
  SecurityListUpdateReport_0.insert(SecurityResponseID_5.getString());
  FIX::SecurityUpdateAction SecurityUpdateAction_2('D');
  msg.set(SecurityUpdateAction_2);
  SecurityListUpdateReport_0.insert(SecurityUpdateAction_2.getString());
  FIX::TotNoRelatedSym TotNoRelatedSym_4(1479716815);
  msg.set(TotNoRelatedSym_4);
  SecurityListUpdateReport_0.insert(TotNoRelatedSym_4.getString());
  FIX::TransactTime TransactTime_58(FIX::UTCTIMESTAMP(2, 53, 25, 6, 4, 2001));
  msg.set(TransactTime_58);
  SecurityListUpdateReport_0.insert(TransactTime_58.getString());
  all_values.push_back(SecurityListUpdateReport_0);

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_15;
  FIX::ApplID ApplID_15("STRING_1095810027");
  msg.set(ApplID_15);
  ApplicationSequenceControl_15.insert(ApplID_15.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_15(1262834617);
  msg.set(ApplLastSeqNum_15);
  ApplicationSequenceControl_15.insert(ApplLastSeqNum_15.getString());
  FIX::ApplResendFlag ApplResendFlag_15(false);
  msg.set(ApplResendFlag_15);
  ApplicationSequenceControl_15.insert(ApplResendFlag_15.getString());
  FIX::ApplSeqNum ApplSeqNum_15(1236300485);
  msg.set(ApplSeqNum_15);
  ApplicationSequenceControl_15.insert(ApplSeqNum_15.getString());
  all_values.push_back(ApplicationSequenceControl_15);

  // SecLstUpdRelSymGrp
  // Group SecLstUpdRelSymGrp.NoRelatedSym
  {
    FIX50SP2::SecurityListUpdateReport::NoRelatedSym noRelatedSym_0_0;
    // SecLstUpdRelSymGrp.NoRelatedSym
    multiset<string> SecLstUpdRelSymGrp_NoRelatedSym_0;
    FIX::Currency Currency_62("CAN");
    noRelatedSym_0_0.set(Currency_62);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(Currency_62.getString());
    FIX::EncodedText EncodedText_91("DATA_312814357");
    noRelatedSym_0_0.set(EncodedText_91);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(EncodedText_91.getString());
    FIX::EncodedTextLen EncodedTextLen_91(1010702645);
    noRelatedSym_0_0.set(EncodedTextLen_91);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(EncodedTextLen_91.getString());
    FIX::ListUpdateAction ListUpdateAction_3('1');
    noRelatedSym_0_0.set(ListUpdateAction_3);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(ListUpdateAction_3.getString());
    FIX::RelSymTransactTime RelSymTransactTime_6(FIX::UTCTIMESTAMP(10, 22, 31, 12, 7, 2007));
    noRelatedSym_0_0.set(RelSymTransactTime_6);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(RelSymTransactTime_6.getString());
    FIX::Text Text_91("STRING_1518914948");
    noRelatedSym_0_0.set(Text_91);
    SecLstUpdRelSymGrp_NoRelatedSym_0.insert(Text_91.getString());
    all_values.push_back(SecLstUpdRelSymGrp_NoRelatedSym_0);

    // FinancingDetails
    multiset<string> FinancingDetails_26;
    FIX::AgreementCurrency AgreementCurrency_26("CHF");
    noRelatedSym_0_0.set(AgreementCurrency_26);
    FinancingDetails_26.insert(AgreementCurrency_26.getString());
    FIX::AgreementDate AgreementDate_26("LOCALMKTDATE_2046941301");
    noRelatedSym_0_0.set(AgreementDate_26);
    FinancingDetails_26.insert(AgreementDate_26.getString());
    FIX::AgreementDesc AgreementDesc_26("STRING_479483304");
    noRelatedSym_0_0.set(AgreementDesc_26);
    FinancingDetails_26.insert(AgreementDesc_26.getString());
    FIX::AgreementID AgreementID_26("STRING_1128428638");
    noRelatedSym_0_0.set(AgreementID_26);
    FinancingDetails_26.insert(AgreementID_26.getString());
    FIX::DeliveryType DeliveryType_26(0);
    noRelatedSym_0_0.set(DeliveryType_26);
    FinancingDetails_26.insert(DeliveryType_26.getString());
    FIX::EndDate EndDate_26("LOCALMKTDATE_1219839374");
    noRelatedSym_0_0.set(EndDate_26);
    FinancingDetails_26.insert(EndDate_26.getString());
    FIX::MarginRatio MarginRatio_26;
    MarginRatio_26.setString("66.730000");
    noRelatedSym_0_0.set(MarginRatio_26);
    FinancingDetails_26.insert(MarginRatio_26.getString());
    FIX::StartDate StartDate_26("LOCALMKTDATE_1323921174");
    noRelatedSym_0_0.set(StartDate_26);
    FinancingDetails_26.insert(StartDate_26.getString());
    FIX::TerminationType TerminationType_26(4);
    noRelatedSym_0_0.set(TerminationType_26);
    FinancingDetails_26.insert(TerminationType_26.getString());
    all_values.push_back(FinancingDetails_26);

    // Instrument
    multiset<string> Instrument_78;
    FIX::AttachmentPoint AttachmentPoint_78;
    AttachmentPoint_78.setString("86.990000");
    noRelatedSym_0_0.set(AttachmentPoint_78);
    Instrument_78.insert(AttachmentPoint_78.getString());
    FIX::CFICode CFICode_78("STRING_1433631093");
    noRelatedSym_0_0.set(CFICode_78);
    Instrument_78.insert(CFICode_78.getString());
    FIX::CPProgram CPProgram_78(1);
    noRelatedSym_0_0.set(CPProgram_78);
    Instrument_78.insert(CPProgram_78.getString());
    FIX::CPRegType CPRegType_78("STRING_1549038726");
    noRelatedSym_0_0.set(CPRegType_78);
    Instrument_78.insert(CPRegType_78.getString());
    FIX::CapPrice CapPrice_78;
    CapPrice_78.setString("5489820");
    noRelatedSym_0_0.set(CapPrice_78);
    Instrument_78.insert(CapPrice_78.getString());
    FIX::ContractMultiplier ContractMultiplier_78;
    ContractMultiplier_78.setString("12612635");
    noRelatedSym_0_0.set(ContractMultiplier_78);
    Instrument_78.insert(ContractMultiplier_78.getString());
    FIX::ContractMultiplierUnit ContractMultiplierUnit_78(0);
    noRelatedSym_0_0.set(ContractMultiplierUnit_78);
    Instrument_78.insert(ContractMultiplierUnit_78.getString());
    FIX::ContractSettlMonth ContractSettlMonth_78("MONTHYEAR_1644811313");
    noRelatedSym_0_0.set(ContractSettlMonth_78);
    Instrument_78.insert(ContractSettlMonth_78.getString());
    FIX::CountryOfIssue CountryOfIssue_78("COUNTRY_1402934172");
    noRelatedSym_0_0.set(CountryOfIssue_78);
    Instrument_78.insert(CountryOfIssue_78.getString());
    FIX::CouponPaymentDate CouponPaymentDate_78("LOCALMKTDATE_1197204434");
    noRelatedSym_0_0.set(CouponPaymentDate_78);
    Instrument_78.insert(CouponPaymentDate_78.getString());
    FIX::CouponRate CouponRate_78;
    CouponRate_78.setString("56.710000");
    noRelatedSym_0_0.set(CouponRate_78);
    Instrument_78.insert(CouponRate_78.getString());
    FIX::CreditRating CreditRating_78("STRING_266153170");
    noRelatedSym_0_0.set(CreditRating_78);
    Instrument_78.insert(CreditRating_78.getString());
    FIX::DatedDate DatedDate_78("LOCALMKTDATE_167168535");
    noRelatedSym_0_0.set(DatedDate_78);
    Instrument_78.insert(DatedDate_78.getString());
    FIX::DetachmentPoint DetachmentPoint_78;
    DetachmentPoint_78.setString("19.670000");
    noRelatedSym_0_0.set(DetachmentPoint_78);
    Instrument_78.insert(DetachmentPoint_78.getString());
    FIX::EncodedIssuer EncodedIssuer_78("DATA_1107834884");
    noRelatedSym_0_0.set(EncodedIssuer_78);
    Instrument_78.insert(EncodedIssuer_78.getString());
    FIX::EncodedIssuerLen EncodedIssuerLen_78(1152453997);
    noRelatedSym_0_0.set(EncodedIssuerLen_78);
    Instrument_78.insert(EncodedIssuerLen_78.getString());
    FIX::EncodedSecurityDesc EncodedSecurityDesc_78("DATA_401457611");
    noRelatedSym_0_0.set(EncodedSecurityDesc_78);
    Instrument_78.insert(EncodedSecurityDesc_78.getString());
    FIX::EncodedSecurityDescLen EncodedSecurityDescLen_78(1612736804);
    noRelatedSym_0_0.set(EncodedSecurityDescLen_78);
    Instrument_78.insert(EncodedSecurityDescLen_78.getString());
    FIX::ExerciseStyle ExerciseStyle_78(1);
    noRelatedSym_0_0.set(ExerciseStyle_78);
    Instrument_78.insert(ExerciseStyle_78.getString());
    FIX::Factor Factor_78;
    Factor_78.setString("10685837");
    noRelatedSym_0_0.set(Factor_78);
    Instrument_78.insert(Factor_78.getString());
    FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_78(true);
    noRelatedSym_0_0.set(FlexProductEligibilityIndicator_78);
    Instrument_78.insert(FlexProductEligibilityIndicator_78.getString());
    FIX::FlexibleIndicator FlexibleIndicator_78(true);
    noRelatedSym_0_0.set(FlexibleIndicator_78);
    Instrument_78.insert(FlexibleIndicator_78.getString());
    FIX::FloorPrice FloorPrice_78;
    FloorPrice_78.setString("14034015");
    noRelatedSym_0_0.set(FloorPrice_78);
    Instrument_78.insert(FloorPrice_78.getString());
    FIX::FlowScheduleType FlowScheduleType_78(3);
    noRelatedSym_0_0.set(FlowScheduleType_78);
    Instrument_78.insert(FlowScheduleType_78.getString());
    FIX::InstrRegistry InstrRegistry_78("STRING_757979032");
    noRelatedSym_0_0.set(InstrRegistry_78);
    Instrument_78.insert(InstrRegistry_78.getString());
    FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_78('3');
    noRelatedSym_0_0.set(InstrmtAssignmentMethod_78);
    Instrument_78.insert(InstrmtAssignmentMethod_78.getString());
    FIX::InterestAccrualDate InterestAccrualDate_78("LOCALMKTDATE_115316578");
    noRelatedSym_0_0.set(InterestAccrualDate_78);
    Instrument_78.insert(InterestAccrualDate_78.getString());
    FIX::IssueDate IssueDate_78("LOCALMKTDATE_1977818406");
    noRelatedSym_0_0.set(IssueDate_78);
    Instrument_78.insert(IssueDate_78.getString());
    FIX::Issuer Issuer_78("STRING_133679554");
    noRelatedSym_0_0.set(Issuer_78);
    Instrument_78.insert(Issuer_78.getString());
    FIX::ListMethod ListMethod_78(0);
    noRelatedSym_0_0.set(ListMethod_78);
    Instrument_78.insert(ListMethod_78.getString());
    FIX::LocaleOfIssue LocaleOfIssue_78("STRING_812937149");
    noRelatedSym_0_0.set(LocaleOfIssue_78);
    Instrument_78.insert(LocaleOfIssue_78.getString());
    FIX::MaturityDate MaturityDate_78("LOCALMKTDATE_586908253");
    noRelatedSym_0_0.set(MaturityDate_78);
    Instrument_78.insert(MaturityDate_78.getString());
    FIX::MaturityMonthYear MaturityMonthYear_78("MONTHYEAR_725385197");
    noRelatedSym_0_0.set(MaturityMonthYear_78);
    Instrument_78.insert(MaturityMonthYear_78.getString());
    FIX::MaturityTime MaturityTime_78("TZTIMEONLY_456839562");
    noRelatedSym_0_0.set(MaturityTime_78);
    Instrument_78.insert(MaturityTime_78.getString());
    FIX::MinPriceIncrement MinPriceIncrement_78;
    MinPriceIncrement_78.setString("21359469");
    noRelatedSym_0_0.set(MinPriceIncrement_78);
    Instrument_78.insert(MinPriceIncrement_78.getString());
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_78;
    MinPriceIncrementAmount_78.setString("12743672");
    noRelatedSym_0_0.set(MinPriceIncrementAmount_78);
    Instrument_78.insert(MinPriceIncrementAmount_78.getString());
    FIX::NTPositionLimit NTPositionLimit_78(1718103145);
    noRelatedSym_0_0.set(NTPositionLimit_78);
    Instrument_78.insert(NTPositionLimit_78.getString());
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_78;
    NotionalPercentageOutstanding_78.setString("88.940000");
    noRelatedSym_0_0.set(NotionalPercentageOutstanding_78);
    Instrument_78.insert(NotionalPercentageOutstanding_78.getString());
    FIX::OptAttribute OptAttribute_78('7');
    noRelatedSym_0_0.set(OptAttribute_78);
    Instrument_78.insert(OptAttribute_78.getString());
    FIX::OptPayoutAmount OptPayoutAmount_78;
    OptPayoutAmount_78.setString("9735536");
    noRelatedSym_0_0.set(OptPayoutAmount_78);
    Instrument_78.insert(OptPayoutAmount_78.getString());
    FIX::OptPayoutType OptPayoutType_78(3);
    noRelatedSym_0_0.set(OptPayoutType_78);
    Instrument_78.insert(OptPayoutType_78.getString());
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_78;
    OriginalNotionalPercentageOutstanding_78.setString("69.480000");
    noRelatedSym_0_0.set(OriginalNotionalPercentageOutstanding_78);
    Instrument_78.insert(OriginalNotionalPercentageOutstanding_78.getString());
    FIX::Pool Pool_78("STRING_1239706839");
    noRelatedSym_0_0.set(Pool_78);
    Instrument_78.insert(Pool_78.getString());
    FIX::PositionLimit PositionLimit_78(1990691864);
    noRelatedSym_0_0.set(PositionLimit_78);
    Instrument_78.insert(PositionLimit_78.getString());
    FIX::PriceQuoteMethod PriceQuoteMethod_78("STRING_PCTPAR");
    noRelatedSym_0_0.set(PriceQuoteMethod_78);
    Instrument_78.insert(PriceQuoteMethod_78.getString());
    FIX::PriceUnitOfMeasure PriceUnitOfMeasure_78("STRING_200058076");
    noRelatedSym_0_0.set(PriceUnitOfMeasure_78);
    Instrument_78.insert(PriceUnitOfMeasure_78.getString());
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_78;
    PriceUnitOfMeasureQty_78.setString("9956622");
    noRelatedSym_0_0.set(PriceUnitOfMeasureQty_78);
    Instrument_78.insert(PriceUnitOfMeasureQty_78.getString());
    FIX::Product Product_80(5);
    noRelatedSym_0_0.set(Product_80);
    Instrument_78.insert(Product_80.getString());
    FIX::ProductComplex ProductComplex_78("STRING_1812794880");
    noRelatedSym_0_0.set(ProductComplex_78);
    Instrument_78.insert(ProductComplex_78.getString());
    FIX::PutOrCall PutOrCall_78(1);
    noRelatedSym_0_0.set(PutOrCall_78);
    Instrument_78.insert(PutOrCall_78.getString());
    FIX::RedemptionDate RedemptionDate_78("LOCALMKTDATE_1624116630");
    noRelatedSym_0_0.set(RedemptionDate_78);
    Instrument_78.insert(RedemptionDate_78.getString());
    FIX::RepoCollateralSecurityType RepoCollateralSecurityType_78("STRING_649479337");
    noRelatedSym_0_0.set(RepoCollateralSecurityType_78);
    Instrument_78.insert(RepoCollateralSecurityType_78.getString());
    FIX::RepurchaseRate RepurchaseRate_78;
    RepurchaseRate_78.setString("24.570000");
    noRelatedSym_0_0.set(RepurchaseRate_78);
    Instrument_78.insert(RepurchaseRate_78.getString());
    FIX::RepurchaseTerm RepurchaseTerm_78(880034521);
    noRelatedSym_0_0.set(RepurchaseTerm_78);
    Instrument_78.insert(RepurchaseTerm_78.getString());
    FIX::RestructuringType RestructuringType_78("STRING_XR");
    noRelatedSym_0_0.set(RestructuringType_78);
    Instrument_78.insert(RestructuringType_78.getString());
    FIX::SecurityDesc SecurityDesc_78("STRING_1437771489");
    noRelatedSym_0_0.set(SecurityDesc_78);
    Instrument_78.insert(SecurityDesc_78.getString());
    FIX::SecurityExchange SecurityExchange_78("EXCHANGE_1264381051");
    noRelatedSym_0_0.set(SecurityExchange_78);
    Instrument_78.insert(SecurityExchange_78.getString());
    FIX::SecurityGroup SecurityGroup_78("STRING_1648421673");
    noRelatedSym_0_0.set(SecurityGroup_78);
    Instrument_78.insert(SecurityGroup_78.getString());
    FIX::SecurityID SecurityID_78("STRING_1268106247");
    noRelatedSym_0_0.set(SecurityID_78);
    Instrument_78.insert(SecurityID_78.getString());
    FIX::SecurityIDSource SecurityIDSource_78("STRING_8");
    noRelatedSym_0_0.set(SecurityIDSource_78);
    Instrument_78.insert(SecurityIDSource_78.getString());
    FIX::SecurityStatus SecurityStatus_78("STRING_1");
    noRelatedSym_0_0.set(SecurityStatus_78);
    Instrument_78.insert(SecurityStatus_78.getString());
    FIX::SecuritySubType SecuritySubType_79("STRING_2081043397");
    noRelatedSym_0_0.set(SecuritySubType_79);
    Instrument_78.insert(SecuritySubType_79.getString());
    FIX::SecurityType SecurityType_80("STRING_FXSWAP");
    noRelatedSym_0_0.set(SecurityType_80);
    Instrument_78.insert(SecurityType_80.getString());
    FIX::Seniority Seniority_78("STRING_SB");
    noRelatedSym_0_0.set(Seniority_78);
    Instrument_78.insert(Seniority_78.getString());
    FIX::SettlMethod SettlMethod_78('P');
    noRelatedSym_0_0.set(SettlMethod_78);
    Instrument_78.insert(SettlMethod_78.getString());
    FIX::SettleOnOpenFlag SettleOnOpenFlag_78("STRING_1973432190");
    noRelatedSym_0_0.set(SettleOnOpenFlag_78);
    Instrument_78.insert(SettleOnOpenFlag_78.getString());
    FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_78("STRING_792444587");
    noRelatedSym_0_0.set(StateOrProvinceOfIssue_78);
    Instrument_78.insert(StateOrProvinceOfIssue_78.getString());
    FIX::StrikeCurrency StrikeCurrency_78("EUR");
    noRelatedSym_0_0.set(StrikeCurrency_78);
    Instrument_78.insert(StrikeCurrency_78.getString());
    FIX::StrikeMultiplier StrikeMultiplier_78;
    StrikeMultiplier_78.setString("15641395");
    noRelatedSym_0_0.set(StrikeMultiplier_78);
    Instrument_78.insert(StrikeMultiplier_78.getString());
    FIX::StrikePrice StrikePrice_78;
    StrikePrice_78.setString("9345724");
    noRelatedSym_0_0.set(StrikePrice_78);
    Instrument_78.insert(StrikePrice_78.getString());
    FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_78(4);
    noRelatedSym_0_0.set(StrikePriceBoundaryMethod_78);
    Instrument_78.insert(StrikePriceBoundaryMethod_78.getString());
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_78;
    StrikePriceBoundaryPrecision_78.setString("64.600000");
    noRelatedSym_0_0.set(StrikePriceBoundaryPrecision_78);
    Instrument_78.insert(StrikePriceBoundaryPrecision_78.getString());
    FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_78(2);
    noRelatedSym_0_0.set(StrikePriceDeterminationMethod_78);
    Instrument_78.insert(StrikePriceDeterminationMethod_78.getString());
    FIX::StrikeValue StrikeValue_78;
    StrikeValue_78.setString("21189989");
    noRelatedSym_0_0.set(StrikeValue_78);
    Instrument_78.insert(StrikeValue_78.getString());
    FIX::Symbol Symbol_78("STRING_152568079");
    noRelatedSym_0_0.set(Symbol_78);
    Instrument_78.insert(Symbol_78.getString());
    FIX::SymbolSfx SymbolSfx_78("STRING_WI");
    noRelatedSym_0_0.set(SymbolSfx_78);
    Instrument_78.insert(SymbolSfx_78.getString());
    FIX::TimeUnit TimeUnit_78("STRING_Min");
    noRelatedSym_0_0.set(TimeUnit_78);
    Instrument_78.insert(TimeUnit_78.getString());
    FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_78(3);
    noRelatedSym_0_0.set(UnderlyingPriceDeterminationMethod_78);
    Instrument_78.insert(UnderlyingPriceDeterminationMethod_78.getString());
    FIX::UnitOfMeasure UnitOfMeasure_78("STRING_MMBtu");
    noRelatedSym_0_0.set(UnitOfMeasure_78);
    Instrument_78.insert(UnitOfMeasure_78.getString());
    FIX::UnitOfMeasureQty UnitOfMeasureQty_78;
    UnitOfMeasureQty_78.setString("13684742");
    noRelatedSym_0_0.set(UnitOfMeasureQty_78);
    Instrument_78.insert(UnitOfMeasureQty_78.getString());
    FIX::ValuationMethod ValuationMethod_78("STRING_EQTY");
    noRelatedSym_0_0.set(ValuationMethod_78);
    Instrument_78.insert(ValuationMethod_78.getString());
    all_values.push_back(Instrument_78);

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_149;
      FIX::ComplexEventCondition ComplexEventCondition_149(2);
      noComplexEvents_0_1_0.set(ComplexEventCondition_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventCondition_149.getString());
      FIX::ComplexEventPrice ComplexEventPrice_149;
      ComplexEventPrice_149.setString("10647684");
      noComplexEvents_0_1_0.set(ComplexEventPrice_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPrice_149.getString());
      FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_149(1);
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryMethod_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryMethod_149.getString());
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_149;
      ComplexEventPriceBoundaryPrecision_149.setString("45.770000");
      noComplexEvents_0_1_0.set(ComplexEventPriceBoundaryPrecision_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceBoundaryPrecision_149.getString());
      FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_149(2);
      noComplexEvents_0_1_0.set(ComplexEventPriceTimeType_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventPriceTimeType_149.getString());
      FIX::ComplexEventType ComplexEventType_149(7);
      noComplexEvents_0_1_0.set(ComplexEventType_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexEventType_149.getString());
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_149;
      ComplexOptPayoutAmount_149.setString("4591771");
      noComplexEvents_0_1_0.set(ComplexOptPayoutAmount_149);
      ComplexEvents_NoComplexEvents_149.insert(ComplexOptPayoutAmount_149.getString());
      all_values.push_back(ComplexEvents_NoComplexEvents_149);

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_308;
        FIX::ComplexEventEndDate ComplexEventEndDate_308(FIX::UTCTIMESTAMP(13, 41, 1, 9, 5, 2016));
        noComplexEventDates_0_0_2_0.set(ComplexEventEndDate_308);
        ComplexEventDates_NoComplexEventDates_308.insert(ComplexEventEndDate_308.getString());
        FIX::ComplexEventStartDate ComplexEventStartDate_308(FIX::UTCTIMESTAMP(5, 24, 3, 27, 1, 2009));
        noComplexEventDates_0_0_2_0.set(ComplexEventStartDate_308);
        ComplexEventDates_NoComplexEventDates_308.insert(ComplexEventStartDate_308.getString());
        all_values.push_back(ComplexEventDates_NoComplexEventDates_308);

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_626;
          FIX::ComplexEventEndTime ComplexEventEndTime_626(FIX::UTCTIMEONLY(18, 54, 33));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventEndTime_626);
          ComplexEventTimes_NoComplexEventTimes_626.insert(ComplexEventEndTime_626.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_626(FIX::UTCTIMEONLY(20, 34, 3));
          noComplexEventTimes_0_0_0_3_0.set(ComplexEventStartTime_626);
          ComplexEventTimes_NoComplexEventTimes_626.insert(ComplexEventStartTime_626.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_626);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_627;
          FIX::ComplexEventEndTime ComplexEventEndTime_627(FIX::UTCTIMEONLY(4, 45, 8));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventEndTime_627);
          ComplexEventTimes_NoComplexEventTimes_627.insert(ComplexEventEndTime_627.getString());
          FIX::ComplexEventStartTime ComplexEventStartTime_627(FIX::UTCTIMEONLY(13, 5, 23));
          noComplexEventTimes_0_0_0_3_1.set(ComplexEventStartTime_627);
          ComplexEventTimes_NoComplexEventTimes_627.insert(ComplexEventStartTime_627.getString());
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_627);

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_154;
      FIX::EventDate EventDate_154("LOCALMKTDATE_1927186410");
      noEvents_0_1_0.set(EventDate_154);
      EvntGrp_NoEvents_154.insert(EventDate_154.getString());
      FIX::EventPx EventPx_154;
      EventPx_154.setString("10878583");
      noEvents_0_1_0.set(EventPx_154);
      EvntGrp_NoEvents_154.insert(EventPx_154.getString());
      FIX::EventText EventText_154("STRING_1976492239");
      noEvents_0_1_0.set(EventText_154);
      EvntGrp_NoEvents_154.insert(EventText_154.getString());
      FIX::EventTime EventTime_154(FIX::UTCTIMESTAMP(5, 51, 5, 14, 4, 2006));
      noEvents_0_1_0.set(EventTime_154);
      EvntGrp_NoEvents_154.insert(EventTime_154.getString());
      FIX::EventType EventType_154(6);
      noEvents_0_1_0.set(EventType_154);
      EvntGrp_NoEvents_154.insert(EventType_154.getString());
      all_values.push_back(EvntGrp_NoEvents_154);

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_155;
      FIX::EventDate EventDate_155("LOCALMKTDATE_697517571");
      noEvents_0_1_1.set(EventDate_155);
      EvntGrp_NoEvents_155.insert(EventDate_155.getString());
      FIX::EventPx EventPx_155;
      EventPx_155.setString("3962774");
      noEvents_0_1_1.set(EventPx_155);
      EvntGrp_NoEvents_155.insert(EventPx_155.getString());
      FIX::EventText EventText_155("STRING_1202980150");
      noEvents_0_1_1.set(EventText_155);
      EvntGrp_NoEvents_155.insert(EventText_155.getString());
      FIX::EventTime EventTime_155(FIX::UTCTIMESTAMP(12, 4, 20, 12, 5, 2004));
      noEvents_0_1_1.set(EventTime_155);
      EvntGrp_NoEvents_155.insert(EventTime_155.getString());
      FIX::EventType EventType_155(9);
      noEvents_0_1_1.set(EventType_155);
      EvntGrp_NoEvents_155.insert(EventType_155.getString());
      all_values.push_back(EvntGrp_NoEvents_155);

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_156;
      FIX::EventDate EventDate_156("LOCALMKTDATE_1390576540");
      noEvents_0_1_2.set(EventDate_156);
      EvntGrp_NoEvents_156.insert(EventDate_156.getString());
      FIX::EventPx EventPx_156;
      EventPx_156.setString("9475624");
      noEvents_0_1_2.set(EventPx_156);
      EvntGrp_NoEvents_156.insert(EventPx_156.getString());
      FIX::EventText EventText_156("STRING_222899953");
      noEvents_0_1_2.set(EventText_156);
      EvntGrp_NoEvents_156.insert(EventText_156.getString());
      FIX::EventTime EventTime_156(FIX::UTCTIMESTAMP(7, 14, 45, 7, 10, 2014));
      noEvents_0_1_2.set(EventTime_156);
      EvntGrp_NoEvents_156.insert(EventTime_156.getString());
      FIX::EventType EventType_156(1);
      noEvents_0_1_2.set(EventType_156);
      EvntGrp_NoEvents_156.insert(EventType_156.getString());
      all_values.push_back(EvntGrp_NoEvents_156);

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_151;
      FIX::InstrumentPartyID InstrumentPartyID_151("STRING_47872799");
      noInstrumentParties_0_1_0.set(InstrumentPartyID_151);
      InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyID_151.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_151('2');
      noInstrumentParties_0_1_0.set(InstrumentPartyIDSource_151);
      InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyIDSource_151.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_151(76542448);
      noInstrumentParties_0_1_0.set(InstrumentPartyRole_151);
      InstrumentParties_NoInstrumentParties_151.insert(InstrumentPartyRole_151.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_151);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306;
        FIX::InstrumentPartySubID InstrumentPartySubID_306("STRING_1859484999");
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubID_306);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306.insert(InstrumentPartySubID_306.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_306(680009863);
        noInstrumentPartySubIDs_0_0_2_0.set(InstrumentPartySubIDType_306);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306.insert(InstrumentPartySubIDType_306.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_306);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307;
        FIX::InstrumentPartySubID InstrumentPartySubID_307("STRING_45621117");
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubID_307);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307.insert(InstrumentPartySubID_307.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_307(1267215036);
        noInstrumentPartySubIDs_0_0_2_1.set(InstrumentPartySubIDType_307);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307.insert(InstrumentPartySubIDType_307.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_307);

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_152;
      FIX::InstrumentPartyID InstrumentPartyID_152("STRING_1377527435");
      noInstrumentParties_0_1_1.set(InstrumentPartyID_152);
      InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyID_152.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_152('4');
      noInstrumentParties_0_1_1.set(InstrumentPartyIDSource_152);
      InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyIDSource_152.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_152(322711538);
      noInstrumentParties_0_1_1.set(InstrumentPartyRole_152);
      InstrumentParties_NoInstrumentParties_152.insert(InstrumentPartyRole_152.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_152);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308;
        FIX::InstrumentPartySubID InstrumentPartySubID_308("STRING_623069338");
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubID_308);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308.insert(InstrumentPartySubID_308.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_308(2140635703);
        noInstrumentPartySubIDs_0_1_2_0.set(InstrumentPartySubIDType_308);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308.insert(InstrumentPartySubIDType_308.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309;
        FIX::InstrumentPartySubID InstrumentPartySubID_309("STRING_2073034594");
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubID_309);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309.insert(InstrumentPartySubID_309.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_309(481298363);
        noInstrumentPartySubIDs_0_1_2_1.set(InstrumentPartySubIDType_309);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309.insert(InstrumentPartySubIDType_309.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310;
        FIX::InstrumentPartySubID InstrumentPartySubID_310("STRING_1647010863");
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubID_310);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310.insert(InstrumentPartySubID_310.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_310(816375433);
        noInstrumentPartySubIDs_0_1_2_2.set(InstrumentPartySubIDType_310);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310.insert(InstrumentPartySubIDType_310.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_153;
      FIX::InstrumentPartyID InstrumentPartyID_153("STRING_558229971");
      noInstrumentParties_0_1_2.set(InstrumentPartyID_153);
      InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyID_153.getString());
      FIX::InstrumentPartyIDSource InstrumentPartyIDSource_153('8');
      noInstrumentParties_0_1_2.set(InstrumentPartyIDSource_153);
      InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyIDSource_153.getString());
      FIX::InstrumentPartyRole InstrumentPartyRole_153(1763937867);
      noInstrumentParties_0_1_2.set(InstrumentPartyRole_153);
      InstrumentParties_NoInstrumentParties_153.insert(InstrumentPartyRole_153.getString());
      all_values.push_back(InstrumentParties_NoInstrumentParties_153);

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311;
        FIX::InstrumentPartySubID InstrumentPartySubID_311("STRING_1208468956");
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubID_311);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311.insert(InstrumentPartySubID_311.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_311(802420467);
        noInstrumentPartySubIDs_0_2_2_0.set(InstrumentPartySubIDType_311);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311.insert(InstrumentPartySubIDType_311.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312;
        FIX::InstrumentPartySubID InstrumentPartySubID_312("STRING_578202011");
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubID_312);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312.insert(InstrumentPartySubID_312.getString());
        FIX::InstrumentPartySubIDType InstrumentPartySubIDType_312(913799993);
        noInstrumentPartySubIDs_0_2_2_1.set(InstrumentPartySubIDType_312);
        InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312.insert(InstrumentPartySubIDType_312.getString());
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_167;
      FIX::SecurityAltID SecurityAltID_167("STRING_317825796");
      noSecurityAltID_0_1_0.set(SecurityAltID_167);
      SecAltIDGrp_NoSecurityAltID_167.insert(SecurityAltID_167.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_167("STRING_398833793");
      noSecurityAltID_0_1_0.set(SecurityAltIDSource_167);
      SecAltIDGrp_NoSecurityAltID_167.insert(SecurityAltIDSource_167.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_167);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_168;
      FIX::SecurityAltID SecurityAltID_168("STRING_1456020902");
      noSecurityAltID_0_1_1.set(SecurityAltID_168);
      SecAltIDGrp_NoSecurityAltID_168.insert(SecurityAltID_168.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_168("STRING_2033941820");
      noSecurityAltID_0_1_1.set(SecurityAltIDSource_168);
      SecAltIDGrp_NoSecurityAltID_168.insert(SecurityAltIDSource_168.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_168);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_169;
      FIX::SecurityAltID SecurityAltID_169("STRING_446706593");
      noSecurityAltID_0_1_2.set(SecurityAltID_169);
      SecAltIDGrp_NoSecurityAltID_169.insert(SecurityAltID_169.getString());
      FIX::SecurityAltIDSource SecurityAltIDSource_169("STRING_1436543347");
      noSecurityAltID_0_1_2.set(SecurityAltIDSource_169);
      SecAltIDGrp_NoSecurityAltID_169.insert(SecurityAltIDSource_169.getString());
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_169);

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_156;
    FIX::SecurityXML SecurityXML_157("XMLDATA_2110484268");
    noRelatedSym_0_0.set(SecurityXML_157);
    FIX::SecurityXMLLen SecurityXMLLen_78(1801573437);
    noRelatedSym_0_0.set(SecurityXMLLen_78);
    FIX::SecurityXMLSchema SecurityXMLSchema_78("STRING_1148544698");
    noRelatedSym_0_0.set(SecurityXMLSchema_78);
    SecurityXML_156.insert(SecurityXMLSchema_78.getString());
    all_values.push_back(SecurityXML_156);

    // InstrumentExtension
    multiset<string> InstrumentExtension_14;
    FIX::DeliveryForm DeliveryForm_14(1);
    noRelatedSym_0_0.set(DeliveryForm_14);
    InstrumentExtension_14.insert(DeliveryForm_14.getString());
    FIX::PctAtRisk PctAtRisk_14;
    PctAtRisk_14.setString("45.540000");
    noRelatedSym_0_0.set(PctAtRisk_14);
    InstrumentExtension_14.insert(PctAtRisk_14.getString());
    all_values.push_back(InstrumentExtension_14);

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_29;
      FIX::InstrAttribType InstrAttribType_29(99);
      noInstrAttrib_0_1_0.set(InstrAttribType_29);
      AttrbGrp_NoInstrAttrib_29.insert(InstrAttribType_29.getString());
      FIX::InstrAttribValue InstrAttribValue_29("STRING_141609489");
      noInstrAttrib_0_1_0.set(InstrAttribValue_29);
      AttrbGrp_NoInstrAttrib_29.insert(InstrAttribValue_29.getString());
      all_values.push_back(AttrbGrp_NoInstrAttrib_29);

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    // SecLstUpdRelSymsLegGrp
    // Group SecLstUpdRelSymsLegGrp.NoLegs
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_0;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_0;
      FIX::LegSettlType LegSettlType_25('4');
      noLegs_0_1_0.set(LegSettlType_25);
      SecLstUpdRelSymsLegGrp_NoLegs_0.insert(LegSettlType_25.getString());
      FIX::LegSwapType LegSwapType_25(5);
      noLegs_0_1_0.set(LegSwapType_25);
      SecLstUpdRelSymsLegGrp_NoLegs_0.insert(LegSwapType_25.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_0);

      // InstrumentLeg
      multiset<string> InstrumentLeg_126;
      FIX::EncodedLegIssuer EncodedLegIssuer_126("DATA_584139679");
      noLegs_0_1_0.set(EncodedLegIssuer_126);
      InstrumentLeg_126.insert(EncodedLegIssuer_126.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_126(2120268459);
      noLegs_0_1_0.set(EncodedLegIssuerLen_126);
      InstrumentLeg_126.insert(EncodedLegIssuerLen_126.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_126("DATA_1245977190");
      noLegs_0_1_0.set(EncodedLegSecurityDesc_126);
      InstrumentLeg_126.insert(EncodedLegSecurityDesc_126.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_126(83666895);
      noLegs_0_1_0.set(EncodedLegSecurityDescLen_126);
      InstrumentLeg_126.insert(EncodedLegSecurityDescLen_126.getString());
      FIX::LegCFICode LegCFICode_126("STRING_789160244");
      noLegs_0_1_0.set(LegCFICode_126);
      InstrumentLeg_126.insert(LegCFICode_126.getString());
      FIX::LegContractMultiplier LegContractMultiplier_126;
      LegContractMultiplier_126.setString("18042071");
      noLegs_0_1_0.set(LegContractMultiplier_126);
      InstrumentLeg_126.insert(LegContractMultiplier_126.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_126(973770650);
      noLegs_0_1_0.set(LegContractMultiplierUnit_126);
      InstrumentLeg_126.insert(LegContractMultiplierUnit_126.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_126("MONTHYEAR_405614464");
      noLegs_0_1_0.set(LegContractSettlMonth_126);
      InstrumentLeg_126.insert(LegContractSettlMonth_126.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_126("COUNTRY_437853438");
      noLegs_0_1_0.set(LegCountryOfIssue_126);
      InstrumentLeg_126.insert(LegCountryOfIssue_126.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_126("LOCALMKTDATE_34755958");
      noLegs_0_1_0.set(LegCouponPaymentDate_126);
      InstrumentLeg_126.insert(LegCouponPaymentDate_126.getString());
      FIX::LegCouponRate LegCouponRate_126;
      LegCouponRate_126.setString("49.310000");
      noLegs_0_1_0.set(LegCouponRate_126);
      InstrumentLeg_126.insert(LegCouponRate_126.getString());
      FIX::LegCreditRating LegCreditRating_126("STRING_1016055449");
      noLegs_0_1_0.set(LegCreditRating_126);
      InstrumentLeg_126.insert(LegCreditRating_126.getString());
      FIX::LegCurrency LegCurrency_126("EUR");
      noLegs_0_1_0.set(LegCurrency_126);
      InstrumentLeg_126.insert(LegCurrency_126.getString());
      FIX::LegDatedDate LegDatedDate_126("LOCALMKTDATE_1333881245");
      noLegs_0_1_0.set(LegDatedDate_126);
      InstrumentLeg_126.insert(LegDatedDate_126.getString());
      FIX::LegExerciseStyle LegExerciseStyle_126(1347389745);
      noLegs_0_1_0.set(LegExerciseStyle_126);
      InstrumentLeg_126.insert(LegExerciseStyle_126.getString());
      FIX::LegFactor LegFactor_126;
      LegFactor_126.setString("281218");
      noLegs_0_1_0.set(LegFactor_126);
      InstrumentLeg_126.insert(LegFactor_126.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_126(1220339417);
      noLegs_0_1_0.set(LegFlowScheduleType_126);
      InstrumentLeg_126.insert(LegFlowScheduleType_126.getString());
      FIX::LegInstrRegistry LegInstrRegistry_126("STRING_1794096338");
      noLegs_0_1_0.set(LegInstrRegistry_126);
      InstrumentLeg_126.insert(LegInstrRegistry_126.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_126("LOCALMKTDATE_1464665234");
      noLegs_0_1_0.set(LegInterestAccrualDate_126);
      InstrumentLeg_126.insert(LegInterestAccrualDate_126.getString());
      FIX::LegIssueDate LegIssueDate_126("LOCALMKTDATE_1183340038");
      noLegs_0_1_0.set(LegIssueDate_126);
      InstrumentLeg_126.insert(LegIssueDate_126.getString());
      FIX::LegIssuer LegIssuer_126("STRING_1448186128");
      noLegs_0_1_0.set(LegIssuer_126);
      InstrumentLeg_126.insert(LegIssuer_126.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_126("STRING_465726284");
      noLegs_0_1_0.set(LegLocaleOfIssue_126);
      InstrumentLeg_126.insert(LegLocaleOfIssue_126.getString());
      FIX::LegMaturityDate LegMaturityDate_126("LOCALMKTDATE_1826350522");
      noLegs_0_1_0.set(LegMaturityDate_126);
      InstrumentLeg_126.insert(LegMaturityDate_126.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_126("MONTHYEAR_1147897034");
      noLegs_0_1_0.set(LegMaturityMonthYear_126);
      InstrumentLeg_126.insert(LegMaturityMonthYear_126.getString());
      FIX::LegMaturityTime LegMaturityTime_126("TZTIMEONLY_734002370");
      noLegs_0_1_0.set(LegMaturityTime_126);
      InstrumentLeg_126.insert(LegMaturityTime_126.getString());
      FIX::LegOptAttribute LegOptAttribute_126('1');
      noLegs_0_1_0.set(LegOptAttribute_126);
      InstrumentLeg_126.insert(LegOptAttribute_126.getString());
      FIX::LegOptionRatio LegOptionRatio_126;
      LegOptionRatio_126.setString("12895065");
      noLegs_0_1_0.set(LegOptionRatio_126);
      InstrumentLeg_126.insert(LegOptionRatio_126.getString());
      FIX::LegPool LegPool_126("STRING_1324989994");
      noLegs_0_1_0.set(LegPool_126);
      InstrumentLeg_126.insert(LegPool_126.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_126("STRING_1746638658");
      noLegs_0_1_0.set(LegPriceUnitOfMeasure_126);
      InstrumentLeg_126.insert(LegPriceUnitOfMeasure_126.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_126;
      LegPriceUnitOfMeasureQty_126.setString("20541853");
      noLegs_0_1_0.set(LegPriceUnitOfMeasureQty_126);
      InstrumentLeg_126.insert(LegPriceUnitOfMeasureQty_126.getString());
      FIX::LegProduct LegProduct_126(1909129674);
      noLegs_0_1_0.set(LegProduct_126);
      InstrumentLeg_126.insert(LegProduct_126.getString());
      FIX::LegPutOrCall LegPutOrCall_126(1719423469);
      noLegs_0_1_0.set(LegPutOrCall_126);
      InstrumentLeg_126.insert(LegPutOrCall_126.getString());
      FIX::LegRatioQty LegRatioQty_126;
      LegRatioQty_126.setString("11526788");
      noLegs_0_1_0.set(LegRatioQty_126);
      InstrumentLeg_126.insert(LegRatioQty_126.getString());
      FIX::LegRedemptionDate LegRedemptionDate_126("LOCALMKTDATE_1992796569");
      noLegs_0_1_0.set(LegRedemptionDate_126);
      InstrumentLeg_126.insert(LegRedemptionDate_126.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_126("STRING_361100066");
      noLegs_0_1_0.set(LegRepoCollateralSecurityType_126);
      InstrumentLeg_126.insert(LegRepoCollateralSecurityType_126.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_126;
      LegRepurchaseRate_126.setString("24.070000");
      noLegs_0_1_0.set(LegRepurchaseRate_126);
      InstrumentLeg_126.insert(LegRepurchaseRate_126.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_126(819083571);
      noLegs_0_1_0.set(LegRepurchaseTerm_126);
      InstrumentLeg_126.insert(LegRepurchaseTerm_126.getString());
      FIX::LegSecurityDesc LegSecurityDesc_126("STRING_766714530");
      noLegs_0_1_0.set(LegSecurityDesc_126);
      InstrumentLeg_126.insert(LegSecurityDesc_126.getString());
      FIX::LegSecurityExchange LegSecurityExchange_126("EXCHANGE_1247255845");
      noLegs_0_1_0.set(LegSecurityExchange_126);
      InstrumentLeg_126.insert(LegSecurityExchange_126.getString());
      FIX::LegSecurityID LegSecurityID_126("STRING_853839530");
      noLegs_0_1_0.set(LegSecurityID_126);
      InstrumentLeg_126.insert(LegSecurityID_126.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_126("STRING_1974749461");
      noLegs_0_1_0.set(LegSecurityIDSource_126);
      InstrumentLeg_126.insert(LegSecurityIDSource_126.getString());
      FIX::LegSecuritySubType LegSecuritySubType_126("STRING_115827646");
      noLegs_0_1_0.set(LegSecuritySubType_126);
      InstrumentLeg_126.insert(LegSecuritySubType_126.getString());
      FIX::LegSecurityType LegSecurityType_126("STRING_1802395482");
      noLegs_0_1_0.set(LegSecurityType_126);
      InstrumentLeg_126.insert(LegSecurityType_126.getString());
      FIX::LegSide LegSide_126('5');
      noLegs_0_1_0.set(LegSide_126);
      InstrumentLeg_126.insert(LegSide_126.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_126("STRING_1449708891");
      noLegs_0_1_0.set(LegStateOrProvinceOfIssue_126);
      InstrumentLeg_126.insert(LegStateOrProvinceOfIssue_126.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_126("EUR");
      noLegs_0_1_0.set(LegStrikeCurrency_126);
      InstrumentLeg_126.insert(LegStrikeCurrency_126.getString());
      FIX::LegStrikePrice LegStrikePrice_126;
      LegStrikePrice_126.setString("5225646");
      noLegs_0_1_0.set(LegStrikePrice_126);
      InstrumentLeg_126.insert(LegStrikePrice_126.getString());
      FIX::LegSymbol LegSymbol_126("STRING_648914270");
      noLegs_0_1_0.set(LegSymbol_126);
      InstrumentLeg_126.insert(LegSymbol_126.getString());
      FIX::LegSymbolSfx LegSymbolSfx_126("STRING_2039637567");
      noLegs_0_1_0.set(LegSymbolSfx_126);
      InstrumentLeg_126.insert(LegSymbolSfx_126.getString());
      FIX::LegTimeUnit LegTimeUnit_126("STRING_1705904698");
      noLegs_0_1_0.set(LegTimeUnit_126);
      InstrumentLeg_126.insert(LegTimeUnit_126.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_126("STRING_2097100398");
      noLegs_0_1_0.set(LegUnitOfMeasure_126);
      InstrumentLeg_126.insert(LegUnitOfMeasure_126.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_126;
      LegUnitOfMeasureQty_126.setString("3578802");
      noLegs_0_1_0.set(LegUnitOfMeasureQty_126);
      InstrumentLeg_126.insert(LegUnitOfMeasureQty_126.getString());
      all_values.push_back(InstrumentLeg_126);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_253;
        FIX::LegSecurityAltID LegSecurityAltID_253("STRING_1097513784");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltID_253);
        LegSecAltIDGrp_NoLegSecurityAltID_253.insert(LegSecurityAltID_253.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_253("STRING_1091882573");
        noLegSecurityAltID_0_0_2_0.set(LegSecurityAltIDSource_253);
        LegSecAltIDGrp_NoLegSecurityAltID_253.insert(LegSecurityAltIDSource_253.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_253);

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_15;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_15("JPY");
      noLegs_0_1_0.set(LegBenchmarkCurveCurrency_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurveCurrency_15.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_15("STRING_269388919");
      noLegs_0_1_0.set(LegBenchmarkCurveName_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurveName_15.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_15("STRING_535847727");
      noLegs_0_1_0.set(LegBenchmarkCurvePoint_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkCurvePoint_15.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_15;
      LegBenchmarkPrice_15.setString("1462383");
      noLegs_0_1_0.set(LegBenchmarkPrice_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkPrice_15.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_15(31034945);
      noLegs_0_1_0.set(LegBenchmarkPriceType_15);
      LegBenchmarkCurveData_15.insert(LegBenchmarkPriceType_15.getString());
      all_values.push_back(LegBenchmarkCurveData_15);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_51;
        FIX::LegStipulationType LegStipulationType_51("STRING_1298917256");
        noLegStipulations_0_0_2_0.set(LegStipulationType_51);
        LegStipulations_NoLegStipulations_51.insert(LegStipulationType_51.getString());
        FIX::LegStipulationValue LegStipulationValue_51("STRING_2023831514");
        noLegStipulations_0_0_2_0.set(LegStipulationValue_51);
        LegStipulations_NoLegStipulations_51.insert(LegStipulationValue_51.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_51);

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_1;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_1;
      FIX::LegSettlType LegSettlType_26('4');
      noLegs_0_1_1.set(LegSettlType_26);
      SecLstUpdRelSymsLegGrp_NoLegs_1.insert(LegSettlType_26.getString());
      FIX::LegSwapType LegSwapType_26(5);
      noLegs_0_1_1.set(LegSwapType_26);
      SecLstUpdRelSymsLegGrp_NoLegs_1.insert(LegSwapType_26.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_1);

      // InstrumentLeg
      multiset<string> InstrumentLeg_127;
      FIX::EncodedLegIssuer EncodedLegIssuer_127("DATA_695431438");
      noLegs_0_1_1.set(EncodedLegIssuer_127);
      InstrumentLeg_127.insert(EncodedLegIssuer_127.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_127(1235602145);
      noLegs_0_1_1.set(EncodedLegIssuerLen_127);
      InstrumentLeg_127.insert(EncodedLegIssuerLen_127.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_127("DATA_1208091860");
      noLegs_0_1_1.set(EncodedLegSecurityDesc_127);
      InstrumentLeg_127.insert(EncodedLegSecurityDesc_127.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_127(1549270968);
      noLegs_0_1_1.set(EncodedLegSecurityDescLen_127);
      InstrumentLeg_127.insert(EncodedLegSecurityDescLen_127.getString());
      FIX::LegCFICode LegCFICode_127("STRING_1062867958");
      noLegs_0_1_1.set(LegCFICode_127);
      InstrumentLeg_127.insert(LegCFICode_127.getString());
      FIX::LegContractMultiplier LegContractMultiplier_127;
      LegContractMultiplier_127.setString("13239195");
      noLegs_0_1_1.set(LegContractMultiplier_127);
      InstrumentLeg_127.insert(LegContractMultiplier_127.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_127(1204182802);
      noLegs_0_1_1.set(LegContractMultiplierUnit_127);
      InstrumentLeg_127.insert(LegContractMultiplierUnit_127.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_127("MONTHYEAR_1609718404");
      noLegs_0_1_1.set(LegContractSettlMonth_127);
      InstrumentLeg_127.insert(LegContractSettlMonth_127.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_127("COUNTRY_626144749");
      noLegs_0_1_1.set(LegCountryOfIssue_127);
      InstrumentLeg_127.insert(LegCountryOfIssue_127.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_127("LOCALMKTDATE_59000733");
      noLegs_0_1_1.set(LegCouponPaymentDate_127);
      InstrumentLeg_127.insert(LegCouponPaymentDate_127.getString());
      FIX::LegCouponRate LegCouponRate_127;
      LegCouponRate_127.setString("70.890000");
      noLegs_0_1_1.set(LegCouponRate_127);
      InstrumentLeg_127.insert(LegCouponRate_127.getString());
      FIX::LegCreditRating LegCreditRating_127("STRING_1148709410");
      noLegs_0_1_1.set(LegCreditRating_127);
      InstrumentLeg_127.insert(LegCreditRating_127.getString());
      FIX::LegCurrency LegCurrency_127("USD");
      noLegs_0_1_1.set(LegCurrency_127);
      InstrumentLeg_127.insert(LegCurrency_127.getString());
      FIX::LegDatedDate LegDatedDate_127("LOCALMKTDATE_707130460");
      noLegs_0_1_1.set(LegDatedDate_127);
      InstrumentLeg_127.insert(LegDatedDate_127.getString());
      FIX::LegExerciseStyle LegExerciseStyle_127(657531753);
      noLegs_0_1_1.set(LegExerciseStyle_127);
      InstrumentLeg_127.insert(LegExerciseStyle_127.getString());
      FIX::LegFactor LegFactor_127;
      LegFactor_127.setString("2872412");
      noLegs_0_1_1.set(LegFactor_127);
      InstrumentLeg_127.insert(LegFactor_127.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_127(2091902033);
      noLegs_0_1_1.set(LegFlowScheduleType_127);
      InstrumentLeg_127.insert(LegFlowScheduleType_127.getString());
      FIX::LegInstrRegistry LegInstrRegistry_127("STRING_1755045538");
      noLegs_0_1_1.set(LegInstrRegistry_127);
      InstrumentLeg_127.insert(LegInstrRegistry_127.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_127("LOCALMKTDATE_1379123784");
      noLegs_0_1_1.set(LegInterestAccrualDate_127);
      InstrumentLeg_127.insert(LegInterestAccrualDate_127.getString());
      FIX::LegIssueDate LegIssueDate_127("LOCALMKTDATE_881111102");
      noLegs_0_1_1.set(LegIssueDate_127);
      InstrumentLeg_127.insert(LegIssueDate_127.getString());
      FIX::LegIssuer LegIssuer_127("STRING_1994582198");
      noLegs_0_1_1.set(LegIssuer_127);
      InstrumentLeg_127.insert(LegIssuer_127.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_127("STRING_1648512703");
      noLegs_0_1_1.set(LegLocaleOfIssue_127);
      InstrumentLeg_127.insert(LegLocaleOfIssue_127.getString());
      FIX::LegMaturityDate LegMaturityDate_127("LOCALMKTDATE_1416958830");
      noLegs_0_1_1.set(LegMaturityDate_127);
      InstrumentLeg_127.insert(LegMaturityDate_127.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_127("MONTHYEAR_2140820561");
      noLegs_0_1_1.set(LegMaturityMonthYear_127);
      InstrumentLeg_127.insert(LegMaturityMonthYear_127.getString());
      FIX::LegMaturityTime LegMaturityTime_127("TZTIMEONLY_1679547649");
      noLegs_0_1_1.set(LegMaturityTime_127);
      InstrumentLeg_127.insert(LegMaturityTime_127.getString());
      FIX::LegOptAttribute LegOptAttribute_127('1');
      noLegs_0_1_1.set(LegOptAttribute_127);
      InstrumentLeg_127.insert(LegOptAttribute_127.getString());
      FIX::LegOptionRatio LegOptionRatio_127;
      LegOptionRatio_127.setString("12922541");
      noLegs_0_1_1.set(LegOptionRatio_127);
      InstrumentLeg_127.insert(LegOptionRatio_127.getString());
      FIX::LegPool LegPool_127("STRING_1555895515");
      noLegs_0_1_1.set(LegPool_127);
      InstrumentLeg_127.insert(LegPool_127.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_127("STRING_1993633994");
      noLegs_0_1_1.set(LegPriceUnitOfMeasure_127);
      InstrumentLeg_127.insert(LegPriceUnitOfMeasure_127.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_127;
      LegPriceUnitOfMeasureQty_127.setString("12530901");
      noLegs_0_1_1.set(LegPriceUnitOfMeasureQty_127);
      InstrumentLeg_127.insert(LegPriceUnitOfMeasureQty_127.getString());
      FIX::LegProduct LegProduct_127(103843305);
      noLegs_0_1_1.set(LegProduct_127);
      InstrumentLeg_127.insert(LegProduct_127.getString());
      FIX::LegPutOrCall LegPutOrCall_127(1081752491);
      noLegs_0_1_1.set(LegPutOrCall_127);
      InstrumentLeg_127.insert(LegPutOrCall_127.getString());
      FIX::LegRatioQty LegRatioQty_127;
      LegRatioQty_127.setString("3136983");
      noLegs_0_1_1.set(LegRatioQty_127);
      InstrumentLeg_127.insert(LegRatioQty_127.getString());
      FIX::LegRedemptionDate LegRedemptionDate_127("LOCALMKTDATE_1653114273");
      noLegs_0_1_1.set(LegRedemptionDate_127);
      InstrumentLeg_127.insert(LegRedemptionDate_127.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_127("STRING_2144620449");
      noLegs_0_1_1.set(LegRepoCollateralSecurityType_127);
      InstrumentLeg_127.insert(LegRepoCollateralSecurityType_127.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_127;
      LegRepurchaseRate_127.setString("79.040000");
      noLegs_0_1_1.set(LegRepurchaseRate_127);
      InstrumentLeg_127.insert(LegRepurchaseRate_127.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_127(709813427);
      noLegs_0_1_1.set(LegRepurchaseTerm_127);
      InstrumentLeg_127.insert(LegRepurchaseTerm_127.getString());
      FIX::LegSecurityDesc LegSecurityDesc_127("STRING_1606855205");
      noLegs_0_1_1.set(LegSecurityDesc_127);
      InstrumentLeg_127.insert(LegSecurityDesc_127.getString());
      FIX::LegSecurityExchange LegSecurityExchange_127("EXCHANGE_116279005");
      noLegs_0_1_1.set(LegSecurityExchange_127);
      InstrumentLeg_127.insert(LegSecurityExchange_127.getString());
      FIX::LegSecurityID LegSecurityID_127("STRING_768814161");
      noLegs_0_1_1.set(LegSecurityID_127);
      InstrumentLeg_127.insert(LegSecurityID_127.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_127("STRING_1644062294");
      noLegs_0_1_1.set(LegSecurityIDSource_127);
      InstrumentLeg_127.insert(LegSecurityIDSource_127.getString());
      FIX::LegSecuritySubType LegSecuritySubType_127("STRING_1264988415");
      noLegs_0_1_1.set(LegSecuritySubType_127);
      InstrumentLeg_127.insert(LegSecuritySubType_127.getString());
      FIX::LegSecurityType LegSecurityType_127("STRING_1476729164");
      noLegs_0_1_1.set(LegSecurityType_127);
      InstrumentLeg_127.insert(LegSecurityType_127.getString());
      FIX::LegSide LegSide_127('1');
      noLegs_0_1_1.set(LegSide_127);
      InstrumentLeg_127.insert(LegSide_127.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_127("STRING_1972118876");
      noLegs_0_1_1.set(LegStateOrProvinceOfIssue_127);
      InstrumentLeg_127.insert(LegStateOrProvinceOfIssue_127.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_127("EUR");
      noLegs_0_1_1.set(LegStrikeCurrency_127);
      InstrumentLeg_127.insert(LegStrikeCurrency_127.getString());
      FIX::LegStrikePrice LegStrikePrice_127;
      LegStrikePrice_127.setString("19165372");
      noLegs_0_1_1.set(LegStrikePrice_127);
      InstrumentLeg_127.insert(LegStrikePrice_127.getString());
      FIX::LegSymbol LegSymbol_127("STRING_1741822808");
      noLegs_0_1_1.set(LegSymbol_127);
      InstrumentLeg_127.insert(LegSymbol_127.getString());
      FIX::LegSymbolSfx LegSymbolSfx_127("STRING_1092304649");
      noLegs_0_1_1.set(LegSymbolSfx_127);
      InstrumentLeg_127.insert(LegSymbolSfx_127.getString());
      FIX::LegTimeUnit LegTimeUnit_127("STRING_650164715");
      noLegs_0_1_1.set(LegTimeUnit_127);
      InstrumentLeg_127.insert(LegTimeUnit_127.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_127("STRING_1588921358");
      noLegs_0_1_1.set(LegUnitOfMeasure_127);
      InstrumentLeg_127.insert(LegUnitOfMeasure_127.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_127;
      LegUnitOfMeasureQty_127.setString("5933337");
      noLegs_0_1_1.set(LegUnitOfMeasureQty_127);
      InstrumentLeg_127.insert(LegUnitOfMeasureQty_127.getString());
      all_values.push_back(InstrumentLeg_127);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_254;
        FIX::LegSecurityAltID LegSecurityAltID_254("STRING_1582258271");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltID_254);
        LegSecAltIDGrp_NoLegSecurityAltID_254.insert(LegSecurityAltID_254.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_254("STRING_125397705");
        noLegSecurityAltID_0_1_2_0.set(LegSecurityAltIDSource_254);
        LegSecAltIDGrp_NoLegSecurityAltID_254.insert(LegSecurityAltIDSource_254.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_254);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_255;
        FIX::LegSecurityAltID LegSecurityAltID_255("STRING_1444386276");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltID_255);
        LegSecAltIDGrp_NoLegSecurityAltID_255.insert(LegSecurityAltID_255.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_255("STRING_727028792");
        noLegSecurityAltID_0_1_2_1.set(LegSecurityAltIDSource_255);
        LegSecAltIDGrp_NoLegSecurityAltID_255.insert(LegSecurityAltIDSource_255.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_255);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_256;
        FIX::LegSecurityAltID LegSecurityAltID_256("STRING_1681293221");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltID_256);
        LegSecAltIDGrp_NoLegSecurityAltID_256.insert(LegSecurityAltID_256.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_256("STRING_1290536622");
        noLegSecurityAltID_0_1_2_2.set(LegSecurityAltIDSource_256);
        LegSecAltIDGrp_NoLegSecurityAltID_256.insert(LegSecurityAltIDSource_256.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_256);

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_16;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_16("GBP");
      noLegs_0_1_1.set(LegBenchmarkCurveCurrency_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurveCurrency_16.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_16("STRING_224805465");
      noLegs_0_1_1.set(LegBenchmarkCurveName_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurveName_16.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_16("STRING_146333727");
      noLegs_0_1_1.set(LegBenchmarkCurvePoint_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkCurvePoint_16.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_16;
      LegBenchmarkPrice_16.setString("12907671");
      noLegs_0_1_1.set(LegBenchmarkPrice_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkPrice_16.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_16(221942266);
      noLegs_0_1_1.set(LegBenchmarkPriceType_16);
      LegBenchmarkCurveData_16.insert(LegBenchmarkPriceType_16.getString());
      all_values.push_back(LegBenchmarkCurveData_16);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_52;
        FIX::LegStipulationType LegStipulationType_52("STRING_2000580579");
        noLegStipulations_0_1_2_0.set(LegStipulationType_52);
        LegStipulations_NoLegStipulations_52.insert(LegStipulationType_52.getString());
        FIX::LegStipulationValue LegStipulationValue_52("STRING_1828797471");
        noLegStipulations_0_1_2_0.set(LegStipulationValue_52);
        LegStipulations_NoLegStipulations_52.insert(LegStipulationValue_52.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_52);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_53;
        FIX::LegStipulationType LegStipulationType_53("STRING_1900230636");
        noLegStipulations_0_1_2_1.set(LegStipulationType_53);
        LegStipulations_NoLegStipulations_53.insert(LegStipulationType_53.getString());
        FIX::LegStipulationValue LegStipulationValue_53("STRING_621911092");
        noLegStipulations_0_1_2_1.set(LegStipulationValue_53);
        LegStipulations_NoLegStipulations_53.insert(LegStipulationValue_53.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_53);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_54;
        FIX::LegStipulationType LegStipulationType_54("STRING_1325376117");
        noLegStipulations_0_1_2_2.set(LegStipulationType_54);
        LegStipulations_NoLegStipulations_54.insert(LegStipulationType_54.getString());
        FIX::LegStipulationValue LegStipulationValue_54("STRING_1017735404");
        noLegStipulations_0_1_2_2.set(LegStipulationValue_54);
        LegStipulations_NoLegStipulations_54.insert(LegStipulationValue_54.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_54);

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs noLegs_0_1_2;
      // SecLstUpdRelSymsLegGrp.NoLegs
      multiset<string> SecLstUpdRelSymsLegGrp_NoLegs_2;
      FIX::LegSettlType LegSettlType_27('2');
      noLegs_0_1_2.set(LegSettlType_27);
      SecLstUpdRelSymsLegGrp_NoLegs_2.insert(LegSettlType_27.getString());
      FIX::LegSwapType LegSwapType_27(5);
      noLegs_0_1_2.set(LegSwapType_27);
      SecLstUpdRelSymsLegGrp_NoLegs_2.insert(LegSwapType_27.getString());
      all_values.push_back(SecLstUpdRelSymsLegGrp_NoLegs_2);

      // InstrumentLeg
      multiset<string> InstrumentLeg_128;
      FIX::EncodedLegIssuer EncodedLegIssuer_128("DATA_842370632");
      noLegs_0_1_2.set(EncodedLegIssuer_128);
      InstrumentLeg_128.insert(EncodedLegIssuer_128.getString());
      FIX::EncodedLegIssuerLen EncodedLegIssuerLen_128(2085417527);
      noLegs_0_1_2.set(EncodedLegIssuerLen_128);
      InstrumentLeg_128.insert(EncodedLegIssuerLen_128.getString());
      FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_128("DATA_464496636");
      noLegs_0_1_2.set(EncodedLegSecurityDesc_128);
      InstrumentLeg_128.insert(EncodedLegSecurityDesc_128.getString());
      FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_128(611424245);
      noLegs_0_1_2.set(EncodedLegSecurityDescLen_128);
      InstrumentLeg_128.insert(EncodedLegSecurityDescLen_128.getString());
      FIX::LegCFICode LegCFICode_128("STRING_1679756687");
      noLegs_0_1_2.set(LegCFICode_128);
      InstrumentLeg_128.insert(LegCFICode_128.getString());
      FIX::LegContractMultiplier LegContractMultiplier_128;
      LegContractMultiplier_128.setString("15568012");
      noLegs_0_1_2.set(LegContractMultiplier_128);
      InstrumentLeg_128.insert(LegContractMultiplier_128.getString());
      FIX::LegContractMultiplierUnit LegContractMultiplierUnit_128(1261588960);
      noLegs_0_1_2.set(LegContractMultiplierUnit_128);
      InstrumentLeg_128.insert(LegContractMultiplierUnit_128.getString());
      FIX::LegContractSettlMonth LegContractSettlMonth_128("MONTHYEAR_1121194397");
      noLegs_0_1_2.set(LegContractSettlMonth_128);
      InstrumentLeg_128.insert(LegContractSettlMonth_128.getString());
      FIX::LegCountryOfIssue LegCountryOfIssue_128("COUNTRY_2651342");
      noLegs_0_1_2.set(LegCountryOfIssue_128);
      InstrumentLeg_128.insert(LegCountryOfIssue_128.getString());
      FIX::LegCouponPaymentDate LegCouponPaymentDate_128("LOCALMKTDATE_1181228858");
      noLegs_0_1_2.set(LegCouponPaymentDate_128);
      InstrumentLeg_128.insert(LegCouponPaymentDate_128.getString());
      FIX::LegCouponRate LegCouponRate_128;
      LegCouponRate_128.setString("90.200000");
      noLegs_0_1_2.set(LegCouponRate_128);
      InstrumentLeg_128.insert(LegCouponRate_128.getString());
      FIX::LegCreditRating LegCreditRating_128("STRING_128049047");
      noLegs_0_1_2.set(LegCreditRating_128);
      InstrumentLeg_128.insert(LegCreditRating_128.getString());
      FIX::LegCurrency LegCurrency_128("JPY");
      noLegs_0_1_2.set(LegCurrency_128);
      InstrumentLeg_128.insert(LegCurrency_128.getString());
      FIX::LegDatedDate LegDatedDate_128("LOCALMKTDATE_1809342268");
      noLegs_0_1_2.set(LegDatedDate_128);
      InstrumentLeg_128.insert(LegDatedDate_128.getString());
      FIX::LegExerciseStyle LegExerciseStyle_128(1768668109);
      noLegs_0_1_2.set(LegExerciseStyle_128);
      InstrumentLeg_128.insert(LegExerciseStyle_128.getString());
      FIX::LegFactor LegFactor_128;
      LegFactor_128.setString("11156331");
      noLegs_0_1_2.set(LegFactor_128);
      InstrumentLeg_128.insert(LegFactor_128.getString());
      FIX::LegFlowScheduleType LegFlowScheduleType_128(1446995147);
      noLegs_0_1_2.set(LegFlowScheduleType_128);
      InstrumentLeg_128.insert(LegFlowScheduleType_128.getString());
      FIX::LegInstrRegistry LegInstrRegistry_128("STRING_1993473574");
      noLegs_0_1_2.set(LegInstrRegistry_128);
      InstrumentLeg_128.insert(LegInstrRegistry_128.getString());
      FIX::LegInterestAccrualDate LegInterestAccrualDate_128("LOCALMKTDATE_1261966869");
      noLegs_0_1_2.set(LegInterestAccrualDate_128);
      InstrumentLeg_128.insert(LegInterestAccrualDate_128.getString());
      FIX::LegIssueDate LegIssueDate_128("LOCALMKTDATE_590278651");
      noLegs_0_1_2.set(LegIssueDate_128);
      InstrumentLeg_128.insert(LegIssueDate_128.getString());
      FIX::LegIssuer LegIssuer_128("STRING_67932193");
      noLegs_0_1_2.set(LegIssuer_128);
      InstrumentLeg_128.insert(LegIssuer_128.getString());
      FIX::LegLocaleOfIssue LegLocaleOfIssue_128("STRING_898434852");
      noLegs_0_1_2.set(LegLocaleOfIssue_128);
      InstrumentLeg_128.insert(LegLocaleOfIssue_128.getString());
      FIX::LegMaturityDate LegMaturityDate_128("LOCALMKTDATE_443375582");
      noLegs_0_1_2.set(LegMaturityDate_128);
      InstrumentLeg_128.insert(LegMaturityDate_128.getString());
      FIX::LegMaturityMonthYear LegMaturityMonthYear_128("MONTHYEAR_1896729664");
      noLegs_0_1_2.set(LegMaturityMonthYear_128);
      InstrumentLeg_128.insert(LegMaturityMonthYear_128.getString());
      FIX::LegMaturityTime LegMaturityTime_128("TZTIMEONLY_651181840");
      noLegs_0_1_2.set(LegMaturityTime_128);
      InstrumentLeg_128.insert(LegMaturityTime_128.getString());
      FIX::LegOptAttribute LegOptAttribute_128('1');
      noLegs_0_1_2.set(LegOptAttribute_128);
      InstrumentLeg_128.insert(LegOptAttribute_128.getString());
      FIX::LegOptionRatio LegOptionRatio_128;
      LegOptionRatio_128.setString("10746221");
      noLegs_0_1_2.set(LegOptionRatio_128);
      InstrumentLeg_128.insert(LegOptionRatio_128.getString());
      FIX::LegPool LegPool_128("STRING_1668917244");
      noLegs_0_1_2.set(LegPool_128);
      InstrumentLeg_128.insert(LegPool_128.getString());
      FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_128("STRING_1016443284");
      noLegs_0_1_2.set(LegPriceUnitOfMeasure_128);
      InstrumentLeg_128.insert(LegPriceUnitOfMeasure_128.getString());
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_128;
      LegPriceUnitOfMeasureQty_128.setString("18259379");
      noLegs_0_1_2.set(LegPriceUnitOfMeasureQty_128);
      InstrumentLeg_128.insert(LegPriceUnitOfMeasureQty_128.getString());
      FIX::LegProduct LegProduct_128(363804228);
      noLegs_0_1_2.set(LegProduct_128);
      InstrumentLeg_128.insert(LegProduct_128.getString());
      FIX::LegPutOrCall LegPutOrCall_128(954377163);
      noLegs_0_1_2.set(LegPutOrCall_128);
      InstrumentLeg_128.insert(LegPutOrCall_128.getString());
      FIX::LegRatioQty LegRatioQty_128;
      LegRatioQty_128.setString("1429508");
      noLegs_0_1_2.set(LegRatioQty_128);
      InstrumentLeg_128.insert(LegRatioQty_128.getString());
      FIX::LegRedemptionDate LegRedemptionDate_128("LOCALMKTDATE_975228473");
      noLegs_0_1_2.set(LegRedemptionDate_128);
      InstrumentLeg_128.insert(LegRedemptionDate_128.getString());
      FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_128("STRING_486650202");
      noLegs_0_1_2.set(LegRepoCollateralSecurityType_128);
      InstrumentLeg_128.insert(LegRepoCollateralSecurityType_128.getString());
      FIX::LegRepurchaseRate LegRepurchaseRate_128;
      LegRepurchaseRate_128.setString("21.790000");
      noLegs_0_1_2.set(LegRepurchaseRate_128);
      InstrumentLeg_128.insert(LegRepurchaseRate_128.getString());
      FIX::LegRepurchaseTerm LegRepurchaseTerm_128(89333786);
      noLegs_0_1_2.set(LegRepurchaseTerm_128);
      InstrumentLeg_128.insert(LegRepurchaseTerm_128.getString());
      FIX::LegSecurityDesc LegSecurityDesc_128("STRING_1607844599");
      noLegs_0_1_2.set(LegSecurityDesc_128);
      InstrumentLeg_128.insert(LegSecurityDesc_128.getString());
      FIX::LegSecurityExchange LegSecurityExchange_128("EXCHANGE_1702403521");
      noLegs_0_1_2.set(LegSecurityExchange_128);
      InstrumentLeg_128.insert(LegSecurityExchange_128.getString());
      FIX::LegSecurityID LegSecurityID_128("STRING_1270562644");
      noLegs_0_1_2.set(LegSecurityID_128);
      InstrumentLeg_128.insert(LegSecurityID_128.getString());
      FIX::LegSecurityIDSource LegSecurityIDSource_128("STRING_16329971");
      noLegs_0_1_2.set(LegSecurityIDSource_128);
      InstrumentLeg_128.insert(LegSecurityIDSource_128.getString());
      FIX::LegSecuritySubType LegSecuritySubType_128("STRING_1830452569");
      noLegs_0_1_2.set(LegSecuritySubType_128);
      InstrumentLeg_128.insert(LegSecuritySubType_128.getString());
      FIX::LegSecurityType LegSecurityType_128("STRING_1748694130");
      noLegs_0_1_2.set(LegSecurityType_128);
      InstrumentLeg_128.insert(LegSecurityType_128.getString());
      FIX::LegSide LegSide_128('1');
      noLegs_0_1_2.set(LegSide_128);
      InstrumentLeg_128.insert(LegSide_128.getString());
      FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_128("STRING_1492311189");
      noLegs_0_1_2.set(LegStateOrProvinceOfIssue_128);
      InstrumentLeg_128.insert(LegStateOrProvinceOfIssue_128.getString());
      FIX::LegStrikeCurrency LegStrikeCurrency_128("EUR");
      noLegs_0_1_2.set(LegStrikeCurrency_128);
      InstrumentLeg_128.insert(LegStrikeCurrency_128.getString());
      FIX::LegStrikePrice LegStrikePrice_128;
      LegStrikePrice_128.setString("7918226");
      noLegs_0_1_2.set(LegStrikePrice_128);
      InstrumentLeg_128.insert(LegStrikePrice_128.getString());
      FIX::LegSymbol LegSymbol_128("STRING_1215868518");
      noLegs_0_1_2.set(LegSymbol_128);
      InstrumentLeg_128.insert(LegSymbol_128.getString());
      FIX::LegSymbolSfx LegSymbolSfx_128("STRING_1529444146");
      noLegs_0_1_2.set(LegSymbolSfx_128);
      InstrumentLeg_128.insert(LegSymbolSfx_128.getString());
      FIX::LegTimeUnit LegTimeUnit_128("STRING_1382101339");
      noLegs_0_1_2.set(LegTimeUnit_128);
      InstrumentLeg_128.insert(LegTimeUnit_128.getString());
      FIX::LegUnitOfMeasure LegUnitOfMeasure_128("STRING_1283800711");
      noLegs_0_1_2.set(LegUnitOfMeasure_128);
      InstrumentLeg_128.insert(LegUnitOfMeasure_128.getString());
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_128;
      LegUnitOfMeasureQty_128.setString("2803953");
      noLegs_0_1_2.set(LegUnitOfMeasureQty_128);
      InstrumentLeg_128.insert(LegUnitOfMeasureQty_128.getString());
      all_values.push_back(InstrumentLeg_128);

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_257;
        FIX::LegSecurityAltID LegSecurityAltID_257("STRING_1033046727");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltID_257);
        LegSecAltIDGrp_NoLegSecurityAltID_257.insert(LegSecurityAltID_257.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_257("STRING_931577191");
        noLegSecurityAltID_0_2_2_0.set(LegSecurityAltIDSource_257);
        LegSecAltIDGrp_NoLegSecurityAltID_257.insert(LegSecurityAltIDSource_257.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_257);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_258;
        FIX::LegSecurityAltID LegSecurityAltID_258("STRING_743279949");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltID_258);
        LegSecAltIDGrp_NoLegSecurityAltID_258.insert(LegSecurityAltID_258.getString());
        FIX::LegSecurityAltIDSource LegSecurityAltIDSource_258("STRING_2107668861");
        noLegSecurityAltID_0_2_2_1.set(LegSecurityAltIDSource_258);
        LegSecAltIDGrp_NoLegSecurityAltID_258.insert(LegSecurityAltIDSource_258.getString());
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_258);

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_17;
      FIX::LegBenchmarkCurveCurrency LegBenchmarkCurveCurrency_17("CHF");
      noLegs_0_1_2.set(LegBenchmarkCurveCurrency_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurveCurrency_17.getString());
      FIX::LegBenchmarkCurveName LegBenchmarkCurveName_17("STRING_1786123119");
      noLegs_0_1_2.set(LegBenchmarkCurveName_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurveName_17.getString());
      FIX::LegBenchmarkCurvePoint LegBenchmarkCurvePoint_17("STRING_816815016");
      noLegs_0_1_2.set(LegBenchmarkCurvePoint_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkCurvePoint_17.getString());
      FIX::LegBenchmarkPrice LegBenchmarkPrice_17;
      LegBenchmarkPrice_17.setString("5666167");
      noLegs_0_1_2.set(LegBenchmarkPrice_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkPrice_17.getString());
      FIX::LegBenchmarkPriceType LegBenchmarkPriceType_17(1929074013);
      noLegs_0_1_2.set(LegBenchmarkPriceType_17);
      LegBenchmarkCurveData_17.insert(LegBenchmarkPriceType_17.getString());
      all_values.push_back(LegBenchmarkCurveData_17);

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_55;
        FIX::LegStipulationType LegStipulationType_55("STRING_1053266950");
        noLegStipulations_0_2_2_0.set(LegStipulationType_55);
        LegStipulations_NoLegStipulations_55.insert(LegStipulationType_55.getString());
        FIX::LegStipulationValue LegStipulationValue_55("STRING_1481342544");
        noLegStipulations_0_2_2_0.set(LegStipulationValue_55);
        LegStipulations_NoLegStipulations_55.insert(LegStipulationValue_55.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_55);

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_56;
        FIX::LegStipulationType LegStipulationType_56("STRING_1881377275");
        noLegStipulations_0_2_2_1.set(LegStipulationType_56);
        LegStipulations_NoLegStipulations_56.insert(LegStipulationType_56.getString());
        FIX::LegStipulationValue LegStipulationValue_56("STRING_513627901");
        noLegStipulations_0_2_2_1.set(LegStipulationValue_56);
        LegStipulations_NoLegStipulations_56.insert(LegStipulationValue_56.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_56);

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_57;
        FIX::LegStipulationType LegStipulationType_57("STRING_1036262418");
        noLegStipulations_0_2_2_2.set(LegStipulationType_57);
        LegStipulations_NoLegStipulations_57.insert(LegStipulationType_57.getString());
        FIX::LegStipulationValue LegStipulationValue_57("STRING_1004456271");
        noLegStipulations_0_2_2_2.set(LegStipulationValue_57);
        LegStipulations_NoLegStipulations_57.insert(LegStipulationValue_57.getString());
        all_values.push_back(LegStipulations_NoLegStipulations_57);

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_10;
    FIX::ExpirationCycle ExpirationCycle_11(0);
    noRelatedSym_0_0.set(ExpirationCycle_11);
    BaseTradingRules_10.insert(ExpirationCycle_11.getString());
    FIX::ImpliedMarketIndicator ImpliedMarketIndicator_10(3);
    noRelatedSym_0_0.set(ImpliedMarketIndicator_10);
    BaseTradingRules_10.insert(ImpliedMarketIndicator_10.getString());
    FIX::MaxPriceVariation MaxPriceVariation_10;
    MaxPriceVariation_10.setString("6056667");
    noRelatedSym_0_0.set(MaxPriceVariation_10);
    BaseTradingRules_10.insert(MaxPriceVariation_10.getString());
    FIX::MaxTradeVol MaxTradeVol_10;
    MaxTradeVol_10.setString("18292856");
    noRelatedSym_0_0.set(MaxTradeVol_10);
    BaseTradingRules_10.insert(MaxTradeVol_10.getString());
    FIX::MinTradeVol MinTradeVol_10;
    MinTradeVol_10.setString("640588");
    noRelatedSym_0_0.set(MinTradeVol_10);
    BaseTradingRules_10.insert(MinTradeVol_10.getString());
    FIX::MultilegModel MultilegModel_12(0);
    noRelatedSym_0_0.set(MultilegModel_12);
    BaseTradingRules_10.insert(MultilegModel_12.getString());
    FIX::MultilegPriceMethod MultilegPriceMethod_12(5);
    noRelatedSym_0_0.set(MultilegPriceMethod_12);
    BaseTradingRules_10.insert(MultilegPriceMethod_12.getString());
    FIX::PriceType PriceType_44(2);
    noRelatedSym_0_0.set(PriceType_44);
    BaseTradingRules_10.insert(PriceType_44.getString());
    FIX::RoundLot RoundLot_10;
    RoundLot_10.setString("10439302");
    noRelatedSym_0_0.set(RoundLot_10);
    BaseTradingRules_10.insert(RoundLot_10.getString());
    FIX::TradingCurrency TradingCurrency_10("USD");
    noRelatedSym_0_0.set(TradingCurrency_10);
    BaseTradingRules_10.insert(TradingCurrency_10.getString());
    all_values.push_back(BaseTradingRules_10);

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_21;
      FIX::LotType LotType_27('3');
      noLotTypeRules_0_1_0.set(LotType_27);
      LotTypeRules_NoLotTypeRules_21.insert(LotType_27.getString());
      FIX::MinLotSize MinLotSize_21;
      MinLotSize_21.setString("19159761");
      noLotTypeRules_0_1_0.set(MinLotSize_21);
      LotTypeRules_NoLotTypeRules_21.insert(MinLotSize_21.getString());
      all_values.push_back(LotTypeRules_NoLotTypeRules_21);

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    // PriceLimits
    multiset<string> PriceLimits_10;
    FIX::HighLimitPrice HighLimitPrice_10;
    HighLimitPrice_10.setString("12132940");
    noRelatedSym_0_0.set(HighLimitPrice_10);
    PriceLimits_10.insert(HighLimitPrice_10.getString());
    FIX::LowLimitPrice LowLimitPrice_10;
    LowLimitPrice_10.setString("5432123");
    noRelatedSym_0_0.set(LowLimitPrice_10);
    PriceLimits_10.insert(LowLimitPrice_10.getString());
    FIX::PriceLimitType PriceLimitType_10(2);
    noRelatedSym_0_0.set(PriceLimitType_10);
    PriceLimits_10.insert(PriceLimitType_10.getString());
    FIX::TradingReferencePrice TradingReferencePrice_10;
    TradingReferencePrice_10.setString("11734792");
    noRelatedSym_0_0.set(TradingReferencePrice_10);
    PriceLimits_10.insert(TradingReferencePrice_10.getString());
    all_values.push_back(PriceLimits_10);

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_22;
      FIX::EndTickPriceRange EndTickPriceRange_22;
      EndTickPriceRange_22.setString("1240120");
      noTickRules_0_1_0.set(EndTickPriceRange_22);
      TickRules_NoTickRules_22.insert(EndTickPriceRange_22.getString());
      FIX::StartTickPriceRange StartTickPriceRange_22;
      StartTickPriceRange_22.setString("8121186");
      noTickRules_0_1_0.set(StartTickPriceRange_22);
      TickRules_NoTickRules_22.insert(StartTickPriceRange_22.getString());
      FIX::TickIncrement TickIncrement_22;
      TickIncrement_22.setString("18130381");
      noTickRules_0_1_0.set(TickIncrement_22);
      TickRules_NoTickRules_22.insert(TickIncrement_22.getString());
      FIX::TickRuleType TickRuleType_22(1);
      noTickRules_0_1_0.set(TickRuleType_22);
      TickRules_NoTickRules_22.insert(TickRuleType_22.getString());
      all_values.push_back(TickRules_NoTickRules_22);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_23;
      FIX::EndTickPriceRange EndTickPriceRange_23;
      EndTickPriceRange_23.setString("5937090");
      noTickRules_0_1_1.set(EndTickPriceRange_23);
      TickRules_NoTickRules_23.insert(EndTickPriceRange_23.getString());
      FIX::StartTickPriceRange StartTickPriceRange_23;
      StartTickPriceRange_23.setString("14575979");
      noTickRules_0_1_1.set(StartTickPriceRange_23);
      TickRules_NoTickRules_23.insert(StartTickPriceRange_23.getString());
      FIX::TickIncrement TickIncrement_23;
      TickIncrement_23.setString("17438957");
      noTickRules_0_1_1.set(TickIncrement_23);
      TickRules_NoTickRules_23.insert(TickIncrement_23.getString());
      FIX::TickRuleType TickRuleType_23(0);
      noTickRules_0_1_1.set(TickRuleType_23);
      TickRules_NoTickRules_23.insert(TickRuleType_23.getString());
      all_values.push_back(TickRules_NoTickRules_23);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTickRules noTickRules_0_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_24;
      FIX::EndTickPriceRange EndTickPriceRange_24;
      EndTickPriceRange_24.setString("11914915");
      noTickRules_0_1_2.set(EndTickPriceRange_24);
      TickRules_NoTickRules_24.insert(EndTickPriceRange_24.getString());
      FIX::StartTickPriceRange StartTickPriceRange_24;
      StartTickPriceRange_24.setString("1100400");
      noTickRules_0_1_2.set(StartTickPriceRange_24);
      TickRules_NoTickRules_24.insert(StartTickPriceRange_24.getString());
      FIX::TickIncrement TickIncrement_24;
      TickIncrement_24.setString("9638303");
      noTickRules_0_1_2.set(TickIncrement_24);
      TickRules_NoTickRules_24.insert(TickIncrement_24.getString());
      FIX::TickRuleType TickRuleType_24(1);
      noTickRules_0_1_2.set(TickRuleType_24);
      TickRules_NoTickRules_24.insert(TickRuleType_24.getString());
      all_values.push_back(TickRules_NoTickRules_24);

      noRelatedSym_0_0.addGroup(noTickRules_0_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_15;
      FIX::NestedInstrAttribType NestedInstrAttribType_15(1683061709);
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribType_15);
      NestedInstrumentAttribute_NoNestedInstrAttrib_15.insert(NestedInstrAttribType_15.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_15("STRING_654130975");
      noNestedInstrAttrib_0_1_0.set(NestedInstrAttribValue_15);
      NestedInstrumentAttribute_NoNestedInstrAttrib_15.insert(NestedInstrAttribValue_15.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_15);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_16;
      FIX::NestedInstrAttribType NestedInstrAttribType_16(321799899);
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribType_16);
      NestedInstrumentAttribute_NoNestedInstrAttrib_16.insert(NestedInstrAttribType_16.getString());
      FIX::NestedInstrAttribValue NestedInstrAttribValue_16("STRING_1747120589");
      noNestedInstrAttrib_0_1_1.set(NestedInstrAttribValue_16);
      NestedInstrumentAttribute_NoNestedInstrAttrib_16.insert(NestedInstrAttribValue_16.getString());
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_16);

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_16;
      FIX::TradingSessionID TradingSessionID_85("STRING_1");
      noTradingSessionRules_0_1_0.set(TradingSessionID_85);
      TradingSessionRulesGrp_NoTradingSessionRules_16.insert(TradingSessionID_85.getString());
      FIX::TradingSessionSubID TradingSessionSubID_85("STRING_7");
      noTradingSessionRules_0_1_0.set(TradingSessionSubID_85);
      TradingSessionRulesGrp_NoTradingSessionRules_16.insert(TradingSessionSubID_85.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_16);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_32;
        FIX::ExecInstValue ExecInstValue_32('1');
        noExecInstRules_0_0_2_0.set(ExecInstValue_32);
        ExecInstRules_NoExecInstRules_32.insert(ExecInstValue_32.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_32);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_33;
        FIX::ExecInstValue ExecInstValue_33('5');
        noExecInstRules_0_0_2_1.set(ExecInstValue_33);
        ExecInstRules_NoExecInstRules_33.insert(ExecInstValue_33.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_33);

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_32;
        FIX::MDBookType MDBookType_34(1);
        noMDFeedTypes_0_0_2_0.set(MDBookType_34);
        MarketDataFeedTypes_NoMDFeedTypes_32.insert(MDBookType_34.getString());
        FIX::MDFeedType MDFeedType_34("STRING_314510305");
        noMDFeedTypes_0_0_2_0.set(MDFeedType_34);
        MarketDataFeedTypes_NoMDFeedTypes_32.insert(MDFeedType_34.getString());
        FIX::MarketDepth MarketDepth_36(772180524);
        noMDFeedTypes_0_0_2_0.set(MarketDepth_36);
        MarketDataFeedTypes_NoMDFeedTypes_32.insert(MarketDepth_36.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_32);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_33;
        FIX::MDBookType MDBookType_35(1);
        noMDFeedTypes_0_0_2_1.set(MDBookType_35);
        MarketDataFeedTypes_NoMDFeedTypes_33.insert(MDBookType_35.getString());
        FIX::MDFeedType MDFeedType_35("STRING_826282789");
        noMDFeedTypes_0_0_2_1.set(MDFeedType_35);
        MarketDataFeedTypes_NoMDFeedTypes_33.insert(MDFeedType_35.getString());
        FIX::MarketDepth MarketDepth_37(1945659744);
        noMDFeedTypes_0_0_2_1.set(MarketDepth_37);
        MarketDataFeedTypes_NoMDFeedTypes_33.insert(MarketDepth_37.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_33);

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_33;
        FIX::MatchAlgorithm MatchAlgorithm_33("STRING_950294857");
        noMatchRules_0_0_2_0.set(MatchAlgorithm_33);
        MatchRules_NoMatchRules_33.insert(MatchAlgorithm_33.getString());
        FIX::MatchType MatchType_39("STRING_M5");
        noMatchRules_0_0_2_0.set(MatchType_39);
        MatchRules_NoMatchRules_33.insert(MatchType_39.getString());
        all_values.push_back(MatchRules_NoMatchRules_33);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_34;
        FIX::MatchAlgorithm MatchAlgorithm_34("STRING_418944019");
        noMatchRules_0_0_2_1.set(MatchAlgorithm_34);
        MatchRules_NoMatchRules_34.insert(MatchAlgorithm_34.getString());
        FIX::MatchType MatchType_40("STRING_1");
        noMatchRules_0_0_2_1.set(MatchType_40);
        MatchRules_NoMatchRules_34.insert(MatchType_40.getString());
        all_values.push_back(MatchRules_NoMatchRules_34);

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_39;
        FIX::OrdType OrdType_65('E');
        noOrdTypeRules_0_0_2_0.set(OrdType_65);
        OrdTypeRules_NoOrdTypeRules_39.insert(OrdType_65.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_39);

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_35;
        FIX::TimeInForce TimeInForce_48('4');
        noTimeInForceRules_0_0_2_0.set(TimeInForce_48);
        TimeInForceRules_NoTimeInForceRules_35.insert(TimeInForce_48.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_35);

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_17;
      FIX::TradingSessionID TradingSessionID_86("STRING_6");
      noTradingSessionRules_0_1_1.set(TradingSessionID_86);
      TradingSessionRulesGrp_NoTradingSessionRules_17.insert(TradingSessionID_86.getString());
      FIX::TradingSessionSubID TradingSessionSubID_86("STRING_7");
      noTradingSessionRules_0_1_1.set(TradingSessionSubID_86);
      TradingSessionRulesGrp_NoTradingSessionRules_17.insert(TradingSessionSubID_86.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_17);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_34;
        FIX::ExecInstValue ExecInstValue_34('9');
        noExecInstRules_0_1_2_0.set(ExecInstValue_34);
        ExecInstRules_NoExecInstRules_34.insert(ExecInstValue_34.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_34);

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_34;
        FIX::MDBookType MDBookType_36(1);
        noMDFeedTypes_0_1_2_0.set(MDBookType_36);
        MarketDataFeedTypes_NoMDFeedTypes_34.insert(MDBookType_36.getString());
        FIX::MDFeedType MDFeedType_36("STRING_1623145135");
        noMDFeedTypes_0_1_2_0.set(MDFeedType_36);
        MarketDataFeedTypes_NoMDFeedTypes_34.insert(MDFeedType_36.getString());
        FIX::MarketDepth MarketDepth_38(161689954);
        noMDFeedTypes_0_1_2_0.set(MarketDepth_38);
        MarketDataFeedTypes_NoMDFeedTypes_34.insert(MarketDepth_38.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_34);

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_35;
        FIX::MatchAlgorithm MatchAlgorithm_35("STRING_2105337807");
        noMatchRules_0_1_2_0.set(MatchAlgorithm_35);
        MatchRules_NoMatchRules_35.insert(MatchAlgorithm_35.getString());
        FIX::MatchType MatchType_41("STRING_S5");
        noMatchRules_0_1_2_0.set(MatchType_41);
        MatchRules_NoMatchRules_35.insert(MatchType_41.getString());
        all_values.push_back(MatchRules_NoMatchRules_35);

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_40;
        FIX::OrdType OrdType_66('Q');
        noOrdTypeRules_0_1_2_0.set(OrdType_66);
        OrdTypeRules_NoOrdTypeRules_40.insert(OrdType_66.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_40);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_41;
        FIX::OrdType OrdType_67('B');
        noOrdTypeRules_0_1_2_1.set(OrdType_67);
        OrdTypeRules_NoOrdTypeRules_41.insert(OrdType_67.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_41);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_2;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_42;
        FIX::OrdType OrdType_68('9');
        noOrdTypeRules_0_1_2_2.set(OrdType_68);
        OrdTypeRules_NoOrdTypeRules_42.insert(OrdType_68.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_42);

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_2);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_36;
        FIX::TimeInForce TimeInForce_49('5');
        noTimeInForceRules_0_1_2_0.set(TimeInForce_49);
        TimeInForceRules_NoTimeInForceRules_36.insert(TimeInForce_49.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_36);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_37;
        FIX::TimeInForce TimeInForce_50('5');
        noTimeInForceRules_0_1_2_1.set(TimeInForce_50);
        TimeInForceRules_NoTimeInForceRules_37.insert(TimeInForce_50.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_37);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_38;
        FIX::TimeInForce TimeInForce_51('0');
        noTimeInForceRules_0_1_2_2.set(TimeInForce_51);
        TimeInForceRules_NoTimeInForceRules_38.insert(TimeInForce_51.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_38);

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_18;
      FIX::TradingSessionID TradingSessionID_87("STRING_1");
      noTradingSessionRules_0_1_2.set(TradingSessionID_87);
      TradingSessionRulesGrp_NoTradingSessionRules_18.insert(TradingSessionID_87.getString());
      FIX::TradingSessionSubID TradingSessionSubID_87("STRING_6");
      noTradingSessionRules_0_1_2.set(TradingSessionSubID_87);
      TradingSessionRulesGrp_NoTradingSessionRules_18.insert(TradingSessionSubID_87.getString());
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_18);

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_35;
        FIX::ExecInstValue ExecInstValue_35('1');
        noExecInstRules_0_2_2_0.set(ExecInstValue_35);
        ExecInstRules_NoExecInstRules_35.insert(ExecInstValue_35.getString());
        all_values.push_back(ExecInstRules_NoExecInstRules_35);

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_35;
        FIX::MDBookType MDBookType_37(1);
        noMDFeedTypes_0_2_2_0.set(MDBookType_37);
        MarketDataFeedTypes_NoMDFeedTypes_35.insert(MDBookType_37.getString());
        FIX::MDFeedType MDFeedType_37("STRING_178542192");
        noMDFeedTypes_0_2_2_0.set(MDFeedType_37);
        MarketDataFeedTypes_NoMDFeedTypes_35.insert(MDFeedType_37.getString());
        FIX::MarketDepth MarketDepth_39(1669197778);
        noMDFeedTypes_0_2_2_0.set(MarketDepth_39);
        MarketDataFeedTypes_NoMDFeedTypes_35.insert(MarketDepth_39.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_35);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_36;
        FIX::MDBookType MDBookType_38(1);
        noMDFeedTypes_0_2_2_1.set(MDBookType_38);
        MarketDataFeedTypes_NoMDFeedTypes_36.insert(MDBookType_38.getString());
        FIX::MDFeedType MDFeedType_38("STRING_2055084182");
        noMDFeedTypes_0_2_2_1.set(MDFeedType_38);
        MarketDataFeedTypes_NoMDFeedTypes_36.insert(MDFeedType_38.getString());
        FIX::MarketDepth MarketDepth_40(759049922);
        noMDFeedTypes_0_2_2_1.set(MarketDepth_40);
        MarketDataFeedTypes_NoMDFeedTypes_36.insert(MarketDepth_40.getString());
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_36);

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_1);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_36;
        FIX::MatchAlgorithm MatchAlgorithm_36("STRING_828150473");
        noMatchRules_0_2_2_0.set(MatchAlgorithm_36);
        MatchRules_NoMatchRules_36.insert(MatchAlgorithm_36.getString());
        FIX::MatchType MatchType_42("STRING_M5");
        noMatchRules_0_2_2_0.set(MatchType_42);
        MatchRules_NoMatchRules_36.insert(MatchType_42.getString());
        all_values.push_back(MatchRules_NoMatchRules_36);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_37;
        FIX::MatchAlgorithm MatchAlgorithm_37("STRING_212041829");
        noMatchRules_0_2_2_1.set(MatchAlgorithm_37);
        MatchRules_NoMatchRules_37.insert(MatchAlgorithm_37.getString());
        FIX::MatchType MatchType_43("STRING_AQ");
        noMatchRules_0_2_2_1.set(MatchType_43);
        MatchRules_NoMatchRules_37.insert(MatchType_43.getString());
        all_values.push_back(MatchRules_NoMatchRules_37);

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_43;
        FIX::OrdType OrdType_69('F');
        noOrdTypeRules_0_2_2_0.set(OrdType_69);
        OrdTypeRules_NoOrdTypeRules_43.insert(OrdType_69.getString());
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_43);

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_39;
        FIX::TimeInForce TimeInForce_52('4');
        noTimeInForceRules_0_2_2_0.set(TimeInForce_52);
        TimeInForceRules_NoTimeInForceRules_39.insert(TimeInForce_52.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_39);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_40;
        FIX::TimeInForce TimeInForce_53('2');
        noTimeInForceRules_0_2_2_1.set(TimeInForce_53);
        TimeInForceRules_NoTimeInForceRules_40.insert(TimeInForce_53.getString());
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_40);

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_31;
    FIX::BenchmarkCurveCurrency BenchmarkCurveCurrency_31("EUR");
    noRelatedSym_0_0.set(BenchmarkCurveCurrency_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurveCurrency_31.getString());
    FIX::BenchmarkCurveName BenchmarkCurveName_31("STRING_SONIA");
    noRelatedSym_0_0.set(BenchmarkCurveName_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurveName_31.getString());
    FIX::BenchmarkCurvePoint BenchmarkCurvePoint_31("STRING_567173679");
    noRelatedSym_0_0.set(BenchmarkCurvePoint_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkCurvePoint_31.getString());
    FIX::BenchmarkPrice BenchmarkPrice_31;
    BenchmarkPrice_31.setString("4283793");
    noRelatedSym_0_0.set(BenchmarkPrice_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkPrice_31.getString());
    FIX::BenchmarkPriceType BenchmarkPriceType_31(549477401);
    noRelatedSym_0_0.set(BenchmarkPriceType_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkPriceType_31.getString());
    FIX::BenchmarkSecurityID BenchmarkSecurityID_31("STRING_1610037245");
    noRelatedSym_0_0.set(BenchmarkSecurityID_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkSecurityID_31.getString());
    FIX::BenchmarkSecurityIDSource BenchmarkSecurityIDSource_31("STRING_1824905196");
    noRelatedSym_0_0.set(BenchmarkSecurityIDSource_31);
    SpreadOrBenchmarkCurveData_31.insert(BenchmarkSecurityIDSource_31.getString());
    FIX::Spread Spread_31;
    Spread_31.setString("9486575");
    noRelatedSym_0_0.set(Spread_31);
    SpreadOrBenchmarkCurveData_31.insert(Spread_31.getString());
    all_values.push_back(SpreadOrBenchmarkCurveData_31);

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_45;
      FIX::StipulationType StipulationType_45("STRING_ABS");
      noStipulations_0_1_0.set(StipulationType_45);
      Stipulations_NoStipulations_45.insert(StipulationType_45.getString());
      FIX::StipulationValue StipulationValue_45("STRING_26636753");
      noStipulations_0_1_0.set(StipulationValue_45);
      Stipulations_NoStipulations_45.insert(StipulationValue_45.getString());
      all_values.push_back(Stipulations_NoStipulations_45);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_46;
      FIX::StipulationType StipulationType_46("STRING_SALESCREDITOVR");
      noStipulations_0_1_1.set(StipulationType_46);
      Stipulations_NoStipulations_46.insert(StipulationType_46.getString());
      FIX::StipulationValue StipulationValue_46("STRING_590712003");
      noStipulations_0_1_1.set(StipulationValue_46);
      Stipulations_NoStipulations_46.insert(StipulationValue_46.getString());
      all_values.push_back(Stipulations_NoStipulations_46);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_47;
      FIX::StipulationType StipulationType_47("STRING_REFINT");
      noStipulations_0_1_2.set(StipulationType_47);
      Stipulations_NoStipulations_47.insert(StipulationType_47.getString());
      FIX::StipulationValue StipulationValue_47("STRING_819365551");
      noStipulations_0_1_2.set(StipulationValue_47);
      Stipulations_NoStipulations_47.insert(StipulationValue_47.getString());
      all_values.push_back(Stipulations_NoStipulations_47);

      noRelatedSym_0_0.addGroup(noStipulations_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_13;
      FIX::EndStrikePxRange EndStrikePxRange_13;
      EndStrikePxRange_13.setString("17241086");
      noStrikeRules_0_1_0.set(EndStrikePxRange_13);
      StrikeRules_NoStrikeRules_13.insert(EndStrikePxRange_13.getString());
      FIX::StartStrikePxRange StartStrikePxRange_13;
      StartStrikePxRange_13.setString("20994007");
      noStrikeRules_0_1_0.set(StartStrikePxRange_13);
      StrikeRules_NoStrikeRules_13.insert(StartStrikePxRange_13.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_13(676854730);
      noStrikeRules_0_1_0.set(StrikeExerciseStyle_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeExerciseStyle_13.getString());
      FIX::StrikeIncrement StrikeIncrement_13;
      StrikeIncrement_13.setString("3356749");
      noStrikeRules_0_1_0.set(StrikeIncrement_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeIncrement_13.getString());
      FIX::StrikeRuleID StrikeRuleID_13("STRING_216040383");
      noStrikeRules_0_1_0.set(StrikeRuleID_13);
      StrikeRules_NoStrikeRules_13.insert(StrikeRuleID_13.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_13);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_30;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_30("MONTHYEAR_294616996");
        noMaturityRules_0_0_2_0.set(EndMaturityMonthYear_30);
        MaturityRules_NoMaturityRules_30.insert(EndMaturityMonthYear_30.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_30(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearFormat_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearFormat_30.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_30(1154686188);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrement_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearIncrement_30.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_30(2);
        noMaturityRules_0_0_2_0.set(MaturityMonthYearIncrementUnits_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityMonthYearIncrementUnits_30.getString());
        FIX::MaturityRuleID MaturityRuleID_30("STRING_123620618");
        noMaturityRules_0_0_2_0.set(MaturityRuleID_30);
        MaturityRules_NoMaturityRules_30.insert(MaturityRuleID_30.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_30("MONTHYEAR_280028660");
        noMaturityRules_0_0_2_0.set(StartMaturityMonthYear_30);
        MaturityRules_NoMaturityRules_30.insert(StartMaturityMonthYear_30.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_30);

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_14;
      FIX::EndStrikePxRange EndStrikePxRange_14;
      EndStrikePxRange_14.setString("539712");
      noStrikeRules_0_1_1.set(EndStrikePxRange_14);
      StrikeRules_NoStrikeRules_14.insert(EndStrikePxRange_14.getString());
      FIX::StartStrikePxRange StartStrikePxRange_14;
      StartStrikePxRange_14.setString("10497761");
      noStrikeRules_0_1_1.set(StartStrikePxRange_14);
      StrikeRules_NoStrikeRules_14.insert(StartStrikePxRange_14.getString());
      FIX::StrikeExerciseStyle StrikeExerciseStyle_14(1510708939);
      noStrikeRules_0_1_1.set(StrikeExerciseStyle_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeExerciseStyle_14.getString());
      FIX::StrikeIncrement StrikeIncrement_14;
      StrikeIncrement_14.setString("4472624");
      noStrikeRules_0_1_1.set(StrikeIncrement_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeIncrement_14.getString());
      FIX::StrikeRuleID StrikeRuleID_14("STRING_1514583792");
      noStrikeRules_0_1_1.set(StrikeRuleID_14);
      StrikeRules_NoStrikeRules_14.insert(StrikeRuleID_14.getString());
      all_values.push_back(StrikeRules_NoStrikeRules_14);

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_31;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_31("MONTHYEAR_875641811");
        noMaturityRules_0_1_2_0.set(EndMaturityMonthYear_31);
        MaturityRules_NoMaturityRules_31.insert(EndMaturityMonthYear_31.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_31(2);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearFormat_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearFormat_31.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_31(1540436215);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrement_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearIncrement_31.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_31(3);
        noMaturityRules_0_1_2_0.set(MaturityMonthYearIncrementUnits_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityMonthYearIncrementUnits_31.getString());
        FIX::MaturityRuleID MaturityRuleID_31("STRING_865235052");
        noMaturityRules_0_1_2_0.set(MaturityRuleID_31);
        MaturityRules_NoMaturityRules_31.insert(MaturityRuleID_31.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_31("MONTHYEAR_670550255");
        noMaturityRules_0_1_2_0.set(StartMaturityMonthYear_31);
        MaturityRules_NoMaturityRules_31.insert(StartMaturityMonthYear_31.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_31);

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_32;
        FIX::EndMaturityMonthYear EndMaturityMonthYear_32("MONTHYEAR_1384177190");
        noMaturityRules_0_1_2_1.set(EndMaturityMonthYear_32);
        MaturityRules_NoMaturityRules_32.insert(EndMaturityMonthYear_32.getString());
        FIX::MaturityMonthYearFormat MaturityMonthYearFormat_32(0);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearFormat_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearFormat_32.getString());
        FIX::MaturityMonthYearIncrement MaturityMonthYearIncrement_32(1413884481);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrement_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearIncrement_32.getString());
        FIX::MaturityMonthYearIncrementUnits MaturityMonthYearIncrementUnits_32(1);
        noMaturityRules_0_1_2_1.set(MaturityMonthYearIncrementUnits_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityMonthYearIncrementUnits_32.getString());
        FIX::MaturityRuleID MaturityRuleID_32("STRING_946782663");
        noMaturityRules_0_1_2_1.set(MaturityRuleID_32);
        MaturityRules_NoMaturityRules_32.insert(MaturityRuleID_32.getString());
        FIX::StartMaturityMonthYear StartMaturityMonthYear_32("MONTHYEAR_85766384");
        noMaturityRules_0_1_2_1.set(StartMaturityMonthYear_32);
        MaturityRules_NoMaturityRules_32.insert(StartMaturityMonthYear_32.getString());
        all_values.push_back(MaturityRules_NoMaturityRules_32);

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
      multiset<string> UnderlyingInstrument_122;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_122("DATA_523407651");
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuer_122);
      UnderlyingInstrument_122.insert(EncodedUnderlyingIssuer_122.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_122(37683454);
      noUnderlyings_0_1_0.set(EncodedUnderlyingIssuerLen_122);
      UnderlyingInstrument_122.insert(EncodedUnderlyingIssuerLen_122.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_122("DATA_1273514471");
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDesc_122);
      UnderlyingInstrument_122.insert(EncodedUnderlyingSecurityDesc_122.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_122(859082561);
      noUnderlyings_0_1_0.set(EncodedUnderlyingSecurityDescLen_122);
      UnderlyingInstrument_122.insert(EncodedUnderlyingSecurityDescLen_122.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_122;
      UnderlyingAdjustedQuantity_122.setString("2537238");
      noUnderlyings_0_1_0.set(UnderlyingAdjustedQuantity_122);
      UnderlyingInstrument_122.insert(UnderlyingAdjustedQuantity_122.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_122;
      UnderlyingAllocationPercent_122.setString("60.260000");
      noUnderlyings_0_1_0.set(UnderlyingAllocationPercent_122);
      UnderlyingInstrument_122.insert(UnderlyingAllocationPercent_122.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_122;
      UnderlyingAttachmentPoint_122.setString("95.570000");
      noUnderlyings_0_1_0.set(UnderlyingAttachmentPoint_122);
      UnderlyingInstrument_122.insert(UnderlyingAttachmentPoint_122.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_122("STRING_681806049");
      noUnderlyings_0_1_0.set(UnderlyingCFICode_122);
      UnderlyingInstrument_122.insert(UnderlyingCFICode_122.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_122("STRING_1785722214");
      noUnderlyings_0_1_0.set(UnderlyingCPProgram_122);
      UnderlyingInstrument_122.insert(UnderlyingCPProgram_122.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_122("STRING_1247148696");
      noUnderlyings_0_1_0.set(UnderlyingCPRegType_122);
      UnderlyingInstrument_122.insert(UnderlyingCPRegType_122.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_122;
      UnderlyingCapValue_122.setString("8054266");
      noUnderlyings_0_1_0.set(UnderlyingCapValue_122);
      UnderlyingInstrument_122.insert(UnderlyingCapValue_122.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_122;
      UnderlyingCashAmount_122.setString("20657508");
      noUnderlyings_0_1_0.set(UnderlyingCashAmount_122);
      UnderlyingInstrument_122.insert(UnderlyingCashAmount_122.getString());
      FIX::UnderlyingCashType UnderlyingCashType_122("STRING_DIFF");
      noUnderlyings_0_1_0.set(UnderlyingCashType_122);
      UnderlyingInstrument_122.insert(UnderlyingCashType_122.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_122;
      UnderlyingContractMultiplier_122.setString("18552028");
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplier_122);
      UnderlyingInstrument_122.insert(UnderlyingContractMultiplier_122.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_122(1428976166);
      noUnderlyings_0_1_0.set(UnderlyingContractMultiplierUnit_122);
      UnderlyingInstrument_122.insert(UnderlyingContractMultiplierUnit_122.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_122("COUNTRY_1748382401");
      noUnderlyings_0_1_0.set(UnderlyingCountryOfIssue_122);
      UnderlyingInstrument_122.insert(UnderlyingCountryOfIssue_122.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_122("LOCALMKTDATE_1222303001");
      noUnderlyings_0_1_0.set(UnderlyingCouponPaymentDate_122);
      UnderlyingInstrument_122.insert(UnderlyingCouponPaymentDate_122.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_122;
      UnderlyingCouponRate_122.setString("51.360000");
      noUnderlyings_0_1_0.set(UnderlyingCouponRate_122);
      UnderlyingInstrument_122.insert(UnderlyingCouponRate_122.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_122("STRING_476540564");
      noUnderlyings_0_1_0.set(UnderlyingCreditRating_122);
      UnderlyingInstrument_122.insert(UnderlyingCreditRating_122.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_122("JPY");
      noUnderlyings_0_1_0.set(UnderlyingCurrency_122);
      UnderlyingInstrument_122.insert(UnderlyingCurrency_122.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_122;
      UnderlyingCurrentValue_122.setString("10296039");
      noUnderlyings_0_1_0.set(UnderlyingCurrentValue_122);
      UnderlyingInstrument_122.insert(UnderlyingCurrentValue_122.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_122;
      UnderlyingDetachmentPoint_122.setString("55.990000");
      noUnderlyings_0_1_0.set(UnderlyingDetachmentPoint_122);
      UnderlyingInstrument_122.insert(UnderlyingDetachmentPoint_122.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_122;
      UnderlyingDirtyPrice_122.setString("14228779");
      noUnderlyings_0_1_0.set(UnderlyingDirtyPrice_122);
      UnderlyingInstrument_122.insert(UnderlyingDirtyPrice_122.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_122;
      UnderlyingEndPrice_122.setString("2662974");
      noUnderlyings_0_1_0.set(UnderlyingEndPrice_122);
      UnderlyingInstrument_122.insert(UnderlyingEndPrice_122.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_122;
      UnderlyingEndValue_122.setString("7485037");
      noUnderlyings_0_1_0.set(UnderlyingEndValue_122);
      UnderlyingInstrument_122.insert(UnderlyingEndValue_122.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_122(689278792);
      noUnderlyings_0_1_0.set(UnderlyingExerciseStyle_122);
      UnderlyingInstrument_122.insert(UnderlyingExerciseStyle_122.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_122;
      UnderlyingFXRate_122.setString("937030");
      noUnderlyings_0_1_0.set(UnderlyingFXRate_122);
      UnderlyingInstrument_122.insert(UnderlyingFXRate_122.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_122('M');
      noUnderlyings_0_1_0.set(UnderlyingFXRateCalc_122);
      UnderlyingInstrument_122.insert(UnderlyingFXRateCalc_122.getString());
      FIX::UnderlyingFactor UnderlyingFactor_122;
      UnderlyingFactor_122.setString("7750451");
      noUnderlyings_0_1_0.set(UnderlyingFactor_122);
      UnderlyingInstrument_122.insert(UnderlyingFactor_122.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_122(690362752);
      noUnderlyings_0_1_0.set(UnderlyingFlowScheduleType_122);
      UnderlyingInstrument_122.insert(UnderlyingFlowScheduleType_122.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_122("STRING_71210424");
      noUnderlyings_0_1_0.set(UnderlyingInstrRegistry_122);
      UnderlyingInstrument_122.insert(UnderlyingInstrRegistry_122.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_122("LOCALMKTDATE_812728630");
      noUnderlyings_0_1_0.set(UnderlyingIssueDate_122);
      UnderlyingInstrument_122.insert(UnderlyingIssueDate_122.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_122("STRING_1963877224");
      noUnderlyings_0_1_0.set(UnderlyingIssuer_122);
      UnderlyingInstrument_122.insert(UnderlyingIssuer_122.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_122("STRING_930292985");
      noUnderlyings_0_1_0.set(UnderlyingLocaleOfIssue_122);
      UnderlyingInstrument_122.insert(UnderlyingLocaleOfIssue_122.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_122("LOCALMKTDATE_1066452467");
      noUnderlyings_0_1_0.set(UnderlyingMaturityDate_122);
      UnderlyingInstrument_122.insert(UnderlyingMaturityDate_122.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_122("MONTHYEAR_447429602");
      noUnderlyings_0_1_0.set(UnderlyingMaturityMonthYear_122);
      UnderlyingInstrument_122.insert(UnderlyingMaturityMonthYear_122.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_122("TZTIMEONLY_2083992542");
      noUnderlyings_0_1_0.set(UnderlyingMaturityTime_122);
      UnderlyingInstrument_122.insert(UnderlyingMaturityTime_122.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_122;
      UnderlyingNotionalPercentageOutstanding_122.setString("85.160000");
      noUnderlyings_0_1_0.set(UnderlyingNotionalPercentageOutstanding_122);
      UnderlyingInstrument_122.insert(UnderlyingNotionalPercentageOutstanding_122.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_122('8');
      noUnderlyings_0_1_0.set(UnderlyingOptAttribute_122);
      UnderlyingInstrument_122.insert(UnderlyingOptAttribute_122.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_122;
      UnderlyingOriginalNotionalPercentageOutstanding_122.setString("75.900000");
      noUnderlyings_0_1_0.set(UnderlyingOriginalNotionalPercentageOutstanding_122);
      UnderlyingInstrument_122.insert(UnderlyingOriginalNotionalPercentageOutstanding_122.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_122("STRING_406201535");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasure_122);
      UnderlyingInstrument_122.insert(UnderlyingPriceUnitOfMeasure_122.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_122;
      UnderlyingPriceUnitOfMeasureQty_122.setString("39353");
      noUnderlyings_0_1_0.set(UnderlyingPriceUnitOfMeasureQty_122);
      UnderlyingInstrument_122.insert(UnderlyingPriceUnitOfMeasureQty_122.getString());
      FIX::UnderlyingProduct UnderlyingProduct_122(337293873);
      noUnderlyings_0_1_0.set(UnderlyingProduct_122);
      UnderlyingInstrument_122.insert(UnderlyingProduct_122.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_122(113920744);
      noUnderlyings_0_1_0.set(UnderlyingPutOrCall_122);
      UnderlyingInstrument_122.insert(UnderlyingPutOrCall_122.getString());
      FIX::UnderlyingPx UnderlyingPx_122;
      UnderlyingPx_122.setString("14329115");
      noUnderlyings_0_1_0.set(UnderlyingPx_122);
      UnderlyingInstrument_122.insert(UnderlyingPx_122.getString());
      FIX::UnderlyingQty UnderlyingQty_122;
      UnderlyingQty_122.setString("20856762");
      noUnderlyings_0_1_0.set(UnderlyingQty_122);
      UnderlyingInstrument_122.insert(UnderlyingQty_122.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_122("LOCALMKTDATE_1336223746");
      noUnderlyings_0_1_0.set(UnderlyingRedemptionDate_122);
      UnderlyingInstrument_122.insert(UnderlyingRedemptionDate_122.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_122("STRING_644803050");
      noUnderlyings_0_1_0.set(UnderlyingRepoCollateralSecurityType_122);
      UnderlyingInstrument_122.insert(UnderlyingRepoCollateralSecurityType_122.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_122;
      UnderlyingRepurchaseRate_122.setString("31.900000");
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseRate_122);
      UnderlyingInstrument_122.insert(UnderlyingRepurchaseRate_122.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_122(327620645);
      noUnderlyings_0_1_0.set(UnderlyingRepurchaseTerm_122);
      UnderlyingInstrument_122.insert(UnderlyingRepurchaseTerm_122.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_122("STRING_1397130754");
      noUnderlyings_0_1_0.set(UnderlyingRestructuringType_122);
      UnderlyingInstrument_122.insert(UnderlyingRestructuringType_122.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_122("STRING_1444337114");
      noUnderlyings_0_1_0.set(UnderlyingSecurityDesc_122);
      UnderlyingInstrument_122.insert(UnderlyingSecurityDesc_122.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_122("EXCHANGE_184252596");
      noUnderlyings_0_1_0.set(UnderlyingSecurityExchange_122);
      UnderlyingInstrument_122.insert(UnderlyingSecurityExchange_122.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_122("STRING_672525065");
      noUnderlyings_0_1_0.set(UnderlyingSecurityID_122);
      UnderlyingInstrument_122.insert(UnderlyingSecurityID_122.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_122("STRING_1710634579");
      noUnderlyings_0_1_0.set(UnderlyingSecurityIDSource_122);
      UnderlyingInstrument_122.insert(UnderlyingSecurityIDSource_122.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_122("STRING_932756354");
      noUnderlyings_0_1_0.set(UnderlyingSecuritySubType_122);
      UnderlyingInstrument_122.insert(UnderlyingSecuritySubType_122.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_122("STRING_1361803857");
      noUnderlyings_0_1_0.set(UnderlyingSecurityType_122);
      UnderlyingInstrument_122.insert(UnderlyingSecurityType_122.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_122("STRING_1804337590");
      noUnderlyings_0_1_0.set(UnderlyingSeniority_122);
      UnderlyingInstrument_122.insert(UnderlyingSeniority_122.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_122("STRING_480559127");
      noUnderlyings_0_1_0.set(UnderlyingSettlMethod_122);
      UnderlyingInstrument_122.insert(UnderlyingSettlMethod_122.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_122(2);
      noUnderlyings_0_1_0.set(UnderlyingSettlementType_122);
      UnderlyingInstrument_122.insert(UnderlyingSettlementType_122.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_122;
      UnderlyingStartValue_122.setString("3472166");
      noUnderlyings_0_1_0.set(UnderlyingStartValue_122);
      UnderlyingInstrument_122.insert(UnderlyingStartValue_122.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_122("STRING_551769551");
      noUnderlyings_0_1_0.set(UnderlyingStateOrProvinceOfIssue_122);
      UnderlyingInstrument_122.insert(UnderlyingStateOrProvinceOfIssue_122.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_122("CHF");
      noUnderlyings_0_1_0.set(UnderlyingStrikeCurrency_122);
      UnderlyingInstrument_122.insert(UnderlyingStrikeCurrency_122.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_122;
      UnderlyingStrikePrice_122.setString("14820625");
      noUnderlyings_0_1_0.set(UnderlyingStrikePrice_122);
      UnderlyingInstrument_122.insert(UnderlyingStrikePrice_122.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_122("STRING_1868546482");
      noUnderlyings_0_1_0.set(UnderlyingSymbol_122);
      UnderlyingInstrument_122.insert(UnderlyingSymbol_122.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_122("STRING_611039873");
      noUnderlyings_0_1_0.set(UnderlyingSymbolSfx_122);
      UnderlyingInstrument_122.insert(UnderlyingSymbolSfx_122.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_122("STRING_1418571430");
      noUnderlyings_0_1_0.set(UnderlyingTimeUnit_122);
      UnderlyingInstrument_122.insert(UnderlyingTimeUnit_122.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_122("STRING_1469321350");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasure_122);
      UnderlyingInstrument_122.insert(UnderlyingUnitOfMeasure_122.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_122;
      UnderlyingUnitOfMeasureQty_122.setString("6967080");
      noUnderlyings_0_1_0.set(UnderlyingUnitOfMeasureQty_122);
      UnderlyingInstrument_122.insert(UnderlyingUnitOfMeasureQty_122.getString());
      all_values.push_back(UnderlyingInstrument_122);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_254;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_254("STRING_1875522885");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltID_254);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_254.insert(UnderlyingSecurityAltID_254.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_254("STRING_700643438");
        noUnderlyingSecurityAltID_0_0_2_0.set(UnderlyingSecurityAltIDSource_254);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_254.insert(UnderlyingSecurityAltIDSource_254.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_254);

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_242;
        FIX::UnderlyingStipType UnderlyingStipType_242("STRING_1989443629");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipType_242);
        UnderlyingStipulations_NoUnderlyingStips_242.insert(UnderlyingStipType_242.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_242("STRING_2133554999");
        noUnderlyingStips_0_0_2_0.set(UnderlyingStipValue_242);
        UnderlyingStipulations_NoUnderlyingStips_242.insert(UnderlyingStipValue_242.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_242);

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_241;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_241("STRING_1178183727");
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyID_241);
        UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyID_241.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_241('6');
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyIDSource_241);
        UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyIDSource_241.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_241(1144965063);
        noUndlyInstrumentParties_0_0_2_0.set(UnderlyingInstrumentPartyRole_241);
        UndlyInstrumentParties_NoUndlyInstrumentParties_241.insert(UnderlyingInstrumentPartyRole_241.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_241);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_484("STRING_2028005155");
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubID_484);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484.insert(UnderlyingInstrumentPartySubID_484.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_484(441818529);
          noUndlyInstrumentPartySubIDs_0_0_0_3_0.set(UnderlyingInstrumentPartySubIDType_484);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484.insert(UnderlyingInstrumentPartySubIDType_484.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_485("STRING_1690056969");
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubID_485);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485.insert(UnderlyingInstrumentPartySubID_485.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_485(553046572);
          noUndlyInstrumentPartySubIDs_0_0_0_3_1.set(UnderlyingInstrumentPartySubIDType_485);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485.insert(UnderlyingInstrumentPartySubIDType_485.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_486("STRING_4969461");
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubID_486);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486.insert(UnderlyingInstrumentPartySubID_486.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_486(475329675);
          noUndlyInstrumentPartySubIDs_0_0_0_3_2.set(UnderlyingInstrumentPartySubIDType_486);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486.insert(UnderlyingInstrumentPartySubIDType_486.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_242;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_242("STRING_1914850429");
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyID_242);
        UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyID_242.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_242('1');
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyIDSource_242);
        UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyIDSource_242.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_242(955888802);
        noUndlyInstrumentParties_0_0_2_1.set(UnderlyingInstrumentPartyRole_242);
        UndlyInstrumentParties_NoUndlyInstrumentParties_242.insert(UnderlyingInstrumentPartyRole_242.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_242);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_487("STRING_9040098");
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubID_487);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487.insert(UnderlyingInstrumentPartySubID_487.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_487(1507658353);
          noUndlyInstrumentPartySubIDs_0_0_1_3_0.set(UnderlyingInstrumentPartySubIDType_487);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487.insert(UnderlyingInstrumentPartySubIDType_487.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_488("STRING_558826181");
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubID_488);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488.insert(UnderlyingInstrumentPartySubID_488.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_488(172650369);
          noUndlyInstrumentPartySubIDs_0_0_1_3_1.set(UnderlyingInstrumentPartySubIDType_488);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488.insert(UnderlyingInstrumentPartySubIDType_488.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_489("STRING_842237241");
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubID_489);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489.insert(UnderlyingInstrumentPartySubID_489.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_489(279889015);
          noUndlyInstrumentPartySubIDs_0_0_1_3_2.set(UnderlyingInstrumentPartySubIDType_489);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489.insert(UnderlyingInstrumentPartySubIDType_489.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_123;
      FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_123("DATA_783690243");
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuer_123);
      UnderlyingInstrument_123.insert(EncodedUnderlyingIssuer_123.getString());
      FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_123(113325023);
      noUnderlyings_0_1_1.set(EncodedUnderlyingIssuerLen_123);
      UnderlyingInstrument_123.insert(EncodedUnderlyingIssuerLen_123.getString());
      FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_123("DATA_1749210365");
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDesc_123);
      UnderlyingInstrument_123.insert(EncodedUnderlyingSecurityDesc_123.getString());
      FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_123(1480398285);
      noUnderlyings_0_1_1.set(EncodedUnderlyingSecurityDescLen_123);
      UnderlyingInstrument_123.insert(EncodedUnderlyingSecurityDescLen_123.getString());
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_123;
      UnderlyingAdjustedQuantity_123.setString("5680703");
      noUnderlyings_0_1_1.set(UnderlyingAdjustedQuantity_123);
      UnderlyingInstrument_123.insert(UnderlyingAdjustedQuantity_123.getString());
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_123;
      UnderlyingAllocationPercent_123.setString("96.020000");
      noUnderlyings_0_1_1.set(UnderlyingAllocationPercent_123);
      UnderlyingInstrument_123.insert(UnderlyingAllocationPercent_123.getString());
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_123;
      UnderlyingAttachmentPoint_123.setString("80.750000");
      noUnderlyings_0_1_1.set(UnderlyingAttachmentPoint_123);
      UnderlyingInstrument_123.insert(UnderlyingAttachmentPoint_123.getString());
      FIX::UnderlyingCFICode UnderlyingCFICode_123("STRING_1360109643");
      noUnderlyings_0_1_1.set(UnderlyingCFICode_123);
      UnderlyingInstrument_123.insert(UnderlyingCFICode_123.getString());
      FIX::UnderlyingCPProgram UnderlyingCPProgram_123("STRING_1319209584");
      noUnderlyings_0_1_1.set(UnderlyingCPProgram_123);
      UnderlyingInstrument_123.insert(UnderlyingCPProgram_123.getString());
      FIX::UnderlyingCPRegType UnderlyingCPRegType_123("STRING_19629427");
      noUnderlyings_0_1_1.set(UnderlyingCPRegType_123);
      UnderlyingInstrument_123.insert(UnderlyingCPRegType_123.getString());
      FIX::UnderlyingCapValue UnderlyingCapValue_123;
      UnderlyingCapValue_123.setString("20903415");
      noUnderlyings_0_1_1.set(UnderlyingCapValue_123);
      UnderlyingInstrument_123.insert(UnderlyingCapValue_123.getString());
      FIX::UnderlyingCashAmount UnderlyingCashAmount_123;
      UnderlyingCashAmount_123.setString("3499096");
      noUnderlyings_0_1_1.set(UnderlyingCashAmount_123);
      UnderlyingInstrument_123.insert(UnderlyingCashAmount_123.getString());
      FIX::UnderlyingCashType UnderlyingCashType_123("STRING_FIXED");
      noUnderlyings_0_1_1.set(UnderlyingCashType_123);
      UnderlyingInstrument_123.insert(UnderlyingCashType_123.getString());
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_123;
      UnderlyingContractMultiplier_123.setString("10878229");
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplier_123);
      UnderlyingInstrument_123.insert(UnderlyingContractMultiplier_123.getString());
      FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_123(1855714036);
      noUnderlyings_0_1_1.set(UnderlyingContractMultiplierUnit_123);
      UnderlyingInstrument_123.insert(UnderlyingContractMultiplierUnit_123.getString());
      FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_123("COUNTRY_531025336");
      noUnderlyings_0_1_1.set(UnderlyingCountryOfIssue_123);
      UnderlyingInstrument_123.insert(UnderlyingCountryOfIssue_123.getString());
      FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_123("LOCALMKTDATE_1529641461");
      noUnderlyings_0_1_1.set(UnderlyingCouponPaymentDate_123);
      UnderlyingInstrument_123.insert(UnderlyingCouponPaymentDate_123.getString());
      FIX::UnderlyingCouponRate UnderlyingCouponRate_123;
      UnderlyingCouponRate_123.setString("73.570000");
      noUnderlyings_0_1_1.set(UnderlyingCouponRate_123);
      UnderlyingInstrument_123.insert(UnderlyingCouponRate_123.getString());
      FIX::UnderlyingCreditRating UnderlyingCreditRating_123("STRING_1084071908");
      noUnderlyings_0_1_1.set(UnderlyingCreditRating_123);
      UnderlyingInstrument_123.insert(UnderlyingCreditRating_123.getString());
      FIX::UnderlyingCurrency UnderlyingCurrency_123("GBP");
      noUnderlyings_0_1_1.set(UnderlyingCurrency_123);
      UnderlyingInstrument_123.insert(UnderlyingCurrency_123.getString());
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_123;
      UnderlyingCurrentValue_123.setString("8514386");
      noUnderlyings_0_1_1.set(UnderlyingCurrentValue_123);
      UnderlyingInstrument_123.insert(UnderlyingCurrentValue_123.getString());
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_123;
      UnderlyingDetachmentPoint_123.setString("43.250000");
      noUnderlyings_0_1_1.set(UnderlyingDetachmentPoint_123);
      UnderlyingInstrument_123.insert(UnderlyingDetachmentPoint_123.getString());
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_123;
      UnderlyingDirtyPrice_123.setString("6820221");
      noUnderlyings_0_1_1.set(UnderlyingDirtyPrice_123);
      UnderlyingInstrument_123.insert(UnderlyingDirtyPrice_123.getString());
      FIX::UnderlyingEndPrice UnderlyingEndPrice_123;
      UnderlyingEndPrice_123.setString("6081708");
      noUnderlyings_0_1_1.set(UnderlyingEndPrice_123);
      UnderlyingInstrument_123.insert(UnderlyingEndPrice_123.getString());
      FIX::UnderlyingEndValue UnderlyingEndValue_123;
      UnderlyingEndValue_123.setString("12054744");
      noUnderlyings_0_1_1.set(UnderlyingEndValue_123);
      UnderlyingInstrument_123.insert(UnderlyingEndValue_123.getString());
      FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_123(42196891);
      noUnderlyings_0_1_1.set(UnderlyingExerciseStyle_123);
      UnderlyingInstrument_123.insert(UnderlyingExerciseStyle_123.getString());
      FIX::UnderlyingFXRate UnderlyingFXRate_123;
      UnderlyingFXRate_123.setString("11669970");
      noUnderlyings_0_1_1.set(UnderlyingFXRate_123);
      UnderlyingInstrument_123.insert(UnderlyingFXRate_123.getString());
      FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_123('M');
      noUnderlyings_0_1_1.set(UnderlyingFXRateCalc_123);
      UnderlyingInstrument_123.insert(UnderlyingFXRateCalc_123.getString());
      FIX::UnderlyingFactor UnderlyingFactor_123;
      UnderlyingFactor_123.setString("8844341");
      noUnderlyings_0_1_1.set(UnderlyingFactor_123);
      UnderlyingInstrument_123.insert(UnderlyingFactor_123.getString());
      FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_123(1446886053);
      noUnderlyings_0_1_1.set(UnderlyingFlowScheduleType_123);
      UnderlyingInstrument_123.insert(UnderlyingFlowScheduleType_123.getString());
      FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_123("STRING_14331388");
      noUnderlyings_0_1_1.set(UnderlyingInstrRegistry_123);
      UnderlyingInstrument_123.insert(UnderlyingInstrRegistry_123.getString());
      FIX::UnderlyingIssueDate UnderlyingIssueDate_123("LOCALMKTDATE_997759155");
      noUnderlyings_0_1_1.set(UnderlyingIssueDate_123);
      UnderlyingInstrument_123.insert(UnderlyingIssueDate_123.getString());
      FIX::UnderlyingIssuer UnderlyingIssuer_123("STRING_1048612771");
      noUnderlyings_0_1_1.set(UnderlyingIssuer_123);
      UnderlyingInstrument_123.insert(UnderlyingIssuer_123.getString());
      FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_123("STRING_1494729674");
      noUnderlyings_0_1_1.set(UnderlyingLocaleOfIssue_123);
      UnderlyingInstrument_123.insert(UnderlyingLocaleOfIssue_123.getString());
      FIX::UnderlyingMaturityDate UnderlyingMaturityDate_123("LOCALMKTDATE_1565829552");
      noUnderlyings_0_1_1.set(UnderlyingMaturityDate_123);
      UnderlyingInstrument_123.insert(UnderlyingMaturityDate_123.getString());
      FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_123("MONTHYEAR_378378725");
      noUnderlyings_0_1_1.set(UnderlyingMaturityMonthYear_123);
      UnderlyingInstrument_123.insert(UnderlyingMaturityMonthYear_123.getString());
      FIX::UnderlyingMaturityTime UnderlyingMaturityTime_123("TZTIMEONLY_1528287749");
      noUnderlyings_0_1_1.set(UnderlyingMaturityTime_123);
      UnderlyingInstrument_123.insert(UnderlyingMaturityTime_123.getString());
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_123;
      UnderlyingNotionalPercentageOutstanding_123.setString("55.470000");
      noUnderlyings_0_1_1.set(UnderlyingNotionalPercentageOutstanding_123);
      UnderlyingInstrument_123.insert(UnderlyingNotionalPercentageOutstanding_123.getString());
      FIX::UnderlyingOptAttribute UnderlyingOptAttribute_123('1');
      noUnderlyings_0_1_1.set(UnderlyingOptAttribute_123);
      UnderlyingInstrument_123.insert(UnderlyingOptAttribute_123.getString());
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_123;
      UnderlyingOriginalNotionalPercentageOutstanding_123.setString("71.760000");
      noUnderlyings_0_1_1.set(UnderlyingOriginalNotionalPercentageOutstanding_123);
      UnderlyingInstrument_123.insert(UnderlyingOriginalNotionalPercentageOutstanding_123.getString());
      FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_123("STRING_721313415");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasure_123);
      UnderlyingInstrument_123.insert(UnderlyingPriceUnitOfMeasure_123.getString());
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_123;
      UnderlyingPriceUnitOfMeasureQty_123.setString("20474979");
      noUnderlyings_0_1_1.set(UnderlyingPriceUnitOfMeasureQty_123);
      UnderlyingInstrument_123.insert(UnderlyingPriceUnitOfMeasureQty_123.getString());
      FIX::UnderlyingProduct UnderlyingProduct_123(50937357);
      noUnderlyings_0_1_1.set(UnderlyingProduct_123);
      UnderlyingInstrument_123.insert(UnderlyingProduct_123.getString());
      FIX::UnderlyingPutOrCall UnderlyingPutOrCall_123(1809136346);
      noUnderlyings_0_1_1.set(UnderlyingPutOrCall_123);
      UnderlyingInstrument_123.insert(UnderlyingPutOrCall_123.getString());
      FIX::UnderlyingPx UnderlyingPx_123;
      UnderlyingPx_123.setString("17557283");
      noUnderlyings_0_1_1.set(UnderlyingPx_123);
      UnderlyingInstrument_123.insert(UnderlyingPx_123.getString());
      FIX::UnderlyingQty UnderlyingQty_123;
      UnderlyingQty_123.setString("5819626");
      noUnderlyings_0_1_1.set(UnderlyingQty_123);
      UnderlyingInstrument_123.insert(UnderlyingQty_123.getString());
      FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_123("LOCALMKTDATE_1191294159");
      noUnderlyings_0_1_1.set(UnderlyingRedemptionDate_123);
      UnderlyingInstrument_123.insert(UnderlyingRedemptionDate_123.getString());
      FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_123("STRING_1006532070");
      noUnderlyings_0_1_1.set(UnderlyingRepoCollateralSecurityType_123);
      UnderlyingInstrument_123.insert(UnderlyingRepoCollateralSecurityType_123.getString());
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_123;
      UnderlyingRepurchaseRate_123.setString("46.010000");
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseRate_123);
      UnderlyingInstrument_123.insert(UnderlyingRepurchaseRate_123.getString());
      FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_123(578421433);
      noUnderlyings_0_1_1.set(UnderlyingRepurchaseTerm_123);
      UnderlyingInstrument_123.insert(UnderlyingRepurchaseTerm_123.getString());
      FIX::UnderlyingRestructuringType UnderlyingRestructuringType_123("STRING_732665454");
      noUnderlyings_0_1_1.set(UnderlyingRestructuringType_123);
      UnderlyingInstrument_123.insert(UnderlyingRestructuringType_123.getString());
      FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_123("STRING_369989643");
      noUnderlyings_0_1_1.set(UnderlyingSecurityDesc_123);
      UnderlyingInstrument_123.insert(UnderlyingSecurityDesc_123.getString());
      FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_123("EXCHANGE_1774855759");
      noUnderlyings_0_1_1.set(UnderlyingSecurityExchange_123);
      UnderlyingInstrument_123.insert(UnderlyingSecurityExchange_123.getString());
      FIX::UnderlyingSecurityID UnderlyingSecurityID_123("STRING_1414687640");
      noUnderlyings_0_1_1.set(UnderlyingSecurityID_123);
      UnderlyingInstrument_123.insert(UnderlyingSecurityID_123.getString());
      FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_123("STRING_978160500");
      noUnderlyings_0_1_1.set(UnderlyingSecurityIDSource_123);
      UnderlyingInstrument_123.insert(UnderlyingSecurityIDSource_123.getString());
      FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_123("STRING_832846535");
      noUnderlyings_0_1_1.set(UnderlyingSecuritySubType_123);
      UnderlyingInstrument_123.insert(UnderlyingSecuritySubType_123.getString());
      FIX::UnderlyingSecurityType UnderlyingSecurityType_123("STRING_1456884531");
      noUnderlyings_0_1_1.set(UnderlyingSecurityType_123);
      UnderlyingInstrument_123.insert(UnderlyingSecurityType_123.getString());
      FIX::UnderlyingSeniority UnderlyingSeniority_123("STRING_2145157538");
      noUnderlyings_0_1_1.set(UnderlyingSeniority_123);
      UnderlyingInstrument_123.insert(UnderlyingSeniority_123.getString());
      FIX::UnderlyingSettlMethod UnderlyingSettlMethod_123("STRING_63487680");
      noUnderlyings_0_1_1.set(UnderlyingSettlMethod_123);
      UnderlyingInstrument_123.insert(UnderlyingSettlMethod_123.getString());
      FIX::UnderlyingSettlementType UnderlyingSettlementType_123(5);
      noUnderlyings_0_1_1.set(UnderlyingSettlementType_123);
      UnderlyingInstrument_123.insert(UnderlyingSettlementType_123.getString());
      FIX::UnderlyingStartValue UnderlyingStartValue_123;
      UnderlyingStartValue_123.setString("14445599");
      noUnderlyings_0_1_1.set(UnderlyingStartValue_123);
      UnderlyingInstrument_123.insert(UnderlyingStartValue_123.getString());
      FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_123("STRING_77819069");
      noUnderlyings_0_1_1.set(UnderlyingStateOrProvinceOfIssue_123);
      UnderlyingInstrument_123.insert(UnderlyingStateOrProvinceOfIssue_123.getString());
      FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_123("GBP");
      noUnderlyings_0_1_1.set(UnderlyingStrikeCurrency_123);
      UnderlyingInstrument_123.insert(UnderlyingStrikeCurrency_123.getString());
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_123;
      UnderlyingStrikePrice_123.setString("15725487");
      noUnderlyings_0_1_1.set(UnderlyingStrikePrice_123);
      UnderlyingInstrument_123.insert(UnderlyingStrikePrice_123.getString());
      FIX::UnderlyingSymbol UnderlyingSymbol_123("STRING_609940074");
      noUnderlyings_0_1_1.set(UnderlyingSymbol_123);
      UnderlyingInstrument_123.insert(UnderlyingSymbol_123.getString());
      FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_123("STRING_724067792");
      noUnderlyings_0_1_1.set(UnderlyingSymbolSfx_123);
      UnderlyingInstrument_123.insert(UnderlyingSymbolSfx_123.getString());
      FIX::UnderlyingTimeUnit UnderlyingTimeUnit_123("STRING_953352844");
      noUnderlyings_0_1_1.set(UnderlyingTimeUnit_123);
      UnderlyingInstrument_123.insert(UnderlyingTimeUnit_123.getString());
      FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_123("STRING_1388395621");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasure_123);
      UnderlyingInstrument_123.insert(UnderlyingUnitOfMeasure_123.getString());
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_123;
      UnderlyingUnitOfMeasureQty_123.setString("2741724");
      noUnderlyings_0_1_1.set(UnderlyingUnitOfMeasureQty_123);
      UnderlyingInstrument_123.insert(UnderlyingUnitOfMeasureQty_123.getString());
      all_values.push_back(UnderlyingInstrument_123);

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_255;
        FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_255("STRING_2109709036");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltID_255);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_255.insert(UnderlyingSecurityAltID_255.getString());
        FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_255("STRING_174186778");
        noUnderlyingSecurityAltID_0_1_2_0.set(UnderlyingSecurityAltIDSource_255);
        UndSecAltIDGrp_NoUnderlyingSecurityAltID_255.insert(UnderlyingSecurityAltIDSource_255.getString());
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_255);

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_243;
        FIX::UnderlyingStipType UnderlyingStipType_243("STRING_1771361735");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipType_243);
        UnderlyingStipulations_NoUnderlyingStips_243.insert(UnderlyingStipType_243.getString());
        FIX::UnderlyingStipValue UnderlyingStipValue_243("STRING_1929915139");
        noUnderlyingStips_0_1_2_0.set(UnderlyingStipValue_243);
        UnderlyingStipulations_NoUnderlyingStips_243.insert(UnderlyingStipValue_243.getString());
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_243);

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_243;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_243("STRING_815172246");
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyID_243);
        UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyID_243.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_243('7');
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyIDSource_243);
        UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyIDSource_243.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_243(505237376);
        noUndlyInstrumentParties_0_1_2_0.set(UnderlyingInstrumentPartyRole_243);
        UndlyInstrumentParties_NoUndlyInstrumentParties_243.insert(UnderlyingInstrumentPartyRole_243.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_243);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_490("STRING_1521629015");
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubID_490);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490.insert(UnderlyingInstrumentPartySubID_490.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_490(875227020);
          noUndlyInstrumentPartySubIDs_0_1_0_3_0.set(UnderlyingInstrumentPartySubIDType_490);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490.insert(UnderlyingInstrumentPartySubIDType_490.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_491("STRING_1020965791");
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubID_491);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491.insert(UnderlyingInstrumentPartySubID_491.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_491(788833007);
          noUndlyInstrumentPartySubIDs_0_1_0_3_1.set(UnderlyingInstrumentPartySubIDType_491);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491.insert(UnderlyingInstrumentPartySubIDType_491.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_492("STRING_1853387520");
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubID_492);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492.insert(UnderlyingInstrumentPartySubID_492.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_492(1853812326);
          noUndlyInstrumentPartySubIDs_0_1_0_3_2.set(UnderlyingInstrumentPartySubIDType_492);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492.insert(UnderlyingInstrumentPartySubIDType_492.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_492);

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_244;
        FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_244("STRING_98233890");
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyID_244);
        UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyID_244.getString());
        FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_244('1');
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyIDSource_244);
        UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyIDSource_244.getString());
        FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_244(1917300006);
        noUndlyInstrumentParties_0_1_2_1.set(UnderlyingInstrumentPartyRole_244);
        UndlyInstrumentParties_NoUndlyInstrumentParties_244.insert(UnderlyingInstrumentPartyRole_244.getString());
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_244);

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_493("STRING_1148137705");
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubID_493);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493.insert(UnderlyingInstrumentPartySubID_493.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_493(1995119075);
          noUndlyInstrumentPartySubIDs_0_1_1_3_0.set(UnderlyingInstrumentPartySubIDType_493);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493.insert(UnderlyingInstrumentPartySubIDType_493.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_493);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_494("STRING_1483663076");
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubID_494);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494.insert(UnderlyingInstrumentPartySubID_494.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_494(1493826772);
          noUndlyInstrumentPartySubIDs_0_1_1_3_1.set(UnderlyingInstrumentPartySubIDType_494);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494.insert(UnderlyingInstrumentPartySubIDType_494.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_494);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::SecurityListUpdateReport::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495;
          FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_495("STRING_1420184170");
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubID_495);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495.insert(UnderlyingInstrumentPartySubID_495.getString());
          FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_495(2093603150);
          noUndlyInstrumentPartySubIDs_0_1_1_3_2.set(UnderlyingInstrumentPartySubIDType_495);
          UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495.insert(UnderlyingInstrumentPartySubIDType_495.getString());
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_495);

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    // YieldData
    multiset<string> YieldData_26;
    FIX::Yield Yield_26;
    Yield_26.setString("9.160000");
    noRelatedSym_0_0.set(Yield_26);
    YieldData_26.insert(Yield_26.getString());
    FIX::YieldCalcDate YieldCalcDate_26("LOCALMKTDATE_226053367");
    noRelatedSym_0_0.set(YieldCalcDate_26);
    YieldData_26.insert(YieldCalcDate_26.getString());
    FIX::YieldRedemptionDate YieldRedemptionDate_26("LOCALMKTDATE_1334515124");
    noRelatedSym_0_0.set(YieldRedemptionDate_26);
    YieldData_26.insert(YieldRedemptionDate_26.getString());
    FIX::YieldRedemptionPrice YieldRedemptionPrice_26;
    YieldRedemptionPrice_26.setString("3445833");
    noRelatedSym_0_0.set(YieldRedemptionPrice_26);
    YieldData_26.insert(YieldRedemptionPrice_26.getString());
    FIX::YieldRedemptionPriceType YieldRedemptionPriceType_26(579839740);
    noRelatedSym_0_0.set(YieldRedemptionPriceType_26);
    YieldData_26.insert(YieldRedemptionPriceType_26.getString());
    FIX::YieldType YieldType_26("STRING_SIMPLE");
    noRelatedSym_0_0.set(YieldType_26);
    YieldData_26.insert(YieldType_26.getString());
    all_values.push_back(YieldData_26);

    msg.addGroup(noRelatedSym_0_0);
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
