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
  FIX::StreamAsgnReqID StreamAsgnReqID_1("STRING_2105653747");
  msg.set(StreamAsgnReqID_1);
  StreamAssignmentRequest_0.insert(StreamAsgnReqID_1.getString());
  FIX::StreamAsgnReqType StreamAsgnReqType_1(2);
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
      multiset<string> Parties_NoPartyIDs_147;
      FIX::PartyID PartyID_147("STRING_154038091");
      noPartyIDs_0_1_0.set(PartyID_147);
      Parties_NoPartyIDs_147.insert(PartyID_147.getString());
      FIX::PartyIDSource PartyIDSource_147('B');
      noPartyIDs_0_1_0.set(PartyIDSource_147);
      Parties_NoPartyIDs_147.insert(PartyIDSource_147.getString());
      FIX::PartyRole PartyRole_147(8);
      noPartyIDs_0_1_0.set(PartyRole_147);
      Parties_NoPartyIDs_147.insert(PartyRole_147.getString());
      all_values.push_back(Parties_NoPartyIDs_147);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_294;
        FIX::PartySubID PartySubID_294("STRING_1137918126");
        noPartySubIDs_0_0_2_0.set(PartySubID_294);
        PtysSubGrp_NoPartySubIDs_294.insert(PartySubID_294.getString());
        FIX::PartySubIDType PartySubIDType_294(14);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_294);
        PtysSubGrp_NoPartySubIDs_294.insert(PartySubIDType_294.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_294);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_295;
        FIX::PartySubID PartySubID_295("STRING_688376332");
        noPartySubIDs_0_0_2_1.set(PartySubID_295);
        PtysSubGrp_NoPartySubIDs_295.insert(PartySubID_295.getString());
        FIX::PartySubIDType PartySubIDType_295(5);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_295);
        PtysSubGrp_NoPartySubIDs_295.insert(PartySubIDType_295.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_295);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // StrmAsgnReqInstrmtGrp
    // Group StrmAsgnReqInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_0;
      FIX::MDEntrySize MDEntrySize_7;
      MDEntrySize_7.setString("8503179");
      noRelatedSym_0_1_0.set(MDEntrySize_7);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(MDEntrySize_7.getString());
      FIX::MDStreamID MDStreamID_7("STRING_1020211573");
      noRelatedSym_0_1_0.set(MDStreamID_7);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(MDStreamID_7.getString());
      FIX::SettlType SettlType_33("STRING_B");
      noRelatedSym_0_1_0.set(SettlType_33);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(SettlType_33.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_0);

      // Instrument
      multiset<string> Instrument_86;
      FIX::AttachmentPoint AttachmentPoint_86;
      AttachmentPoint_86.setString("46.580000");
      noRelatedSym_0_1_0.set(AttachmentPoint_86);
      Instrument_86.insert(AttachmentPoint_86.getString());
      FIX::CFICode CFICode_91("STRING_43022094");
      noRelatedSym_0_1_0.set(CFICode_91);
      Instrument_86.insert(CFICode_91.getString());
      FIX::CPProgram CPProgram_86(1);
      noRelatedSym_0_1_0.set(CPProgram_86);
      Instrument_86.insert(CPProgram_86.getString());
      FIX::CPRegType CPRegType_86("STRING_662440421");
      noRelatedSym_0_1_0.set(CPRegType_86);
      Instrument_86.insert(CPRegType_86.getString());
      FIX::CapPrice CapPrice_86;
      CapPrice_86.setString("14567840");
      noRelatedSym_0_1_0.set(CapPrice_86);
      Instrument_86.insert(CapPrice_86.getString());
      FIX::ContractMultiplier ContractMultiplier_86;
      ContractMultiplier_86.setString("11531950");
      noRelatedSym_0_1_0.set(ContractMultiplier_86);
      Instrument_86.insert(ContractMultiplier_86.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_86(1);
      noRelatedSym_0_1_0.set(ContractMultiplierUnit_86);
      Instrument_86.insert(ContractMultiplierUnit_86.getString());
      FIX::ContractSettlMonth ContractSettlMonth_86("MONTHYEAR_1232350662");
      noRelatedSym_0_1_0.set(ContractSettlMonth_86);
      Instrument_86.insert(ContractSettlMonth_86.getString());
      FIX::CountryOfIssue CountryOfIssue_86("COUNTRY_1440450540");
      noRelatedSym_0_1_0.set(CountryOfIssue_86);
      Instrument_86.insert(CountryOfIssue_86.getString());
      FIX::CouponPaymentDate CouponPaymentDate_86("LOCALMKTDATE_427357720");
      noRelatedSym_0_1_0.set(CouponPaymentDate_86);
      Instrument_86.insert(CouponPaymentDate_86.getString());
      FIX::CouponRate CouponRate_86;
      CouponRate_86.setString("88.790000");
      noRelatedSym_0_1_0.set(CouponRate_86);
      Instrument_86.insert(CouponRate_86.getString());
      FIX::CreditRating CreditRating_86("STRING_1541621296");
      noRelatedSym_0_1_0.set(CreditRating_86);
      Instrument_86.insert(CreditRating_86.getString());
      FIX::DatedDate DatedDate_86("LOCALMKTDATE_2053337854");
      noRelatedSym_0_1_0.set(DatedDate_86);
      Instrument_86.insert(DatedDate_86.getString());
      FIX::DetachmentPoint DetachmentPoint_86;
      DetachmentPoint_86.setString("90.810000");
      noRelatedSym_0_1_0.set(DetachmentPoint_86);
      Instrument_86.insert(DetachmentPoint_86.getString());
      FIX::EncodedIssuer EncodedIssuer_86("DATA_1716419272");
      noRelatedSym_0_1_0.set(EncodedIssuer_86);
      Instrument_86.insert(EncodedIssuer_86.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_86(2011507954);
      noRelatedSym_0_1_0.set(EncodedIssuerLen_86);
      Instrument_86.insert(EncodedIssuerLen_86.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_86("DATA_1824379559");
      noRelatedSym_0_1_0.set(EncodedSecurityDesc_86);
      Instrument_86.insert(EncodedSecurityDesc_86.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_86(1299975607);
      noRelatedSym_0_1_0.set(EncodedSecurityDescLen_86);
      Instrument_86.insert(EncodedSecurityDescLen_86.getString());
      FIX::ExerciseStyle ExerciseStyle_86(2);
      noRelatedSym_0_1_0.set(ExerciseStyle_86);
      Instrument_86.insert(ExerciseStyle_86.getString());
      FIX::Factor Factor_86;
      Factor_86.setString("19784176");
      noRelatedSym_0_1_0.set(Factor_86);
      Instrument_86.insert(Factor_86.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_86(true);
      noRelatedSym_0_1_0.set(FlexProductEligibilityIndicator_86);
      Instrument_86.insert(FlexProductEligibilityIndicator_86.getString());
      FIX::FlexibleIndicator FlexibleIndicator_86(true);
      noRelatedSym_0_1_0.set(FlexibleIndicator_86);
      Instrument_86.insert(FlexibleIndicator_86.getString());
      FIX::FloorPrice FloorPrice_86;
      FloorPrice_86.setString("3027999");
      noRelatedSym_0_1_0.set(FloorPrice_86);
      Instrument_86.insert(FloorPrice_86.getString());
      FIX::FlowScheduleType FlowScheduleType_86(0);
      noRelatedSym_0_1_0.set(FlowScheduleType_86);
      Instrument_86.insert(FlowScheduleType_86.getString());
      FIX::InstrRegistry InstrRegistry_86("STRING_376450326");
      noRelatedSym_0_1_0.set(InstrRegistry_86);
      Instrument_86.insert(InstrRegistry_86.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_86('9');
      noRelatedSym_0_1_0.set(InstrmtAssignmentMethod_86);
      Instrument_86.insert(InstrmtAssignmentMethod_86.getString());
      FIX::InterestAccrualDate InterestAccrualDate_86("LOCALMKTDATE_150597159");
      noRelatedSym_0_1_0.set(InterestAccrualDate_86);
      Instrument_86.insert(InterestAccrualDate_86.getString());
      FIX::IssueDate IssueDate_86("LOCALMKTDATE_99416597");
      noRelatedSym_0_1_0.set(IssueDate_86);
      Instrument_86.insert(IssueDate_86.getString());
      FIX::Issuer Issuer_86("STRING_1841494236");
      noRelatedSym_0_1_0.set(Issuer_86);
      Instrument_86.insert(Issuer_86.getString());
      FIX::ListMethod ListMethod_86(0);
      noRelatedSym_0_1_0.set(ListMethod_86);
      Instrument_86.insert(ListMethod_86.getString());
      FIX::LocaleOfIssue LocaleOfIssue_86("STRING_84728372");
      noRelatedSym_0_1_0.set(LocaleOfIssue_86);
      Instrument_86.insert(LocaleOfIssue_86.getString());
      FIX::MaturityDate MaturityDate_86("LOCALMKTDATE_794805246");
      noRelatedSym_0_1_0.set(MaturityDate_86);
      Instrument_86.insert(MaturityDate_86.getString());
      FIX::MaturityMonthYear MaturityMonthYear_86("MONTHYEAR_1213830826");
      noRelatedSym_0_1_0.set(MaturityMonthYear_86);
      Instrument_86.insert(MaturityMonthYear_86.getString());
      FIX::MaturityTime MaturityTime_86("TZTIMEONLY_26025729");
      noRelatedSym_0_1_0.set(MaturityTime_86);
      Instrument_86.insert(MaturityTime_86.getString());
      FIX::MinPriceIncrement MinPriceIncrement_86;
      MinPriceIncrement_86.setString("14572456");
      noRelatedSym_0_1_0.set(MinPriceIncrement_86);
      Instrument_86.insert(MinPriceIncrement_86.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_86;
      MinPriceIncrementAmount_86.setString("5231312");
      noRelatedSym_0_1_0.set(MinPriceIncrementAmount_86);
      Instrument_86.insert(MinPriceIncrementAmount_86.getString());
      FIX::NTPositionLimit NTPositionLimit_86(1179220749);
      noRelatedSym_0_1_0.set(NTPositionLimit_86);
      Instrument_86.insert(NTPositionLimit_86.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_86;
      NotionalPercentageOutstanding_86.setString("94.440000");
      noRelatedSym_0_1_0.set(NotionalPercentageOutstanding_86);
      Instrument_86.insert(NotionalPercentageOutstanding_86.getString());
      FIX::OptAttribute OptAttribute_86('1');
      noRelatedSym_0_1_0.set(OptAttribute_86);
      Instrument_86.insert(OptAttribute_86.getString());
      FIX::OptPayoutAmount OptPayoutAmount_86;
      OptPayoutAmount_86.setString("4721876");
      noRelatedSym_0_1_0.set(OptPayoutAmount_86);
      Instrument_86.insert(OptPayoutAmount_86.getString());
      FIX::OptPayoutType OptPayoutType_86(3);
      noRelatedSym_0_1_0.set(OptPayoutType_86);
      Instrument_86.insert(OptPayoutType_86.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_86;
      OriginalNotionalPercentageOutstanding_86.setString("71.110000");
      noRelatedSym_0_1_0.set(OriginalNotionalPercentageOutstanding_86);
      Instrument_86.insert(OriginalNotionalPercentageOutstanding_86.getString());
      FIX::Pool Pool_86("STRING_2013808938");
      noRelatedSym_0_1_0.set(Pool_86);
      Instrument_86.insert(Pool_86.getString());
      FIX::PositionLimit PositionLimit_86(830481371);
      noRelatedSym_0_1_0.set(PositionLimit_86);
      Instrument_86.insert(PositionLimit_86.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_86("STRING_STD");
      noRelatedSym_0_1_0.set(PriceQuoteMethod_86);
      Instrument_86.insert(PriceQuoteMethod_86.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_86("STRING_1582744563");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasure_86);
      Instrument_86.insert(PriceUnitOfMeasure_86.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_86;
      PriceUnitOfMeasureQty_86.setString("6945056");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasureQty_86);
      Instrument_86.insert(PriceUnitOfMeasureQty_86.getString());
      FIX::Product Product_94(8);
      noRelatedSym_0_1_0.set(Product_94);
      Instrument_86.insert(Product_94.getString());
      FIX::ProductComplex ProductComplex_86("STRING_735236522");
      noRelatedSym_0_1_0.set(ProductComplex_86);
      Instrument_86.insert(ProductComplex_86.getString());
      FIX::PutOrCall PutOrCall_86(0);
      noRelatedSym_0_1_0.set(PutOrCall_86);
      Instrument_86.insert(PutOrCall_86.getString());
      FIX::RedemptionDate RedemptionDate_86("LOCALMKTDATE_1478676105");
      noRelatedSym_0_1_0.set(RedemptionDate_86);
      Instrument_86.insert(RedemptionDate_86.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_86("STRING_1418124456");
      noRelatedSym_0_1_0.set(RepoCollateralSecurityType_86);
      Instrument_86.insert(RepoCollateralSecurityType_86.getString());
      FIX::RepurchaseRate RepurchaseRate_86;
      RepurchaseRate_86.setString("41.630000");
      noRelatedSym_0_1_0.set(RepurchaseRate_86);
      Instrument_86.insert(RepurchaseRate_86.getString());
      FIX::RepurchaseTerm RepurchaseTerm_86(1781476092);
      noRelatedSym_0_1_0.set(RepurchaseTerm_86);
      Instrument_86.insert(RepurchaseTerm_86.getString());
      FIX::RestructuringType RestructuringType_86("STRING_MR");
      noRelatedSym_0_1_0.set(RestructuringType_86);
      Instrument_86.insert(RestructuringType_86.getString());
      FIX::SecurityDesc SecurityDesc_86("STRING_1927574489");
      noRelatedSym_0_1_0.set(SecurityDesc_86);
      Instrument_86.insert(SecurityDesc_86.getString());
      FIX::SecurityExchange SecurityExchange_86("EXCHANGE_625168762");
      noRelatedSym_0_1_0.set(SecurityExchange_86);
      Instrument_86.insert(SecurityExchange_86.getString());
      FIX::SecurityGroup SecurityGroup_86("STRING_1242044028");
      noRelatedSym_0_1_0.set(SecurityGroup_86);
      Instrument_86.insert(SecurityGroup_86.getString());
      FIX::SecurityID SecurityID_86("STRING_2026991086");
      noRelatedSym_0_1_0.set(SecurityID_86);
      Instrument_86.insert(SecurityID_86.getString());
      FIX::SecurityIDSource SecurityIDSource_86("STRING_8");
      noRelatedSym_0_1_0.set(SecurityIDSource_86);
      Instrument_86.insert(SecurityIDSource_86.getString());
      FIX::SecurityStatus SecurityStatus_87("STRING_2");
      noRelatedSym_0_1_0.set(SecurityStatus_87);
      Instrument_86.insert(SecurityStatus_87.getString());
      FIX::SecuritySubType SecuritySubType_90("STRING_2111719458");
      noRelatedSym_0_1_0.set(SecuritySubType_90);
      Instrument_86.insert(SecuritySubType_90.getString());
      FIX::SecurityType SecurityType_94("STRING_DINP");
      noRelatedSym_0_1_0.set(SecurityType_94);
      Instrument_86.insert(SecurityType_94.getString());
      FIX::Seniority Seniority_86("STRING_SR");
      noRelatedSym_0_1_0.set(Seniority_86);
      Instrument_86.insert(Seniority_86.getString());
      FIX::SettlMethod SettlMethod_86('P');
      noRelatedSym_0_1_0.set(SettlMethod_86);
      Instrument_86.insert(SettlMethod_86.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_86("STRING_423746617");
      noRelatedSym_0_1_0.set(SettleOnOpenFlag_86);
      Instrument_86.insert(SettleOnOpenFlag_86.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_86("STRING_2002331157");
      noRelatedSym_0_1_0.set(StateOrProvinceOfIssue_86);
      Instrument_86.insert(StateOrProvinceOfIssue_86.getString());
      FIX::StrikeCurrency StrikeCurrency_86("CAN");
      noRelatedSym_0_1_0.set(StrikeCurrency_86);
      Instrument_86.insert(StrikeCurrency_86.getString());
      FIX::StrikeMultiplier StrikeMultiplier_86;
      StrikeMultiplier_86.setString("16103293");
      noRelatedSym_0_1_0.set(StrikeMultiplier_86);
      Instrument_86.insert(StrikeMultiplier_86.getString());
      FIX::StrikePrice StrikePrice_86;
      StrikePrice_86.setString("16416699");
      noRelatedSym_0_1_0.set(StrikePrice_86);
      Instrument_86.insert(StrikePrice_86.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_86(2);
      noRelatedSym_0_1_0.set(StrikePriceBoundaryMethod_86);
      Instrument_86.insert(StrikePriceBoundaryMethod_86.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_86;
      StrikePriceBoundaryPrecision_86.setString("28.520000");
      noRelatedSym_0_1_0.set(StrikePriceBoundaryPrecision_86);
      Instrument_86.insert(StrikePriceBoundaryPrecision_86.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_86(2);
      noRelatedSym_0_1_0.set(StrikePriceDeterminationMethod_86);
      Instrument_86.insert(StrikePriceDeterminationMethod_86.getString());
      FIX::StrikeValue StrikeValue_86;
      StrikeValue_86.setString("5286409");
      noRelatedSym_0_1_0.set(StrikeValue_86);
      Instrument_86.insert(StrikeValue_86.getString());
      FIX::Symbol Symbol_86("STRING_2126619044");
      noRelatedSym_0_1_0.set(Symbol_86);
      Instrument_86.insert(Symbol_86.getString());
      FIX::SymbolSfx SymbolSfx_86("STRING_CD");
      noRelatedSym_0_1_0.set(SymbolSfx_86);
      Instrument_86.insert(SymbolSfx_86.getString());
      FIX::TimeUnit TimeUnit_86("STRING_S");
      noRelatedSym_0_1_0.set(TimeUnit_86);
      Instrument_86.insert(TimeUnit_86.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_86(1);
      noRelatedSym_0_1_0.set(UnderlyingPriceDeterminationMethod_86);
      Instrument_86.insert(UnderlyingPriceDeterminationMethod_86.getString());
      FIX::UnitOfMeasure UnitOfMeasure_86("STRING_USD");
      noRelatedSym_0_1_0.set(UnitOfMeasure_86);
      Instrument_86.insert(UnitOfMeasure_86.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_86;
      UnitOfMeasureQty_86.setString("2729009");
      noRelatedSym_0_1_0.set(UnitOfMeasureQty_86);
      Instrument_86.insert(UnitOfMeasureQty_86.getString());
      FIX::ValuationMethod ValuationMethod_86("STRING_FUTDA");
      noRelatedSym_0_1_0.set(ValuationMethod_86);
      Instrument_86.insert(ValuationMethod_86.getString());
      all_values.push_back(Instrument_86);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_164;
        FIX::ComplexEventCondition ComplexEventCondition_164(2);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventCondition_164.getString());
        FIX::ComplexEventPrice ComplexEventPrice_164;
        ComplexEventPrice_164.setString("5920624");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventPrice_164.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_164(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceBoundaryMethod_164.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_164;
        ComplexEventPriceBoundaryPrecision_164.setString("59.120000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceBoundaryPrecision_164.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_164(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventPriceTimeType_164.getString());
        FIX::ComplexEventType ComplexEventType_164(3);
        noComplexEvents_0_0_2_0.set(ComplexEventType_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexEventType_164.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_164;
        ComplexOptPayoutAmount_164.setString("14836233");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_164);
        ComplexEvents_NoComplexEvents_164.insert(ComplexOptPayoutAmount_164.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_164);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_333;
          FIX::ComplexEventEndDate ComplexEventEndDate_333(FIX::UTCTIMESTAMP(1, 44, 41, 17, 10, 2012));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_333);
          ComplexEventDates_NoComplexEventDates_333.insert(ComplexEventEndDate_333.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_333(FIX::UTCTIMESTAMP(15, 31, 13, 5, 8, 2016));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_333);
          ComplexEventDates_NoComplexEventDates_333.insert(ComplexEventStartDate_333.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_333);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_677;
            FIX::ComplexEventEndTime ComplexEventEndTime_677(FIX::UTCTIMEONLY(15, 48, 19));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_677);
            ComplexEventTimes_NoComplexEventTimes_677.insert(ComplexEventEndTime_677.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_677(FIX::UTCTIMEONLY(4, 49, 52));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_677);
            ComplexEventTimes_NoComplexEventTimes_677.insert(ComplexEventStartTime_677.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_677);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_678;
            FIX::ComplexEventEndTime ComplexEventEndTime_678(FIX::UTCTIMEONLY(6, 0, 4));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_678);
            ComplexEventTimes_NoComplexEventTimes_678.insert(ComplexEventEndTime_678.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_678(FIX::UTCTIMEONLY(9, 55, 21));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_678);
            ComplexEventTimes_NoComplexEventTimes_678.insert(ComplexEventStartTime_678.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_678);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_679;
            FIX::ComplexEventEndTime ComplexEventEndTime_679(FIX::UTCTIMEONLY(13, 58, 59));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventEndTime_679);
            ComplexEventTimes_NoComplexEventTimes_679.insert(ComplexEventEndTime_679.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_679(FIX::UTCTIMEONLY(7, 21, 44));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventStartTime_679);
            ComplexEventTimes_NoComplexEventTimes_679.insert(ComplexEventStartTime_679.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_679);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_334;
          FIX::ComplexEventEndDate ComplexEventEndDate_334(FIX::UTCTIMESTAMP(16, 49, 27, 19, 4, 2003));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_334);
          ComplexEventDates_NoComplexEventDates_334.insert(ComplexEventEndDate_334.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_334(FIX::UTCTIMESTAMP(6, 57, 6, 8, 7, 2007));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_334);
          ComplexEventDates_NoComplexEventDates_334.insert(ComplexEventStartDate_334.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_334);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_680;
            FIX::ComplexEventEndTime ComplexEventEndTime_680(FIX::UTCTIMEONLY(14, 21, 2));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_680);
            ComplexEventTimes_NoComplexEventTimes_680.insert(ComplexEventEndTime_680.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_680(FIX::UTCTIMEONLY(10, 58, 6));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_680);
            ComplexEventTimes_NoComplexEventTimes_680.insert(ComplexEventStartTime_680.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_680);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_681;
            FIX::ComplexEventEndTime ComplexEventEndTime_681(FIX::UTCTIMEONLY(3, 56, 20));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventEndTime_681);
            ComplexEventTimes_NoComplexEventTimes_681.insert(ComplexEventEndTime_681.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_681(FIX::UTCTIMEONLY(3, 33, 17));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventStartTime_681);
            ComplexEventTimes_NoComplexEventTimes_681.insert(ComplexEventStartTime_681.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_681);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_682;
            FIX::ComplexEventEndTime ComplexEventEndTime_682(FIX::UTCTIMEONLY(14, 6, 49));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventEndTime_682);
            ComplexEventTimes_NoComplexEventTimes_682.insert(ComplexEventEndTime_682.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_682(FIX::UTCTIMEONLY(13, 59, 56));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventStartTime_682);
            ComplexEventTimes_NoComplexEventTimes_682.insert(ComplexEventStartTime_682.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_682);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_165;
        FIX::ComplexEventCondition ComplexEventCondition_165(1);
        noComplexEvents_0_0_2_1.set(ComplexEventCondition_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventCondition_165.getString());
        FIX::ComplexEventPrice ComplexEventPrice_165;
        ComplexEventPrice_165.setString("14836240");
        noComplexEvents_0_0_2_1.set(ComplexEventPrice_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventPrice_165.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_165(4);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryMethod_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceBoundaryMethod_165.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_165;
        ComplexEventPriceBoundaryPrecision_165.setString("50.360000");
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryPrecision_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceBoundaryPrecision_165.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_165(3);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceTimeType_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventPriceTimeType_165.getString());
        FIX::ComplexEventType ComplexEventType_165(9);
        noComplexEvents_0_0_2_1.set(ComplexEventType_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexEventType_165.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_165;
        ComplexOptPayoutAmount_165.setString("1502932");
        noComplexEvents_0_0_2_1.set(ComplexOptPayoutAmount_165);
        ComplexEvents_NoComplexEvents_165.insert(ComplexOptPayoutAmount_165.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_165);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_335;
          FIX::ComplexEventEndDate ComplexEventEndDate_335(FIX::UTCTIMESTAMP(9, 3, 53, 23, 6, 2009));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventEndDate_335);
          ComplexEventDates_NoComplexEventDates_335.insert(ComplexEventEndDate_335.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_335(FIX::UTCTIMESTAMP(0, 47, 44, 9, 3, 2017));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventStartDate_335);
          ComplexEventDates_NoComplexEventDates_335.insert(ComplexEventStartDate_335.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_335);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_683;
            FIX::ComplexEventEndTime ComplexEventEndTime_683(FIX::UTCTIMEONLY(7, 12, 14));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventEndTime_683);
            ComplexEventTimes_NoComplexEventTimes_683.insert(ComplexEventEndTime_683.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_683(FIX::UTCTIMEONLY(13, 13, 33));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventStartTime_683);
            ComplexEventTimes_NoComplexEventTimes_683.insert(ComplexEventStartTime_683.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_683);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_684;
            FIX::ComplexEventEndTime ComplexEventEndTime_684(FIX::UTCTIMEONLY(13, 28, 13));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventEndTime_684);
            ComplexEventTimes_NoComplexEventTimes_684.insert(ComplexEventEndTime_684.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_684(FIX::UTCTIMEONLY(19, 2, 48));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventStartTime_684);
            ComplexEventTimes_NoComplexEventTimes_684.insert(ComplexEventStartTime_684.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_684);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_685;
            FIX::ComplexEventEndTime ComplexEventEndTime_685(FIX::UTCTIMEONLY(15, 43, 12));
            noComplexEventTimes_0_0_1_0_4_2.set(ComplexEventEndTime_685);
            ComplexEventTimes_NoComplexEventTimes_685.insert(ComplexEventEndTime_685.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_685(FIX::UTCTIMEONLY(12, 3, 39));
            noComplexEventTimes_0_0_1_0_4_2.set(ComplexEventStartTime_685);
            ComplexEventTimes_NoComplexEventTimes_685.insert(ComplexEventStartTime_685.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_685);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_2);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_168;
        FIX::EventDate EventDate_168("LOCALMKTDATE_2053849070");
        noEvents_0_0_2_0.set(EventDate_168);
        EvntGrp_NoEvents_168.insert(EventDate_168.getString());
        FIX::EventPx EventPx_168;
        EventPx_168.setString("5662253");
        noEvents_0_0_2_0.set(EventPx_168);
        EvntGrp_NoEvents_168.insert(EventPx_168.getString());
        FIX::EventText EventText_168("STRING_828984169");
        noEvents_0_0_2_0.set(EventText_168);
        EvntGrp_NoEvents_168.insert(EventText_168.getString());
        FIX::EventTime EventTime_168(FIX::UTCTIMESTAMP(20, 55, 1, 0, 8, 2007));
        noEvents_0_0_2_0.set(EventTime_168);
        EvntGrp_NoEvents_168.insert(EventTime_168.getString());
        FIX::EventType EventType_168(6);
        noEvents_0_0_2_0.set(EventType_168);
        EvntGrp_NoEvents_168.insert(EventType_168.getString());
        all_values.push_back(EvntGrp_NoEvents_168);

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_169;
        FIX::EventDate EventDate_169("LOCALMKTDATE_257364217");
        noEvents_0_0_2_1.set(EventDate_169);
        EvntGrp_NoEvents_169.insert(EventDate_169.getString());
        FIX::EventPx EventPx_169;
        EventPx_169.setString("13935551");
        noEvents_0_0_2_1.set(EventPx_169);
        EvntGrp_NoEvents_169.insert(EventPx_169.getString());
        FIX::EventText EventText_169("STRING_1288721830");
        noEvents_0_0_2_1.set(EventText_169);
        EvntGrp_NoEvents_169.insert(EventText_169.getString());
        FIX::EventTime EventTime_169(FIX::UTCTIMESTAMP(6, 31, 28, 6, 3, 2016));
        noEvents_0_0_2_1.set(EventTime_169);
        EvntGrp_NoEvents_169.insert(EventTime_169.getString());
        FIX::EventType EventType_169(3);
        noEvents_0_0_2_1.set(EventType_169);
        EvntGrp_NoEvents_169.insert(EventType_169.getString());
        all_values.push_back(EvntGrp_NoEvents_169);

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_166;
        FIX::InstrumentPartyID InstrumentPartyID_166("STRING_1029301645");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_166);
        InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyID_166.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_166('9');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_166);
        InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyIDSource_166.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_166(427775234);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_166);
        InstrumentParties_NoInstrumentParties_166.insert(InstrumentPartyRole_166.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_166);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337;
          FIX::InstrumentPartySubID InstrumentPartySubID_337("STRING_575617614");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_337);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337.insert(InstrumentPartySubID_337.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_337(1717019117);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_337);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337.insert(InstrumentPartySubIDType_337.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338;
          FIX::InstrumentPartySubID InstrumentPartySubID_338("STRING_236110743");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_338);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338.insert(InstrumentPartySubID_338.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_338(919356707);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_338);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338.insert(InstrumentPartySubIDType_338.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_338);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339;
          FIX::InstrumentPartySubID InstrumentPartySubID_339("STRING_1623384540");
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubID_339);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339.insert(InstrumentPartySubID_339.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_339(802336098);
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubIDType_339);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339.insert(InstrumentPartySubIDType_339.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_339);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_183;
        FIX::SecurityAltID SecurityAltID_183("STRING_1367656297");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_183);
        SecAltIDGrp_NoSecurityAltID_183.insert(SecurityAltID_183.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_183("STRING_599363743");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_183);
        SecAltIDGrp_NoSecurityAltID_183.insert(SecurityAltIDSource_183.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_183);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_172;
      FIX::SecurityXML SecurityXML_173("XMLDATA_1784112032");
      noRelatedSym_0_1_0.set(SecurityXML_173);
      FIX::SecurityXMLLen SecurityXMLLen_86(825923790);
      noRelatedSym_0_1_0.set(SecurityXMLLen_86);
      FIX::SecurityXMLSchema SecurityXMLSchema_86("STRING_2079149211");
      noRelatedSym_0_1_0.set(SecurityXMLSchema_86);
      SecurityXML_172.insert(SecurityXMLSchema_86.getString());
      all_values.push_back(SecurityXML_172);

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_1;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_1;
      FIX::MDEntrySize MDEntrySize_8;
      MDEntrySize_8.setString("7934852");
      noRelatedSym_0_1_1.set(MDEntrySize_8);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(MDEntrySize_8.getString());
      FIX::MDStreamID MDStreamID_8("STRING_75414750");
      noRelatedSym_0_1_1.set(MDStreamID_8);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(MDStreamID_8.getString());
      FIX::SettlType SettlType_34("STRING_4");
      noRelatedSym_0_1_1.set(SettlType_34);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(SettlType_34.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_1);

      // Instrument
      multiset<string> Instrument_87;
      FIX::AttachmentPoint AttachmentPoint_87;
      AttachmentPoint_87.setString("94.280000");
      noRelatedSym_0_1_1.set(AttachmentPoint_87);
      Instrument_87.insert(AttachmentPoint_87.getString());
      FIX::CFICode CFICode_92("STRING_1468969902");
      noRelatedSym_0_1_1.set(CFICode_92);
      Instrument_87.insert(CFICode_92.getString());
      FIX::CPProgram CPProgram_87(1);
      noRelatedSym_0_1_1.set(CPProgram_87);
      Instrument_87.insert(CPProgram_87.getString());
      FIX::CPRegType CPRegType_87("STRING_1153790063");
      noRelatedSym_0_1_1.set(CPRegType_87);
      Instrument_87.insert(CPRegType_87.getString());
      FIX::CapPrice CapPrice_87;
      CapPrice_87.setString("477623");
      noRelatedSym_0_1_1.set(CapPrice_87);
      Instrument_87.insert(CapPrice_87.getString());
      FIX::ContractMultiplier ContractMultiplier_87;
      ContractMultiplier_87.setString("11819336");
      noRelatedSym_0_1_1.set(ContractMultiplier_87);
      Instrument_87.insert(ContractMultiplier_87.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_87(1);
      noRelatedSym_0_1_1.set(ContractMultiplierUnit_87);
      Instrument_87.insert(ContractMultiplierUnit_87.getString());
      FIX::ContractSettlMonth ContractSettlMonth_87("MONTHYEAR_2144205462");
      noRelatedSym_0_1_1.set(ContractSettlMonth_87);
      Instrument_87.insert(ContractSettlMonth_87.getString());
      FIX::CountryOfIssue CountryOfIssue_87("COUNTRY_1028228203");
      noRelatedSym_0_1_1.set(CountryOfIssue_87);
      Instrument_87.insert(CountryOfIssue_87.getString());
      FIX::CouponPaymentDate CouponPaymentDate_87("LOCALMKTDATE_208671605");
      noRelatedSym_0_1_1.set(CouponPaymentDate_87);
      Instrument_87.insert(CouponPaymentDate_87.getString());
      FIX::CouponRate CouponRate_87;
      CouponRate_87.setString("87.770000");
      noRelatedSym_0_1_1.set(CouponRate_87);
      Instrument_87.insert(CouponRate_87.getString());
      FIX::CreditRating CreditRating_87("STRING_813177705");
      noRelatedSym_0_1_1.set(CreditRating_87);
      Instrument_87.insert(CreditRating_87.getString());
      FIX::DatedDate DatedDate_87("LOCALMKTDATE_1237973250");
      noRelatedSym_0_1_1.set(DatedDate_87);
      Instrument_87.insert(DatedDate_87.getString());
      FIX::DetachmentPoint DetachmentPoint_87;
      DetachmentPoint_87.setString("43.230000");
      noRelatedSym_0_1_1.set(DetachmentPoint_87);
      Instrument_87.insert(DetachmentPoint_87.getString());
      FIX::EncodedIssuer EncodedIssuer_87("DATA_1240952939");
      noRelatedSym_0_1_1.set(EncodedIssuer_87);
      Instrument_87.insert(EncodedIssuer_87.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_87(75403915);
      noRelatedSym_0_1_1.set(EncodedIssuerLen_87);
      Instrument_87.insert(EncodedIssuerLen_87.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_87("DATA_78928289");
      noRelatedSym_0_1_1.set(EncodedSecurityDesc_87);
      Instrument_87.insert(EncodedSecurityDesc_87.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_87(810488408);
      noRelatedSym_0_1_1.set(EncodedSecurityDescLen_87);
      Instrument_87.insert(EncodedSecurityDescLen_87.getString());
      FIX::ExerciseStyle ExerciseStyle_87(1);
      noRelatedSym_0_1_1.set(ExerciseStyle_87);
      Instrument_87.insert(ExerciseStyle_87.getString());
      FIX::Factor Factor_87;
      Factor_87.setString("9982849");
      noRelatedSym_0_1_1.set(Factor_87);
      Instrument_87.insert(Factor_87.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_87(true);
      noRelatedSym_0_1_1.set(FlexProductEligibilityIndicator_87);
      Instrument_87.insert(FlexProductEligibilityIndicator_87.getString());
      FIX::FlexibleIndicator FlexibleIndicator_87(false);
      noRelatedSym_0_1_1.set(FlexibleIndicator_87);
      Instrument_87.insert(FlexibleIndicator_87.getString());
      FIX::FloorPrice FloorPrice_87;
      FloorPrice_87.setString("5991422");
      noRelatedSym_0_1_1.set(FloorPrice_87);
      Instrument_87.insert(FloorPrice_87.getString());
      FIX::FlowScheduleType FlowScheduleType_87(2);
      noRelatedSym_0_1_1.set(FlowScheduleType_87);
      Instrument_87.insert(FlowScheduleType_87.getString());
      FIX::InstrRegistry InstrRegistry_87("STRING_1713214500");
      noRelatedSym_0_1_1.set(InstrRegistry_87);
      Instrument_87.insert(InstrRegistry_87.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_87('2');
      noRelatedSym_0_1_1.set(InstrmtAssignmentMethod_87);
      Instrument_87.insert(InstrmtAssignmentMethod_87.getString());
      FIX::InterestAccrualDate InterestAccrualDate_87("LOCALMKTDATE_332485740");
      noRelatedSym_0_1_1.set(InterestAccrualDate_87);
      Instrument_87.insert(InterestAccrualDate_87.getString());
      FIX::IssueDate IssueDate_87("LOCALMKTDATE_1644880063");
      noRelatedSym_0_1_1.set(IssueDate_87);
      Instrument_87.insert(IssueDate_87.getString());
      FIX::Issuer Issuer_87("STRING_1029255820");
      noRelatedSym_0_1_1.set(Issuer_87);
      Instrument_87.insert(Issuer_87.getString());
      FIX::ListMethod ListMethod_87(0);
      noRelatedSym_0_1_1.set(ListMethod_87);
      Instrument_87.insert(ListMethod_87.getString());
      FIX::LocaleOfIssue LocaleOfIssue_87("STRING_1195500603");
      noRelatedSym_0_1_1.set(LocaleOfIssue_87);
      Instrument_87.insert(LocaleOfIssue_87.getString());
      FIX::MaturityDate MaturityDate_87("LOCALMKTDATE_2080105249");
      noRelatedSym_0_1_1.set(MaturityDate_87);
      Instrument_87.insert(MaturityDate_87.getString());
      FIX::MaturityMonthYear MaturityMonthYear_87("MONTHYEAR_1876870392");
      noRelatedSym_0_1_1.set(MaturityMonthYear_87);
      Instrument_87.insert(MaturityMonthYear_87.getString());
      FIX::MaturityTime MaturityTime_87("TZTIMEONLY_2034842973");
      noRelatedSym_0_1_1.set(MaturityTime_87);
      Instrument_87.insert(MaturityTime_87.getString());
      FIX::MinPriceIncrement MinPriceIncrement_87;
      MinPriceIncrement_87.setString("10864116");
      noRelatedSym_0_1_1.set(MinPriceIncrement_87);
      Instrument_87.insert(MinPriceIncrement_87.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_87;
      MinPriceIncrementAmount_87.setString("19246327");
      noRelatedSym_0_1_1.set(MinPriceIncrementAmount_87);
      Instrument_87.insert(MinPriceIncrementAmount_87.getString());
      FIX::NTPositionLimit NTPositionLimit_87(1069292967);
      noRelatedSym_0_1_1.set(NTPositionLimit_87);
      Instrument_87.insert(NTPositionLimit_87.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_87;
      NotionalPercentageOutstanding_87.setString("1.670000");
      noRelatedSym_0_1_1.set(NotionalPercentageOutstanding_87);
      Instrument_87.insert(NotionalPercentageOutstanding_87.getString());
      FIX::OptAttribute OptAttribute_87('1');
      noRelatedSym_0_1_1.set(OptAttribute_87);
      Instrument_87.insert(OptAttribute_87.getString());
      FIX::OptPayoutAmount OptPayoutAmount_87;
      OptPayoutAmount_87.setString("20975211");
      noRelatedSym_0_1_1.set(OptPayoutAmount_87);
      Instrument_87.insert(OptPayoutAmount_87.getString());
      FIX::OptPayoutType OptPayoutType_87(2);
      noRelatedSym_0_1_1.set(OptPayoutType_87);
      Instrument_87.insert(OptPayoutType_87.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_87;
      OriginalNotionalPercentageOutstanding_87.setString("97.160000");
      noRelatedSym_0_1_1.set(OriginalNotionalPercentageOutstanding_87);
      Instrument_87.insert(OriginalNotionalPercentageOutstanding_87.getString());
      FIX::Pool Pool_87("STRING_763215227");
      noRelatedSym_0_1_1.set(Pool_87);
      Instrument_87.insert(Pool_87.getString());
      FIX::PositionLimit PositionLimit_87(492711374);
      noRelatedSym_0_1_1.set(PositionLimit_87);
      Instrument_87.insert(PositionLimit_87.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_87("STRING_PCTPAR");
      noRelatedSym_0_1_1.set(PriceQuoteMethod_87);
      Instrument_87.insert(PriceQuoteMethod_87.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_87("STRING_2004168166");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasure_87);
      Instrument_87.insert(PriceUnitOfMeasure_87.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_87;
      PriceUnitOfMeasureQty_87.setString("5681152");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasureQty_87);
      Instrument_87.insert(PriceUnitOfMeasureQty_87.getString());
      FIX::Product Product_95(2);
      noRelatedSym_0_1_1.set(Product_95);
      Instrument_87.insert(Product_95.getString());
      FIX::ProductComplex ProductComplex_87("STRING_667172927");
      noRelatedSym_0_1_1.set(ProductComplex_87);
      Instrument_87.insert(ProductComplex_87.getString());
      FIX::PutOrCall PutOrCall_87(0);
      noRelatedSym_0_1_1.set(PutOrCall_87);
      Instrument_87.insert(PutOrCall_87.getString());
      FIX::RedemptionDate RedemptionDate_87("LOCALMKTDATE_1066123677");
      noRelatedSym_0_1_1.set(RedemptionDate_87);
      Instrument_87.insert(RedemptionDate_87.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_87("STRING_953562227");
      noRelatedSym_0_1_1.set(RepoCollateralSecurityType_87);
      Instrument_87.insert(RepoCollateralSecurityType_87.getString());
      FIX::RepurchaseRate RepurchaseRate_87;
      RepurchaseRate_87.setString("7.050000");
      noRelatedSym_0_1_1.set(RepurchaseRate_87);
      Instrument_87.insert(RepurchaseRate_87.getString());
      FIX::RepurchaseTerm RepurchaseTerm_87(1665265902);
      noRelatedSym_0_1_1.set(RepurchaseTerm_87);
      Instrument_87.insert(RepurchaseTerm_87.getString());
      FIX::RestructuringType RestructuringType_87("STRING_MR");
      noRelatedSym_0_1_1.set(RestructuringType_87);
      Instrument_87.insert(RestructuringType_87.getString());
      FIX::SecurityDesc SecurityDesc_87("STRING_1559211557");
      noRelatedSym_0_1_1.set(SecurityDesc_87);
      Instrument_87.insert(SecurityDesc_87.getString());
      FIX::SecurityExchange SecurityExchange_87("EXCHANGE_1901036511");
      noRelatedSym_0_1_1.set(SecurityExchange_87);
      Instrument_87.insert(SecurityExchange_87.getString());
      FIX::SecurityGroup SecurityGroup_87("STRING_792609917");
      noRelatedSym_0_1_1.set(SecurityGroup_87);
      Instrument_87.insert(SecurityGroup_87.getString());
      FIX::SecurityID SecurityID_87("STRING_1056607972");
      noRelatedSym_0_1_1.set(SecurityID_87);
      Instrument_87.insert(SecurityID_87.getString());
      FIX::SecurityIDSource SecurityIDSource_87("STRING_L");
      noRelatedSym_0_1_1.set(SecurityIDSource_87);
      Instrument_87.insert(SecurityIDSource_87.getString());
      FIX::SecurityStatus SecurityStatus_88("STRING_2");
      noRelatedSym_0_1_1.set(SecurityStatus_88);
      Instrument_87.insert(SecurityStatus_88.getString());
      FIX::SecuritySubType SecuritySubType_91("STRING_104624927");
      noRelatedSym_0_1_1.set(SecuritySubType_91);
      Instrument_87.insert(SecuritySubType_91.getString());
      FIX::SecurityType SecurityType_95("STRING_BOX");
      noRelatedSym_0_1_1.set(SecurityType_95);
      Instrument_87.insert(SecurityType_95.getString());
      FIX::Seniority Seniority_87("STRING_SD");
      noRelatedSym_0_1_1.set(Seniority_87);
      Instrument_87.insert(Seniority_87.getString());
      FIX::SettlMethod SettlMethod_87('C');
      noRelatedSym_0_1_1.set(SettlMethod_87);
      Instrument_87.insert(SettlMethod_87.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_87("STRING_1801841949");
      noRelatedSym_0_1_1.set(SettleOnOpenFlag_87);
      Instrument_87.insert(SettleOnOpenFlag_87.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_87("STRING_707046276");
      noRelatedSym_0_1_1.set(StateOrProvinceOfIssue_87);
      Instrument_87.insert(StateOrProvinceOfIssue_87.getString());
      FIX::StrikeCurrency StrikeCurrency_87("USD");
      noRelatedSym_0_1_1.set(StrikeCurrency_87);
      Instrument_87.insert(StrikeCurrency_87.getString());
      FIX::StrikeMultiplier StrikeMultiplier_87;
      StrikeMultiplier_87.setString("4809172");
      noRelatedSym_0_1_1.set(StrikeMultiplier_87);
      Instrument_87.insert(StrikeMultiplier_87.getString());
      FIX::StrikePrice StrikePrice_87;
      StrikePrice_87.setString("10113147");
      noRelatedSym_0_1_1.set(StrikePrice_87);
      Instrument_87.insert(StrikePrice_87.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_87(3);
      noRelatedSym_0_1_1.set(StrikePriceBoundaryMethod_87);
      Instrument_87.insert(StrikePriceBoundaryMethod_87.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_87;
      StrikePriceBoundaryPrecision_87.setString("69.320000");
      noRelatedSym_0_1_1.set(StrikePriceBoundaryPrecision_87);
      Instrument_87.insert(StrikePriceBoundaryPrecision_87.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_87(2);
      noRelatedSym_0_1_1.set(StrikePriceDeterminationMethod_87);
      Instrument_87.insert(StrikePriceDeterminationMethod_87.getString());
      FIX::StrikeValue StrikeValue_87;
      StrikeValue_87.setString("5953579");
      noRelatedSym_0_1_1.set(StrikeValue_87);
      Instrument_87.insert(StrikeValue_87.getString());
      FIX::Symbol Symbol_87("STRING_955427324");
      noRelatedSym_0_1_1.set(Symbol_87);
      Instrument_87.insert(Symbol_87.getString());
      FIX::SymbolSfx SymbolSfx_87("STRING_CD");
      noRelatedSym_0_1_1.set(SymbolSfx_87);
      Instrument_87.insert(SymbolSfx_87.getString());
      FIX::TimeUnit TimeUnit_87("STRING_Min");
      noRelatedSym_0_1_1.set(TimeUnit_87);
      Instrument_87.insert(TimeUnit_87.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_87(2);
      noRelatedSym_0_1_1.set(UnderlyingPriceDeterminationMethod_87);
      Instrument_87.insert(UnderlyingPriceDeterminationMethod_87.getString());
      FIX::UnitOfMeasure UnitOfMeasure_87("STRING_MMbbl");
      noRelatedSym_0_1_1.set(UnitOfMeasure_87);
      Instrument_87.insert(UnitOfMeasure_87.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_87;
      UnitOfMeasureQty_87.setString("20431032");
      noRelatedSym_0_1_1.set(UnitOfMeasureQty_87);
      Instrument_87.insert(UnitOfMeasureQty_87.getString());
      FIX::ValuationMethod ValuationMethod_87("STRING_FUTDA");
      noRelatedSym_0_1_1.set(ValuationMethod_87);
      Instrument_87.insert(ValuationMethod_87.getString());
      all_values.push_back(Instrument_87);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_166;
        FIX::ComplexEventCondition ComplexEventCondition_166(2);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_166);
        ComplexEvents_NoComplexEvents_166.insert(ComplexEventCondition_166.getString());
        FIX::ComplexEventPrice ComplexEventPrice_166;
        ComplexEventPrice_166.setString("16071719");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_166);
        ComplexEvents_NoComplexEvents_166.insert(ComplexEventPrice_166.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_166(2);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_166);
        ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceBoundaryMethod_166.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_166;
        ComplexEventPriceBoundaryPrecision_166.setString("81.700000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_166);
        ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceBoundaryPrecision_166.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_166(2);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_166);
        ComplexEvents_NoComplexEvents_166.insert(ComplexEventPriceTimeType_166.getString());
        FIX::ComplexEventType ComplexEventType_166(7);
        noComplexEvents_0_1_2_0.set(ComplexEventType_166);
        ComplexEvents_NoComplexEvents_166.insert(ComplexEventType_166.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_166;
        ComplexOptPayoutAmount_166.setString("2099524");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_166);
        ComplexEvents_NoComplexEvents_166.insert(ComplexOptPayoutAmount_166.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_166);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_336;
          FIX::ComplexEventEndDate ComplexEventEndDate_336(FIX::UTCTIMESTAMP(13, 1, 31, 5, 3, 2007));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_336);
          ComplexEventDates_NoComplexEventDates_336.insert(ComplexEventEndDate_336.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_336(FIX::UTCTIMESTAMP(2, 3, 27, 26, 5, 2002));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_336);
          ComplexEventDates_NoComplexEventDates_336.insert(ComplexEventStartDate_336.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_336);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_686;
            FIX::ComplexEventEndTime ComplexEventEndTime_686(FIX::UTCTIMEONLY(20, 57, 29));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_686);
            ComplexEventTimes_NoComplexEventTimes_686.insert(ComplexEventEndTime_686.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_686(FIX::UTCTIMEONLY(5, 51, 10));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_686);
            ComplexEventTimes_NoComplexEventTimes_686.insert(ComplexEventStartTime_686.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_686);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_337;
          FIX::ComplexEventEndDate ComplexEventEndDate_337(FIX::UTCTIMESTAMP(4, 53, 36, 21, 7, 2014));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventEndDate_337);
          ComplexEventDates_NoComplexEventDates_337.insert(ComplexEventEndDate_337.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_337(FIX::UTCTIMESTAMP(17, 43, 11, 20, 9, 2013));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventStartDate_337);
          ComplexEventDates_NoComplexEventDates_337.insert(ComplexEventStartDate_337.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_337);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_687;
            FIX::ComplexEventEndTime ComplexEventEndTime_687(FIX::UTCTIMEONLY(20, 15, 8));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventEndTime_687);
            ComplexEventTimes_NoComplexEventTimes_687.insert(ComplexEventEndTime_687.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_687(FIX::UTCTIMEONLY(23, 5, 19));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventStartTime_687);
            ComplexEventTimes_NoComplexEventTimes_687.insert(ComplexEventStartTime_687.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_687);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_167;
        FIX::ComplexEventCondition ComplexEventCondition_167(2);
        noComplexEvents_0_1_2_1.set(ComplexEventCondition_167);
        ComplexEvents_NoComplexEvents_167.insert(ComplexEventCondition_167.getString());
        FIX::ComplexEventPrice ComplexEventPrice_167;
        ComplexEventPrice_167.setString("13500856");
        noComplexEvents_0_1_2_1.set(ComplexEventPrice_167);
        ComplexEvents_NoComplexEvents_167.insert(ComplexEventPrice_167.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_167(4);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryMethod_167);
        ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceBoundaryMethod_167.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_167;
        ComplexEventPriceBoundaryPrecision_167.setString("86.360000");
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryPrecision_167);
        ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceBoundaryPrecision_167.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_167(3);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceTimeType_167);
        ComplexEvents_NoComplexEvents_167.insert(ComplexEventPriceTimeType_167.getString());
        FIX::ComplexEventType ComplexEventType_167(8);
        noComplexEvents_0_1_2_1.set(ComplexEventType_167);
        ComplexEvents_NoComplexEvents_167.insert(ComplexEventType_167.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_167;
        ComplexOptPayoutAmount_167.setString("11711314");
        noComplexEvents_0_1_2_1.set(ComplexOptPayoutAmount_167);
        ComplexEvents_NoComplexEvents_167.insert(ComplexOptPayoutAmount_167.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_167);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_338;
          FIX::ComplexEventEndDate ComplexEventEndDate_338(FIX::UTCTIMESTAMP(20, 32, 35, 13, 3, 2017));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventEndDate_338);
          ComplexEventDates_NoComplexEventDates_338.insert(ComplexEventEndDate_338.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_338(FIX::UTCTIMESTAMP(0, 0, 58, 12, 2, 2015));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventStartDate_338);
          ComplexEventDates_NoComplexEventDates_338.insert(ComplexEventStartDate_338.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_338);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_688;
            FIX::ComplexEventEndTime ComplexEventEndTime_688(FIX::UTCTIMEONLY(3, 24, 39));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventEndTime_688);
            ComplexEventTimes_NoComplexEventTimes_688.insert(ComplexEventEndTime_688.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_688(FIX::UTCTIMEONLY(11, 36, 13));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventStartTime_688);
            ComplexEventTimes_NoComplexEventTimes_688.insert(ComplexEventStartTime_688.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_688);

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_689;
            FIX::ComplexEventEndTime ComplexEventEndTime_689(FIX::UTCTIMEONLY(17, 22, 55));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventEndTime_689);
            ComplexEventTimes_NoComplexEventTimes_689.insert(ComplexEventEndTime_689.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_689(FIX::UTCTIMEONLY(15, 47, 29));
            noComplexEventTimes_0_1_1_0_4_1.set(ComplexEventStartTime_689);
            ComplexEventTimes_NoComplexEventTimes_689.insert(ComplexEventStartTime_689.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_689);

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_1);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_170;
        FIX::EventDate EventDate_170("LOCALMKTDATE_1098878240");
        noEvents_0_1_2_0.set(EventDate_170);
        EvntGrp_NoEvents_170.insert(EventDate_170.getString());
        FIX::EventPx EventPx_170;
        EventPx_170.setString("9007788");
        noEvents_0_1_2_0.set(EventPx_170);
        EvntGrp_NoEvents_170.insert(EventPx_170.getString());
        FIX::EventText EventText_170("STRING_61985802");
        noEvents_0_1_2_0.set(EventText_170);
        EvntGrp_NoEvents_170.insert(EventText_170.getString());
        FIX::EventTime EventTime_170(FIX::UTCTIMESTAMP(12, 0, 44, 20, 5, 2006));
        noEvents_0_1_2_0.set(EventTime_170);
        EvntGrp_NoEvents_170.insert(EventTime_170.getString());
        FIX::EventType EventType_170(10);
        noEvents_0_1_2_0.set(EventType_170);
        EvntGrp_NoEvents_170.insert(EventType_170.getString());
        all_values.push_back(EvntGrp_NoEvents_170);

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_167;
        FIX::InstrumentPartyID InstrumentPartyID_167("STRING_1036503938");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_167);
        InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyID_167.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_167('1');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_167);
        InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyIDSource_167.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_167(383801764);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_167);
        InstrumentParties_NoInstrumentParties_167.insert(InstrumentPartyRole_167.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_167);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340;
          FIX::InstrumentPartySubID InstrumentPartySubID_340("STRING_824264861");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_340);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340.insert(InstrumentPartySubID_340.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_340(628440343);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_340);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340.insert(InstrumentPartySubIDType_340.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_340);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341;
          FIX::InstrumentPartySubID InstrumentPartySubID_341("STRING_1225273591");
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubID_341);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341.insert(InstrumentPartySubID_341.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_341(2077495841);
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubIDType_341);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341.insert(InstrumentPartySubIDType_341.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_341);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342;
          FIX::InstrumentPartySubID InstrumentPartySubID_342("STRING_733233799");
          noInstrumentPartySubIDs_0_1_0_3_2.set(InstrumentPartySubID_342);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342.insert(InstrumentPartySubID_342.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_342(1236487305);
          noInstrumentPartySubIDs_0_1_0_3_2.set(InstrumentPartySubIDType_342);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342.insert(InstrumentPartySubIDType_342.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_184;
        FIX::SecurityAltID SecurityAltID_184("STRING_40629280");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_184);
        SecAltIDGrp_NoSecurityAltID_184.insert(SecurityAltID_184.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_184("STRING_2041417267");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_184);
        SecAltIDGrp_NoSecurityAltID_184.insert(SecurityAltIDSource_184.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_184);

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_174;
      FIX::SecurityXML SecurityXML_175("XMLDATA_1674949147");
      noRelatedSym_0_1_1.set(SecurityXML_175);
      FIX::SecurityXMLLen SecurityXMLLen_87(191461351);
      noRelatedSym_0_1_1.set(SecurityXMLLen_87);
      FIX::SecurityXMLSchema SecurityXMLSchema_87("STRING_168456794");
      noRelatedSym_0_1_1.set(SecurityXMLSchema_87);
      SecurityXML_174.insert(SecurityXMLSchema_87.getString());
      all_values.push_back(SecurityXML_174);

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_1);
    }
    msg.addGroup(noAsgnReqs_0_0);
  }
  {
    FIX50SP2::StreamAssignmentRequest::NoAsgnReqs noAsgnReqs_0_1;
    // StrmAsgnReqGrp.NoAsgnReqs
    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_148;
      FIX::PartyID PartyID_148("STRING_1783546920");
      noPartyIDs_1_1_0.set(PartyID_148);
      Parties_NoPartyIDs_148.insert(PartyID_148.getString());
      FIX::PartyIDSource PartyIDSource_148('1');
      noPartyIDs_1_1_0.set(PartyIDSource_148);
      Parties_NoPartyIDs_148.insert(PartyIDSource_148.getString());
      FIX::PartyRole PartyRole_148(57);
      noPartyIDs_1_1_0.set(PartyRole_148);
      Parties_NoPartyIDs_148.insert(PartyRole_148.getString());
      all_values.push_back(Parties_NoPartyIDs_148);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_296;
        FIX::PartySubID PartySubID_296("STRING_539536212");
        noPartySubIDs_1_0_2_0.set(PartySubID_296);
        PtysSubGrp_NoPartySubIDs_296.insert(PartySubID_296.getString());
        FIX::PartySubIDType PartySubIDType_296(26);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_296);
        PtysSubGrp_NoPartySubIDs_296.insert(PartySubIDType_296.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_296);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_297;
        FIX::PartySubID PartySubID_297("STRING_970954139");
        noPartySubIDs_1_0_2_1.set(PartySubID_297);
        PtysSubGrp_NoPartySubIDs_297.insert(PartySubID_297.getString());
        FIX::PartySubIDType PartySubIDType_297(17);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_297);
        PtysSubGrp_NoPartySubIDs_297.insert(PartySubIDType_297.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_297);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noAsgnReqs_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_149;
      FIX::PartyID PartyID_149("STRING_1856386309");
      noPartyIDs_1_1_1.set(PartyID_149);
      Parties_NoPartyIDs_149.insert(PartyID_149.getString());
      FIX::PartyIDSource PartyIDSource_149('F');
      noPartyIDs_1_1_1.set(PartyIDSource_149);
      Parties_NoPartyIDs_149.insert(PartyIDSource_149.getString());
      FIX::PartyRole PartyRole_149(9);
      noPartyIDs_1_1_1.set(PartyRole_149);
      Parties_NoPartyIDs_149.insert(PartyRole_149.getString());
      all_values.push_back(Parties_NoPartyIDs_149);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_298;
        FIX::PartySubID PartySubID_298("STRING_728833932");
        noPartySubIDs_1_1_2_0.set(PartySubID_298);
        PtysSubGrp_NoPartySubIDs_298.insert(PartySubID_298.getString());
        FIX::PartySubIDType PartySubIDType_298(32);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_298);
        PtysSubGrp_NoPartySubIDs_298.insert(PartySubIDType_298.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_298);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_299;
        FIX::PartySubID PartySubID_299("STRING_523693313");
        noPartySubIDs_1_1_2_1.set(PartySubID_299);
        PtysSubGrp_NoPartySubIDs_299.insert(PartySubID_299.getString());
        FIX::PartySubIDType PartySubIDType_299(25);
        noPartySubIDs_1_1_2_1.set(PartySubIDType_299);
        PtysSubGrp_NoPartySubIDs_299.insert(PartySubIDType_299.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_299);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_300;
        FIX::PartySubID PartySubID_300("STRING_474262286");
        noPartySubIDs_1_1_2_2.set(PartySubID_300);
        PtysSubGrp_NoPartySubIDs_300.insert(PartySubID_300.getString());
        FIX::PartySubIDType PartySubIDType_300(27);
        noPartySubIDs_1_1_2_2.set(PartySubIDType_300);
        PtysSubGrp_NoPartySubIDs_300.insert(PartySubIDType_300.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_300);

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noAsgnReqs_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_150;
      FIX::PartyID PartyID_150("STRING_1136600051");
      noPartyIDs_1_1_2.set(PartyID_150);
      Parties_NoPartyIDs_150.insert(PartyID_150.getString());
      FIX::PartyIDSource PartyIDSource_150('9');
      noPartyIDs_1_1_2.set(PartyIDSource_150);
      Parties_NoPartyIDs_150.insert(PartyIDSource_150.getString());
      FIX::PartyRole PartyRole_150(36);
      noPartyIDs_1_1_2.set(PartyRole_150);
      Parties_NoPartyIDs_150.insert(PartyRole_150.getString());
      all_values.push_back(Parties_NoPartyIDs_150);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_301;
        FIX::PartySubID PartySubID_301("STRING_1835936428");
        noPartySubIDs_1_2_2_0.set(PartySubID_301);
        PtysSubGrp_NoPartySubIDs_301.insert(PartySubID_301.getString());
        FIX::PartySubIDType PartySubIDType_301(26);
        noPartySubIDs_1_2_2_0.set(PartySubIDType_301);
        PtysSubGrp_NoPartySubIDs_301.insert(PartySubIDType_301.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_301);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_302;
        FIX::PartySubID PartySubID_302("STRING_1269903596");
        noPartySubIDs_1_2_2_1.set(PartySubID_302);
        PtysSubGrp_NoPartySubIDs_302.insert(PartySubID_302.getString());
        FIX::PartySubIDType PartySubIDType_302(18);
        noPartySubIDs_1_2_2_1.set(PartySubIDType_302);
        PtysSubGrp_NoPartySubIDs_302.insert(PartySubIDType_302.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_302);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_303;
        FIX::PartySubID PartySubID_303("STRING_1811939250");
        noPartySubIDs_1_2_2_2.set(PartySubID_303);
        PtysSubGrp_NoPartySubIDs_303.insert(PartySubID_303.getString());
        FIX::PartySubIDType PartySubIDType_303(30);
        noPartySubIDs_1_2_2_2.set(PartySubIDType_303);
        PtysSubGrp_NoPartySubIDs_303.insert(PartySubIDType_303.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_303);

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_2);
      }
      noAsgnReqs_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // StrmAsgnReqInstrmtGrp
    // Group StrmAsgnReqInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_1_1_0;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_2;
      FIX::MDEntrySize MDEntrySize_9;
      MDEntrySize_9.setString("19803960");
      noRelatedSym_1_1_0.set(MDEntrySize_9);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_2.insert(MDEntrySize_9.getString());
      FIX::MDStreamID MDStreamID_9("STRING_820140223");
      noRelatedSym_1_1_0.set(MDStreamID_9);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_2.insert(MDStreamID_9.getString());
      FIX::SettlType SettlType_35("STRING_8");
      noRelatedSym_1_1_0.set(SettlType_35);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_2.insert(SettlType_35.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_2);

      // Instrument
      multiset<string> Instrument_88;
      FIX::AttachmentPoint AttachmentPoint_88;
      AttachmentPoint_88.setString("28.060000");
      noRelatedSym_1_1_0.set(AttachmentPoint_88);
      Instrument_88.insert(AttachmentPoint_88.getString());
      FIX::CFICode CFICode_93("STRING_1941789590");
      noRelatedSym_1_1_0.set(CFICode_93);
      Instrument_88.insert(CFICode_93.getString());
      FIX::CPProgram CPProgram_88(2);
      noRelatedSym_1_1_0.set(CPProgram_88);
      Instrument_88.insert(CPProgram_88.getString());
      FIX::CPRegType CPRegType_88("STRING_849999018");
      noRelatedSym_1_1_0.set(CPRegType_88);
      Instrument_88.insert(CPRegType_88.getString());
      FIX::CapPrice CapPrice_88;
      CapPrice_88.setString("12640884");
      noRelatedSym_1_1_0.set(CapPrice_88);
      Instrument_88.insert(CapPrice_88.getString());
      FIX::ContractMultiplier ContractMultiplier_88;
      ContractMultiplier_88.setString("10644029");
      noRelatedSym_1_1_0.set(ContractMultiplier_88);
      Instrument_88.insert(ContractMultiplier_88.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_88(1);
      noRelatedSym_1_1_0.set(ContractMultiplierUnit_88);
      Instrument_88.insert(ContractMultiplierUnit_88.getString());
      FIX::ContractSettlMonth ContractSettlMonth_88("MONTHYEAR_972991107");
      noRelatedSym_1_1_0.set(ContractSettlMonth_88);
      Instrument_88.insert(ContractSettlMonth_88.getString());
      FIX::CountryOfIssue CountryOfIssue_88("COUNTRY_1490185333");
      noRelatedSym_1_1_0.set(CountryOfIssue_88);
      Instrument_88.insert(CountryOfIssue_88.getString());
      FIX::CouponPaymentDate CouponPaymentDate_88("LOCALMKTDATE_1082546231");
      noRelatedSym_1_1_0.set(CouponPaymentDate_88);
      Instrument_88.insert(CouponPaymentDate_88.getString());
      FIX::CouponRate CouponRate_88;
      CouponRate_88.setString("4.830000");
      noRelatedSym_1_1_0.set(CouponRate_88);
      Instrument_88.insert(CouponRate_88.getString());
      FIX::CreditRating CreditRating_88("STRING_71535617");
      noRelatedSym_1_1_0.set(CreditRating_88);
      Instrument_88.insert(CreditRating_88.getString());
      FIX::DatedDate DatedDate_88("LOCALMKTDATE_1173006753");
      noRelatedSym_1_1_0.set(DatedDate_88);
      Instrument_88.insert(DatedDate_88.getString());
      FIX::DetachmentPoint DetachmentPoint_88;
      DetachmentPoint_88.setString("37.960000");
      noRelatedSym_1_1_0.set(DetachmentPoint_88);
      Instrument_88.insert(DetachmentPoint_88.getString());
      FIX::EncodedIssuer EncodedIssuer_88("DATA_383870807");
      noRelatedSym_1_1_0.set(EncodedIssuer_88);
      Instrument_88.insert(EncodedIssuer_88.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_88(1647269039);
      noRelatedSym_1_1_0.set(EncodedIssuerLen_88);
      Instrument_88.insert(EncodedIssuerLen_88.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_88("DATA_440118531");
      noRelatedSym_1_1_0.set(EncodedSecurityDesc_88);
      Instrument_88.insert(EncodedSecurityDesc_88.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_88(1520470859);
      noRelatedSym_1_1_0.set(EncodedSecurityDescLen_88);
      Instrument_88.insert(EncodedSecurityDescLen_88.getString());
      FIX::ExerciseStyle ExerciseStyle_88(0);
      noRelatedSym_1_1_0.set(ExerciseStyle_88);
      Instrument_88.insert(ExerciseStyle_88.getString());
      FIX::Factor Factor_88;
      Factor_88.setString("11216368");
      noRelatedSym_1_1_0.set(Factor_88);
      Instrument_88.insert(Factor_88.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_88(false);
      noRelatedSym_1_1_0.set(FlexProductEligibilityIndicator_88);
      Instrument_88.insert(FlexProductEligibilityIndicator_88.getString());
      FIX::FlexibleIndicator FlexibleIndicator_88(true);
      noRelatedSym_1_1_0.set(FlexibleIndicator_88);
      Instrument_88.insert(FlexibleIndicator_88.getString());
      FIX::FloorPrice FloorPrice_88;
      FloorPrice_88.setString("8921588");
      noRelatedSym_1_1_0.set(FloorPrice_88);
      Instrument_88.insert(FloorPrice_88.getString());
      FIX::FlowScheduleType FlowScheduleType_88(2);
      noRelatedSym_1_1_0.set(FlowScheduleType_88);
      Instrument_88.insert(FlowScheduleType_88.getString());
      FIX::InstrRegistry InstrRegistry_88("STRING_20022860");
      noRelatedSym_1_1_0.set(InstrRegistry_88);
      Instrument_88.insert(InstrRegistry_88.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_88('5');
      noRelatedSym_1_1_0.set(InstrmtAssignmentMethod_88);
      Instrument_88.insert(InstrmtAssignmentMethod_88.getString());
      FIX::InterestAccrualDate InterestAccrualDate_88("LOCALMKTDATE_359388500");
      noRelatedSym_1_1_0.set(InterestAccrualDate_88);
      Instrument_88.insert(InterestAccrualDate_88.getString());
      FIX::IssueDate IssueDate_88("LOCALMKTDATE_2088049920");
      noRelatedSym_1_1_0.set(IssueDate_88);
      Instrument_88.insert(IssueDate_88.getString());
      FIX::Issuer Issuer_88("STRING_389526841");
      noRelatedSym_1_1_0.set(Issuer_88);
      Instrument_88.insert(Issuer_88.getString());
      FIX::ListMethod ListMethod_88(1);
      noRelatedSym_1_1_0.set(ListMethod_88);
      Instrument_88.insert(ListMethod_88.getString());
      FIX::LocaleOfIssue LocaleOfIssue_88("STRING_1644656604");
      noRelatedSym_1_1_0.set(LocaleOfIssue_88);
      Instrument_88.insert(LocaleOfIssue_88.getString());
      FIX::MaturityDate MaturityDate_88("LOCALMKTDATE_699989647");
      noRelatedSym_1_1_0.set(MaturityDate_88);
      Instrument_88.insert(MaturityDate_88.getString());
      FIX::MaturityMonthYear MaturityMonthYear_88("MONTHYEAR_973834665");
      noRelatedSym_1_1_0.set(MaturityMonthYear_88);
      Instrument_88.insert(MaturityMonthYear_88.getString());
      FIX::MaturityTime MaturityTime_88("TZTIMEONLY_1738105414");
      noRelatedSym_1_1_0.set(MaturityTime_88);
      Instrument_88.insert(MaturityTime_88.getString());
      FIX::MinPriceIncrement MinPriceIncrement_88;
      MinPriceIncrement_88.setString("15499886");
      noRelatedSym_1_1_0.set(MinPriceIncrement_88);
      Instrument_88.insert(MinPriceIncrement_88.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_88;
      MinPriceIncrementAmount_88.setString("904394");
      noRelatedSym_1_1_0.set(MinPriceIncrementAmount_88);
      Instrument_88.insert(MinPriceIncrementAmount_88.getString());
      FIX::NTPositionLimit NTPositionLimit_88(655024716);
      noRelatedSym_1_1_0.set(NTPositionLimit_88);
      Instrument_88.insert(NTPositionLimit_88.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_88;
      NotionalPercentageOutstanding_88.setString("24.800000");
      noRelatedSym_1_1_0.set(NotionalPercentageOutstanding_88);
      Instrument_88.insert(NotionalPercentageOutstanding_88.getString());
      FIX::OptAttribute OptAttribute_88('1');
      noRelatedSym_1_1_0.set(OptAttribute_88);
      Instrument_88.insert(OptAttribute_88.getString());
      FIX::OptPayoutAmount OptPayoutAmount_88;
      OptPayoutAmount_88.setString("21452100");
      noRelatedSym_1_1_0.set(OptPayoutAmount_88);
      Instrument_88.insert(OptPayoutAmount_88.getString());
      FIX::OptPayoutType OptPayoutType_88(1);
      noRelatedSym_1_1_0.set(OptPayoutType_88);
      Instrument_88.insert(OptPayoutType_88.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_88;
      OriginalNotionalPercentageOutstanding_88.setString("10.540000");
      noRelatedSym_1_1_0.set(OriginalNotionalPercentageOutstanding_88);
      Instrument_88.insert(OriginalNotionalPercentageOutstanding_88.getString());
      FIX::Pool Pool_88("STRING_69262018");
      noRelatedSym_1_1_0.set(Pool_88);
      Instrument_88.insert(Pool_88.getString());
      FIX::PositionLimit PositionLimit_88(643261816);
      noRelatedSym_1_1_0.set(PositionLimit_88);
      Instrument_88.insert(PositionLimit_88.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_88("STRING_INT");
      noRelatedSym_1_1_0.set(PriceQuoteMethod_88);
      Instrument_88.insert(PriceQuoteMethod_88.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_88("STRING_453132826");
      noRelatedSym_1_1_0.set(PriceUnitOfMeasure_88);
      Instrument_88.insert(PriceUnitOfMeasure_88.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_88;
      PriceUnitOfMeasureQty_88.setString("1430472");
      noRelatedSym_1_1_0.set(PriceUnitOfMeasureQty_88);
      Instrument_88.insert(PriceUnitOfMeasureQty_88.getString());
      FIX::Product Product_96(12);
      noRelatedSym_1_1_0.set(Product_96);
      Instrument_88.insert(Product_96.getString());
      FIX::ProductComplex ProductComplex_88("STRING_1973603685");
      noRelatedSym_1_1_0.set(ProductComplex_88);
      Instrument_88.insert(ProductComplex_88.getString());
      FIX::PutOrCall PutOrCall_88(1);
      noRelatedSym_1_1_0.set(PutOrCall_88);
      Instrument_88.insert(PutOrCall_88.getString());
      FIX::RedemptionDate RedemptionDate_88("LOCALMKTDATE_1921756592");
      noRelatedSym_1_1_0.set(RedemptionDate_88);
      Instrument_88.insert(RedemptionDate_88.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_88("STRING_265719492");
      noRelatedSym_1_1_0.set(RepoCollateralSecurityType_88);
      Instrument_88.insert(RepoCollateralSecurityType_88.getString());
      FIX::RepurchaseRate RepurchaseRate_88;
      RepurchaseRate_88.setString("60.270000");
      noRelatedSym_1_1_0.set(RepurchaseRate_88);
      Instrument_88.insert(RepurchaseRate_88.getString());
      FIX::RepurchaseTerm RepurchaseTerm_88(666431785);
      noRelatedSym_1_1_0.set(RepurchaseTerm_88);
      Instrument_88.insert(RepurchaseTerm_88.getString());
      FIX::RestructuringType RestructuringType_88("STRING_FR");
      noRelatedSym_1_1_0.set(RestructuringType_88);
      Instrument_88.insert(RestructuringType_88.getString());
      FIX::SecurityDesc SecurityDesc_88("STRING_1056498888");
      noRelatedSym_1_1_0.set(SecurityDesc_88);
      Instrument_88.insert(SecurityDesc_88.getString());
      FIX::SecurityExchange SecurityExchange_88("EXCHANGE_1223046229");
      noRelatedSym_1_1_0.set(SecurityExchange_88);
      Instrument_88.insert(SecurityExchange_88.getString());
      FIX::SecurityGroup SecurityGroup_88("STRING_187127396");
      noRelatedSym_1_1_0.set(SecurityGroup_88);
      Instrument_88.insert(SecurityGroup_88.getString());
      FIX::SecurityID SecurityID_88("STRING_997065160");
      noRelatedSym_1_1_0.set(SecurityID_88);
      Instrument_88.insert(SecurityID_88.getString());
      FIX::SecurityIDSource SecurityIDSource_88("STRING_L");
      noRelatedSym_1_1_0.set(SecurityIDSource_88);
      Instrument_88.insert(SecurityIDSource_88.getString());
      FIX::SecurityStatus SecurityStatus_89("STRING_2");
      noRelatedSym_1_1_0.set(SecurityStatus_89);
      Instrument_88.insert(SecurityStatus_89.getString());
      FIX::SecuritySubType SecuritySubType_92("STRING_494238116");
      noRelatedSym_1_1_0.set(SecuritySubType_92);
      Instrument_88.insert(SecuritySubType_92.getString());
      FIX::SecurityType SecurityType_96("STRING_OPT");
      noRelatedSym_1_1_0.set(SecurityType_96);
      Instrument_88.insert(SecurityType_96.getString());
      FIX::Seniority Seniority_88("STRING_SD");
      noRelatedSym_1_1_0.set(Seniority_88);
      Instrument_88.insert(Seniority_88.getString());
      FIX::SettlMethod SettlMethod_88('C');
      noRelatedSym_1_1_0.set(SettlMethod_88);
      Instrument_88.insert(SettlMethod_88.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_88("STRING_1715067736");
      noRelatedSym_1_1_0.set(SettleOnOpenFlag_88);
      Instrument_88.insert(SettleOnOpenFlag_88.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_88("STRING_283446600");
      noRelatedSym_1_1_0.set(StateOrProvinceOfIssue_88);
      Instrument_88.insert(StateOrProvinceOfIssue_88.getString());
      FIX::StrikeCurrency StrikeCurrency_88("USD");
      noRelatedSym_1_1_0.set(StrikeCurrency_88);
      Instrument_88.insert(StrikeCurrency_88.getString());
      FIX::StrikeMultiplier StrikeMultiplier_88;
      StrikeMultiplier_88.setString("13468771");
      noRelatedSym_1_1_0.set(StrikeMultiplier_88);
      Instrument_88.insert(StrikeMultiplier_88.getString());
      FIX::StrikePrice StrikePrice_88;
      StrikePrice_88.setString("7376109");
      noRelatedSym_1_1_0.set(StrikePrice_88);
      Instrument_88.insert(StrikePrice_88.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_88(1);
      noRelatedSym_1_1_0.set(StrikePriceBoundaryMethod_88);
      Instrument_88.insert(StrikePriceBoundaryMethod_88.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_88;
      StrikePriceBoundaryPrecision_88.setString("45.770000");
      noRelatedSym_1_1_0.set(StrikePriceBoundaryPrecision_88);
      Instrument_88.insert(StrikePriceBoundaryPrecision_88.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_88(3);
      noRelatedSym_1_1_0.set(StrikePriceDeterminationMethod_88);
      Instrument_88.insert(StrikePriceDeterminationMethod_88.getString());
      FIX::StrikeValue StrikeValue_88;
      StrikeValue_88.setString("2162934");
      noRelatedSym_1_1_0.set(StrikeValue_88);
      Instrument_88.insert(StrikeValue_88.getString());
      FIX::Symbol Symbol_88("STRING_1083005779");
      noRelatedSym_1_1_0.set(Symbol_88);
      Instrument_88.insert(Symbol_88.getString());
      FIX::SymbolSfx SymbolSfx_88("STRING_CD");
      noRelatedSym_1_1_0.set(SymbolSfx_88);
      Instrument_88.insert(SymbolSfx_88.getString());
      FIX::TimeUnit TimeUnit_88("STRING_D");
      noRelatedSym_1_1_0.set(TimeUnit_88);
      Instrument_88.insert(TimeUnit_88.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_88(2);
      noRelatedSym_1_1_0.set(UnderlyingPriceDeterminationMethod_88);
      Instrument_88.insert(UnderlyingPriceDeterminationMethod_88.getString());
      FIX::UnitOfMeasure UnitOfMeasure_88("STRING_t");
      noRelatedSym_1_1_0.set(UnitOfMeasure_88);
      Instrument_88.insert(UnitOfMeasure_88.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_88;
      UnitOfMeasureQty_88.setString("11048758");
      noRelatedSym_1_1_0.set(UnitOfMeasureQty_88);
      Instrument_88.insert(UnitOfMeasureQty_88.getString());
      FIX::ValuationMethod ValuationMethod_88("STRING_FUTDA");
      noRelatedSym_1_1_0.set(ValuationMethod_88);
      Instrument_88.insert(ValuationMethod_88.getString());
      all_values.push_back(Instrument_88);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_168;
        FIX::ComplexEventCondition ComplexEventCondition_168(2);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_168);
        ComplexEvents_NoComplexEvents_168.insert(ComplexEventCondition_168.getString());
        FIX::ComplexEventPrice ComplexEventPrice_168;
        ComplexEventPrice_168.setString("1763465");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_168);
        ComplexEvents_NoComplexEvents_168.insert(ComplexEventPrice_168.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_168(1);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_168);
        ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceBoundaryMethod_168.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_168;
        ComplexEventPriceBoundaryPrecision_168.setString("71.510000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_168);
        ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceBoundaryPrecision_168.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_168(3);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_168);
        ComplexEvents_NoComplexEvents_168.insert(ComplexEventPriceTimeType_168.getString());
        FIX::ComplexEventType ComplexEventType_168(8);
        noComplexEvents_1_0_2_0.set(ComplexEventType_168);
        ComplexEvents_NoComplexEvents_168.insert(ComplexEventType_168.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_168;
        ComplexOptPayoutAmount_168.setString("20474323");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_168);
        ComplexEvents_NoComplexEvents_168.insert(ComplexOptPayoutAmount_168.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_168);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_339;
          FIX::ComplexEventEndDate ComplexEventEndDate_339(FIX::UTCTIMESTAMP(3, 17, 14, 9, 2, 2014));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_339);
          ComplexEventDates_NoComplexEventDates_339.insert(ComplexEventEndDate_339.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_339(FIX::UTCTIMESTAMP(13, 57, 39, 1, 3, 2015));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_339);
          ComplexEventDates_NoComplexEventDates_339.insert(ComplexEventStartDate_339.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_339);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_690;
            FIX::ComplexEventEndTime ComplexEventEndTime_690(FIX::UTCTIMEONLY(9, 30, 39));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_690);
            ComplexEventTimes_NoComplexEventTimes_690.insert(ComplexEventEndTime_690.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_690(FIX::UTCTIMEONLY(9, 9, 32));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_690);
            ComplexEventTimes_NoComplexEventTimes_690.insert(ComplexEventStartTime_690.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_690);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_691;
            FIX::ComplexEventEndTime ComplexEventEndTime_691(FIX::UTCTIMEONLY(16, 22, 59));
            noComplexEventTimes_1_0_0_0_4_1.set(ComplexEventEndTime_691);
            ComplexEventTimes_NoComplexEventTimes_691.insert(ComplexEventEndTime_691.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_691(FIX::UTCTIMEONLY(0, 42, 7));
            noComplexEventTimes_1_0_0_0_4_1.set(ComplexEventStartTime_691);
            ComplexEventTimes_NoComplexEventTimes_691.insert(ComplexEventStartTime_691.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_691);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_1);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        noRelatedSym_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_169;
        FIX::ComplexEventCondition ComplexEventCondition_169(1);
        noComplexEvents_1_0_2_1.set(ComplexEventCondition_169);
        ComplexEvents_NoComplexEvents_169.insert(ComplexEventCondition_169.getString());
        FIX::ComplexEventPrice ComplexEventPrice_169;
        ComplexEventPrice_169.setString("11443508");
        noComplexEvents_1_0_2_1.set(ComplexEventPrice_169);
        ComplexEvents_NoComplexEvents_169.insert(ComplexEventPrice_169.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_169(2);
        noComplexEvents_1_0_2_1.set(ComplexEventPriceBoundaryMethod_169);
        ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceBoundaryMethod_169.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_169;
        ComplexEventPriceBoundaryPrecision_169.setString("91.330000");
        noComplexEvents_1_0_2_1.set(ComplexEventPriceBoundaryPrecision_169);
        ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceBoundaryPrecision_169.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_169(3);
        noComplexEvents_1_0_2_1.set(ComplexEventPriceTimeType_169);
        ComplexEvents_NoComplexEvents_169.insert(ComplexEventPriceTimeType_169.getString());
        FIX::ComplexEventType ComplexEventType_169(3);
        noComplexEvents_1_0_2_1.set(ComplexEventType_169);
        ComplexEvents_NoComplexEvents_169.insert(ComplexEventType_169.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_169;
        ComplexOptPayoutAmount_169.setString("6973833");
        noComplexEvents_1_0_2_1.set(ComplexOptPayoutAmount_169);
        ComplexEvents_NoComplexEvents_169.insert(ComplexOptPayoutAmount_169.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_169);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_340;
          FIX::ComplexEventEndDate ComplexEventEndDate_340(FIX::UTCTIMESTAMP(21, 46, 40, 11, 9, 2012));
          noComplexEventDates_1_0_1_3_0.set(ComplexEventEndDate_340);
          ComplexEventDates_NoComplexEventDates_340.insert(ComplexEventEndDate_340.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_340(FIX::UTCTIMESTAMP(21, 36, 9, 4, 3, 2010));
          noComplexEventDates_1_0_1_3_0.set(ComplexEventStartDate_340);
          ComplexEventDates_NoComplexEventDates_340.insert(ComplexEventStartDate_340.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_340);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_692;
            FIX::ComplexEventEndTime ComplexEventEndTime_692(FIX::UTCTIMEONLY(6, 34, 50));
            noComplexEventTimes_1_0_1_0_4_0.set(ComplexEventEndTime_692);
            ComplexEventTimes_NoComplexEventTimes_692.insert(ComplexEventEndTime_692.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_692(FIX::UTCTIMEONLY(22, 24, 46));
            noComplexEventTimes_1_0_1_0_4_0.set(ComplexEventStartTime_692);
            ComplexEventTimes_NoComplexEventTimes_692.insert(ComplexEventStartTime_692.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_692);

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_693;
            FIX::ComplexEventEndTime ComplexEventEndTime_693(FIX::UTCTIMEONLY(10, 2, 58));
            noComplexEventTimes_1_0_1_0_4_1.set(ComplexEventEndTime_693);
            ComplexEventTimes_NoComplexEventTimes_693.insert(ComplexEventEndTime_693.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_693(FIX::UTCTIMEONLY(20, 49, 16));
            noComplexEventTimes_1_0_1_0_4_1.set(ComplexEventStartTime_693);
            ComplexEventTimes_NoComplexEventTimes_693.insert(ComplexEventStartTime_693.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_693);

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_694;
            FIX::ComplexEventEndTime ComplexEventEndTime_694(FIX::UTCTIMEONLY(10, 2, 3));
            noComplexEventTimes_1_0_1_0_4_2.set(ComplexEventEndTime_694);
            ComplexEventTimes_NoComplexEventTimes_694.insert(ComplexEventEndTime_694.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_694(FIX::UTCTIMEONLY(14, 10, 19));
            noComplexEventTimes_1_0_1_0_4_2.set(ComplexEventStartTime_694);
            ComplexEventTimes_NoComplexEventTimes_694.insert(ComplexEventStartTime_694.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_694);

            noComplexEventDates_1_0_1_3_0.addGroup(noComplexEventTimes_1_0_1_0_4_2);
          }
          noComplexEvents_1_0_2_1.addGroup(noComplexEventDates_1_0_1_3_0);
        }
        noRelatedSym_1_1_0.addGroup(noComplexEvents_1_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_171;
        FIX::EventDate EventDate_171("LOCALMKTDATE_850715978");
        noEvents_1_0_2_0.set(EventDate_171);
        EvntGrp_NoEvents_171.insert(EventDate_171.getString());
        FIX::EventPx EventPx_171;
        EventPx_171.setString("1838213");
        noEvents_1_0_2_0.set(EventPx_171);
        EvntGrp_NoEvents_171.insert(EventPx_171.getString());
        FIX::EventText EventText_171("STRING_1462249492");
        noEvents_1_0_2_0.set(EventText_171);
        EvntGrp_NoEvents_171.insert(EventText_171.getString());
        FIX::EventTime EventTime_171(FIX::UTCTIMESTAMP(18, 4, 23, 4, 3, 2011));
        noEvents_1_0_2_0.set(EventTime_171);
        EvntGrp_NoEvents_171.insert(EventTime_171.getString());
        FIX::EventType EventType_171(4);
        noEvents_1_0_2_0.set(EventType_171);
        EvntGrp_NoEvents_171.insert(EventType_171.getString());
        all_values.push_back(EvntGrp_NoEvents_171);

        noRelatedSym_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_168;
        FIX::InstrumentPartyID InstrumentPartyID_168("STRING_476269049");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_168);
        InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyID_168.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_168('1');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_168);
        InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyIDSource_168.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_168(739311129);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_168);
        InstrumentParties_NoInstrumentParties_168.insert(InstrumentPartyRole_168.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_168);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343;
          FIX::InstrumentPartySubID InstrumentPartySubID_343("STRING_463983423");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_343);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343.insert(InstrumentPartySubID_343.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_343(381116879);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_343);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343.insert(InstrumentPartySubIDType_343.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        noRelatedSym_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_169;
        FIX::InstrumentPartyID InstrumentPartyID_169("STRING_707821028");
        noInstrumentParties_1_0_2_1.set(InstrumentPartyID_169);
        InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyID_169.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_169('1');
        noInstrumentParties_1_0_2_1.set(InstrumentPartyIDSource_169);
        InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyIDSource_169.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_169(720305989);
        noInstrumentParties_1_0_2_1.set(InstrumentPartyRole_169);
        InstrumentParties_NoInstrumentParties_169.insert(InstrumentPartyRole_169.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_169);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344;
          FIX::InstrumentPartySubID InstrumentPartySubID_344("STRING_1557128830");
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubID_344);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344.insert(InstrumentPartySubID_344.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_344(2018609855);
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubIDType_344);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344.insert(InstrumentPartySubIDType_344.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345;
          FIX::InstrumentPartySubID InstrumentPartySubID_345("STRING_161397011");
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubID_345);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345.insert(InstrumentPartySubID_345.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_345(759460086);
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubIDType_345);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345.insert(InstrumentPartySubIDType_345.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_1);
        }
        noRelatedSym_1_1_0.addGroup(noInstrumentParties_1_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_185;
        FIX::SecurityAltID SecurityAltID_185("STRING_1259972161");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_185);
        SecAltIDGrp_NoSecurityAltID_185.insert(SecurityAltID_185.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_185("STRING_361689848");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_185);
        SecAltIDGrp_NoSecurityAltID_185.insert(SecurityAltIDSource_185.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_185);

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_186;
        FIX::SecurityAltID SecurityAltID_186("STRING_1777093297");
        noSecurityAltID_1_0_2_1.set(SecurityAltID_186);
        SecAltIDGrp_NoSecurityAltID_186.insert(SecurityAltID_186.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_186("STRING_1059352805");
        noSecurityAltID_1_0_2_1.set(SecurityAltIDSource_186);
        SecAltIDGrp_NoSecurityAltID_186.insert(SecurityAltIDSource_186.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_186);

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_187;
        FIX::SecurityAltID SecurityAltID_187("STRING_1212405826");
        noSecurityAltID_1_0_2_2.set(SecurityAltID_187);
        SecAltIDGrp_NoSecurityAltID_187.insert(SecurityAltID_187.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_187("STRING_1960914597");
        noSecurityAltID_1_0_2_2.set(SecurityAltIDSource_187);
        SecAltIDGrp_NoSecurityAltID_187.insert(SecurityAltIDSource_187.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_187);

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_176;
      FIX::SecurityXML SecurityXML_177("XMLDATA_374118649");
      noRelatedSym_1_1_0.set(SecurityXML_177);
      FIX::SecurityXMLLen SecurityXMLLen_88(970104319);
      noRelatedSym_1_1_0.set(SecurityXMLLen_88);
      FIX::SecurityXMLSchema SecurityXMLSchema_88("STRING_683075840");
      noRelatedSym_1_1_0.set(SecurityXMLSchema_88);
      SecurityXML_176.insert(SecurityXMLSchema_88.getString());
      all_values.push_back(SecurityXML_176);

      noAsgnReqs_0_1.addGroup(noRelatedSym_1_1_0);
    }
    msg.addGroup(noAsgnReqs_0_1);
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
