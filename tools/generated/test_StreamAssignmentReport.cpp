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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::StreamAssignmentReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentReport_0;
  FIX::StreamAsgnReqID StreamAsgnReqID_0("STRING_1387812090");
  msg.set(StreamAsgnReqID_0);
  StreamAssignmentReport_0.insert(StreamAsgnReqID_0.getString());
  FIX::StreamAsgnReqType StreamAsgnReqType_0(1);
  msg.set(StreamAsgnReqType_0);
  StreamAssignmentReport_0.insert(StreamAsgnReqType_0.getString());
  FIX::StreamAsgnRptID StreamAsgnRptID_0("STRING_1610889360");
  msg.set(StreamAsgnRptID_0);
  StreamAssignmentReport_0.insert(StreamAsgnRptID_0.getString());
  all_values.push_back(StreamAssignmentReport_0);

  all_compo_names.insert("StreamAssignmentReport");

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
      multiset<string> Parties_NoPartyIDs_145;
      FIX::PartyID PartyID_145("STRING_583345734");
      noPartyIDs_0_1_0.set(PartyID_145);
      Parties_NoPartyIDs_145.insert(PartyID_145.getString());
      FIX::PartyIDSource PartyIDSource_145('D');
      noPartyIDs_0_1_0.set(PartyIDSource_145);
      Parties_NoPartyIDs_145.insert(PartyIDSource_145.getString());
      FIX::PartyRole PartyRole_145(8);
      noPartyIDs_0_1_0.set(PartyRole_145);
      Parties_NoPartyIDs_145.insert(PartyRole_145.getString());
      all_values.push_back(Parties_NoPartyIDs_145);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_311;
        FIX::PartySubID PartySubID_311("STRING_540293998");
        noPartySubIDs_0_0_2_0.set(PartySubID_311);
        PtysSubGrp_NoPartySubIDs_311.insert(PartySubID_311.getString());
        FIX::PartySubIDType PartySubIDType_311(30);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_311);
        PtysSubGrp_NoPartySubIDs_311.insert(PartySubIDType_311.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_311);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_312;
        FIX::PartySubID PartySubID_312("STRING_464028864");
        noPartySubIDs_0_0_2_1.set(PartySubID_312);
        PtysSubGrp_NoPartySubIDs_312.insert(PartySubID_312.getString());
        FIX::PartySubIDType PartySubIDType_312(25);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_312);
        PtysSubGrp_NoPartySubIDs_312.insert(PartySubIDType_312.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_312);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_313;
        FIX::PartySubID PartySubID_313("STRING_288709283");
        noPartySubIDs_0_0_2_2.set(PartySubID_313);
        PtysSubGrp_NoPartySubIDs_313.insert(PartySubID_313.getString());
        FIX::PartySubIDType PartySubIDType_313(10);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_313);
        PtysSubGrp_NoPartySubIDs_313.insert(PartySubIDType_313.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_313);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_0;
      FIX::EncodedText EncodedText_95("DATA_448478512");
      noRelatedSym_0_1_0.set(EncodedText_95);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(EncodedText_95.getString());
      FIX::EncodedTextLen EncodedTextLen_95(653903775);
      noRelatedSym_0_1_0.set(EncodedTextLen_95);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(EncodedTextLen_95.getString());
      FIX::MDStreamID MDStreamID_4("STRING_108212787");
      noRelatedSym_0_1_0.set(MDStreamID_4);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(MDStreamID_4.getString());
      FIX::SettlType SettlType_31("STRING_1");
      noRelatedSym_0_1_0.set(SettlType_31);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(SettlType_31.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_0(2);
      noRelatedSym_0_1_0.set(StreamAsgnRejReason_0);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(StreamAsgnRejReason_0.getString());
      FIX::StreamAsgnType StreamAsgnType_0(2);
      noRelatedSym_0_1_0.set(StreamAsgnType_0);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(StreamAsgnType_0.getString());
      FIX::Text Text_95("STRING_637954584");
      noRelatedSym_0_1_0.set(Text_95);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(Text_95.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_0);
      all_compo_names.insert("StrmAsgnRptInstrmtGrp.NoRelatedSym");

      // Instrument
      multiset<string> Instrument_93;
      FIX::AttachmentPoint AttachmentPoint_93;
      AttachmentPoint_93.setString("58.660000");
      noRelatedSym_0_1_0.set(AttachmentPoint_93);
      Instrument_93.insert(AttachmentPoint_93.getString());
      FIX::CFICode CFICode_98("STRING_1287403051");
      noRelatedSym_0_1_0.set(CFICode_98);
      Instrument_93.insert(CFICode_98.getString());
      FIX::CPProgram CPProgram_93(2);
      noRelatedSym_0_1_0.set(CPProgram_93);
      Instrument_93.insert(CPProgram_93.getString());
      FIX::CPRegType CPRegType_93("STRING_1623423281");
      noRelatedSym_0_1_0.set(CPRegType_93);
      Instrument_93.insert(CPRegType_93.getString());
      FIX::CapPrice CapPrice_93;
      CapPrice_93.setString("3471989");
      noRelatedSym_0_1_0.set(CapPrice_93);
      Instrument_93.insert(CapPrice_93.getString());
      FIX::ContractMultiplier ContractMultiplier_93;
      ContractMultiplier_93.setString("450204");
      noRelatedSym_0_1_0.set(ContractMultiplier_93);
      Instrument_93.insert(ContractMultiplier_93.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_93(2);
      noRelatedSym_0_1_0.set(ContractMultiplierUnit_93);
      Instrument_93.insert(ContractMultiplierUnit_93.getString());
      FIX::ContractSettlMonth ContractSettlMonth_93("MONTHYEAR_651223229");
      noRelatedSym_0_1_0.set(ContractSettlMonth_93);
      Instrument_93.insert(ContractSettlMonth_93.getString());
      FIX::CountryOfIssue CountryOfIssue_93("COUNTRY_1432832544");
      noRelatedSym_0_1_0.set(CountryOfIssue_93);
      Instrument_93.insert(CountryOfIssue_93.getString());
      FIX::CouponPaymentDate CouponPaymentDate_93("LOCALMKTDATE_213043250");
      noRelatedSym_0_1_0.set(CouponPaymentDate_93);
      Instrument_93.insert(CouponPaymentDate_93.getString());
      FIX::CouponRate CouponRate_93;
      CouponRate_93.setString("89.410000");
      noRelatedSym_0_1_0.set(CouponRate_93);
      Instrument_93.insert(CouponRate_93.getString());
      FIX::CreditRating CreditRating_93("STRING_1739523394");
      noRelatedSym_0_1_0.set(CreditRating_93);
      Instrument_93.insert(CreditRating_93.getString());
      FIX::DatedDate DatedDate_93("LOCALMKTDATE_1431779057");
      noRelatedSym_0_1_0.set(DatedDate_93);
      Instrument_93.insert(DatedDate_93.getString());
      FIX::DetachmentPoint DetachmentPoint_93;
      DetachmentPoint_93.setString("46.750000");
      noRelatedSym_0_1_0.set(DetachmentPoint_93);
      Instrument_93.insert(DetachmentPoint_93.getString());
      FIX::EncodedIssuer EncodedIssuer_93("DATA_212839294");
      noRelatedSym_0_1_0.set(EncodedIssuer_93);
      Instrument_93.insert(EncodedIssuer_93.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_93(1744830853);
      noRelatedSym_0_1_0.set(EncodedIssuerLen_93);
      Instrument_93.insert(EncodedIssuerLen_93.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_93("DATA_1591243983");
      noRelatedSym_0_1_0.set(EncodedSecurityDesc_93);
      Instrument_93.insert(EncodedSecurityDesc_93.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_93(753133292);
      noRelatedSym_0_1_0.set(EncodedSecurityDescLen_93);
      Instrument_93.insert(EncodedSecurityDescLen_93.getString());
      FIX::ExerciseStyle ExerciseStyle_93(0);
      noRelatedSym_0_1_0.set(ExerciseStyle_93);
      Instrument_93.insert(ExerciseStyle_93.getString());
      FIX::Factor Factor_93;
      Factor_93.setString("20552728");
      noRelatedSym_0_1_0.set(Factor_93);
      Instrument_93.insert(Factor_93.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_93(true);
      noRelatedSym_0_1_0.set(FlexProductEligibilityIndicator_93);
      Instrument_93.insert(FlexProductEligibilityIndicator_93.getString());
      FIX::FlexibleIndicator FlexibleIndicator_93(true);
      noRelatedSym_0_1_0.set(FlexibleIndicator_93);
      Instrument_93.insert(FlexibleIndicator_93.getString());
      FIX::FloorPrice FloorPrice_93;
      FloorPrice_93.setString("9405702");
      noRelatedSym_0_1_0.set(FloorPrice_93);
      Instrument_93.insert(FloorPrice_93.getString());
      FIX::FlowScheduleType FlowScheduleType_93(4);
      noRelatedSym_0_1_0.set(FlowScheduleType_93);
      Instrument_93.insert(FlowScheduleType_93.getString());
      FIX::InstrRegistry InstrRegistry_93("STRING_500407121");
      noRelatedSym_0_1_0.set(InstrRegistry_93);
      Instrument_93.insert(InstrRegistry_93.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_93('1');
      noRelatedSym_0_1_0.set(InstrmtAssignmentMethod_93);
      Instrument_93.insert(InstrmtAssignmentMethod_93.getString());
      FIX::InterestAccrualDate InterestAccrualDate_93("LOCALMKTDATE_448188977");
      noRelatedSym_0_1_0.set(InterestAccrualDate_93);
      Instrument_93.insert(InterestAccrualDate_93.getString());
      FIX::IssueDate IssueDate_93("LOCALMKTDATE_464768662");
      noRelatedSym_0_1_0.set(IssueDate_93);
      Instrument_93.insert(IssueDate_93.getString());
      FIX::Issuer Issuer_93("STRING_640207813");
      noRelatedSym_0_1_0.set(Issuer_93);
      Instrument_93.insert(Issuer_93.getString());
      FIX::ListMethod ListMethod_93(1);
      noRelatedSym_0_1_0.set(ListMethod_93);
      Instrument_93.insert(ListMethod_93.getString());
      FIX::LocaleOfIssue LocaleOfIssue_93("STRING_1102723247");
      noRelatedSym_0_1_0.set(LocaleOfIssue_93);
      Instrument_93.insert(LocaleOfIssue_93.getString());
      FIX::MaturityDate MaturityDate_93("LOCALMKTDATE_2126933679");
      noRelatedSym_0_1_0.set(MaturityDate_93);
      Instrument_93.insert(MaturityDate_93.getString());
      FIX::MaturityMonthYear MaturityMonthYear_93("MONTHYEAR_339140060");
      noRelatedSym_0_1_0.set(MaturityMonthYear_93);
      Instrument_93.insert(MaturityMonthYear_93.getString());
      FIX::MaturityTime MaturityTime_93("TZTIMEONLY_2107215756");
      noRelatedSym_0_1_0.set(MaturityTime_93);
      Instrument_93.insert(MaturityTime_93.getString());
      FIX::MinPriceIncrement MinPriceIncrement_93;
      MinPriceIncrement_93.setString("16028733");
      noRelatedSym_0_1_0.set(MinPriceIncrement_93);
      Instrument_93.insert(MinPriceIncrement_93.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_93;
      MinPriceIncrementAmount_93.setString("6863390");
      noRelatedSym_0_1_0.set(MinPriceIncrementAmount_93);
      Instrument_93.insert(MinPriceIncrementAmount_93.getString());
      FIX::NTPositionLimit NTPositionLimit_93(4752562);
      noRelatedSym_0_1_0.set(NTPositionLimit_93);
      Instrument_93.insert(NTPositionLimit_93.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_93;
      NotionalPercentageOutstanding_93.setString("57.070000");
      noRelatedSym_0_1_0.set(NotionalPercentageOutstanding_93);
      Instrument_93.insert(NotionalPercentageOutstanding_93.getString());
      FIX::OptAttribute OptAttribute_93('1');
      noRelatedSym_0_1_0.set(OptAttribute_93);
      Instrument_93.insert(OptAttribute_93.getString());
      FIX::OptPayoutAmount OptPayoutAmount_93;
      OptPayoutAmount_93.setString("14375851");
      noRelatedSym_0_1_0.set(OptPayoutAmount_93);
      Instrument_93.insert(OptPayoutAmount_93.getString());
      FIX::OptPayoutType OptPayoutType_93(3);
      noRelatedSym_0_1_0.set(OptPayoutType_93);
      Instrument_93.insert(OptPayoutType_93.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_93;
      OriginalNotionalPercentageOutstanding_93.setString("11.710000");
      noRelatedSym_0_1_0.set(OriginalNotionalPercentageOutstanding_93);
      Instrument_93.insert(OriginalNotionalPercentageOutstanding_93.getString());
      FIX::Pool Pool_93("STRING_1029624852");
      noRelatedSym_0_1_0.set(Pool_93);
      Instrument_93.insert(Pool_93.getString());
      FIX::PositionLimit PositionLimit_93(901784367);
      noRelatedSym_0_1_0.set(PositionLimit_93);
      Instrument_93.insert(PositionLimit_93.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_93("STRING_INT");
      noRelatedSym_0_1_0.set(PriceQuoteMethod_93);
      Instrument_93.insert(PriceQuoteMethod_93.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_93("STRING_1242464146");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasure_93);
      Instrument_93.insert(PriceUnitOfMeasure_93.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_93;
      PriceUnitOfMeasureQty_93.setString("4991315");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasureQty_93);
      Instrument_93.insert(PriceUnitOfMeasureQty_93.getString());
      FIX::Product Product_101(4);
      noRelatedSym_0_1_0.set(Product_101);
      Instrument_93.insert(Product_101.getString());
      FIX::ProductComplex ProductComplex_93("STRING_1995597438");
      noRelatedSym_0_1_0.set(ProductComplex_93);
      Instrument_93.insert(ProductComplex_93.getString());
      FIX::PutOrCall PutOrCall_93(1);
      noRelatedSym_0_1_0.set(PutOrCall_93);
      Instrument_93.insert(PutOrCall_93.getString());
      FIX::RedemptionDate RedemptionDate_93("LOCALMKTDATE_1501715381");
      noRelatedSym_0_1_0.set(RedemptionDate_93);
      Instrument_93.insert(RedemptionDate_93.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_93("STRING_412773808");
      noRelatedSym_0_1_0.set(RepoCollateralSecurityType_93);
      Instrument_93.insert(RepoCollateralSecurityType_93.getString());
      FIX::RepurchaseRate RepurchaseRate_93;
      RepurchaseRate_93.setString("95.060000");
      noRelatedSym_0_1_0.set(RepurchaseRate_93);
      Instrument_93.insert(RepurchaseRate_93.getString());
      FIX::RepurchaseTerm RepurchaseTerm_93(294801976);
      noRelatedSym_0_1_0.set(RepurchaseTerm_93);
      Instrument_93.insert(RepurchaseTerm_93.getString());
      FIX::RestructuringType RestructuringType_93("STRING_MM");
      noRelatedSym_0_1_0.set(RestructuringType_93);
      Instrument_93.insert(RestructuringType_93.getString());
      FIX::SecurityDesc SecurityDesc_93("STRING_814686627");
      noRelatedSym_0_1_0.set(SecurityDesc_93);
      Instrument_93.insert(SecurityDesc_93.getString());
      FIX::SecurityExchange SecurityExchange_93("EXCHANGE_1889275995");
      noRelatedSym_0_1_0.set(SecurityExchange_93);
      Instrument_93.insert(SecurityExchange_93.getString());
      FIX::SecurityGroup SecurityGroup_93("STRING_1200938975");
      noRelatedSym_0_1_0.set(SecurityGroup_93);
      Instrument_93.insert(SecurityGroup_93.getString());
      FIX::SecurityID SecurityID_93("STRING_1279455289");
      noRelatedSym_0_1_0.set(SecurityID_93);
      Instrument_93.insert(SecurityID_93.getString());
      FIX::SecurityIDSource SecurityIDSource_93("STRING_F");
      noRelatedSym_0_1_0.set(SecurityIDSource_93);
      Instrument_93.insert(SecurityIDSource_93.getString());
      FIX::SecurityStatus SecurityStatus_94("STRING_1");
      noRelatedSym_0_1_0.set(SecurityStatus_94);
      Instrument_93.insert(SecurityStatus_94.getString());
      FIX::SecuritySubType SecuritySubType_97("STRING_234694888");
      noRelatedSym_0_1_0.set(SecuritySubType_97);
      Instrument_93.insert(SecuritySubType_97.getString());
      FIX::SecurityType SecurityType_101("STRING_CS");
      noRelatedSym_0_1_0.set(SecurityType_101);
      Instrument_93.insert(SecurityType_101.getString());
      FIX::Seniority Seniority_93("STRING_SB");
      noRelatedSym_0_1_0.set(Seniority_93);
      Instrument_93.insert(Seniority_93.getString());
      FIX::SettlMethod SettlMethod_93('P');
      noRelatedSym_0_1_0.set(SettlMethod_93);
      Instrument_93.insert(SettlMethod_93.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_93("STRING_1964323503");
      noRelatedSym_0_1_0.set(SettleOnOpenFlag_93);
      Instrument_93.insert(SettleOnOpenFlag_93.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_93("STRING_1278155045");
      noRelatedSym_0_1_0.set(StateOrProvinceOfIssue_93);
      Instrument_93.insert(StateOrProvinceOfIssue_93.getString());
      FIX::StrikeCurrency StrikeCurrency_93("CAN");
      noRelatedSym_0_1_0.set(StrikeCurrency_93);
      Instrument_93.insert(StrikeCurrency_93.getString());
      FIX::StrikeMultiplier StrikeMultiplier_93;
      StrikeMultiplier_93.setString("4682336");
      noRelatedSym_0_1_0.set(StrikeMultiplier_93);
      Instrument_93.insert(StrikeMultiplier_93.getString());
      FIX::StrikePrice StrikePrice_93;
      StrikePrice_93.setString("16367646");
      noRelatedSym_0_1_0.set(StrikePrice_93);
      Instrument_93.insert(StrikePrice_93.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_93(3);
      noRelatedSym_0_1_0.set(StrikePriceBoundaryMethod_93);
      Instrument_93.insert(StrikePriceBoundaryMethod_93.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_93;
      StrikePriceBoundaryPrecision_93.setString("47.980000");
      noRelatedSym_0_1_0.set(StrikePriceBoundaryPrecision_93);
      Instrument_93.insert(StrikePriceBoundaryPrecision_93.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_93(2);
      noRelatedSym_0_1_0.set(StrikePriceDeterminationMethod_93);
      Instrument_93.insert(StrikePriceDeterminationMethod_93.getString());
      FIX::StrikeValue StrikeValue_93;
      StrikeValue_93.setString("15930752");
      noRelatedSym_0_1_0.set(StrikeValue_93);
      Instrument_93.insert(StrikeValue_93.getString());
      FIX::Symbol Symbol_93("STRING_1923106997");
      noRelatedSym_0_1_0.set(Symbol_93);
      Instrument_93.insert(Symbol_93.getString());
      FIX::SymbolSfx SymbolSfx_93("STRING_CD");
      noRelatedSym_0_1_0.set(SymbolSfx_93);
      Instrument_93.insert(SymbolSfx_93.getString());
      FIX::TimeUnit TimeUnit_93("STRING_S");
      noRelatedSym_0_1_0.set(TimeUnit_93);
      Instrument_93.insert(TimeUnit_93.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_93(3);
      noRelatedSym_0_1_0.set(UnderlyingPriceDeterminationMethod_93);
      Instrument_93.insert(UnderlyingPriceDeterminationMethod_93.getString());
      FIX::UnitOfMeasure UnitOfMeasure_93("STRING_oz_tr");
      noRelatedSym_0_1_0.set(UnitOfMeasure_93);
      Instrument_93.insert(UnitOfMeasure_93.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_93;
      UnitOfMeasureQty_93.setString("2070740");
      noRelatedSym_0_1_0.set(UnitOfMeasureQty_93);
      Instrument_93.insert(UnitOfMeasureQty_93.getString());
      FIX::ValuationMethod ValuationMethod_93("STRING_CDS");
      noRelatedSym_0_1_0.set(ValuationMethod_93);
      Instrument_93.insert(ValuationMethod_93.getString());
      all_values.push_back(Instrument_93);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_187;
        FIX::ComplexEventCondition ComplexEventCondition_187(2);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_187);
        ComplexEvents_NoComplexEvents_187.insert(ComplexEventCondition_187.getString());
        FIX::ComplexEventPrice ComplexEventPrice_187;
        ComplexEventPrice_187.setString("10185832");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_187);
        ComplexEvents_NoComplexEvents_187.insert(ComplexEventPrice_187.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_187(1);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_187);
        ComplexEvents_NoComplexEvents_187.insert(ComplexEventPriceBoundaryMethod_187.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_187;
        ComplexEventPriceBoundaryPrecision_187.setString("1.940000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_187);
        ComplexEvents_NoComplexEvents_187.insert(ComplexEventPriceBoundaryPrecision_187.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_187(1);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_187);
        ComplexEvents_NoComplexEvents_187.insert(ComplexEventPriceTimeType_187.getString());
        FIX::ComplexEventType ComplexEventType_187(9);
        noComplexEvents_0_0_2_0.set(ComplexEventType_187);
        ComplexEvents_NoComplexEvents_187.insert(ComplexEventType_187.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_187;
        ComplexOptPayoutAmount_187.setString("4680118");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_187);
        ComplexEvents_NoComplexEvents_187.insert(ComplexOptPayoutAmount_187.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_187);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_377;
          FIX::ComplexEventEndDate ComplexEventEndDate_377(FIX::UTCTIMESTAMP(20, 39, 20, 1, 12, 2014));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_377);
          ComplexEventDates_NoComplexEventDates_377.insert(ComplexEventEndDate_377.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_377(FIX::UTCTIMESTAMP(14, 5, 57, 6, 5, 2006));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_377);
          ComplexEventDates_NoComplexEventDates_377.insert(ComplexEventStartDate_377.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_377);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_767;
            FIX::ComplexEventEndTime ComplexEventEndTime_767(FIX::UTCTIMEONLY(6, 37, 35));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_767);
            ComplexEventTimes_NoComplexEventTimes_767.insert(ComplexEventEndTime_767.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_767(FIX::UTCTIMEONLY(22, 39, 20));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_767);
            ComplexEventTimes_NoComplexEventTimes_767.insert(ComplexEventStartTime_767.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_767);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_768;
            FIX::ComplexEventEndTime ComplexEventEndTime_768(FIX::UTCTIMEONLY(15, 5, 31));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_768);
            ComplexEventTimes_NoComplexEventTimes_768.insert(ComplexEventEndTime_768.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_768(FIX::UTCTIMEONLY(5, 47, 58));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_768);
            ComplexEventTimes_NoComplexEventTimes_768.insert(ComplexEventStartTime_768.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_768);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_769;
            FIX::ComplexEventEndTime ComplexEventEndTime_769(FIX::UTCTIMEONLY(7, 38, 13));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventEndTime_769);
            ComplexEventTimes_NoComplexEventTimes_769.insert(ComplexEventEndTime_769.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_769(FIX::UTCTIMEONLY(5, 31, 4));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventStartTime_769);
            ComplexEventTimes_NoComplexEventTimes_769.insert(ComplexEventStartTime_769.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_769);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_188;
        FIX::ComplexEventCondition ComplexEventCondition_188(2);
        noComplexEvents_0_0_2_1.set(ComplexEventCondition_188);
        ComplexEvents_NoComplexEvents_188.insert(ComplexEventCondition_188.getString());
        FIX::ComplexEventPrice ComplexEventPrice_188;
        ComplexEventPrice_188.setString("6033095");
        noComplexEvents_0_0_2_1.set(ComplexEventPrice_188);
        ComplexEvents_NoComplexEvents_188.insert(ComplexEventPrice_188.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_188(2);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryMethod_188);
        ComplexEvents_NoComplexEvents_188.insert(ComplexEventPriceBoundaryMethod_188.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_188;
        ComplexEventPriceBoundaryPrecision_188.setString("96.490000");
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryPrecision_188);
        ComplexEvents_NoComplexEvents_188.insert(ComplexEventPriceBoundaryPrecision_188.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_188(1);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceTimeType_188);
        ComplexEvents_NoComplexEvents_188.insert(ComplexEventPriceTimeType_188.getString());
        FIX::ComplexEventType ComplexEventType_188(3);
        noComplexEvents_0_0_2_1.set(ComplexEventType_188);
        ComplexEvents_NoComplexEvents_188.insert(ComplexEventType_188.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_188;
        ComplexOptPayoutAmount_188.setString("9337398");
        noComplexEvents_0_0_2_1.set(ComplexOptPayoutAmount_188);
        ComplexEvents_NoComplexEvents_188.insert(ComplexOptPayoutAmount_188.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_188);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_378;
          FIX::ComplexEventEndDate ComplexEventEndDate_378(FIX::UTCTIMESTAMP(1, 13, 47, 11, 9, 2013));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventEndDate_378);
          ComplexEventDates_NoComplexEventDates_378.insert(ComplexEventEndDate_378.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_378(FIX::UTCTIMESTAMP(11, 4, 28, 18, 10, 2001));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventStartDate_378);
          ComplexEventDates_NoComplexEventDates_378.insert(ComplexEventStartDate_378.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_378);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_770;
            FIX::ComplexEventEndTime ComplexEventEndTime_770(FIX::UTCTIMEONLY(14, 14, 27));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventEndTime_770);
            ComplexEventTimes_NoComplexEventTimes_770.insert(ComplexEventEndTime_770.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_770(FIX::UTCTIMEONLY(19, 51, 38));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventStartTime_770);
            ComplexEventTimes_NoComplexEventTimes_770.insert(ComplexEventStartTime_770.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_770);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_771;
            FIX::ComplexEventEndTime ComplexEventEndTime_771(FIX::UTCTIMEONLY(16, 31, 16));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventEndTime_771);
            ComplexEventTimes_NoComplexEventTimes_771.insert(ComplexEventEndTime_771.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_771(FIX::UTCTIMEONLY(23, 31, 39));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventStartTime_771);
            ComplexEventTimes_NoComplexEventTimes_771.insert(ComplexEventStartTime_771.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_771);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_772;
            FIX::ComplexEventEndTime ComplexEventEndTime_772(FIX::UTCTIMEONLY(8, 44, 56));
            noComplexEventTimes_0_0_1_0_4_2.set(ComplexEventEndTime_772);
            ComplexEventTimes_NoComplexEventTimes_772.insert(ComplexEventEndTime_772.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_772(FIX::UTCTIMEONLY(17, 55, 13));
            noComplexEventTimes_0_0_1_0_4_2.set(ComplexEventStartTime_772);
            ComplexEventTimes_NoComplexEventTimes_772.insert(ComplexEventStartTime_772.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_772);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_2);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_379;
          FIX::ComplexEventEndDate ComplexEventEndDate_379(FIX::UTCTIMESTAMP(23, 33, 42, 16, 6, 2013));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventEndDate_379);
          ComplexEventDates_NoComplexEventDates_379.insert(ComplexEventEndDate_379.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_379(FIX::UTCTIMESTAMP(23, 33, 45, 26, 10, 2012));
          noComplexEventDates_0_0_1_3_1.set(ComplexEventStartDate_379);
          ComplexEventDates_NoComplexEventDates_379.insert(ComplexEventStartDate_379.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_379);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_773;
            FIX::ComplexEventEndTime ComplexEventEndTime_773(FIX::UTCTIMEONLY(8, 48, 59));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventEndTime_773);
            ComplexEventTimes_NoComplexEventTimes_773.insert(ComplexEventEndTime_773.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_773(FIX::UTCTIMEONLY(11, 23, 28));
            noComplexEventTimes_0_0_1_1_4_0.set(ComplexEventStartTime_773);
            ComplexEventTimes_NoComplexEventTimes_773.insert(ComplexEventStartTime_773.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_773);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_1.addGroup(noComplexEventTimes_0_0_1_1_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_380;
          FIX::ComplexEventEndDate ComplexEventEndDate_380(FIX::UTCTIMESTAMP(7, 13, 16, 23, 11, 2009));
          noComplexEventDates_0_0_1_3_2.set(ComplexEventEndDate_380);
          ComplexEventDates_NoComplexEventDates_380.insert(ComplexEventEndDate_380.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_380(FIX::UTCTIMESTAMP(18, 54, 50, 13, 7, 2007));
          noComplexEventDates_0_0_1_3_2.set(ComplexEventStartDate_380);
          ComplexEventDates_NoComplexEventDates_380.insert(ComplexEventStartDate_380.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_380);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_774;
            FIX::ComplexEventEndTime ComplexEventEndTime_774(FIX::UTCTIMEONLY(6, 49, 9));
            noComplexEventTimes_0_0_1_2_4_0.set(ComplexEventEndTime_774);
            ComplexEventTimes_NoComplexEventTimes_774.insert(ComplexEventEndTime_774.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_774(FIX::UTCTIMEONLY(10, 38, 45));
            noComplexEventTimes_0_0_1_2_4_0.set(ComplexEventStartTime_774);
            ComplexEventTimes_NoComplexEventTimes_774.insert(ComplexEventStartTime_774.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_774);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_2.addGroup(noComplexEventTimes_0_0_1_2_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_189;
        FIX::ComplexEventCondition ComplexEventCondition_189(1);
        noComplexEvents_0_0_2_2.set(ComplexEventCondition_189);
        ComplexEvents_NoComplexEvents_189.insert(ComplexEventCondition_189.getString());
        FIX::ComplexEventPrice ComplexEventPrice_189;
        ComplexEventPrice_189.setString("2350380");
        noComplexEvents_0_0_2_2.set(ComplexEventPrice_189);
        ComplexEvents_NoComplexEvents_189.insert(ComplexEventPrice_189.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_189(4);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryMethod_189);
        ComplexEvents_NoComplexEvents_189.insert(ComplexEventPriceBoundaryMethod_189.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_189;
        ComplexEventPriceBoundaryPrecision_189.setString("24.890000");
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryPrecision_189);
        ComplexEvents_NoComplexEvents_189.insert(ComplexEventPriceBoundaryPrecision_189.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_189(3);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceTimeType_189);
        ComplexEvents_NoComplexEvents_189.insert(ComplexEventPriceTimeType_189.getString());
        FIX::ComplexEventType ComplexEventType_189(6);
        noComplexEvents_0_0_2_2.set(ComplexEventType_189);
        ComplexEvents_NoComplexEvents_189.insert(ComplexEventType_189.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_189;
        ComplexOptPayoutAmount_189.setString("16619166");
        noComplexEvents_0_0_2_2.set(ComplexOptPayoutAmount_189);
        ComplexEvents_NoComplexEvents_189.insert(ComplexOptPayoutAmount_189.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_189);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_381;
          FIX::ComplexEventEndDate ComplexEventEndDate_381(FIX::UTCTIMESTAMP(8, 5, 12, 19, 8, 2013));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventEndDate_381);
          ComplexEventDates_NoComplexEventDates_381.insert(ComplexEventEndDate_381.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_381(FIX::UTCTIMESTAMP(14, 1, 30, 23, 8, 2005));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventStartDate_381);
          ComplexEventDates_NoComplexEventDates_381.insert(ComplexEventStartDate_381.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_381);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_775;
            FIX::ComplexEventEndTime ComplexEventEndTime_775(FIX::UTCTIMEONLY(23, 4, 40));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventEndTime_775);
            ComplexEventTimes_NoComplexEventTimes_775.insert(ComplexEventEndTime_775.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_775(FIX::UTCTIMEONLY(3, 18, 41));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventStartTime_775);
            ComplexEventTimes_NoComplexEventTimes_775.insert(ComplexEventStartTime_775.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_775);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_776;
            FIX::ComplexEventEndTime ComplexEventEndTime_776(FIX::UTCTIMEONLY(5, 6, 50));
            noComplexEventTimes_0_0_2_0_4_1.set(ComplexEventEndTime_776);
            ComplexEventTimes_NoComplexEventTimes_776.insert(ComplexEventEndTime_776.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_776(FIX::UTCTIMEONLY(2, 15, 9));
            noComplexEventTimes_0_0_2_0_4_1.set(ComplexEventStartTime_776);
            ComplexEventTimes_NoComplexEventTimes_776.insert(ComplexEventStartTime_776.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_776);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_777;
            FIX::ComplexEventEndTime ComplexEventEndTime_777(FIX::UTCTIMEONLY(23, 7, 50));
            noComplexEventTimes_0_0_2_0_4_2.set(ComplexEventEndTime_777);
            ComplexEventTimes_NoComplexEventTimes_777.insert(ComplexEventEndTime_777.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_777(FIX::UTCTIMEONLY(14, 57, 22));
            noComplexEventTimes_0_0_2_0_4_2.set(ComplexEventStartTime_777);
            ComplexEventTimes_NoComplexEventTimes_777.insert(ComplexEventStartTime_777.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_777);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_2);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_382;
          FIX::ComplexEventEndDate ComplexEventEndDate_382(FIX::UTCTIMESTAMP(22, 52, 23, 17, 2, 2002));
          noComplexEventDates_0_0_2_3_1.set(ComplexEventEndDate_382);
          ComplexEventDates_NoComplexEventDates_382.insert(ComplexEventEndDate_382.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_382(FIX::UTCTIMESTAMP(13, 43, 8, 21, 3, 2001));
          noComplexEventDates_0_0_2_3_1.set(ComplexEventStartDate_382);
          ComplexEventDates_NoComplexEventDates_382.insert(ComplexEventStartDate_382.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_382);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_778;
            FIX::ComplexEventEndTime ComplexEventEndTime_778(FIX::UTCTIMEONLY(12, 48, 45));
            noComplexEventTimes_0_0_2_1_4_0.set(ComplexEventEndTime_778);
            ComplexEventTimes_NoComplexEventTimes_778.insert(ComplexEventEndTime_778.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_778(FIX::UTCTIMEONLY(18, 52, 30));
            noComplexEventTimes_0_0_2_1_4_0.set(ComplexEventStartTime_778);
            ComplexEventTimes_NoComplexEventTimes_778.insert(ComplexEventStartTime_778.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_778);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_2_3_1.addGroup(noComplexEventTimes_0_0_2_1_4_0);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_185;
        FIX::EventDate EventDate_185("LOCALMKTDATE_4641379");
        noEvents_0_0_2_0.set(EventDate_185);
        EvntGrp_NoEvents_185.insert(EventDate_185.getString());
        FIX::EventPx EventPx_185;
        EventPx_185.setString("12810689");
        noEvents_0_0_2_0.set(EventPx_185);
        EvntGrp_NoEvents_185.insert(EventPx_185.getString());
        FIX::EventText EventText_185("STRING_276337430");
        noEvents_0_0_2_0.set(EventText_185);
        EvntGrp_NoEvents_185.insert(EventText_185.getString());
        FIX::EventTime EventTime_185(FIX::UTCTIMESTAMP(0, 47, 32, 0, 2, 2017));
        noEvents_0_0_2_0.set(EventTime_185);
        EvntGrp_NoEvents_185.insert(EventTime_185.getString());
        FIX::EventType EventType_185(9);
        noEvents_0_0_2_0.set(EventType_185);
        EvntGrp_NoEvents_185.insert(EventType_185.getString());
        all_values.push_back(EvntGrp_NoEvents_185);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_186;
        FIX::EventDate EventDate_186("LOCALMKTDATE_409833874");
        noEvents_0_0_2_1.set(EventDate_186);
        EvntGrp_NoEvents_186.insert(EventDate_186.getString());
        FIX::EventPx EventPx_186;
        EventPx_186.setString("13180662");
        noEvents_0_0_2_1.set(EventPx_186);
        EvntGrp_NoEvents_186.insert(EventPx_186.getString());
        FIX::EventText EventText_186("STRING_1553198186");
        noEvents_0_0_2_1.set(EventText_186);
        EvntGrp_NoEvents_186.insert(EventText_186.getString());
        FIX::EventTime EventTime_186(FIX::UTCTIMESTAMP(11, 1, 10, 0, 4, 2011));
        noEvents_0_0_2_1.set(EventTime_186);
        EvntGrp_NoEvents_186.insert(EventTime_186.getString());
        FIX::EventType EventType_186(15);
        noEvents_0_0_2_1.set(EventType_186);
        EvntGrp_NoEvents_186.insert(EventType_186.getString());
        all_values.push_back(EvntGrp_NoEvents_186);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_187;
        FIX::EventDate EventDate_187("LOCALMKTDATE_1688881450");
        noEvents_0_0_2_2.set(EventDate_187);
        EvntGrp_NoEvents_187.insert(EventDate_187.getString());
        FIX::EventPx EventPx_187;
        EventPx_187.setString("15996003");
        noEvents_0_0_2_2.set(EventPx_187);
        EvntGrp_NoEvents_187.insert(EventPx_187.getString());
        FIX::EventText EventText_187("STRING_1020657794");
        noEvents_0_0_2_2.set(EventText_187);
        EvntGrp_NoEvents_187.insert(EventText_187.getString());
        FIX::EventTime EventTime_187(FIX::UTCTIMESTAMP(22, 36, 40, 5, 9, 2000));
        noEvents_0_0_2_2.set(EventTime_187);
        EvntGrp_NoEvents_187.insert(EventTime_187.getString());
        FIX::EventType EventType_187(19);
        noEvents_0_0_2_2.set(EventType_187);
        EvntGrp_NoEvents_187.insert(EventType_187.getString());
        all_values.push_back(EvntGrp_NoEvents_187);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_194;
        FIX::InstrumentPartyID InstrumentPartyID_194("STRING_2127966970");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_194);
        InstrumentParties_NoInstrumentParties_194.insert(InstrumentPartyID_194.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_194('2');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_194);
        InstrumentParties_NoInstrumentParties_194.insert(InstrumentPartyIDSource_194.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_194(1389380893);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_194);
        InstrumentParties_NoInstrumentParties_194.insert(InstrumentPartyRole_194.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_194);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378;
          FIX::InstrumentPartySubID InstrumentPartySubID_378("STRING_834895075");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_378);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378.insert(InstrumentPartySubID_378.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_378(2000049050);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_378);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378.insert(InstrumentPartySubIDType_378.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_378);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379;
          FIX::InstrumentPartySubID InstrumentPartySubID_379("STRING_2063729991");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_379);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379.insert(InstrumentPartySubID_379.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_379(1929795943);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_379);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379.insert(InstrumentPartySubIDType_379.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_195;
        FIX::InstrumentPartyID InstrumentPartyID_195("STRING_262399276");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_195);
        InstrumentParties_NoInstrumentParties_195.insert(InstrumentPartyID_195.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_195('1');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_195);
        InstrumentParties_NoInstrumentParties_195.insert(InstrumentPartyIDSource_195.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_195(1335510481);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_195);
        InstrumentParties_NoInstrumentParties_195.insert(InstrumentPartyRole_195.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_195);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380;
          FIX::InstrumentPartySubID InstrumentPartySubID_380("STRING_277232969");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_380);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380.insert(InstrumentPartySubID_380.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_380(1684874163);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_380);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380.insert(InstrumentPartySubIDType_380.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_172;
        FIX::SecurityAltID SecurityAltID_172("STRING_2000228790");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_172);
        SecAltIDGrp_NoSecurityAltID_172.insert(SecurityAltID_172.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_172("STRING_763360030");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_172);
        SecAltIDGrp_NoSecurityAltID_172.insert(SecurityAltIDSource_172.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_172);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_186;
      FIX::SecurityXML SecurityXML_187("XMLDATA_168427362");
      noRelatedSym_0_1_0.set(SecurityXML_187);
      FIX::SecurityXMLLen SecurityXMLLen_93(1144455056);
      noRelatedSym_0_1_0.set(SecurityXMLLen_93);
      FIX::SecurityXMLSchema SecurityXMLSchema_93("STRING_304757833");
      noRelatedSym_0_1_0.set(SecurityXMLSchema_93);
      SecurityXML_186.insert(SecurityXMLSchema_93.getString());
      all_values.push_back(SecurityXML_186);
      all_compo_names.insert("SecurityXML");

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
      multiset<string> Parties_NoPartyIDs_146;
      FIX::PartyID PartyID_146("STRING_17629203");
      noPartyIDs_1_1_0.set(PartyID_146);
      Parties_NoPartyIDs_146.insert(PartyID_146.getString());
      FIX::PartyIDSource PartyIDSource_146('D');
      noPartyIDs_1_1_0.set(PartyIDSource_146);
      Parties_NoPartyIDs_146.insert(PartyIDSource_146.getString());
      FIX::PartyRole PartyRole_146(15);
      noPartyIDs_1_1_0.set(PartyRole_146);
      Parties_NoPartyIDs_146.insert(PartyRole_146.getString());
      all_values.push_back(Parties_NoPartyIDs_146);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_314;
        FIX::PartySubID PartySubID_314("STRING_388429293");
        noPartySubIDs_1_0_2_0.set(PartySubID_314);
        PtysSubGrp_NoPartySubIDs_314.insert(PartySubID_314.getString());
        FIX::PartySubIDType PartySubIDType_314(27);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_314);
        PtysSubGrp_NoPartySubIDs_314.insert(PartySubIDType_314.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_314);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noAsgnReqs_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_147;
      FIX::PartyID PartyID_147("STRING_239243656");
      noPartyIDs_1_1_1.set(PartyID_147);
      Parties_NoPartyIDs_147.insert(PartyID_147.getString());
      FIX::PartyIDSource PartyIDSource_147('9');
      noPartyIDs_1_1_1.set(PartyIDSource_147);
      Parties_NoPartyIDs_147.insert(PartyIDSource_147.getString());
      FIX::PartyRole PartyRole_147(44);
      noPartyIDs_1_1_1.set(PartyRole_147);
      Parties_NoPartyIDs_147.insert(PartyRole_147.getString());
      all_values.push_back(Parties_NoPartyIDs_147);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_315;
        FIX::PartySubID PartySubID_315("STRING_1502230775");
        noPartySubIDs_1_1_2_0.set(PartySubID_315);
        PtysSubGrp_NoPartySubIDs_315.insert(PartySubID_315.getString());
        FIX::PartySubIDType PartySubIDType_315(19);
        noPartySubIDs_1_1_2_0.set(PartySubIDType_315);
        PtysSubGrp_NoPartySubIDs_315.insert(PartySubIDType_315.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_315);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      noAsgnReqs_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_1_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_1;
      FIX::EncodedText EncodedText_96("DATA_479016062");
      noRelatedSym_1_1_0.set(EncodedText_96);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(EncodedText_96.getString());
      FIX::EncodedTextLen EncodedTextLen_96(69349739);
      noRelatedSym_1_1_0.set(EncodedTextLen_96);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(EncodedTextLen_96.getString());
      FIX::MDStreamID MDStreamID_5("STRING_1443119198");
      noRelatedSym_1_1_0.set(MDStreamID_5);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(MDStreamID_5.getString());
      FIX::SettlType SettlType_32("STRING_9");
      noRelatedSym_1_1_0.set(SettlType_32);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(SettlType_32.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_1(2);
      noRelatedSym_1_1_0.set(StreamAsgnRejReason_1);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(StreamAsgnRejReason_1.getString());
      FIX::StreamAsgnType StreamAsgnType_1(2);
      noRelatedSym_1_1_0.set(StreamAsgnType_1);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(StreamAsgnType_1.getString());
      FIX::Text Text_96("STRING_1629575003");
      noRelatedSym_1_1_0.set(Text_96);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(Text_96.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_1);
      all_compo_names.insert("StrmAsgnRptInstrmtGrp.NoRelatedSym");

      // Instrument
      multiset<string> Instrument_94;
      FIX::AttachmentPoint AttachmentPoint_94;
      AttachmentPoint_94.setString("25.160000");
      noRelatedSym_1_1_0.set(AttachmentPoint_94);
      Instrument_94.insert(AttachmentPoint_94.getString());
      FIX::CFICode CFICode_99("STRING_317854025");
      noRelatedSym_1_1_0.set(CFICode_99);
      Instrument_94.insert(CFICode_99.getString());
      FIX::CPProgram CPProgram_94(99);
      noRelatedSym_1_1_0.set(CPProgram_94);
      Instrument_94.insert(CPProgram_94.getString());
      FIX::CPRegType CPRegType_94("STRING_724563031");
      noRelatedSym_1_1_0.set(CPRegType_94);
      Instrument_94.insert(CPRegType_94.getString());
      FIX::CapPrice CapPrice_94;
      CapPrice_94.setString("6374535");
      noRelatedSym_1_1_0.set(CapPrice_94);
      Instrument_94.insert(CapPrice_94.getString());
      FIX::ContractMultiplier ContractMultiplier_94;
      ContractMultiplier_94.setString("17595531");
      noRelatedSym_1_1_0.set(ContractMultiplier_94);
      Instrument_94.insert(ContractMultiplier_94.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_94(2);
      noRelatedSym_1_1_0.set(ContractMultiplierUnit_94);
      Instrument_94.insert(ContractMultiplierUnit_94.getString());
      FIX::ContractSettlMonth ContractSettlMonth_94("MONTHYEAR_805880949");
      noRelatedSym_1_1_0.set(ContractSettlMonth_94);
      Instrument_94.insert(ContractSettlMonth_94.getString());
      FIX::CountryOfIssue CountryOfIssue_94("COUNTRY_756524523");
      noRelatedSym_1_1_0.set(CountryOfIssue_94);
      Instrument_94.insert(CountryOfIssue_94.getString());
      FIX::CouponPaymentDate CouponPaymentDate_94("LOCALMKTDATE_1792680894");
      noRelatedSym_1_1_0.set(CouponPaymentDate_94);
      Instrument_94.insert(CouponPaymentDate_94.getString());
      FIX::CouponRate CouponRate_94;
      CouponRate_94.setString("49.970000");
      noRelatedSym_1_1_0.set(CouponRate_94);
      Instrument_94.insert(CouponRate_94.getString());
      FIX::CreditRating CreditRating_94("STRING_774153726");
      noRelatedSym_1_1_0.set(CreditRating_94);
      Instrument_94.insert(CreditRating_94.getString());
      FIX::DatedDate DatedDate_94("LOCALMKTDATE_1052433407");
      noRelatedSym_1_1_0.set(DatedDate_94);
      Instrument_94.insert(DatedDate_94.getString());
      FIX::DetachmentPoint DetachmentPoint_94;
      DetachmentPoint_94.setString("82.510000");
      noRelatedSym_1_1_0.set(DetachmentPoint_94);
      Instrument_94.insert(DetachmentPoint_94.getString());
      FIX::EncodedIssuer EncodedIssuer_94("DATA_1327805566");
      noRelatedSym_1_1_0.set(EncodedIssuer_94);
      Instrument_94.insert(EncodedIssuer_94.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_94(1440862701);
      noRelatedSym_1_1_0.set(EncodedIssuerLen_94);
      Instrument_94.insert(EncodedIssuerLen_94.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_94("DATA_2096478743");
      noRelatedSym_1_1_0.set(EncodedSecurityDesc_94);
      Instrument_94.insert(EncodedSecurityDesc_94.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_94(1567049222);
      noRelatedSym_1_1_0.set(EncodedSecurityDescLen_94);
      Instrument_94.insert(EncodedSecurityDescLen_94.getString());
      FIX::ExerciseStyle ExerciseStyle_94(1);
      noRelatedSym_1_1_0.set(ExerciseStyle_94);
      Instrument_94.insert(ExerciseStyle_94.getString());
      FIX::Factor Factor_94;
      Factor_94.setString("11257544");
      noRelatedSym_1_1_0.set(Factor_94);
      Instrument_94.insert(Factor_94.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_94(true);
      noRelatedSym_1_1_0.set(FlexProductEligibilityIndicator_94);
      Instrument_94.insert(FlexProductEligibilityIndicator_94.getString());
      FIX::FlexibleIndicator FlexibleIndicator_94(true);
      noRelatedSym_1_1_0.set(FlexibleIndicator_94);
      Instrument_94.insert(FlexibleIndicator_94.getString());
      FIX::FloorPrice FloorPrice_94;
      FloorPrice_94.setString("3602091");
      noRelatedSym_1_1_0.set(FloorPrice_94);
      Instrument_94.insert(FloorPrice_94.getString());
      FIX::FlowScheduleType FlowScheduleType_94(2);
      noRelatedSym_1_1_0.set(FlowScheduleType_94);
      Instrument_94.insert(FlowScheduleType_94.getString());
      FIX::InstrRegistry InstrRegistry_94("STRING_648889696");
      noRelatedSym_1_1_0.set(InstrRegistry_94);
      Instrument_94.insert(InstrRegistry_94.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_94('4');
      noRelatedSym_1_1_0.set(InstrmtAssignmentMethod_94);
      Instrument_94.insert(InstrmtAssignmentMethod_94.getString());
      FIX::InterestAccrualDate InterestAccrualDate_94("LOCALMKTDATE_506927823");
      noRelatedSym_1_1_0.set(InterestAccrualDate_94);
      Instrument_94.insert(InterestAccrualDate_94.getString());
      FIX::IssueDate IssueDate_94("LOCALMKTDATE_1044152101");
      noRelatedSym_1_1_0.set(IssueDate_94);
      Instrument_94.insert(IssueDate_94.getString());
      FIX::Issuer Issuer_94("STRING_281220935");
      noRelatedSym_1_1_0.set(Issuer_94);
      Instrument_94.insert(Issuer_94.getString());
      FIX::ListMethod ListMethod_94(0);
      noRelatedSym_1_1_0.set(ListMethod_94);
      Instrument_94.insert(ListMethod_94.getString());
      FIX::LocaleOfIssue LocaleOfIssue_94("STRING_526243457");
      noRelatedSym_1_1_0.set(LocaleOfIssue_94);
      Instrument_94.insert(LocaleOfIssue_94.getString());
      FIX::MaturityDate MaturityDate_94("LOCALMKTDATE_1468393451");
      noRelatedSym_1_1_0.set(MaturityDate_94);
      Instrument_94.insert(MaturityDate_94.getString());
      FIX::MaturityMonthYear MaturityMonthYear_94("MONTHYEAR_382816675");
      noRelatedSym_1_1_0.set(MaturityMonthYear_94);
      Instrument_94.insert(MaturityMonthYear_94.getString());
      FIX::MaturityTime MaturityTime_94("TZTIMEONLY_285567782");
      noRelatedSym_1_1_0.set(MaturityTime_94);
      Instrument_94.insert(MaturityTime_94.getString());
      FIX::MinPriceIncrement MinPriceIncrement_94;
      MinPriceIncrement_94.setString("454728");
      noRelatedSym_1_1_0.set(MinPriceIncrement_94);
      Instrument_94.insert(MinPriceIncrement_94.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_94;
      MinPriceIncrementAmount_94.setString("10202702");
      noRelatedSym_1_1_0.set(MinPriceIncrementAmount_94);
      Instrument_94.insert(MinPriceIncrementAmount_94.getString());
      FIX::NTPositionLimit NTPositionLimit_94(2045120897);
      noRelatedSym_1_1_0.set(NTPositionLimit_94);
      Instrument_94.insert(NTPositionLimit_94.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_94;
      NotionalPercentageOutstanding_94.setString("58.960000");
      noRelatedSym_1_1_0.set(NotionalPercentageOutstanding_94);
      Instrument_94.insert(NotionalPercentageOutstanding_94.getString());
      FIX::OptAttribute OptAttribute_94('1');
      noRelatedSym_1_1_0.set(OptAttribute_94);
      Instrument_94.insert(OptAttribute_94.getString());
      FIX::OptPayoutAmount OptPayoutAmount_94;
      OptPayoutAmount_94.setString("6541617");
      noRelatedSym_1_1_0.set(OptPayoutAmount_94);
      Instrument_94.insert(OptPayoutAmount_94.getString());
      FIX::OptPayoutType OptPayoutType_94(3);
      noRelatedSym_1_1_0.set(OptPayoutType_94);
      Instrument_94.insert(OptPayoutType_94.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_94;
      OriginalNotionalPercentageOutstanding_94.setString("25.600000");
      noRelatedSym_1_1_0.set(OriginalNotionalPercentageOutstanding_94);
      Instrument_94.insert(OriginalNotionalPercentageOutstanding_94.getString());
      FIX::Pool Pool_94("STRING_1428315499");
      noRelatedSym_1_1_0.set(Pool_94);
      Instrument_94.insert(Pool_94.getString());
      FIX::PositionLimit PositionLimit_94(83542902);
      noRelatedSym_1_1_0.set(PositionLimit_94);
      Instrument_94.insert(PositionLimit_94.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_94("STRING_PCTPAR");
      noRelatedSym_1_1_0.set(PriceQuoteMethod_94);
      Instrument_94.insert(PriceQuoteMethod_94.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_94("STRING_608637417");
      noRelatedSym_1_1_0.set(PriceUnitOfMeasure_94);
      Instrument_94.insert(PriceUnitOfMeasure_94.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_94;
      PriceUnitOfMeasureQty_94.setString("15244056");
      noRelatedSym_1_1_0.set(PriceUnitOfMeasureQty_94);
      Instrument_94.insert(PriceUnitOfMeasureQty_94.getString());
      FIX::Product Product_102(4);
      noRelatedSym_1_1_0.set(Product_102);
      Instrument_94.insert(Product_102.getString());
      FIX::ProductComplex ProductComplex_94("STRING_28202991");
      noRelatedSym_1_1_0.set(ProductComplex_94);
      Instrument_94.insert(ProductComplex_94.getString());
      FIX::PutOrCall PutOrCall_94(1);
      noRelatedSym_1_1_0.set(PutOrCall_94);
      Instrument_94.insert(PutOrCall_94.getString());
      FIX::RedemptionDate RedemptionDate_94("LOCALMKTDATE_1322750403");
      noRelatedSym_1_1_0.set(RedemptionDate_94);
      Instrument_94.insert(RedemptionDate_94.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_94("STRING_1796425115");
      noRelatedSym_1_1_0.set(RepoCollateralSecurityType_94);
      Instrument_94.insert(RepoCollateralSecurityType_94.getString());
      FIX::RepurchaseRate RepurchaseRate_94;
      RepurchaseRate_94.setString("20.950000");
      noRelatedSym_1_1_0.set(RepurchaseRate_94);
      Instrument_94.insert(RepurchaseRate_94.getString());
      FIX::RepurchaseTerm RepurchaseTerm_94(1682959565);
      noRelatedSym_1_1_0.set(RepurchaseTerm_94);
      Instrument_94.insert(RepurchaseTerm_94.getString());
      FIX::RestructuringType RestructuringType_94("STRING_FR");
      noRelatedSym_1_1_0.set(RestructuringType_94);
      Instrument_94.insert(RestructuringType_94.getString());
      FIX::SecurityDesc SecurityDesc_94("STRING_1010811791");
      noRelatedSym_1_1_0.set(SecurityDesc_94);
      Instrument_94.insert(SecurityDesc_94.getString());
      FIX::SecurityExchange SecurityExchange_94("EXCHANGE_2112518466");
      noRelatedSym_1_1_0.set(SecurityExchange_94);
      Instrument_94.insert(SecurityExchange_94.getString());
      FIX::SecurityGroup SecurityGroup_94("STRING_1367161563");
      noRelatedSym_1_1_0.set(SecurityGroup_94);
      Instrument_94.insert(SecurityGroup_94.getString());
      FIX::SecurityID SecurityID_94("STRING_2054963893");
      noRelatedSym_1_1_0.set(SecurityID_94);
      Instrument_94.insert(SecurityID_94.getString());
      FIX::SecurityIDSource SecurityIDSource_94("STRING_8");
      noRelatedSym_1_1_0.set(SecurityIDSource_94);
      Instrument_94.insert(SecurityIDSource_94.getString());
      FIX::SecurityStatus SecurityStatus_95("STRING_2");
      noRelatedSym_1_1_0.set(SecurityStatus_95);
      Instrument_94.insert(SecurityStatus_95.getString());
      FIX::SecuritySubType SecuritySubType_98("STRING_433723702");
      noRelatedSym_1_1_0.set(SecuritySubType_98);
      Instrument_94.insert(SecuritySubType_98.getString());
      FIX::SecurityType SecurityType_102("STRING_MATURED");
      noRelatedSym_1_1_0.set(SecurityType_102);
      Instrument_94.insert(SecurityType_102.getString());
      FIX::Seniority Seniority_94("STRING_SD");
      noRelatedSym_1_1_0.set(Seniority_94);
      Instrument_94.insert(Seniority_94.getString());
      FIX::SettlMethod SettlMethod_94('C');
      noRelatedSym_1_1_0.set(SettlMethod_94);
      Instrument_94.insert(SettlMethod_94.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_94("STRING_1760122039");
      noRelatedSym_1_1_0.set(SettleOnOpenFlag_94);
      Instrument_94.insert(SettleOnOpenFlag_94.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_94("STRING_687727502");
      noRelatedSym_1_1_0.set(StateOrProvinceOfIssue_94);
      Instrument_94.insert(StateOrProvinceOfIssue_94.getString());
      FIX::StrikeCurrency StrikeCurrency_94("CHF");
      noRelatedSym_1_1_0.set(StrikeCurrency_94);
      Instrument_94.insert(StrikeCurrency_94.getString());
      FIX::StrikeMultiplier StrikeMultiplier_94;
      StrikeMultiplier_94.setString("3663950");
      noRelatedSym_1_1_0.set(StrikeMultiplier_94);
      Instrument_94.insert(StrikeMultiplier_94.getString());
      FIX::StrikePrice StrikePrice_94;
      StrikePrice_94.setString("12710905");
      noRelatedSym_1_1_0.set(StrikePrice_94);
      Instrument_94.insert(StrikePrice_94.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_94(3);
      noRelatedSym_1_1_0.set(StrikePriceBoundaryMethod_94);
      Instrument_94.insert(StrikePriceBoundaryMethod_94.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_94;
      StrikePriceBoundaryPrecision_94.setString("76.250000");
      noRelatedSym_1_1_0.set(StrikePriceBoundaryPrecision_94);
      Instrument_94.insert(StrikePriceBoundaryPrecision_94.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_94(1);
      noRelatedSym_1_1_0.set(StrikePriceDeterminationMethod_94);
      Instrument_94.insert(StrikePriceDeterminationMethod_94.getString());
      FIX::StrikeValue StrikeValue_94;
      StrikeValue_94.setString("2606866");
      noRelatedSym_1_1_0.set(StrikeValue_94);
      Instrument_94.insert(StrikeValue_94.getString());
      FIX::Symbol Symbol_94("STRING_719488437");
      noRelatedSym_1_1_0.set(Symbol_94);
      Instrument_94.insert(Symbol_94.getString());
      FIX::SymbolSfx SymbolSfx_94("STRING_WI");
      noRelatedSym_1_1_0.set(SymbolSfx_94);
      Instrument_94.insert(SymbolSfx_94.getString());
      FIX::TimeUnit TimeUnit_94("STRING_Yr");
      noRelatedSym_1_1_0.set(TimeUnit_94);
      Instrument_94.insert(TimeUnit_94.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_94(4);
      noRelatedSym_1_1_0.set(UnderlyingPriceDeterminationMethod_94);
      Instrument_94.insert(UnderlyingPriceDeterminationMethod_94.getString());
      FIX::UnitOfMeasure UnitOfMeasure_94("STRING_Gal");
      noRelatedSym_1_1_0.set(UnitOfMeasure_94);
      Instrument_94.insert(UnitOfMeasure_94.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_94;
      UnitOfMeasureQty_94.setString("19771407");
      noRelatedSym_1_1_0.set(UnitOfMeasureQty_94);
      Instrument_94.insert(UnitOfMeasureQty_94.getString());
      FIX::ValuationMethod ValuationMethod_94("STRING_CDSD");
      noRelatedSym_1_1_0.set(ValuationMethod_94);
      Instrument_94.insert(ValuationMethod_94.getString());
      all_values.push_back(Instrument_94);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_190;
        FIX::ComplexEventCondition ComplexEventCondition_190(1);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_190);
        ComplexEvents_NoComplexEvents_190.insert(ComplexEventCondition_190.getString());
        FIX::ComplexEventPrice ComplexEventPrice_190;
        ComplexEventPrice_190.setString("17747106");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_190);
        ComplexEvents_NoComplexEvents_190.insert(ComplexEventPrice_190.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_190(3);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_190);
        ComplexEvents_NoComplexEvents_190.insert(ComplexEventPriceBoundaryMethod_190.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_190;
        ComplexEventPriceBoundaryPrecision_190.setString("9.870000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_190);
        ComplexEvents_NoComplexEvents_190.insert(ComplexEventPriceBoundaryPrecision_190.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_190(3);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_190);
        ComplexEvents_NoComplexEvents_190.insert(ComplexEventPriceTimeType_190.getString());
        FIX::ComplexEventType ComplexEventType_190(8);
        noComplexEvents_1_0_2_0.set(ComplexEventType_190);
        ComplexEvents_NoComplexEvents_190.insert(ComplexEventType_190.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_190;
        ComplexOptPayoutAmount_190.setString("11098712");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_190);
        ComplexEvents_NoComplexEvents_190.insert(ComplexOptPayoutAmount_190.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_190);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_383;
          FIX::ComplexEventEndDate ComplexEventEndDate_383(FIX::UTCTIMESTAMP(14, 12, 40, 14, 1, 2005));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_383);
          ComplexEventDates_NoComplexEventDates_383.insert(ComplexEventEndDate_383.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_383(FIX::UTCTIMESTAMP(7, 0, 49, 13, 7, 2013));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_383);
          ComplexEventDates_NoComplexEventDates_383.insert(ComplexEventStartDate_383.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_383);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_779;
            FIX::ComplexEventEndTime ComplexEventEndTime_779(FIX::UTCTIMEONLY(19, 8, 58));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_779);
            ComplexEventTimes_NoComplexEventTimes_779.insert(ComplexEventEndTime_779.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_779(FIX::UTCTIMEONLY(13, 57, 19));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_779);
            ComplexEventTimes_NoComplexEventTimes_779.insert(ComplexEventStartTime_779.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_779);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_384;
          FIX::ComplexEventEndDate ComplexEventEndDate_384(FIX::UTCTIMESTAMP(5, 23, 12, 11, 7, 2015));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventEndDate_384);
          ComplexEventDates_NoComplexEventDates_384.insert(ComplexEventEndDate_384.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_384(FIX::UTCTIMESTAMP(22, 11, 27, 23, 7, 2007));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventStartDate_384);
          ComplexEventDates_NoComplexEventDates_384.insert(ComplexEventStartDate_384.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_384);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_780;
            FIX::ComplexEventEndTime ComplexEventEndTime_780(FIX::UTCTIMEONLY(3, 22, 18));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventEndTime_780);
            ComplexEventTimes_NoComplexEventTimes_780.insert(ComplexEventEndTime_780.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_780(FIX::UTCTIMEONLY(8, 56, 42));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventStartTime_780);
            ComplexEventTimes_NoComplexEventTimes_780.insert(ComplexEventStartTime_780.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_780);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_781;
            FIX::ComplexEventEndTime ComplexEventEndTime_781(FIX::UTCTIMEONLY(7, 50, 14));
            noComplexEventTimes_1_0_0_1_4_1.set(ComplexEventEndTime_781);
            ComplexEventTimes_NoComplexEventTimes_781.insert(ComplexEventEndTime_781.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_781(FIX::UTCTIMEONLY(15, 3, 38));
            noComplexEventTimes_1_0_0_1_4_1.set(ComplexEventStartTime_781);
            ComplexEventTimes_NoComplexEventTimes_781.insert(ComplexEventStartTime_781.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_781);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_1);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_385;
          FIX::ComplexEventEndDate ComplexEventEndDate_385(FIX::UTCTIMESTAMP(9, 1, 9, 20, 1, 2012));
          noComplexEventDates_1_0_0_3_2.set(ComplexEventEndDate_385);
          ComplexEventDates_NoComplexEventDates_385.insert(ComplexEventEndDate_385.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_385(FIX::UTCTIMESTAMP(2, 9, 19, 13, 8, 2002));
          noComplexEventDates_1_0_0_3_2.set(ComplexEventStartDate_385);
          ComplexEventDates_NoComplexEventDates_385.insert(ComplexEventStartDate_385.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_385);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_782;
            FIX::ComplexEventEndTime ComplexEventEndTime_782(FIX::UTCTIMEONLY(5, 2, 31));
            noComplexEventTimes_1_0_0_2_4_0.set(ComplexEventEndTime_782);
            ComplexEventTimes_NoComplexEventTimes_782.insert(ComplexEventEndTime_782.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_782(FIX::UTCTIMEONLY(22, 27, 28));
            noComplexEventTimes_1_0_0_2_4_0.set(ComplexEventStartTime_782);
            ComplexEventTimes_NoComplexEventTimes_782.insert(ComplexEventStartTime_782.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_782);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_2.addGroup(noComplexEventTimes_1_0_0_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_783;
            FIX::ComplexEventEndTime ComplexEventEndTime_783(FIX::UTCTIMEONLY(10, 10, 44));
            noComplexEventTimes_1_0_0_2_4_1.set(ComplexEventEndTime_783);
            ComplexEventTimes_NoComplexEventTimes_783.insert(ComplexEventEndTime_783.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_783(FIX::UTCTIMEONLY(18, 47, 43));
            noComplexEventTimes_1_0_0_2_4_1.set(ComplexEventStartTime_783);
            ComplexEventTimes_NoComplexEventTimes_783.insert(ComplexEventStartTime_783.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_783);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_2.addGroup(noComplexEventTimes_1_0_0_2_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_784;
            FIX::ComplexEventEndTime ComplexEventEndTime_784(FIX::UTCTIMEONLY(20, 36, 47));
            noComplexEventTimes_1_0_0_2_4_2.set(ComplexEventEndTime_784);
            ComplexEventTimes_NoComplexEventTimes_784.insert(ComplexEventEndTime_784.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_784(FIX::UTCTIMEONLY(12, 45, 20));
            noComplexEventTimes_1_0_0_2_4_2.set(ComplexEventStartTime_784);
            ComplexEventTimes_NoComplexEventTimes_784.insert(ComplexEventStartTime_784.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_784);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_0_0_3_2.addGroup(noComplexEventTimes_1_0_0_2_4_2);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_2);
        }
        noRelatedSym_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_188;
        FIX::EventDate EventDate_188("LOCALMKTDATE_1415186327");
        noEvents_1_0_2_0.set(EventDate_188);
        EvntGrp_NoEvents_188.insert(EventDate_188.getString());
        FIX::EventPx EventPx_188;
        EventPx_188.setString("2386975");
        noEvents_1_0_2_0.set(EventPx_188);
        EvntGrp_NoEvents_188.insert(EventPx_188.getString());
        FIX::EventText EventText_188("STRING_1037536676");
        noEvents_1_0_2_0.set(EventText_188);
        EvntGrp_NoEvents_188.insert(EventText_188.getString());
        FIX::EventTime EventTime_188(FIX::UTCTIMESTAMP(10, 36, 35, 11, 3, 2005));
        noEvents_1_0_2_0.set(EventTime_188);
        EvntGrp_NoEvents_188.insert(EventTime_188.getString());
        FIX::EventType EventType_188(10);
        noEvents_1_0_2_0.set(EventType_188);
        EvntGrp_NoEvents_188.insert(EventType_188.getString());
        all_values.push_back(EvntGrp_NoEvents_188);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_189;
        FIX::EventDate EventDate_189("LOCALMKTDATE_1519046340");
        noEvents_1_0_2_1.set(EventDate_189);
        EvntGrp_NoEvents_189.insert(EventDate_189.getString());
        FIX::EventPx EventPx_189;
        EventPx_189.setString("18088643");
        noEvents_1_0_2_1.set(EventPx_189);
        EvntGrp_NoEvents_189.insert(EventPx_189.getString());
        FIX::EventText EventText_189("STRING_240563229");
        noEvents_1_0_2_1.set(EventText_189);
        EvntGrp_NoEvents_189.insert(EventText_189.getString());
        FIX::EventTime EventTime_189(FIX::UTCTIMESTAMP(17, 20, 14, 22, 3, 2000));
        noEvents_1_0_2_1.set(EventTime_189);
        EvntGrp_NoEvents_189.insert(EventTime_189.getString());
        FIX::EventType EventType_189(6);
        noEvents_1_0_2_1.set(EventType_189);
        EvntGrp_NoEvents_189.insert(EventType_189.getString());
        all_values.push_back(EvntGrp_NoEvents_189);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_1_1_0.addGroup(noEvents_1_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_196;
        FIX::InstrumentPartyID InstrumentPartyID_196("STRING_309329790");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_196);
        InstrumentParties_NoInstrumentParties_196.insert(InstrumentPartyID_196.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_196('2');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_196);
        InstrumentParties_NoInstrumentParties_196.insert(InstrumentPartyIDSource_196.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_196(500386340);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_196);
        InstrumentParties_NoInstrumentParties_196.insert(InstrumentPartyRole_196.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_196);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381;
          FIX::InstrumentPartySubID InstrumentPartySubID_381("STRING_1283422574");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_381);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381.insert(InstrumentPartySubID_381.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_381(68524437);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_381);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381.insert(InstrumentPartySubIDType_381.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        noRelatedSym_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_197;
        FIX::InstrumentPartyID InstrumentPartyID_197("STRING_816555964");
        noInstrumentParties_1_0_2_1.set(InstrumentPartyID_197);
        InstrumentParties_NoInstrumentParties_197.insert(InstrumentPartyID_197.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_197('1');
        noInstrumentParties_1_0_2_1.set(InstrumentPartyIDSource_197);
        InstrumentParties_NoInstrumentParties_197.insert(InstrumentPartyIDSource_197.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_197(1483710764);
        noInstrumentParties_1_0_2_1.set(InstrumentPartyRole_197);
        InstrumentParties_NoInstrumentParties_197.insert(InstrumentPartyRole_197.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_197);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382;
          FIX::InstrumentPartySubID InstrumentPartySubID_382("STRING_370945233");
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubID_382);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382.insert(InstrumentPartySubID_382.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_382(388301879);
          noInstrumentPartySubIDs_1_0_1_3_0.set(InstrumentPartySubIDType_382);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382.insert(InstrumentPartySubIDType_382.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383;
          FIX::InstrumentPartySubID InstrumentPartySubID_383("STRING_270495061");
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubID_383);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383.insert(InstrumentPartySubID_383.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_383(498467049);
          noInstrumentPartySubIDs_1_0_1_3_1.set(InstrumentPartySubIDType_383);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383.insert(InstrumentPartySubIDType_383.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384;
          FIX::InstrumentPartySubID InstrumentPartySubID_384("STRING_1746920434");
          noInstrumentPartySubIDs_1_0_1_3_2.set(InstrumentPartySubID_384);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384.insert(InstrumentPartySubID_384.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_384(1379178957);
          noInstrumentPartySubIDs_1_0_1_3_2.set(InstrumentPartySubIDType_384);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384.insert(InstrumentPartySubIDType_384.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_0_2_1.addGroup(noInstrumentPartySubIDs_1_0_1_3_2);
        }
        noRelatedSym_1_1_0.addGroup(noInstrumentParties_1_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_173;
        FIX::SecurityAltID SecurityAltID_173("STRING_1790192853");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_173);
        SecAltIDGrp_NoSecurityAltID_173.insert(SecurityAltID_173.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_173("STRING_1197252218");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_173);
        SecAltIDGrp_NoSecurityAltID_173.insert(SecurityAltIDSource_173.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_173);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_174;
        FIX::SecurityAltID SecurityAltID_174("STRING_408774700");
        noSecurityAltID_1_0_2_1.set(SecurityAltID_174);
        SecAltIDGrp_NoSecurityAltID_174.insert(SecurityAltID_174.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_174("STRING_1451573572");
        noSecurityAltID_1_0_2_1.set(SecurityAltIDSource_174);
        SecAltIDGrp_NoSecurityAltID_174.insert(SecurityAltIDSource_174.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_174);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_175;
        FIX::SecurityAltID SecurityAltID_175("STRING_1437815448");
        noSecurityAltID_1_0_2_2.set(SecurityAltID_175);
        SecAltIDGrp_NoSecurityAltID_175.insert(SecurityAltID_175.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_175("STRING_1297045690");
        noSecurityAltID_1_0_2_2.set(SecurityAltIDSource_175);
        SecAltIDGrp_NoSecurityAltID_175.insert(SecurityAltIDSource_175.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_175);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_188;
      FIX::SecurityXML SecurityXML_189("XMLDATA_1085453869");
      noRelatedSym_1_1_0.set(SecurityXML_189);
      FIX::SecurityXMLLen SecurityXMLLen_94(1906280528);
      noRelatedSym_1_1_0.set(SecurityXMLLen_94);
      FIX::SecurityXMLSchema SecurityXMLSchema_94("STRING_827277617");
      noRelatedSym_1_1_0.set(SecurityXMLSchema_94);
      SecurityXML_188.insert(SecurityXMLSchema_94.getString());
      all_values.push_back(SecurityXML_188);
      all_compo_names.insert("SecurityXML");

      noAsgnReqs_0_1.addGroup(noRelatedSym_1_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_1_1_1;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_2;
      FIX::EncodedText EncodedText_97("DATA_1655924631");
      noRelatedSym_1_1_1.set(EncodedText_97);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(EncodedText_97.getString());
      FIX::EncodedTextLen EncodedTextLen_97(330027722);
      noRelatedSym_1_1_1.set(EncodedTextLen_97);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(EncodedTextLen_97.getString());
      FIX::MDStreamID MDStreamID_6("STRING_1395254531");
      noRelatedSym_1_1_1.set(MDStreamID_6);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(MDStreamID_6.getString());
      FIX::SettlType SettlType_33("STRING_4");
      noRelatedSym_1_1_1.set(SettlType_33);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(SettlType_33.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_2(2);
      noRelatedSym_1_1_1.set(StreamAsgnRejReason_2);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(StreamAsgnRejReason_2.getString());
      FIX::StreamAsgnType StreamAsgnType_2(3);
      noRelatedSym_1_1_1.set(StreamAsgnType_2);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(StreamAsgnType_2.getString());
      FIX::Text Text_97("STRING_1218089081");
      noRelatedSym_1_1_1.set(Text_97);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_2.insert(Text_97.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_2);
      all_compo_names.insert("StrmAsgnRptInstrmtGrp.NoRelatedSym");

      // Instrument
      multiset<string> Instrument_95;
      FIX::AttachmentPoint AttachmentPoint_95;
      AttachmentPoint_95.setString("58.020000");
      noRelatedSym_1_1_1.set(AttachmentPoint_95);
      Instrument_95.insert(AttachmentPoint_95.getString());
      FIX::CFICode CFICode_100("STRING_653927845");
      noRelatedSym_1_1_1.set(CFICode_100);
      Instrument_95.insert(CFICode_100.getString());
      FIX::CPProgram CPProgram_95(99);
      noRelatedSym_1_1_1.set(CPProgram_95);
      Instrument_95.insert(CPProgram_95.getString());
      FIX::CPRegType CPRegType_95("STRING_1708830240");
      noRelatedSym_1_1_1.set(CPRegType_95);
      Instrument_95.insert(CPRegType_95.getString());
      FIX::CapPrice CapPrice_95;
      CapPrice_95.setString("14704838");
      noRelatedSym_1_1_1.set(CapPrice_95);
      Instrument_95.insert(CapPrice_95.getString());
      FIX::ContractMultiplier ContractMultiplier_95;
      ContractMultiplier_95.setString("18349202");
      noRelatedSym_1_1_1.set(ContractMultiplier_95);
      Instrument_95.insert(ContractMultiplier_95.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_95(0);
      noRelatedSym_1_1_1.set(ContractMultiplierUnit_95);
      Instrument_95.insert(ContractMultiplierUnit_95.getString());
      FIX::ContractSettlMonth ContractSettlMonth_95("MONTHYEAR_378253676");
      noRelatedSym_1_1_1.set(ContractSettlMonth_95);
      Instrument_95.insert(ContractSettlMonth_95.getString());
      FIX::CountryOfIssue CountryOfIssue_95("COUNTRY_58381798");
      noRelatedSym_1_1_1.set(CountryOfIssue_95);
      Instrument_95.insert(CountryOfIssue_95.getString());
      FIX::CouponPaymentDate CouponPaymentDate_95("LOCALMKTDATE_1433359235");
      noRelatedSym_1_1_1.set(CouponPaymentDate_95);
      Instrument_95.insert(CouponPaymentDate_95.getString());
      FIX::CouponRate CouponRate_95;
      CouponRate_95.setString("87.380000");
      noRelatedSym_1_1_1.set(CouponRate_95);
      Instrument_95.insert(CouponRate_95.getString());
      FIX::CreditRating CreditRating_95("STRING_556848847");
      noRelatedSym_1_1_1.set(CreditRating_95);
      Instrument_95.insert(CreditRating_95.getString());
      FIX::DatedDate DatedDate_95("LOCALMKTDATE_1032796022");
      noRelatedSym_1_1_1.set(DatedDate_95);
      Instrument_95.insert(DatedDate_95.getString());
      FIX::DetachmentPoint DetachmentPoint_95;
      DetachmentPoint_95.setString("76.950000");
      noRelatedSym_1_1_1.set(DetachmentPoint_95);
      Instrument_95.insert(DetachmentPoint_95.getString());
      FIX::EncodedIssuer EncodedIssuer_95("DATA_1594060855");
      noRelatedSym_1_1_1.set(EncodedIssuer_95);
      Instrument_95.insert(EncodedIssuer_95.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_95(675505227);
      noRelatedSym_1_1_1.set(EncodedIssuerLen_95);
      Instrument_95.insert(EncodedIssuerLen_95.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_95("DATA_1077696265");
      noRelatedSym_1_1_1.set(EncodedSecurityDesc_95);
      Instrument_95.insert(EncodedSecurityDesc_95.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_95(2002835555);
      noRelatedSym_1_1_1.set(EncodedSecurityDescLen_95);
      Instrument_95.insert(EncodedSecurityDescLen_95.getString());
      FIX::ExerciseStyle ExerciseStyle_95(1);
      noRelatedSym_1_1_1.set(ExerciseStyle_95);
      Instrument_95.insert(ExerciseStyle_95.getString());
      FIX::Factor Factor_95;
      Factor_95.setString("3680280");
      noRelatedSym_1_1_1.set(Factor_95);
      Instrument_95.insert(Factor_95.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_95(false);
      noRelatedSym_1_1_1.set(FlexProductEligibilityIndicator_95);
      Instrument_95.insert(FlexProductEligibilityIndicator_95.getString());
      FIX::FlexibleIndicator FlexibleIndicator_95(true);
      noRelatedSym_1_1_1.set(FlexibleIndicator_95);
      Instrument_95.insert(FlexibleIndicator_95.getString());
      FIX::FloorPrice FloorPrice_95;
      FloorPrice_95.setString("1268249");
      noRelatedSym_1_1_1.set(FloorPrice_95);
      Instrument_95.insert(FloorPrice_95.getString());
      FIX::FlowScheduleType FlowScheduleType_95(4);
      noRelatedSym_1_1_1.set(FlowScheduleType_95);
      Instrument_95.insert(FlowScheduleType_95.getString());
      FIX::InstrRegistry InstrRegistry_95("STRING_573490003");
      noRelatedSym_1_1_1.set(InstrRegistry_95);
      Instrument_95.insert(InstrRegistry_95.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_95('4');
      noRelatedSym_1_1_1.set(InstrmtAssignmentMethod_95);
      Instrument_95.insert(InstrmtAssignmentMethod_95.getString());
      FIX::InterestAccrualDate InterestAccrualDate_95("LOCALMKTDATE_1227446097");
      noRelatedSym_1_1_1.set(InterestAccrualDate_95);
      Instrument_95.insert(InterestAccrualDate_95.getString());
      FIX::IssueDate IssueDate_95("LOCALMKTDATE_1853003291");
      noRelatedSym_1_1_1.set(IssueDate_95);
      Instrument_95.insert(IssueDate_95.getString());
      FIX::Issuer Issuer_95("STRING_1596772130");
      noRelatedSym_1_1_1.set(Issuer_95);
      Instrument_95.insert(Issuer_95.getString());
      FIX::ListMethod ListMethod_95(1);
      noRelatedSym_1_1_1.set(ListMethod_95);
      Instrument_95.insert(ListMethod_95.getString());
      FIX::LocaleOfIssue LocaleOfIssue_95("STRING_923608725");
      noRelatedSym_1_1_1.set(LocaleOfIssue_95);
      Instrument_95.insert(LocaleOfIssue_95.getString());
      FIX::MaturityDate MaturityDate_95("LOCALMKTDATE_1089594284");
      noRelatedSym_1_1_1.set(MaturityDate_95);
      Instrument_95.insert(MaturityDate_95.getString());
      FIX::MaturityMonthYear MaturityMonthYear_95("MONTHYEAR_1438474616");
      noRelatedSym_1_1_1.set(MaturityMonthYear_95);
      Instrument_95.insert(MaturityMonthYear_95.getString());
      FIX::MaturityTime MaturityTime_95("TZTIMEONLY_1277636732");
      noRelatedSym_1_1_1.set(MaturityTime_95);
      Instrument_95.insert(MaturityTime_95.getString());
      FIX::MinPriceIncrement MinPriceIncrement_95;
      MinPriceIncrement_95.setString("6509408");
      noRelatedSym_1_1_1.set(MinPriceIncrement_95);
      Instrument_95.insert(MinPriceIncrement_95.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_95;
      MinPriceIncrementAmount_95.setString("7614747");
      noRelatedSym_1_1_1.set(MinPriceIncrementAmount_95);
      Instrument_95.insert(MinPriceIncrementAmount_95.getString());
      FIX::NTPositionLimit NTPositionLimit_95(965073297);
      noRelatedSym_1_1_1.set(NTPositionLimit_95);
      Instrument_95.insert(NTPositionLimit_95.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_95;
      NotionalPercentageOutstanding_95.setString("82.330000");
      noRelatedSym_1_1_1.set(NotionalPercentageOutstanding_95);
      Instrument_95.insert(NotionalPercentageOutstanding_95.getString());
      FIX::OptAttribute OptAttribute_95('1');
      noRelatedSym_1_1_1.set(OptAttribute_95);
      Instrument_95.insert(OptAttribute_95.getString());
      FIX::OptPayoutAmount OptPayoutAmount_95;
      OptPayoutAmount_95.setString("10234550");
      noRelatedSym_1_1_1.set(OptPayoutAmount_95);
      Instrument_95.insert(OptPayoutAmount_95.getString());
      FIX::OptPayoutType OptPayoutType_95(2);
      noRelatedSym_1_1_1.set(OptPayoutType_95);
      Instrument_95.insert(OptPayoutType_95.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_95;
      OriginalNotionalPercentageOutstanding_95.setString("71.910000");
      noRelatedSym_1_1_1.set(OriginalNotionalPercentageOutstanding_95);
      Instrument_95.insert(OriginalNotionalPercentageOutstanding_95.getString());
      FIX::Pool Pool_95("STRING_1580303942");
      noRelatedSym_1_1_1.set(Pool_95);
      Instrument_95.insert(Pool_95.getString());
      FIX::PositionLimit PositionLimit_95(2014669842);
      noRelatedSym_1_1_1.set(PositionLimit_95);
      Instrument_95.insert(PositionLimit_95.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_95("STRING_INT");
      noRelatedSym_1_1_1.set(PriceQuoteMethod_95);
      Instrument_95.insert(PriceQuoteMethod_95.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_95("STRING_1026881149");
      noRelatedSym_1_1_1.set(PriceUnitOfMeasure_95);
      Instrument_95.insert(PriceUnitOfMeasure_95.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_95;
      PriceUnitOfMeasureQty_95.setString("5426914");
      noRelatedSym_1_1_1.set(PriceUnitOfMeasureQty_95);
      Instrument_95.insert(PriceUnitOfMeasureQty_95.getString());
      FIX::Product Product_103(10);
      noRelatedSym_1_1_1.set(Product_103);
      Instrument_95.insert(Product_103.getString());
      FIX::ProductComplex ProductComplex_95("STRING_882233056");
      noRelatedSym_1_1_1.set(ProductComplex_95);
      Instrument_95.insert(ProductComplex_95.getString());
      FIX::PutOrCall PutOrCall_95(1);
      noRelatedSym_1_1_1.set(PutOrCall_95);
      Instrument_95.insert(PutOrCall_95.getString());
      FIX::RedemptionDate RedemptionDate_95("LOCALMKTDATE_967161921");
      noRelatedSym_1_1_1.set(RedemptionDate_95);
      Instrument_95.insert(RedemptionDate_95.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_95("STRING_2034630654");
      noRelatedSym_1_1_1.set(RepoCollateralSecurityType_95);
      Instrument_95.insert(RepoCollateralSecurityType_95.getString());
      FIX::RepurchaseRate RepurchaseRate_95;
      RepurchaseRate_95.setString("55.940000");
      noRelatedSym_1_1_1.set(RepurchaseRate_95);
      Instrument_95.insert(RepurchaseRate_95.getString());
      FIX::RepurchaseTerm RepurchaseTerm_95(1093986867);
      noRelatedSym_1_1_1.set(RepurchaseTerm_95);
      Instrument_95.insert(RepurchaseTerm_95.getString());
      FIX::RestructuringType RestructuringType_95("STRING_FR");
      noRelatedSym_1_1_1.set(RestructuringType_95);
      Instrument_95.insert(RestructuringType_95.getString());
      FIX::SecurityDesc SecurityDesc_95("STRING_13341949");
      noRelatedSym_1_1_1.set(SecurityDesc_95);
      Instrument_95.insert(SecurityDesc_95.getString());
      FIX::SecurityExchange SecurityExchange_95("EXCHANGE_1550839534");
      noRelatedSym_1_1_1.set(SecurityExchange_95);
      Instrument_95.insert(SecurityExchange_95.getString());
      FIX::SecurityGroup SecurityGroup_95("STRING_946784670");
      noRelatedSym_1_1_1.set(SecurityGroup_95);
      Instrument_95.insert(SecurityGroup_95.getString());
      FIX::SecurityID SecurityID_95("STRING_1866345241");
      noRelatedSym_1_1_1.set(SecurityID_95);
      Instrument_95.insert(SecurityID_95.getString());
      FIX::SecurityIDSource SecurityIDSource_95("STRING_9");
      noRelatedSym_1_1_1.set(SecurityIDSource_95);
      Instrument_95.insert(SecurityIDSource_95.getString());
      FIX::SecurityStatus SecurityStatus_96("STRING_2");
      noRelatedSym_1_1_1.set(SecurityStatus_96);
      Instrument_95.insert(SecurityStatus_96.getString());
      FIX::SecuritySubType SecuritySubType_99("STRING_642470318");
      noRelatedSym_1_1_1.set(SecuritySubType_99);
      Instrument_95.insert(SecuritySubType_99.getString());
      FIX::SecurityType SecurityType_103("STRING_FAC");
      noRelatedSym_1_1_1.set(SecurityType_103);
      Instrument_95.insert(SecurityType_103.getString());
      FIX::Seniority Seniority_95("STRING_SR");
      noRelatedSym_1_1_1.set(Seniority_95);
      Instrument_95.insert(Seniority_95.getString());
      FIX::SettlMethod SettlMethod_95('C');
      noRelatedSym_1_1_1.set(SettlMethod_95);
      Instrument_95.insert(SettlMethod_95.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_95("STRING_593179529");
      noRelatedSym_1_1_1.set(SettleOnOpenFlag_95);
      Instrument_95.insert(SettleOnOpenFlag_95.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_95("STRING_1783797186");
      noRelatedSym_1_1_1.set(StateOrProvinceOfIssue_95);
      Instrument_95.insert(StateOrProvinceOfIssue_95.getString());
      FIX::StrikeCurrency StrikeCurrency_95("JPY");
      noRelatedSym_1_1_1.set(StrikeCurrency_95);
      Instrument_95.insert(StrikeCurrency_95.getString());
      FIX::StrikeMultiplier StrikeMultiplier_95;
      StrikeMultiplier_95.setString("7760419");
      noRelatedSym_1_1_1.set(StrikeMultiplier_95);
      Instrument_95.insert(StrikeMultiplier_95.getString());
      FIX::StrikePrice StrikePrice_95;
      StrikePrice_95.setString("17611517");
      noRelatedSym_1_1_1.set(StrikePrice_95);
      Instrument_95.insert(StrikePrice_95.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_95(1);
      noRelatedSym_1_1_1.set(StrikePriceBoundaryMethod_95);
      Instrument_95.insert(StrikePriceBoundaryMethod_95.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_95;
      StrikePriceBoundaryPrecision_95.setString("55.350000");
      noRelatedSym_1_1_1.set(StrikePriceBoundaryPrecision_95);
      Instrument_95.insert(StrikePriceBoundaryPrecision_95.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_95(2);
      noRelatedSym_1_1_1.set(StrikePriceDeterminationMethod_95);
      Instrument_95.insert(StrikePriceDeterminationMethod_95.getString());
      FIX::StrikeValue StrikeValue_95;
      StrikeValue_95.setString("9907541");
      noRelatedSym_1_1_1.set(StrikeValue_95);
      Instrument_95.insert(StrikeValue_95.getString());
      FIX::Symbol Symbol_95("STRING_2085956773");
      noRelatedSym_1_1_1.set(Symbol_95);
      Instrument_95.insert(Symbol_95.getString());
      FIX::SymbolSfx SymbolSfx_95("STRING_CD");
      noRelatedSym_1_1_1.set(SymbolSfx_95);
      Instrument_95.insert(SymbolSfx_95.getString());
      FIX::TimeUnit TimeUnit_95("STRING_Min");
      noRelatedSym_1_1_1.set(TimeUnit_95);
      Instrument_95.insert(TimeUnit_95.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_95(2);
      noRelatedSym_1_1_1.set(UnderlyingPriceDeterminationMethod_95);
      Instrument_95.insert(UnderlyingPriceDeterminationMethod_95.getString());
      FIX::UnitOfMeasure UnitOfMeasure_95("STRING_Alw");
      noRelatedSym_1_1_1.set(UnitOfMeasure_95);
      Instrument_95.insert(UnitOfMeasure_95.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_95;
      UnitOfMeasureQty_95.setString("20557321");
      noRelatedSym_1_1_1.set(UnitOfMeasureQty_95);
      Instrument_95.insert(UnitOfMeasureQty_95.getString());
      FIX::ValuationMethod ValuationMethod_95("STRING_CDS");
      noRelatedSym_1_1_1.set(ValuationMethod_95);
      Instrument_95.insert(ValuationMethod_95.getString());
      all_values.push_back(Instrument_95);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_191;
        FIX::ComplexEventCondition ComplexEventCondition_191(2);
        noComplexEvents_1_1_2_0.set(ComplexEventCondition_191);
        ComplexEvents_NoComplexEvents_191.insert(ComplexEventCondition_191.getString());
        FIX::ComplexEventPrice ComplexEventPrice_191;
        ComplexEventPrice_191.setString("4512721");
        noComplexEvents_1_1_2_0.set(ComplexEventPrice_191);
        ComplexEvents_NoComplexEvents_191.insert(ComplexEventPrice_191.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_191(1);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryMethod_191);
        ComplexEvents_NoComplexEvents_191.insert(ComplexEventPriceBoundaryMethod_191.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_191;
        ComplexEventPriceBoundaryPrecision_191.setString("60.200000");
        noComplexEvents_1_1_2_0.set(ComplexEventPriceBoundaryPrecision_191);
        ComplexEvents_NoComplexEvents_191.insert(ComplexEventPriceBoundaryPrecision_191.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_191(1);
        noComplexEvents_1_1_2_0.set(ComplexEventPriceTimeType_191);
        ComplexEvents_NoComplexEvents_191.insert(ComplexEventPriceTimeType_191.getString());
        FIX::ComplexEventType ComplexEventType_191(9);
        noComplexEvents_1_1_2_0.set(ComplexEventType_191);
        ComplexEvents_NoComplexEvents_191.insert(ComplexEventType_191.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_191;
        ComplexOptPayoutAmount_191.setString("12277876");
        noComplexEvents_1_1_2_0.set(ComplexOptPayoutAmount_191);
        ComplexEvents_NoComplexEvents_191.insert(ComplexOptPayoutAmount_191.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_191);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_386;
          FIX::ComplexEventEndDate ComplexEventEndDate_386(FIX::UTCTIMESTAMP(19, 38, 17, 10, 8, 2015));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventEndDate_386);
          ComplexEventDates_NoComplexEventDates_386.insert(ComplexEventEndDate_386.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_386(FIX::UTCTIMESTAMP(18, 19, 20, 17, 11, 2001));
          noComplexEventDates_1_1_0_3_0.set(ComplexEventStartDate_386);
          ComplexEventDates_NoComplexEventDates_386.insert(ComplexEventStartDate_386.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_386);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_785;
            FIX::ComplexEventEndTime ComplexEventEndTime_785(FIX::UTCTIMEONLY(19, 22, 1));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventEndTime_785);
            ComplexEventTimes_NoComplexEventTimes_785.insert(ComplexEventEndTime_785.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_785(FIX::UTCTIMEONLY(7, 36, 43));
            noComplexEventTimes_1_1_0_0_4_0.set(ComplexEventStartTime_785);
            ComplexEventTimes_NoComplexEventTimes_785.insert(ComplexEventStartTime_785.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_785);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_786;
            FIX::ComplexEventEndTime ComplexEventEndTime_786(FIX::UTCTIMEONLY(14, 49, 22));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventEndTime_786);
            ComplexEventTimes_NoComplexEventTimes_786.insert(ComplexEventEndTime_786.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_786(FIX::UTCTIMEONLY(16, 8, 51));
            noComplexEventTimes_1_1_0_0_4_1.set(ComplexEventStartTime_786);
            ComplexEventTimes_NoComplexEventTimes_786.insert(ComplexEventStartTime_786.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_786);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_787;
            FIX::ComplexEventEndTime ComplexEventEndTime_787(FIX::UTCTIMEONLY(19, 21, 54));
            noComplexEventTimes_1_1_0_0_4_2.set(ComplexEventEndTime_787);
            ComplexEventTimes_NoComplexEventTimes_787.insert(ComplexEventEndTime_787.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_787(FIX::UTCTIMEONLY(5, 2, 23));
            noComplexEventTimes_1_1_0_0_4_2.set(ComplexEventStartTime_787);
            ComplexEventTimes_NoComplexEventTimes_787.insert(ComplexEventStartTime_787.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_787);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_1_0_3_0.addGroup(noComplexEventTimes_1_1_0_0_4_2);
          }
          noComplexEvents_1_1_2_0.addGroup(noComplexEventDates_1_1_0_3_0);
        }
        noRelatedSym_1_1_1.addGroup(noComplexEvents_1_1_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_190;
        FIX::EventDate EventDate_190("LOCALMKTDATE_1732518441");
        noEvents_1_1_2_0.set(EventDate_190);
        EvntGrp_NoEvents_190.insert(EventDate_190.getString());
        FIX::EventPx EventPx_190;
        EventPx_190.setString("282764");
        noEvents_1_1_2_0.set(EventPx_190);
        EvntGrp_NoEvents_190.insert(EventPx_190.getString());
        FIX::EventText EventText_190("STRING_1722994552");
        noEvents_1_1_2_0.set(EventText_190);
        EvntGrp_NoEvents_190.insert(EventText_190.getString());
        FIX::EventTime EventTime_190(FIX::UTCTIMESTAMP(12, 22, 26, 3, 9, 2001));
        noEvents_1_1_2_0.set(EventTime_190);
        EvntGrp_NoEvents_190.insert(EventTime_190.getString());
        FIX::EventType EventType_190(19);
        noEvents_1_1_2_0.set(EventType_190);
        EvntGrp_NoEvents_190.insert(EventType_190.getString());
        all_values.push_back(EvntGrp_NoEvents_190);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_1_1_1.addGroup(noEvents_1_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_198;
        FIX::InstrumentPartyID InstrumentPartyID_198("STRING_873271795");
        noInstrumentParties_1_1_2_0.set(InstrumentPartyID_198);
        InstrumentParties_NoInstrumentParties_198.insert(InstrumentPartyID_198.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_198('7');
        noInstrumentParties_1_1_2_0.set(InstrumentPartyIDSource_198);
        InstrumentParties_NoInstrumentParties_198.insert(InstrumentPartyIDSource_198.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_198(745337297);
        noInstrumentParties_1_1_2_0.set(InstrumentPartyRole_198);
        InstrumentParties_NoInstrumentParties_198.insert(InstrumentPartyRole_198.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_198);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385;
          FIX::InstrumentPartySubID InstrumentPartySubID_385("STRING_2049888762");
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubID_385);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385.insert(InstrumentPartySubID_385.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_385(247797212);
          noInstrumentPartySubIDs_1_1_0_3_0.set(InstrumentPartySubIDType_385);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385.insert(InstrumentPartySubIDType_385.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_0.addGroup(noInstrumentPartySubIDs_1_1_0_3_0);
        }
        noRelatedSym_1_1_1.addGroup(noInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_199;
        FIX::InstrumentPartyID InstrumentPartyID_199("STRING_743592152");
        noInstrumentParties_1_1_2_1.set(InstrumentPartyID_199);
        InstrumentParties_NoInstrumentParties_199.insert(InstrumentPartyID_199.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_199('5');
        noInstrumentParties_1_1_2_1.set(InstrumentPartyIDSource_199);
        InstrumentParties_NoInstrumentParties_199.insert(InstrumentPartyIDSource_199.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_199(978044740);
        noInstrumentParties_1_1_2_1.set(InstrumentPartyRole_199);
        InstrumentParties_NoInstrumentParties_199.insert(InstrumentPartyRole_199.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_199);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386;
          FIX::InstrumentPartySubID InstrumentPartySubID_386("STRING_224542828");
          noInstrumentPartySubIDs_1_1_1_3_0.set(InstrumentPartySubID_386);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386.insert(InstrumentPartySubID_386.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_386(1431066551);
          noInstrumentPartySubIDs_1_1_1_3_0.set(InstrumentPartySubIDType_386);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386.insert(InstrumentPartySubIDType_386.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_1_2_1.addGroup(noInstrumentPartySubIDs_1_1_1_3_0);
        }
        noRelatedSym_1_1_1.addGroup(noInstrumentParties_1_1_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_176;
        FIX::SecurityAltID SecurityAltID_176("STRING_1973273302");
        noSecurityAltID_1_1_2_0.set(SecurityAltID_176);
        SecAltIDGrp_NoSecurityAltID_176.insert(SecurityAltID_176.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_176("STRING_1379486049");
        noSecurityAltID_1_1_2_0.set(SecurityAltIDSource_176);
        SecAltIDGrp_NoSecurityAltID_176.insert(SecurityAltIDSource_176.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_176);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_1_1_1.addGroup(noSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_177;
        FIX::SecurityAltID SecurityAltID_177("STRING_510737218");
        noSecurityAltID_1_1_2_1.set(SecurityAltID_177);
        SecAltIDGrp_NoSecurityAltID_177.insert(SecurityAltID_177.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_177("STRING_1178393116");
        noSecurityAltID_1_1_2_1.set(SecurityAltIDSource_177);
        SecAltIDGrp_NoSecurityAltID_177.insert(SecurityAltIDSource_177.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_177);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_1_1_1.addGroup(noSecurityAltID_1_1_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_190;
      FIX::SecurityXML SecurityXML_191("XMLDATA_1560999932");
      noRelatedSym_1_1_1.set(SecurityXML_191);
      FIX::SecurityXMLLen SecurityXMLLen_95(1725779161);
      noRelatedSym_1_1_1.set(SecurityXMLLen_95);
      FIX::SecurityXMLSchema SecurityXMLSchema_95("STRING_763427909");
      noRelatedSym_1_1_1.set(SecurityXMLSchema_95);
      SecurityXML_190.insert(SecurityXMLSchema_95.getString());
      all_values.push_back(SecurityXML_190);
      all_compo_names.insert("SecurityXML");

      noAsgnReqs_0_1.addGroup(noRelatedSym_1_1_1);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_1_1_2;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_3;
      FIX::EncodedText EncodedText_98("DATA_1589276347");
      noRelatedSym_1_1_2.set(EncodedText_98);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(EncodedText_98.getString());
      FIX::EncodedTextLen EncodedTextLen_98(1301290065);
      noRelatedSym_1_1_2.set(EncodedTextLen_98);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(EncodedTextLen_98.getString());
      FIX::MDStreamID MDStreamID_7("STRING_1145413216");
      noRelatedSym_1_1_2.set(MDStreamID_7);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(MDStreamID_7.getString());
      FIX::SettlType SettlType_34("STRING_C");
      noRelatedSym_1_1_2.set(SettlType_34);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(SettlType_34.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_3(99);
      noRelatedSym_1_1_2.set(StreamAsgnRejReason_3);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(StreamAsgnRejReason_3.getString());
      FIX::StreamAsgnType StreamAsgnType_3(3);
      noRelatedSym_1_1_2.set(StreamAsgnType_3);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(StreamAsgnType_3.getString());
      FIX::Text Text_98("STRING_546435334");
      noRelatedSym_1_1_2.set(Text_98);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_3.insert(Text_98.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_3);
      all_compo_names.insert("StrmAsgnRptInstrmtGrp.NoRelatedSym");

      // Instrument
      multiset<string> Instrument_96;
      FIX::AttachmentPoint AttachmentPoint_96;
      AttachmentPoint_96.setString("66.960000");
      noRelatedSym_1_1_2.set(AttachmentPoint_96);
      Instrument_96.insert(AttachmentPoint_96.getString());
      FIX::CFICode CFICode_101("STRING_358294434");
      noRelatedSym_1_1_2.set(CFICode_101);
      Instrument_96.insert(CFICode_101.getString());
      FIX::CPProgram CPProgram_96(99);
      noRelatedSym_1_1_2.set(CPProgram_96);
      Instrument_96.insert(CPProgram_96.getString());
      FIX::CPRegType CPRegType_96("STRING_643746451");
      noRelatedSym_1_1_2.set(CPRegType_96);
      Instrument_96.insert(CPRegType_96.getString());
      FIX::CapPrice CapPrice_96;
      CapPrice_96.setString("12315662");
      noRelatedSym_1_1_2.set(CapPrice_96);
      Instrument_96.insert(CapPrice_96.getString());
      FIX::ContractMultiplier ContractMultiplier_96;
      ContractMultiplier_96.setString("12271178");
      noRelatedSym_1_1_2.set(ContractMultiplier_96);
      Instrument_96.insert(ContractMultiplier_96.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_96(1);
      noRelatedSym_1_1_2.set(ContractMultiplierUnit_96);
      Instrument_96.insert(ContractMultiplierUnit_96.getString());
      FIX::ContractSettlMonth ContractSettlMonth_96("MONTHYEAR_1038942375");
      noRelatedSym_1_1_2.set(ContractSettlMonth_96);
      Instrument_96.insert(ContractSettlMonth_96.getString());
      FIX::CountryOfIssue CountryOfIssue_96("COUNTRY_1129522932");
      noRelatedSym_1_1_2.set(CountryOfIssue_96);
      Instrument_96.insert(CountryOfIssue_96.getString());
      FIX::CouponPaymentDate CouponPaymentDate_96("LOCALMKTDATE_1636880961");
      noRelatedSym_1_1_2.set(CouponPaymentDate_96);
      Instrument_96.insert(CouponPaymentDate_96.getString());
      FIX::CouponRate CouponRate_96;
      CouponRate_96.setString("45.270000");
      noRelatedSym_1_1_2.set(CouponRate_96);
      Instrument_96.insert(CouponRate_96.getString());
      FIX::CreditRating CreditRating_96("STRING_1720378383");
      noRelatedSym_1_1_2.set(CreditRating_96);
      Instrument_96.insert(CreditRating_96.getString());
      FIX::DatedDate DatedDate_96("LOCALMKTDATE_467442053");
      noRelatedSym_1_1_2.set(DatedDate_96);
      Instrument_96.insert(DatedDate_96.getString());
      FIX::DetachmentPoint DetachmentPoint_96;
      DetachmentPoint_96.setString("14.150000");
      noRelatedSym_1_1_2.set(DetachmentPoint_96);
      Instrument_96.insert(DetachmentPoint_96.getString());
      FIX::EncodedIssuer EncodedIssuer_96("DATA_1944921211");
      noRelatedSym_1_1_2.set(EncodedIssuer_96);
      Instrument_96.insert(EncodedIssuer_96.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_96(1898508604);
      noRelatedSym_1_1_2.set(EncodedIssuerLen_96);
      Instrument_96.insert(EncodedIssuerLen_96.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_96("DATA_849695012");
      noRelatedSym_1_1_2.set(EncodedSecurityDesc_96);
      Instrument_96.insert(EncodedSecurityDesc_96.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_96(1770710866);
      noRelatedSym_1_1_2.set(EncodedSecurityDescLen_96);
      Instrument_96.insert(EncodedSecurityDescLen_96.getString());
      FIX::ExerciseStyle ExerciseStyle_96(2);
      noRelatedSym_1_1_2.set(ExerciseStyle_96);
      Instrument_96.insert(ExerciseStyle_96.getString());
      FIX::Factor Factor_96;
      Factor_96.setString("13604322");
      noRelatedSym_1_1_2.set(Factor_96);
      Instrument_96.insert(Factor_96.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_96(true);
      noRelatedSym_1_1_2.set(FlexProductEligibilityIndicator_96);
      Instrument_96.insert(FlexProductEligibilityIndicator_96.getString());
      FIX::FlexibleIndicator FlexibleIndicator_96(false);
      noRelatedSym_1_1_2.set(FlexibleIndicator_96);
      Instrument_96.insert(FlexibleIndicator_96.getString());
      FIX::FloorPrice FloorPrice_96;
      FloorPrice_96.setString("9387277");
      noRelatedSym_1_1_2.set(FloorPrice_96);
      Instrument_96.insert(FloorPrice_96.getString());
      FIX::FlowScheduleType FlowScheduleType_96(4);
      noRelatedSym_1_1_2.set(FlowScheduleType_96);
      Instrument_96.insert(FlowScheduleType_96.getString());
      FIX::InstrRegistry InstrRegistry_96("STRING_2133303636");
      noRelatedSym_1_1_2.set(InstrRegistry_96);
      Instrument_96.insert(InstrRegistry_96.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_96('9');
      noRelatedSym_1_1_2.set(InstrmtAssignmentMethod_96);
      Instrument_96.insert(InstrmtAssignmentMethod_96.getString());
      FIX::InterestAccrualDate InterestAccrualDate_96("LOCALMKTDATE_562977812");
      noRelatedSym_1_1_2.set(InterestAccrualDate_96);
      Instrument_96.insert(InterestAccrualDate_96.getString());
      FIX::IssueDate IssueDate_96("LOCALMKTDATE_496623723");
      noRelatedSym_1_1_2.set(IssueDate_96);
      Instrument_96.insert(IssueDate_96.getString());
      FIX::Issuer Issuer_96("STRING_320558219");
      noRelatedSym_1_1_2.set(Issuer_96);
      Instrument_96.insert(Issuer_96.getString());
      FIX::ListMethod ListMethod_96(1);
      noRelatedSym_1_1_2.set(ListMethod_96);
      Instrument_96.insert(ListMethod_96.getString());
      FIX::LocaleOfIssue LocaleOfIssue_96("STRING_1043059058");
      noRelatedSym_1_1_2.set(LocaleOfIssue_96);
      Instrument_96.insert(LocaleOfIssue_96.getString());
      FIX::MaturityDate MaturityDate_96("LOCALMKTDATE_359984915");
      noRelatedSym_1_1_2.set(MaturityDate_96);
      Instrument_96.insert(MaturityDate_96.getString());
      FIX::MaturityMonthYear MaturityMonthYear_96("MONTHYEAR_1036610762");
      noRelatedSym_1_1_2.set(MaturityMonthYear_96);
      Instrument_96.insert(MaturityMonthYear_96.getString());
      FIX::MaturityTime MaturityTime_96("TZTIMEONLY_1547349202");
      noRelatedSym_1_1_2.set(MaturityTime_96);
      Instrument_96.insert(MaturityTime_96.getString());
      FIX::MinPriceIncrement MinPriceIncrement_96;
      MinPriceIncrement_96.setString("10037313");
      noRelatedSym_1_1_2.set(MinPriceIncrement_96);
      Instrument_96.insert(MinPriceIncrement_96.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_96;
      MinPriceIncrementAmount_96.setString("1206933");
      noRelatedSym_1_1_2.set(MinPriceIncrementAmount_96);
      Instrument_96.insert(MinPriceIncrementAmount_96.getString());
      FIX::NTPositionLimit NTPositionLimit_96(626983372);
      noRelatedSym_1_1_2.set(NTPositionLimit_96);
      Instrument_96.insert(NTPositionLimit_96.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_96;
      NotionalPercentageOutstanding_96.setString("14.680000");
      noRelatedSym_1_1_2.set(NotionalPercentageOutstanding_96);
      Instrument_96.insert(NotionalPercentageOutstanding_96.getString());
      FIX::OptAttribute OptAttribute_96('1');
      noRelatedSym_1_1_2.set(OptAttribute_96);
      Instrument_96.insert(OptAttribute_96.getString());
      FIX::OptPayoutAmount OptPayoutAmount_96;
      OptPayoutAmount_96.setString("17565063");
      noRelatedSym_1_1_2.set(OptPayoutAmount_96);
      Instrument_96.insert(OptPayoutAmount_96.getString());
      FIX::OptPayoutType OptPayoutType_96(1);
      noRelatedSym_1_1_2.set(OptPayoutType_96);
      Instrument_96.insert(OptPayoutType_96.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_96;
      OriginalNotionalPercentageOutstanding_96.setString("65.990000");
      noRelatedSym_1_1_2.set(OriginalNotionalPercentageOutstanding_96);
      Instrument_96.insert(OriginalNotionalPercentageOutstanding_96.getString());
      FIX::Pool Pool_96("STRING_1329401040");
      noRelatedSym_1_1_2.set(Pool_96);
      Instrument_96.insert(Pool_96.getString());
      FIX::PositionLimit PositionLimit_96(202170834);
      noRelatedSym_1_1_2.set(PositionLimit_96);
      Instrument_96.insert(PositionLimit_96.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_96("STRING_INT");
      noRelatedSym_1_1_2.set(PriceQuoteMethod_96);
      Instrument_96.insert(PriceQuoteMethod_96.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_96("STRING_1126838604");
      noRelatedSym_1_1_2.set(PriceUnitOfMeasure_96);
      Instrument_96.insert(PriceUnitOfMeasure_96.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_96;
      PriceUnitOfMeasureQty_96.setString("21006794");
      noRelatedSym_1_1_2.set(PriceUnitOfMeasureQty_96);
      Instrument_96.insert(PriceUnitOfMeasureQty_96.getString());
      FIX::Product Product_104(10);
      noRelatedSym_1_1_2.set(Product_104);
      Instrument_96.insert(Product_104.getString());
      FIX::ProductComplex ProductComplex_96("STRING_750065822");
      noRelatedSym_1_1_2.set(ProductComplex_96);
      Instrument_96.insert(ProductComplex_96.getString());
      FIX::PutOrCall PutOrCall_96(0);
      noRelatedSym_1_1_2.set(PutOrCall_96);
      Instrument_96.insert(PutOrCall_96.getString());
      FIX::RedemptionDate RedemptionDate_96("LOCALMKTDATE_879461608");
      noRelatedSym_1_1_2.set(RedemptionDate_96);
      Instrument_96.insert(RedemptionDate_96.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_96("STRING_1551686156");
      noRelatedSym_1_1_2.set(RepoCollateralSecurityType_96);
      Instrument_96.insert(RepoCollateralSecurityType_96.getString());
      FIX::RepurchaseRate RepurchaseRate_96;
      RepurchaseRate_96.setString("40.850000");
      noRelatedSym_1_1_2.set(RepurchaseRate_96);
      Instrument_96.insert(RepurchaseRate_96.getString());
      FIX::RepurchaseTerm RepurchaseTerm_96(1818189351);
      noRelatedSym_1_1_2.set(RepurchaseTerm_96);
      Instrument_96.insert(RepurchaseTerm_96.getString());
      FIX::RestructuringType RestructuringType_96("STRING_FR");
      noRelatedSym_1_1_2.set(RestructuringType_96);
      Instrument_96.insert(RestructuringType_96.getString());
      FIX::SecurityDesc SecurityDesc_96("STRING_1613554074");
      noRelatedSym_1_1_2.set(SecurityDesc_96);
      Instrument_96.insert(SecurityDesc_96.getString());
      FIX::SecurityExchange SecurityExchange_96("EXCHANGE_1910723511");
      noRelatedSym_1_1_2.set(SecurityExchange_96);
      Instrument_96.insert(SecurityExchange_96.getString());
      FIX::SecurityGroup SecurityGroup_96("STRING_1532228565");
      noRelatedSym_1_1_2.set(SecurityGroup_96);
      Instrument_96.insert(SecurityGroup_96.getString());
      FIX::SecurityID SecurityID_96("STRING_2110177797");
      noRelatedSym_1_1_2.set(SecurityID_96);
      Instrument_96.insert(SecurityID_96.getString());
      FIX::SecurityIDSource SecurityIDSource_96("STRING_H");
      noRelatedSym_1_1_2.set(SecurityIDSource_96);
      Instrument_96.insert(SecurityIDSource_96.getString());
      FIX::SecurityStatus SecurityStatus_97("STRING_1");
      noRelatedSym_1_1_2.set(SecurityStatus_97);
      Instrument_96.insert(SecurityStatus_97.getString());
      FIX::SecuritySubType SecuritySubType_100("STRING_1005753207");
      noRelatedSym_1_1_2.set(SecuritySubType_100);
      Instrument_96.insert(SecuritySubType_100.getString());
      FIX::SecurityType SecurityType_104("STRING_TAN");
      noRelatedSym_1_1_2.set(SecurityType_104);
      Instrument_96.insert(SecurityType_104.getString());
      FIX::Seniority Seniority_96("STRING_SR");
      noRelatedSym_1_1_2.set(Seniority_96);
      Instrument_96.insert(Seniority_96.getString());
      FIX::SettlMethod SettlMethod_96('C');
      noRelatedSym_1_1_2.set(SettlMethod_96);
      Instrument_96.insert(SettlMethod_96.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_96("STRING_1447514365");
      noRelatedSym_1_1_2.set(SettleOnOpenFlag_96);
      Instrument_96.insert(SettleOnOpenFlag_96.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_96("STRING_1220365350");
      noRelatedSym_1_1_2.set(StateOrProvinceOfIssue_96);
      Instrument_96.insert(StateOrProvinceOfIssue_96.getString());
      FIX::StrikeCurrency StrikeCurrency_96("EUR");
      noRelatedSym_1_1_2.set(StrikeCurrency_96);
      Instrument_96.insert(StrikeCurrency_96.getString());
      FIX::StrikeMultiplier StrikeMultiplier_96;
      StrikeMultiplier_96.setString("2325174");
      noRelatedSym_1_1_2.set(StrikeMultiplier_96);
      Instrument_96.insert(StrikeMultiplier_96.getString());
      FIX::StrikePrice StrikePrice_96;
      StrikePrice_96.setString("6416247");
      noRelatedSym_1_1_2.set(StrikePrice_96);
      Instrument_96.insert(StrikePrice_96.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_96(5);
      noRelatedSym_1_1_2.set(StrikePriceBoundaryMethod_96);
      Instrument_96.insert(StrikePriceBoundaryMethod_96.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_96;
      StrikePriceBoundaryPrecision_96.setString("40.210000");
      noRelatedSym_1_1_2.set(StrikePriceBoundaryPrecision_96);
      Instrument_96.insert(StrikePriceBoundaryPrecision_96.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_96(1);
      noRelatedSym_1_1_2.set(StrikePriceDeterminationMethod_96);
      Instrument_96.insert(StrikePriceDeterminationMethod_96.getString());
      FIX::StrikeValue StrikeValue_96;
      StrikeValue_96.setString("16297454");
      noRelatedSym_1_1_2.set(StrikeValue_96);
      Instrument_96.insert(StrikeValue_96.getString());
      FIX::Symbol Symbol_96("STRING_1844022035");
      noRelatedSym_1_1_2.set(Symbol_96);
      Instrument_96.insert(Symbol_96.getString());
      FIX::SymbolSfx SymbolSfx_96("STRING_CD");
      noRelatedSym_1_1_2.set(SymbolSfx_96);
      Instrument_96.insert(SymbolSfx_96.getString());
      FIX::TimeUnit TimeUnit_96("STRING_Wk");
      noRelatedSym_1_1_2.set(TimeUnit_96);
      Instrument_96.insert(TimeUnit_96.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_96(2);
      noRelatedSym_1_1_2.set(UnderlyingPriceDeterminationMethod_96);
      Instrument_96.insert(UnderlyingPriceDeterminationMethod_96.getString());
      FIX::UnitOfMeasure UnitOfMeasure_96("STRING_Bu");
      noRelatedSym_1_1_2.set(UnitOfMeasure_96);
      Instrument_96.insert(UnitOfMeasure_96.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_96;
      UnitOfMeasureQty_96.setString("5191643");
      noRelatedSym_1_1_2.set(UnitOfMeasureQty_96);
      Instrument_96.insert(UnitOfMeasureQty_96.getString());
      FIX::ValuationMethod ValuationMethod_96("STRING_CDS");
      noRelatedSym_1_1_2.set(ValuationMethod_96);
      Instrument_96.insert(ValuationMethod_96.getString());
      all_values.push_back(Instrument_96);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_192;
        FIX::ComplexEventCondition ComplexEventCondition_192(1);
        noComplexEvents_1_2_2_0.set(ComplexEventCondition_192);
        ComplexEvents_NoComplexEvents_192.insert(ComplexEventCondition_192.getString());
        FIX::ComplexEventPrice ComplexEventPrice_192;
        ComplexEventPrice_192.setString("19132187");
        noComplexEvents_1_2_2_0.set(ComplexEventPrice_192);
        ComplexEvents_NoComplexEvents_192.insert(ComplexEventPrice_192.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_192(2);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryMethod_192);
        ComplexEvents_NoComplexEvents_192.insert(ComplexEventPriceBoundaryMethod_192.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_192;
        ComplexEventPriceBoundaryPrecision_192.setString("88.980000");
        noComplexEvents_1_2_2_0.set(ComplexEventPriceBoundaryPrecision_192);
        ComplexEvents_NoComplexEvents_192.insert(ComplexEventPriceBoundaryPrecision_192.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_192(1);
        noComplexEvents_1_2_2_0.set(ComplexEventPriceTimeType_192);
        ComplexEvents_NoComplexEvents_192.insert(ComplexEventPriceTimeType_192.getString());
        FIX::ComplexEventType ComplexEventType_192(2);
        noComplexEvents_1_2_2_0.set(ComplexEventType_192);
        ComplexEvents_NoComplexEvents_192.insert(ComplexEventType_192.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_192;
        ComplexOptPayoutAmount_192.setString("15756630");
        noComplexEvents_1_2_2_0.set(ComplexOptPayoutAmount_192);
        ComplexEvents_NoComplexEvents_192.insert(ComplexOptPayoutAmount_192.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_192);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_387;
          FIX::ComplexEventEndDate ComplexEventEndDate_387(FIX::UTCTIMESTAMP(7, 19, 51, 13, 9, 2003));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventEndDate_387);
          ComplexEventDates_NoComplexEventDates_387.insert(ComplexEventEndDate_387.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_387(FIX::UTCTIMESTAMP(1, 43, 47, 19, 1, 2011));
          noComplexEventDates_1_2_0_3_0.set(ComplexEventStartDate_387);
          ComplexEventDates_NoComplexEventDates_387.insert(ComplexEventStartDate_387.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_387);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_788;
            FIX::ComplexEventEndTime ComplexEventEndTime_788(FIX::UTCTIMEONLY(11, 54, 36));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventEndTime_788);
            ComplexEventTimes_NoComplexEventTimes_788.insert(ComplexEventEndTime_788.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_788(FIX::UTCTIMEONLY(16, 29, 19));
            noComplexEventTimes_1_2_0_0_4_0.set(ComplexEventStartTime_788);
            ComplexEventTimes_NoComplexEventTimes_788.insert(ComplexEventStartTime_788.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_788);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_0_3_0.addGroup(noComplexEventTimes_1_2_0_0_4_0);
          }
          noComplexEvents_1_2_2_0.addGroup(noComplexEventDates_1_2_0_3_0);
        }
        noRelatedSym_1_1_2.addGroup(noComplexEvents_1_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_193;
        FIX::ComplexEventCondition ComplexEventCondition_193(1);
        noComplexEvents_1_2_2_1.set(ComplexEventCondition_193);
        ComplexEvents_NoComplexEvents_193.insert(ComplexEventCondition_193.getString());
        FIX::ComplexEventPrice ComplexEventPrice_193;
        ComplexEventPrice_193.setString("17268517");
        noComplexEvents_1_2_2_1.set(ComplexEventPrice_193);
        ComplexEvents_NoComplexEvents_193.insert(ComplexEventPrice_193.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_193(3);
        noComplexEvents_1_2_2_1.set(ComplexEventPriceBoundaryMethod_193);
        ComplexEvents_NoComplexEvents_193.insert(ComplexEventPriceBoundaryMethod_193.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_193;
        ComplexEventPriceBoundaryPrecision_193.setString("10.340000");
        noComplexEvents_1_2_2_1.set(ComplexEventPriceBoundaryPrecision_193);
        ComplexEvents_NoComplexEvents_193.insert(ComplexEventPriceBoundaryPrecision_193.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_193(1);
        noComplexEvents_1_2_2_1.set(ComplexEventPriceTimeType_193);
        ComplexEvents_NoComplexEvents_193.insert(ComplexEventPriceTimeType_193.getString());
        FIX::ComplexEventType ComplexEventType_193(2);
        noComplexEvents_1_2_2_1.set(ComplexEventType_193);
        ComplexEvents_NoComplexEvents_193.insert(ComplexEventType_193.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_193;
        ComplexOptPayoutAmount_193.setString("8069704");
        noComplexEvents_1_2_2_1.set(ComplexOptPayoutAmount_193);
        ComplexEvents_NoComplexEvents_193.insert(ComplexOptPayoutAmount_193.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_193);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_388;
          FIX::ComplexEventEndDate ComplexEventEndDate_388(FIX::UTCTIMESTAMP(9, 45, 18, 6, 11, 2013));
          noComplexEventDates_1_2_1_3_0.set(ComplexEventEndDate_388);
          ComplexEventDates_NoComplexEventDates_388.insert(ComplexEventEndDate_388.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_388(FIX::UTCTIMESTAMP(23, 7, 4, 15, 8, 2009));
          noComplexEventDates_1_2_1_3_0.set(ComplexEventStartDate_388);
          ComplexEventDates_NoComplexEventDates_388.insert(ComplexEventStartDate_388.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_388);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_789;
            FIX::ComplexEventEndTime ComplexEventEndTime_789(FIX::UTCTIMEONLY(2, 48, 15));
            noComplexEventTimes_1_2_1_0_4_0.set(ComplexEventEndTime_789);
            ComplexEventTimes_NoComplexEventTimes_789.insert(ComplexEventEndTime_789.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_789(FIX::UTCTIMEONLY(21, 37, 7));
            noComplexEventTimes_1_2_1_0_4_0.set(ComplexEventStartTime_789);
            ComplexEventTimes_NoComplexEventTimes_789.insert(ComplexEventStartTime_789.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_789);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_790;
            FIX::ComplexEventEndTime ComplexEventEndTime_790(FIX::UTCTIMEONLY(10, 1, 32));
            noComplexEventTimes_1_2_1_0_4_1.set(ComplexEventEndTime_790);
            ComplexEventTimes_NoComplexEventTimes_790.insert(ComplexEventEndTime_790.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_790(FIX::UTCTIMEONLY(4, 38, 17));
            noComplexEventTimes_1_2_1_0_4_1.set(ComplexEventStartTime_790);
            ComplexEventTimes_NoComplexEventTimes_790.insert(ComplexEventStartTime_790.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_790);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_791;
            FIX::ComplexEventEndTime ComplexEventEndTime_791(FIX::UTCTIMEONLY(11, 2, 1));
            noComplexEventTimes_1_2_1_0_4_2.set(ComplexEventEndTime_791);
            ComplexEventTimes_NoComplexEventTimes_791.insert(ComplexEventEndTime_791.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_791(FIX::UTCTIMEONLY(12, 32, 18));
            noComplexEventTimes_1_2_1_0_4_2.set(ComplexEventStartTime_791);
            ComplexEventTimes_NoComplexEventTimes_791.insert(ComplexEventStartTime_791.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_791);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_0.addGroup(noComplexEventTimes_1_2_1_0_4_2);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_389;
          FIX::ComplexEventEndDate ComplexEventEndDate_389(FIX::UTCTIMESTAMP(3, 23, 27, 23, 3, 2005));
          noComplexEventDates_1_2_1_3_1.set(ComplexEventEndDate_389);
          ComplexEventDates_NoComplexEventDates_389.insert(ComplexEventEndDate_389.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_389(FIX::UTCTIMESTAMP(9, 10, 9, 8, 8, 2008));
          noComplexEventDates_1_2_1_3_1.set(ComplexEventStartDate_389);
          ComplexEventDates_NoComplexEventDates_389.insert(ComplexEventStartDate_389.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_389);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_792;
            FIX::ComplexEventEndTime ComplexEventEndTime_792(FIX::UTCTIMEONLY(13, 33, 52));
            noComplexEventTimes_1_2_1_1_4_0.set(ComplexEventEndTime_792);
            ComplexEventTimes_NoComplexEventTimes_792.insert(ComplexEventEndTime_792.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_792(FIX::UTCTIMEONLY(13, 30, 21));
            noComplexEventTimes_1_2_1_1_4_0.set(ComplexEventStartTime_792);
            ComplexEventTimes_NoComplexEventTimes_792.insert(ComplexEventStartTime_792.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_792);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_793;
            FIX::ComplexEventEndTime ComplexEventEndTime_793(FIX::UTCTIMEONLY(21, 15, 25));
            noComplexEventTimes_1_2_1_1_4_1.set(ComplexEventEndTime_793);
            ComplexEventTimes_NoComplexEventTimes_793.insert(ComplexEventEndTime_793.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_793(FIX::UTCTIMEONLY(8, 49, 33));
            noComplexEventTimes_1_2_1_1_4_1.set(ComplexEventStartTime_793);
            ComplexEventTimes_NoComplexEventTimes_793.insert(ComplexEventStartTime_793.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_793);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_1.addGroup(noComplexEventTimes_1_2_1_1_4_1);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_1_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_390;
          FIX::ComplexEventEndDate ComplexEventEndDate_390(FIX::UTCTIMESTAMP(9, 56, 27, 4, 3, 2006));
          noComplexEventDates_1_2_1_3_2.set(ComplexEventEndDate_390);
          ComplexEventDates_NoComplexEventDates_390.insert(ComplexEventEndDate_390.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_390(FIX::UTCTIMESTAMP(23, 50, 31, 16, 10, 2008));
          noComplexEventDates_1_2_1_3_2.set(ComplexEventStartDate_390);
          ComplexEventDates_NoComplexEventDates_390.insert(ComplexEventStartDate_390.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_390);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_794;
            FIX::ComplexEventEndTime ComplexEventEndTime_794(FIX::UTCTIMEONLY(3, 40, 34));
            noComplexEventTimes_1_2_1_2_4_0.set(ComplexEventEndTime_794);
            ComplexEventTimes_NoComplexEventTimes_794.insert(ComplexEventEndTime_794.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_794(FIX::UTCTIMEONLY(9, 57, 32));
            noComplexEventTimes_1_2_1_2_4_0.set(ComplexEventStartTime_794);
            ComplexEventTimes_NoComplexEventTimes_794.insert(ComplexEventStartTime_794.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_794);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_795;
            FIX::ComplexEventEndTime ComplexEventEndTime_795(FIX::UTCTIMEONLY(18, 39, 10));
            noComplexEventTimes_1_2_1_2_4_1.set(ComplexEventEndTime_795);
            ComplexEventTimes_NoComplexEventTimes_795.insert(ComplexEventEndTime_795.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_795(FIX::UTCTIMEONLY(23, 52, 6));
            noComplexEventTimes_1_2_1_2_4_1.set(ComplexEventStartTime_795);
            ComplexEventTimes_NoComplexEventTimes_795.insert(ComplexEventStartTime_795.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_795);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_1_3_2.addGroup(noComplexEventTimes_1_2_1_2_4_1);
          }
          noComplexEvents_1_2_2_1.addGroup(noComplexEventDates_1_2_1_3_2);
        }
        noRelatedSym_1_1_2.addGroup(noComplexEvents_1_2_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_2_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_194;
        FIX::ComplexEventCondition ComplexEventCondition_194(2);
        noComplexEvents_1_2_2_2.set(ComplexEventCondition_194);
        ComplexEvents_NoComplexEvents_194.insert(ComplexEventCondition_194.getString());
        FIX::ComplexEventPrice ComplexEventPrice_194;
        ComplexEventPrice_194.setString("18906537");
        noComplexEvents_1_2_2_2.set(ComplexEventPrice_194);
        ComplexEvents_NoComplexEvents_194.insert(ComplexEventPrice_194.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_194(5);
        noComplexEvents_1_2_2_2.set(ComplexEventPriceBoundaryMethod_194);
        ComplexEvents_NoComplexEvents_194.insert(ComplexEventPriceBoundaryMethod_194.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_194;
        ComplexEventPriceBoundaryPrecision_194.setString("53.700000");
        noComplexEvents_1_2_2_2.set(ComplexEventPriceBoundaryPrecision_194);
        ComplexEvents_NoComplexEvents_194.insert(ComplexEventPriceBoundaryPrecision_194.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_194(3);
        noComplexEvents_1_2_2_2.set(ComplexEventPriceTimeType_194);
        ComplexEvents_NoComplexEvents_194.insert(ComplexEventPriceTimeType_194.getString());
        FIX::ComplexEventType ComplexEventType_194(7);
        noComplexEvents_1_2_2_2.set(ComplexEventType_194);
        ComplexEvents_NoComplexEvents_194.insert(ComplexEventType_194.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_194;
        ComplexOptPayoutAmount_194.setString("16142220");
        noComplexEvents_1_2_2_2.set(ComplexOptPayoutAmount_194);
        ComplexEvents_NoComplexEvents_194.insert(ComplexOptPayoutAmount_194.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_194);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_391;
          FIX::ComplexEventEndDate ComplexEventEndDate_391(FIX::UTCTIMESTAMP(1, 26, 52, 3, 5, 2017));
          noComplexEventDates_1_2_2_3_0.set(ComplexEventEndDate_391);
          ComplexEventDates_NoComplexEventDates_391.insert(ComplexEventEndDate_391.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_391(FIX::UTCTIMESTAMP(11, 40, 23, 14, 6, 2008));
          noComplexEventDates_1_2_2_3_0.set(ComplexEventStartDate_391);
          ComplexEventDates_NoComplexEventDates_391.insert(ComplexEventStartDate_391.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_391);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_796;
            FIX::ComplexEventEndTime ComplexEventEndTime_796(FIX::UTCTIMEONLY(15, 58, 41));
            noComplexEventTimes_1_2_2_0_4_0.set(ComplexEventEndTime_796);
            ComplexEventTimes_NoComplexEventTimes_796.insert(ComplexEventEndTime_796.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_796(FIX::UTCTIMEONLY(13, 33, 10));
            noComplexEventTimes_1_2_2_0_4_0.set(ComplexEventStartTime_796);
            ComplexEventTimes_NoComplexEventTimes_796.insert(ComplexEventStartTime_796.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_796);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_1_2_2_3_0.addGroup(noComplexEventTimes_1_2_2_0_4_0);
          }
          noComplexEvents_1_2_2_2.addGroup(noComplexEventDates_1_2_2_3_0);
        }
        noRelatedSym_1_1_2.addGroup(noComplexEvents_1_2_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_191;
        FIX::EventDate EventDate_191("LOCALMKTDATE_1260157538");
        noEvents_1_2_2_0.set(EventDate_191);
        EvntGrp_NoEvents_191.insert(EventDate_191.getString());
        FIX::EventPx EventPx_191;
        EventPx_191.setString("19405405");
        noEvents_1_2_2_0.set(EventPx_191);
        EvntGrp_NoEvents_191.insert(EventPx_191.getString());
        FIX::EventText EventText_191("STRING_2022920915");
        noEvents_1_2_2_0.set(EventText_191);
        EvntGrp_NoEvents_191.insert(EventText_191.getString());
        FIX::EventTime EventTime_191(FIX::UTCTIMESTAMP(20, 38, 6, 8, 9, 2015));
        noEvents_1_2_2_0.set(EventTime_191);
        EvntGrp_NoEvents_191.insert(EventTime_191.getString());
        FIX::EventType EventType_191(5);
        noEvents_1_2_2_0.set(EventType_191);
        EvntGrp_NoEvents_191.insert(EventType_191.getString());
        all_values.push_back(EvntGrp_NoEvents_191);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_1_1_2.addGroup(noEvents_1_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_192;
        FIX::EventDate EventDate_192("LOCALMKTDATE_103912179");
        noEvents_1_2_2_1.set(EventDate_192);
        EvntGrp_NoEvents_192.insert(EventDate_192.getString());
        FIX::EventPx EventPx_192;
        EventPx_192.setString("14894077");
        noEvents_1_2_2_1.set(EventPx_192);
        EvntGrp_NoEvents_192.insert(EventPx_192.getString());
        FIX::EventText EventText_192("STRING_186840436");
        noEvents_1_2_2_1.set(EventText_192);
        EvntGrp_NoEvents_192.insert(EventText_192.getString());
        FIX::EventTime EventTime_192(FIX::UTCTIMESTAMP(5, 56, 51, 3, 2, 2006));
        noEvents_1_2_2_1.set(EventTime_192);
        EvntGrp_NoEvents_192.insert(EventTime_192.getString());
        FIX::EventType EventType_192(19);
        noEvents_1_2_2_1.set(EventType_192);
        EvntGrp_NoEvents_192.insert(EventType_192.getString());
        all_values.push_back(EvntGrp_NoEvents_192);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_1_1_2.addGroup(noEvents_1_2_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_2_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_193;
        FIX::EventDate EventDate_193("LOCALMKTDATE_732010460");
        noEvents_1_2_2_2.set(EventDate_193);
        EvntGrp_NoEvents_193.insert(EventDate_193.getString());
        FIX::EventPx EventPx_193;
        EventPx_193.setString("20350931");
        noEvents_1_2_2_2.set(EventPx_193);
        EvntGrp_NoEvents_193.insert(EventPx_193.getString());
        FIX::EventText EventText_193("STRING_1910847196");
        noEvents_1_2_2_2.set(EventText_193);
        EvntGrp_NoEvents_193.insert(EventText_193.getString());
        FIX::EventTime EventTime_193(FIX::UTCTIMESTAMP(7, 17, 27, 9, 3, 2012));
        noEvents_1_2_2_2.set(EventTime_193);
        EvntGrp_NoEvents_193.insert(EventTime_193.getString());
        FIX::EventType EventType_193(14);
        noEvents_1_2_2_2.set(EventType_193);
        EvntGrp_NoEvents_193.insert(EventType_193.getString());
        all_values.push_back(EvntGrp_NoEvents_193);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_1_1_2.addGroup(noEvents_1_2_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_200;
        FIX::InstrumentPartyID InstrumentPartyID_200("STRING_695825529");
        noInstrumentParties_1_2_2_0.set(InstrumentPartyID_200);
        InstrumentParties_NoInstrumentParties_200.insert(InstrumentPartyID_200.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_200('5');
        noInstrumentParties_1_2_2_0.set(InstrumentPartyIDSource_200);
        InstrumentParties_NoInstrumentParties_200.insert(InstrumentPartyIDSource_200.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_200(1465706540);
        noInstrumentParties_1_2_2_0.set(InstrumentPartyRole_200);
        InstrumentParties_NoInstrumentParties_200.insert(InstrumentPartyRole_200.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_200);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387;
          FIX::InstrumentPartySubID InstrumentPartySubID_387("STRING_1819166");
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubID_387);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387.insert(InstrumentPartySubID_387.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_387(536593604);
          noInstrumentPartySubIDs_1_2_0_3_0.set(InstrumentPartySubIDType_387);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387.insert(InstrumentPartySubIDType_387.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388;
          FIX::InstrumentPartySubID InstrumentPartySubID_388("STRING_1207302041");
          noInstrumentPartySubIDs_1_2_0_3_1.set(InstrumentPartySubID_388);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388.insert(InstrumentPartySubID_388.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_388(2144942210);
          noInstrumentPartySubIDs_1_2_0_3_1.set(InstrumentPartySubIDType_388);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388.insert(InstrumentPartySubIDType_388.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_0.addGroup(noInstrumentPartySubIDs_1_2_0_3_1);
        }
        noRelatedSym_1_1_2.addGroup(noInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_2_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_201;
        FIX::InstrumentPartyID InstrumentPartyID_201("STRING_640505783");
        noInstrumentParties_1_2_2_1.set(InstrumentPartyID_201);
        InstrumentParties_NoInstrumentParties_201.insert(InstrumentPartyID_201.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_201('5');
        noInstrumentParties_1_2_2_1.set(InstrumentPartyIDSource_201);
        InstrumentParties_NoInstrumentParties_201.insert(InstrumentPartyIDSource_201.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_201(184298998);
        noInstrumentParties_1_2_2_1.set(InstrumentPartyRole_201);
        InstrumentParties_NoInstrumentParties_201.insert(InstrumentPartyRole_201.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_201);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389;
          FIX::InstrumentPartySubID InstrumentPartySubID_389("STRING_486488567");
          noInstrumentPartySubIDs_1_2_1_3_0.set(InstrumentPartySubID_389);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389.insert(InstrumentPartySubID_389.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_389(1999585974);
          noInstrumentPartySubIDs_1_2_1_3_0.set(InstrumentPartySubIDType_389);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389.insert(InstrumentPartySubIDType_389.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_1.addGroup(noInstrumentPartySubIDs_1_2_1_3_0);
        }
        noRelatedSym_1_1_2.addGroup(noInstrumentParties_1_2_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_2_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_202;
        FIX::InstrumentPartyID InstrumentPartyID_202("STRING_87023023");
        noInstrumentParties_1_2_2_2.set(InstrumentPartyID_202);
        InstrumentParties_NoInstrumentParties_202.insert(InstrumentPartyID_202.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_202('8');
        noInstrumentParties_1_2_2_2.set(InstrumentPartyIDSource_202);
        InstrumentParties_NoInstrumentParties_202.insert(InstrumentPartyIDSource_202.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_202(1890276036);
        noInstrumentParties_1_2_2_2.set(InstrumentPartyRole_202);
        InstrumentParties_NoInstrumentParties_202.insert(InstrumentPartyRole_202.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_202);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390;
          FIX::InstrumentPartySubID InstrumentPartySubID_390("STRING_973353133");
          noInstrumentPartySubIDs_1_2_2_3_0.set(InstrumentPartySubID_390);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390.insert(InstrumentPartySubID_390.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_390(474802848);
          noInstrumentPartySubIDs_1_2_2_3_0.set(InstrumentPartySubIDType_390);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390.insert(InstrumentPartySubIDType_390.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_2.addGroup(noInstrumentPartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391;
          FIX::InstrumentPartySubID InstrumentPartySubID_391("STRING_694923878");
          noInstrumentPartySubIDs_1_2_2_3_1.set(InstrumentPartySubID_391);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391.insert(InstrumentPartySubID_391.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_391(736716681);
          noInstrumentPartySubIDs_1_2_2_3_1.set(InstrumentPartySubIDType_391);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391.insert(InstrumentPartySubIDType_391.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_1_2_2_2.addGroup(noInstrumentPartySubIDs_1_2_2_3_1);
        }
        noRelatedSym_1_1_2.addGroup(noInstrumentParties_1_2_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_178;
        FIX::SecurityAltID SecurityAltID_178("STRING_118371085");
        noSecurityAltID_1_2_2_0.set(SecurityAltID_178);
        SecAltIDGrp_NoSecurityAltID_178.insert(SecurityAltID_178.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_178("STRING_722861130");
        noSecurityAltID_1_2_2_0.set(SecurityAltIDSource_178);
        SecAltIDGrp_NoSecurityAltID_178.insert(SecurityAltIDSource_178.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_178);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_1_1_2.addGroup(noSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_179;
        FIX::SecurityAltID SecurityAltID_179("STRING_449115070");
        noSecurityAltID_1_2_2_1.set(SecurityAltID_179);
        SecAltIDGrp_NoSecurityAltID_179.insert(SecurityAltID_179.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_179("STRING_335996782");
        noSecurityAltID_1_2_2_1.set(SecurityAltIDSource_179);
        SecAltIDGrp_NoSecurityAltID_179.insert(SecurityAltIDSource_179.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_179);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_1_1_2.addGroup(noSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_2_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_180;
        FIX::SecurityAltID SecurityAltID_180("STRING_823471125");
        noSecurityAltID_1_2_2_2.set(SecurityAltID_180);
        SecAltIDGrp_NoSecurityAltID_180.insert(SecurityAltID_180.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_180("STRING_307438808");
        noSecurityAltID_1_2_2_2.set(SecurityAltIDSource_180);
        SecAltIDGrp_NoSecurityAltID_180.insert(SecurityAltIDSource_180.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_180);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_1_1_2.addGroup(noSecurityAltID_1_2_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_192;
      FIX::SecurityXML SecurityXML_193("XMLDATA_346679415");
      noRelatedSym_1_1_2.set(SecurityXML_193);
      FIX::SecurityXMLLen SecurityXMLLen_96(799518387);
      noRelatedSym_1_1_2.set(SecurityXMLLen_96);
      FIX::SecurityXMLSchema SecurityXMLSchema_96("STRING_1003264337");
      noRelatedSym_1_1_2.set(SecurityXMLSchema_96);
      SecurityXML_192.insert(SecurityXMLSchema_96.getString());
      all_values.push_back(SecurityXML_192);
      all_compo_names.insert("SecurityXML");

      noAsgnReqs_0_1.addGroup(noRelatedSym_1_1_2);
    }
    msg.addGroup(noAsgnReqs_0_1);
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
