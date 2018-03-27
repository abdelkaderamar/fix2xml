#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/StreamAssignmentRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::StreamAssignmentRequest msg;

  list<multiset<string>> all_values;
  multiset<string> StreamAssignmentRequest_0;
  FIX::StreamAsgnReqID StreamAsgnReqID_1("STRING_474489218");
  msg.set(StreamAsgnReqID_1);
  StreamAssignmentRequest_0.insert(StreamAsgnReqID_1.getString());
  FIX::StreamAsgnReqType StreamAsgnReqType_1(1);
  msg.set(StreamAsgnReqType_1);
  StreamAssignmentRequest_0.insert(StreamAsgnReqType_1.getString());
  all_values.push_back(StreamAssignmentRequest_0);

  // StrmAsgnReqGrp
  // Group StrmAsgnReqGrp.NoAsgnReqs
  {
    FIX50SP2::StreamAssignmentRequest::NoAsgnReqs noAsgnReqs_0_0;
    // StrmAsgnReqGrp.NoAsgnReqs
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_148;
      FIX::PartyID PartyID_148("STRING_461653424");
      noPartyIDs_0_1_0.set(PartyID_148);
      Parties_NoPartyIDs_148.insert(PartyID_148.getString());
      FIX::PartyIDSource PartyIDSource_148('A');
      noPartyIDs_0_1_0.set(PartyIDSource_148);
      Parties_NoPartyIDs_148.insert(PartyIDSource_148.getString());
      FIX::PartyRole PartyRole_148(8);
      noPartyIDs_0_1_0.set(PartyRole_148);
      Parties_NoPartyIDs_148.insert(PartyRole_148.getString());
      all_values.push_back(Parties_NoPartyIDs_148);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_290;
        FIX::PartySubID PartySubID_290("STRING_45979273");
        noPartySubIDs_0_0_2_0.set(PartySubID_290);
        PtysSubGrp_NoPartySubIDs_290.insert(PartySubID_290.getString());
        FIX::PartySubIDType PartySubIDType_290(12);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_290);
        PtysSubGrp_NoPartySubIDs_290.insert(PartySubIDType_290.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_290);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // StrmAsgnReqInstrmtGrp
    // Group StrmAsgnReqInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_0;
      FIX::MDEntrySize MDEntrySize_5;
      MDEntrySize_5.setString("14033189");
      noRelatedSym_0_1_0.set(MDEntrySize_5);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(MDEntrySize_5.getString());
      FIX::MDStreamID MDStreamID_9("STRING_1887270118");
      noRelatedSym_0_1_0.set(MDStreamID_9);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(MDStreamID_9.getString());
      FIX::SettlType SettlType_34("STRING_0");
      noRelatedSym_0_1_0.set(SettlType_34);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(SettlType_34.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_0);

      // Instrument
      multiset<string> Instrument_87;
      FIX::AttachmentPoint AttachmentPoint_87;
      AttachmentPoint_87.setString("11.890000");
      noRelatedSym_0_1_0.set(AttachmentPoint_87);
      Instrument_87.insert(AttachmentPoint_87.getString());
      FIX::CFICode CFICode_94("STRING_2096554424");
      noRelatedSym_0_1_0.set(CFICode_94);
      Instrument_87.insert(CFICode_94.getString());
      FIX::CPProgram CPProgram_87(2);
      noRelatedSym_0_1_0.set(CPProgram_87);
      Instrument_87.insert(CPProgram_87.getString());
      FIX::CPRegType CPRegType_87("STRING_1235506258");
      noRelatedSym_0_1_0.set(CPRegType_87);
      Instrument_87.insert(CPRegType_87.getString());
      FIX::CapPrice CapPrice_87;
      CapPrice_87.setString("4284108");
      noRelatedSym_0_1_0.set(CapPrice_87);
      Instrument_87.insert(CapPrice_87.getString());
      FIX::ContractMultiplier ContractMultiplier_87;
      ContractMultiplier_87.setString("863969");
      noRelatedSym_0_1_0.set(ContractMultiplier_87);
      Instrument_87.insert(ContractMultiplier_87.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_87(0);
      noRelatedSym_0_1_0.set(ContractMultiplierUnit_87);
      Instrument_87.insert(ContractMultiplierUnit_87.getString());
      FIX::ContractSettlMonth ContractSettlMonth_87("MONTHYEAR_890720225");
      noRelatedSym_0_1_0.set(ContractSettlMonth_87);
      Instrument_87.insert(ContractSettlMonth_87.getString());
      FIX::CountryOfIssue CountryOfIssue_87("COUNTRY_1802154655");
      noRelatedSym_0_1_0.set(CountryOfIssue_87);
      Instrument_87.insert(CountryOfIssue_87.getString());
      FIX::CouponPaymentDate CouponPaymentDate_87("LOCALMKTDATE_612553045");
      noRelatedSym_0_1_0.set(CouponPaymentDate_87);
      Instrument_87.insert(CouponPaymentDate_87.getString());
      FIX::CouponRate CouponRate_87;
      CouponRate_87.setString("29.270000");
      noRelatedSym_0_1_0.set(CouponRate_87);
      Instrument_87.insert(CouponRate_87.getString());
      FIX::CreditRating CreditRating_87("STRING_382518185");
      noRelatedSym_0_1_0.set(CreditRating_87);
      Instrument_87.insert(CreditRating_87.getString());
      FIX::DatedDate DatedDate_87("LOCALMKTDATE_422858027");
      noRelatedSym_0_1_0.set(DatedDate_87);
      Instrument_87.insert(DatedDate_87.getString());
      FIX::DetachmentPoint DetachmentPoint_87;
      DetachmentPoint_87.setString("42.610000");
      noRelatedSym_0_1_0.set(DetachmentPoint_87);
      Instrument_87.insert(DetachmentPoint_87.getString());
      FIX::EncodedIssuer EncodedIssuer_87("DATA_471008356");
      noRelatedSym_0_1_0.set(EncodedIssuer_87);
      Instrument_87.insert(EncodedIssuer_87.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_87(918111088);
      noRelatedSym_0_1_0.set(EncodedIssuerLen_87);
      Instrument_87.insert(EncodedIssuerLen_87.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_87("DATA_1441272343");
      noRelatedSym_0_1_0.set(EncodedSecurityDesc_87);
      Instrument_87.insert(EncodedSecurityDesc_87.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_87(945497574);
      noRelatedSym_0_1_0.set(EncodedSecurityDescLen_87);
      Instrument_87.insert(EncodedSecurityDescLen_87.getString());
      FIX::ExerciseStyle ExerciseStyle_87(0);
      noRelatedSym_0_1_0.set(ExerciseStyle_87);
      Instrument_87.insert(ExerciseStyle_87.getString());
      FIX::Factor Factor_87;
      Factor_87.setString("7896230");
      noRelatedSym_0_1_0.set(Factor_87);
      Instrument_87.insert(Factor_87.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_87(true);
      noRelatedSym_0_1_0.set(FlexProductEligibilityIndicator_87);
      Instrument_87.insert(FlexProductEligibilityIndicator_87.getString());
      FIX::FlexibleIndicator FlexibleIndicator_87(true);
      noRelatedSym_0_1_0.set(FlexibleIndicator_87);
      Instrument_87.insert(FlexibleIndicator_87.getString());
      FIX::FloorPrice FloorPrice_87;
      FloorPrice_87.setString("9275771");
      noRelatedSym_0_1_0.set(FloorPrice_87);
      Instrument_87.insert(FloorPrice_87.getString());
      FIX::FlowScheduleType FlowScheduleType_87(2);
      noRelatedSym_0_1_0.set(FlowScheduleType_87);
      Instrument_87.insert(FlowScheduleType_87.getString());
      FIX::InstrRegistry InstrRegistry_87("STRING_21732244");
      noRelatedSym_0_1_0.set(InstrRegistry_87);
      Instrument_87.insert(InstrRegistry_87.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_87('9');
      noRelatedSym_0_1_0.set(InstrmtAssignmentMethod_87);
      Instrument_87.insert(InstrmtAssignmentMethod_87.getString());
      FIX::InterestAccrualDate InterestAccrualDate_87("LOCALMKTDATE_1077242978");
      noRelatedSym_0_1_0.set(InterestAccrualDate_87);
      Instrument_87.insert(InterestAccrualDate_87.getString());
      FIX::IssueDate IssueDate_87("LOCALMKTDATE_737256206");
      noRelatedSym_0_1_0.set(IssueDate_87);
      Instrument_87.insert(IssueDate_87.getString());
      FIX::Issuer Issuer_87("STRING_229391761");
      noRelatedSym_0_1_0.set(Issuer_87);
      Instrument_87.insert(Issuer_87.getString());
      FIX::ListMethod ListMethod_87(1);
      noRelatedSym_0_1_0.set(ListMethod_87);
      Instrument_87.insert(ListMethod_87.getString());
      FIX::LocaleOfIssue LocaleOfIssue_87("STRING_1795597514");
      noRelatedSym_0_1_0.set(LocaleOfIssue_87);
      Instrument_87.insert(LocaleOfIssue_87.getString());
      FIX::MaturityDate MaturityDate_87("LOCALMKTDATE_52709302");
      noRelatedSym_0_1_0.set(MaturityDate_87);
      Instrument_87.insert(MaturityDate_87.getString());
      FIX::MaturityMonthYear MaturityMonthYear_87("MONTHYEAR_766100225");
      noRelatedSym_0_1_0.set(MaturityMonthYear_87);
      Instrument_87.insert(MaturityMonthYear_87.getString());
      FIX::MaturityTime MaturityTime_87("TZTIMEONLY_578135231");
      noRelatedSym_0_1_0.set(MaturityTime_87);
      Instrument_87.insert(MaturityTime_87.getString());
      FIX::MinPriceIncrement MinPriceIncrement_87;
      MinPriceIncrement_87.setString("12882155");
      noRelatedSym_0_1_0.set(MinPriceIncrement_87);
      Instrument_87.insert(MinPriceIncrement_87.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_87;
      MinPriceIncrementAmount_87.setString("11945111");
      noRelatedSym_0_1_0.set(MinPriceIncrementAmount_87);
      Instrument_87.insert(MinPriceIncrementAmount_87.getString());
      FIX::NTPositionLimit NTPositionLimit_87(664532194);
      noRelatedSym_0_1_0.set(NTPositionLimit_87);
      Instrument_87.insert(NTPositionLimit_87.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_87;
      NotionalPercentageOutstanding_87.setString("72.970000");
      noRelatedSym_0_1_0.set(NotionalPercentageOutstanding_87);
      Instrument_87.insert(NotionalPercentageOutstanding_87.getString());
      FIX::OptAttribute OptAttribute_87('2');
      noRelatedSym_0_1_0.set(OptAttribute_87);
      Instrument_87.insert(OptAttribute_87.getString());
      FIX::OptPayoutAmount OptPayoutAmount_87;
      OptPayoutAmount_87.setString("3192032");
      noRelatedSym_0_1_0.set(OptPayoutAmount_87);
      Instrument_87.insert(OptPayoutAmount_87.getString());
      FIX::OptPayoutType OptPayoutType_87(3);
      noRelatedSym_0_1_0.set(OptPayoutType_87);
      Instrument_87.insert(OptPayoutType_87.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_87;
      OriginalNotionalPercentageOutstanding_87.setString("6.210000");
      noRelatedSym_0_1_0.set(OriginalNotionalPercentageOutstanding_87);
      Instrument_87.insert(OriginalNotionalPercentageOutstanding_87.getString());
      FIX::Pool Pool_87("STRING_701721387");
      noRelatedSym_0_1_0.set(Pool_87);
      Instrument_87.insert(Pool_87.getString());
      FIX::PositionLimit PositionLimit_87(941414722);
      noRelatedSym_0_1_0.set(PositionLimit_87);
      Instrument_87.insert(PositionLimit_87.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_87("STRING_INT");
      noRelatedSym_0_1_0.set(PriceQuoteMethod_87);
      Instrument_87.insert(PriceQuoteMethod_87.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_87("STRING_1172729743");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasure_87);
      Instrument_87.insert(PriceUnitOfMeasure_87.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_87;
      PriceUnitOfMeasureQty_87.setString("18595258");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasureQty_87);
      Instrument_87.insert(PriceUnitOfMeasureQty_87.getString());
      FIX::Product Product_97(5);
      noRelatedSym_0_1_0.set(Product_97);
      Instrument_87.insert(Product_97.getString());
      FIX::ProductComplex ProductComplex_87("STRING_2118227317");
      noRelatedSym_0_1_0.set(ProductComplex_87);
      Instrument_87.insert(ProductComplex_87.getString());
      FIX::PutOrCall PutOrCall_87(0);
      noRelatedSym_0_1_0.set(PutOrCall_87);
      Instrument_87.insert(PutOrCall_87.getString());
      FIX::RedemptionDate RedemptionDate_87("LOCALMKTDATE_1853116654");
      noRelatedSym_0_1_0.set(RedemptionDate_87);
      Instrument_87.insert(RedemptionDate_87.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_87("STRING_1950864353");
      noRelatedSym_0_1_0.set(RepoCollateralSecurityType_87);
      Instrument_87.insert(RepoCollateralSecurityType_87.getString());
      FIX::RepurchaseRate RepurchaseRate_87;
      RepurchaseRate_87.setString("48.270000");
      noRelatedSym_0_1_0.set(RepurchaseRate_87);
      Instrument_87.insert(RepurchaseRate_87.getString());
      FIX::RepurchaseTerm RepurchaseTerm_87(633210174);
      noRelatedSym_0_1_0.set(RepurchaseTerm_87);
      Instrument_87.insert(RepurchaseTerm_87.getString());
      FIX::RestructuringType RestructuringType_87("STRING_MR");
      noRelatedSym_0_1_0.set(RestructuringType_87);
      Instrument_87.insert(RestructuringType_87.getString());
      FIX::SecurityDesc SecurityDesc_87("STRING_1949667071");
      noRelatedSym_0_1_0.set(SecurityDesc_87);
      Instrument_87.insert(SecurityDesc_87.getString());
      FIX::SecurityExchange SecurityExchange_87("EXCHANGE_1606766616");
      noRelatedSym_0_1_0.set(SecurityExchange_87);
      Instrument_87.insert(SecurityExchange_87.getString());
      FIX::SecurityGroup SecurityGroup_87("STRING_801997068");
      noRelatedSym_0_1_0.set(SecurityGroup_87);
      Instrument_87.insert(SecurityGroup_87.getString());
      FIX::SecurityID SecurityID_87("STRING_539439630");
      noRelatedSym_0_1_0.set(SecurityID_87);
      Instrument_87.insert(SecurityID_87.getString());
      FIX::SecurityIDSource SecurityIDSource_87("STRING_A");
      noRelatedSym_0_1_0.set(SecurityIDSource_87);
      Instrument_87.insert(SecurityIDSource_87.getString());
      FIX::SecurityStatus SecurityStatus_88("STRING_2");
      noRelatedSym_0_1_0.set(SecurityStatus_88);
      Instrument_87.insert(SecurityStatus_88.getString());
      FIX::SecuritySubType SecuritySubType_92("STRING_187553496");
      noRelatedSym_0_1_0.set(SecuritySubType_92);
      Instrument_87.insert(SecuritySubType_92.getString());
      FIX::SecurityType SecurityType_97("STRING_CS");
      noRelatedSym_0_1_0.set(SecurityType_97);
      Instrument_87.insert(SecurityType_97.getString());
      FIX::Seniority Seniority_87("STRING_SB");
      noRelatedSym_0_1_0.set(Seniority_87);
      Instrument_87.insert(Seniority_87.getString());
      FIX::SettlMethod SettlMethod_87('P');
      noRelatedSym_0_1_0.set(SettlMethod_87);
      Instrument_87.insert(SettlMethod_87.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_87("STRING_1029599592");
      noRelatedSym_0_1_0.set(SettleOnOpenFlag_87);
      Instrument_87.insert(SettleOnOpenFlag_87.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_87("STRING_1432154211");
      noRelatedSym_0_1_0.set(StateOrProvinceOfIssue_87);
      Instrument_87.insert(StateOrProvinceOfIssue_87.getString());
      FIX::StrikeCurrency StrikeCurrency_87("CHF");
      noRelatedSym_0_1_0.set(StrikeCurrency_87);
      Instrument_87.insert(StrikeCurrency_87.getString());
      FIX::StrikeMultiplier StrikeMultiplier_87;
      StrikeMultiplier_87.setString("13699019");
      noRelatedSym_0_1_0.set(StrikeMultiplier_87);
      Instrument_87.insert(StrikeMultiplier_87.getString());
      FIX::StrikePrice StrikePrice_87;
      StrikePrice_87.setString("17494241");
      noRelatedSym_0_1_0.set(StrikePrice_87);
      Instrument_87.insert(StrikePrice_87.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_87(2);
      noRelatedSym_0_1_0.set(StrikePriceBoundaryMethod_87);
      Instrument_87.insert(StrikePriceBoundaryMethod_87.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_87;
      StrikePriceBoundaryPrecision_87.setString("25.260000");
      noRelatedSym_0_1_0.set(StrikePriceBoundaryPrecision_87);
      Instrument_87.insert(StrikePriceBoundaryPrecision_87.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_87(4);
      noRelatedSym_0_1_0.set(StrikePriceDeterminationMethod_87);
      Instrument_87.insert(StrikePriceDeterminationMethod_87.getString());
      FIX::StrikeValue StrikeValue_87;
      StrikeValue_87.setString("2480910");
      noRelatedSym_0_1_0.set(StrikeValue_87);
      Instrument_87.insert(StrikeValue_87.getString());
      FIX::Symbol Symbol_87("STRING_1212673761");
      noRelatedSym_0_1_0.set(Symbol_87);
      Instrument_87.insert(Symbol_87.getString());
      FIX::SymbolSfx SymbolSfx_87("STRING_CD");
      noRelatedSym_0_1_0.set(SymbolSfx_87);
      Instrument_87.insert(SymbolSfx_87.getString());
      FIX::TimeUnit TimeUnit_87("STRING_Min");
      noRelatedSym_0_1_0.set(TimeUnit_87);
      Instrument_87.insert(TimeUnit_87.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_87(4);
      noRelatedSym_0_1_0.set(UnderlyingPriceDeterminationMethod_87);
      Instrument_87.insert(UnderlyingPriceDeterminationMethod_87.getString());
      FIX::UnitOfMeasure UnitOfMeasure_87("STRING_MMbbl");
      noRelatedSym_0_1_0.set(UnitOfMeasure_87);
      Instrument_87.insert(UnitOfMeasure_87.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_87;
      UnitOfMeasureQty_87.setString("16230367");
      noRelatedSym_0_1_0.set(UnitOfMeasureQty_87);
      Instrument_87.insert(UnitOfMeasureQty_87.getString());
      FIX::ValuationMethod ValuationMethod_87("STRING_EQTY");
      noRelatedSym_0_1_0.set(ValuationMethod_87);
      Instrument_87.insert(ValuationMethod_87.getString());
      all_values.push_back(Instrument_87);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_164;
        FIX::ComplexEventCondition ComplexEventCondition_164(1);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventCondition_164.getString());
        FIX::ComplexEventPrice ComplexEventPrice_164;
        ComplexEventPrice_164.setString("4675268");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventPrice_164.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_164(1);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceBoundaryMethod_164.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_164;
        ComplexEventPriceBoundaryPrecision_164.setString("13.810000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceBoundaryPrecision_164.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_164(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceTimeType_164.getString());
        FIX::ComplexEventType ComplexEventType_164(5);
        noComplexEvents_0_0_2_0.set(ComplexEventType_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventType_164.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_164;
        ComplexOptPayoutAmount_164.setString("17451110");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexOptPayoutAmount_164.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_164);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_346;
          FIX::ComplexEventEndDate ComplexEventEndDate_346(FIX::UTCTIMESTAMP(20, 28, 21, 23, 92010));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_346);
          ComplexEventDates_NoComplexEventDates_346.insert(ComplexEventEndDate_346.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_346(FIX::UTCTIMESTAMP(17, 29, 45, 22, 42006));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_346);
          ComplexEventDates_NoComplexEventDates_346.insert(ComplexEventStartDate_346.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_346);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_689;
            FIX::ComplexEventEndTime ComplexEventEndTime_689(FIX::UTCTIMEONLY(14, 45, 51));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_689);
            ComplexEventTimes_NoComplexEventTimes_689.insert(ComplexEventEndTime_689.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_689(FIX::UTCTIMEONLY(12, 28, 34));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_689);
            ComplexEventTimes_NoComplexEventTimes_689.insert(ComplexEventStartTime_689.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_689);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_690;
            FIX::ComplexEventEndTime ComplexEventEndTime_690(FIX::UTCTIMEONLY(12, 36, 27));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_690);
            ComplexEventTimes_NoComplexEventTimes_690.insert(ComplexEventEndTime_690.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_690(FIX::UTCTIMEONLY(14, 51, 28));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_690);
            ComplexEventTimes_NoComplexEventTimes_690.insert(ComplexEventStartTime_690.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_690);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_167;
        FIX::EventDate EventDate_167("LOCALMKTDATE_157008951");
        noEvents_0_0_2_0.set(EventDate_167);
        EvntGrp_NoEvents_167.insert(EventDate_167.getString());
        FIX::EventPx EventPx_167;
        EventPx_167.setString("21263584");
        noEvents_0_0_2_0.set(EventPx_167);
        EvntGrp_NoEvents_167.insert(EventPx_167.getString());
        FIX::EventText EventText_167("STRING_811117786");
        noEvents_0_0_2_0.set(EventText_167);
        EvntGrp_NoEvents_167.insert(EventText_167.getString());
        FIX::EventTime EventTime_167(FIX::UTCTIMESTAMP(20, 50, 40, 25, 122001));
        noEvents_0_0_2_0.set(EventTime_167);
        EvntGrp_NoEvents_167.insert(EventTime_167.getString());
        FIX::EventType EventType_167(8);
        noEvents_0_0_2_0.set(EventType_167);
        EvntGrp_NoEvents_167.insert(EventType_167.getString());
        all_values.push_back(EvntGrp_NoEvents_167);

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_171;
        FIX::InstrumentPartyID InstrumentPartyID_171("STRING_1863725586");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_171);
        InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyID_171.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_171('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_171);
        InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyIDSource_171.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_171(1661478731);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_171);
        InstrumentParties_NoInstrumentParties_171.insert(InstrumentPartyRole_171.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_171);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343;
          FIX::InstrumentPartySubID InstrumentPartySubID_343("STRING_1882489165");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_343);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343.insert(InstrumentPartySubID_343.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_343(291863334);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_343);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343.insert(InstrumentPartySubIDType_343.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_180;
        FIX::SecurityAltID SecurityAltID_180("STRING_47530553");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_180);
        SecAltIDGrp_NoSecurityAltID_180.insert(SecurityAltID_180.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_180("STRING_904048283");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_180);
        SecAltIDGrp_NoSecurityAltID_180.insert(SecurityAltIDSource_180.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_180);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_181;
        FIX::SecurityAltID SecurityAltID_181("STRING_1065379944");
        noSecurityAltID_0_0_2_1.set(SecurityAltID_181);
        SecAltIDGrp_NoSecurityAltID_181.insert(SecurityAltID_181.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_181("STRING_1763543547");
        noSecurityAltID_0_0_2_1.set(SecurityAltIDSource_181);
        SecAltIDGrp_NoSecurityAltID_181.insert(SecurityAltIDSource_181.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_181);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_174;
      FIX::SecurityXML SecurityXML_175("XMLDATA_1983760103");
      noRelatedSym_0_1_0.set(SecurityXML_175);
      FIX::SecurityXMLLen SecurityXMLLen_87(1658934780);
      noRelatedSym_0_1_0.set(SecurityXMLLen_87);
      FIX::SecurityXMLSchema SecurityXMLSchema_87("STRING_390260626");
      noRelatedSym_0_1_0.set(SecurityXMLSchema_87);
      SecurityXML_174.insert(SecurityXMLSchema_87.getString());
      all_values.push_back(SecurityXML_174);

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_1;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_1;
      FIX::MDEntrySize MDEntrySize_6;
      MDEntrySize_6.setString("8427981");
      noRelatedSym_0_1_1.set(MDEntrySize_6);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(MDEntrySize_6.getString());
      FIX::MDStreamID MDStreamID_10("STRING_1882273106");
      noRelatedSym_0_1_1.set(MDStreamID_10);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(MDStreamID_10.getString());
      FIX::SettlType SettlType_35("STRING_1");
      noRelatedSym_0_1_1.set(SettlType_35);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(SettlType_35.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_1);

      // Instrument
      multiset<string> Instrument_88;
      FIX::AttachmentPoint AttachmentPoint_88;
      AttachmentPoint_88.setString("43.420000");
      noRelatedSym_0_1_1.set(AttachmentPoint_88);
      Instrument_88.insert(AttachmentPoint_88.getString());
      FIX::CFICode CFICode_95("STRING_1206937791");
      noRelatedSym_0_1_1.set(CFICode_95);
      Instrument_88.insert(CFICode_95.getString());
      FIX::CPProgram CPProgram_88(2);
      noRelatedSym_0_1_1.set(CPProgram_88);
      Instrument_88.insert(CPProgram_88.getString());
      FIX::CPRegType CPRegType_88("STRING_1443679170");
      noRelatedSym_0_1_1.set(CPRegType_88);
      Instrument_88.insert(CPRegType_88.getString());
      FIX::CapPrice CapPrice_88;
      CapPrice_88.setString("20180555");
      noRelatedSym_0_1_1.set(CapPrice_88);
      Instrument_88.insert(CapPrice_88.getString());
      FIX::ContractMultiplier ContractMultiplier_88;
      ContractMultiplier_88.setString("16269762");
      noRelatedSym_0_1_1.set(ContractMultiplier_88);
      Instrument_88.insert(ContractMultiplier_88.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_88(2);
      noRelatedSym_0_1_1.set(ContractMultiplierUnit_88);
      Instrument_88.insert(ContractMultiplierUnit_88.getString());
      FIX::ContractSettlMonth ContractSettlMonth_88("MONTHYEAR_1452813379");
      noRelatedSym_0_1_1.set(ContractSettlMonth_88);
      Instrument_88.insert(ContractSettlMonth_88.getString());
      FIX::CountryOfIssue CountryOfIssue_88("COUNTRY_20977959");
      noRelatedSym_0_1_1.set(CountryOfIssue_88);
      Instrument_88.insert(CountryOfIssue_88.getString());
      FIX::CouponPaymentDate CouponPaymentDate_88("LOCALMKTDATE_1348952996");
      noRelatedSym_0_1_1.set(CouponPaymentDate_88);
      Instrument_88.insert(CouponPaymentDate_88.getString());
      FIX::CouponRate CouponRate_88;
      CouponRate_88.setString("31.020000");
      noRelatedSym_0_1_1.set(CouponRate_88);
      Instrument_88.insert(CouponRate_88.getString());
      FIX::CreditRating CreditRating_88("STRING_2145494344");
      noRelatedSym_0_1_1.set(CreditRating_88);
      Instrument_88.insert(CreditRating_88.getString());
      FIX::DatedDate DatedDate_88("LOCALMKTDATE_1517631523");
      noRelatedSym_0_1_1.set(DatedDate_88);
      Instrument_88.insert(DatedDate_88.getString());
      FIX::DetachmentPoint DetachmentPoint_88;
      DetachmentPoint_88.setString("72.720000");
      noRelatedSym_0_1_1.set(DetachmentPoint_88);
      Instrument_88.insert(DetachmentPoint_88.getString());
      FIX::EncodedIssuer EncodedIssuer_88("DATA_1861736282");
      noRelatedSym_0_1_1.set(EncodedIssuer_88);
      Instrument_88.insert(EncodedIssuer_88.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_88(415665135);
      noRelatedSym_0_1_1.set(EncodedIssuerLen_88);
      Instrument_88.insert(EncodedIssuerLen_88.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_88("DATA_1407402355");
      noRelatedSym_0_1_1.set(EncodedSecurityDesc_88);
      Instrument_88.insert(EncodedSecurityDesc_88.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_88(646095379);
      noRelatedSym_0_1_1.set(EncodedSecurityDescLen_88);
      Instrument_88.insert(EncodedSecurityDescLen_88.getString());
      FIX::ExerciseStyle ExerciseStyle_88(2);
      noRelatedSym_0_1_1.set(ExerciseStyle_88);
      Instrument_88.insert(ExerciseStyle_88.getString());
      FIX::Factor Factor_88;
      Factor_88.setString("16992656");
      noRelatedSym_0_1_1.set(Factor_88);
      Instrument_88.insert(Factor_88.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_88(false);
      noRelatedSym_0_1_1.set(FlexProductEligibilityIndicator_88);
      Instrument_88.insert(FlexProductEligibilityIndicator_88.getString());
      FIX::FlexibleIndicator FlexibleIndicator_88(false);
      noRelatedSym_0_1_1.set(FlexibleIndicator_88);
      Instrument_88.insert(FlexibleIndicator_88.getString());
      FIX::FloorPrice FloorPrice_88;
      FloorPrice_88.setString("4558303");
      noRelatedSym_0_1_1.set(FloorPrice_88);
      Instrument_88.insert(FloorPrice_88.getString());
      FIX::FlowScheduleType FlowScheduleType_88(3);
      noRelatedSym_0_1_1.set(FlowScheduleType_88);
      Instrument_88.insert(FlowScheduleType_88.getString());
      FIX::InstrRegistry InstrRegistry_88("STRING_1961744752");
      noRelatedSym_0_1_1.set(InstrRegistry_88);
      Instrument_88.insert(InstrRegistry_88.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_88('2');
      noRelatedSym_0_1_1.set(InstrmtAssignmentMethod_88);
      Instrument_88.insert(InstrmtAssignmentMethod_88.getString());
      FIX::InterestAccrualDate InterestAccrualDate_88("LOCALMKTDATE_522537985");
      noRelatedSym_0_1_1.set(InterestAccrualDate_88);
      Instrument_88.insert(InterestAccrualDate_88.getString());
      FIX::IssueDate IssueDate_88("LOCALMKTDATE_204521731");
      noRelatedSym_0_1_1.set(IssueDate_88);
      Instrument_88.insert(IssueDate_88.getString());
      FIX::Issuer Issuer_88("STRING_1134904894");
      noRelatedSym_0_1_1.set(Issuer_88);
      Instrument_88.insert(Issuer_88.getString());
      FIX::ListMethod ListMethod_88(1);
      noRelatedSym_0_1_1.set(ListMethod_88);
      Instrument_88.insert(ListMethod_88.getString());
      FIX::LocaleOfIssue LocaleOfIssue_88("STRING_966610448");
      noRelatedSym_0_1_1.set(LocaleOfIssue_88);
      Instrument_88.insert(LocaleOfIssue_88.getString());
      FIX::MaturityDate MaturityDate_88("LOCALMKTDATE_452225589");
      noRelatedSym_0_1_1.set(MaturityDate_88);
      Instrument_88.insert(MaturityDate_88.getString());
      FIX::MaturityMonthYear MaturityMonthYear_88("MONTHYEAR_1464265234");
      noRelatedSym_0_1_1.set(MaturityMonthYear_88);
      Instrument_88.insert(MaturityMonthYear_88.getString());
      FIX::MaturityTime MaturityTime_88("TZTIMEONLY_1885708117");
      noRelatedSym_0_1_1.set(MaturityTime_88);
      Instrument_88.insert(MaturityTime_88.getString());
      FIX::MinPriceIncrement MinPriceIncrement_88;
      MinPriceIncrement_88.setString("18959047");
      noRelatedSym_0_1_1.set(MinPriceIncrement_88);
      Instrument_88.insert(MinPriceIncrement_88.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_88;
      MinPriceIncrementAmount_88.setString("13348371");
      noRelatedSym_0_1_1.set(MinPriceIncrementAmount_88);
      Instrument_88.insert(MinPriceIncrementAmount_88.getString());
      FIX::NTPositionLimit NTPositionLimit_88(1365200676);
      noRelatedSym_0_1_1.set(NTPositionLimit_88);
      Instrument_88.insert(NTPositionLimit_88.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_88;
      NotionalPercentageOutstanding_88.setString("33.020000");
      noRelatedSym_0_1_1.set(NotionalPercentageOutstanding_88);
      Instrument_88.insert(NotionalPercentageOutstanding_88.getString());
      FIX::OptAttribute OptAttribute_88('6');
      noRelatedSym_0_1_1.set(OptAttribute_88);
      Instrument_88.insert(OptAttribute_88.getString());
      FIX::OptPayoutAmount OptPayoutAmount_88;
      OptPayoutAmount_88.setString("13861786");
      noRelatedSym_0_1_1.set(OptPayoutAmount_88);
      Instrument_88.insert(OptPayoutAmount_88.getString());
      FIX::OptPayoutType OptPayoutType_88(2);
      noRelatedSym_0_1_1.set(OptPayoutType_88);
      Instrument_88.insert(OptPayoutType_88.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_88;
      OriginalNotionalPercentageOutstanding_88.setString("99.960000");
      noRelatedSym_0_1_1.set(OriginalNotionalPercentageOutstanding_88);
      Instrument_88.insert(OriginalNotionalPercentageOutstanding_88.getString());
      FIX::Pool Pool_88("STRING_1384189331");
      noRelatedSym_0_1_1.set(Pool_88);
      Instrument_88.insert(Pool_88.getString());
      FIX::PositionLimit PositionLimit_88(129060525);
      noRelatedSym_0_1_1.set(PositionLimit_88);
      Instrument_88.insert(PositionLimit_88.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_88("STRING_STD");
      noRelatedSym_0_1_1.set(PriceQuoteMethod_88);
      Instrument_88.insert(PriceQuoteMethod_88.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_88("STRING_1098441966");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasure_88);
      Instrument_88.insert(PriceUnitOfMeasure_88.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_88;
      PriceUnitOfMeasureQty_88.setString("5447256");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasureQty_88);
      Instrument_88.insert(PriceUnitOfMeasureQty_88.getString());
      FIX::Product Product_98(6);
      noRelatedSym_0_1_1.set(Product_98);
      Instrument_88.insert(Product_98.getString());
      FIX::ProductComplex ProductComplex_88("STRING_1744537345");
      noRelatedSym_0_1_1.set(ProductComplex_88);
      Instrument_88.insert(ProductComplex_88.getString());
      FIX::PutOrCall PutOrCall_88(1);
      noRelatedSym_0_1_1.set(PutOrCall_88);
      Instrument_88.insert(PutOrCall_88.getString());
      FIX::RedemptionDate RedemptionDate_88("LOCALMKTDATE_78904370");
      noRelatedSym_0_1_1.set(RedemptionDate_88);
      Instrument_88.insert(RedemptionDate_88.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_88("STRING_1690244254");
      noRelatedSym_0_1_1.set(RepoCollateralSecurityType_88);
      Instrument_88.insert(RepoCollateralSecurityType_88.getString());
      FIX::RepurchaseRate RepurchaseRate_88;
      RepurchaseRate_88.setString("75.190000");
      noRelatedSym_0_1_1.set(RepurchaseRate_88);
      Instrument_88.insert(RepurchaseRate_88.getString());
      FIX::RepurchaseTerm RepurchaseTerm_88(534734695);
      noRelatedSym_0_1_1.set(RepurchaseTerm_88);
      Instrument_88.insert(RepurchaseTerm_88.getString());
      FIX::RestructuringType RestructuringType_88("STRING_XR");
      noRelatedSym_0_1_1.set(RestructuringType_88);
      Instrument_88.insert(RestructuringType_88.getString());
      FIX::SecurityDesc SecurityDesc_88("STRING_707858623");
      noRelatedSym_0_1_1.set(SecurityDesc_88);
      Instrument_88.insert(SecurityDesc_88.getString());
      FIX::SecurityExchange SecurityExchange_88("EXCHANGE_826841475");
      noRelatedSym_0_1_1.set(SecurityExchange_88);
      Instrument_88.insert(SecurityExchange_88.getString());
      FIX::SecurityGroup SecurityGroup_88("STRING_1076385444");
      noRelatedSym_0_1_1.set(SecurityGroup_88);
      Instrument_88.insert(SecurityGroup_88.getString());
      FIX::SecurityID SecurityID_88("STRING_912380354");
      noRelatedSym_0_1_1.set(SecurityID_88);
      Instrument_88.insert(SecurityID_88.getString());
      FIX::SecurityIDSource SecurityIDSource_88("STRING_C");
      noRelatedSym_0_1_1.set(SecurityIDSource_88);
      Instrument_88.insert(SecurityIDSource_88.getString());
      FIX::SecurityStatus SecurityStatus_89("STRING_2");
      noRelatedSym_0_1_1.set(SecurityStatus_89);
      Instrument_88.insert(SecurityStatus_89.getString());
      FIX::SecuritySubType SecuritySubType_93("STRING_1878990803");
      noRelatedSym_0_1_1.set(SecuritySubType_93);
      Instrument_88.insert(SecuritySubType_93.getString());
      FIX::SecurityType SecurityType_98("STRING_BN");
      noRelatedSym_0_1_1.set(SecurityType_98);
      Instrument_88.insert(SecurityType_98.getString());
      FIX::Seniority Seniority_88("STRING_SD");
      noRelatedSym_0_1_1.set(Seniority_88);
      Instrument_88.insert(Seniority_88.getString());
      FIX::SettlMethod SettlMethod_88('C');
      noRelatedSym_0_1_1.set(SettlMethod_88);
      Instrument_88.insert(SettlMethod_88.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_88("STRING_14909422");
      noRelatedSym_0_1_1.set(SettleOnOpenFlag_88);
      Instrument_88.insert(SettleOnOpenFlag_88.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_88("STRING_1985331636");
      noRelatedSym_0_1_1.set(StateOrProvinceOfIssue_88);
      Instrument_88.insert(StateOrProvinceOfIssue_88.getString());
      FIX::StrikeCurrency StrikeCurrency_88("GBP");
      noRelatedSym_0_1_1.set(StrikeCurrency_88);
      Instrument_88.insert(StrikeCurrency_88.getString());
      FIX::StrikeMultiplier StrikeMultiplier_88;
      StrikeMultiplier_88.setString("4780148");
      noRelatedSym_0_1_1.set(StrikeMultiplier_88);
      Instrument_88.insert(StrikeMultiplier_88.getString());
      FIX::StrikePrice StrikePrice_88;
      StrikePrice_88.setString("736272");
      noRelatedSym_0_1_1.set(StrikePrice_88);
      Instrument_88.insert(StrikePrice_88.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_88(2);
      noRelatedSym_0_1_1.set(StrikePriceBoundaryMethod_88);
      Instrument_88.insert(StrikePriceBoundaryMethod_88.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_88;
      StrikePriceBoundaryPrecision_88.setString("48.780000");
      noRelatedSym_0_1_1.set(StrikePriceBoundaryPrecision_88);
      Instrument_88.insert(StrikePriceBoundaryPrecision_88.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_88(3);
      noRelatedSym_0_1_1.set(StrikePriceDeterminationMethod_88);
      Instrument_88.insert(StrikePriceDeterminationMethod_88.getString());
      FIX::StrikeValue StrikeValue_88;
      StrikeValue_88.setString("3128422");
      noRelatedSym_0_1_1.set(StrikeValue_88);
      Instrument_88.insert(StrikeValue_88.getString());
      FIX::Symbol Symbol_88("STRING_1119014850");
      noRelatedSym_0_1_1.set(Symbol_88);
      Instrument_88.insert(Symbol_88.getString());
      FIX::SymbolSfx SymbolSfx_88("STRING_CD");
      noRelatedSym_0_1_1.set(SymbolSfx_88);
      Instrument_88.insert(SymbolSfx_88.getString());
      FIX::TimeUnit TimeUnit_88("STRING_Mo");
      noRelatedSym_0_1_1.set(TimeUnit_88);
      Instrument_88.insert(TimeUnit_88.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_88(3);
      noRelatedSym_0_1_1.set(UnderlyingPriceDeterminationMethod_88);
      Instrument_88.insert(UnderlyingPriceDeterminationMethod_88.getString());
      FIX::UnitOfMeasure UnitOfMeasure_88("STRING_Bu");
      noRelatedSym_0_1_1.set(UnitOfMeasure_88);
      Instrument_88.insert(UnitOfMeasure_88.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_88;
      UnitOfMeasureQty_88.setString("15529642");
      noRelatedSym_0_1_1.set(UnitOfMeasureQty_88);
      Instrument_88.insert(UnitOfMeasureQty_88.getString());
      FIX::ValuationMethod ValuationMethod_88("STRING_CDS");
      noRelatedSym_0_1_1.set(ValuationMethod_88);
      Instrument_88.insert(ValuationMethod_88.getString());
      all_values.push_back(Instrument_88);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_165;
        FIX::ComplexEventCondition ComplexEventCondition_165(2);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventCondition_165.getString());
        FIX::ComplexEventPrice ComplexEventPrice_165;
        ComplexEventPrice_165.setString("1122925");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventPrice_165.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_165(4);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceBoundaryMethod_165.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_165;
        ComplexEventPriceBoundaryPrecision_165.setString("67.200000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceBoundaryPrecision_165.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_165(1);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceTimeType_165.getString());
        FIX::ComplexEventType ComplexEventType_165(1);
        noComplexEvents_0_1_2_0.set(ComplexEventType_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventType_165.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_165;
        ComplexOptPayoutAmount_165.setString("19193170");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexOptPayoutAmount_165.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_165);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_347;
          FIX::ComplexEventEndDate ComplexEventEndDate_347(FIX::UTCTIMESTAMP(22, 2, 14, 26, 12000));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_347);
          ComplexEventDates_NoComplexEventDates_347.insert(ComplexEventEndDate_347.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_347(FIX::UTCTIMESTAMP(0, 24, 41, 6, 112011));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_347);
          ComplexEventDates_NoComplexEventDates_347.insert(ComplexEventStartDate_347.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_347);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_691;
            FIX::ComplexEventEndTime ComplexEventEndTime_691(FIX::UTCTIMEONLY(12, 50, 35));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_691);
            ComplexEventTimes_NoComplexEventTimes_691.insert(ComplexEventEndTime_691.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_691(FIX::UTCTIMEONLY(12, 56, 1));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_691);
            ComplexEventTimes_NoComplexEventTimes_691.insert(ComplexEventStartTime_691.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_691);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_168;
        FIX::EventDate EventDate_168("LOCALMKTDATE_1490738831");
        noEvents_0_1_2_0.set(EventDate_168);
        EvntGrp_NoEvents_168.insert(EventDate_168.getString());
        FIX::EventPx EventPx_168;
        EventPx_168.setString("14050779");
        noEvents_0_1_2_0.set(EventPx_168);
        EvntGrp_NoEvents_168.insert(EventPx_168.getString());
        FIX::EventText EventText_168("STRING_377867238");
        noEvents_0_1_2_0.set(EventText_168);
        EvntGrp_NoEvents_168.insert(EventText_168.getString());
        FIX::EventTime EventTime_168(FIX::UTCTIMESTAMP(6, 5, 46, 23, 42012));
        noEvents_0_1_2_0.set(EventTime_168);
        EvntGrp_NoEvents_168.insert(EventTime_168.getString());
        FIX::EventType EventType_168(11);
        noEvents_0_1_2_0.set(EventType_168);
        EvntGrp_NoEvents_168.insert(EventType_168.getString());
        all_values.push_back(EvntGrp_NoEvents_168);

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_172;
        FIX::InstrumentPartyID InstrumentPartyID_172("STRING_942982025");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_172);
        InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyID_172.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_172('5');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_172);
        InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyIDSource_172.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_172(581601607);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_172);
        InstrumentParties_NoInstrumentParties_172.insert(InstrumentPartyRole_172.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_172);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344;
          FIX::InstrumentPartySubID InstrumentPartySubID_344("STRING_1854332569");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_344);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344.insert(InstrumentPartySubID_344.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_344(463233400);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_344);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344.insert(InstrumentPartySubIDType_344.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345;
          FIX::InstrumentPartySubID InstrumentPartySubID_345("STRING_2046090952");
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubID_345);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345.insert(InstrumentPartySubID_345.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_345(890068875);
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubIDType_345);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345.insert(InstrumentPartySubIDType_345.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346;
          FIX::InstrumentPartySubID InstrumentPartySubID_346("STRING_1802681811");
          noInstrumentPartySubIDs_0_1_0_3_2.set(InstrumentPartySubID_346);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346.insert(InstrumentPartySubID_346.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_346(854894882);
          noInstrumentPartySubIDs_0_1_0_3_2.set(InstrumentPartySubIDType_346);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346.insert(InstrumentPartySubIDType_346.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_173;
        FIX::InstrumentPartyID InstrumentPartyID_173("STRING_1044820032");
        noInstrumentParties_0_1_2_1.set(InstrumentPartyID_173);
        InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyID_173.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_173('1');
        noInstrumentParties_0_1_2_1.set(InstrumentPartyIDSource_173);
        InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyIDSource_173.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_173(521266724);
        noInstrumentParties_0_1_2_1.set(InstrumentPartyRole_173);
        InstrumentParties_NoInstrumentParties_173.insert(InstrumentPartyRole_173.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_173);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347;
          FIX::InstrumentPartySubID InstrumentPartySubID_347("STRING_1009989845");
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubID_347);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347.insert(InstrumentPartySubID_347.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_347(1740602793);
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubIDType_347);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347.insert(InstrumentPartySubIDType_347.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_347);

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348;
          FIX::InstrumentPartySubID InstrumentPartySubID_348("STRING_2076670956");
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubID_348);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348.insert(InstrumentPartySubID_348.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_348(165147418);
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubIDType_348);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348.insert(InstrumentPartySubIDType_348.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_348);

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_182;
        FIX::SecurityAltID SecurityAltID_182("STRING_1419926139");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_182);
        SecAltIDGrp_NoSecurityAltID_182.insert(SecurityAltID_182.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_182("STRING_1570225337");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_182);
        SecAltIDGrp_NoSecurityAltID_182.insert(SecurityAltIDSource_182.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_182);

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_183;
        FIX::SecurityAltID SecurityAltID_183("STRING_1489400548");
        noSecurityAltID_0_1_2_1.set(SecurityAltID_183);
        SecAltIDGrp_NoSecurityAltID_183.insert(SecurityAltID_183.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_183("STRING_1702315393");
        noSecurityAltID_0_1_2_1.set(SecurityAltIDSource_183);
        SecAltIDGrp_NoSecurityAltID_183.insert(SecurityAltIDSource_183.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_183);

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_176;
      FIX::SecurityXML SecurityXML_177("XMLDATA_2006641751");
      noRelatedSym_0_1_1.set(SecurityXML_177);
      FIX::SecurityXMLLen SecurityXMLLen_88(1639101213);
      noRelatedSym_0_1_1.set(SecurityXMLLen_88);
      FIX::SecurityXMLSchema SecurityXMLSchema_88("STRING_590617791");
      noRelatedSym_0_1_1.set(SecurityXMLSchema_88);
      SecurityXML_176.insert(SecurityXMLSchema_88.getString());
      all_values.push_back(SecurityXML_176);

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_1);
    }
    msg.addGroup(noAsgnReqs_0_0);
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
