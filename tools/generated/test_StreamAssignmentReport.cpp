#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/StreamAssignmentReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentReport, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::StreamAssignmentReport msg;

  list<multiset<string>> all_values;
  multiset<string> StreamAssignmentReport_0;
  FIX::StreamAsgnReqID StreamAsgnReqID_0("STRING_8112859");
  msg.set(StreamAsgnReqID_0);
  StreamAssignmentReport_0.insert(StreamAsgnReqID_0.getString());
  FIX::StreamAsgnReqType StreamAsgnReqType_0(1);
  msg.set(StreamAsgnReqType_0);
  StreamAssignmentReport_0.insert(StreamAsgnReqType_0.getString());
  FIX::StreamAsgnRptID StreamAsgnRptID_0("STRING_1684463993");
  msg.set(StreamAsgnRptID_0);
  StreamAssignmentReport_0.insert(StreamAsgnRptID_0.getString());
  all_values.push_back(StreamAssignmentReport_0);

  // StrmAsgnRptGrp
  // Group StrmAsgnRptGrp.NoAsgnReqs
  {
    FIX50SP2::StreamAssignmentReport::NoAsgnReqs noAsgnReqs_0_0;
    // StrmAsgnRptGrp.NoAsgnReqs
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_143;
      FIX::PartyID PartyID_143("STRING_716754735");
      noPartyIDs_0_1_0.set(PartyID_143);
      Parties_NoPartyIDs_143.insert(PartyID_143.getString());
      FIX::PartyIDSource PartyIDSource_143('H');
      noPartyIDs_0_1_0.set(PartyIDSource_143);
      Parties_NoPartyIDs_143.insert(PartyIDSource_143.getString());
      FIX::PartyRole PartyRole_143(6);
      noPartyIDs_0_1_0.set(PartyRole_143);
      Parties_NoPartyIDs_143.insert(PartyRole_143.getString());
      all_values.push_back(Parties_NoPartyIDs_143);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_283;
        FIX::PartySubID PartySubID_283("STRING_851533793");
        noPartySubIDs_0_0_2_0.set(PartySubID_283);
        PtysSubGrp_NoPartySubIDs_283.insert(PartySubID_283.getString());
        FIX::PartySubIDType PartySubIDType_283(20);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_283);
        PtysSubGrp_NoPartySubIDs_283.insert(PartySubIDType_283.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_283);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_0;
      FIX::EncodedText EncodedText_90("DATA_615764106");
      noRelatedSym_0_1_0.set(EncodedText_90);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(EncodedText_90.getString());
      FIX::EncodedTextLen EncodedTextLen_90(1691600948);
      noRelatedSym_0_1_0.set(EncodedTextLen_90);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(EncodedTextLen_90.getString());
      FIX::MDStreamID MDStreamID_4("STRING_1553690105");
      noRelatedSym_0_1_0.set(MDStreamID_4);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(MDStreamID_4.getString());
      FIX::SettlType SettlType_29("STRING_2");
      noRelatedSym_0_1_0.set(SettlType_29);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(SettlType_29.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_0(2);
      noRelatedSym_0_1_0.set(StreamAsgnRejReason_0);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(StreamAsgnRejReason_0.getString());
      FIX::StreamAsgnType StreamAsgnType_0(1);
      noRelatedSym_0_1_0.set(StreamAsgnType_0);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(StreamAsgnType_0.getString());
      FIX::Text Text_90("STRING_1359377051");
      noRelatedSym_0_1_0.set(Text_90);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(Text_90.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_0);

      // Instrument
      multiset<string> Instrument_82;
      FIX::AttachmentPoint AttachmentPoint_82;
      AttachmentPoint_82.setString("23.740000");
      noRelatedSym_0_1_0.set(AttachmentPoint_82);
      Instrument_82.insert(AttachmentPoint_82.getString());
      FIX::CFICode CFICode_89("STRING_1085120578");
      noRelatedSym_0_1_0.set(CFICode_89);
      Instrument_82.insert(CFICode_89.getString());
      FIX::CPProgram CPProgram_82(1);
      noRelatedSym_0_1_0.set(CPProgram_82);
      Instrument_82.insert(CPProgram_82.getString());
      FIX::CPRegType CPRegType_82("STRING_377754718");
      noRelatedSym_0_1_0.set(CPRegType_82);
      Instrument_82.insert(CPRegType_82.getString());
      FIX::CapPrice CapPrice_82;
      CapPrice_82.setString("13977681");
      noRelatedSym_0_1_0.set(CapPrice_82);
      Instrument_82.insert(CapPrice_82.getString());
      FIX::ContractMultiplier ContractMultiplier_82;
      ContractMultiplier_82.setString("10156376");
      noRelatedSym_0_1_0.set(ContractMultiplier_82);
      Instrument_82.insert(ContractMultiplier_82.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_82(1);
      noRelatedSym_0_1_0.set(ContractMultiplierUnit_82);
      Instrument_82.insert(ContractMultiplierUnit_82.getString());
      FIX::ContractSettlMonth ContractSettlMonth_82("MONTHYEAR_2143417604");
      noRelatedSym_0_1_0.set(ContractSettlMonth_82);
      Instrument_82.insert(ContractSettlMonth_82.getString());
      FIX::CountryOfIssue CountryOfIssue_82("COUNTRY_2034940021");
      noRelatedSym_0_1_0.set(CountryOfIssue_82);
      Instrument_82.insert(CountryOfIssue_82.getString());
      FIX::CouponPaymentDate CouponPaymentDate_82("LOCALMKTDATE_978583816");
      noRelatedSym_0_1_0.set(CouponPaymentDate_82);
      Instrument_82.insert(CouponPaymentDate_82.getString());
      FIX::CouponRate CouponRate_82;
      CouponRate_82.setString("36.710000");
      noRelatedSym_0_1_0.set(CouponRate_82);
      Instrument_82.insert(CouponRate_82.getString());
      FIX::CreditRating CreditRating_82("STRING_151223641");
      noRelatedSym_0_1_0.set(CreditRating_82);
      Instrument_82.insert(CreditRating_82.getString());
      FIX::DatedDate DatedDate_82("LOCALMKTDATE_986696675");
      noRelatedSym_0_1_0.set(DatedDate_82);
      Instrument_82.insert(DatedDate_82.getString());
      FIX::DetachmentPoint DetachmentPoint_82;
      DetachmentPoint_82.setString("68.490000");
      noRelatedSym_0_1_0.set(DetachmentPoint_82);
      Instrument_82.insert(DetachmentPoint_82.getString());
      FIX::EncodedIssuer EncodedIssuer_82("DATA_1835687635");
      noRelatedSym_0_1_0.set(EncodedIssuer_82);
      Instrument_82.insert(EncodedIssuer_82.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_82(167516768);
      noRelatedSym_0_1_0.set(EncodedIssuerLen_82);
      Instrument_82.insert(EncodedIssuerLen_82.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_82("DATA_1566537612");
      noRelatedSym_0_1_0.set(EncodedSecurityDesc_82);
      Instrument_82.insert(EncodedSecurityDesc_82.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_82(404958722);
      noRelatedSym_0_1_0.set(EncodedSecurityDescLen_82);
      Instrument_82.insert(EncodedSecurityDescLen_82.getString());
      FIX::ExerciseStyle ExerciseStyle_82(2);
      noRelatedSym_0_1_0.set(ExerciseStyle_82);
      Instrument_82.insert(ExerciseStyle_82.getString());
      FIX::Factor Factor_82;
      Factor_82.setString("17171157");
      noRelatedSym_0_1_0.set(Factor_82);
      Instrument_82.insert(Factor_82.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_82(true);
      noRelatedSym_0_1_0.set(FlexProductEligibilityIndicator_82);
      Instrument_82.insert(FlexProductEligibilityIndicator_82.getString());
      FIX::FlexibleIndicator FlexibleIndicator_82(false);
      noRelatedSym_0_1_0.set(FlexibleIndicator_82);
      Instrument_82.insert(FlexibleIndicator_82.getString());
      FIX::FloorPrice FloorPrice_82;
      FloorPrice_82.setString("3242378");
      noRelatedSym_0_1_0.set(FloorPrice_82);
      Instrument_82.insert(FloorPrice_82.getString());
      FIX::FlowScheduleType FlowScheduleType_82(1);
      noRelatedSym_0_1_0.set(FlowScheduleType_82);
      Instrument_82.insert(FlowScheduleType_82.getString());
      FIX::InstrRegistry InstrRegistry_82("STRING_1791640172");
      noRelatedSym_0_1_0.set(InstrRegistry_82);
      Instrument_82.insert(InstrRegistry_82.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_82('2');
      noRelatedSym_0_1_0.set(InstrmtAssignmentMethod_82);
      Instrument_82.insert(InstrmtAssignmentMethod_82.getString());
      FIX::InterestAccrualDate InterestAccrualDate_82("LOCALMKTDATE_2145616376");
      noRelatedSym_0_1_0.set(InterestAccrualDate_82);
      Instrument_82.insert(InterestAccrualDate_82.getString());
      FIX::IssueDate IssueDate_82("LOCALMKTDATE_439584326");
      noRelatedSym_0_1_0.set(IssueDate_82);
      Instrument_82.insert(IssueDate_82.getString());
      FIX::Issuer Issuer_82("STRING_188392492");
      noRelatedSym_0_1_0.set(Issuer_82);
      Instrument_82.insert(Issuer_82.getString());
      FIX::ListMethod ListMethod_82(1);
      noRelatedSym_0_1_0.set(ListMethod_82);
      Instrument_82.insert(ListMethod_82.getString());
      FIX::LocaleOfIssue LocaleOfIssue_82("STRING_1798961377");
      noRelatedSym_0_1_0.set(LocaleOfIssue_82);
      Instrument_82.insert(LocaleOfIssue_82.getString());
      FIX::MaturityDate MaturityDate_82("LOCALMKTDATE_956514866");
      noRelatedSym_0_1_0.set(MaturityDate_82);
      Instrument_82.insert(MaturityDate_82.getString());
      FIX::MaturityMonthYear MaturityMonthYear_82("MONTHYEAR_1809123695");
      noRelatedSym_0_1_0.set(MaturityMonthYear_82);
      Instrument_82.insert(MaturityMonthYear_82.getString());
      FIX::MaturityTime MaturityTime_82("TZTIMEONLY_1648531364");
      noRelatedSym_0_1_0.set(MaturityTime_82);
      Instrument_82.insert(MaturityTime_82.getString());
      FIX::MinPriceIncrement MinPriceIncrement_82;
      MinPriceIncrement_82.setString("13342695");
      noRelatedSym_0_1_0.set(MinPriceIncrement_82);
      Instrument_82.insert(MinPriceIncrement_82.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_82;
      MinPriceIncrementAmount_82.setString("10594082");
      noRelatedSym_0_1_0.set(MinPriceIncrementAmount_82);
      Instrument_82.insert(MinPriceIncrementAmount_82.getString());
      FIX::NTPositionLimit NTPositionLimit_82(516685374);
      noRelatedSym_0_1_0.set(NTPositionLimit_82);
      Instrument_82.insert(NTPositionLimit_82.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_82;
      NotionalPercentageOutstanding_82.setString("60.880000");
      noRelatedSym_0_1_0.set(NotionalPercentageOutstanding_82);
      Instrument_82.insert(NotionalPercentageOutstanding_82.getString());
      FIX::OptAttribute OptAttribute_82('1');
      noRelatedSym_0_1_0.set(OptAttribute_82);
      Instrument_82.insert(OptAttribute_82.getString());
      FIX::OptPayoutAmount OptPayoutAmount_82;
      OptPayoutAmount_82.setString("4041417");
      noRelatedSym_0_1_0.set(OptPayoutAmount_82);
      Instrument_82.insert(OptPayoutAmount_82.getString());
      FIX::OptPayoutType OptPayoutType_82(1);
      noRelatedSym_0_1_0.set(OptPayoutType_82);
      Instrument_82.insert(OptPayoutType_82.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_82;
      OriginalNotionalPercentageOutstanding_82.setString("22.190000");
      noRelatedSym_0_1_0.set(OriginalNotionalPercentageOutstanding_82);
      Instrument_82.insert(OriginalNotionalPercentageOutstanding_82.getString());
      FIX::Pool Pool_82("STRING_555365389");
      noRelatedSym_0_1_0.set(Pool_82);
      Instrument_82.insert(Pool_82.getString());
      FIX::PositionLimit PositionLimit_82(2052686579);
      noRelatedSym_0_1_0.set(PositionLimit_82);
      Instrument_82.insert(PositionLimit_82.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_82("STRING_INX");
      noRelatedSym_0_1_0.set(PriceQuoteMethod_82);
      Instrument_82.insert(PriceQuoteMethod_82.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_82("STRING_243569376");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasure_82);
      Instrument_82.insert(PriceUnitOfMeasure_82.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_82;
      PriceUnitOfMeasureQty_82.setString("727196");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasureQty_82);
      Instrument_82.insert(PriceUnitOfMeasureQty_82.getString());
      FIX::Product Product_92(13);
      noRelatedSym_0_1_0.set(Product_92);
      Instrument_82.insert(Product_92.getString());
      FIX::ProductComplex ProductComplex_82("STRING_648528098");
      noRelatedSym_0_1_0.set(ProductComplex_82);
      Instrument_82.insert(ProductComplex_82.getString());
      FIX::PutOrCall PutOrCall_82(1);
      noRelatedSym_0_1_0.set(PutOrCall_82);
      Instrument_82.insert(PutOrCall_82.getString());
      FIX::RedemptionDate RedemptionDate_82("LOCALMKTDATE_1881898798");
      noRelatedSym_0_1_0.set(RedemptionDate_82);
      Instrument_82.insert(RedemptionDate_82.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_82("STRING_2071581455");
      noRelatedSym_0_1_0.set(RepoCollateralSecurityType_82);
      Instrument_82.insert(RepoCollateralSecurityType_82.getString());
      FIX::RepurchaseRate RepurchaseRate_82;
      RepurchaseRate_82.setString("80.370000");
      noRelatedSym_0_1_0.set(RepurchaseRate_82);
      Instrument_82.insert(RepurchaseRate_82.getString());
      FIX::RepurchaseTerm RepurchaseTerm_82(58653040);
      noRelatedSym_0_1_0.set(RepurchaseTerm_82);
      Instrument_82.insert(RepurchaseTerm_82.getString());
      FIX::RestructuringType RestructuringType_82("STRING_MM");
      noRelatedSym_0_1_0.set(RestructuringType_82);
      Instrument_82.insert(RestructuringType_82.getString());
      FIX::SecurityDesc SecurityDesc_82("STRING_1217094561");
      noRelatedSym_0_1_0.set(SecurityDesc_82);
      Instrument_82.insert(SecurityDesc_82.getString());
      FIX::SecurityExchange SecurityExchange_82("EXCHANGE_2074491878");
      noRelatedSym_0_1_0.set(SecurityExchange_82);
      Instrument_82.insert(SecurityExchange_82.getString());
      FIX::SecurityGroup SecurityGroup_82("STRING_514156807");
      noRelatedSym_0_1_0.set(SecurityGroup_82);
      Instrument_82.insert(SecurityGroup_82.getString());
      FIX::SecurityID SecurityID_82("STRING_1656678887");
      noRelatedSym_0_1_0.set(SecurityID_82);
      Instrument_82.insert(SecurityID_82.getString());
      FIX::SecurityIDSource SecurityIDSource_82("STRING_9");
      noRelatedSym_0_1_0.set(SecurityIDSource_82);
      Instrument_82.insert(SecurityIDSource_82.getString());
      FIX::SecurityStatus SecurityStatus_83("STRING_1");
      noRelatedSym_0_1_0.set(SecurityStatus_83);
      Instrument_82.insert(SecurityStatus_83.getString());
      FIX::SecuritySubType SecuritySubType_87("STRING_1308156617");
      noRelatedSym_0_1_0.set(SecuritySubType_87);
      Instrument_82.insert(SecuritySubType_87.getString());
      FIX::SecurityType SecurityType_92("STRING_BRIDGE");
      noRelatedSym_0_1_0.set(SecurityType_92);
      Instrument_82.insert(SecurityType_92.getString());
      FIX::Seniority Seniority_82("STRING_SB");
      noRelatedSym_0_1_0.set(Seniority_82);
      Instrument_82.insert(Seniority_82.getString());
      FIX::SettlMethod SettlMethod_82('P');
      noRelatedSym_0_1_0.set(SettlMethod_82);
      Instrument_82.insert(SettlMethod_82.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_82("STRING_258701524");
      noRelatedSym_0_1_0.set(SettleOnOpenFlag_82);
      Instrument_82.insert(SettleOnOpenFlag_82.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_82("STRING_1959208211");
      noRelatedSym_0_1_0.set(StateOrProvinceOfIssue_82);
      Instrument_82.insert(StateOrProvinceOfIssue_82.getString());
      FIX::StrikeCurrency StrikeCurrency_82("USD");
      noRelatedSym_0_1_0.set(StrikeCurrency_82);
      Instrument_82.insert(StrikeCurrency_82.getString());
      FIX::StrikeMultiplier StrikeMultiplier_82;
      StrikeMultiplier_82.setString("8670667");
      noRelatedSym_0_1_0.set(StrikeMultiplier_82);
      Instrument_82.insert(StrikeMultiplier_82.getString());
      FIX::StrikePrice StrikePrice_82;
      StrikePrice_82.setString("17300314");
      noRelatedSym_0_1_0.set(StrikePrice_82);
      Instrument_82.insert(StrikePrice_82.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_82(2);
      noRelatedSym_0_1_0.set(StrikePriceBoundaryMethod_82);
      Instrument_82.insert(StrikePriceBoundaryMethod_82.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_82;
      StrikePriceBoundaryPrecision_82.setString("89.780000");
      noRelatedSym_0_1_0.set(StrikePriceBoundaryPrecision_82);
      Instrument_82.insert(StrikePriceBoundaryPrecision_82.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_82(1);
      noRelatedSym_0_1_0.set(StrikePriceDeterminationMethod_82);
      Instrument_82.insert(StrikePriceDeterminationMethod_82.getString());
      FIX::StrikeValue StrikeValue_82;
      StrikeValue_82.setString("13173004");
      noRelatedSym_0_1_0.set(StrikeValue_82);
      Instrument_82.insert(StrikeValue_82.getString());
      FIX::Symbol Symbol_82("STRING_1671828047");
      noRelatedSym_0_1_0.set(Symbol_82);
      Instrument_82.insert(Symbol_82.getString());
      FIX::SymbolSfx SymbolSfx_82("STRING_CD");
      noRelatedSym_0_1_0.set(SymbolSfx_82);
      Instrument_82.insert(SymbolSfx_82.getString());
      FIX::TimeUnit TimeUnit_82("STRING_Wk");
      noRelatedSym_0_1_0.set(TimeUnit_82);
      Instrument_82.insert(TimeUnit_82.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_82(1);
      noRelatedSym_0_1_0.set(UnderlyingPriceDeterminationMethod_82);
      Instrument_82.insert(UnderlyingPriceDeterminationMethod_82.getString());
      FIX::UnitOfMeasure UnitOfMeasure_82("STRING_MMbbl");
      noRelatedSym_0_1_0.set(UnitOfMeasure_82);
      Instrument_82.insert(UnitOfMeasure_82.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_82;
      UnitOfMeasureQty_82.setString("17870821");
      noRelatedSym_0_1_0.set(UnitOfMeasureQty_82);
      Instrument_82.insert(UnitOfMeasureQty_82.getString());
      FIX::ValuationMethod ValuationMethod_82("STRING_FUT");
      noRelatedSym_0_1_0.set(ValuationMethod_82);
      Instrument_82.insert(ValuationMethod_82.getString());
      all_values.push_back(Instrument_82);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_152;
        FIX::ComplexEventCondition ComplexEventCondition_152(2);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_152);
        ComplexEvents_NoComplexEvents_152.insert(ComplexEventCondition_152.getString());
        FIX::ComplexEventPrice ComplexEventPrice_152;
        ComplexEventPrice_152.setString("16296792");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_152);
        ComplexEvents_NoComplexEvents_152.insert(ComplexEventPrice_152.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_152(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_152);
        ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceBoundaryMethod_152.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_152;
        ComplexEventPriceBoundaryPrecision_152.setString("74.200000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_152);
        ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceBoundaryPrecision_152.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_152(3);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_152);
        ComplexEvents_NoComplexEvents_152.insert(ComplexEventPriceTimeType_152.getString());
        FIX::ComplexEventType ComplexEventType_152(9);
        noComplexEvents_0_0_2_0.set(ComplexEventType_152);
        ComplexEvents_NoComplexEvents_152.insert(ComplexEventType_152.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_152;
        ComplexOptPayoutAmount_152.setString("19388263");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_152);
        ComplexEvents_NoComplexEvents_152.insert(ComplexOptPayoutAmount_152.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_152);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_323;
          FIX::ComplexEventEndDate ComplexEventEndDate_323(FIX::UTCTIMESTAMP(20, 43, 10, 2, 122001));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_323);
          ComplexEventDates_NoComplexEventDates_323.insert(ComplexEventEndDate_323.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_323(FIX::UTCTIMESTAMP(11, 44, 57, 11, 82008));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_323);
          ComplexEventDates_NoComplexEventDates_323.insert(ComplexEventStartDate_323.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_323);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_645;
            FIX::ComplexEventEndTime ComplexEventEndTime_645(FIX::UTCTIMEONLY(6, 12, 55));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_645);
            ComplexEventTimes_NoComplexEventTimes_645.insert(ComplexEventEndTime_645.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_645(FIX::UTCTIMEONLY(14, 18, 27));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_645);
            ComplexEventTimes_NoComplexEventTimes_645.insert(ComplexEventStartTime_645.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_645);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_153;
        FIX::ComplexEventCondition ComplexEventCondition_153(2);
        noComplexEvents_0_0_2_1.set(ComplexEventCondition_153);
        ComplexEvents_NoComplexEvents_153.insert(ComplexEventCondition_153.getString());
        FIX::ComplexEventPrice ComplexEventPrice_153;
        ComplexEventPrice_153.setString("16988659");
        noComplexEvents_0_0_2_1.set(ComplexEventPrice_153);
        ComplexEvents_NoComplexEvents_153.insert(ComplexEventPrice_153.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_153(2);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryMethod_153);
        ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceBoundaryMethod_153.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_153;
        ComplexEventPriceBoundaryPrecision_153.setString("88.610000");
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryPrecision_153);
        ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceBoundaryPrecision_153.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_153(3);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceTimeType_153);
        ComplexEvents_NoComplexEvents_153.insert(ComplexEventPriceTimeType_153.getString());
        FIX::ComplexEventType ComplexEventType_153(7);
        noComplexEvents_0_0_2_1.set(ComplexEventType_153);
        ComplexEvents_NoComplexEvents_153.insert(ComplexEventType_153.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_153;
        ComplexOptPayoutAmount_153.setString("19514051");
        noComplexEvents_0_0_2_1.set(ComplexOptPayoutAmount_153);
        ComplexEvents_NoComplexEvents_153.insert(ComplexOptPayoutAmount_153.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_153);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_324;
          FIX::ComplexEventEndDate ComplexEventEndDate_324(FIX::UTCTIMESTAMP(5, 40, 53, 27, 42011));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventEndDate_324);
          ComplexEventDates_NoComplexEventDates_324.insert(ComplexEventEndDate_324.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_324(FIX::UTCTIMESTAMP(6, 43, 19, 9, 72015));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventStartDate_324);
          ComplexEventDates_NoComplexEventDates_324.insert(ComplexEventStartDate_324.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_324);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_646;
            FIX::ComplexEventEndTime ComplexEventEndTime_646(FIX::UTCTIMEONLY(19, 35, 36));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventEndTime_646);
            ComplexEventTimes_NoComplexEventTimes_646.insert(ComplexEventEndTime_646.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_646(FIX::UTCTIMEONLY(2, 46, 28));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventStartTime_646);
            ComplexEventTimes_NoComplexEventTimes_646.insert(ComplexEventStartTime_646.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_646);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_647;
            FIX::ComplexEventEndTime ComplexEventEndTime_647(FIX::UTCTIMEONLY(15, 4, 1));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventEndTime_647);
            ComplexEventTimes_NoComplexEventTimes_647.insert(ComplexEventEndTime_647.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_647(FIX::UTCTIMEONLY(8, 22, 6));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventStartTime_647);
            ComplexEventTimes_NoComplexEventTimes_647.insert(ComplexEventStartTime_647.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_647);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_1);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_159;
        FIX::EventDate EventDate_159("LOCALMKTDATE_1233992679");
        noEvents_0_0_2_0.set(EventDate_159);
        EvntGrp_NoEvents_159.insert(EventDate_159.getString());
        FIX::EventPx EventPx_159;
        EventPx_159.setString("4148605");
        noEvents_0_0_2_0.set(EventPx_159);
        EvntGrp_NoEvents_159.insert(EventPx_159.getString());
        FIX::EventText EventText_159("STRING_1953830912");
        noEvents_0_0_2_0.set(EventText_159);
        EvntGrp_NoEvents_159.insert(EventText_159.getString());
        FIX::EventTime EventTime_159(FIX::UTCTIMESTAMP(9, 23, 0, 15, 82001));
        noEvents_0_0_2_0.set(EventTime_159);
        EvntGrp_NoEvents_159.insert(EventTime_159.getString());
        FIX::EventType EventType_159(13);
        noEvents_0_0_2_0.set(EventType_159);
        EvntGrp_NoEvents_159.insert(EventType_159.getString());
        all_values.push_back(EvntGrp_NoEvents_159);

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_158;
        FIX::InstrumentPartyID InstrumentPartyID_158("STRING_710835764");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_158);
        InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyID_158.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_158('3');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_158);
        InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyIDSource_158.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_158(1608567358);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_158);
        InstrumentParties_NoInstrumentParties_158.insert(InstrumentPartyRole_158.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_158);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315;
          FIX::InstrumentPartySubID InstrumentPartySubID_315("STRING_157519250");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_315);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315.insert(InstrumentPartySubID_315.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_315(1580403866);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_315);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315.insert(InstrumentPartySubIDType_315.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_315);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316;
          FIX::InstrumentPartySubID InstrumentPartySubID_316("STRING_1028545097");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_316);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316.insert(InstrumentPartySubID_316.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_316(941159308);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_316);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316.insert(InstrumentPartySubIDType_316.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_316);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_159;
        FIX::InstrumentPartyID InstrumentPartyID_159("STRING_1621427052");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_159);
        InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyID_159.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_159('1');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_159);
        InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyIDSource_159.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_159(1455230808);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_159);
        InstrumentParties_NoInstrumentParties_159.insert(InstrumentPartyRole_159.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_159);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317;
          FIX::InstrumentPartySubID InstrumentPartySubID_317("STRING_1670066202");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_317);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317.insert(InstrumentPartySubID_317.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_317(1981881169);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_317);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317.insert(InstrumentPartySubIDType_317.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_317);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318;
          FIX::InstrumentPartySubID InstrumentPartySubID_318("STRING_1914307828");
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubID_318);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318.insert(InstrumentPartySubID_318.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_318(1276397130);
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubIDType_318);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318.insert(InstrumentPartySubIDType_318.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_318);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_160;
        FIX::InstrumentPartyID InstrumentPartyID_160("STRING_164969403");
        noInstrumentParties_0_0_2_2.set(InstrumentPartyID_160);
        InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyID_160.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_160('1');
        noInstrumentParties_0_0_2_2.set(InstrumentPartyIDSource_160);
        InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyIDSource_160.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_160(2142837069);
        noInstrumentParties_0_0_2_2.set(InstrumentPartyRole_160);
        InstrumentParties_NoInstrumentParties_160.insert(InstrumentPartyRole_160.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_160);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319;
          FIX::InstrumentPartySubID InstrumentPartySubID_319("STRING_1514834404");
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubID_319);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319.insert(InstrumentPartySubID_319.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_319(1949184333);
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubIDType_319);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319.insert(InstrumentPartySubIDType_319.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_319);

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_171;
        FIX::SecurityAltID SecurityAltID_171("STRING_1866627541");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_171);
        SecAltIDGrp_NoSecurityAltID_171.insert(SecurityAltID_171.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_171("STRING_334445449");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_171);
        SecAltIDGrp_NoSecurityAltID_171.insert(SecurityAltIDSource_171.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_171);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_172;
        FIX::SecurityAltID SecurityAltID_172("STRING_505528446");
        noSecurityAltID_0_0_2_1.set(SecurityAltID_172);
        SecAltIDGrp_NoSecurityAltID_172.insert(SecurityAltID_172.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_172("STRING_1209198908");
        noSecurityAltID_0_0_2_1.set(SecurityAltIDSource_172);
        SecAltIDGrp_NoSecurityAltID_172.insert(SecurityAltIDSource_172.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_172);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_164;
      FIX::SecurityXML SecurityXML_165("XMLDATA_2099660996");
      noRelatedSym_0_1_0.set(SecurityXML_165);
      FIX::SecurityXMLLen SecurityXMLLen_82(134869277);
      noRelatedSym_0_1_0.set(SecurityXMLLen_82);
      FIX::SecurityXMLSchema SecurityXMLSchema_82("STRING_8491672");
      noRelatedSym_0_1_0.set(SecurityXMLSchema_82);
      SecurityXML_164.insert(SecurityXMLSchema_82.getString());
      all_values.push_back(SecurityXML_164);

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    msg.addGroup(noAsgnReqs_0_0);
  }
  {
    FIX50SP2::StreamAssignmentReport::NoAsgnReqs noAsgnReqs_0_1;
    // StrmAsgnRptGrp.NoAsgnReqs
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_144;
      FIX::PartyID PartyID_144("STRING_845705042");
      noPartyIDs_1_1_0.set(PartyID_144);
      Parties_NoPartyIDs_144.insert(PartyID_144.getString());
      FIX::PartyIDSource PartyIDSource_144('7');
      noPartyIDs_1_1_0.set(PartyIDSource_144);
      Parties_NoPartyIDs_144.insert(PartyIDSource_144.getString());
      FIX::PartyRole PartyRole_144(78);
      noPartyIDs_1_1_0.set(PartyRole_144);
      Parties_NoPartyIDs_144.insert(PartyRole_144.getString());
      all_values.push_back(Parties_NoPartyIDs_144);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_284;
        FIX::PartySubID PartySubID_284("STRING_205268698");
        noPartySubIDs_1_0_2_0.set(PartySubID_284);
        PtysSubGrp_NoPartySubIDs_284.insert(PartySubID_284.getString());
        FIX::PartySubIDType PartySubIDType_284(14);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_284);
        PtysSubGrp_NoPartySubIDs_284.insert(PartySubIDType_284.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_284);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noAsgnReqs_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_145;
      FIX::PartyID PartyID_145("STRING_560666787");
      noPartyIDs_1_1_1.set(PartyID_145);
      Parties_NoPartyIDs_145.insert(PartyID_145.getString());
      FIX::PartyIDSource PartyIDSource_145('E');
      noPartyIDs_1_1_1.set(PartyIDSource_145);
      Parties_NoPartyIDs_145.insert(PartyIDSource_145.getString());
      FIX::PartyRole PartyRole_145(53);
      noPartyIDs_1_1_1.set(PartyRole_145);
      Parties_NoPartyIDs_145.insert(PartyRole_145.getString());
      all_values.push_back(Parties_NoPartyIDs_145);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_285;
        FIX::PartySubID PartySubID_285("STRING_454175166");
        noPartySubIDs_1_1_2_0.set(PartySubID_285);
        PtysSubGrp_NoPartySubIDs_285.insert(PartySubID_285.getString());
        FIX::PartySubIDType PartySubIDType_285(23);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_285);
        PtysSubGrp_NoPartySubIDs_285.insert(PartySubIDType_285.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_285);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_286;
        FIX::PartySubID PartySubID_286("STRING_184644338");
        noPartySubIDs_1_1_2_1.set(PartySubID_286);
        PtysSubGrp_NoPartySubIDs_286.insert(PartySubID_286.getString());
        FIX::PartySubIDType PartySubIDType_286(30);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_286);
        PtysSubGrp_NoPartySubIDs_286.insert(PartySubIDType_286.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_286);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noAsgnReqs_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_146;
      FIX::PartyID PartyID_146("STRING_1583156347");
      noPartyIDs_1_1_2.set(PartyID_146);
      Parties_NoPartyIDs_146.insert(PartyID_146.getString());
      FIX::PartyIDSource PartyIDSource_146('4');
      noPartyIDs_1_1_2.set(PartyIDSource_146);
      Parties_NoPartyIDs_146.insert(PartyIDSource_146.getString());
      FIX::PartyRole PartyRole_146(52);
      noPartyIDs_1_1_2.set(PartyRole_146);
      Parties_NoPartyIDs_146.insert(PartyRole_146.getString());
      all_values.push_back(Parties_NoPartyIDs_146);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_287;
        FIX::PartySubID PartySubID_287("STRING_1456394889");
        noPartySubIDs_1_2_2_0.set(PartySubID_287);
        PtysSubGrp_NoPartySubIDs_287.insert(PartySubID_287.getString());
        FIX::PartySubIDType PartySubIDType_287(4);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_287);
        PtysSubGrp_NoPartySubIDs_287.insert(PartySubIDType_287.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_287);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_288;
        FIX::PartySubID PartySubID_288("STRING_2050480950");
        noPartySubIDs_1_2_2_1.set(PartySubID_288);
        PtysSubGrp_NoPartySubIDs_288.insert(PartySubID_288.getString());
        FIX::PartySubIDType PartySubIDType_288(12);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_288);
        PtysSubGrp_NoPartySubIDs_288.insert(PartySubIDType_288.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_288);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noAsgnReqs_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_1_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_1;
      FIX::EncodedText EncodedText_91("DATA_1769624843");
      noRelatedSym_1_1_0.set(EncodedText_91);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(EncodedText_91.getString());
      FIX::EncodedTextLen EncodedTextLen_91(1592541024);
      noRelatedSym_1_1_0.set(EncodedTextLen_91);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(EncodedTextLen_91.getString());
      FIX::MDStreamID MDStreamID_5("STRING_1360660844");
      noRelatedSym_1_1_0.set(MDStreamID_5);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(MDStreamID_5.getString());
      FIX::SettlType SettlType_30("STRING_0");
      noRelatedSym_1_1_0.set(SettlType_30);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(SettlType_30.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_1(2);
      noRelatedSym_1_1_0.set(StreamAsgnRejReason_1);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(StreamAsgnRejReason_1.getString());
      FIX::StreamAsgnType StreamAsgnType_1(3);
      noRelatedSym_1_1_0.set(StreamAsgnType_1);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(StreamAsgnType_1.getString());
      FIX::Text Text_91("STRING_839831776");
      noRelatedSym_1_1_0.set(Text_91);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(Text_91.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_1);

      // Instrument
      multiset<string> Instrument_83;
      FIX::AttachmentPoint AttachmentPoint_83;
      AttachmentPoint_83.setString("70.170000");
      noRelatedSym_1_1_0.set(AttachmentPoint_83);
      Instrument_83.insert(AttachmentPoint_83.getString());
      FIX::CFICode CFICode_90("STRING_193751516");
      noRelatedSym_1_1_0.set(CFICode_90);
      Instrument_83.insert(CFICode_90.getString());
      FIX::CPProgram CPProgram_83(1);
      noRelatedSym_1_1_0.set(CPProgram_83);
      Instrument_83.insert(CPProgram_83.getString());
      FIX::CPRegType CPRegType_83("STRING_1179939373");
      noRelatedSym_1_1_0.set(CPRegType_83);
      Instrument_83.insert(CPRegType_83.getString());
      FIX::CapPrice CapPrice_83;
      CapPrice_83.setString("18733568");
      noRelatedSym_1_1_0.set(CapPrice_83);
      Instrument_83.insert(CapPrice_83.getString());
      FIX::ContractMultiplier ContractMultiplier_83;
      ContractMultiplier_83.setString("10928499");
      noRelatedSym_1_1_0.set(ContractMultiplier_83);
      Instrument_83.insert(ContractMultiplier_83.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_83(1);
      noRelatedSym_1_1_0.set(ContractMultiplierUnit_83);
      Instrument_83.insert(ContractMultiplierUnit_83.getString());
      FIX::ContractSettlMonth ContractSettlMonth_83("MONTHYEAR_286539993");
      noRelatedSym_1_1_0.set(ContractSettlMonth_83);
      Instrument_83.insert(ContractSettlMonth_83.getString());
      FIX::CountryOfIssue CountryOfIssue_83("COUNTRY_91794280");
      noRelatedSym_1_1_0.set(CountryOfIssue_83);
      Instrument_83.insert(CountryOfIssue_83.getString());
      FIX::CouponPaymentDate CouponPaymentDate_83("LOCALMKTDATE_763511575");
      noRelatedSym_1_1_0.set(CouponPaymentDate_83);
      Instrument_83.insert(CouponPaymentDate_83.getString());
      FIX::CouponRate CouponRate_83;
      CouponRate_83.setString("17.770000");
      noRelatedSym_1_1_0.set(CouponRate_83);
      Instrument_83.insert(CouponRate_83.getString());
      FIX::CreditRating CreditRating_83("STRING_545969447");
      noRelatedSym_1_1_0.set(CreditRating_83);
      Instrument_83.insert(CreditRating_83.getString());
      FIX::DatedDate DatedDate_83("LOCALMKTDATE_432360093");
      noRelatedSym_1_1_0.set(DatedDate_83);
      Instrument_83.insert(DatedDate_83.getString());
      FIX::DetachmentPoint DetachmentPoint_83;
      DetachmentPoint_83.setString("61.160000");
      noRelatedSym_1_1_0.set(DetachmentPoint_83);
      Instrument_83.insert(DetachmentPoint_83.getString());
      FIX::EncodedIssuer EncodedIssuer_83("DATA_834542134");
      noRelatedSym_1_1_0.set(EncodedIssuer_83);
      Instrument_83.insert(EncodedIssuer_83.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_83(2015516440);
      noRelatedSym_1_1_0.set(EncodedIssuerLen_83);
      Instrument_83.insert(EncodedIssuerLen_83.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_83("DATA_446803936");
      noRelatedSym_1_1_0.set(EncodedSecurityDesc_83);
      Instrument_83.insert(EncodedSecurityDesc_83.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_83(1288084225);
      noRelatedSym_1_1_0.set(EncodedSecurityDescLen_83);
      Instrument_83.insert(EncodedSecurityDescLen_83.getString());
      FIX::ExerciseStyle ExerciseStyle_83(1);
      noRelatedSym_1_1_0.set(ExerciseStyle_83);
      Instrument_83.insert(ExerciseStyle_83.getString());
      FIX::Factor Factor_83;
      Factor_83.setString("19031988");
      noRelatedSym_1_1_0.set(Factor_83);
      Instrument_83.insert(Factor_83.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_83(true);
      noRelatedSym_1_1_0.set(FlexProductEligibilityIndicator_83);
      Instrument_83.insert(FlexProductEligibilityIndicator_83.getString());
      FIX::FlexibleIndicator FlexibleIndicator_83(true);
      noRelatedSym_1_1_0.set(FlexibleIndicator_83);
      Instrument_83.insert(FlexibleIndicator_83.getString());
      FIX::FloorPrice FloorPrice_83;
      FloorPrice_83.setString("10138107");
      noRelatedSym_1_1_0.set(FloorPrice_83);
      Instrument_83.insert(FloorPrice_83.getString());
      FIX::FlowScheduleType FlowScheduleType_83(3);
      noRelatedSym_1_1_0.set(FlowScheduleType_83);
      Instrument_83.insert(FlowScheduleType_83.getString());
      FIX::InstrRegistry InstrRegistry_83("STRING_2076301483");
      noRelatedSym_1_1_0.set(InstrRegistry_83);
      Instrument_83.insert(InstrRegistry_83.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_83('4');
      noRelatedSym_1_1_0.set(InstrmtAssignmentMethod_83);
      Instrument_83.insert(InstrmtAssignmentMethod_83.getString());
      FIX::InterestAccrualDate InterestAccrualDate_83("LOCALMKTDATE_1061414345");
      noRelatedSym_1_1_0.set(InterestAccrualDate_83);
      Instrument_83.insert(InterestAccrualDate_83.getString());
      FIX::IssueDate IssueDate_83("LOCALMKTDATE_760157939");
      noRelatedSym_1_1_0.set(IssueDate_83);
      Instrument_83.insert(IssueDate_83.getString());
      FIX::Issuer Issuer_83("STRING_2003586501");
      noRelatedSym_1_1_0.set(Issuer_83);
      Instrument_83.insert(Issuer_83.getString());
      FIX::ListMethod ListMethod_83(1);
      noRelatedSym_1_1_0.set(ListMethod_83);
      Instrument_83.insert(ListMethod_83.getString());
      FIX::LocaleOfIssue LocaleOfIssue_83("STRING_1599989716");
      noRelatedSym_1_1_0.set(LocaleOfIssue_83);
      Instrument_83.insert(LocaleOfIssue_83.getString());
      FIX::MaturityDate MaturityDate_83("LOCALMKTDATE_1487889870");
      noRelatedSym_1_1_0.set(MaturityDate_83);
      Instrument_83.insert(MaturityDate_83.getString());
      FIX::MaturityMonthYear MaturityMonthYear_83("MONTHYEAR_603212335");
      noRelatedSym_1_1_0.set(MaturityMonthYear_83);
      Instrument_83.insert(MaturityMonthYear_83.getString());
      FIX::MaturityTime MaturityTime_83("TZTIMEONLY_340087292");
      noRelatedSym_1_1_0.set(MaturityTime_83);
      Instrument_83.insert(MaturityTime_83.getString());
      FIX::MinPriceIncrement MinPriceIncrement_83;
      MinPriceIncrement_83.setString("5203455");
      noRelatedSym_1_1_0.set(MinPriceIncrement_83);
      Instrument_83.insert(MinPriceIncrement_83.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_83;
      MinPriceIncrementAmount_83.setString("3290855");
      noRelatedSym_1_1_0.set(MinPriceIncrementAmount_83);
      Instrument_83.insert(MinPriceIncrementAmount_83.getString());
      FIX::NTPositionLimit NTPositionLimit_83(1432937214);
      noRelatedSym_1_1_0.set(NTPositionLimit_83);
      Instrument_83.insert(NTPositionLimit_83.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_83;
      NotionalPercentageOutstanding_83.setString("75.440000");
      noRelatedSym_1_1_0.set(NotionalPercentageOutstanding_83);
      Instrument_83.insert(NotionalPercentageOutstanding_83.getString());
      FIX::OptAttribute OptAttribute_83('6');
      noRelatedSym_1_1_0.set(OptAttribute_83);
      Instrument_83.insert(OptAttribute_83.getString());
      FIX::OptPayoutAmount OptPayoutAmount_83;
      OptPayoutAmount_83.setString("15247314");
      noRelatedSym_1_1_0.set(OptPayoutAmount_83);
      Instrument_83.insert(OptPayoutAmount_83.getString());
      FIX::OptPayoutType OptPayoutType_83(3);
      noRelatedSym_1_1_0.set(OptPayoutType_83);
      Instrument_83.insert(OptPayoutType_83.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_83;
      OriginalNotionalPercentageOutstanding_83.setString("73.110000");
      noRelatedSym_1_1_0.set(OriginalNotionalPercentageOutstanding_83);
      Instrument_83.insert(OriginalNotionalPercentageOutstanding_83.getString());
      FIX::Pool Pool_83("STRING_2070700941");
      noRelatedSym_1_1_0.set(Pool_83);
      Instrument_83.insert(Pool_83.getString());
      FIX::PositionLimit PositionLimit_83(1877229212);
      noRelatedSym_1_1_0.set(PositionLimit_83);
      Instrument_83.insert(PositionLimit_83.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_83("STRING_PCTPAR");
      noRelatedSym_1_1_0.set(PriceQuoteMethod_83);
      Instrument_83.insert(PriceQuoteMethod_83.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_83("STRING_757759428");
      noRelatedSym_1_1_0.set(PriceUnitOfMeasure_83);
      Instrument_83.insert(PriceUnitOfMeasure_83.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_83;
      PriceUnitOfMeasureQty_83.setString("17452620");
      noRelatedSym_1_1_0.set(PriceUnitOfMeasureQty_83);
      Instrument_83.insert(PriceUnitOfMeasureQty_83.getString());
      FIX::Product Product_93(10);
      noRelatedSym_1_1_0.set(Product_93);
      Instrument_83.insert(Product_93.getString());
      FIX::ProductComplex ProductComplex_83("STRING_2045843653");
      noRelatedSym_1_1_0.set(ProductComplex_83);
      Instrument_83.insert(ProductComplex_83.getString());
      FIX::PutOrCall PutOrCall_83(1);
      noRelatedSym_1_1_0.set(PutOrCall_83);
      Instrument_83.insert(PutOrCall_83.getString());
      FIX::RedemptionDate RedemptionDate_83("LOCALMKTDATE_752508894");
      noRelatedSym_1_1_0.set(RedemptionDate_83);
      Instrument_83.insert(RedemptionDate_83.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_83("STRING_891464755");
      noRelatedSym_1_1_0.set(RepoCollateralSecurityType_83);
      Instrument_83.insert(RepoCollateralSecurityType_83.getString());
      FIX::RepurchaseRate RepurchaseRate_83;
      RepurchaseRate_83.setString("43.350000");
      noRelatedSym_1_1_0.set(RepurchaseRate_83);
      Instrument_83.insert(RepurchaseRate_83.getString());
      FIX::RepurchaseTerm RepurchaseTerm_83(1766319647);
      noRelatedSym_1_1_0.set(RepurchaseTerm_83);
      Instrument_83.insert(RepurchaseTerm_83.getString());
      FIX::RestructuringType RestructuringType_83("STRING_XR");
      noRelatedSym_1_1_0.set(RestructuringType_83);
      Instrument_83.insert(RestructuringType_83.getString());
      FIX::SecurityDesc SecurityDesc_83("STRING_236952170");
      noRelatedSym_1_1_0.set(SecurityDesc_83);
      Instrument_83.insert(SecurityDesc_83.getString());
      FIX::SecurityExchange SecurityExchange_83("EXCHANGE_77704128");
      noRelatedSym_1_1_0.set(SecurityExchange_83);
      Instrument_83.insert(SecurityExchange_83.getString());
      FIX::SecurityGroup SecurityGroup_83("STRING_1653632600");
      noRelatedSym_1_1_0.set(SecurityGroup_83);
      Instrument_83.insert(SecurityGroup_83.getString());
      FIX::SecurityID SecurityID_83("STRING_997110110");
      noRelatedSym_1_1_0.set(SecurityID_83);
      Instrument_83.insert(SecurityID_83.getString());
      FIX::SecurityIDSource SecurityIDSource_83("STRING_C");
      noRelatedSym_1_1_0.set(SecurityIDSource_83);
      Instrument_83.insert(SecurityIDSource_83.getString());
      FIX::SecurityStatus SecurityStatus_84("STRING_2");
      noRelatedSym_1_1_0.set(SecurityStatus_84);
      Instrument_83.insert(SecurityStatus_84.getString());
      FIX::SecuritySubType SecuritySubType_88("STRING_449616178");
      noRelatedSym_1_1_0.set(SecuritySubType_88);
      Instrument_83.insert(SecuritySubType_88.getString());
      FIX::SecurityType SecurityType_93("STRING_RVLVTRM");
      noRelatedSym_1_1_0.set(SecurityType_93);
      Instrument_83.insert(SecurityType_93.getString());
      FIX::Seniority Seniority_83("STRING_SD");
      noRelatedSym_1_1_0.set(Seniority_83);
      Instrument_83.insert(Seniority_83.getString());
      FIX::SettlMethod SettlMethod_83('C');
      noRelatedSym_1_1_0.set(SettlMethod_83);
      Instrument_83.insert(SettlMethod_83.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_83("STRING_1942042447");
      noRelatedSym_1_1_0.set(SettleOnOpenFlag_83);
      Instrument_83.insert(SettleOnOpenFlag_83.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_83("STRING_847907647");
      noRelatedSym_1_1_0.set(StateOrProvinceOfIssue_83);
      Instrument_83.insert(StateOrProvinceOfIssue_83.getString());
      FIX::StrikeCurrency StrikeCurrency_83("CHF");
      noRelatedSym_1_1_0.set(StrikeCurrency_83);
      Instrument_83.insert(StrikeCurrency_83.getString());
      FIX::StrikeMultiplier StrikeMultiplier_83;
      StrikeMultiplier_83.setString("14635331");
      noRelatedSym_1_1_0.set(StrikeMultiplier_83);
      Instrument_83.insert(StrikeMultiplier_83.getString());
      FIX::StrikePrice StrikePrice_83;
      StrikePrice_83.setString("15998885");
      noRelatedSym_1_1_0.set(StrikePrice_83);
      Instrument_83.insert(StrikePrice_83.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_83(3);
      noRelatedSym_1_1_0.set(StrikePriceBoundaryMethod_83);
      Instrument_83.insert(StrikePriceBoundaryMethod_83.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_83;
      StrikePriceBoundaryPrecision_83.setString("68.450000");
      noRelatedSym_1_1_0.set(StrikePriceBoundaryPrecision_83);
      Instrument_83.insert(StrikePriceBoundaryPrecision_83.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_83(1);
      noRelatedSym_1_1_0.set(StrikePriceDeterminationMethod_83);
      Instrument_83.insert(StrikePriceDeterminationMethod_83.getString());
      FIX::StrikeValue StrikeValue_83;
      StrikeValue_83.setString("16505310");
      noRelatedSym_1_1_0.set(StrikeValue_83);
      Instrument_83.insert(StrikeValue_83.getString());
      FIX::Symbol Symbol_83("STRING_1430266624");
      noRelatedSym_1_1_0.set(Symbol_83);
      Instrument_83.insert(Symbol_83.getString());
      FIX::SymbolSfx SymbolSfx_83("STRING_CD");
      noRelatedSym_1_1_0.set(SymbolSfx_83);
      Instrument_83.insert(SymbolSfx_83.getString());
      FIX::TimeUnit TimeUnit_83("STRING_H");
      noRelatedSym_1_1_0.set(TimeUnit_83);
      Instrument_83.insert(TimeUnit_83.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_83(1);
      noRelatedSym_1_1_0.set(UnderlyingPriceDeterminationMethod_83);
      Instrument_83.insert(UnderlyingPriceDeterminationMethod_83.getString());
      FIX::UnitOfMeasure UnitOfMeasure_83("STRING_MWh");
      noRelatedSym_1_1_0.set(UnitOfMeasure_83);
      Instrument_83.insert(UnitOfMeasure_83.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_83;
      UnitOfMeasureQty_83.setString("12497670");
      noRelatedSym_1_1_0.set(UnitOfMeasureQty_83);
      Instrument_83.insert(UnitOfMeasureQty_83.getString());
      FIX::ValuationMethod ValuationMethod_83("STRING_FUT");
      noRelatedSym_1_1_0.set(ValuationMethod_83);
      Instrument_83.insert(ValuationMethod_83.getString());
      all_values.push_back(Instrument_83);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_154;
        FIX::ComplexEventCondition ComplexEventCondition_154(1);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_154);
        ComplexEvents_NoComplexEvents_154.insert(ComplexEventCondition_154.getString());
        FIX::ComplexEventPrice ComplexEventPrice_154;
        ComplexEventPrice_154.setString("6509215");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_154);
        ComplexEvents_NoComplexEvents_154.insert(ComplexEventPrice_154.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_154(5);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_154);
        ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceBoundaryMethod_154.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_154;
        ComplexEventPriceBoundaryPrecision_154.setString("35.840000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_154);
        ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceBoundaryPrecision_154.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_154(3);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_154);
        ComplexEvents_NoComplexEvents_154.insert(ComplexEventPriceTimeType_154.getString());
        FIX::ComplexEventType ComplexEventType_154(7);
        noComplexEvents_1_0_2_0.set(ComplexEventType_154);
        ComplexEvents_NoComplexEvents_154.insert(ComplexEventType_154.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_154;
        ComplexOptPayoutAmount_154.setString("6444800");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_154);
        ComplexEvents_NoComplexEvents_154.insert(ComplexOptPayoutAmount_154.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_154);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_325;
          FIX::ComplexEventEndDate ComplexEventEndDate_325(FIX::UTCTIMESTAMP(16, 26, 30, 14, 22017));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_325);
          ComplexEventDates_NoComplexEventDates_325.insert(ComplexEventEndDate_325.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_325(FIX::UTCTIMESTAMP(9, 11, 33, 23, 12011));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_325);
          ComplexEventDates_NoComplexEventDates_325.insert(ComplexEventStartDate_325.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_325);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_648;
            FIX::ComplexEventEndTime ComplexEventEndTime_648(FIX::UTCTIMEONLY(1, 58, 25));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_648);
            ComplexEventTimes_NoComplexEventTimes_648.insert(ComplexEventEndTime_648.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_648(FIX::UTCTIMEONLY(17, 43, 46));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_648);
            ComplexEventTimes_NoComplexEventTimes_648.insert(ComplexEventStartTime_648.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_648);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        noRelatedSym_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_155;
        FIX::ComplexEventCondition ComplexEventCondition_155(2);
        noComplexEvents_1_0_2_1.set(ComplexEventCondition_155);
        ComplexEvents_NoComplexEvents_155.insert(ComplexEventCondition_155.getString());
        FIX::ComplexEventPrice ComplexEventPrice_155;
        ComplexEventPrice_155.setString("15981226");
        noComplexEvents_1_0_2_1.set(ComplexEventPrice_155);
        ComplexEvents_NoComplexEvents_155.insert(ComplexEventPrice_155.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_155(3);
        noComplexEvents_1_0_2_1.set(ComplexEventPriceBoundaryMethod_155);
        ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceBoundaryMethod_155.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_155;
        ComplexEventPriceBoundaryPrecision_155.setString("44.000000");
        noComplexEvents_1_0_2_1.set(ComplexEventPriceBoundaryPrecision_155);
        ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceBoundaryPrecision_155.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_155(2);
        noComplexEvents_1_0_2_1.set(ComplexEventPriceTimeType_155);
        ComplexEvents_NoComplexEvents_155.insert(ComplexEventPriceTimeType_155.getString());
        FIX::ComplexEventType ComplexEventType_155(3);
        noComplexEvents_1_0_2_1.set(ComplexEventType_155);
        ComplexEvents_NoComplexEvents_155.insert(ComplexEventType_155.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_155;
        ComplexOptPayoutAmount_155.setString("16838144");
        noComplexEvents_1_0_2_1.set(ComplexOptPayoutAmount_155);
        ComplexEvents_NoComplexEvents_155.insert(ComplexOptPayoutAmount_155.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_155);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_326;
          FIX::ComplexEventEndDate ComplexEventEndDate_326(FIX::UTCTIMESTAMP(15, 47, 27, 21, 52008));
          noComplexEventDates_1_0_1_3_0.set(ComplexEventEndDate_326);
          ComplexEventDates_NoComplexEventDates_326.insert(ComplexEventEndDate_326.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_326(FIX::UTCTIMESTAMP(1, 7, 45, 1, 122006));
          noComplexEventDates_1_0_1_3_0.set(ComplexEventStartDate_326);
          ComplexEventDates_NoComplexEventDates_326.insert(ComplexEventStartDate_326.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_326);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_649;
            FIX::ComplexEventEndTime ComplexEventEndTime_649(FIX::UTCTIMEONLY(19, 14, 57));
            noComplexEventTimes_1_0_1_0_4_0.set(ComplexEventEndTime_649);
            ComplexEventTimes_NoComplexEventTimes_649.insert(ComplexEventEndTime_649.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_649(FIX::UTCTIMEONLY(23, 32, 59));
            noComplexEventTimes_1_0_1_0_4_0.set(ComplexEventStartTime_649);
            ComplexEventTimes_NoComplexEventTimes_649.insert(ComplexEventStartTime_649.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_649);

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_0);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_327;
          FIX::ComplexEventEndDate ComplexEventEndDate_327(FIX::UTCTIMESTAMP(1, 28, 59, 24, 112009));
          noComplexEventDates_1_0_1_3_1.set(ComplexEventEndDate_327);
          ComplexEventDates_NoComplexEventDates_327.insert(ComplexEventEndDate_327.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_327(FIX::UTCTIMESTAMP(15, 0, 4, 2, 72000));
          noComplexEventDates_1_0_1_3_1.set(ComplexEventStartDate_327);
          ComplexEventDates_NoComplexEventDates_327.insert(ComplexEventStartDate_327.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_327);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_650;
            FIX::ComplexEventEndTime ComplexEventEndTime_650(FIX::UTCTIMEONLY(14, 30, 19));
            noComplexEventTimes_1_0_1_1_4_0.set(ComplexEventEndTime_650);
            ComplexEventTimes_NoComplexEventTimes_650.insert(ComplexEventEndTime_650.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_650(FIX::UTCTIMEONLY(17, 25, 22));
            noComplexEventTimes_1_0_1_1_4_0.set(ComplexEventStartTime_650);
            ComplexEventTimes_NoComplexEventTimes_650.insert(ComplexEventStartTime_650.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_650);

            noComplexEventDates_1_0_1_3_1.addGroup(noComplexEventTimes_1_0_1_1_4_0);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_328;
          FIX::ComplexEventEndDate ComplexEventEndDate_328(FIX::UTCTIMESTAMP(12, 28, 38, 13, 52017));
          noComplexEventDates_1_0_1_3_2.set(ComplexEventEndDate_328);
          ComplexEventDates_NoComplexEventDates_328.insert(ComplexEventEndDate_328.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_328(FIX::UTCTIMESTAMP(15, 16, 8, 10, 52012));
          noComplexEventDates_1_0_1_3_2.set(ComplexEventStartDate_328);
          ComplexEventDates_NoComplexEventDates_328.insert(ComplexEventStartDate_328.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_328);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_651;
            FIX::ComplexEventEndTime ComplexEventEndTime_651(FIX::UTCTIMEONLY(1, 32, 17));
            noComplexEventTimes_1_0_1_2_4_0.set(ComplexEventEndTime_651);
            ComplexEventTimes_NoComplexEventTimes_651.insert(ComplexEventEndTime_651.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_651(FIX::UTCTIMEONLY(2, 10, 22));
            noComplexEventTimes_1_0_1_2_4_0.set(ComplexEventStartTime_651);
            ComplexEventTimes_NoComplexEventTimes_651.insert(ComplexEventStartTime_651.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_651);

            noComplexEventDates_1_0_1_3_2.addGroup(noComplexEventTimes_1_0_1_2_4_0);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_2);
        }
        noRelatedSym_1_1_0.addGroup(noComplexEvents_1_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_156;
        FIX::ComplexEventCondition ComplexEventCondition_156(1);
        noComplexEvents_1_0_2_2.set(ComplexEventCondition_156);
        ComplexEvents_NoComplexEvents_156.insert(ComplexEventCondition_156.getString());
        FIX::ComplexEventPrice ComplexEventPrice_156;
        ComplexEventPrice_156.setString("12426668");
        noComplexEvents_1_0_2_2.set(ComplexEventPrice_156);
        ComplexEvents_NoComplexEvents_156.insert(ComplexEventPrice_156.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_156(3);
        noComplexEvents_1_0_2_2.set(ComplexEventPriceBoundaryMethod_156);
        ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceBoundaryMethod_156.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_156;
        ComplexEventPriceBoundaryPrecision_156.setString("30.270000");
        noComplexEvents_1_0_2_2.set(ComplexEventPriceBoundaryPrecision_156);
        ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceBoundaryPrecision_156.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_156(3);
        noComplexEvents_1_0_2_2.set(ComplexEventPriceTimeType_156);
        ComplexEvents_NoComplexEvents_156.insert(ComplexEventPriceTimeType_156.getString());
        FIX::ComplexEventType ComplexEventType_156(2);
        noComplexEvents_1_0_2_2.set(ComplexEventType_156);
        ComplexEvents_NoComplexEvents_156.insert(ComplexEventType_156.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_156;
        ComplexOptPayoutAmount_156.setString("16576621");
        noComplexEvents_1_0_2_2.set(ComplexOptPayoutAmount_156);
        ComplexEvents_NoComplexEvents_156.insert(ComplexOptPayoutAmount_156.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_156);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_329;
          FIX::ComplexEventEndDate ComplexEventEndDate_329(FIX::UTCTIMESTAMP(0, 18, 21, 1, 32012));
          noComplexEventDates_1_0_2_3_0.set(ComplexEventEndDate_329);
          ComplexEventDates_NoComplexEventDates_329.insert(ComplexEventEndDate_329.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_329(FIX::UTCTIMESTAMP(21, 41, 17, 23, 102010));
          noComplexEventDates_1_0_2_3_0.set(ComplexEventStartDate_329);
          ComplexEventDates_NoComplexEventDates_329.insert(ComplexEventStartDate_329.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_329);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_652;
            FIX::ComplexEventEndTime ComplexEventEndTime_652(FIX::UTCTIMEONLY(9, 38, 8));
            noComplexEventTimes_1_0_2_0_4_0.set(ComplexEventEndTime_652);
            ComplexEventTimes_NoComplexEventTimes_652.insert(ComplexEventEndTime_652.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_652(FIX::UTCTIMEONLY(8, 18, 59));
            noComplexEventTimes_1_0_2_0_4_0.set(ComplexEventStartTime_652);
            ComplexEventTimes_NoComplexEventTimes_652.insert(ComplexEventStartTime_652.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_652);

            noComplexEventDates_1_0_2_3_0.addGroup(noComplexEventTimes_1_0_2_0_4_0);
          }
          noComplexEvents_1_0_2_2.addGroup(noComplexEventDates_1_0_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_330;
          FIX::ComplexEventEndDate ComplexEventEndDate_330(FIX::UTCTIMESTAMP(18, 43, 47, 13, 12015));
          noComplexEventDates_1_0_2_3_1.set(ComplexEventEndDate_330);
          ComplexEventDates_NoComplexEventDates_330.insert(ComplexEventEndDate_330.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_330(FIX::UTCTIMESTAMP(7, 31, 21, 21, 12005));
          noComplexEventDates_1_0_2_3_1.set(ComplexEventStartDate_330);
          ComplexEventDates_NoComplexEventDates_330.insert(ComplexEventStartDate_330.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_330);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_653;
            FIX::ComplexEventEndTime ComplexEventEndTime_653(FIX::UTCTIMEONLY(12, 38, 27));
            noComplexEventTimes_1_0_2_1_4_0.set(ComplexEventEndTime_653);
            ComplexEventTimes_NoComplexEventTimes_653.insert(ComplexEventEndTime_653.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_653(FIX::UTCTIMEONLY(12, 47, 25));
            noComplexEventTimes_1_0_2_1_4_0.set(ComplexEventStartTime_653);
            ComplexEventTimes_NoComplexEventTimes_653.insert(ComplexEventStartTime_653.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_653);

            noComplexEventDates_1_0_2_3_1.addGroup(noComplexEventTimes_1_0_2_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_654;
            FIX::ComplexEventEndTime ComplexEventEndTime_654(FIX::UTCTIMEONLY(0, 56, 23));
            noComplexEventTimes_1_0_2_1_4_1.set(ComplexEventEndTime_654);
            ComplexEventTimes_NoComplexEventTimes_654.insert(ComplexEventEndTime_654.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_654(FIX::UTCTIMEONLY(20, 42, 52));
            noComplexEventTimes_1_0_2_1_4_1.set(ComplexEventStartTime_654);
            ComplexEventTimes_NoComplexEventTimes_654.insert(ComplexEventStartTime_654.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_654);

            noComplexEventDates_1_0_2_3_1.addGroup(noComplexEventTimes_1_0_2_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_655;
            FIX::ComplexEventEndTime ComplexEventEndTime_655(FIX::UTCTIMEONLY(4, 27, 8));
            noComplexEventTimes_1_0_2_1_4_2.set(ComplexEventEndTime_655);
            ComplexEventTimes_NoComplexEventTimes_655.insert(ComplexEventEndTime_655.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_655(FIX::UTCTIMEONLY(4, 0, 53));
            noComplexEventTimes_1_0_2_1_4_2.set(ComplexEventStartTime_655);
            ComplexEventTimes_NoComplexEventTimes_655.insert(ComplexEventStartTime_655.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_655);

            noComplexEventDates_1_0_2_3_1.addGroup(noComplexEventTimes_1_0_2_1_4_2);
          }
          noComplexEvents_1_0_2_2.addGroup(noComplexEventDates_1_0_2_3_1);
        }
        noRelatedSym_1_1_0.addGroup(noComplexEvents_1_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_160;
        FIX::EventDate EventDate_160("LOCALMKTDATE_1927968991");
        noEvents_1_0_2_0.set(EventDate_160);
        EvntGrp_NoEvents_160.insert(EventDate_160.getString());
        FIX::EventPx EventPx_160;
        EventPx_160.setString("12315081");
        noEvents_1_0_2_0.set(EventPx_160);
        EvntGrp_NoEvents_160.insert(EventPx_160.getString());
        FIX::EventText EventText_160("STRING_361926116");
        noEvents_1_0_2_0.set(EventText_160);
        EvntGrp_NoEvents_160.insert(EventText_160.getString());
        FIX::EventTime EventTime_160(FIX::UTCTIMESTAMP(5, 2, 33, 1, 92004));
        noEvents_1_0_2_0.set(EventTime_160);
        EvntGrp_NoEvents_160.insert(EventTime_160.getString());
        FIX::EventType EventType_160(9);
        noEvents_1_0_2_0.set(EventType_160);
        EvntGrp_NoEvents_160.insert(EventType_160.getString());
        all_values.push_back(EvntGrp_NoEvents_160);

        noRelatedSym_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_161;
        FIX::EventDate EventDate_161("LOCALMKTDATE_1356609716");
        noEvents_1_0_2_1.set(EventDate_161);
        EvntGrp_NoEvents_161.insert(EventDate_161.getString());
        FIX::EventPx EventPx_161;
        EventPx_161.setString("1296658");
        noEvents_1_0_2_1.set(EventPx_161);
        EvntGrp_NoEvents_161.insert(EventPx_161.getString());
        FIX::EventText EventText_161("STRING_1778255413");
        noEvents_1_0_2_1.set(EventText_161);
        EvntGrp_NoEvents_161.insert(EventText_161.getString());
        FIX::EventTime EventTime_161(FIX::UTCTIMESTAMP(20, 1, 35, 21, 112015));
        noEvents_1_0_2_1.set(EventTime_161);
        EvntGrp_NoEvents_161.insert(EventTime_161.getString());
        FIX::EventType EventType_161(3);
        noEvents_1_0_2_1.set(EventType_161);
        EvntGrp_NoEvents_161.insert(EventType_161.getString());
        all_values.push_back(EvntGrp_NoEvents_161);

        noRelatedSym_1_1_0.addGroup(noEvents_1_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_162;
        FIX::EventDate EventDate_162("LOCALMKTDATE_1519020343");
        noEvents_1_0_2_2.set(EventDate_162);
        EvntGrp_NoEvents_162.insert(EventDate_162.getString());
        FIX::EventPx EventPx_162;
        EventPx_162.setString("8731564");
        noEvents_1_0_2_2.set(EventPx_162);
        EvntGrp_NoEvents_162.insert(EventPx_162.getString());
        FIX::EventText EventText_162("STRING_1191729489");
        noEvents_1_0_2_2.set(EventText_162);
        EvntGrp_NoEvents_162.insert(EventText_162.getString());
        FIX::EventTime EventTime_162(FIX::UTCTIMESTAMP(3, 5, 35, 16, 62011));
        noEvents_1_0_2_2.set(EventTime_162);
        EvntGrp_NoEvents_162.insert(EventTime_162.getString());
        FIX::EventType EventType_162(7);
        noEvents_1_0_2_2.set(EventType_162);
        EvntGrp_NoEvents_162.insert(EventType_162.getString());
        all_values.push_back(EvntGrp_NoEvents_162);

        noRelatedSym_1_1_0.addGroup(noEvents_1_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_161;
        FIX::InstrumentPartyID InstrumentPartyID_161("STRING_489655103");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_161);
        InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyID_161.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_161('2');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_161);
        InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyIDSource_161.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_161(1919832499);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_161);
        InstrumentParties_NoInstrumentParties_161.insert(InstrumentPartyRole_161.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_161);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320;
          FIX::InstrumentPartySubID InstrumentPartySubID_320("STRING_1741060636");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_320);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320.insert(InstrumentPartySubID_320.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_320(1979498572);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_320);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320.insert(InstrumentPartySubIDType_320.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_320);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321;
          FIX::InstrumentPartySubID InstrumentPartySubID_321("STRING_512753201");
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubID_321);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321.insert(InstrumentPartySubID_321.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_321(273984356);
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubIDType_321);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321.insert(InstrumentPartySubIDType_321.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_321);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322;
          FIX::InstrumentPartySubID InstrumentPartySubID_322("STRING_1188624640");
          noInstrumentPartySubIDs_1_0_0_3_2.set(InstrumentPartySubID_322);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322.insert(InstrumentPartySubID_322.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_322(642419052);
          noInstrumentPartySubIDs_1_0_0_3_2.set(InstrumentPartySubIDType_322);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322.insert(InstrumentPartySubIDType_322.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_322);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_2);
        }
        noRelatedSym_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_162;
        FIX::InstrumentPartyID InstrumentPartyID_162("STRING_2052239770");
        noInstrumentParties_1_0_2_1.set(InstrumentPartyID_162);
        InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyID_162.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_162('3');
        noInstrumentParties_1_0_2_1.set(InstrumentPartyIDSource_162);
        InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyIDSource_162.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_162(830294048);
        noInstrumentParties_1_0_2_1.set(InstrumentPartyRole_162);
        InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyRole_162.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_162);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323;
          FIX::InstrumentPartySubID InstrumentPartySubID_323("STRING_2041860739");
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubID_323);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323.insert(InstrumentPartySubID_323.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_323(75739078);
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubIDType_323);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323.insert(InstrumentPartySubIDType_323.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_323);

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_0);
        }
        noRelatedSym_1_1_0.addGroup(noInstrumentParties_1_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_173;
        FIX::SecurityAltID SecurityAltID_173("STRING_307246400");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_173);
        SecAltIDGrp_NoSecurityAltID_173.insert(SecurityAltID_173.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_173("STRING_490986940");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_173);
        SecAltIDGrp_NoSecurityAltID_173.insert(SecurityAltIDSource_173.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_173);

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_174;
        FIX::SecurityAltID SecurityAltID_174("STRING_623111400");
        noSecurityAltID_1_0_2_1.set(SecurityAltID_174);
        SecAltIDGrp_NoSecurityAltID_174.insert(SecurityAltID_174.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_174("STRING_1180402857");
        noSecurityAltID_1_0_2_1.set(SecurityAltIDSource_174);
        SecAltIDGrp_NoSecurityAltID_174.insert(SecurityAltIDSource_174.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_174);

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_166;
      FIX::SecurityXML SecurityXML_167("XMLDATA_1682716429");
      noRelatedSym_1_1_0.set(SecurityXML_167);
      FIX::SecurityXMLLen SecurityXMLLen_83(1476927824);
      noRelatedSym_1_1_0.set(SecurityXMLLen_83);
      FIX::SecurityXMLSchema SecurityXMLSchema_83("STRING_918899597");
      noRelatedSym_1_1_0.set(SecurityXMLSchema_83);
      SecurityXML_166.insert(SecurityXMLSchema_83.getString());
      all_values.push_back(SecurityXML_166);

      noAsgnReqs_0_1.addGroup(noRelatedSym_1_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_1_1_1;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_2;
      FIX::EncodedText EncodedText_92("DATA_1920791035");
      noRelatedSym_1_1_1.set(EncodedText_92);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(EncodedText_92.getString());
      FIX::EncodedTextLen EncodedTextLen_92(1925761339);
      noRelatedSym_1_1_1.set(EncodedTextLen_92);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(EncodedTextLen_92.getString());
      FIX::MDStreamID MDStreamID_6("STRING_940212989");
      noRelatedSym_1_1_1.set(MDStreamID_6);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(MDStreamID_6.getString());
      FIX::SettlType SettlType_31("STRING_4");
      noRelatedSym_1_1_1.set(SettlType_31);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(SettlType_31.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_2(0);
      noRelatedSym_1_1_1.set(StreamAsgnRejReason_2);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(StreamAsgnRejReason_2.getString());
      FIX::StreamAsgnType StreamAsgnType_2(1);
      noRelatedSym_1_1_1.set(StreamAsgnType_2);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(StreamAsgnType_2.getString());
      FIX::Text Text_92("STRING_1310602593");
      noRelatedSym_1_1_1.set(Text_92);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(Text_92.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_2);

      // Instrument
      multiset<string> Instrument_84;
      FIX::AttachmentPoint AttachmentPoint_84;
      AttachmentPoint_84.setString("16.530000");
      noRelatedSym_1_1_1.set(AttachmentPoint_84);
      Instrument_84.insert(AttachmentPoint_84.getString());
      FIX::CFICode CFICode_91("STRING_274984055");
      noRelatedSym_1_1_1.set(CFICode_91);
      Instrument_84.insert(CFICode_91.getString());
      FIX::CPProgram CPProgram_84(1);
      noRelatedSym_1_1_1.set(CPProgram_84);
      Instrument_84.insert(CPProgram_84.getString());
      FIX::CPRegType CPRegType_84("STRING_2072508330");
      noRelatedSym_1_1_1.set(CPRegType_84);
      Instrument_84.insert(CPRegType_84.getString());
      FIX::CapPrice CapPrice_84;
      CapPrice_84.setString("20160446");
      noRelatedSym_1_1_1.set(CapPrice_84);
      Instrument_84.insert(CapPrice_84.getString());
      FIX::ContractMultiplier ContractMultiplier_84;
      ContractMultiplier_84.setString("9149663");
      noRelatedSym_1_1_1.set(ContractMultiplier_84);
      Instrument_84.insert(ContractMultiplier_84.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_84(0);
      noRelatedSym_1_1_1.set(ContractMultiplierUnit_84);
      Instrument_84.insert(ContractMultiplierUnit_84.getString());
      FIX::ContractSettlMonth ContractSettlMonth_84("MONTHYEAR_142545400");
      noRelatedSym_1_1_1.set(ContractSettlMonth_84);
      Instrument_84.insert(ContractSettlMonth_84.getString());
      FIX::CountryOfIssue CountryOfIssue_84("COUNTRY_2103591009");
      noRelatedSym_1_1_1.set(CountryOfIssue_84);
      Instrument_84.insert(CountryOfIssue_84.getString());
      FIX::CouponPaymentDate CouponPaymentDate_84("LOCALMKTDATE_1080196935");
      noRelatedSym_1_1_1.set(CouponPaymentDate_84);
      Instrument_84.insert(CouponPaymentDate_84.getString());
      FIX::CouponRate CouponRate_84;
      CouponRate_84.setString("15.220000");
      noRelatedSym_1_1_1.set(CouponRate_84);
      Instrument_84.insert(CouponRate_84.getString());
      FIX::CreditRating CreditRating_84("STRING_308887665");
      noRelatedSym_1_1_1.set(CreditRating_84);
      Instrument_84.insert(CreditRating_84.getString());
      FIX::DatedDate DatedDate_84("LOCALMKTDATE_1910490984");
      noRelatedSym_1_1_1.set(DatedDate_84);
      Instrument_84.insert(DatedDate_84.getString());
      FIX::DetachmentPoint DetachmentPoint_84;
      DetachmentPoint_84.setString("30.860000");
      noRelatedSym_1_1_1.set(DetachmentPoint_84);
      Instrument_84.insert(DetachmentPoint_84.getString());
      FIX::EncodedIssuer EncodedIssuer_84("DATA_203264756");
      noRelatedSym_1_1_1.set(EncodedIssuer_84);
      Instrument_84.insert(EncodedIssuer_84.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_84(1986230062);
      noRelatedSym_1_1_1.set(EncodedIssuerLen_84);
      Instrument_84.insert(EncodedIssuerLen_84.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_84("DATA_1763667791");
      noRelatedSym_1_1_1.set(EncodedSecurityDesc_84);
      Instrument_84.insert(EncodedSecurityDesc_84.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_84(510511156);
      noRelatedSym_1_1_1.set(EncodedSecurityDescLen_84);
      Instrument_84.insert(EncodedSecurityDescLen_84.getString());
      FIX::ExerciseStyle ExerciseStyle_84(0);
      noRelatedSym_1_1_1.set(ExerciseStyle_84);
      Instrument_84.insert(ExerciseStyle_84.getString());
      FIX::Factor Factor_84;
      Factor_84.setString("2392955");
      noRelatedSym_1_1_1.set(Factor_84);
      Instrument_84.insert(Factor_84.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_84(true);
      noRelatedSym_1_1_1.set(FlexProductEligibilityIndicator_84);
      Instrument_84.insert(FlexProductEligibilityIndicator_84.getString());
      FIX::FlexibleIndicator FlexibleIndicator_84(false);
      noRelatedSym_1_1_1.set(FlexibleIndicator_84);
      Instrument_84.insert(FlexibleIndicator_84.getString());
      FIX::FloorPrice FloorPrice_84;
      FloorPrice_84.setString("17162233");
      noRelatedSym_1_1_1.set(FloorPrice_84);
      Instrument_84.insert(FloorPrice_84.getString());
      FIX::FlowScheduleType FlowScheduleType_84(3);
      noRelatedSym_1_1_1.set(FlowScheduleType_84);
      Instrument_84.insert(FlowScheduleType_84.getString());
      FIX::InstrRegistry InstrRegistry_84("STRING_1785757170");
      noRelatedSym_1_1_1.set(InstrRegistry_84);
      Instrument_84.insert(InstrRegistry_84.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_84('1');
      noRelatedSym_1_1_1.set(InstrmtAssignmentMethod_84);
      Instrument_84.insert(InstrmtAssignmentMethod_84.getString());
      FIX::InterestAccrualDate InterestAccrualDate_84("LOCALMKTDATE_1402542952");
      noRelatedSym_1_1_1.set(InterestAccrualDate_84);
      Instrument_84.insert(InterestAccrualDate_84.getString());
      FIX::IssueDate IssueDate_84("LOCALMKTDATE_1073007278");
      noRelatedSym_1_1_1.set(IssueDate_84);
      Instrument_84.insert(IssueDate_84.getString());
      FIX::Issuer Issuer_84("STRING_1502097610");
      noRelatedSym_1_1_1.set(Issuer_84);
      Instrument_84.insert(Issuer_84.getString());
      FIX::ListMethod ListMethod_84(0);
      noRelatedSym_1_1_1.set(ListMethod_84);
      Instrument_84.insert(ListMethod_84.getString());
      FIX::LocaleOfIssue LocaleOfIssue_84("STRING_236126224");
      noRelatedSym_1_1_1.set(LocaleOfIssue_84);
      Instrument_84.insert(LocaleOfIssue_84.getString());
      FIX::MaturityDate MaturityDate_84("LOCALMKTDATE_1999349263");
      noRelatedSym_1_1_1.set(MaturityDate_84);
      Instrument_84.insert(MaturityDate_84.getString());
      FIX::MaturityMonthYear MaturityMonthYear_84("MONTHYEAR_1723077916");
      noRelatedSym_1_1_1.set(MaturityMonthYear_84);
      Instrument_84.insert(MaturityMonthYear_84.getString());
      FIX::MaturityTime MaturityTime_84("TZTIMEONLY_1319077669");
      noRelatedSym_1_1_1.set(MaturityTime_84);
      Instrument_84.insert(MaturityTime_84.getString());
      FIX::MinPriceIncrement MinPriceIncrement_84;
      MinPriceIncrement_84.setString("19243739");
      noRelatedSym_1_1_1.set(MinPriceIncrement_84);
      Instrument_84.insert(MinPriceIncrement_84.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_84;
      MinPriceIncrementAmount_84.setString("15916389");
      noRelatedSym_1_1_1.set(MinPriceIncrementAmount_84);
      Instrument_84.insert(MinPriceIncrementAmount_84.getString());
      FIX::NTPositionLimit NTPositionLimit_84(86560390);
      noRelatedSym_1_1_1.set(NTPositionLimit_84);
      Instrument_84.insert(NTPositionLimit_84.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_84;
      NotionalPercentageOutstanding_84.setString("81.800000");
      noRelatedSym_1_1_1.set(NotionalPercentageOutstanding_84);
      Instrument_84.insert(NotionalPercentageOutstanding_84.getString());
      FIX::OptAttribute OptAttribute_84('1');
      noRelatedSym_1_1_1.set(OptAttribute_84);
      Instrument_84.insert(OptAttribute_84.getString());
      FIX::OptPayoutAmount OptPayoutAmount_84;
      OptPayoutAmount_84.setString("426677");
      noRelatedSym_1_1_1.set(OptPayoutAmount_84);
      Instrument_84.insert(OptPayoutAmount_84.getString());
      FIX::OptPayoutType OptPayoutType_84(2);
      noRelatedSym_1_1_1.set(OptPayoutType_84);
      Instrument_84.insert(OptPayoutType_84.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_84;
      OriginalNotionalPercentageOutstanding_84.setString("58.830000");
      noRelatedSym_1_1_1.set(OriginalNotionalPercentageOutstanding_84);
      Instrument_84.insert(OriginalNotionalPercentageOutstanding_84.getString());
      FIX::Pool Pool_84("STRING_351555417");
      noRelatedSym_1_1_1.set(Pool_84);
      Instrument_84.insert(Pool_84.getString());
      FIX::PositionLimit PositionLimit_84(1057872452);
      noRelatedSym_1_1_1.set(PositionLimit_84);
      Instrument_84.insert(PositionLimit_84.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_84("STRING_INX");
      noRelatedSym_1_1_1.set(PriceQuoteMethod_84);
      Instrument_84.insert(PriceQuoteMethod_84.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_84("STRING_554820173");
      noRelatedSym_1_1_1.set(PriceUnitOfMeasure_84);
      Instrument_84.insert(PriceUnitOfMeasure_84.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_84;
      PriceUnitOfMeasureQty_84.setString("8966188");
      noRelatedSym_1_1_1.set(PriceUnitOfMeasureQty_84);
      Instrument_84.insert(PriceUnitOfMeasureQty_84.getString());
      FIX::Product Product_94(11);
      noRelatedSym_1_1_1.set(Product_94);
      Instrument_84.insert(Product_94.getString());
      FIX::ProductComplex ProductComplex_84("STRING_1065331330");
      noRelatedSym_1_1_1.set(ProductComplex_84);
      Instrument_84.insert(ProductComplex_84.getString());
      FIX::PutOrCall PutOrCall_84(0);
      noRelatedSym_1_1_1.set(PutOrCall_84);
      Instrument_84.insert(PutOrCall_84.getString());
      FIX::RedemptionDate RedemptionDate_84("LOCALMKTDATE_1575008");
      noRelatedSym_1_1_1.set(RedemptionDate_84);
      Instrument_84.insert(RedemptionDate_84.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_84("STRING_608761696");
      noRelatedSym_1_1_1.set(RepoCollateralSecurityType_84);
      Instrument_84.insert(RepoCollateralSecurityType_84.getString());
      FIX::RepurchaseRate RepurchaseRate_84;
      RepurchaseRate_84.setString("83.550000");
      noRelatedSym_1_1_1.set(RepurchaseRate_84);
      Instrument_84.insert(RepurchaseRate_84.getString());
      FIX::RepurchaseTerm RepurchaseTerm_84(1717798376);
      noRelatedSym_1_1_1.set(RepurchaseTerm_84);
      Instrument_84.insert(RepurchaseTerm_84.getString());
      FIX::RestructuringType RestructuringType_84("STRING_XR");
      noRelatedSym_1_1_1.set(RestructuringType_84);
      Instrument_84.insert(RestructuringType_84.getString());
      FIX::SecurityDesc SecurityDesc_84("STRING_729591878");
      noRelatedSym_1_1_1.set(SecurityDesc_84);
      Instrument_84.insert(SecurityDesc_84.getString());
      FIX::SecurityExchange SecurityExchange_84("EXCHANGE_1064815788");
      noRelatedSym_1_1_1.set(SecurityExchange_84);
      Instrument_84.insert(SecurityExchange_84.getString());
      FIX::SecurityGroup SecurityGroup_84("STRING_326150963");
      noRelatedSym_1_1_1.set(SecurityGroup_84);
      Instrument_84.insert(SecurityGroup_84.getString());
      FIX::SecurityID SecurityID_84("STRING_1802599156");
      noRelatedSym_1_1_1.set(SecurityID_84);
      Instrument_84.insert(SecurityID_84.getString());
      FIX::SecurityIDSource SecurityIDSource_84("STRING_F");
      noRelatedSym_1_1_1.set(SecurityIDSource_84);
      Instrument_84.insert(SecurityIDSource_84.getString());
      FIX::SecurityStatus SecurityStatus_85("STRING_1");
      noRelatedSym_1_1_1.set(SecurityStatus_85);
      Instrument_84.insert(SecurityStatus_85.getString());
      FIX::SecuritySubType SecuritySubType_89("STRING_2038725380");
      noRelatedSym_1_1_1.set(SecuritySubType_89);
      Instrument_84.insert(SecuritySubType_89.getString());
      FIX::SecurityType SecurityType_94("STRING_SECPLEDGE");
      noRelatedSym_1_1_1.set(SecurityType_94);
      Instrument_84.insert(SecurityType_94.getString());
      FIX::Seniority Seniority_84("STRING_SD");
      noRelatedSym_1_1_1.set(Seniority_84);
      Instrument_84.insert(Seniority_84.getString());
      FIX::SettlMethod SettlMethod_84('P');
      noRelatedSym_1_1_1.set(SettlMethod_84);
      Instrument_84.insert(SettlMethod_84.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_84("STRING_48185663");
      noRelatedSym_1_1_1.set(SettleOnOpenFlag_84);
      Instrument_84.insert(SettleOnOpenFlag_84.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_84("STRING_793994404");
      noRelatedSym_1_1_1.set(StateOrProvinceOfIssue_84);
      Instrument_84.insert(StateOrProvinceOfIssue_84.getString());
      FIX::StrikeCurrency StrikeCurrency_84("CAN");
      noRelatedSym_1_1_1.set(StrikeCurrency_84);
      Instrument_84.insert(StrikeCurrency_84.getString());
      FIX::StrikeMultiplier StrikeMultiplier_84;
      StrikeMultiplier_84.setString("3806951");
      noRelatedSym_1_1_1.set(StrikeMultiplier_84);
      Instrument_84.insert(StrikeMultiplier_84.getString());
      FIX::StrikePrice StrikePrice_84;
      StrikePrice_84.setString("13395475");
      noRelatedSym_1_1_1.set(StrikePrice_84);
      Instrument_84.insert(StrikePrice_84.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_84(5);
      noRelatedSym_1_1_1.set(StrikePriceBoundaryMethod_84);
      Instrument_84.insert(StrikePriceBoundaryMethod_84.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_84;
      StrikePriceBoundaryPrecision_84.setString("73.510000");
      noRelatedSym_1_1_1.set(StrikePriceBoundaryPrecision_84);
      Instrument_84.insert(StrikePriceBoundaryPrecision_84.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_84(1);
      noRelatedSym_1_1_1.set(StrikePriceDeterminationMethod_84);
      Instrument_84.insert(StrikePriceDeterminationMethod_84.getString());
      FIX::StrikeValue StrikeValue_84;
      StrikeValue_84.setString("4681077");
      noRelatedSym_1_1_1.set(StrikeValue_84);
      Instrument_84.insert(StrikeValue_84.getString());
      FIX::Symbol Symbol_84("STRING_160792672");
      noRelatedSym_1_1_1.set(Symbol_84);
      Instrument_84.insert(Symbol_84.getString());
      FIX::SymbolSfx SymbolSfx_84("STRING_WI");
      noRelatedSym_1_1_1.set(SymbolSfx_84);
      Instrument_84.insert(SymbolSfx_84.getString());
      FIX::TimeUnit TimeUnit_84("STRING_H");
      noRelatedSym_1_1_1.set(TimeUnit_84);
      Instrument_84.insert(TimeUnit_84.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_84(2);
      noRelatedSym_1_1_1.set(UnderlyingPriceDeterminationMethod_84);
      Instrument_84.insert(UnderlyingPriceDeterminationMethod_84.getString());
      FIX::UnitOfMeasure UnitOfMeasure_84("STRING_Alw");
      noRelatedSym_1_1_1.set(UnitOfMeasure_84);
      Instrument_84.insert(UnitOfMeasure_84.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_84;
      UnitOfMeasureQty_84.setString("4435952");
      noRelatedSym_1_1_1.set(UnitOfMeasureQty_84);
      Instrument_84.insert(UnitOfMeasureQty_84.getString());
      FIX::ValuationMethod ValuationMethod_84("STRING_CDS");
      noRelatedSym_1_1_1.set(ValuationMethod_84);
      Instrument_84.insert(ValuationMethod_84.getString());
      all_values.push_back(Instrument_84);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_157;
        FIX::ComplexEventCondition ComplexEventCondition_157(2);
        noComplexEvents_1_1_2_0.set(ComplexEventCondition_157);
        ComplexEvents_NoComplexEvents_157.insert(ComplexEventCondition_157.getString());
        FIX::ComplexEventPrice ComplexEventPrice_157;
        ComplexEventPrice_157.setString("16424455");
        noComplexEvents_1_1_2_0.set(ComplexEventPrice_157);
        ComplexEvents_NoComplexEvents_157.insert(ComplexEventPrice_157.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_157(3);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryMethod_157);
        ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceBoundaryMethod_157.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_157;
        ComplexEventPriceBoundaryPrecision_157.setString("17.870000");
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryPrecision_157);
        ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceBoundaryPrecision_157.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_157(1);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceTimeType_157);
        ComplexEvents_NoComplexEvents_157.insert(ComplexEventPriceTimeType_157.getString());
        FIX::ComplexEventType ComplexEventType_157(9);
        noComplexEvents_1_1_2_0.set(ComplexEventType_157);
        ComplexEvents_NoComplexEvents_157.insert(ComplexEventType_157.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_157;
        ComplexOptPayoutAmount_157.setString("19196209");
        noComplexEvents_1_1_2_0.set(ComplexOptPayoutAmount_157);
        ComplexEvents_NoComplexEvents_157.insert(ComplexOptPayoutAmount_157.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_157);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_331;
          FIX::ComplexEventEndDate ComplexEventEndDate_331(FIX::UTCTIMESTAMP(12, 57, 34, 9, 92000));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventEndDate_331);
          ComplexEventDates_NoComplexEventDates_331.insert(ComplexEventEndDate_331.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_331(FIX::UTCTIMESTAMP(20, 6, 56, 19, 112002));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventStartDate_331);
          ComplexEventDates_NoComplexEventDates_331.insert(ComplexEventStartDate_331.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_331);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_656;
            FIX::ComplexEventEndTime ComplexEventEndTime_656(FIX::UTCTIMEONLY(1, 0, 47));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventEndTime_656);
            ComplexEventTimes_NoComplexEventTimes_656.insert(ComplexEventEndTime_656.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_656(FIX::UTCTIMEONLY(22, 53, 52));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventStartTime_656);
            ComplexEventTimes_NoComplexEventTimes_656.insert(ComplexEventStartTime_656.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_656);

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_657;
            FIX::ComplexEventEndTime ComplexEventEndTime_657(FIX::UTCTIMEONLY(23, 47, 58));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventEndTime_657);
            ComplexEventTimes_NoComplexEventTimes_657.insert(ComplexEventEndTime_657.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_657(FIX::UTCTIMEONLY(1, 13, 1));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventStartTime_657);
            ComplexEventTimes_NoComplexEventTimes_657.insert(ComplexEventStartTime_657.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_657);

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_1);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_332;
          FIX::ComplexEventEndDate ComplexEventEndDate_332(FIX::UTCTIMESTAMP(17, 50, 1, 11, 42011));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventEndDate_332);
          ComplexEventDates_NoComplexEventDates_332.insert(ComplexEventEndDate_332.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_332(FIX::UTCTIMESTAMP(23, 29, 32, 2, 82010));
          noComplexEventDates_1_1_0_3_1.set(ComplexEventStartDate_332);
          ComplexEventDates_NoComplexEventDates_332.insert(ComplexEventStartDate_332.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_332);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_658;
            FIX::ComplexEventEndTime ComplexEventEndTime_658(FIX::UTCTIMEONLY(5, 6, 49));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventEndTime_658);
            ComplexEventTimes_NoComplexEventTimes_658.insert(ComplexEventEndTime_658.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_658(FIX::UTCTIMEONLY(4, 42, 59));
            noComplexEventTimes_1_1_0_1_4_0.set(ComplexEventStartTime_658);
            ComplexEventTimes_NoComplexEventTimes_658.insert(ComplexEventStartTime_658.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_658);

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_659;
            FIX::ComplexEventEndTime ComplexEventEndTime_659(FIX::UTCTIMEONLY(5, 46, 9));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventEndTime_659);
            ComplexEventTimes_NoComplexEventTimes_659.insert(ComplexEventEndTime_659.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_659(FIX::UTCTIMEONLY(3, 22, 43));
            noComplexEventTimes_1_1_0_1_4_1.set(ComplexEventStartTime_659);
            ComplexEventTimes_NoComplexEventTimes_659.insert(ComplexEventStartTime_659.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_659);

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_660;
            FIX::ComplexEventEndTime ComplexEventEndTime_660(FIX::UTCTIMEONLY(4, 34, 11));
            noComplexEventTimes_1_1_0_1_4_2.set(ComplexEventEndTime_660);
            ComplexEventTimes_NoComplexEventTimes_660.insert(ComplexEventEndTime_660.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_660(FIX::UTCTIMEONLY(17, 34, 51));
            noComplexEventTimes_1_1_0_1_4_2.set(ComplexEventStartTime_660);
            ComplexEventTimes_NoComplexEventTimes_660.insert(ComplexEventStartTime_660.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_660);

            noComplexEventDates_1_1_0_3_1.addGroup(noComplexEventTimes_1_1_0_1_4_2);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_333;
          FIX::ComplexEventEndDate ComplexEventEndDate_333(FIX::UTCTIMESTAMP(19, 23, 2, 11, 42014));
          noComplexEventDates_1_1_0_3_2.set(ComplexEventEndDate_333);
          ComplexEventDates_NoComplexEventDates_333.insert(ComplexEventEndDate_333.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_333(FIX::UTCTIMESTAMP(0, 14, 6, 27, 112007));
          noComplexEventDates_1_1_0_3_2.set(ComplexEventStartDate_333);
          ComplexEventDates_NoComplexEventDates_333.insert(ComplexEventStartDate_333.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_333);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_661;
            FIX::ComplexEventEndTime ComplexEventEndTime_661(FIX::UTCTIMEONLY(10, 24, 54));
            noComplexEventTimes_1_1_0_2_4_0.set(ComplexEventEndTime_661);
            ComplexEventTimes_NoComplexEventTimes_661.insert(ComplexEventEndTime_661.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_661(FIX::UTCTIMEONLY(19, 8, 36));
            noComplexEventTimes_1_1_0_2_4_0.set(ComplexEventStartTime_661);
            ComplexEventTimes_NoComplexEventTimes_661.insert(ComplexEventStartTime_661.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_661);

            noComplexEventDates_1_1_0_3_2.addGroup(noComplexEventTimes_1_1_0_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_662;
            FIX::ComplexEventEndTime ComplexEventEndTime_662(FIX::UTCTIMEONLY(0, 2, 28));
            noComplexEventTimes_1_1_0_2_4_1.set(ComplexEventEndTime_662);
            ComplexEventTimes_NoComplexEventTimes_662.insert(ComplexEventEndTime_662.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_662(FIX::UTCTIMEONLY(7, 2, 2));
            noComplexEventTimes_1_1_0_2_4_1.set(ComplexEventStartTime_662);
            ComplexEventTimes_NoComplexEventTimes_662.insert(ComplexEventStartTime_662.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_662);

            noComplexEventDates_1_1_0_3_2.addGroup(noComplexEventTimes_1_1_0_2_4_1);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_2);
        }
        noRelatedSym_1_1_1.addGroup(noComplexEvents_1_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_158;
        FIX::ComplexEventCondition ComplexEventCondition_158(2);
        noComplexEvents_1_1_2_1.set(ComplexEventCondition_158);
        ComplexEvents_NoComplexEvents_158.insert(ComplexEventCondition_158.getString());
        FIX::ComplexEventPrice ComplexEventPrice_158;
        ComplexEventPrice_158.setString("52223");
        noComplexEvents_1_1_2_1.set(ComplexEventPrice_158);
        ComplexEvents_NoComplexEvents_158.insert(ComplexEventPrice_158.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_158(1);
        noComplexEvents_1_1_2_1.set(ComplexEventPriceBoundaryMethod_158);
        ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceBoundaryMethod_158.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_158;
        ComplexEventPriceBoundaryPrecision_158.setString("14.340000");
        noComplexEvents_1_1_2_1.set(ComplexEventPriceBoundaryPrecision_158);
        ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceBoundaryPrecision_158.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_158(2);
        noComplexEvents_1_1_2_1.set(ComplexEventPriceTimeType_158);
        ComplexEvents_NoComplexEvents_158.insert(ComplexEventPriceTimeType_158.getString());
        FIX::ComplexEventType ComplexEventType_158(6);
        noComplexEvents_1_1_2_1.set(ComplexEventType_158);
        ComplexEvents_NoComplexEvents_158.insert(ComplexEventType_158.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_158;
        ComplexOptPayoutAmount_158.setString("16332549");
        noComplexEvents_1_1_2_1.set(ComplexOptPayoutAmount_158);
        ComplexEvents_NoComplexEvents_158.insert(ComplexOptPayoutAmount_158.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_158);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_334;
          FIX::ComplexEventEndDate ComplexEventEndDate_334(FIX::UTCTIMESTAMP(0, 28, 48, 6, 102008));
          noComplexEventDates_1_1_1_3_0.set(ComplexEventEndDate_334);
          ComplexEventDates_NoComplexEventDates_334.insert(ComplexEventEndDate_334.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_334(FIX::UTCTIMESTAMP(23, 50, 45, 24, 22017));
          noComplexEventDates_1_1_1_3_0.set(ComplexEventStartDate_334);
          ComplexEventDates_NoComplexEventDates_334.insert(ComplexEventStartDate_334.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_334);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_663;
            FIX::ComplexEventEndTime ComplexEventEndTime_663(FIX::UTCTIMEONLY(10, 27, 34));
            noComplexEventTimes_1_1_1_0_4_0.set(ComplexEventEndTime_663);
            ComplexEventTimes_NoComplexEventTimes_663.insert(ComplexEventEndTime_663.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_663(FIX::UTCTIMEONLY(3, 36, 4));
            noComplexEventTimes_1_1_1_0_4_0.set(ComplexEventStartTime_663);
            ComplexEventTimes_NoComplexEventTimes_663.insert(ComplexEventStartTime_663.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_663);

            noComplexEventDates_1_1_1_3_0.addGroup(noComplexEventTimes_1_1_1_0_4_0);
          }
          noComplexEvents_1_1_2_1.addGroup(noComplexEventDates_1_1_1_3_0);
        }
        noRelatedSym_1_1_1.addGroup(noComplexEvents_1_1_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_163;
        FIX::EventDate EventDate_163("LOCALMKTDATE_1965303265");
        noEvents_1_1_2_0.set(EventDate_163);
        EvntGrp_NoEvents_163.insert(EventDate_163.getString());
        FIX::EventPx EventPx_163;
        EventPx_163.setString("16445741");
        noEvents_1_1_2_0.set(EventPx_163);
        EvntGrp_NoEvents_163.insert(EventPx_163.getString());
        FIX::EventText EventText_163("STRING_2053062236");
        noEvents_1_1_2_0.set(EventText_163);
        EvntGrp_NoEvents_163.insert(EventText_163.getString());
        FIX::EventTime EventTime_163(FIX::UTCTIMESTAMP(6, 30, 43, 23, 112003));
        noEvents_1_1_2_0.set(EventTime_163);
        EvntGrp_NoEvents_163.insert(EventTime_163.getString());
        FIX::EventType EventType_163(4);
        noEvents_1_1_2_0.set(EventType_163);
        EvntGrp_NoEvents_163.insert(EventType_163.getString());
        all_values.push_back(EvntGrp_NoEvents_163);

        noRelatedSym_1_1_1.addGroup(noEvents_1_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_164;
        FIX::EventDate EventDate_164("LOCALMKTDATE_301315584");
        noEvents_1_1_2_1.set(EventDate_164);
        EvntGrp_NoEvents_164.insert(EventDate_164.getString());
        FIX::EventPx EventPx_164;
        EventPx_164.setString("20537623");
        noEvents_1_1_2_1.set(EventPx_164);
        EvntGrp_NoEvents_164.insert(EventPx_164.getString());
        FIX::EventText EventText_164("STRING_1803919849");
        noEvents_1_1_2_1.set(EventText_164);
        EvntGrp_NoEvents_164.insert(EventText_164.getString());
        FIX::EventTime EventTime_164(FIX::UTCTIMESTAMP(4, 31, 0, 0, 92000));
        noEvents_1_1_2_1.set(EventTime_164);
        EvntGrp_NoEvents_164.insert(EventTime_164.getString());
        FIX::EventType EventType_164(18);
        noEvents_1_1_2_1.set(EventType_164);
        EvntGrp_NoEvents_164.insert(EventType_164.getString());
        all_values.push_back(EvntGrp_NoEvents_164);

        noRelatedSym_1_1_1.addGroup(noEvents_1_1_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_163;
        FIX::InstrumentPartyID InstrumentPartyID_163("STRING_1737668444");
        noInstrumentParties_1_1_2_0.set(InstrumentPartyID_163);
        InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyID_163.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_163('1');
        noInstrumentParties_1_1_2_0.set(InstrumentPartyIDSource_163);
        InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyIDSource_163.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_163(1938000420);
        noInstrumentParties_1_1_2_0.set(InstrumentPartyRole_163);
        InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyRole_163.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_163);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324;
          FIX::InstrumentPartySubID InstrumentPartySubID_324("STRING_753152628");
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubID_324);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324.insert(InstrumentPartySubID_324.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_324(1750597648);
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubIDType_324);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324.insert(InstrumentPartySubIDType_324.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_324);

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_0);
        }
        noRelatedSym_1_1_1.addGroup(noInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_164;
        FIX::InstrumentPartyID InstrumentPartyID_164("STRING_1142974009");
        noInstrumentParties_1_1_2_1.set(InstrumentPartyID_164);
        InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyID_164.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_164('1');
        noInstrumentParties_1_1_2_1.set(InstrumentPartyIDSource_164);
        InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyIDSource_164.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_164(1568417265);
        noInstrumentParties_1_1_2_1.set(InstrumentPartyRole_164);
        InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyRole_164.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_164);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325;
          FIX::InstrumentPartySubID InstrumentPartySubID_325("STRING_1892302019");
          noInstrumentPartySubIDs_1_1_1_3_0.set(InstrumentPartySubID_325);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325.insert(InstrumentPartySubID_325.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_325(3821519);
          noInstrumentPartySubIDs_1_1_1_3_0.set(InstrumentPartySubIDType_325);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325.insert(InstrumentPartySubIDType_325.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_325);

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326;
          FIX::InstrumentPartySubID InstrumentPartySubID_326("STRING_1669124393");
          noInstrumentPartySubIDs_1_1_1_3_1.set(InstrumentPartySubID_326);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326.insert(InstrumentPartySubID_326.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_326(1283651901);
          noInstrumentPartySubIDs_1_1_1_3_1.set(InstrumentPartySubIDType_326);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326.insert(InstrumentPartySubIDType_326.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_326);

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327;
          FIX::InstrumentPartySubID InstrumentPartySubID_327("STRING_1447985143");
          noInstrumentPartySubIDs_1_1_1_3_2.set(InstrumentPartySubID_327);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327.insert(InstrumentPartySubID_327.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_327(1904663188);
          noInstrumentPartySubIDs_1_1_1_3_2.set(InstrumentPartySubIDType_327);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327.insert(InstrumentPartySubIDType_327.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_327);

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_2);
        }
        noRelatedSym_1_1_1.addGroup(noInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_165;
        FIX::InstrumentPartyID InstrumentPartyID_165("STRING_1647380672");
        noInstrumentParties_1_1_2_2.set(InstrumentPartyID_165);
        InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyID_165.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_165('1');
        noInstrumentParties_1_1_2_2.set(InstrumentPartyIDSource_165);
        InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyIDSource_165.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_165(1105783963);
        noInstrumentParties_1_1_2_2.set(InstrumentPartyRole_165);
        InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyRole_165.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_165);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328;
          FIX::InstrumentPartySubID InstrumentPartySubID_328("STRING_2069448291");
          noInstrumentPartySubIDs_1_1_2_3_0.set(InstrumentPartySubID_328);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328.insert(InstrumentPartySubID_328.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_328(762220164);
          noInstrumentPartySubIDs_1_1_2_3_0.set(InstrumentPartySubIDType_328);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328.insert(InstrumentPartySubIDType_328.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_328);

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329;
          FIX::InstrumentPartySubID InstrumentPartySubID_329("STRING_1267044012");
          noInstrumentPartySubIDs_1_1_2_3_1.set(InstrumentPartySubID_329);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329.insert(InstrumentPartySubID_329.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_329(994007999);
          noInstrumentPartySubIDs_1_1_2_3_1.set(InstrumentPartySubIDType_329);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329.insert(InstrumentPartySubIDType_329.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330;
          FIX::InstrumentPartySubID InstrumentPartySubID_330("STRING_141545807");
          noInstrumentPartySubIDs_1_1_2_3_2.set(InstrumentPartySubID_330);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330.insert(InstrumentPartySubID_330.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_330(1548765612);
          noInstrumentPartySubIDs_1_1_2_3_2.set(InstrumentPartySubIDType_330);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330.insert(InstrumentPartySubIDType_330.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);

          noInstrumentParties_1_1_2_2.addGroup(noInstrumentPartySubIDs_1_1_2_3_2);
        }
        noRelatedSym_1_1_1.addGroup(noInstrumentParties_1_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_175;
        FIX::SecurityAltID SecurityAltID_175("STRING_1948611727");
        noSecurityAltID_1_1_2_0.set(SecurityAltID_175);
        SecAltIDGrp_NoSecurityAltID_175.insert(SecurityAltID_175.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_175("STRING_1541960638");
        noSecurityAltID_1_1_2_0.set(SecurityAltIDSource_175);
        SecAltIDGrp_NoSecurityAltID_175.insert(SecurityAltIDSource_175.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_175);

        noRelatedSym_1_1_1.addGroup(noSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_176;
        FIX::SecurityAltID SecurityAltID_176("STRING_198287381");
        noSecurityAltID_1_1_2_1.set(SecurityAltID_176);
        SecAltIDGrp_NoSecurityAltID_176.insert(SecurityAltID_176.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_176("STRING_1454165305");
        noSecurityAltID_1_1_2_1.set(SecurityAltIDSource_176);
        SecAltIDGrp_NoSecurityAltID_176.insert(SecurityAltIDSource_176.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_176);

        noRelatedSym_1_1_1.addGroup(noSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_177;
        FIX::SecurityAltID SecurityAltID_177("STRING_1132145434");
        noSecurityAltID_1_1_2_2.set(SecurityAltID_177);
        SecAltIDGrp_NoSecurityAltID_177.insert(SecurityAltID_177.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_177("STRING_1886796526");
        noSecurityAltID_1_1_2_2.set(SecurityAltIDSource_177);
        SecAltIDGrp_NoSecurityAltID_177.insert(SecurityAltIDSource_177.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_177);

        noRelatedSym_1_1_1.addGroup(noSecurityAltID_1_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_168;
      FIX::SecurityXML SecurityXML_169("XMLDATA_1244682077");
      noRelatedSym_1_1_1.set(SecurityXML_169);
      FIX::SecurityXMLLen SecurityXMLLen_84(109159452);
      noRelatedSym_1_1_1.set(SecurityXMLLen_84);
      FIX::SecurityXMLSchema SecurityXMLSchema_84("STRING_492465506");
      noRelatedSym_1_1_1.set(SecurityXMLSchema_84);
      SecurityXML_168.insert(SecurityXMLSchema_84.getString());
      all_values.push_back(SecurityXML_168);

      noAsgnReqs_0_1.addGroup(noRelatedSym_1_1_1);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_1_1_2;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_3;
      FIX::EncodedText EncodedText_93("DATA_847796077");
      noRelatedSym_1_1_2.set(EncodedText_93);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(EncodedText_93.getString());
      FIX::EncodedTextLen EncodedTextLen_93(1252133461);
      noRelatedSym_1_1_2.set(EncodedTextLen_93);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(EncodedTextLen_93.getString());
      FIX::MDStreamID MDStreamID_7("STRING_331705288");
      noRelatedSym_1_1_2.set(MDStreamID_7);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(MDStreamID_7.getString());
      FIX::SettlType SettlType_32("STRING_2");
      noRelatedSym_1_1_2.set(SettlType_32);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(SettlType_32.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_3(2);
      noRelatedSym_1_1_2.set(StreamAsgnRejReason_3);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(StreamAsgnRejReason_3.getString());
      FIX::StreamAsgnType StreamAsgnType_3(2);
      noRelatedSym_1_1_2.set(StreamAsgnType_3);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(StreamAsgnType_3.getString());
      FIX::Text Text_93("STRING_272551214");
      noRelatedSym_1_1_2.set(Text_93);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(Text_93.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_3);

      // Instrument
      multiset<string> Instrument_85;
      FIX::AttachmentPoint AttachmentPoint_85;
      AttachmentPoint_85.setString("87.370000");
      noRelatedSym_1_1_2.set(AttachmentPoint_85);
      Instrument_85.insert(AttachmentPoint_85.getString());
      FIX::CFICode CFICode_92("STRING_1360175561");
      noRelatedSym_1_1_2.set(CFICode_92);
      Instrument_85.insert(CFICode_92.getString());
      FIX::CPProgram CPProgram_85(1);
      noRelatedSym_1_1_2.set(CPProgram_85);
      Instrument_85.insert(CPProgram_85.getString());
      FIX::CPRegType CPRegType_85("STRING_1171018277");
      noRelatedSym_1_1_2.set(CPRegType_85);
      Instrument_85.insert(CPRegType_85.getString());
      FIX::CapPrice CapPrice_85;
      CapPrice_85.setString("8600725");
      noRelatedSym_1_1_2.set(CapPrice_85);
      Instrument_85.insert(CapPrice_85.getString());
      FIX::ContractMultiplier ContractMultiplier_85;
      ContractMultiplier_85.setString("17362223");
      noRelatedSym_1_1_2.set(ContractMultiplier_85);
      Instrument_85.insert(ContractMultiplier_85.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_85(1);
      noRelatedSym_1_1_2.set(ContractMultiplierUnit_85);
      Instrument_85.insert(ContractMultiplierUnit_85.getString());
      FIX::ContractSettlMonth ContractSettlMonth_85("MONTHYEAR_661285193");
      noRelatedSym_1_1_2.set(ContractSettlMonth_85);
      Instrument_85.insert(ContractSettlMonth_85.getString());
      FIX::CountryOfIssue CountryOfIssue_85("COUNTRY_1658186958");
      noRelatedSym_1_1_2.set(CountryOfIssue_85);
      Instrument_85.insert(CountryOfIssue_85.getString());
      FIX::CouponPaymentDate CouponPaymentDate_85("LOCALMKTDATE_891538756");
      noRelatedSym_1_1_2.set(CouponPaymentDate_85);
      Instrument_85.insert(CouponPaymentDate_85.getString());
      FIX::CouponRate CouponRate_85;
      CouponRate_85.setString("92.050000");
      noRelatedSym_1_1_2.set(CouponRate_85);
      Instrument_85.insert(CouponRate_85.getString());
      FIX::CreditRating CreditRating_85("STRING_504711309");
      noRelatedSym_1_1_2.set(CreditRating_85);
      Instrument_85.insert(CreditRating_85.getString());
      FIX::DatedDate DatedDate_85("LOCALMKTDATE_1033084563");
      noRelatedSym_1_1_2.set(DatedDate_85);
      Instrument_85.insert(DatedDate_85.getString());
      FIX::DetachmentPoint DetachmentPoint_85;
      DetachmentPoint_85.setString("11.700000");
      noRelatedSym_1_1_2.set(DetachmentPoint_85);
      Instrument_85.insert(DetachmentPoint_85.getString());
      FIX::EncodedIssuer EncodedIssuer_85("DATA_279906733");
      noRelatedSym_1_1_2.set(EncodedIssuer_85);
      Instrument_85.insert(EncodedIssuer_85.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_85(834212642);
      noRelatedSym_1_1_2.set(EncodedIssuerLen_85);
      Instrument_85.insert(EncodedIssuerLen_85.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_85("DATA_724088160");
      noRelatedSym_1_1_2.set(EncodedSecurityDesc_85);
      Instrument_85.insert(EncodedSecurityDesc_85.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_85(478194114);
      noRelatedSym_1_1_2.set(EncodedSecurityDescLen_85);
      Instrument_85.insert(EncodedSecurityDescLen_85.getString());
      FIX::ExerciseStyle ExerciseStyle_85(1);
      noRelatedSym_1_1_2.set(ExerciseStyle_85);
      Instrument_85.insert(ExerciseStyle_85.getString());
      FIX::Factor Factor_85;
      Factor_85.setString("18562335");
      noRelatedSym_1_1_2.set(Factor_85);
      Instrument_85.insert(Factor_85.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_85(true);
      noRelatedSym_1_1_2.set(FlexProductEligibilityIndicator_85);
      Instrument_85.insert(FlexProductEligibilityIndicator_85.getString());
      FIX::FlexibleIndicator FlexibleIndicator_85(true);
      noRelatedSym_1_1_2.set(FlexibleIndicator_85);
      Instrument_85.insert(FlexibleIndicator_85.getString());
      FIX::FloorPrice FloorPrice_85;
      FloorPrice_85.setString("19653930");
      noRelatedSym_1_1_2.set(FloorPrice_85);
      Instrument_85.insert(FloorPrice_85.getString());
      FIX::FlowScheduleType FlowScheduleType_85(3);
      noRelatedSym_1_1_2.set(FlowScheduleType_85);
      Instrument_85.insert(FlowScheduleType_85.getString());
      FIX::InstrRegistry InstrRegistry_85("STRING_85888805");
      noRelatedSym_1_1_2.set(InstrRegistry_85);
      Instrument_85.insert(InstrRegistry_85.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_85('1');
      noRelatedSym_1_1_2.set(InstrmtAssignmentMethod_85);
      Instrument_85.insert(InstrmtAssignmentMethod_85.getString());
      FIX::InterestAccrualDate InterestAccrualDate_85("LOCALMKTDATE_1041677786");
      noRelatedSym_1_1_2.set(InterestAccrualDate_85);
      Instrument_85.insert(InterestAccrualDate_85.getString());
      FIX::IssueDate IssueDate_85("LOCALMKTDATE_354618500");
      noRelatedSym_1_1_2.set(IssueDate_85);
      Instrument_85.insert(IssueDate_85.getString());
      FIX::Issuer Issuer_85("STRING_814757205");
      noRelatedSym_1_1_2.set(Issuer_85);
      Instrument_85.insert(Issuer_85.getString());
      FIX::ListMethod ListMethod_85(0);
      noRelatedSym_1_1_2.set(ListMethod_85);
      Instrument_85.insert(ListMethod_85.getString());
      FIX::LocaleOfIssue LocaleOfIssue_85("STRING_627169714");
      noRelatedSym_1_1_2.set(LocaleOfIssue_85);
      Instrument_85.insert(LocaleOfIssue_85.getString());
      FIX::MaturityDate MaturityDate_85("LOCALMKTDATE_81112294");
      noRelatedSym_1_1_2.set(MaturityDate_85);
      Instrument_85.insert(MaturityDate_85.getString());
      FIX::MaturityMonthYear MaturityMonthYear_85("MONTHYEAR_330893359");
      noRelatedSym_1_1_2.set(MaturityMonthYear_85);
      Instrument_85.insert(MaturityMonthYear_85.getString());
      FIX::MaturityTime MaturityTime_85("TZTIMEONLY_200222423");
      noRelatedSym_1_1_2.set(MaturityTime_85);
      Instrument_85.insert(MaturityTime_85.getString());
      FIX::MinPriceIncrement MinPriceIncrement_85;
      MinPriceIncrement_85.setString("12521305");
      noRelatedSym_1_1_2.set(MinPriceIncrement_85);
      Instrument_85.insert(MinPriceIncrement_85.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_85;
      MinPriceIncrementAmount_85.setString("11909659");
      noRelatedSym_1_1_2.set(MinPriceIncrementAmount_85);
      Instrument_85.insert(MinPriceIncrementAmount_85.getString());
      FIX::NTPositionLimit NTPositionLimit_85(1936444738);
      noRelatedSym_1_1_2.set(NTPositionLimit_85);
      Instrument_85.insert(NTPositionLimit_85.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_85;
      NotionalPercentageOutstanding_85.setString("91.640000");
      noRelatedSym_1_1_2.set(NotionalPercentageOutstanding_85);
      Instrument_85.insert(NotionalPercentageOutstanding_85.getString());
      FIX::OptAttribute OptAttribute_85('1');
      noRelatedSym_1_1_2.set(OptAttribute_85);
      Instrument_85.insert(OptAttribute_85.getString());
      FIX::OptPayoutAmount OptPayoutAmount_85;
      OptPayoutAmount_85.setString("14471480");
      noRelatedSym_1_1_2.set(OptPayoutAmount_85);
      Instrument_85.insert(OptPayoutAmount_85.getString());
      FIX::OptPayoutType OptPayoutType_85(3);
      noRelatedSym_1_1_2.set(OptPayoutType_85);
      Instrument_85.insert(OptPayoutType_85.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_85;
      OriginalNotionalPercentageOutstanding_85.setString("66.950000");
      noRelatedSym_1_1_2.set(OriginalNotionalPercentageOutstanding_85);
      Instrument_85.insert(OriginalNotionalPercentageOutstanding_85.getString());
      FIX::Pool Pool_85("STRING_1951859358");
      noRelatedSym_1_1_2.set(Pool_85);
      Instrument_85.insert(Pool_85.getString());
      FIX::PositionLimit PositionLimit_85(1158588836);
      noRelatedSym_1_1_2.set(PositionLimit_85);
      Instrument_85.insert(PositionLimit_85.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_85("STRING_INX");
      noRelatedSym_1_1_2.set(PriceQuoteMethod_85);
      Instrument_85.insert(PriceQuoteMethod_85.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_85("STRING_84282443");
      noRelatedSym_1_1_2.set(PriceUnitOfMeasure_85);
      Instrument_85.insert(PriceUnitOfMeasure_85.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_85;
      PriceUnitOfMeasureQty_85.setString("19928014");
      noRelatedSym_1_1_2.set(PriceUnitOfMeasureQty_85);
      Instrument_85.insert(PriceUnitOfMeasureQty_85.getString());
      FIX::Product Product_95(6);
      noRelatedSym_1_1_2.set(Product_95);
      Instrument_85.insert(Product_95.getString());
      FIX::ProductComplex ProductComplex_85("STRING_562476557");
      noRelatedSym_1_1_2.set(ProductComplex_85);
      Instrument_85.insert(ProductComplex_85.getString());
      FIX::PutOrCall PutOrCall_85(0);
      noRelatedSym_1_1_2.set(PutOrCall_85);
      Instrument_85.insert(PutOrCall_85.getString());
      FIX::RedemptionDate RedemptionDate_85("LOCALMKTDATE_1248062324");
      noRelatedSym_1_1_2.set(RedemptionDate_85);
      Instrument_85.insert(RedemptionDate_85.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_85("STRING_779983549");
      noRelatedSym_1_1_2.set(RepoCollateralSecurityType_85);
      Instrument_85.insert(RepoCollateralSecurityType_85.getString());
      FIX::RepurchaseRate RepurchaseRate_85;
      RepurchaseRate_85.setString("85.070000");
      noRelatedSym_1_1_2.set(RepurchaseRate_85);
      Instrument_85.insert(RepurchaseRate_85.getString());
      FIX::RepurchaseTerm RepurchaseTerm_85(1065971723);
      noRelatedSym_1_1_2.set(RepurchaseTerm_85);
      Instrument_85.insert(RepurchaseTerm_85.getString());
      FIX::RestructuringType RestructuringType_85("STRING_XR");
      noRelatedSym_1_1_2.set(RestructuringType_85);
      Instrument_85.insert(RestructuringType_85.getString());
      FIX::SecurityDesc SecurityDesc_85("STRING_1457677312");
      noRelatedSym_1_1_2.set(SecurityDesc_85);
      Instrument_85.insert(SecurityDesc_85.getString());
      FIX::SecurityExchange SecurityExchange_85("EXCHANGE_2136014584");
      noRelatedSym_1_1_2.set(SecurityExchange_85);
      Instrument_85.insert(SecurityExchange_85.getString());
      FIX::SecurityGroup SecurityGroup_85("STRING_384150186");
      noRelatedSym_1_1_2.set(SecurityGroup_85);
      Instrument_85.insert(SecurityGroup_85.getString());
      FIX::SecurityID SecurityID_85("STRING_1812295812");
      noRelatedSym_1_1_2.set(SecurityID_85);
      Instrument_85.insert(SecurityID_85.getString());
      FIX::SecurityIDSource SecurityIDSource_85("STRING_8");
      noRelatedSym_1_1_2.set(SecurityIDSource_85);
      Instrument_85.insert(SecurityIDSource_85.getString());
      FIX::SecurityStatus SecurityStatus_86("STRING_1");
      noRelatedSym_1_1_2.set(SecurityStatus_86);
      Instrument_85.insert(SecurityStatus_86.getString());
      FIX::SecuritySubType SecuritySubType_90("STRING_291981878");
      noRelatedSym_1_1_2.set(SecuritySubType_90);
      Instrument_85.insert(SecuritySubType_90.getString());
      FIX::SecurityType SecurityType_95("STRING_NONE");
      noRelatedSym_1_1_2.set(SecurityType_95);
      Instrument_85.insert(SecurityType_95.getString());
      FIX::Seniority Seniority_85("STRING_SB");
      noRelatedSym_1_1_2.set(Seniority_85);
      Instrument_85.insert(Seniority_85.getString());
      FIX::SettlMethod SettlMethod_85('P');
      noRelatedSym_1_1_2.set(SettlMethod_85);
      Instrument_85.insert(SettlMethod_85.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_85("STRING_2136531007");
      noRelatedSym_1_1_2.set(SettleOnOpenFlag_85);
      Instrument_85.insert(SettleOnOpenFlag_85.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_85("STRING_876727287");
      noRelatedSym_1_1_2.set(StateOrProvinceOfIssue_85);
      Instrument_85.insert(StateOrProvinceOfIssue_85.getString());
      FIX::StrikeCurrency StrikeCurrency_85("GBP");
      noRelatedSym_1_1_2.set(StrikeCurrency_85);
      Instrument_85.insert(StrikeCurrency_85.getString());
      FIX::StrikeMultiplier StrikeMultiplier_85;
      StrikeMultiplier_85.setString("5814947");
      noRelatedSym_1_1_2.set(StrikeMultiplier_85);
      Instrument_85.insert(StrikeMultiplier_85.getString());
      FIX::StrikePrice StrikePrice_85;
      StrikePrice_85.setString("17283134");
      noRelatedSym_1_1_2.set(StrikePrice_85);
      Instrument_85.insert(StrikePrice_85.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_85(3);
      noRelatedSym_1_1_2.set(StrikePriceBoundaryMethod_85);
      Instrument_85.insert(StrikePriceBoundaryMethod_85.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_85;
      StrikePriceBoundaryPrecision_85.setString("78.230000");
      noRelatedSym_1_1_2.set(StrikePriceBoundaryPrecision_85);
      Instrument_85.insert(StrikePriceBoundaryPrecision_85.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_85(4);
      noRelatedSym_1_1_2.set(StrikePriceDeterminationMethod_85);
      Instrument_85.insert(StrikePriceDeterminationMethod_85.getString());
      FIX::StrikeValue StrikeValue_85;
      StrikeValue_85.setString("5071059");
      noRelatedSym_1_1_2.set(StrikeValue_85);
      Instrument_85.insert(StrikeValue_85.getString());
      FIX::Symbol Symbol_85("STRING_882332040");
      noRelatedSym_1_1_2.set(Symbol_85);
      Instrument_85.insert(Symbol_85.getString());
      FIX::SymbolSfx SymbolSfx_85("STRING_WI");
      noRelatedSym_1_1_2.set(SymbolSfx_85);
      Instrument_85.insert(SymbolSfx_85.getString());
      FIX::TimeUnit TimeUnit_85("STRING_D");
      noRelatedSym_1_1_2.set(TimeUnit_85);
      Instrument_85.insert(TimeUnit_85.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_85(3);
      noRelatedSym_1_1_2.set(UnderlyingPriceDeterminationMethod_85);
      Instrument_85.insert(UnderlyingPriceDeterminationMethod_85.getString());
      FIX::UnitOfMeasure UnitOfMeasure_85("STRING_Bcf");
      noRelatedSym_1_1_2.set(UnitOfMeasure_85);
      Instrument_85.insert(UnitOfMeasure_85.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_85;
      UnitOfMeasureQty_85.setString("3386359");
      noRelatedSym_1_1_2.set(UnitOfMeasureQty_85);
      Instrument_85.insert(UnitOfMeasureQty_85.getString());
      FIX::ValuationMethod ValuationMethod_85("STRING_CDSD");
      noRelatedSym_1_1_2.set(ValuationMethod_85);
      Instrument_85.insert(ValuationMethod_85.getString());
      all_values.push_back(Instrument_85);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_159;
        FIX::ComplexEventCondition ComplexEventCondition_159(1);
        noComplexEvents_1_2_2_0.set(ComplexEventCondition_159);
        ComplexEvents_NoComplexEvents_159.insert(ComplexEventCondition_159.getString());
        FIX::ComplexEventPrice ComplexEventPrice_159;
        ComplexEventPrice_159.setString("4407111");
        noComplexEvents_1_2_2_0.set(ComplexEventPrice_159);
        ComplexEvents_NoComplexEvents_159.insert(ComplexEventPrice_159.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_159(4);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryMethod_159);
        ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceBoundaryMethod_159.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_159;
        ComplexEventPriceBoundaryPrecision_159.setString("81.180000");
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryPrecision_159);
        ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceBoundaryPrecision_159.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_159(1);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceTimeType_159);
        ComplexEvents_NoComplexEvents_159.insert(ComplexEventPriceTimeType_159.getString());
        FIX::ComplexEventType ComplexEventType_159(2);
        noComplexEvents_1_2_2_0.set(ComplexEventType_159);
        ComplexEvents_NoComplexEvents_159.insert(ComplexEventType_159.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_159;
        ComplexOptPayoutAmount_159.setString("6854302");
        noComplexEvents_1_2_2_0.set(ComplexOptPayoutAmount_159);
        ComplexEvents_NoComplexEvents_159.insert(ComplexOptPayoutAmount_159.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_159);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_335;
          FIX::ComplexEventEndDate ComplexEventEndDate_335(FIX::UTCTIMESTAMP(17, 2, 14, 7, 32015));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventEndDate_335);
          ComplexEventDates_NoComplexEventDates_335.insert(ComplexEventEndDate_335.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_335(FIX::UTCTIMESTAMP(14, 10, 28, 19, 62001));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventStartDate_335);
          ComplexEventDates_NoComplexEventDates_335.insert(ComplexEventStartDate_335.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_335);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_664;
            FIX::ComplexEventEndTime ComplexEventEndTime_664(FIX::UTCTIMEONLY(10, 49, 56));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventEndTime_664);
            ComplexEventTimes_NoComplexEventTimes_664.insert(ComplexEventEndTime_664.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_664(FIX::UTCTIMEONLY(16, 50, 17));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventStartTime_664);
            ComplexEventTimes_NoComplexEventTimes_664.insert(ComplexEventStartTime_664.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_664);

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_665;
            FIX::ComplexEventEndTime ComplexEventEndTime_665(FIX::UTCTIMEONLY(0, 30, 12));
            noComplexEventTimes_1_2_0_0_4_1.set(ComplexEventEndTime_665);
            ComplexEventTimes_NoComplexEventTimes_665.insert(ComplexEventEndTime_665.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_665(FIX::UTCTIMEONLY(14, 15, 45));
            noComplexEventTimes_1_2_0_0_4_1.set(ComplexEventStartTime_665);
            ComplexEventTimes_NoComplexEventTimes_665.insert(ComplexEventStartTime_665.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_665);

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_666;
            FIX::ComplexEventEndTime ComplexEventEndTime_666(FIX::UTCTIMEONLY(9, 40, 0));
            noComplexEventTimes_1_2_0_0_4_2.set(ComplexEventEndTime_666);
            ComplexEventTimes_NoComplexEventTimes_666.insert(ComplexEventEndTime_666.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_666(FIX::UTCTIMEONLY(22, 33, 59));
            noComplexEventTimes_1_2_0_0_4_2.set(ComplexEventStartTime_666);
            ComplexEventTimes_NoComplexEventTimes_666.insert(ComplexEventStartTime_666.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_666);

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_2);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_336;
          FIX::ComplexEventEndDate ComplexEventEndDate_336(FIX::UTCTIMESTAMP(23, 19, 11, 21, 32005));
          noComplexEventDates_1_2_0_3_1.set(ComplexEventEndDate_336);
          ComplexEventDates_NoComplexEventDates_336.insert(ComplexEventEndDate_336.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_336(FIX::UTCTIMESTAMP(1, 24, 11, 4, 92017));
          noComplexEventDates_1_2_0_3_1.set(ComplexEventStartDate_336);
          ComplexEventDates_NoComplexEventDates_336.insert(ComplexEventStartDate_336.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_336);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_667;
            FIX::ComplexEventEndTime ComplexEventEndTime_667(FIX::UTCTIMEONLY(10, 11, 59));
            noComplexEventTimes_1_2_0_1_4_0.set(ComplexEventEndTime_667);
            ComplexEventTimes_NoComplexEventTimes_667.insert(ComplexEventEndTime_667.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_667(FIX::UTCTIMEONLY(17, 6, 22));
            noComplexEventTimes_1_2_0_1_4_0.set(ComplexEventStartTime_667);
            ComplexEventTimes_NoComplexEventTimes_667.insert(ComplexEventStartTime_667.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_667);

            noComplexEventDates_1_2_0_3_1.addGroup(noComplexEventTimes_1_2_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_668;
            FIX::ComplexEventEndTime ComplexEventEndTime_668(FIX::UTCTIMEONLY(3, 54, 39));
            noComplexEventTimes_1_2_0_1_4_1.set(ComplexEventEndTime_668);
            ComplexEventTimes_NoComplexEventTimes_668.insert(ComplexEventEndTime_668.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_668(FIX::UTCTIMEONLY(16, 4, 18));
            noComplexEventTimes_1_2_0_1_4_1.set(ComplexEventStartTime_668);
            ComplexEventTimes_NoComplexEventTimes_668.insert(ComplexEventStartTime_668.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_668);

            noComplexEventDates_1_2_0_3_1.addGroup(noComplexEventTimes_1_2_0_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_669;
            FIX::ComplexEventEndTime ComplexEventEndTime_669(FIX::UTCTIMEONLY(4, 37, 35));
            noComplexEventTimes_1_2_0_1_4_2.set(ComplexEventEndTime_669);
            ComplexEventTimes_NoComplexEventTimes_669.insert(ComplexEventEndTime_669.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_669(FIX::UTCTIMEONLY(16, 10, 8));
            noComplexEventTimes_1_2_0_1_4_2.set(ComplexEventStartTime_669);
            ComplexEventTimes_NoComplexEventTimes_669.insert(ComplexEventStartTime_669.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_669);

            noComplexEventDates_1_2_0_3_1.addGroup(noComplexEventTimes_1_2_0_1_4_2);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_337;
          FIX::ComplexEventEndDate ComplexEventEndDate_337(FIX::UTCTIMESTAMP(15, 19, 41, 11, 52010));
          noComplexEventDates_1_2_0_3_2.set(ComplexEventEndDate_337);
          ComplexEventDates_NoComplexEventDates_337.insert(ComplexEventEndDate_337.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_337(FIX::UTCTIMESTAMP(2, 25, 29, 7, 82017));
          noComplexEventDates_1_2_0_3_2.set(ComplexEventStartDate_337);
          ComplexEventDates_NoComplexEventDates_337.insert(ComplexEventStartDate_337.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_337);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_670;
            FIX::ComplexEventEndTime ComplexEventEndTime_670(FIX::UTCTIMEONLY(7, 35, 29));
            noComplexEventTimes_1_2_0_2_4_0.set(ComplexEventEndTime_670);
            ComplexEventTimes_NoComplexEventTimes_670.insert(ComplexEventEndTime_670.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_670(FIX::UTCTIMEONLY(15, 33, 9));
            noComplexEventTimes_1_2_0_2_4_0.set(ComplexEventStartTime_670);
            ComplexEventTimes_NoComplexEventTimes_670.insert(ComplexEventStartTime_670.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_670);

            noComplexEventDates_1_2_0_3_2.addGroup(noComplexEventTimes_1_2_0_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_671;
            FIX::ComplexEventEndTime ComplexEventEndTime_671(FIX::UTCTIMEONLY(17, 46, 54));
            noComplexEventTimes_1_2_0_2_4_1.set(ComplexEventEndTime_671);
            ComplexEventTimes_NoComplexEventTimes_671.insert(ComplexEventEndTime_671.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_671(FIX::UTCTIMEONLY(14, 56, 6));
            noComplexEventTimes_1_2_0_2_4_1.set(ComplexEventStartTime_671);
            ComplexEventTimes_NoComplexEventTimes_671.insert(ComplexEventStartTime_671.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_671);

            noComplexEventDates_1_2_0_3_2.addGroup(noComplexEventTimes_1_2_0_2_4_1);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_2);
        }
        noRelatedSym_1_1_2.addGroup(noComplexEvents_1_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_160;
        FIX::ComplexEventCondition ComplexEventCondition_160(2);
        noComplexEvents_1_2_2_1.set(ComplexEventCondition_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventCondition_160.getString());
        FIX::ComplexEventPrice ComplexEventPrice_160;
        ComplexEventPrice_160.setString("13629393");
        noComplexEvents_1_2_2_1.set(ComplexEventPrice_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventPrice_160.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_160(3);
        noComplexEvents_1_2_2_1.set(ComplexEventPriceBoundaryMethod_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceBoundaryMethod_160.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_160;
        ComplexEventPriceBoundaryPrecision_160.setString("92.760000");
        noComplexEvents_1_2_2_1.set(ComplexEventPriceBoundaryPrecision_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceBoundaryPrecision_160.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_160(3);
        noComplexEvents_1_2_2_1.set(ComplexEventPriceTimeType_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceTimeType_160.getString());
        FIX::ComplexEventType ComplexEventType_160(8);
        noComplexEvents_1_2_2_1.set(ComplexEventType_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventType_160.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_160;
        ComplexOptPayoutAmount_160.setString("12897696");
        noComplexEvents_1_2_2_1.set(ComplexOptPayoutAmount_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexOptPayoutAmount_160.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_160);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_338;
          FIX::ComplexEventEndDate ComplexEventEndDate_338(FIX::UTCTIMESTAMP(20, 50, 23, 27, 22000));
          noComplexEventDates_1_2_1_3_0.set(ComplexEventEndDate_338);
          ComplexEventDates_NoComplexEventDates_338.insert(ComplexEventEndDate_338.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_338(FIX::UTCTIMESTAMP(12, 47, 14, 7, 72017));
          noComplexEventDates_1_2_1_3_0.set(ComplexEventStartDate_338);
          ComplexEventDates_NoComplexEventDates_338.insert(ComplexEventStartDate_338.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_338);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_672;
            FIX::ComplexEventEndTime ComplexEventEndTime_672(FIX::UTCTIMEONLY(9, 26, 47));
            noComplexEventTimes_1_2_1_0_4_0.set(ComplexEventEndTime_672);
            ComplexEventTimes_NoComplexEventTimes_672.insert(ComplexEventEndTime_672.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_672(FIX::UTCTIMEONLY(9, 36, 50));
            noComplexEventTimes_1_2_1_0_4_0.set(ComplexEventStartTime_672);
            ComplexEventTimes_NoComplexEventTimes_672.insert(ComplexEventStartTime_672.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_672);

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_673;
            FIX::ComplexEventEndTime ComplexEventEndTime_673(FIX::UTCTIMEONLY(3, 7, 45));
            noComplexEventTimes_1_2_1_0_4_1.set(ComplexEventEndTime_673);
            ComplexEventTimes_NoComplexEventTimes_673.insert(ComplexEventEndTime_673.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_673(FIX::UTCTIMEONLY(21, 3, 11));
            noComplexEventTimes_1_2_1_0_4_1.set(ComplexEventStartTime_673);
            ComplexEventTimes_NoComplexEventTimes_673.insert(ComplexEventStartTime_673.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_673);

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_1);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_339;
          FIX::ComplexEventEndDate ComplexEventEndDate_339(FIX::UTCTIMESTAMP(15, 1, 49, 18, 82000));
          noComplexEventDates_1_2_1_3_1.set(ComplexEventEndDate_339);
          ComplexEventDates_NoComplexEventDates_339.insert(ComplexEventEndDate_339.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_339(FIX::UTCTIMESTAMP(11, 33, 33, 6, 92007));
          noComplexEventDates_1_2_1_3_1.set(ComplexEventStartDate_339);
          ComplexEventDates_NoComplexEventDates_339.insert(ComplexEventStartDate_339.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_339);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_674;
            FIX::ComplexEventEndTime ComplexEventEndTime_674(FIX::UTCTIMEONLY(22, 29, 49));
            noComplexEventTimes_1_2_1_1_4_0.set(ComplexEventEndTime_674);
            ComplexEventTimes_NoComplexEventTimes_674.insert(ComplexEventEndTime_674.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_674(FIX::UTCTIMEONLY(18, 17, 23));
            noComplexEventTimes_1_2_1_1_4_0.set(ComplexEventStartTime_674);
            ComplexEventTimes_NoComplexEventTimes_674.insert(ComplexEventStartTime_674.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_674);

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_675;
            FIX::ComplexEventEndTime ComplexEventEndTime_675(FIX::UTCTIMEONLY(12, 23, 27));
            noComplexEventTimes_1_2_1_1_4_1.set(ComplexEventEndTime_675);
            ComplexEventTimes_NoComplexEventTimes_675.insert(ComplexEventEndTime_675.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_675(FIX::UTCTIMEONLY(8, 23, 46));
            noComplexEventTimes_1_2_1_1_4_1.set(ComplexEventStartTime_675);
            ComplexEventTimes_NoComplexEventTimes_675.insert(ComplexEventStartTime_675.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_675);

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_1);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_340;
          FIX::ComplexEventEndDate ComplexEventEndDate_340(FIX::UTCTIMESTAMP(18, 40, 44, 9, 122000));
          noComplexEventDates_1_2_1_3_2.set(ComplexEventEndDate_340);
          ComplexEventDates_NoComplexEventDates_340.insert(ComplexEventEndDate_340.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_340(FIX::UTCTIMESTAMP(14, 3, 6, 9, 42013));
          noComplexEventDates_1_2_1_3_2.set(ComplexEventStartDate_340);
          ComplexEventDates_NoComplexEventDates_340.insert(ComplexEventStartDate_340.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_340);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_676;
            FIX::ComplexEventEndTime ComplexEventEndTime_676(FIX::UTCTIMEONLY(9, 44, 46));
            noComplexEventTimes_1_2_1_2_4_0.set(ComplexEventEndTime_676);
            ComplexEventTimes_NoComplexEventTimes_676.insert(ComplexEventEndTime_676.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_676(FIX::UTCTIMEONLY(2, 55, 58));
            noComplexEventTimes_1_2_1_2_4_0.set(ComplexEventStartTime_676);
            ComplexEventTimes_NoComplexEventTimes_676.insert(ComplexEventStartTime_676.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_676);

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_677;
            FIX::ComplexEventEndTime ComplexEventEndTime_677(FIX::UTCTIMEONLY(7, 13, 40));
            noComplexEventTimes_1_2_1_2_4_1.set(ComplexEventEndTime_677);
            ComplexEventTimes_NoComplexEventTimes_677.insert(ComplexEventEndTime_677.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_677(FIX::UTCTIMEONLY(1, 55, 17));
            noComplexEventTimes_1_2_1_2_4_1.set(ComplexEventStartTime_677);
            ComplexEventTimes_NoComplexEventTimes_677.insert(ComplexEventStartTime_677.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_677);

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_678;
            FIX::ComplexEventEndTime ComplexEventEndTime_678(FIX::UTCTIMEONLY(2, 57, 28));
            noComplexEventTimes_1_2_1_2_4_2.set(ComplexEventEndTime_678);
            ComplexEventTimes_NoComplexEventTimes_678.insert(ComplexEventEndTime_678.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_678(FIX::UTCTIMEONLY(12, 58, 43));
            noComplexEventTimes_1_2_1_2_4_2.set(ComplexEventStartTime_678);
            ComplexEventTimes_NoComplexEventTimes_678.insert(ComplexEventStartTime_678.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_678);

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_2);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_2);
        }
        noRelatedSym_1_1_2.addGroup(noComplexEvents_1_2_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_165;
        FIX::EventDate EventDate_165("LOCALMKTDATE_354577253");
        noEvents_1_2_2_0.set(EventDate_165);
        EvntGrp_NoEvents_165.insert(EventDate_165.getString());
        FIX::EventPx EventPx_165;
        EventPx_165.setString("241045");
        noEvents_1_2_2_0.set(EventPx_165);
        EvntGrp_NoEvents_165.insert(EventPx_165.getString());
        FIX::EventText EventText_165("STRING_1902451491");
        noEvents_1_2_2_0.set(EventText_165);
        EvntGrp_NoEvents_165.insert(EventText_165.getString());
        FIX::EventTime EventTime_165(FIX::UTCTIMESTAMP(0, 7, 54, 9, 42008));
        noEvents_1_2_2_0.set(EventTime_165);
        EvntGrp_NoEvents_165.insert(EventTime_165.getString());
        FIX::EventType EventType_165(17);
        noEvents_1_2_2_0.set(EventType_165);
        EvntGrp_NoEvents_165.insert(EventType_165.getString());
        all_values.push_back(EvntGrp_NoEvents_165);

        noRelatedSym_1_1_2.addGroup(noEvents_1_2_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_166;
        FIX::InstrumentPartyID InstrumentPartyID_166("STRING_393309327");
        noInstrumentParties_1_2_2_0.set(InstrumentPartyID_166);
        InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyID_166.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_166('4');
        noInstrumentParties_1_2_2_0.set(InstrumentPartyIDSource_166);
        InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyIDSource_166.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_166(241627595);
        noInstrumentParties_1_2_2_0.set(InstrumentPartyRole_166);
        InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyRole_166.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_166);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331;
          FIX::InstrumentPartySubID InstrumentPartySubID_331("STRING_1228184499");
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubID_331);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331.insert(InstrumentPartySubID_331.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_331(1555105215);
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubIDType_331);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331.insert(InstrumentPartySubIDType_331.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332;
          FIX::InstrumentPartySubID InstrumentPartySubID_332("STRING_1566219353");
          noInstrumentPartySubIDs_1_2_0_3_1.set(InstrumentPartySubID_332);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332.insert(InstrumentPartySubID_332.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_332(1700653348);
          noInstrumentPartySubIDs_1_2_0_3_1.set(InstrumentPartySubIDType_332);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332.insert(InstrumentPartySubIDType_332.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_1);
        }
        noRelatedSym_1_1_2.addGroup(noInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_2_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_167;
        FIX::InstrumentPartyID InstrumentPartyID_167("STRING_192672423");
        noInstrumentParties_1_2_2_1.set(InstrumentPartyID_167);
        InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyID_167.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_167('3');
        noInstrumentParties_1_2_2_1.set(InstrumentPartyIDSource_167);
        InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyIDSource_167.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_167(1343909772);
        noInstrumentParties_1_2_2_1.set(InstrumentPartyRole_167);
        InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyRole_167.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_167);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333;
          FIX::InstrumentPartySubID InstrumentPartySubID_333("STRING_1757215799");
          noInstrumentPartySubIDs_1_2_1_3_0.set(InstrumentPartySubID_333);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333.insert(InstrumentPartySubID_333.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_333(1822522240);
          noInstrumentPartySubIDs_1_2_1_3_0.set(InstrumentPartySubIDType_333);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333.insert(InstrumentPartySubIDType_333.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);

          noInstrumentParties_1_2_2_1.addGroup(noInstrumentPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334;
          FIX::InstrumentPartySubID InstrumentPartySubID_334("STRING_1735985336");
          noInstrumentPartySubIDs_1_2_1_3_1.set(InstrumentPartySubID_334);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334.insert(InstrumentPartySubID_334.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_334(926781459);
          noInstrumentPartySubIDs_1_2_1_3_1.set(InstrumentPartySubIDType_334);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334.insert(InstrumentPartySubIDType_334.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);

          noInstrumentParties_1_2_2_1.addGroup(noInstrumentPartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335;
          FIX::InstrumentPartySubID InstrumentPartySubID_335("STRING_399494250");
          noInstrumentPartySubIDs_1_2_1_3_2.set(InstrumentPartySubID_335);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335.insert(InstrumentPartySubID_335.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_335(1041370711);
          noInstrumentPartySubIDs_1_2_1_3_2.set(InstrumentPartySubIDType_335);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335.insert(InstrumentPartySubIDType_335.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);

          noInstrumentParties_1_2_2_1.addGroup(noInstrumentPartySubIDs_1_2_1_3_2);
        }
        noRelatedSym_1_1_2.addGroup(noInstrumentParties_1_2_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_178;
        FIX::SecurityAltID SecurityAltID_178("STRING_754071504");
        noSecurityAltID_1_2_2_0.set(SecurityAltID_178);
        SecAltIDGrp_NoSecurityAltID_178.insert(SecurityAltID_178.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_178("STRING_1065475213");
        noSecurityAltID_1_2_2_0.set(SecurityAltIDSource_178);
        SecAltIDGrp_NoSecurityAltID_178.insert(SecurityAltIDSource_178.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_178);

        noRelatedSym_1_1_2.addGroup(noSecurityAltID_1_2_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_170;
      FIX::SecurityXML SecurityXML_171("XMLDATA_725858033");
      noRelatedSym_1_1_2.set(SecurityXML_171);
      FIX::SecurityXMLLen SecurityXMLLen_85(1926596001);
      noRelatedSym_1_1_2.set(SecurityXMLLen_85);
      FIX::SecurityXMLSchema SecurityXMLSchema_85("STRING_683264645");
      noRelatedSym_1_1_2.set(SecurityXMLSchema_85);
      SecurityXML_170.insert(SecurityXMLSchema_85.getString());
      all_values.push_back(SecurityXML_170);

      noAsgnReqs_0_1.addGroup(noRelatedSym_1_1_2);
    }
    msg.addGroup(noAsgnReqs_0_1);
  }
  {
    FIX50SP2::StreamAssignmentReport::NoAsgnReqs noAsgnReqs_0_2;
    // StrmAsgnRptGrp.NoAsgnReqs
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_147;
      FIX::PartyID PartyID_147("STRING_450356107");
      noPartyIDs_2_1_0.set(PartyID_147);
      Parties_NoPartyIDs_147.insert(PartyID_147.getString());
      FIX::PartyIDSource PartyIDSource_147('7');
      noPartyIDs_2_1_0.set(PartyIDSource_147);
      Parties_NoPartyIDs_147.insert(PartyIDSource_147.getString());
      FIX::PartyRole PartyRole_147(45);
      noPartyIDs_2_1_0.set(PartyRole_147);
      Parties_NoPartyIDs_147.insert(PartyRole_147.getString());
      all_values.push_back(Parties_NoPartyIDs_147);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_289;
        FIX::PartySubID PartySubID_289("STRING_510946595");
        noPartySubIDs_2_0_2_0.set(PartySubID_289);
        PtysSubGrp_NoPartySubIDs_289.insert(PartySubID_289.getString());
        FIX::PartySubIDType PartySubIDType_289(25);
        noPartySubIDs_2_0_2_0.set(PartySubIDType_289);
        PtysSubGrp_NoPartySubIDs_289.insert(PartySubIDType_289.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_289);

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      noAsgnReqs_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_2_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_4;
      FIX::EncodedText EncodedText_94("DATA_964042021");
      noRelatedSym_2_1_0.set(EncodedText_94);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_4.insert(EncodedText_94.getString());
      FIX::EncodedTextLen EncodedTextLen_94(341694872);
      noRelatedSym_2_1_0.set(EncodedTextLen_94);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_4.insert(EncodedTextLen_94.getString());
      FIX::MDStreamID MDStreamID_8("STRING_220603820");
      noRelatedSym_2_1_0.set(MDStreamID_8);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_4.insert(MDStreamID_8.getString());
      FIX::SettlType SettlType_33("STRING_8");
      noRelatedSym_2_1_0.set(SettlType_33);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_4.insert(SettlType_33.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_4(3);
      noRelatedSym_2_1_0.set(StreamAsgnRejReason_4);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_4.insert(StreamAsgnRejReason_4.getString());
      FIX::StreamAsgnType StreamAsgnType_4(2);
      noRelatedSym_2_1_0.set(StreamAsgnType_4);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_4.insert(StreamAsgnType_4.getString());
      FIX::Text Text_94("STRING_1745396220");
      noRelatedSym_2_1_0.set(Text_94);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_4.insert(Text_94.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_4);

      // Instrument
      multiset<string> Instrument_86;
      FIX::AttachmentPoint AttachmentPoint_86;
      AttachmentPoint_86.setString("25.110000");
      noRelatedSym_2_1_0.set(AttachmentPoint_86);
      Instrument_86.insert(AttachmentPoint_86.getString());
      FIX::CFICode CFICode_93("STRING_10141507");
      noRelatedSym_2_1_0.set(CFICode_93);
      Instrument_86.insert(CFICode_93.getString());
      FIX::CPProgram CPProgram_86(99);
      noRelatedSym_2_1_0.set(CPProgram_86);
      Instrument_86.insert(CPProgram_86.getString());
      FIX::CPRegType CPRegType_86("STRING_1780328016");
      noRelatedSym_2_1_0.set(CPRegType_86);
      Instrument_86.insert(CPRegType_86.getString());
      FIX::CapPrice CapPrice_86;
      CapPrice_86.setString("17673573");
      noRelatedSym_2_1_0.set(CapPrice_86);
      Instrument_86.insert(CapPrice_86.getString());
      FIX::ContractMultiplier ContractMultiplier_86;
      ContractMultiplier_86.setString("6168609");
      noRelatedSym_2_1_0.set(ContractMultiplier_86);
      Instrument_86.insert(ContractMultiplier_86.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_86(0);
      noRelatedSym_2_1_0.set(ContractMultiplierUnit_86);
      Instrument_86.insert(ContractMultiplierUnit_86.getString());
      FIX::ContractSettlMonth ContractSettlMonth_86("MONTHYEAR_546655117");
      noRelatedSym_2_1_0.set(ContractSettlMonth_86);
      Instrument_86.insert(ContractSettlMonth_86.getString());
      FIX::CountryOfIssue CountryOfIssue_86("COUNTRY_1016355188");
      noRelatedSym_2_1_0.set(CountryOfIssue_86);
      Instrument_86.insert(CountryOfIssue_86.getString());
      FIX::CouponPaymentDate CouponPaymentDate_86("LOCALMKTDATE_262716767");
      noRelatedSym_2_1_0.set(CouponPaymentDate_86);
      Instrument_86.insert(CouponPaymentDate_86.getString());
      FIX::CouponRate CouponRate_86;
      CouponRate_86.setString("53.070000");
      noRelatedSym_2_1_0.set(CouponRate_86);
      Instrument_86.insert(CouponRate_86.getString());
      FIX::CreditRating CreditRating_86("STRING_1770426692");
      noRelatedSym_2_1_0.set(CreditRating_86);
      Instrument_86.insert(CreditRating_86.getString());
      FIX::DatedDate DatedDate_86("LOCALMKTDATE_1328191980");
      noRelatedSym_2_1_0.set(DatedDate_86);
      Instrument_86.insert(DatedDate_86.getString());
      FIX::DetachmentPoint DetachmentPoint_86;
      DetachmentPoint_86.setString("96.920000");
      noRelatedSym_2_1_0.set(DetachmentPoint_86);
      Instrument_86.insert(DetachmentPoint_86.getString());
      FIX::EncodedIssuer EncodedIssuer_86("DATA_1549539045");
      noRelatedSym_2_1_0.set(EncodedIssuer_86);
      Instrument_86.insert(EncodedIssuer_86.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_86(2011456626);
      noRelatedSym_2_1_0.set(EncodedIssuerLen_86);
      Instrument_86.insert(EncodedIssuerLen_86.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_86("DATA_2060076752");
      noRelatedSym_2_1_0.set(EncodedSecurityDesc_86);
      Instrument_86.insert(EncodedSecurityDesc_86.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_86(1999895152);
      noRelatedSym_2_1_0.set(EncodedSecurityDescLen_86);
      Instrument_86.insert(EncodedSecurityDescLen_86.getString());
      FIX::ExerciseStyle ExerciseStyle_86(2);
      noRelatedSym_2_1_0.set(ExerciseStyle_86);
      Instrument_86.insert(ExerciseStyle_86.getString());
      FIX::Factor Factor_86;
      Factor_86.setString("15590288");
      noRelatedSym_2_1_0.set(Factor_86);
      Instrument_86.insert(Factor_86.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_86(false);
      noRelatedSym_2_1_0.set(FlexProductEligibilityIndicator_86);
      Instrument_86.insert(FlexProductEligibilityIndicator_86.getString());
      FIX::FlexibleIndicator FlexibleIndicator_86(true);
      noRelatedSym_2_1_0.set(FlexibleIndicator_86);
      Instrument_86.insert(FlexibleIndicator_86.getString());
      FIX::FloorPrice FloorPrice_86;
      FloorPrice_86.setString("16590961");
      noRelatedSym_2_1_0.set(FloorPrice_86);
      Instrument_86.insert(FloorPrice_86.getString());
      FIX::FlowScheduleType FlowScheduleType_86(4);
      noRelatedSym_2_1_0.set(FlowScheduleType_86);
      Instrument_86.insert(FlowScheduleType_86.getString());
      FIX::InstrRegistry InstrRegistry_86("STRING_936039873");
      noRelatedSym_2_1_0.set(InstrRegistry_86);
      Instrument_86.insert(InstrRegistry_86.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_86('2');
      noRelatedSym_2_1_0.set(InstrmtAssignmentMethod_86);
      Instrument_86.insert(InstrmtAssignmentMethod_86.getString());
      FIX::InterestAccrualDate InterestAccrualDate_86("LOCALMKTDATE_1677725449");
      noRelatedSym_2_1_0.set(InterestAccrualDate_86);
      Instrument_86.insert(InterestAccrualDate_86.getString());
      FIX::IssueDate IssueDate_86("LOCALMKTDATE_980782745");
      noRelatedSym_2_1_0.set(IssueDate_86);
      Instrument_86.insert(IssueDate_86.getString());
      FIX::Issuer Issuer_86("STRING_1750107437");
      noRelatedSym_2_1_0.set(Issuer_86);
      Instrument_86.insert(Issuer_86.getString());
      FIX::ListMethod ListMethod_86(1);
      noRelatedSym_2_1_0.set(ListMethod_86);
      Instrument_86.insert(ListMethod_86.getString());
      FIX::LocaleOfIssue LocaleOfIssue_86("STRING_578695317");
      noRelatedSym_2_1_0.set(LocaleOfIssue_86);
      Instrument_86.insert(LocaleOfIssue_86.getString());
      FIX::MaturityDate MaturityDate_86("LOCALMKTDATE_1692096300");
      noRelatedSym_2_1_0.set(MaturityDate_86);
      Instrument_86.insert(MaturityDate_86.getString());
      FIX::MaturityMonthYear MaturityMonthYear_86("MONTHYEAR_1327206482");
      noRelatedSym_2_1_0.set(MaturityMonthYear_86);
      Instrument_86.insert(MaturityMonthYear_86.getString());
      FIX::MaturityTime MaturityTime_86("TZTIMEONLY_1520517662");
      noRelatedSym_2_1_0.set(MaturityTime_86);
      Instrument_86.insert(MaturityTime_86.getString());
      FIX::MinPriceIncrement MinPriceIncrement_86;
      MinPriceIncrement_86.setString("13249406");
      noRelatedSym_2_1_0.set(MinPriceIncrement_86);
      Instrument_86.insert(MinPriceIncrement_86.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_86;
      MinPriceIncrementAmount_86.setString("9470801");
      noRelatedSym_2_1_0.set(MinPriceIncrementAmount_86);
      Instrument_86.insert(MinPriceIncrementAmount_86.getString());
      FIX::NTPositionLimit NTPositionLimit_86(2137378600);
      noRelatedSym_2_1_0.set(NTPositionLimit_86);
      Instrument_86.insert(NTPositionLimit_86.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_86;
      NotionalPercentageOutstanding_86.setString("67.240000");
      noRelatedSym_2_1_0.set(NotionalPercentageOutstanding_86);
      Instrument_86.insert(NotionalPercentageOutstanding_86.getString());
      FIX::OptAttribute OptAttribute_86('1');
      noRelatedSym_2_1_0.set(OptAttribute_86);
      Instrument_86.insert(OptAttribute_86.getString());
      FIX::OptPayoutAmount OptPayoutAmount_86;
      OptPayoutAmount_86.setString("10062501");
      noRelatedSym_2_1_0.set(OptPayoutAmount_86);
      Instrument_86.insert(OptPayoutAmount_86.getString());
      FIX::OptPayoutType OptPayoutType_86(3);
      noRelatedSym_2_1_0.set(OptPayoutType_86);
      Instrument_86.insert(OptPayoutType_86.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_86;
      OriginalNotionalPercentageOutstanding_86.setString("69.170000");
      noRelatedSym_2_1_0.set(OriginalNotionalPercentageOutstanding_86);
      Instrument_86.insert(OriginalNotionalPercentageOutstanding_86.getString());
      FIX::Pool Pool_86("STRING_629193184");
      noRelatedSym_2_1_0.set(Pool_86);
      Instrument_86.insert(Pool_86.getString());
      FIX::PositionLimit PositionLimit_86(2137195472);
      noRelatedSym_2_1_0.set(PositionLimit_86);
      Instrument_86.insert(PositionLimit_86.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_86("STRING_INX");
      noRelatedSym_2_1_0.set(PriceQuoteMethod_86);
      Instrument_86.insert(PriceQuoteMethod_86.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_86("STRING_31248581");
      noRelatedSym_2_1_0.set(PriceUnitOfMeasure_86);
      Instrument_86.insert(PriceUnitOfMeasure_86.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_86;
      PriceUnitOfMeasureQty_86.setString("20011684");
      noRelatedSym_2_1_0.set(PriceUnitOfMeasureQty_86);
      Instrument_86.insert(PriceUnitOfMeasureQty_86.getString());
      FIX::Product Product_96(3);
      noRelatedSym_2_1_0.set(Product_96);
      Instrument_86.insert(Product_96.getString());
      FIX::ProductComplex ProductComplex_86("STRING_2031143733");
      noRelatedSym_2_1_0.set(ProductComplex_86);
      Instrument_86.insert(ProductComplex_86.getString());
      FIX::PutOrCall PutOrCall_86(1);
      noRelatedSym_2_1_0.set(PutOrCall_86);
      Instrument_86.insert(PutOrCall_86.getString());
      FIX::RedemptionDate RedemptionDate_86("LOCALMKTDATE_283854913");
      noRelatedSym_2_1_0.set(RedemptionDate_86);
      Instrument_86.insert(RedemptionDate_86.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_86("STRING_341771988");
      noRelatedSym_2_1_0.set(RepoCollateralSecurityType_86);
      Instrument_86.insert(RepoCollateralSecurityType_86.getString());
      FIX::RepurchaseRate RepurchaseRate_86;
      RepurchaseRate_86.setString("75.590000");
      noRelatedSym_2_1_0.set(RepurchaseRate_86);
      Instrument_86.insert(RepurchaseRate_86.getString());
      FIX::RepurchaseTerm RepurchaseTerm_86(1942951038);
      noRelatedSym_2_1_0.set(RepurchaseTerm_86);
      Instrument_86.insert(RepurchaseTerm_86.getString());
      FIX::RestructuringType RestructuringType_86("STRING_MR");
      noRelatedSym_2_1_0.set(RestructuringType_86);
      Instrument_86.insert(RestructuringType_86.getString());
      FIX::SecurityDesc SecurityDesc_86("STRING_222773784");
      noRelatedSym_2_1_0.set(SecurityDesc_86);
      Instrument_86.insert(SecurityDesc_86.getString());
      FIX::SecurityExchange SecurityExchange_86("EXCHANGE_1796258387");
      noRelatedSym_2_1_0.set(SecurityExchange_86);
      Instrument_86.insert(SecurityExchange_86.getString());
      FIX::SecurityGroup SecurityGroup_86("STRING_1329135418");
      noRelatedSym_2_1_0.set(SecurityGroup_86);
      Instrument_86.insert(SecurityGroup_86.getString());
      FIX::SecurityID SecurityID_86("STRING_1203556529");
      noRelatedSym_2_1_0.set(SecurityID_86);
      Instrument_86.insert(SecurityID_86.getString());
      FIX::SecurityIDSource SecurityIDSource_86("STRING_C");
      noRelatedSym_2_1_0.set(SecurityIDSource_86);
      Instrument_86.insert(SecurityIDSource_86.getString());
      FIX::SecurityStatus SecurityStatus_87("STRING_2");
      noRelatedSym_2_1_0.set(SecurityStatus_87);
      Instrument_86.insert(SecurityStatus_87.getString());
      FIX::SecuritySubType SecuritySubType_91("STRING_1782251847");
      noRelatedSym_2_1_0.set(SecuritySubType_91);
      Instrument_86.insert(SecuritySubType_91.getString());
      FIX::SecurityType SecurityType_96("STRING_TMCP");
      noRelatedSym_2_1_0.set(SecurityType_96);
      Instrument_86.insert(SecurityType_96.getString());
      FIX::Seniority Seniority_86("STRING_SD");
      noRelatedSym_2_1_0.set(Seniority_86);
      Instrument_86.insert(Seniority_86.getString());
      FIX::SettlMethod SettlMethod_86('P');
      noRelatedSym_2_1_0.set(SettlMethod_86);
      Instrument_86.insert(SettlMethod_86.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_86("STRING_120951850");
      noRelatedSym_2_1_0.set(SettleOnOpenFlag_86);
      Instrument_86.insert(SettleOnOpenFlag_86.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_86("STRING_625519721");
      noRelatedSym_2_1_0.set(StateOrProvinceOfIssue_86);
      Instrument_86.insert(StateOrProvinceOfIssue_86.getString());
      FIX::StrikeCurrency StrikeCurrency_86("USD");
      noRelatedSym_2_1_0.set(StrikeCurrency_86);
      Instrument_86.insert(StrikeCurrency_86.getString());
      FIX::StrikeMultiplier StrikeMultiplier_86;
      StrikeMultiplier_86.setString("21192549");
      noRelatedSym_2_1_0.set(StrikeMultiplier_86);
      Instrument_86.insert(StrikeMultiplier_86.getString());
      FIX::StrikePrice StrikePrice_86;
      StrikePrice_86.setString("39473");
      noRelatedSym_2_1_0.set(StrikePrice_86);
      Instrument_86.insert(StrikePrice_86.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_86(2);
      noRelatedSym_2_1_0.set(StrikePriceBoundaryMethod_86);
      Instrument_86.insert(StrikePriceBoundaryMethod_86.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_86;
      StrikePriceBoundaryPrecision_86.setString("82.490000");
      noRelatedSym_2_1_0.set(StrikePriceBoundaryPrecision_86);
      Instrument_86.insert(StrikePriceBoundaryPrecision_86.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_86(2);
      noRelatedSym_2_1_0.set(StrikePriceDeterminationMethod_86);
      Instrument_86.insert(StrikePriceDeterminationMethod_86.getString());
      FIX::StrikeValue StrikeValue_86;
      StrikeValue_86.setString("14659538");
      noRelatedSym_2_1_0.set(StrikeValue_86);
      Instrument_86.insert(StrikeValue_86.getString());
      FIX::Symbol Symbol_86("STRING_1795284858");
      noRelatedSym_2_1_0.set(Symbol_86);
      Instrument_86.insert(Symbol_86.getString());
      FIX::SymbolSfx SymbolSfx_86("STRING_CD");
      noRelatedSym_2_1_0.set(SymbolSfx_86);
      Instrument_86.insert(SymbolSfx_86.getString());
      FIX::TimeUnit TimeUnit_86("STRING_S");
      noRelatedSym_2_1_0.set(TimeUnit_86);
      Instrument_86.insert(TimeUnit_86.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_86(1);
      noRelatedSym_2_1_0.set(UnderlyingPriceDeterminationMethod_86);
      Instrument_86.insert(UnderlyingPriceDeterminationMethod_86.getString());
      FIX::UnitOfMeasure UnitOfMeasure_86("STRING_Bbl");
      noRelatedSym_2_1_0.set(UnitOfMeasure_86);
      Instrument_86.insert(UnitOfMeasure_86.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_86;
      UnitOfMeasureQty_86.setString("6343747");
      noRelatedSym_2_1_0.set(UnitOfMeasureQty_86);
      Instrument_86.insert(UnitOfMeasureQty_86.getString());
      FIX::ValuationMethod ValuationMethod_86("STRING_FUTDA");
      noRelatedSym_2_1_0.set(ValuationMethod_86);
      Instrument_86.insert(ValuationMethod_86.getString());
      all_values.push_back(Instrument_86);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_2_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_161;
        FIX::ComplexEventCondition ComplexEventCondition_161(1);
        noComplexEvents_2_0_2_0.set(ComplexEventCondition_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventCondition_161.getString());
        FIX::ComplexEventPrice ComplexEventPrice_161;
        ComplexEventPrice_161.setString("5994332");
        noComplexEvents_2_0_2_0.set(ComplexEventPrice_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventPrice_161.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_161(3);
        noComplexEvents_2_0_2_0.set(ComplexEventPriceBoundaryMethod_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceBoundaryMethod_161.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_161;
        ComplexEventPriceBoundaryPrecision_161.setString("24.490000");
        noComplexEvents_2_0_2_0.set(ComplexEventPriceBoundaryPrecision_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceBoundaryPrecision_161.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_161(3);
        noComplexEvents_2_0_2_0.set(ComplexEventPriceTimeType_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceTimeType_161.getString());
        FIX::ComplexEventType ComplexEventType_161(5);
        noComplexEvents_2_0_2_0.set(ComplexEventType_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventType_161.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_161;
        ComplexOptPayoutAmount_161.setString("13474389");
        noComplexEvents_2_0_2_0.set(ComplexOptPayoutAmount_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexOptPayoutAmount_161.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_161);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_341;
          FIX::ComplexEventEndDate ComplexEventEndDate_341(FIX::UTCTIMESTAMP(1, 5, 56, 3, 42005));
          noComplexEventDates_2_0_0_3_0.set(ComplexEventEndDate_341);
          ComplexEventDates_NoComplexEventDates_341.insert(ComplexEventEndDate_341.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_341(FIX::UTCTIMESTAMP(21, 41, 10, 20, 112015));
          noComplexEventDates_2_0_0_3_0.set(ComplexEventStartDate_341);
          ComplexEventDates_NoComplexEventDates_341.insert(ComplexEventStartDate_341.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_341);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_679;
            FIX::ComplexEventEndTime ComplexEventEndTime_679(FIX::UTCTIMEONLY(6, 24, 44));
            noComplexEventTimes_2_0_0_0_4_0.set(ComplexEventEndTime_679);
            ComplexEventTimes_NoComplexEventTimes_679.insert(ComplexEventEndTime_679.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_679(FIX::UTCTIMEONLY(9, 13, 41));
            noComplexEventTimes_2_0_0_0_4_0.set(ComplexEventStartTime_679);
            ComplexEventTimes_NoComplexEventTimes_679.insert(ComplexEventStartTime_679.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_679);

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_680;
            FIX::ComplexEventEndTime ComplexEventEndTime_680(FIX::UTCTIMEONLY(12, 5, 11));
            noComplexEventTimes_2_0_0_0_4_1.set(ComplexEventEndTime_680);
            ComplexEventTimes_NoComplexEventTimes_680.insert(ComplexEventEndTime_680.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_680(FIX::UTCTIMEONLY(12, 21, 42));
            noComplexEventTimes_2_0_0_0_4_1.set(ComplexEventStartTime_680);
            ComplexEventTimes_NoComplexEventTimes_680.insert(ComplexEventStartTime_680.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_680);

            noComplexEventDates_2_0_0_3_0.addGroup(noComplexEventTimes_2_0_0_0_4_1);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_342;
          FIX::ComplexEventEndDate ComplexEventEndDate_342(FIX::UTCTIMESTAMP(23, 47, 33, 10, 32001));
          noComplexEventDates_2_0_0_3_1.set(ComplexEventEndDate_342);
          ComplexEventDates_NoComplexEventDates_342.insert(ComplexEventEndDate_342.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_342(FIX::UTCTIMESTAMP(4, 36, 28, 12, 32014));
          noComplexEventDates_2_0_0_3_1.set(ComplexEventStartDate_342);
          ComplexEventDates_NoComplexEventDates_342.insert(ComplexEventStartDate_342.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_342);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_681;
            FIX::ComplexEventEndTime ComplexEventEndTime_681(FIX::UTCTIMEONLY(14, 59, 35));
            noComplexEventTimes_2_0_0_1_4_0.set(ComplexEventEndTime_681);
            ComplexEventTimes_NoComplexEventTimes_681.insert(ComplexEventEndTime_681.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_681(FIX::UTCTIMEONLY(9, 48, 32));
            noComplexEventTimes_2_0_0_1_4_0.set(ComplexEventStartTime_681);
            ComplexEventTimes_NoComplexEventTimes_681.insert(ComplexEventStartTime_681.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_681);

            noComplexEventDates_2_0_0_3_1.addGroup(noComplexEventTimes_2_0_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_682;
            FIX::ComplexEventEndTime ComplexEventEndTime_682(FIX::UTCTIMEONLY(1, 38, 14));
            noComplexEventTimes_2_0_0_1_4_1.set(ComplexEventEndTime_682);
            ComplexEventTimes_NoComplexEventTimes_682.insert(ComplexEventEndTime_682.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_682(FIX::UTCTIMEONLY(6, 27, 50));
            noComplexEventTimes_2_0_0_1_4_1.set(ComplexEventStartTime_682);
            ComplexEventTimes_NoComplexEventTimes_682.insert(ComplexEventStartTime_682.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_682);

            noComplexEventDates_2_0_0_3_1.addGroup(noComplexEventTimes_2_0_0_1_4_1);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_343;
          FIX::ComplexEventEndDate ComplexEventEndDate_343(FIX::UTCTIMESTAMP(18, 38, 9, 24, 92010));
          noComplexEventDates_2_0_0_3_2.set(ComplexEventEndDate_343);
          ComplexEventDates_NoComplexEventDates_343.insert(ComplexEventEndDate_343.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_343(FIX::UTCTIMESTAMP(0, 40, 55, 20, 72001));
          noComplexEventDates_2_0_0_3_2.set(ComplexEventStartDate_343);
          ComplexEventDates_NoComplexEventDates_343.insert(ComplexEventStartDate_343.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_343);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_683;
            FIX::ComplexEventEndTime ComplexEventEndTime_683(FIX::UTCTIMEONLY(1, 43, 43));
            noComplexEventTimes_2_0_0_2_4_0.set(ComplexEventEndTime_683);
            ComplexEventTimes_NoComplexEventTimes_683.insert(ComplexEventEndTime_683.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_683(FIX::UTCTIMEONLY(20, 24, 9));
            noComplexEventTimes_2_0_0_2_4_0.set(ComplexEventStartTime_683);
            ComplexEventTimes_NoComplexEventTimes_683.insert(ComplexEventStartTime_683.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_683);

            noComplexEventDates_2_0_0_3_2.addGroup(noComplexEventTimes_2_0_0_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_684;
            FIX::ComplexEventEndTime ComplexEventEndTime_684(FIX::UTCTIMEONLY(1, 39, 41));
            noComplexEventTimes_2_0_0_2_4_1.set(ComplexEventEndTime_684);
            ComplexEventTimes_NoComplexEventTimes_684.insert(ComplexEventEndTime_684.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_684(FIX::UTCTIMEONLY(10, 8, 3));
            noComplexEventTimes_2_0_0_2_4_1.set(ComplexEventStartTime_684);
            ComplexEventTimes_NoComplexEventTimes_684.insert(ComplexEventStartTime_684.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_684);

            noComplexEventDates_2_0_0_3_2.addGroup(noComplexEventTimes_2_0_0_2_4_1);
          }
          noComplexEvents_2_0_2_0.addGroup(noComplexEventDates_2_0_0_3_2);
        }
        noRelatedSym_2_1_0.addGroup(noComplexEvents_2_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_2_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_162;
        FIX::ComplexEventCondition ComplexEventCondition_162(2);
        noComplexEvents_2_0_2_1.set(ComplexEventCondition_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventCondition_162.getString());
        FIX::ComplexEventPrice ComplexEventPrice_162;
        ComplexEventPrice_162.setString("4688330");
        noComplexEvents_2_0_2_1.set(ComplexEventPrice_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventPrice_162.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_162(2);
        noComplexEvents_2_0_2_1.set(ComplexEventPriceBoundaryMethod_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceBoundaryMethod_162.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_162;
        ComplexEventPriceBoundaryPrecision_162.setString("41.380000");
        noComplexEvents_2_0_2_1.set(ComplexEventPriceBoundaryPrecision_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceBoundaryPrecision_162.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_162(1);
        noComplexEvents_2_0_2_1.set(ComplexEventPriceTimeType_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceTimeType_162.getString());
        FIX::ComplexEventType ComplexEventType_162(7);
        noComplexEvents_2_0_2_1.set(ComplexEventType_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventType_162.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_162;
        ComplexOptPayoutAmount_162.setString("2016918");
        noComplexEvents_2_0_2_1.set(ComplexOptPayoutAmount_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexOptPayoutAmount_162.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_162);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_344;
          FIX::ComplexEventEndDate ComplexEventEndDate_344(FIX::UTCTIMESTAMP(2, 42, 35, 4, 22004));
          noComplexEventDates_2_0_1_3_0.set(ComplexEventEndDate_344);
          ComplexEventDates_NoComplexEventDates_344.insert(ComplexEventEndDate_344.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_344(FIX::UTCTIMESTAMP(7, 45, 0, 0, 102000));
          noComplexEventDates_2_0_1_3_0.set(ComplexEventStartDate_344);
          ComplexEventDates_NoComplexEventDates_344.insert(ComplexEventStartDate_344.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_344);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_685;
            FIX::ComplexEventEndTime ComplexEventEndTime_685(FIX::UTCTIMEONLY(1, 25, 25));
            noComplexEventTimes_2_0_1_0_4_0.set(ComplexEventEndTime_685);
            ComplexEventTimes_NoComplexEventTimes_685.insert(ComplexEventEndTime_685.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_685(FIX::UTCTIMEONLY(15, 34, 54));
            noComplexEventTimes_2_0_1_0_4_0.set(ComplexEventStartTime_685);
            ComplexEventTimes_NoComplexEventTimes_685.insert(ComplexEventStartTime_685.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_685);

            noComplexEventDates_2_0_1_3_0.addGroup(noComplexEventTimes_2_0_1_0_4_0);
          }
          noComplexEvents_2_0_2_1.addGroup(noComplexEventDates_2_0_1_3_0);
        }
        noRelatedSym_2_1_0.addGroup(noComplexEvents_2_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_2_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_163;
        FIX::ComplexEventCondition ComplexEventCondition_163(1);
        noComplexEvents_2_0_2_2.set(ComplexEventCondition_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventCondition_163.getString());
        FIX::ComplexEventPrice ComplexEventPrice_163;
        ComplexEventPrice_163.setString("18502074");
        noComplexEvents_2_0_2_2.set(ComplexEventPrice_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventPrice_163.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_163(3);
        noComplexEvents_2_0_2_2.set(ComplexEventPriceBoundaryMethod_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceBoundaryMethod_163.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_163;
        ComplexEventPriceBoundaryPrecision_163.setString("65.630000");
        noComplexEvents_2_0_2_2.set(ComplexEventPriceBoundaryPrecision_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceBoundaryPrecision_163.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_163(3);
        noComplexEvents_2_0_2_2.set(ComplexEventPriceTimeType_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceTimeType_163.getString());
        FIX::ComplexEventType ComplexEventType_163(8);
        noComplexEvents_2_0_2_2.set(ComplexEventType_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventType_163.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_163;
        ComplexOptPayoutAmount_163.setString("12781084");
        noComplexEvents_2_0_2_2.set(ComplexOptPayoutAmount_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexOptPayoutAmount_163.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_163);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_345;
          FIX::ComplexEventEndDate ComplexEventEndDate_345(FIX::UTCTIMESTAMP(20, 49, 27, 16, 32001));
          noComplexEventDates_2_0_2_3_0.set(ComplexEventEndDate_345);
          ComplexEventDates_NoComplexEventDates_345.insert(ComplexEventEndDate_345.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_345(FIX::UTCTIMESTAMP(13, 23, 26, 1, 92000));
          noComplexEventDates_2_0_2_3_0.set(ComplexEventStartDate_345);
          ComplexEventDates_NoComplexEventDates_345.insert(ComplexEventStartDate_345.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_345);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_686;
            FIX::ComplexEventEndTime ComplexEventEndTime_686(FIX::UTCTIMEONLY(8, 4, 34));
            noComplexEventTimes_2_0_2_0_4_0.set(ComplexEventEndTime_686);
            ComplexEventTimes_NoComplexEventTimes_686.insert(ComplexEventEndTime_686.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_686(FIX::UTCTIMEONLY(11, 0, 48));
            noComplexEventTimes_2_0_2_0_4_0.set(ComplexEventStartTime_686);
            ComplexEventTimes_NoComplexEventTimes_686.insert(ComplexEventStartTime_686.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_686);

            noComplexEventDates_2_0_2_3_0.addGroup(noComplexEventTimes_2_0_2_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_687;
            FIX::ComplexEventEndTime ComplexEventEndTime_687(FIX::UTCTIMEONLY(5, 8, 26));
            noComplexEventTimes_2_0_2_0_4_1.set(ComplexEventEndTime_687);
            ComplexEventTimes_NoComplexEventTimes_687.insert(ComplexEventEndTime_687.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_687(FIX::UTCTIMEONLY(21, 4, 21));
            noComplexEventTimes_2_0_2_0_4_1.set(ComplexEventStartTime_687);
            ComplexEventTimes_NoComplexEventTimes_687.insert(ComplexEventStartTime_687.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_687);

            noComplexEventDates_2_0_2_3_0.addGroup(noComplexEventTimes_2_0_2_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_688;
            FIX::ComplexEventEndTime ComplexEventEndTime_688(FIX::UTCTIMEONLY(4, 10, 52));
            noComplexEventTimes_2_0_2_0_4_2.set(ComplexEventEndTime_688);
            ComplexEventTimes_NoComplexEventTimes_688.insert(ComplexEventEndTime_688.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_688(FIX::UTCTIMEONLY(4, 30, 58));
            noComplexEventTimes_2_0_2_0_4_2.set(ComplexEventStartTime_688);
            ComplexEventTimes_NoComplexEventTimes_688.insert(ComplexEventStartTime_688.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_688);

            noComplexEventDates_2_0_2_3_0.addGroup(noComplexEventTimes_2_0_2_0_4_2);
          }
          noComplexEvents_2_0_2_2.addGroup(noComplexEventDates_2_0_2_3_0);
        }
        noRelatedSym_2_1_0.addGroup(noComplexEvents_2_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_2_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_166;
        FIX::EventDate EventDate_166("LOCALMKTDATE_1811750925");
        noEvents_2_0_2_0.set(EventDate_166);
        EvntGrp_NoEvents_166.insert(EventDate_166.getString());
        FIX::EventPx EventPx_166;
        EventPx_166.setString("15314780");
        noEvents_2_0_2_0.set(EventPx_166);
        EvntGrp_NoEvents_166.insert(EventPx_166.getString());
        FIX::EventText EventText_166("STRING_1357626175");
        noEvents_2_0_2_0.set(EventText_166);
        EvntGrp_NoEvents_166.insert(EventText_166.getString());
        FIX::EventTime EventTime_166(FIX::UTCTIMESTAMP(22, 34, 10, 22, 72009));
        noEvents_2_0_2_0.set(EventTime_166);
        EvntGrp_NoEvents_166.insert(EventTime_166.getString());
        FIX::EventType EventType_166(6);
        noEvents_2_0_2_0.set(EventType_166);
        EvntGrp_NoEvents_166.insert(EventType_166.getString());
        all_values.push_back(EvntGrp_NoEvents_166);

        noRelatedSym_2_1_0.addGroup(noEvents_2_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_168;
        FIX::InstrumentPartyID InstrumentPartyID_168("STRING_1077257017");
        noInstrumentParties_2_0_2_0.set(InstrumentPartyID_168);
        InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyID_168.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_168('1');
        noInstrumentParties_2_0_2_0.set(InstrumentPartyIDSource_168);
        InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyIDSource_168.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_168(2110507321);
        noInstrumentParties_2_0_2_0.set(InstrumentPartyRole_168);
        InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyRole_168.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_168);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336;
          FIX::InstrumentPartySubID InstrumentPartySubID_336("STRING_1508126641");
          noInstrumentPartySubIDs_2_0_0_3_0.set(InstrumentPartySubID_336);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336.insert(InstrumentPartySubID_336.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_336(684948079);
          noInstrumentPartySubIDs_2_0_0_3_0.set(InstrumentPartySubIDType_336);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336.insert(InstrumentPartySubIDType_336.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337;
          FIX::InstrumentPartySubID InstrumentPartySubID_337("STRING_773250397");
          noInstrumentPartySubIDs_2_0_0_3_1.set(InstrumentPartySubID_337);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337.insert(InstrumentPartySubID_337.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_337(385999047);
          noInstrumentPartySubIDs_2_0_0_3_1.set(InstrumentPartySubIDType_337);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337.insert(InstrumentPartySubIDType_337.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);

          noInstrumentParties_2_0_2_0.addGroup(noInstrumentPartySubIDs_2_0_0_3_1);
        }
        noRelatedSym_2_1_0.addGroup(noInstrumentParties_2_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_169;
        FIX::InstrumentPartyID InstrumentPartyID_169("STRING_537497295");
        noInstrumentParties_2_0_2_1.set(InstrumentPartyID_169);
        InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyID_169.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_169('1');
        noInstrumentParties_2_0_2_1.set(InstrumentPartyIDSource_169);
        InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyIDSource_169.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_169(560133892);
        noInstrumentParties_2_0_2_1.set(InstrumentPartyRole_169);
        InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyRole_169.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_169);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338;
          FIX::InstrumentPartySubID InstrumentPartySubID_338("STRING_789603360");
          noInstrumentPartySubIDs_2_0_1_3_0.set(InstrumentPartySubID_338);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338.insert(InstrumentPartySubID_338.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_338(1201596885);
          noInstrumentPartySubIDs_2_0_1_3_0.set(InstrumentPartySubIDType_338);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338.insert(InstrumentPartySubIDType_338.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);

          noInstrumentParties_2_0_2_1.addGroup(noInstrumentPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339;
          FIX::InstrumentPartySubID InstrumentPartySubID_339("STRING_1442531248");
          noInstrumentPartySubIDs_2_0_1_3_1.set(InstrumentPartySubID_339);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339.insert(InstrumentPartySubID_339.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_339(2055508828);
          noInstrumentPartySubIDs_2_0_1_3_1.set(InstrumentPartySubIDType_339);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339.insert(InstrumentPartySubIDType_339.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);

          noInstrumentParties_2_0_2_1.addGroup(noInstrumentPartySubIDs_2_0_1_3_1);
        }
        noRelatedSym_2_1_0.addGroup(noInstrumentParties_2_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_2_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_170;
        FIX::InstrumentPartyID InstrumentPartyID_170("STRING_1067133247");
        noInstrumentParties_2_0_2_2.set(InstrumentPartyID_170);
        InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyID_170.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_170('9');
        noInstrumentParties_2_0_2_2.set(InstrumentPartyIDSource_170);
        InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyIDSource_170.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_170(1357339694);
        noInstrumentParties_2_0_2_2.set(InstrumentPartyRole_170);
        InstrumentParties_NoInstrumentParties_170.insert(InstrumentPartyRole_170.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_170);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340;
          FIX::InstrumentPartySubID InstrumentPartySubID_340("STRING_342817346");
          noInstrumentPartySubIDs_2_0_2_3_0.set(InstrumentPartySubID_340);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340.insert(InstrumentPartySubID_340.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_340(567482222);
          noInstrumentPartySubIDs_2_0_2_3_0.set(InstrumentPartySubIDType_340);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340.insert(InstrumentPartySubIDType_340.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);

          noInstrumentParties_2_0_2_2.addGroup(noInstrumentPartySubIDs_2_0_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341;
          FIX::InstrumentPartySubID InstrumentPartySubID_341("STRING_209284305");
          noInstrumentPartySubIDs_2_0_2_3_1.set(InstrumentPartySubID_341);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341.insert(InstrumentPartySubID_341.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_341(2019163704);
          noInstrumentPartySubIDs_2_0_2_3_1.set(InstrumentPartySubIDType_341);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341.insert(InstrumentPartySubIDType_341.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);

          noInstrumentParties_2_0_2_2.addGroup(noInstrumentPartySubIDs_2_0_2_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_0_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342;
          FIX::InstrumentPartySubID InstrumentPartySubID_342("STRING_1412188716");
          noInstrumentPartySubIDs_2_0_2_3_2.set(InstrumentPartySubID_342);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342.insert(InstrumentPartySubID_342.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_342(479340116);
          noInstrumentPartySubIDs_2_0_2_3_2.set(InstrumentPartySubIDType_342);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342.insert(InstrumentPartySubIDType_342.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);

          noInstrumentParties_2_0_2_2.addGroup(noInstrumentPartySubIDs_2_0_2_3_2);
        }
        noRelatedSym_2_1_0.addGroup(noInstrumentParties_2_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_2_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_179;
        FIX::SecurityAltID SecurityAltID_179("STRING_1677249127");
        noSecurityAltID_2_0_2_0.set(SecurityAltID_179);
        SecAltIDGrp_NoSecurityAltID_179.insert(SecurityAltID_179.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_179("STRING_462309333");
        noSecurityAltID_2_0_2_0.set(SecurityAltIDSource_179);
        SecAltIDGrp_NoSecurityAltID_179.insert(SecurityAltIDSource_179.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_179);

        noRelatedSym_2_1_0.addGroup(noSecurityAltID_2_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_172;
      FIX::SecurityXML SecurityXML_173("XMLDATA_1715757692");
      noRelatedSym_2_1_0.set(SecurityXML_173);
      FIX::SecurityXMLLen SecurityXMLLen_86(1994764956);
      noRelatedSym_2_1_0.set(SecurityXMLLen_86);
      FIX::SecurityXMLSchema SecurityXMLSchema_86("STRING_1539566350");
      noRelatedSym_2_1_0.set(SecurityXMLSchema_86);
      SecurityXML_172.insert(SecurityXMLSchema_86.getString());
      all_values.push_back(SecurityXML_172);

      noAsgnReqs_0_2.addGroup(noRelatedSym_2_1_0);
    }
    msg.addGroup(noAsgnReqs_0_2);
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
