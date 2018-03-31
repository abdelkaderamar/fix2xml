#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/SecurityStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatus, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::SecurityStatus msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatus_62;
  FIX::Adjustment Adjustment_0(3);
  msg.set(Adjustment_0);
  SecurityStatus_62.insert(Adjustment_0.getString());
  FIX::BuyVolume BuyVolume_0;
  BuyVolume_0.setString("14773888");
  msg.set(BuyVolume_0);
  SecurityStatus_62.insert(BuyVolume_0.getString());
  FIX::CorporateAction CorporateAction_7("MULTIPLECHARVALUE_H");
  msg.set(CorporateAction_7);
  SecurityStatus_62.insert(CorporateAction_7.getString());
  FIX::Currency Currency_49("USD");
  msg.set(Currency_49);
  SecurityStatus_62.insert(Currency_49.getString());
  FIX::DueToRelated DueToRelated_0(false);
  msg.set(DueToRelated_0);
  SecurityStatus_62.insert(DueToRelated_0.getString());
  FIX::EncodedText EncodedText_73("DATA_1459537606");
  msg.set(EncodedText_73);
  SecurityStatus_62.insert(EncodedText_73.getString());
  FIX::EncodedTextLen EncodedTextLen_73(1266595831);
  msg.set(EncodedTextLen_73);
  SecurityStatus_62.insert(EncodedTextLen_73.getString());
  FIX::FinancialStatus FinancialStatus_4("MULTIPLECHARVALUE_2");
  msg.set(FinancialStatus_4);
  SecurityStatus_62.insert(FinancialStatus_4.getString());
  FIX::FirstPx FirstPx_2;
  FirstPx_2.setString("13232617");
  msg.set(FirstPx_2);
  SecurityStatus_62.insert(FirstPx_2.getString());
  FIX::HaltReasonInt HaltReasonInt_2(4);
  msg.set(HaltReasonInt_2);
  SecurityStatus_62.insert(HaltReasonInt_2.getString());
  FIX::HighPx HighPx_2;
  HighPx_2.setString("10943128");
  msg.set(HighPx_2);
  SecurityStatus_62.insert(HighPx_2.getString());
  FIX::InViewOfCommon InViewOfCommon_0(true);
  msg.set(InViewOfCommon_0);
  SecurityStatus_62.insert(InViewOfCommon_0.getString());
  FIX::LastPx LastPx_8;
  LastPx_8.setString("16440481");
  msg.set(LastPx_8);
  SecurityStatus_62.insert(LastPx_8.getString());
  FIX::LowPx LowPx_2;
  LowPx_2.setString("12945485");
  msg.set(LowPx_2);
  SecurityStatus_62.insert(LowPx_2.getString());
  FIX::MDBookType MDBookType_8(1);
  msg.set(MDBookType_8);
  SecurityStatus_62.insert(MDBookType_8.getString());
  FIX::MarketDepth MarketDepth_9(282315410);
  msg.set(MarketDepth_9);
  SecurityStatus_62.insert(MarketDepth_9.getString());
  FIX::MarketID MarketID_17("EXCHANGE_179529174");
  msg.set(MarketID_17);
  SecurityStatus_62.insert(MarketID_17.getString());
  FIX::MarketSegmentID MarketSegmentID_17("STRING_389258211");
  msg.set(MarketSegmentID_17);
  SecurityStatus_62.insert(MarketSegmentID_17.getString());
  FIX::SecurityStatusReqID SecurityStatusReqID_0("STRING_92607909");
  msg.set(SecurityStatusReqID_0);
  SecurityStatus_62.insert(SecurityStatusReqID_0.getString());
  FIX::SecurityTradingEvent SecurityTradingEvent_0(7);
  msg.set(SecurityTradingEvent_0);
  SecurityStatus_62.insert(SecurityTradingEvent_0.getString());
  FIX::SecurityTradingStatus SecurityTradingStatus_2(17);
  msg.set(SecurityTradingStatus_2);
  SecurityStatus_62.insert(SecurityTradingStatus_2.getString());
  FIX::SellVolume SellVolume_0;
  SellVolume_0.setString("21272158");
  msg.set(SellVolume_0);
  SecurityStatus_62.insert(SellVolume_0.getString());
  FIX::Text Text_73("STRING_249786387");
  msg.set(Text_73);
  SecurityStatus_62.insert(Text_73.getString());
  FIX::TradingSessionID TradingSessionID_49("STRING_4");
  msg.set(TradingSessionID_49);
  SecurityStatus_62.insert(TradingSessionID_49.getString());
  FIX::TradingSessionSubID TradingSessionSubID_49("STRING_2");
  msg.set(TradingSessionSubID_49);
  SecurityStatus_62.insert(TradingSessionSubID_49.getString());
  FIX::TransactTime TransactTime_52(FIX::UTCTIMESTAMP(9, 55, 21, 18, 9, 2011));
  msg.set(TransactTime_52);
  SecurityStatus_62.insert(TransactTime_52.getString());
  FIX::UnsolicitedIndicator UnsolicitedIndicator_2(true);
  msg.set(UnsolicitedIndicator_2);
  SecurityStatus_62.insert(UnsolicitedIndicator_2.getString());
  all_values.push_back(SecurityStatus_62);

  all_compo_names.insert("SecurityStatus");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_16;
  FIX::ApplID ApplID_16("STRING_830227654");
  msg.set(ApplID_16);
  ApplicationSequenceControl_16.insert(ApplID_16.getString());
  FIX::ApplLastSeqNum ApplLastSeqNum_16(1167537678);
  msg.set(ApplLastSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplLastSeqNum_16.getString());
  FIX::ApplResendFlag ApplResendFlag_16(false);
  msg.set(ApplResendFlag_16);
  ApplicationSequenceControl_16.insert(ApplResendFlag_16.getString());
  FIX::ApplSeqNum ApplSeqNum_16(142281612);
  msg.set(ApplSeqNum_16);
  ApplicationSequenceControl_16.insert(ApplSeqNum_16.getString());
  all_values.push_back(ApplicationSequenceControl_16);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatus::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_49;
    FIX::EncodedLegIssuer EncodedLegIssuer_49("DATA_762742105");
    noLegs_0_0.set(EncodedLegIssuer_49);
    InstrumentLeg_49.insert(EncodedLegIssuer_49.getString());
    FIX::EncodedLegIssuerLen EncodedLegIssuerLen_49(1465543379);
    noLegs_0_0.set(EncodedLegIssuerLen_49);
    InstrumentLeg_49.insert(EncodedLegIssuerLen_49.getString());
    FIX::EncodedLegSecurityDesc EncodedLegSecurityDesc_49("DATA_199792304");
    noLegs_0_0.set(EncodedLegSecurityDesc_49);
    InstrumentLeg_49.insert(EncodedLegSecurityDesc_49.getString());
    FIX::EncodedLegSecurityDescLen EncodedLegSecurityDescLen_49(1857054914);
    noLegs_0_0.set(EncodedLegSecurityDescLen_49);
    InstrumentLeg_49.insert(EncodedLegSecurityDescLen_49.getString());
    FIX::LegCFICode LegCFICode_49("STRING_785630103");
    noLegs_0_0.set(LegCFICode_49);
    InstrumentLeg_49.insert(LegCFICode_49.getString());
    FIX::LegContractMultiplier LegContractMultiplier_49;
    LegContractMultiplier_49.setString("18438404");
    noLegs_0_0.set(LegContractMultiplier_49);
    InstrumentLeg_49.insert(LegContractMultiplier_49.getString());
    FIX::LegContractMultiplierUnit LegContractMultiplierUnit_49(1004119828);
    noLegs_0_0.set(LegContractMultiplierUnit_49);
    InstrumentLeg_49.insert(LegContractMultiplierUnit_49.getString());
    FIX::LegContractSettlMonth LegContractSettlMonth_49("MONTHYEAR_342608059");
    noLegs_0_0.set(LegContractSettlMonth_49);
    InstrumentLeg_49.insert(LegContractSettlMonth_49.getString());
    FIX::LegCountryOfIssue LegCountryOfIssue_49("COUNTRY_2126155894");
    noLegs_0_0.set(LegCountryOfIssue_49);
    InstrumentLeg_49.insert(LegCountryOfIssue_49.getString());
    FIX::LegCouponPaymentDate LegCouponPaymentDate_49("LOCALMKTDATE_1183649002");
    noLegs_0_0.set(LegCouponPaymentDate_49);
    InstrumentLeg_49.insert(LegCouponPaymentDate_49.getString());
    FIX::LegCouponRate LegCouponRate_49;
    LegCouponRate_49.setString("62.710000");
    noLegs_0_0.set(LegCouponRate_49);
    InstrumentLeg_49.insert(LegCouponRate_49.getString());
    FIX::LegCreditRating LegCreditRating_49("STRING_71280155");
    noLegs_0_0.set(LegCreditRating_49);
    InstrumentLeg_49.insert(LegCreditRating_49.getString());
    FIX::LegCurrency LegCurrency_49("CHF");
    noLegs_0_0.set(LegCurrency_49);
    InstrumentLeg_49.insert(LegCurrency_49.getString());
    FIX::LegDatedDate LegDatedDate_49("LOCALMKTDATE_51012366");
    noLegs_0_0.set(LegDatedDate_49);
    InstrumentLeg_49.insert(LegDatedDate_49.getString());
    FIX::LegExerciseStyle LegExerciseStyle_49(458555332);
    noLegs_0_0.set(LegExerciseStyle_49);
    InstrumentLeg_49.insert(LegExerciseStyle_49.getString());
    FIX::LegFactor LegFactor_49;
    LegFactor_49.setString("14272774");
    noLegs_0_0.set(LegFactor_49);
    InstrumentLeg_49.insert(LegFactor_49.getString());
    FIX::LegFlowScheduleType LegFlowScheduleType_49(1707712209);
    noLegs_0_0.set(LegFlowScheduleType_49);
    InstrumentLeg_49.insert(LegFlowScheduleType_49.getString());
    FIX::LegInstrRegistry LegInstrRegistry_49("STRING_1815628083");
    noLegs_0_0.set(LegInstrRegistry_49);
    InstrumentLeg_49.insert(LegInstrRegistry_49.getString());
    FIX::LegInterestAccrualDate LegInterestAccrualDate_49("LOCALMKTDATE_17342634");
    noLegs_0_0.set(LegInterestAccrualDate_49);
    InstrumentLeg_49.insert(LegInterestAccrualDate_49.getString());
    FIX::LegIssueDate LegIssueDate_49("LOCALMKTDATE_939277077");
    noLegs_0_0.set(LegIssueDate_49);
    InstrumentLeg_49.insert(LegIssueDate_49.getString());
    FIX::LegIssuer LegIssuer_49("STRING_787012696");
    noLegs_0_0.set(LegIssuer_49);
    InstrumentLeg_49.insert(LegIssuer_49.getString());
    FIX::LegLocaleOfIssue LegLocaleOfIssue_49("STRING_101647880");
    noLegs_0_0.set(LegLocaleOfIssue_49);
    InstrumentLeg_49.insert(LegLocaleOfIssue_49.getString());
    FIX::LegMaturityDate LegMaturityDate_49("LOCALMKTDATE_2066577173");
    noLegs_0_0.set(LegMaturityDate_49);
    InstrumentLeg_49.insert(LegMaturityDate_49.getString());
    FIX::LegMaturityMonthYear LegMaturityMonthYear_49("MONTHYEAR_1235786134");
    noLegs_0_0.set(LegMaturityMonthYear_49);
    InstrumentLeg_49.insert(LegMaturityMonthYear_49.getString());
    FIX::LegMaturityTime LegMaturityTime_49("TZTIMEONLY_588399820");
    noLegs_0_0.set(LegMaturityTime_49);
    InstrumentLeg_49.insert(LegMaturityTime_49.getString());
    FIX::LegOptAttribute LegOptAttribute_49('7');
    noLegs_0_0.set(LegOptAttribute_49);
    InstrumentLeg_49.insert(LegOptAttribute_49.getString());
    FIX::LegOptionRatio LegOptionRatio_49;
    LegOptionRatio_49.setString("2558401");
    noLegs_0_0.set(LegOptionRatio_49);
    InstrumentLeg_49.insert(LegOptionRatio_49.getString());
    FIX::LegPool LegPool_49("STRING_1338181855");
    noLegs_0_0.set(LegPool_49);
    InstrumentLeg_49.insert(LegPool_49.getString());
    FIX::LegPriceUnitOfMeasure LegPriceUnitOfMeasure_49("STRING_891602791");
    noLegs_0_0.set(LegPriceUnitOfMeasure_49);
    InstrumentLeg_49.insert(LegPriceUnitOfMeasure_49.getString());
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_49;
    LegPriceUnitOfMeasureQty_49.setString("5424900");
    noLegs_0_0.set(LegPriceUnitOfMeasureQty_49);
    InstrumentLeg_49.insert(LegPriceUnitOfMeasureQty_49.getString());
    FIX::LegProduct LegProduct_49(2100923960);
    noLegs_0_0.set(LegProduct_49);
    InstrumentLeg_49.insert(LegProduct_49.getString());
    FIX::LegPutOrCall LegPutOrCall_49(209662522);
    noLegs_0_0.set(LegPutOrCall_49);
    InstrumentLeg_49.insert(LegPutOrCall_49.getString());
    FIX::LegRatioQty LegRatioQty_49;
    LegRatioQty_49.setString("7422823");
    noLegs_0_0.set(LegRatioQty_49);
    InstrumentLeg_49.insert(LegRatioQty_49.getString());
    FIX::LegRedemptionDate LegRedemptionDate_49("LOCALMKTDATE_1810495227");
    noLegs_0_0.set(LegRedemptionDate_49);
    InstrumentLeg_49.insert(LegRedemptionDate_49.getString());
    FIX::LegRepoCollateralSecurityType LegRepoCollateralSecurityType_49("STRING_995292626");
    noLegs_0_0.set(LegRepoCollateralSecurityType_49);
    InstrumentLeg_49.insert(LegRepoCollateralSecurityType_49.getString());
    FIX::LegRepurchaseRate LegRepurchaseRate_49;
    LegRepurchaseRate_49.setString("91.650000");
    noLegs_0_0.set(LegRepurchaseRate_49);
    InstrumentLeg_49.insert(LegRepurchaseRate_49.getString());
    FIX::LegRepurchaseTerm LegRepurchaseTerm_49(667131407);
    noLegs_0_0.set(LegRepurchaseTerm_49);
    InstrumentLeg_49.insert(LegRepurchaseTerm_49.getString());
    FIX::LegSecurityDesc LegSecurityDesc_49("STRING_1337900685");
    noLegs_0_0.set(LegSecurityDesc_49);
    InstrumentLeg_49.insert(LegSecurityDesc_49.getString());
    FIX::LegSecurityExchange LegSecurityExchange_49("EXCHANGE_417311411");
    noLegs_0_0.set(LegSecurityExchange_49);
    InstrumentLeg_49.insert(LegSecurityExchange_49.getString());
    FIX::LegSecurityID LegSecurityID_49("STRING_1850780410");
    noLegs_0_0.set(LegSecurityID_49);
    InstrumentLeg_49.insert(LegSecurityID_49.getString());
    FIX::LegSecurityIDSource LegSecurityIDSource_49("STRING_2069766956");
    noLegs_0_0.set(LegSecurityIDSource_49);
    InstrumentLeg_49.insert(LegSecurityIDSource_49.getString());
    FIX::LegSecuritySubType LegSecuritySubType_49("STRING_488591566");
    noLegs_0_0.set(LegSecuritySubType_49);
    InstrumentLeg_49.insert(LegSecuritySubType_49.getString());
    FIX::LegSecurityType LegSecurityType_49("STRING_2059549355");
    noLegs_0_0.set(LegSecurityType_49);
    InstrumentLeg_49.insert(LegSecurityType_49.getString());
    FIX::LegSide LegSide_49('1');
    noLegs_0_0.set(LegSide_49);
    InstrumentLeg_49.insert(LegSide_49.getString());
    FIX::LegStateOrProvinceOfIssue LegStateOrProvinceOfIssue_49("STRING_539603933");
    noLegs_0_0.set(LegStateOrProvinceOfIssue_49);
    InstrumentLeg_49.insert(LegStateOrProvinceOfIssue_49.getString());
    FIX::LegStrikeCurrency LegStrikeCurrency_49("EUR");
    noLegs_0_0.set(LegStrikeCurrency_49);
    InstrumentLeg_49.insert(LegStrikeCurrency_49.getString());
    FIX::LegStrikePrice LegStrikePrice_49;
    LegStrikePrice_49.setString("998324");
    noLegs_0_0.set(LegStrikePrice_49);
    InstrumentLeg_49.insert(LegStrikePrice_49.getString());
    FIX::LegSymbol LegSymbol_49("STRING_38765474");
    noLegs_0_0.set(LegSymbol_49);
    InstrumentLeg_49.insert(LegSymbol_49.getString());
    FIX::LegSymbolSfx LegSymbolSfx_49("STRING_983818279");
    noLegs_0_0.set(LegSymbolSfx_49);
    InstrumentLeg_49.insert(LegSymbolSfx_49.getString());
    FIX::LegTimeUnit LegTimeUnit_49("STRING_1039109571");
    noLegs_0_0.set(LegTimeUnit_49);
    InstrumentLeg_49.insert(LegTimeUnit_49.getString());
    FIX::LegUnitOfMeasure LegUnitOfMeasure_49("STRING_825778171");
    noLegs_0_0.set(LegUnitOfMeasure_49);
    InstrumentLeg_49.insert(LegUnitOfMeasure_49.getString());
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_49;
    LegUnitOfMeasureQty_49.setString("10854661");
    noLegs_0_0.set(LegUnitOfMeasureQty_49);
    InstrumentLeg_49.insert(LegUnitOfMeasureQty_49.getString());
    all_values.push_back(InstrumentLeg_49);
    all_compo_names.insert("..NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_49;
      FIX::LegSecurityAltID LegSecurityAltID_49("STRING_2061564305");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltID_49);
      LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltID_49.getString());
      FIX::LegSecurityAltIDSource LegSecurityAltIDSource_49("STRING_1673865980");
      noLegSecurityAltID_0_1_0.set(LegSecurityAltIDSource_49);
      LegSecAltIDGrp_NoLegSecurityAltID_49.insert(LegSecurityAltIDSource_49.getString());
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_49);
      all_compo_names.insert("..NoLegs...NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_62;
  FIX::AttachmentPoint AttachmentPoint_62;
  AttachmentPoint_62.setString("42.750000");
  msg.set(AttachmentPoint_62);
  Instrument_62.insert(AttachmentPoint_62.getString());
  FIX::CFICode CFICode_62("STRING_169920821");
  msg.set(CFICode_62);
  Instrument_62.insert(CFICode_62.getString());
  FIX::CPProgram CPProgram_62(2);
  msg.set(CPProgram_62);
  Instrument_62.insert(CPProgram_62.getString());
  FIX::CPRegType CPRegType_62("STRING_451643418");
  msg.set(CPRegType_62);
  Instrument_62.insert(CPRegType_62.getString());
  FIX::CapPrice CapPrice_62;
  CapPrice_62.setString("7124108");
  msg.set(CapPrice_62);
  Instrument_62.insert(CapPrice_62.getString());
  FIX::ContractMultiplier ContractMultiplier_62;
  ContractMultiplier_62.setString("8180045");
  msg.set(ContractMultiplier_62);
  Instrument_62.insert(ContractMultiplier_62.getString());
  FIX::ContractMultiplierUnit ContractMultiplierUnit_62(2);
  msg.set(ContractMultiplierUnit_62);
  Instrument_62.insert(ContractMultiplierUnit_62.getString());
  FIX::ContractSettlMonth ContractSettlMonth_62("MONTHYEAR_1454693176");
  msg.set(ContractSettlMonth_62);
  Instrument_62.insert(ContractSettlMonth_62.getString());
  FIX::CountryOfIssue CountryOfIssue_62("COUNTRY_481016079");
  msg.set(CountryOfIssue_62);
  Instrument_62.insert(CountryOfIssue_62.getString());
  FIX::CouponPaymentDate CouponPaymentDate_62("LOCALMKTDATE_1656598567");
  msg.set(CouponPaymentDate_62);
  Instrument_62.insert(CouponPaymentDate_62.getString());
  FIX::CouponRate CouponRate_62;
  CouponRate_62.setString("23.410000");
  msg.set(CouponRate_62);
  Instrument_62.insert(CouponRate_62.getString());
  FIX::CreditRating CreditRating_62("STRING_1148147486");
  msg.set(CreditRating_62);
  Instrument_62.insert(CreditRating_62.getString());
  FIX::DatedDate DatedDate_62("LOCALMKTDATE_847015604");
  msg.set(DatedDate_62);
  Instrument_62.insert(DatedDate_62.getString());
  FIX::DetachmentPoint DetachmentPoint_62;
  DetachmentPoint_62.setString("1.040000");
  msg.set(DetachmentPoint_62);
  Instrument_62.insert(DetachmentPoint_62.getString());
  FIX::EncodedIssuer EncodedIssuer_62("DATA_851444248");
  msg.set(EncodedIssuer_62);
  Instrument_62.insert(EncodedIssuer_62.getString());
  FIX::EncodedIssuerLen EncodedIssuerLen_62(769298913);
  msg.set(EncodedIssuerLen_62);
  Instrument_62.insert(EncodedIssuerLen_62.getString());
  FIX::EncodedSecurityDesc EncodedSecurityDesc_62("DATA_651751670");
  msg.set(EncodedSecurityDesc_62);
  Instrument_62.insert(EncodedSecurityDesc_62.getString());
  FIX::EncodedSecurityDescLen EncodedSecurityDescLen_62(763509955);
  msg.set(EncodedSecurityDescLen_62);
  Instrument_62.insert(EncodedSecurityDescLen_62.getString());
  FIX::ExerciseStyle ExerciseStyle_62(2);
  msg.set(ExerciseStyle_62);
  Instrument_62.insert(ExerciseStyle_62.getString());
  FIX::Factor Factor_62;
  Factor_62.setString("11913556");
  msg.set(Factor_62);
  Instrument_62.insert(Factor_62.getString());
  FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_62(false);
  msg.set(FlexProductEligibilityIndicator_62);
  Instrument_62.insert(FlexProductEligibilityIndicator_62.getString());
  FIX::FlexibleIndicator FlexibleIndicator_62(true);
  msg.set(FlexibleIndicator_62);
  Instrument_62.insert(FlexibleIndicator_62.getString());
  FIX::FloorPrice FloorPrice_62;
  FloorPrice_62.setString("12911880");
  msg.set(FloorPrice_62);
  Instrument_62.insert(FloorPrice_62.getString());
  FIX::FlowScheduleType FlowScheduleType_62(4);
  msg.set(FlowScheduleType_62);
  Instrument_62.insert(FlowScheduleType_62.getString());
  FIX::InstrRegistry InstrRegistry_62("STRING_111307361");
  msg.set(InstrRegistry_62);
  Instrument_62.insert(InstrRegistry_62.getString());
  FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_62('1');
  msg.set(InstrmtAssignmentMethod_62);
  Instrument_62.insert(InstrmtAssignmentMethod_62.getString());
  FIX::InterestAccrualDate InterestAccrualDate_62("LOCALMKTDATE_1998674640");
  msg.set(InterestAccrualDate_62);
  Instrument_62.insert(InterestAccrualDate_62.getString());
  FIX::IssueDate IssueDate_62("LOCALMKTDATE_1196773520");
  msg.set(IssueDate_62);
  Instrument_62.insert(IssueDate_62.getString());
  FIX::Issuer Issuer_62("STRING_1141017118");
  msg.set(Issuer_62);
  Instrument_62.insert(Issuer_62.getString());
  FIX::ListMethod ListMethod_62(1);
  msg.set(ListMethod_62);
  Instrument_62.insert(ListMethod_62.getString());
  FIX::LocaleOfIssue LocaleOfIssue_62("STRING_723155852");
  msg.set(LocaleOfIssue_62);
  Instrument_62.insert(LocaleOfIssue_62.getString());
  FIX::MaturityDate MaturityDate_62("LOCALMKTDATE_701057745");
  msg.set(MaturityDate_62);
  Instrument_62.insert(MaturityDate_62.getString());
  FIX::MaturityMonthYear MaturityMonthYear_62("MONTHYEAR_2082676118");
  msg.set(MaturityMonthYear_62);
  Instrument_62.insert(MaturityMonthYear_62.getString());
  FIX::MaturityTime MaturityTime_62("TZTIMEONLY_1587720040");
  msg.set(MaturityTime_62);
  Instrument_62.insert(MaturityTime_62.getString());
  FIX::MinPriceIncrement MinPriceIncrement_62;
  MinPriceIncrement_62.setString("11527011");
  msg.set(MinPriceIncrement_62);
  Instrument_62.insert(MinPriceIncrement_62.getString());
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_62;
  MinPriceIncrementAmount_62.setString("6476033");
  msg.set(MinPriceIncrementAmount_62);
  Instrument_62.insert(MinPriceIncrementAmount_62.getString());
  FIX::NTPositionLimit NTPositionLimit_62(258240892);
  msg.set(NTPositionLimit_62);
  Instrument_62.insert(NTPositionLimit_62.getString());
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_62;
  NotionalPercentageOutstanding_62.setString("71.050000");
  msg.set(NotionalPercentageOutstanding_62);
  Instrument_62.insert(NotionalPercentageOutstanding_62.getString());
  FIX::OptAttribute OptAttribute_62('2');
  msg.set(OptAttribute_62);
  Instrument_62.insert(OptAttribute_62.getString());
  FIX::OptPayoutAmount OptPayoutAmount_62;
  OptPayoutAmount_62.setString("7392569");
  msg.set(OptPayoutAmount_62);
  Instrument_62.insert(OptPayoutAmount_62.getString());
  FIX::OptPayoutType OptPayoutType_62(3);
  msg.set(OptPayoutType_62);
  Instrument_62.insert(OptPayoutType_62.getString());
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_62;
  OriginalNotionalPercentageOutstanding_62.setString("51.860000");
  msg.set(OriginalNotionalPercentageOutstanding_62);
  Instrument_62.insert(OriginalNotionalPercentageOutstanding_62.getString());
  FIX::Pool Pool_62("STRING_1887404457");
  msg.set(Pool_62);
  Instrument_62.insert(Pool_62.getString());
  FIX::PositionLimit PositionLimit_62(22653980);
  msg.set(PositionLimit_62);
  Instrument_62.insert(PositionLimit_62.getString());
  FIX::PriceQuoteMethod PriceQuoteMethod_62("STRING_INT");
  msg.set(PriceQuoteMethod_62);
  Instrument_62.insert(PriceQuoteMethod_62.getString());
  FIX::PriceUnitOfMeasure PriceUnitOfMeasure_62("STRING_591365058");
  msg.set(PriceUnitOfMeasure_62);
  Instrument_62.insert(PriceUnitOfMeasure_62.getString());
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_62;
  PriceUnitOfMeasureQty_62.setString("7919528");
  msg.set(PriceUnitOfMeasureQty_62);
  Instrument_62.insert(PriceUnitOfMeasureQty_62.getString());
  FIX::Product Product_64(8);
  msg.set(Product_64);
  Instrument_62.insert(Product_64.getString());
  FIX::ProductComplex ProductComplex_62("STRING_1354875013");
  msg.set(ProductComplex_62);
  Instrument_62.insert(ProductComplex_62.getString());
  FIX::PutOrCall PutOrCall_62(0);
  msg.set(PutOrCall_62);
  Instrument_62.insert(PutOrCall_62.getString());
  FIX::RedemptionDate RedemptionDate_62("LOCALMKTDATE_1706928916");
  msg.set(RedemptionDate_62);
  Instrument_62.insert(RedemptionDate_62.getString());
  FIX::RepoCollateralSecurityType RepoCollateralSecurityType_62("STRING_341522360");
  msg.set(RepoCollateralSecurityType_62);
  Instrument_62.insert(RepoCollateralSecurityType_62.getString());
  FIX::RepurchaseRate RepurchaseRate_62;
  RepurchaseRate_62.setString("90.600000");
  msg.set(RepurchaseRate_62);
  Instrument_62.insert(RepurchaseRate_62.getString());
  FIX::RepurchaseTerm RepurchaseTerm_62(850633366);
  msg.set(RepurchaseTerm_62);
  Instrument_62.insert(RepurchaseTerm_62.getString());
  FIX::RestructuringType RestructuringType_62("STRING_MM");
  msg.set(RestructuringType_62);
  Instrument_62.insert(RestructuringType_62.getString());
  FIX::SecurityDesc SecurityDesc_62("STRING_339246421");
  msg.set(SecurityDesc_62);
  Instrument_62.insert(SecurityDesc_62.getString());
  FIX::SecurityExchange SecurityExchange_62("EXCHANGE_1033447387");
  msg.set(SecurityExchange_62);
  Instrument_62.insert(SecurityExchange_62.getString());
  FIX::SecurityGroup SecurityGroup_62("STRING_1365609822");
  msg.set(SecurityGroup_62);
  Instrument_62.insert(SecurityGroup_62.getString());
  FIX::SecurityID SecurityID_62("STRING_1536019942");
  msg.set(SecurityID_62);
  Instrument_62.insert(SecurityID_62.getString());
  FIX::SecurityIDSource SecurityIDSource_62("STRING_E");
  msg.set(SecurityIDSource_62);
  Instrument_62.insert(SecurityIDSource_62.getString());
  FIX::SecurityStatus SecurityStatus_63("STRING_1");
  msg.set(SecurityStatus_63);
  Instrument_62.insert(SecurityStatus_63.getString());
  FIX::SecuritySubType SecuritySubType_63("STRING_111692146");
  msg.set(SecuritySubType_63);
  Instrument_62.insert(SecuritySubType_63.getString());
  FIX::SecurityType SecurityType_64("STRING_YCD");
  msg.set(SecurityType_64);
  Instrument_62.insert(SecurityType_64.getString());
  FIX::Seniority Seniority_62("STRING_SB");
  msg.set(Seniority_62);
  Instrument_62.insert(Seniority_62.getString());
  FIX::SettlMethod SettlMethod_62('C');
  msg.set(SettlMethod_62);
  Instrument_62.insert(SettlMethod_62.getString());
  FIX::SettleOnOpenFlag SettleOnOpenFlag_62("STRING_1880739767");
  msg.set(SettleOnOpenFlag_62);
  Instrument_62.insert(SettleOnOpenFlag_62.getString());
  FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_62("STRING_1713677259");
  msg.set(StateOrProvinceOfIssue_62);
  Instrument_62.insert(StateOrProvinceOfIssue_62.getString());
  FIX::StrikeCurrency StrikeCurrency_62("USD");
  msg.set(StrikeCurrency_62);
  Instrument_62.insert(StrikeCurrency_62.getString());
  FIX::StrikeMultiplier StrikeMultiplier_62;
  StrikeMultiplier_62.setString("16684901");
  msg.set(StrikeMultiplier_62);
  Instrument_62.insert(StrikeMultiplier_62.getString());
  FIX::StrikePrice StrikePrice_62;
  StrikePrice_62.setString("5494264");
  msg.set(StrikePrice_62);
  Instrument_62.insert(StrikePrice_62.getString());
  FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_62(1);
  msg.set(StrikePriceBoundaryMethod_62);
  Instrument_62.insert(StrikePriceBoundaryMethod_62.getString());
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_62;
  StrikePriceBoundaryPrecision_62.setString("16.420000");
  msg.set(StrikePriceBoundaryPrecision_62);
  Instrument_62.insert(StrikePriceBoundaryPrecision_62.getString());
  FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_62(4);
  msg.set(StrikePriceDeterminationMethod_62);
  Instrument_62.insert(StrikePriceDeterminationMethod_62.getString());
  FIX::StrikeValue StrikeValue_62;
  StrikeValue_62.setString("7455555");
  msg.set(StrikeValue_62);
  Instrument_62.insert(StrikeValue_62.getString());
  FIX::Symbol Symbol_62("STRING_1232973284");
  msg.set(Symbol_62);
  Instrument_62.insert(Symbol_62.getString());
  FIX::SymbolSfx SymbolSfx_62("STRING_WI");
  msg.set(SymbolSfx_62);
  Instrument_62.insert(SymbolSfx_62.getString());
  FIX::TimeUnit TimeUnit_62("STRING_Mo");
  msg.set(TimeUnit_62);
  Instrument_62.insert(TimeUnit_62.getString());
  FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_62(2);
  msg.set(UnderlyingPriceDeterminationMethod_62);
  Instrument_62.insert(UnderlyingPriceDeterminationMethod_62.getString());
  FIX::UnitOfMeasure UnitOfMeasure_62("STRING_oz_tr");
  msg.set(UnitOfMeasure_62);
  Instrument_62.insert(UnitOfMeasure_62.getString());
  FIX::UnitOfMeasureQty UnitOfMeasureQty_62;
  UnitOfMeasureQty_62.setString("4904748");
  msg.set(UnitOfMeasureQty_62);
  Instrument_62.insert(UnitOfMeasureQty_62.getString());
  FIX::ValuationMethod ValuationMethod_62("STRING_EQTY");
  msg.set(ValuationMethod_62);
  Instrument_62.insert(ValuationMethod_62.getString());
  all_values.push_back(Instrument_62);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_62;
    FIX::ComplexEventCondition ComplexEventCondition_62(2);
    noComplexEvents_0_0.set(ComplexEventCondition_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventCondition_62.getString());
    FIX::ComplexEventPrice ComplexEventPrice_62;
    ComplexEventPrice_62.setString("111415");
    noComplexEvents_0_0.set(ComplexEventPrice_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventPrice_62.getString());
    FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_62(1);
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryMethod_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryMethod_62.getString());
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_62;
    ComplexEventPriceBoundaryPrecision_62.setString("2.860000");
    noComplexEvents_0_0.set(ComplexEventPriceBoundaryPrecision_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceBoundaryPrecision_62.getString());
    FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_62(2);
    noComplexEvents_0_0.set(ComplexEventPriceTimeType_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventPriceTimeType_62.getString());
    FIX::ComplexEventType ComplexEventType_62(1);
    noComplexEvents_0_0.set(ComplexEventType_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexEventType_62.getString());
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_62;
    ComplexOptPayoutAmount_62.setString("4461965");
    noComplexEvents_0_0.set(ComplexOptPayoutAmount_62);
    ComplexEvents_NoComplexEvents_62.insert(ComplexOptPayoutAmount_62.getString());
    all_values.push_back(ComplexEvents_NoComplexEvents_62);
    all_compo_names.insert("...NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_62;
      FIX::ComplexEventEndDate ComplexEventEndDate_62(FIX::UTCTIMESTAMP(15, 51, 6, 5, 7, 2001));
      noComplexEventDates_0_1_0.set(ComplexEventEndDate_62);
      ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventEndDate_62.getString());
      FIX::ComplexEventStartDate ComplexEventStartDate_62(FIX::UTCTIMESTAMP(22, 54, 37, 2, 9, 2008));
      noComplexEventDates_0_1_0.set(ComplexEventStartDate_62);
      ComplexEventDates_NoComplexEventDates_62.insert(ComplexEventStartDate_62.getString());
      all_values.push_back(ComplexEventDates_NoComplexEventDates_62);
      all_compo_names.insert("...NoComplexEvents..NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_62;
        FIX::ComplexEventEndTime ComplexEventEndTime_62(FIX::UTCTIMEONLY(9, 12, 42));
        noComplexEventTimes_0_0_2_0.set(ComplexEventEndTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventEndTime_62.getString());
        FIX::ComplexEventStartTime ComplexEventStartTime_62(FIX::UTCTIMEONLY(9, 7, 59));
        noComplexEventTimes_0_0_2_0.set(ComplexEventStartTime_62);
        ComplexEventTimes_NoComplexEventTimes_62.insert(ComplexEventStartTime_62.getString());
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_62);
        all_compo_names.insert("...NoComplexEvents..NoComplexEventDates..NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_62;
    FIX::EventDate EventDate_62("LOCALMKTDATE_1673680510");
    noEvents_0_0.set(EventDate_62);
    EvntGrp_NoEvents_62.insert(EventDate_62.getString());
    FIX::EventPx EventPx_62;
    EventPx_62.setString("19537633");
    noEvents_0_0.set(EventPx_62);
    EvntGrp_NoEvents_62.insert(EventPx_62.getString());
    FIX::EventText EventText_62("STRING_1910191440");
    noEvents_0_0.set(EventText_62);
    EvntGrp_NoEvents_62.insert(EventText_62.getString());
    FIX::EventTime EventTime_62(FIX::UTCTIMESTAMP(23, 33, 20, 23, 1, 2003));
    noEvents_0_0.set(EventTime_62);
    EvntGrp_NoEvents_62.insert(EventTime_62.getString());
    FIX::EventType EventType_62(18);
    noEvents_0_0.set(EventType_62);
    EvntGrp_NoEvents_62.insert(EventType_62.getString());
    all_values.push_back(EvntGrp_NoEvents_62);
    all_compo_names.insert("...NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_62;
    FIX::InstrumentPartyID InstrumentPartyID_62("STRING_679861345");
    noInstrumentParties_0_0.set(InstrumentPartyID_62);
    InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyID_62.getString());
    FIX::InstrumentPartyIDSource InstrumentPartyIDSource_62('9');
    noInstrumentParties_0_0.set(InstrumentPartyIDSource_62);
    InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyIDSource_62.getString());
    FIX::InstrumentPartyRole InstrumentPartyRole_62(796597061);
    noInstrumentParties_0_0.set(InstrumentPartyRole_62);
    InstrumentParties_NoInstrumentParties_62.insert(InstrumentPartyRole_62.getString());
    all_values.push_back(InstrumentParties_NoInstrumentParties_62);
    all_compo_names.insert("...NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62;
      FIX::InstrumentPartySubID InstrumentPartySubID_62("STRING_1254857888");
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubID_62);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubID_62.getString());
      FIX::InstrumentPartySubIDType InstrumentPartySubIDType_62(1266010159);
      noInstrumentPartySubIDs_0_1_0.set(InstrumentPartySubIDType_62);
      InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62.insert(InstrumentPartySubIDType_62.getString());
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);
      all_compo_names.insert("...NoInstrumentParties..NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_62;
    FIX::SecurityAltID SecurityAltID_62("STRING_775368717");
    noSecurityAltID_0_0.set(SecurityAltID_62);
    SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltID_62.getString());
    FIX::SecurityAltIDSource SecurityAltIDSource_62("STRING_2024770467");
    noSecurityAltID_0_0.set(SecurityAltIDSource_62);
    SecAltIDGrp_NoSecurityAltID_62.insert(SecurityAltIDSource_62.getString());
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_62);
    all_compo_names.insert("...NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_124;
  FIX::SecurityXML SecurityXML_125("XMLDATA_1374185208");
  msg.set(SecurityXML_125);
  FIX::SecurityXMLLen SecurityXMLLen_62(1528852830);
  msg.set(SecurityXMLLen_62);
  FIX::SecurityXMLSchema SecurityXMLSchema_62("STRING_1516759397");
  msg.set(SecurityXMLSchema_62);
  SecurityXML_124.insert(SecurityXMLSchema_62.getString());
  all_values.push_back(SecurityXML_124);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_12;
  FIX::DeliveryForm DeliveryForm_12(1);
  msg.set(DeliveryForm_12);
  InstrumentExtension_12.insert(DeliveryForm_12.getString());
  FIX::PctAtRisk PctAtRisk_12;
  PctAtRisk_12.setString("98.920000");
  msg.set(PctAtRisk_12);
  InstrumentExtension_12.insert(PctAtRisk_12.getString());
  all_values.push_back(InstrumentExtension_12);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_12;
    FIX::InstrAttribType InstrAttribType_12(2);
    noInstrAttrib_0_0.set(InstrAttribType_12);
    AttrbGrp_NoInstrAttrib_12.insert(InstrAttribType_12.getString());
    FIX::InstrAttribValue InstrAttribValue_12("STRING_1398455171");
    noInstrAttrib_0_0.set(InstrAttribValue_12);
    AttrbGrp_NoInstrAttrib_12.insert(InstrAttribValue_12.getString());
    all_values.push_back(AttrbGrp_NoInstrAttrib_12);
    all_compo_names.insert("...NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatus::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_62;
    FIX::EncodedUnderlyingIssuer EncodedUnderlyingIssuer_62("DATA_2004476135");
    noUnderlyings_0_0.set(EncodedUnderlyingIssuer_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingIssuer_62.getString());
    FIX::EncodedUnderlyingIssuerLen EncodedUnderlyingIssuerLen_62(924652033);
    noUnderlyings_0_0.set(EncodedUnderlyingIssuerLen_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingIssuerLen_62.getString());
    FIX::EncodedUnderlyingSecurityDesc EncodedUnderlyingSecurityDesc_62("DATA_912850256");
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDesc_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDesc_62.getString());
    FIX::EncodedUnderlyingSecurityDescLen EncodedUnderlyingSecurityDescLen_62(1767183928);
    noUnderlyings_0_0.set(EncodedUnderlyingSecurityDescLen_62);
    UnderlyingInstrument_62.insert(EncodedUnderlyingSecurityDescLen_62.getString());
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_62;
    UnderlyingAdjustedQuantity_62.setString("14954378");
    noUnderlyings_0_0.set(UnderlyingAdjustedQuantity_62);
    UnderlyingInstrument_62.insert(UnderlyingAdjustedQuantity_62.getString());
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_62;
    UnderlyingAllocationPercent_62.setString("9.910000");
    noUnderlyings_0_0.set(UnderlyingAllocationPercent_62);
    UnderlyingInstrument_62.insert(UnderlyingAllocationPercent_62.getString());
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_62;
    UnderlyingAttachmentPoint_62.setString("83.010000");
    noUnderlyings_0_0.set(UnderlyingAttachmentPoint_62);
    UnderlyingInstrument_62.insert(UnderlyingAttachmentPoint_62.getString());
    FIX::UnderlyingCFICode UnderlyingCFICode_62("STRING_990309878");
    noUnderlyings_0_0.set(UnderlyingCFICode_62);
    UnderlyingInstrument_62.insert(UnderlyingCFICode_62.getString());
    FIX::UnderlyingCPProgram UnderlyingCPProgram_62("STRING_847836902");
    noUnderlyings_0_0.set(UnderlyingCPProgram_62);
    UnderlyingInstrument_62.insert(UnderlyingCPProgram_62.getString());
    FIX::UnderlyingCPRegType UnderlyingCPRegType_62("STRING_595397753");
    noUnderlyings_0_0.set(UnderlyingCPRegType_62);
    UnderlyingInstrument_62.insert(UnderlyingCPRegType_62.getString());
    FIX::UnderlyingCapValue UnderlyingCapValue_62;
    UnderlyingCapValue_62.setString("1373066");
    noUnderlyings_0_0.set(UnderlyingCapValue_62);
    UnderlyingInstrument_62.insert(UnderlyingCapValue_62.getString());
    FIX::UnderlyingCashAmount UnderlyingCashAmount_62;
    UnderlyingCashAmount_62.setString("10260155");
    noUnderlyings_0_0.set(UnderlyingCashAmount_62);
    UnderlyingInstrument_62.insert(UnderlyingCashAmount_62.getString());
    FIX::UnderlyingCashType UnderlyingCashType_62("STRING_FIXED");
    noUnderlyings_0_0.set(UnderlyingCashType_62);
    UnderlyingInstrument_62.insert(UnderlyingCashType_62.getString());
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_62;
    UnderlyingContractMultiplier_62.setString("8171680");
    noUnderlyings_0_0.set(UnderlyingContractMultiplier_62);
    UnderlyingInstrument_62.insert(UnderlyingContractMultiplier_62.getString());
    FIX::UnderlyingContractMultiplierUnit UnderlyingContractMultiplierUnit_62(1982030634);
    noUnderlyings_0_0.set(UnderlyingContractMultiplierUnit_62);
    UnderlyingInstrument_62.insert(UnderlyingContractMultiplierUnit_62.getString());
    FIX::UnderlyingCountryOfIssue UnderlyingCountryOfIssue_62("COUNTRY_121121532");
    noUnderlyings_0_0.set(UnderlyingCountryOfIssue_62);
    UnderlyingInstrument_62.insert(UnderlyingCountryOfIssue_62.getString());
    FIX::UnderlyingCouponPaymentDate UnderlyingCouponPaymentDate_62("LOCALMKTDATE_282189842");
    noUnderlyings_0_0.set(UnderlyingCouponPaymentDate_62);
    UnderlyingInstrument_62.insert(UnderlyingCouponPaymentDate_62.getString());
    FIX::UnderlyingCouponRate UnderlyingCouponRate_62;
    UnderlyingCouponRate_62.setString("48.740000");
    noUnderlyings_0_0.set(UnderlyingCouponRate_62);
    UnderlyingInstrument_62.insert(UnderlyingCouponRate_62.getString());
    FIX::UnderlyingCreditRating UnderlyingCreditRating_62("STRING_1387131691");
    noUnderlyings_0_0.set(UnderlyingCreditRating_62);
    UnderlyingInstrument_62.insert(UnderlyingCreditRating_62.getString());
    FIX::UnderlyingCurrency UnderlyingCurrency_62("CHF");
    noUnderlyings_0_0.set(UnderlyingCurrency_62);
    UnderlyingInstrument_62.insert(UnderlyingCurrency_62.getString());
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_62;
    UnderlyingCurrentValue_62.setString("12644185");
    noUnderlyings_0_0.set(UnderlyingCurrentValue_62);
    UnderlyingInstrument_62.insert(UnderlyingCurrentValue_62.getString());
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_62;
    UnderlyingDetachmentPoint_62.setString("89.520000");
    noUnderlyings_0_0.set(UnderlyingDetachmentPoint_62);
    UnderlyingInstrument_62.insert(UnderlyingDetachmentPoint_62.getString());
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_62;
    UnderlyingDirtyPrice_62.setString("12461427");
    noUnderlyings_0_0.set(UnderlyingDirtyPrice_62);
    UnderlyingInstrument_62.insert(UnderlyingDirtyPrice_62.getString());
    FIX::UnderlyingEndPrice UnderlyingEndPrice_62;
    UnderlyingEndPrice_62.setString("6336942");
    noUnderlyings_0_0.set(UnderlyingEndPrice_62);
    UnderlyingInstrument_62.insert(UnderlyingEndPrice_62.getString());
    FIX::UnderlyingEndValue UnderlyingEndValue_62;
    UnderlyingEndValue_62.setString("16472866");
    noUnderlyings_0_0.set(UnderlyingEndValue_62);
    UnderlyingInstrument_62.insert(UnderlyingEndValue_62.getString());
    FIX::UnderlyingExerciseStyle UnderlyingExerciseStyle_62(982059017);
    noUnderlyings_0_0.set(UnderlyingExerciseStyle_62);
    UnderlyingInstrument_62.insert(UnderlyingExerciseStyle_62.getString());
    FIX::UnderlyingFXRate UnderlyingFXRate_62;
    UnderlyingFXRate_62.setString("17305462");
    noUnderlyings_0_0.set(UnderlyingFXRate_62);
    UnderlyingInstrument_62.insert(UnderlyingFXRate_62.getString());
    FIX::UnderlyingFXRateCalc UnderlyingFXRateCalc_62('D');
    noUnderlyings_0_0.set(UnderlyingFXRateCalc_62);
    UnderlyingInstrument_62.insert(UnderlyingFXRateCalc_62.getString());
    FIX::UnderlyingFactor UnderlyingFactor_62;
    UnderlyingFactor_62.setString("2330305");
    noUnderlyings_0_0.set(UnderlyingFactor_62);
    UnderlyingInstrument_62.insert(UnderlyingFactor_62.getString());
    FIX::UnderlyingFlowScheduleType UnderlyingFlowScheduleType_62(689633092);
    noUnderlyings_0_0.set(UnderlyingFlowScheduleType_62);
    UnderlyingInstrument_62.insert(UnderlyingFlowScheduleType_62.getString());
    FIX::UnderlyingInstrRegistry UnderlyingInstrRegistry_62("STRING_508740465");
    noUnderlyings_0_0.set(UnderlyingInstrRegistry_62);
    UnderlyingInstrument_62.insert(UnderlyingInstrRegistry_62.getString());
    FIX::UnderlyingIssueDate UnderlyingIssueDate_62("LOCALMKTDATE_1157682573");
    noUnderlyings_0_0.set(UnderlyingIssueDate_62);
    UnderlyingInstrument_62.insert(UnderlyingIssueDate_62.getString());
    FIX::UnderlyingIssuer UnderlyingIssuer_62("STRING_1602483348");
    noUnderlyings_0_0.set(UnderlyingIssuer_62);
    UnderlyingInstrument_62.insert(UnderlyingIssuer_62.getString());
    FIX::UnderlyingLocaleOfIssue UnderlyingLocaleOfIssue_62("STRING_128440745");
    noUnderlyings_0_0.set(UnderlyingLocaleOfIssue_62);
    UnderlyingInstrument_62.insert(UnderlyingLocaleOfIssue_62.getString());
    FIX::UnderlyingMaturityDate UnderlyingMaturityDate_62("LOCALMKTDATE_505636791");
    noUnderlyings_0_0.set(UnderlyingMaturityDate_62);
    UnderlyingInstrument_62.insert(UnderlyingMaturityDate_62.getString());
    FIX::UnderlyingMaturityMonthYear UnderlyingMaturityMonthYear_62("MONTHYEAR_1336300692");
    noUnderlyings_0_0.set(UnderlyingMaturityMonthYear_62);
    UnderlyingInstrument_62.insert(UnderlyingMaturityMonthYear_62.getString());
    FIX::UnderlyingMaturityTime UnderlyingMaturityTime_62("TZTIMEONLY_2104529046");
    noUnderlyings_0_0.set(UnderlyingMaturityTime_62);
    UnderlyingInstrument_62.insert(UnderlyingMaturityTime_62.getString());
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_62;
    UnderlyingNotionalPercentageOutstanding_62.setString("66.690000");
    noUnderlyings_0_0.set(UnderlyingNotionalPercentageOutstanding_62);
    UnderlyingInstrument_62.insert(UnderlyingNotionalPercentageOutstanding_62.getString());
    FIX::UnderlyingOptAttribute UnderlyingOptAttribute_62('3');
    noUnderlyings_0_0.set(UnderlyingOptAttribute_62);
    UnderlyingInstrument_62.insert(UnderlyingOptAttribute_62.getString());
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_62;
    UnderlyingOriginalNotionalPercentageOutstanding_62.setString("31.510000");
    noUnderlyings_0_0.set(UnderlyingOriginalNotionalPercentageOutstanding_62);
    UnderlyingInstrument_62.insert(UnderlyingOriginalNotionalPercentageOutstanding_62.getString());
    FIX::UnderlyingPriceUnitOfMeasure UnderlyingPriceUnitOfMeasure_62("STRING_1633253342");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasure_62);
    UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasure_62.getString());
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_62;
    UnderlyingPriceUnitOfMeasureQty_62.setString("10626695");
    noUnderlyings_0_0.set(UnderlyingPriceUnitOfMeasureQty_62);
    UnderlyingInstrument_62.insert(UnderlyingPriceUnitOfMeasureQty_62.getString());
    FIX::UnderlyingProduct UnderlyingProduct_62(2024451270);
    noUnderlyings_0_0.set(UnderlyingProduct_62);
    UnderlyingInstrument_62.insert(UnderlyingProduct_62.getString());
    FIX::UnderlyingPutOrCall UnderlyingPutOrCall_62(302937713);
    noUnderlyings_0_0.set(UnderlyingPutOrCall_62);
    UnderlyingInstrument_62.insert(UnderlyingPutOrCall_62.getString());
    FIX::UnderlyingPx UnderlyingPx_62;
    UnderlyingPx_62.setString("8972165");
    noUnderlyings_0_0.set(UnderlyingPx_62);
    UnderlyingInstrument_62.insert(UnderlyingPx_62.getString());
    FIX::UnderlyingQty UnderlyingQty_62;
    UnderlyingQty_62.setString("21455728");
    noUnderlyings_0_0.set(UnderlyingQty_62);
    UnderlyingInstrument_62.insert(UnderlyingQty_62.getString());
    FIX::UnderlyingRedemptionDate UnderlyingRedemptionDate_62("LOCALMKTDATE_585127556");
    noUnderlyings_0_0.set(UnderlyingRedemptionDate_62);
    UnderlyingInstrument_62.insert(UnderlyingRedemptionDate_62.getString());
    FIX::UnderlyingRepoCollateralSecurityType UnderlyingRepoCollateralSecurityType_62("STRING_1986621386");
    noUnderlyings_0_0.set(UnderlyingRepoCollateralSecurityType_62);
    UnderlyingInstrument_62.insert(UnderlyingRepoCollateralSecurityType_62.getString());
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_62;
    UnderlyingRepurchaseRate_62.setString("8.450000");
    noUnderlyings_0_0.set(UnderlyingRepurchaseRate_62);
    UnderlyingInstrument_62.insert(UnderlyingRepurchaseRate_62.getString());
    FIX::UnderlyingRepurchaseTerm UnderlyingRepurchaseTerm_62(1987884948);
    noUnderlyings_0_0.set(UnderlyingRepurchaseTerm_62);
    UnderlyingInstrument_62.insert(UnderlyingRepurchaseTerm_62.getString());
    FIX::UnderlyingRestructuringType UnderlyingRestructuringType_62("STRING_1703911330");
    noUnderlyings_0_0.set(UnderlyingRestructuringType_62);
    UnderlyingInstrument_62.insert(UnderlyingRestructuringType_62.getString());
    FIX::UnderlyingSecurityDesc UnderlyingSecurityDesc_62("STRING_502155707");
    noUnderlyings_0_0.set(UnderlyingSecurityDesc_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityDesc_62.getString());
    FIX::UnderlyingSecurityExchange UnderlyingSecurityExchange_62("EXCHANGE_469860252");
    noUnderlyings_0_0.set(UnderlyingSecurityExchange_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityExchange_62.getString());
    FIX::UnderlyingSecurityID UnderlyingSecurityID_62("STRING_802570455");
    noUnderlyings_0_0.set(UnderlyingSecurityID_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityID_62.getString());
    FIX::UnderlyingSecurityIDSource UnderlyingSecurityIDSource_62("STRING_1135849967");
    noUnderlyings_0_0.set(UnderlyingSecurityIDSource_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityIDSource_62.getString());
    FIX::UnderlyingSecuritySubType UnderlyingSecuritySubType_62("STRING_2117146896");
    noUnderlyings_0_0.set(UnderlyingSecuritySubType_62);
    UnderlyingInstrument_62.insert(UnderlyingSecuritySubType_62.getString());
    FIX::UnderlyingSecurityType UnderlyingSecurityType_62("STRING_1784629473");
    noUnderlyings_0_0.set(UnderlyingSecurityType_62);
    UnderlyingInstrument_62.insert(UnderlyingSecurityType_62.getString());
    FIX::UnderlyingSeniority UnderlyingSeniority_62("STRING_718912539");
    noUnderlyings_0_0.set(UnderlyingSeniority_62);
    UnderlyingInstrument_62.insert(UnderlyingSeniority_62.getString());
    FIX::UnderlyingSettlMethod UnderlyingSettlMethod_62("STRING_621411226");
    noUnderlyings_0_0.set(UnderlyingSettlMethod_62);
    UnderlyingInstrument_62.insert(UnderlyingSettlMethod_62.getString());
    FIX::UnderlyingSettlementType UnderlyingSettlementType_62(5);
    noUnderlyings_0_0.set(UnderlyingSettlementType_62);
    UnderlyingInstrument_62.insert(UnderlyingSettlementType_62.getString());
    FIX::UnderlyingStartValue UnderlyingStartValue_62;
    UnderlyingStartValue_62.setString("14085456");
    noUnderlyings_0_0.set(UnderlyingStartValue_62);
    UnderlyingInstrument_62.insert(UnderlyingStartValue_62.getString());
    FIX::UnderlyingStateOrProvinceOfIssue UnderlyingStateOrProvinceOfIssue_62("STRING_1130151692");
    noUnderlyings_0_0.set(UnderlyingStateOrProvinceOfIssue_62);
    UnderlyingInstrument_62.insert(UnderlyingStateOrProvinceOfIssue_62.getString());
    FIX::UnderlyingStrikeCurrency UnderlyingStrikeCurrency_62("USD");
    noUnderlyings_0_0.set(UnderlyingStrikeCurrency_62);
    UnderlyingInstrument_62.insert(UnderlyingStrikeCurrency_62.getString());
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_62;
    UnderlyingStrikePrice_62.setString("12585924");
    noUnderlyings_0_0.set(UnderlyingStrikePrice_62);
    UnderlyingInstrument_62.insert(UnderlyingStrikePrice_62.getString());
    FIX::UnderlyingSymbol UnderlyingSymbol_62("STRING_1533495730");
    noUnderlyings_0_0.set(UnderlyingSymbol_62);
    UnderlyingInstrument_62.insert(UnderlyingSymbol_62.getString());
    FIX::UnderlyingSymbolSfx UnderlyingSymbolSfx_62("STRING_52362376");
    noUnderlyings_0_0.set(UnderlyingSymbolSfx_62);
    UnderlyingInstrument_62.insert(UnderlyingSymbolSfx_62.getString());
    FIX::UnderlyingTimeUnit UnderlyingTimeUnit_62("STRING_1215637836");
    noUnderlyings_0_0.set(UnderlyingTimeUnit_62);
    UnderlyingInstrument_62.insert(UnderlyingTimeUnit_62.getString());
    FIX::UnderlyingUnitOfMeasure UnderlyingUnitOfMeasure_62("STRING_881958751");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasure_62);
    UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasure_62.getString());
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_62;
    UnderlyingUnitOfMeasureQty_62.setString("890163");
    noUnderlyings_0_0.set(UnderlyingUnitOfMeasureQty_62);
    UnderlyingInstrument_62.insert(UnderlyingUnitOfMeasureQty_62.getString());
    all_values.push_back(UnderlyingInstrument_62);
    all_compo_names.insert("..NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_62;
      FIX::UnderlyingSecurityAltID UnderlyingSecurityAltID_62("STRING_367728445");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltID_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltID_62.getString());
      FIX::UnderlyingSecurityAltIDSource UnderlyingSecurityAltIDSource_62("STRING_1151685849");
      noUnderlyingSecurityAltID_0_1_0.set(UnderlyingSecurityAltIDSource_62);
      UndSecAltIDGrp_NoUnderlyingSecurityAltID_62.insert(UnderlyingSecurityAltIDSource_62.getString());
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_62);
      all_compo_names.insert("..NoUnderlyings...NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_62;
      FIX::UnderlyingStipType UnderlyingStipType_62("STRING_670666159");
      noUnderlyingStips_0_1_0.set(UnderlyingStipType_62);
      UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipType_62.getString());
      FIX::UnderlyingStipValue UnderlyingStipValue_62("STRING_2048902361");
      noUnderlyingStips_0_1_0.set(UnderlyingStipValue_62);
      UnderlyingStipulations_NoUnderlyingStips_62.insert(UnderlyingStipValue_62.getString());
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_62);
      all_compo_names.insert("..NoUnderlyings...NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_62;
      FIX::UnderlyingInstrumentPartyID UnderlyingInstrumentPartyID_62("STRING_1255793715");
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyID_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyID_62.getString());
      FIX::UnderlyingInstrumentPartyIDSource UnderlyingInstrumentPartyIDSource_62('1');
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyIDSource_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyIDSource_62.getString());
      FIX::UnderlyingInstrumentPartyRole UnderlyingInstrumentPartyRole_62(880874960);
      noUndlyInstrumentParties_0_1_0.set(UnderlyingInstrumentPartyRole_62);
      UndlyInstrumentParties_NoUndlyInstrumentParties_62.insert(UnderlyingInstrumentPartyRole_62.getString());
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_62);
      all_compo_names.insert("..NoUnderlyings...NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62;
        FIX::UnderlyingInstrumentPartySubID UnderlyingInstrumentPartySubID_62("STRING_1444467781");
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubID_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubID_62.getString());
        FIX::UnderlyingInstrumentPartySubIDType UnderlyingInstrumentPartySubIDType_62(1383030668);
        noUndlyInstrumentPartySubIDs_0_0_2_0.set(UnderlyingInstrumentPartySubIDType_62);
        UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62.insert(UnderlyingInstrumentPartySubIDType_62.getString());
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);
        all_compo_names.insert("..NoUnderlyings...NoUndlyInstrumentParties..NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
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
