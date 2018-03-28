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
  FIX::StreamAsgnReqID StreamAsgnReqID_0("STRING_1545178020");
  msg.set(StreamAsgnReqID_0);
  StreamAssignmentReport_0.insert(StreamAsgnReqID_0.getString());
  FIX::StreamAsgnReqType StreamAsgnReqType_0(2);
  msg.set(StreamAsgnReqType_0);
  StreamAssignmentReport_0.insert(StreamAsgnReqType_0.getString());
  FIX::StreamAsgnRptID StreamAsgnRptID_0("STRING_210025871");
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
      FIX::PartyID PartyID_143("STRING_118693");
      noPartyIDs_0_1_0.set(PartyID_143);
      Parties_NoPartyIDs_143.insert(PartyID_143.getString());
      FIX::PartyIDSource PartyIDSource_143('5');
      noPartyIDs_0_1_0.set(PartyIDSource_143);
      Parties_NoPartyIDs_143.insert(PartyIDSource_143.getString());
      FIX::PartyRole PartyRole_143(7);
      noPartyIDs_0_1_0.set(PartyRole_143);
      Parties_NoPartyIDs_143.insert(PartyRole_143.getString());
      all_values.push_back(Parties_NoPartyIDs_143);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_287;
        FIX::PartySubID PartySubID_287("STRING_1671358771");
        noPartySubIDs_0_0_2_0.set(PartySubID_287);
        PtysSubGrp_NoPartySubIDs_287.insert(PartySubID_287.getString());
        FIX::PartySubIDType PartySubIDType_287(7);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_287);
        PtysSubGrp_NoPartySubIDs_287.insert(PartySubIDType_287.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_287);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_288;
        FIX::PartySubID PartySubID_288("STRING_1546873320");
        noPartySubIDs_0_0_2_1.set(PartySubID_288);
        PtysSubGrp_NoPartySubIDs_288.insert(PartySubID_288.getString());
        FIX::PartySubIDType PartySubIDType_288(10);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_288);
        PtysSubGrp_NoPartySubIDs_288.insert(PartySubIDType_288.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_288);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_289;
        FIX::PartySubID PartySubID_289("STRING_126025862");
        noPartySubIDs_0_0_2_2.set(PartySubID_289);
        PtysSubGrp_NoPartySubIDs_289.insert(PartySubID_289.getString());
        FIX::PartySubIDType PartySubIDType_289(4);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_289);
        PtysSubGrp_NoPartySubIDs_289.insert(PartySubIDType_289.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_289);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_144;
      FIX::PartyID PartyID_144("STRING_1717664144");
      noPartyIDs_0_1_1.set(PartyID_144);
      Parties_NoPartyIDs_144.insert(PartyID_144.getString());
      FIX::PartyIDSource PartyIDSource_144('G');
      noPartyIDs_0_1_1.set(PartyIDSource_144);
      Parties_NoPartyIDs_144.insert(PartyIDSource_144.getString());
      FIX::PartyRole PartyRole_144(24);
      noPartyIDs_0_1_1.set(PartyRole_144);
      Parties_NoPartyIDs_144.insert(PartyRole_144.getString());
      all_values.push_back(Parties_NoPartyIDs_144);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_290;
        FIX::PartySubID PartySubID_290("STRING_1844241410");
        noPartySubIDs_0_1_2_0.set(PartySubID_290);
        PtysSubGrp_NoPartySubIDs_290.insert(PartySubID_290.getString());
        FIX::PartySubIDType PartySubIDType_290(12);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_290);
        PtysSubGrp_NoPartySubIDs_290.insert(PartySubIDType_290.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_290);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_145;
      FIX::PartyID PartyID_145("STRING_1530375395");
      noPartyIDs_0_1_2.set(PartyID_145);
      Parties_NoPartyIDs_145.insert(PartyID_145.getString());
      FIX::PartyIDSource PartyIDSource_145('C');
      noPartyIDs_0_1_2.set(PartyIDSource_145);
      Parties_NoPartyIDs_145.insert(PartyIDSource_145.getString());
      FIX::PartyRole PartyRole_145(3);
      noPartyIDs_0_1_2.set(PartyRole_145);
      Parties_NoPartyIDs_145.insert(PartyRole_145.getString());
      all_values.push_back(Parties_NoPartyIDs_145);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_291;
        FIX::PartySubID PartySubID_291("STRING_1990332062");
        noPartySubIDs_0_2_2_0.set(PartySubID_291);
        PtysSubGrp_NoPartySubIDs_291.insert(PartySubID_291.getString());
        FIX::PartySubIDType PartySubIDType_291(21);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_291);
        PtysSubGrp_NoPartySubIDs_291.insert(PartySubIDType_291.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_291);

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_0;
      FIX::EncodedText EncodedText_97("DATA_1213415181");
      noRelatedSym_0_1_0.set(EncodedText_97);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(EncodedText_97.getString());
      FIX::EncodedTextLen EncodedTextLen_97(1653808033);
      noRelatedSym_0_1_0.set(EncodedTextLen_97);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(EncodedTextLen_97.getString());
      FIX::MDStreamID MDStreamID_5("STRING_1231076764");
      noRelatedSym_0_1_0.set(MDStreamID_5);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(MDStreamID_5.getString());
      FIX::SettlType SettlType_31("STRING_2");
      noRelatedSym_0_1_0.set(SettlType_31);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(SettlType_31.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_0(1);
      noRelatedSym_0_1_0.set(StreamAsgnRejReason_0);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(StreamAsgnRejReason_0.getString());
      FIX::StreamAsgnType StreamAsgnType_0(1);
      noRelatedSym_0_1_0.set(StreamAsgnType_0);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(StreamAsgnType_0.getString());
      FIX::Text Text_97("STRING_444724099");
      noRelatedSym_0_1_0.set(Text_97);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(Text_97.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_0);

      // Instrument
      multiset<string> Instrument_84;
      FIX::AttachmentPoint AttachmentPoint_84;
      AttachmentPoint_84.setString("25.160000");
      noRelatedSym_0_1_0.set(AttachmentPoint_84);
      Instrument_84.insert(AttachmentPoint_84.getString());
      FIX::CFICode CFICode_89("STRING_1441221328");
      noRelatedSym_0_1_0.set(CFICode_89);
      Instrument_84.insert(CFICode_89.getString());
      FIX::CPProgram CPProgram_84(2);
      noRelatedSym_0_1_0.set(CPProgram_84);
      Instrument_84.insert(CPProgram_84.getString());
      FIX::CPRegType CPRegType_84("STRING_1662625730");
      noRelatedSym_0_1_0.set(CPRegType_84);
      Instrument_84.insert(CPRegType_84.getString());
      FIX::CapPrice CapPrice_84;
      CapPrice_84.setString("17556744");
      noRelatedSym_0_1_0.set(CapPrice_84);
      Instrument_84.insert(CapPrice_84.getString());
      FIX::ContractMultiplier ContractMultiplier_84;
      ContractMultiplier_84.setString("10789281");
      noRelatedSym_0_1_0.set(ContractMultiplier_84);
      Instrument_84.insert(ContractMultiplier_84.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_84(1);
      noRelatedSym_0_1_0.set(ContractMultiplierUnit_84);
      Instrument_84.insert(ContractMultiplierUnit_84.getString());
      FIX::ContractSettlMonth ContractSettlMonth_84("MONTHYEAR_1155064148");
      noRelatedSym_0_1_0.set(ContractSettlMonth_84);
      Instrument_84.insert(ContractSettlMonth_84.getString());
      FIX::CountryOfIssue CountryOfIssue_84("COUNTRY_372259775");
      noRelatedSym_0_1_0.set(CountryOfIssue_84);
      Instrument_84.insert(CountryOfIssue_84.getString());
      FIX::CouponPaymentDate CouponPaymentDate_84("LOCALMKTDATE_1466887737");
      noRelatedSym_0_1_0.set(CouponPaymentDate_84);
      Instrument_84.insert(CouponPaymentDate_84.getString());
      FIX::CouponRate CouponRate_84;
      CouponRate_84.setString("90.560000");
      noRelatedSym_0_1_0.set(CouponRate_84);
      Instrument_84.insert(CouponRate_84.getString());
      FIX::CreditRating CreditRating_84("STRING_2089923919");
      noRelatedSym_0_1_0.set(CreditRating_84);
      Instrument_84.insert(CreditRating_84.getString());
      FIX::DatedDate DatedDate_84("LOCALMKTDATE_1179559025");
      noRelatedSym_0_1_0.set(DatedDate_84);
      Instrument_84.insert(DatedDate_84.getString());
      FIX::DetachmentPoint DetachmentPoint_84;
      DetachmentPoint_84.setString("51.220000");
      noRelatedSym_0_1_0.set(DetachmentPoint_84);
      Instrument_84.insert(DetachmentPoint_84.getString());
      FIX::EncodedIssuer EncodedIssuer_84("DATA_761030439");
      noRelatedSym_0_1_0.set(EncodedIssuer_84);
      Instrument_84.insert(EncodedIssuer_84.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_84(876316787);
      noRelatedSym_0_1_0.set(EncodedIssuerLen_84);
      Instrument_84.insert(EncodedIssuerLen_84.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_84("DATA_105095086");
      noRelatedSym_0_1_0.set(EncodedSecurityDesc_84);
      Instrument_84.insert(EncodedSecurityDesc_84.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_84(143922186);
      noRelatedSym_0_1_0.set(EncodedSecurityDescLen_84);
      Instrument_84.insert(EncodedSecurityDescLen_84.getString());
      FIX::ExerciseStyle ExerciseStyle_84(0);
      noRelatedSym_0_1_0.set(ExerciseStyle_84);
      Instrument_84.insert(ExerciseStyle_84.getString());
      FIX::Factor Factor_84;
      Factor_84.setString("19113448");
      noRelatedSym_0_1_0.set(Factor_84);
      Instrument_84.insert(Factor_84.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_84(true);
      noRelatedSym_0_1_0.set(FlexProductEligibilityIndicator_84);
      Instrument_84.insert(FlexProductEligibilityIndicator_84.getString());
      FIX::FlexibleIndicator FlexibleIndicator_84(true);
      noRelatedSym_0_1_0.set(FlexibleIndicator_84);
      Instrument_84.insert(FlexibleIndicator_84.getString());
      FIX::FloorPrice FloorPrice_84;
      FloorPrice_84.setString("349664");
      noRelatedSym_0_1_0.set(FloorPrice_84);
      Instrument_84.insert(FloorPrice_84.getString());
      FIX::FlowScheduleType FlowScheduleType_84(1);
      noRelatedSym_0_1_0.set(FlowScheduleType_84);
      Instrument_84.insert(FlowScheduleType_84.getString());
      FIX::InstrRegistry InstrRegistry_84("STRING_245385674");
      noRelatedSym_0_1_0.set(InstrRegistry_84);
      Instrument_84.insert(InstrRegistry_84.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_84('1');
      noRelatedSym_0_1_0.set(InstrmtAssignmentMethod_84);
      Instrument_84.insert(InstrmtAssignmentMethod_84.getString());
      FIX::InterestAccrualDate InterestAccrualDate_84("LOCALMKTDATE_2085960635");
      noRelatedSym_0_1_0.set(InterestAccrualDate_84);
      Instrument_84.insert(InterestAccrualDate_84.getString());
      FIX::IssueDate IssueDate_84("LOCALMKTDATE_856495228");
      noRelatedSym_0_1_0.set(IssueDate_84);
      Instrument_84.insert(IssueDate_84.getString());
      FIX::Issuer Issuer_84("STRING_1967936137");
      noRelatedSym_0_1_0.set(Issuer_84);
      Instrument_84.insert(Issuer_84.getString());
      FIX::ListMethod ListMethod_84(1);
      noRelatedSym_0_1_0.set(ListMethod_84);
      Instrument_84.insert(ListMethod_84.getString());
      FIX::LocaleOfIssue LocaleOfIssue_84("STRING_1301219327");
      noRelatedSym_0_1_0.set(LocaleOfIssue_84);
      Instrument_84.insert(LocaleOfIssue_84.getString());
      FIX::MaturityDate MaturityDate_84("LOCALMKTDATE_243275005");
      noRelatedSym_0_1_0.set(MaturityDate_84);
      Instrument_84.insert(MaturityDate_84.getString());
      FIX::MaturityMonthYear MaturityMonthYear_84("MONTHYEAR_673317303");
      noRelatedSym_0_1_0.set(MaturityMonthYear_84);
      Instrument_84.insert(MaturityMonthYear_84.getString());
      FIX::MaturityTime MaturityTime_84("TZTIMEONLY_708788725");
      noRelatedSym_0_1_0.set(MaturityTime_84);
      Instrument_84.insert(MaturityTime_84.getString());
      FIX::MinPriceIncrement MinPriceIncrement_84;
      MinPriceIncrement_84.setString("19059007");
      noRelatedSym_0_1_0.set(MinPriceIncrement_84);
      Instrument_84.insert(MinPriceIncrement_84.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_84;
      MinPriceIncrementAmount_84.setString("2815081");
      noRelatedSym_0_1_0.set(MinPriceIncrementAmount_84);
      Instrument_84.insert(MinPriceIncrementAmount_84.getString());
      FIX::NTPositionLimit NTPositionLimit_84(1787716895);
      noRelatedSym_0_1_0.set(NTPositionLimit_84);
      Instrument_84.insert(NTPositionLimit_84.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_84;
      NotionalPercentageOutstanding_84.setString("89.630000");
      noRelatedSym_0_1_0.set(NotionalPercentageOutstanding_84);
      Instrument_84.insert(NotionalPercentageOutstanding_84.getString());
      FIX::OptAttribute OptAttribute_84('1');
      noRelatedSym_0_1_0.set(OptAttribute_84);
      Instrument_84.insert(OptAttribute_84.getString());
      FIX::OptPayoutAmount OptPayoutAmount_84;
      OptPayoutAmount_84.setString("124930");
      noRelatedSym_0_1_0.set(OptPayoutAmount_84);
      Instrument_84.insert(OptPayoutAmount_84.getString());
      FIX::OptPayoutType OptPayoutType_84(2);
      noRelatedSym_0_1_0.set(OptPayoutType_84);
      Instrument_84.insert(OptPayoutType_84.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_84;
      OriginalNotionalPercentageOutstanding_84.setString("76.870000");
      noRelatedSym_0_1_0.set(OriginalNotionalPercentageOutstanding_84);
      Instrument_84.insert(OriginalNotionalPercentageOutstanding_84.getString());
      FIX::Pool Pool_84("STRING_2102416942");
      noRelatedSym_0_1_0.set(Pool_84);
      Instrument_84.insert(Pool_84.getString());
      FIX::PositionLimit PositionLimit_84(1598242077);
      noRelatedSym_0_1_0.set(PositionLimit_84);
      Instrument_84.insert(PositionLimit_84.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_84("STRING_INX");
      noRelatedSym_0_1_0.set(PriceQuoteMethod_84);
      Instrument_84.insert(PriceQuoteMethod_84.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_84("STRING_715963733");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasure_84);
      Instrument_84.insert(PriceUnitOfMeasure_84.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_84;
      PriceUnitOfMeasureQty_84.setString("3270752");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasureQty_84);
      Instrument_84.insert(PriceUnitOfMeasureQty_84.getString());
      FIX::Product Product_92(9);
      noRelatedSym_0_1_0.set(Product_92);
      Instrument_84.insert(Product_92.getString());
      FIX::ProductComplex ProductComplex_84("STRING_859885919");
      noRelatedSym_0_1_0.set(ProductComplex_84);
      Instrument_84.insert(ProductComplex_84.getString());
      FIX::PutOrCall PutOrCall_84(1);
      noRelatedSym_0_1_0.set(PutOrCall_84);
      Instrument_84.insert(PutOrCall_84.getString());
      FIX::RedemptionDate RedemptionDate_84("LOCALMKTDATE_330575420");
      noRelatedSym_0_1_0.set(RedemptionDate_84);
      Instrument_84.insert(RedemptionDate_84.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_84("STRING_1289035380");
      noRelatedSym_0_1_0.set(RepoCollateralSecurityType_84);
      Instrument_84.insert(RepoCollateralSecurityType_84.getString());
      FIX::RepurchaseRate RepurchaseRate_84;
      RepurchaseRate_84.setString("14.350000");
      noRelatedSym_0_1_0.set(RepurchaseRate_84);
      Instrument_84.insert(RepurchaseRate_84.getString());
      FIX::RepurchaseTerm RepurchaseTerm_84(365541908);
      noRelatedSym_0_1_0.set(RepurchaseTerm_84);
      Instrument_84.insert(RepurchaseTerm_84.getString());
      FIX::RestructuringType RestructuringType_84("STRING_XR");
      noRelatedSym_0_1_0.set(RestructuringType_84);
      Instrument_84.insert(RestructuringType_84.getString());
      FIX::SecurityDesc SecurityDesc_84("STRING_941037109");
      noRelatedSym_0_1_0.set(SecurityDesc_84);
      Instrument_84.insert(SecurityDesc_84.getString());
      FIX::SecurityExchange SecurityExchange_84("EXCHANGE_2054316430");
      noRelatedSym_0_1_0.set(SecurityExchange_84);
      Instrument_84.insert(SecurityExchange_84.getString());
      FIX::SecurityGroup SecurityGroup_84("STRING_2082396238");
      noRelatedSym_0_1_0.set(SecurityGroup_84);
      Instrument_84.insert(SecurityGroup_84.getString());
      FIX::SecurityID SecurityID_84("STRING_1797532337");
      noRelatedSym_0_1_0.set(SecurityID_84);
      Instrument_84.insert(SecurityID_84.getString());
      FIX::SecurityIDSource SecurityIDSource_84("STRING_2");
      noRelatedSym_0_1_0.set(SecurityIDSource_84);
      Instrument_84.insert(SecurityIDSource_84.getString());
      FIX::SecurityStatus SecurityStatus_85("STRING_2");
      noRelatedSym_0_1_0.set(SecurityStatus_85);
      Instrument_84.insert(SecurityStatus_85.getString());
      FIX::SecuritySubType SecuritySubType_88("STRING_951268016");
      noRelatedSym_0_1_0.set(SecuritySubType_88);
      Instrument_84.insert(SecuritySubType_88.getString());
      FIX::SecurityType SecurityType_92("STRING_COFO");
      noRelatedSym_0_1_0.set(SecurityType_92);
      Instrument_84.insert(SecurityType_92.getString());
      FIX::Seniority Seniority_84("STRING_SR");
      noRelatedSym_0_1_0.set(Seniority_84);
      Instrument_84.insert(Seniority_84.getString());
      FIX::SettlMethod SettlMethod_84('C');
      noRelatedSym_0_1_0.set(SettlMethod_84);
      Instrument_84.insert(SettlMethod_84.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_84("STRING_1876461013");
      noRelatedSym_0_1_0.set(SettleOnOpenFlag_84);
      Instrument_84.insert(SettleOnOpenFlag_84.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_84("STRING_121834000");
      noRelatedSym_0_1_0.set(StateOrProvinceOfIssue_84);
      Instrument_84.insert(StateOrProvinceOfIssue_84.getString());
      FIX::StrikeCurrency StrikeCurrency_84("GBP");
      noRelatedSym_0_1_0.set(StrikeCurrency_84);
      Instrument_84.insert(StrikeCurrency_84.getString());
      FIX::StrikeMultiplier StrikeMultiplier_84;
      StrikeMultiplier_84.setString("15584062");
      noRelatedSym_0_1_0.set(StrikeMultiplier_84);
      Instrument_84.insert(StrikeMultiplier_84.getString());
      FIX::StrikePrice StrikePrice_84;
      StrikePrice_84.setString("13127830");
      noRelatedSym_0_1_0.set(StrikePrice_84);
      Instrument_84.insert(StrikePrice_84.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_84(1);
      noRelatedSym_0_1_0.set(StrikePriceBoundaryMethod_84);
      Instrument_84.insert(StrikePriceBoundaryMethod_84.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_84;
      StrikePriceBoundaryPrecision_84.setString("39.660000");
      noRelatedSym_0_1_0.set(StrikePriceBoundaryPrecision_84);
      Instrument_84.insert(StrikePriceBoundaryPrecision_84.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_84(3);
      noRelatedSym_0_1_0.set(StrikePriceDeterminationMethod_84);
      Instrument_84.insert(StrikePriceDeterminationMethod_84.getString());
      FIX::StrikeValue StrikeValue_84;
      StrikeValue_84.setString("6976978");
      noRelatedSym_0_1_0.set(StrikeValue_84);
      Instrument_84.insert(StrikeValue_84.getString());
      FIX::Symbol Symbol_84("STRING_459379479");
      noRelatedSym_0_1_0.set(Symbol_84);
      Instrument_84.insert(Symbol_84.getString());
      FIX::SymbolSfx SymbolSfx_84("STRING_WI");
      noRelatedSym_0_1_0.set(SymbolSfx_84);
      Instrument_84.insert(SymbolSfx_84.getString());
      FIX::TimeUnit TimeUnit_84("STRING_Wk");
      noRelatedSym_0_1_0.set(TimeUnit_84);
      Instrument_84.insert(TimeUnit_84.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_84(4);
      noRelatedSym_0_1_0.set(UnderlyingPriceDeterminationMethod_84);
      Instrument_84.insert(UnderlyingPriceDeterminationMethod_84.getString());
      FIX::UnitOfMeasure UnitOfMeasure_84("STRING_MMbbl");
      noRelatedSym_0_1_0.set(UnitOfMeasure_84);
      Instrument_84.insert(UnitOfMeasure_84.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_84;
      UnitOfMeasureQty_84.setString("5409703");
      noRelatedSym_0_1_0.set(UnitOfMeasureQty_84);
      Instrument_84.insert(UnitOfMeasureQty_84.getString());
      FIX::ValuationMethod ValuationMethod_84("STRING_FUTDA");
      noRelatedSym_0_1_0.set(ValuationMethod_84);
      Instrument_84.insert(ValuationMethod_84.getString());
      all_values.push_back(Instrument_84);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_160;
        FIX::ComplexEventCondition ComplexEventCondition_160(2);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventCondition_160.getString());
        FIX::ComplexEventPrice ComplexEventPrice_160;
        ComplexEventPrice_160.setString("17222110");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventPrice_160.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_160(4);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceBoundaryMethod_160.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_160;
        ComplexEventPriceBoundaryPrecision_160.setString("52.180000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceBoundaryPrecision_160.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_160(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventPriceTimeType_160.getString());
        FIX::ComplexEventType ComplexEventType_160(8);
        noComplexEvents_0_0_2_0.set(ComplexEventType_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexEventType_160.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_160;
        ComplexOptPayoutAmount_160.setString("18277075");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_160);
        ComplexEvents_NoComplexEvents_160.insert(ComplexOptPayoutAmount_160.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_160);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_328;
          FIX::ComplexEventEndDate ComplexEventEndDate_328(FIX::UTCTIMESTAMP(12, 6, 58, 6, 12, 2008));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_328);
          ComplexEventDates_NoComplexEventDates_328.insert(ComplexEventEndDate_328.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_328(FIX::UTCTIMESTAMP(7, 29, 12, 19, 4, 2000));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_328);
          ComplexEventDates_NoComplexEventDates_328.insert(ComplexEventStartDate_328.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_328);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_668;
            FIX::ComplexEventEndTime ComplexEventEndTime_668(FIX::UTCTIMEONLY(21, 19, 14));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_668);
            ComplexEventTimes_NoComplexEventTimes_668.insert(ComplexEventEndTime_668.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_668(FIX::UTCTIMEONLY(8, 33, 34));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_668);
            ComplexEventTimes_NoComplexEventTimes_668.insert(ComplexEventStartTime_668.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_668);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_161;
        FIX::ComplexEventCondition ComplexEventCondition_161(2);
        noComplexEvents_0_0_2_1.set(ComplexEventCondition_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventCondition_161.getString());
        FIX::ComplexEventPrice ComplexEventPrice_161;
        ComplexEventPrice_161.setString("7237033");
        noComplexEvents_0_0_2_1.set(ComplexEventPrice_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventPrice_161.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_161(3);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryMethod_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceBoundaryMethod_161.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_161;
        ComplexEventPriceBoundaryPrecision_161.setString("96.480000");
        noComplexEvents_0_0_2_1.set(ComplexEventPriceBoundaryPrecision_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceBoundaryPrecision_161.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_161(1);
        noComplexEvents_0_0_2_1.set(ComplexEventPriceTimeType_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventPriceTimeType_161.getString());
        FIX::ComplexEventType ComplexEventType_161(5);
        noComplexEvents_0_0_2_1.set(ComplexEventType_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexEventType_161.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_161;
        ComplexOptPayoutAmount_161.setString("20465572");
        noComplexEvents_0_0_2_1.set(ComplexOptPayoutAmount_161);
        ComplexEvents_NoComplexEvents_161.insert(ComplexOptPayoutAmount_161.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_161);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_329;
          FIX::ComplexEventEndDate ComplexEventEndDate_329(FIX::UTCTIMESTAMP(0, 37, 3, 11, 1, 2016));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventEndDate_329);
          ComplexEventDates_NoComplexEventDates_329.insert(ComplexEventEndDate_329.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_329(FIX::UTCTIMESTAMP(23, 3, 11, 14, 8, 2003));
          noComplexEventDates_0_0_1_3_0.set(ComplexEventStartDate_329);
          ComplexEventDates_NoComplexEventDates_329.insert(ComplexEventStartDate_329.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_329);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_669;
            FIX::ComplexEventEndTime ComplexEventEndTime_669(FIX::UTCTIMEONLY(18, 13, 36));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventEndTime_669);
            ComplexEventTimes_NoComplexEventTimes_669.insert(ComplexEventEndTime_669.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_669(FIX::UTCTIMEONLY(22, 9, 47));
            noComplexEventTimes_0_0_1_0_4_0.set(ComplexEventStartTime_669);
            ComplexEventTimes_NoComplexEventTimes_669.insert(ComplexEventStartTime_669.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_669);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_670;
            FIX::ComplexEventEndTime ComplexEventEndTime_670(FIX::UTCTIMEONLY(21, 27, 31));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventEndTime_670);
            ComplexEventTimes_NoComplexEventTimes_670.insert(ComplexEventEndTime_670.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_670(FIX::UTCTIMEONLY(22, 7, 10));
            noComplexEventTimes_0_0_1_0_4_1.set(ComplexEventStartTime_670);
            ComplexEventTimes_NoComplexEventTimes_670.insert(ComplexEventStartTime_670.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_670);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_671;
            FIX::ComplexEventEndTime ComplexEventEndTime_671(FIX::UTCTIMEONLY(0, 39, 3));
            noComplexEventTimes_0_0_1_0_4_2.set(ComplexEventEndTime_671);
            ComplexEventTimes_NoComplexEventTimes_671.insert(ComplexEventEndTime_671.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_671(FIX::UTCTIMEONLY(15, 37, 38));
            noComplexEventTimes_0_0_1_0_4_2.set(ComplexEventStartTime_671);
            ComplexEventTimes_NoComplexEventTimes_671.insert(ComplexEventStartTime_671.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_671);

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_2);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_162;
        FIX::ComplexEventCondition ComplexEventCondition_162(1);
        noComplexEvents_0_0_2_2.set(ComplexEventCondition_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventCondition_162.getString());
        FIX::ComplexEventPrice ComplexEventPrice_162;
        ComplexEventPrice_162.setString("18978932");
        noComplexEvents_0_0_2_2.set(ComplexEventPrice_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventPrice_162.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_162(5);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryMethod_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceBoundaryMethod_162.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_162;
        ComplexEventPriceBoundaryPrecision_162.setString("38.400000");
        noComplexEvents_0_0_2_2.set(ComplexEventPriceBoundaryPrecision_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceBoundaryPrecision_162.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_162(1);
        noComplexEvents_0_0_2_2.set(ComplexEventPriceTimeType_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventPriceTimeType_162.getString());
        FIX::ComplexEventType ComplexEventType_162(2);
        noComplexEvents_0_0_2_2.set(ComplexEventType_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexEventType_162.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_162;
        ComplexOptPayoutAmount_162.setString("16191165");
        noComplexEvents_0_0_2_2.set(ComplexOptPayoutAmount_162);
        ComplexEvents_NoComplexEvents_162.insert(ComplexOptPayoutAmount_162.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_162);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_330;
          FIX::ComplexEventEndDate ComplexEventEndDate_330(FIX::UTCTIMESTAMP(4, 9, 45, 2, 11, 2015));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventEndDate_330);
          ComplexEventDates_NoComplexEventDates_330.insert(ComplexEventEndDate_330.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_330(FIX::UTCTIMESTAMP(12, 52, 33, 11, 3, 2009));
          noComplexEventDates_0_0_2_3_0.set(ComplexEventStartDate_330);
          ComplexEventDates_NoComplexEventDates_330.insert(ComplexEventStartDate_330.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_330);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_672;
            FIX::ComplexEventEndTime ComplexEventEndTime_672(FIX::UTCTIMEONLY(9, 25, 5));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventEndTime_672);
            ComplexEventTimes_NoComplexEventTimes_672.insert(ComplexEventEndTime_672.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_672(FIX::UTCTIMEONLY(17, 42, 42));
            noComplexEventTimes_0_0_2_0_4_0.set(ComplexEventStartTime_672);
            ComplexEventTimes_NoComplexEventTimes_672.insert(ComplexEventStartTime_672.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_672);

            noComplexEventDates_0_0_2_3_0.addGroup(noComplexEventTimes_0_0_2_0_4_0);
          }
          noComplexEvents_0_0_2_2.addGroup(noComplexEventDates_0_0_2_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_166;
        FIX::EventDate EventDate_166("LOCALMKTDATE_1416699254");
        noEvents_0_0_2_0.set(EventDate_166);
        EvntGrp_NoEvents_166.insert(EventDate_166.getString());
        FIX::EventPx EventPx_166;
        EventPx_166.setString("20451829");
        noEvents_0_0_2_0.set(EventPx_166);
        EvntGrp_NoEvents_166.insert(EventPx_166.getString());
        FIX::EventText EventText_166("STRING_835218856");
        noEvents_0_0_2_0.set(EventText_166);
        EvntGrp_NoEvents_166.insert(EventText_166.getString());
        FIX::EventTime EventTime_166(FIX::UTCTIMESTAMP(9, 23, 43, 25, 8, 2015));
        noEvents_0_0_2_0.set(EventTime_166);
        EvntGrp_NoEvents_166.insert(EventTime_166.getString());
        FIX::EventType EventType_166(15);
        noEvents_0_0_2_0.set(EventType_166);
        EvntGrp_NoEvents_166.insert(EventType_166.getString());
        all_values.push_back(EvntGrp_NoEvents_166);

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_162;
        FIX::InstrumentPartyID InstrumentPartyID_162("STRING_143091347");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_162);
        InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyID_162.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_162('7');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_162);
        InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyIDSource_162.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_162(685819060);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_162);
        InstrumentParties_NoInstrumentParties_162.insert(InstrumentPartyRole_162.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_162);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329;
          FIX::InstrumentPartySubID InstrumentPartySubID_329("STRING_832826511");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_329);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329.insert(InstrumentPartySubID_329.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_329(1605127093);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_329);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329.insert(InstrumentPartySubIDType_329.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330;
          FIX::InstrumentPartySubID InstrumentPartySubID_330("STRING_1180476043");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_330);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330.insert(InstrumentPartySubID_330.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_330(779135386);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_330);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330.insert(InstrumentPartySubIDType_330.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331;
          FIX::InstrumentPartySubID InstrumentPartySubID_331("STRING_97560518");
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubID_331);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331.insert(InstrumentPartySubID_331.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_331(1125473189);
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubIDType_331);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331.insert(InstrumentPartySubIDType_331.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_163;
        FIX::InstrumentPartyID InstrumentPartyID_163("STRING_1387583628");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_163);
        InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyID_163.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_163('9');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_163);
        InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyIDSource_163.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_163(1233708294);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_163);
        InstrumentParties_NoInstrumentParties_163.insert(InstrumentPartyRole_163.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_163);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332;
          FIX::InstrumentPartySubID InstrumentPartySubID_332("STRING_658065075");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_332);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332.insert(InstrumentPartySubID_332.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_332(1154562879);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_332);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332.insert(InstrumentPartySubIDType_332.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_164;
        FIX::InstrumentPartyID InstrumentPartyID_164("STRING_1739619987");
        noInstrumentParties_0_0_2_2.set(InstrumentPartyID_164);
        InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyID_164.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_164('1');
        noInstrumentParties_0_0_2_2.set(InstrumentPartyIDSource_164);
        InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyIDSource_164.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_164(274057895);
        noInstrumentParties_0_0_2_2.set(InstrumentPartyRole_164);
        InstrumentParties_NoInstrumentParties_164.insert(InstrumentPartyRole_164.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_164);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333;
          FIX::InstrumentPartySubID InstrumentPartySubID_333("STRING_1122484220");
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubID_333);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333.insert(InstrumentPartySubID_333.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_333(1109276751);
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubIDType_333);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333.insert(InstrumentPartySubIDType_333.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_179;
        FIX::SecurityAltID SecurityAltID_179("STRING_662206245");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_179);
        SecAltIDGrp_NoSecurityAltID_179.insert(SecurityAltID_179.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_179("STRING_1416128534");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_179);
        SecAltIDGrp_NoSecurityAltID_179.insert(SecurityAltIDSource_179.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_179);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_180;
        FIX::SecurityAltID SecurityAltID_180("STRING_1493830399");
        noSecurityAltID_0_0_2_1.set(SecurityAltID_180);
        SecAltIDGrp_NoSecurityAltID_180.insert(SecurityAltID_180.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_180("STRING_1868561322");
        noSecurityAltID_0_0_2_1.set(SecurityAltIDSource_180);
        SecAltIDGrp_NoSecurityAltID_180.insert(SecurityAltIDSource_180.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_180);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_168;
      FIX::SecurityXML SecurityXML_169("XMLDATA_1656571977");
      noRelatedSym_0_1_0.set(SecurityXML_169);
      FIX::SecurityXMLLen SecurityXMLLen_84(925161596);
      noRelatedSym_0_1_0.set(SecurityXMLLen_84);
      FIX::SecurityXMLSchema SecurityXMLSchema_84("STRING_585874569");
      noRelatedSym_0_1_0.set(SecurityXMLSchema_84);
      SecurityXML_168.insert(SecurityXMLSchema_84.getString());
      all_values.push_back(SecurityXML_168);

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
      FIX::PartyID PartyID_146("STRING_1068252943");
      noPartyIDs_1_1_0.set(PartyID_146);
      Parties_NoPartyIDs_146.insert(PartyID_146.getString());
      FIX::PartyIDSource PartyIDSource_146('E');
      noPartyIDs_1_1_0.set(PartyIDSource_146);
      Parties_NoPartyIDs_146.insert(PartyIDSource_146.getString());
      FIX::PartyRole PartyRole_146(33);
      noPartyIDs_1_1_0.set(PartyRole_146);
      Parties_NoPartyIDs_146.insert(PartyRole_146.getString());
      all_values.push_back(Parties_NoPartyIDs_146);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_292;
        FIX::PartySubID PartySubID_292("STRING_33548332");
        noPartySubIDs_1_0_2_0.set(PartySubID_292);
        PtysSubGrp_NoPartySubIDs_292.insert(PartySubID_292.getString());
        FIX::PartySubIDType PartySubIDType_292(14);
        noPartySubIDs_1_0_2_0.set(PartySubIDType_292);
        PtysSubGrp_NoPartySubIDs_292.insert(PartySubIDType_292.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_292);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_293;
        FIX::PartySubID PartySubID_293("STRING_758963778");
        noPartySubIDs_1_0_2_1.set(PartySubID_293);
        PtysSubGrp_NoPartySubIDs_293.insert(PartySubID_293.getString());
        FIX::PartySubIDType PartySubIDType_293(12);
        noPartySubIDs_1_0_2_1.set(PartySubIDType_293);
        PtysSubGrp_NoPartySubIDs_293.insert(PartySubIDType_293.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_293);

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      noAsgnReqs_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_1_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_1;
      FIX::EncodedText EncodedText_98("DATA_1884436967");
      noRelatedSym_1_1_0.set(EncodedText_98);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(EncodedText_98.getString());
      FIX::EncodedTextLen EncodedTextLen_98(52783698);
      noRelatedSym_1_1_0.set(EncodedTextLen_98);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(EncodedTextLen_98.getString());
      FIX::MDStreamID MDStreamID_6("STRING_326809975");
      noRelatedSym_1_1_0.set(MDStreamID_6);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(MDStreamID_6.getString());
      FIX::SettlType SettlType_32("STRING_9");
      noRelatedSym_1_1_0.set(SettlType_32);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(SettlType_32.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_1(3);
      noRelatedSym_1_1_0.set(StreamAsgnRejReason_1);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(StreamAsgnRejReason_1.getString());
      FIX::StreamAsgnType StreamAsgnType_1(2);
      noRelatedSym_1_1_0.set(StreamAsgnType_1);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(StreamAsgnType_1.getString());
      FIX::Text Text_98("STRING_2125224493");
      noRelatedSym_1_1_0.set(Text_98);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(Text_98.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_1);

      // Instrument
      multiset<string> Instrument_85;
      FIX::AttachmentPoint AttachmentPoint_85;
      AttachmentPoint_85.setString("40.500000");
      noRelatedSym_1_1_0.set(AttachmentPoint_85);
      Instrument_85.insert(AttachmentPoint_85.getString());
      FIX::CFICode CFICode_90("STRING_62176320");
      noRelatedSym_1_1_0.set(CFICode_90);
      Instrument_85.insert(CFICode_90.getString());
      FIX::CPProgram CPProgram_85(2);
      noRelatedSym_1_1_0.set(CPProgram_85);
      Instrument_85.insert(CPProgram_85.getString());
      FIX::CPRegType CPRegType_85("STRING_727085995");
      noRelatedSym_1_1_0.set(CPRegType_85);
      Instrument_85.insert(CPRegType_85.getString());
      FIX::CapPrice CapPrice_85;
      CapPrice_85.setString("11846605");
      noRelatedSym_1_1_0.set(CapPrice_85);
      Instrument_85.insert(CapPrice_85.getString());
      FIX::ContractMultiplier ContractMultiplier_85;
      ContractMultiplier_85.setString("13610754");
      noRelatedSym_1_1_0.set(ContractMultiplier_85);
      Instrument_85.insert(ContractMultiplier_85.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_85(1);
      noRelatedSym_1_1_0.set(ContractMultiplierUnit_85);
      Instrument_85.insert(ContractMultiplierUnit_85.getString());
      FIX::ContractSettlMonth ContractSettlMonth_85("MONTHYEAR_1846866786");
      noRelatedSym_1_1_0.set(ContractSettlMonth_85);
      Instrument_85.insert(ContractSettlMonth_85.getString());
      FIX::CountryOfIssue CountryOfIssue_85("COUNTRY_629720377");
      noRelatedSym_1_1_0.set(CountryOfIssue_85);
      Instrument_85.insert(CountryOfIssue_85.getString());
      FIX::CouponPaymentDate CouponPaymentDate_85("LOCALMKTDATE_1621044890");
      noRelatedSym_1_1_0.set(CouponPaymentDate_85);
      Instrument_85.insert(CouponPaymentDate_85.getString());
      FIX::CouponRate CouponRate_85;
      CouponRate_85.setString("44.600000");
      noRelatedSym_1_1_0.set(CouponRate_85);
      Instrument_85.insert(CouponRate_85.getString());
      FIX::CreditRating CreditRating_85("STRING_138808706");
      noRelatedSym_1_1_0.set(CreditRating_85);
      Instrument_85.insert(CreditRating_85.getString());
      FIX::DatedDate DatedDate_85("LOCALMKTDATE_398722838");
      noRelatedSym_1_1_0.set(DatedDate_85);
      Instrument_85.insert(DatedDate_85.getString());
      FIX::DetachmentPoint DetachmentPoint_85;
      DetachmentPoint_85.setString("53.810000");
      noRelatedSym_1_1_0.set(DetachmentPoint_85);
      Instrument_85.insert(DetachmentPoint_85.getString());
      FIX::EncodedIssuer EncodedIssuer_85("DATA_1383427194");
      noRelatedSym_1_1_0.set(EncodedIssuer_85);
      Instrument_85.insert(EncodedIssuer_85.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_85(1466975781);
      noRelatedSym_1_1_0.set(EncodedIssuerLen_85);
      Instrument_85.insert(EncodedIssuerLen_85.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_85("DATA_1354540850");
      noRelatedSym_1_1_0.set(EncodedSecurityDesc_85);
      Instrument_85.insert(EncodedSecurityDesc_85.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_85(1166381093);
      noRelatedSym_1_1_0.set(EncodedSecurityDescLen_85);
      Instrument_85.insert(EncodedSecurityDescLen_85.getString());
      FIX::ExerciseStyle ExerciseStyle_85(2);
      noRelatedSym_1_1_0.set(ExerciseStyle_85);
      Instrument_85.insert(ExerciseStyle_85.getString());
      FIX::Factor Factor_85;
      Factor_85.setString("13880891");
      noRelatedSym_1_1_0.set(Factor_85);
      Instrument_85.insert(Factor_85.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_85(true);
      noRelatedSym_1_1_0.set(FlexProductEligibilityIndicator_85);
      Instrument_85.insert(FlexProductEligibilityIndicator_85.getString());
      FIX::FlexibleIndicator FlexibleIndicator_85(true);
      noRelatedSym_1_1_0.set(FlexibleIndicator_85);
      Instrument_85.insert(FlexibleIndicator_85.getString());
      FIX::FloorPrice FloorPrice_85;
      FloorPrice_85.setString("532892");
      noRelatedSym_1_1_0.set(FloorPrice_85);
      Instrument_85.insert(FloorPrice_85.getString());
      FIX::FlowScheduleType FlowScheduleType_85(0);
      noRelatedSym_1_1_0.set(FlowScheduleType_85);
      Instrument_85.insert(FlowScheduleType_85.getString());
      FIX::InstrRegistry InstrRegistry_85("STRING_1541380613");
      noRelatedSym_1_1_0.set(InstrRegistry_85);
      Instrument_85.insert(InstrRegistry_85.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_85('1');
      noRelatedSym_1_1_0.set(InstrmtAssignmentMethod_85);
      Instrument_85.insert(InstrmtAssignmentMethod_85.getString());
      FIX::InterestAccrualDate InterestAccrualDate_85("LOCALMKTDATE_71946277");
      noRelatedSym_1_1_0.set(InterestAccrualDate_85);
      Instrument_85.insert(InterestAccrualDate_85.getString());
      FIX::IssueDate IssueDate_85("LOCALMKTDATE_364558579");
      noRelatedSym_1_1_0.set(IssueDate_85);
      Instrument_85.insert(IssueDate_85.getString());
      FIX::Issuer Issuer_85("STRING_232187013");
      noRelatedSym_1_1_0.set(Issuer_85);
      Instrument_85.insert(Issuer_85.getString());
      FIX::ListMethod ListMethod_85(1);
      noRelatedSym_1_1_0.set(ListMethod_85);
      Instrument_85.insert(ListMethod_85.getString());
      FIX::LocaleOfIssue LocaleOfIssue_85("STRING_342299424");
      noRelatedSym_1_1_0.set(LocaleOfIssue_85);
      Instrument_85.insert(LocaleOfIssue_85.getString());
      FIX::MaturityDate MaturityDate_85("LOCALMKTDATE_2097921063");
      noRelatedSym_1_1_0.set(MaturityDate_85);
      Instrument_85.insert(MaturityDate_85.getString());
      FIX::MaturityMonthYear MaturityMonthYear_85("MONTHYEAR_1118997647");
      noRelatedSym_1_1_0.set(MaturityMonthYear_85);
      Instrument_85.insert(MaturityMonthYear_85.getString());
      FIX::MaturityTime MaturityTime_85("TZTIMEONLY_594098164");
      noRelatedSym_1_1_0.set(MaturityTime_85);
      Instrument_85.insert(MaturityTime_85.getString());
      FIX::MinPriceIncrement MinPriceIncrement_85;
      MinPriceIncrement_85.setString("6775234");
      noRelatedSym_1_1_0.set(MinPriceIncrement_85);
      Instrument_85.insert(MinPriceIncrement_85.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_85;
      MinPriceIncrementAmount_85.setString("1561745");
      noRelatedSym_1_1_0.set(MinPriceIncrementAmount_85);
      Instrument_85.insert(MinPriceIncrementAmount_85.getString());
      FIX::NTPositionLimit NTPositionLimit_85(1955173655);
      noRelatedSym_1_1_0.set(NTPositionLimit_85);
      Instrument_85.insert(NTPositionLimit_85.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_85;
      NotionalPercentageOutstanding_85.setString("79.010000");
      noRelatedSym_1_1_0.set(NotionalPercentageOutstanding_85);
      Instrument_85.insert(NotionalPercentageOutstanding_85.getString());
      FIX::OptAttribute OptAttribute_85('2');
      noRelatedSym_1_1_0.set(OptAttribute_85);
      Instrument_85.insert(OptAttribute_85.getString());
      FIX::OptPayoutAmount OptPayoutAmount_85;
      OptPayoutAmount_85.setString("4374103");
      noRelatedSym_1_1_0.set(OptPayoutAmount_85);
      Instrument_85.insert(OptPayoutAmount_85.getString());
      FIX::OptPayoutType OptPayoutType_85(1);
      noRelatedSym_1_1_0.set(OptPayoutType_85);
      Instrument_85.insert(OptPayoutType_85.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_85;
      OriginalNotionalPercentageOutstanding_85.setString("21.380000");
      noRelatedSym_1_1_0.set(OriginalNotionalPercentageOutstanding_85);
      Instrument_85.insert(OriginalNotionalPercentageOutstanding_85.getString());
      FIX::Pool Pool_85("STRING_576219090");
      noRelatedSym_1_1_0.set(Pool_85);
      Instrument_85.insert(Pool_85.getString());
      FIX::PositionLimit PositionLimit_85(677021981);
      noRelatedSym_1_1_0.set(PositionLimit_85);
      Instrument_85.insert(PositionLimit_85.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_85("STRING_STD");
      noRelatedSym_1_1_0.set(PriceQuoteMethod_85);
      Instrument_85.insert(PriceQuoteMethod_85.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_85("STRING_1959646284");
      noRelatedSym_1_1_0.set(PriceUnitOfMeasure_85);
      Instrument_85.insert(PriceUnitOfMeasure_85.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_85;
      PriceUnitOfMeasureQty_85.setString("21439977");
      noRelatedSym_1_1_0.set(PriceUnitOfMeasureQty_85);
      Instrument_85.insert(PriceUnitOfMeasureQty_85.getString());
      FIX::Product Product_93(10);
      noRelatedSym_1_1_0.set(Product_93);
      Instrument_85.insert(Product_93.getString());
      FIX::ProductComplex ProductComplex_85("STRING_978543730");
      noRelatedSym_1_1_0.set(ProductComplex_85);
      Instrument_85.insert(ProductComplex_85.getString());
      FIX::PutOrCall PutOrCall_85(1);
      noRelatedSym_1_1_0.set(PutOrCall_85);
      Instrument_85.insert(PutOrCall_85.getString());
      FIX::RedemptionDate RedemptionDate_85("LOCALMKTDATE_2024983904");
      noRelatedSym_1_1_0.set(RedemptionDate_85);
      Instrument_85.insert(RedemptionDate_85.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_85("STRING_1385522168");
      noRelatedSym_1_1_0.set(RepoCollateralSecurityType_85);
      Instrument_85.insert(RepoCollateralSecurityType_85.getString());
      FIX::RepurchaseRate RepurchaseRate_85;
      RepurchaseRate_85.setString("12.780000");
      noRelatedSym_1_1_0.set(RepurchaseRate_85);
      Instrument_85.insert(RepurchaseRate_85.getString());
      FIX::RepurchaseTerm RepurchaseTerm_85(2078273156);
      noRelatedSym_1_1_0.set(RepurchaseTerm_85);
      Instrument_85.insert(RepurchaseTerm_85.getString());
      FIX::RestructuringType RestructuringType_85("STRING_MM");
      noRelatedSym_1_1_0.set(RestructuringType_85);
      Instrument_85.insert(RestructuringType_85.getString());
      FIX::SecurityDesc SecurityDesc_85("STRING_92818243");
      noRelatedSym_1_1_0.set(SecurityDesc_85);
      Instrument_85.insert(SecurityDesc_85.getString());
      FIX::SecurityExchange SecurityExchange_85("EXCHANGE_36862458");
      noRelatedSym_1_1_0.set(SecurityExchange_85);
      Instrument_85.insert(SecurityExchange_85.getString());
      FIX::SecurityGroup SecurityGroup_85("STRING_1202604747");
      noRelatedSym_1_1_0.set(SecurityGroup_85);
      Instrument_85.insert(SecurityGroup_85.getString());
      FIX::SecurityID SecurityID_85("STRING_457376822");
      noRelatedSym_1_1_0.set(SecurityID_85);
      Instrument_85.insert(SecurityID_85.getString());
      FIX::SecurityIDSource SecurityIDSource_85("STRING_A");
      noRelatedSym_1_1_0.set(SecurityIDSource_85);
      Instrument_85.insert(SecurityIDSource_85.getString());
      FIX::SecurityStatus SecurityStatus_86("STRING_2");
      noRelatedSym_1_1_0.set(SecurityStatus_86);
      Instrument_85.insert(SecurityStatus_86.getString());
      FIX::SecuritySubType SecuritySubType_89("STRING_799676246");
      noRelatedSym_1_1_0.set(SecuritySubType_89);
      Instrument_85.insert(SecuritySubType_89.getString());
      FIX::SecurityType SecurityType_93("STRING_TCAL");
      noRelatedSym_1_1_0.set(SecurityType_93);
      Instrument_85.insert(SecurityType_93.getString());
      FIX::Seniority Seniority_85("STRING_SD");
      noRelatedSym_1_1_0.set(Seniority_85);
      Instrument_85.insert(Seniority_85.getString());
      FIX::SettlMethod SettlMethod_85('C');
      noRelatedSym_1_1_0.set(SettlMethod_85);
      Instrument_85.insert(SettlMethod_85.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_85("STRING_897010296");
      noRelatedSym_1_1_0.set(SettleOnOpenFlag_85);
      Instrument_85.insert(SettleOnOpenFlag_85.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_85("STRING_1387114614");
      noRelatedSym_1_1_0.set(StateOrProvinceOfIssue_85);
      Instrument_85.insert(StateOrProvinceOfIssue_85.getString());
      FIX::StrikeCurrency StrikeCurrency_85("JPY");
      noRelatedSym_1_1_0.set(StrikeCurrency_85);
      Instrument_85.insert(StrikeCurrency_85.getString());
      FIX::StrikeMultiplier StrikeMultiplier_85;
      StrikeMultiplier_85.setString("12426722");
      noRelatedSym_1_1_0.set(StrikeMultiplier_85);
      Instrument_85.insert(StrikeMultiplier_85.getString());
      FIX::StrikePrice StrikePrice_85;
      StrikePrice_85.setString("16388748");
      noRelatedSym_1_1_0.set(StrikePrice_85);
      Instrument_85.insert(StrikePrice_85.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_85(2);
      noRelatedSym_1_1_0.set(StrikePriceBoundaryMethod_85);
      Instrument_85.insert(StrikePriceBoundaryMethod_85.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_85;
      StrikePriceBoundaryPrecision_85.setString("7.830000");
      noRelatedSym_1_1_0.set(StrikePriceBoundaryPrecision_85);
      Instrument_85.insert(StrikePriceBoundaryPrecision_85.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_85(1);
      noRelatedSym_1_1_0.set(StrikePriceDeterminationMethod_85);
      Instrument_85.insert(StrikePriceDeterminationMethod_85.getString());
      FIX::StrikeValue StrikeValue_85;
      StrikeValue_85.setString("5095856");
      noRelatedSym_1_1_0.set(StrikeValue_85);
      Instrument_85.insert(StrikeValue_85.getString());
      FIX::Symbol Symbol_85("STRING_1948528303");
      noRelatedSym_1_1_0.set(Symbol_85);
      Instrument_85.insert(Symbol_85.getString());
      FIX::SymbolSfx SymbolSfx_85("STRING_CD");
      noRelatedSym_1_1_0.set(SymbolSfx_85);
      Instrument_85.insert(SymbolSfx_85.getString());
      FIX::TimeUnit TimeUnit_85("STRING_H");
      noRelatedSym_1_1_0.set(TimeUnit_85);
      Instrument_85.insert(TimeUnit_85.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_85(2);
      noRelatedSym_1_1_0.set(UnderlyingPriceDeterminationMethod_85);
      Instrument_85.insert(UnderlyingPriceDeterminationMethod_85.getString());
      FIX::UnitOfMeasure UnitOfMeasure_85("STRING_oz_tr");
      noRelatedSym_1_1_0.set(UnitOfMeasure_85);
      Instrument_85.insert(UnitOfMeasure_85.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_85;
      UnitOfMeasureQty_85.setString("15480774");
      noRelatedSym_1_1_0.set(UnitOfMeasureQty_85);
      Instrument_85.insert(UnitOfMeasureQty_85.getString());
      FIX::ValuationMethod ValuationMethod_85("STRING_CDS");
      noRelatedSym_1_1_0.set(ValuationMethod_85);
      Instrument_85.insert(ValuationMethod_85.getString());
      all_values.push_back(Instrument_85);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_1_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_163;
        FIX::ComplexEventCondition ComplexEventCondition_163(2);
        noComplexEvents_1_0_2_0.set(ComplexEventCondition_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventCondition_163.getString());
        FIX::ComplexEventPrice ComplexEventPrice_163;
        ComplexEventPrice_163.setString("2462291");
        noComplexEvents_1_0_2_0.set(ComplexEventPrice_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventPrice_163.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_163(2);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryMethod_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceBoundaryMethod_163.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_163;
        ComplexEventPriceBoundaryPrecision_163.setString("32.950000");
        noComplexEvents_1_0_2_0.set(ComplexEventPriceBoundaryPrecision_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceBoundaryPrecision_163.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_163(2);
        noComplexEvents_1_0_2_0.set(ComplexEventPriceTimeType_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventPriceTimeType_163.getString());
        FIX::ComplexEventType ComplexEventType_163(2);
        noComplexEvents_1_0_2_0.set(ComplexEventType_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexEventType_163.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_163;
        ComplexOptPayoutAmount_163.setString("6497101");
        noComplexEvents_1_0_2_0.set(ComplexOptPayoutAmount_163);
        ComplexEvents_NoComplexEvents_163.insert(ComplexOptPayoutAmount_163.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_163);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_331;
          FIX::ComplexEventEndDate ComplexEventEndDate_331(FIX::UTCTIMESTAMP(12, 56, 2, 18, 9, 2007));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventEndDate_331);
          ComplexEventDates_NoComplexEventDates_331.insert(ComplexEventEndDate_331.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_331(FIX::UTCTIMESTAMP(10, 41, 37, 0, 9, 2001));
          noComplexEventDates_1_0_0_3_0.set(ComplexEventStartDate_331);
          ComplexEventDates_NoComplexEventDates_331.insert(ComplexEventStartDate_331.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_331);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_673;
            FIX::ComplexEventEndTime ComplexEventEndTime_673(FIX::UTCTIMEONLY(6, 21, 8));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventEndTime_673);
            ComplexEventTimes_NoComplexEventTimes_673.insert(ComplexEventEndTime_673.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_673(FIX::UTCTIMEONLY(22, 21, 15));
            noComplexEventTimes_1_0_0_0_4_0.set(ComplexEventStartTime_673);
            ComplexEventTimes_NoComplexEventTimes_673.insert(ComplexEventStartTime_673.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_673);

            noComplexEventDates_1_0_0_3_0.addGroup(noComplexEventTimes_1_0_0_0_4_0);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_332;
          FIX::ComplexEventEndDate ComplexEventEndDate_332(FIX::UTCTIMESTAMP(10, 57, 41, 17, 11, 2006));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventEndDate_332);
          ComplexEventDates_NoComplexEventDates_332.insert(ComplexEventEndDate_332.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_332(FIX::UTCTIMESTAMP(18, 54, 39, 0, 10, 2010));
          noComplexEventDates_1_0_0_3_1.set(ComplexEventStartDate_332);
          ComplexEventDates_NoComplexEventDates_332.insert(ComplexEventStartDate_332.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_332);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_674;
            FIX::ComplexEventEndTime ComplexEventEndTime_674(FIX::UTCTIMEONLY(2, 15, 46));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventEndTime_674);
            ComplexEventTimes_NoComplexEventTimes_674.insert(ComplexEventEndTime_674.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_674(FIX::UTCTIMEONLY(23, 40, 25));
            noComplexEventTimes_1_0_0_1_4_0.set(ComplexEventStartTime_674);
            ComplexEventTimes_NoComplexEventTimes_674.insert(ComplexEventStartTime_674.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_674);

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_675;
            FIX::ComplexEventEndTime ComplexEventEndTime_675(FIX::UTCTIMEONLY(22, 38, 51));
            noComplexEventTimes_1_0_0_1_4_1.set(ComplexEventEndTime_675);
            ComplexEventTimes_NoComplexEventTimes_675.insert(ComplexEventEndTime_675.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_675(FIX::UTCTIMEONLY(5, 5, 54));
            noComplexEventTimes_1_0_0_1_4_1.set(ComplexEventStartTime_675);
            ComplexEventTimes_NoComplexEventTimes_675.insert(ComplexEventStartTime_675.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_675);

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_676;
            FIX::ComplexEventEndTime ComplexEventEndTime_676(FIX::UTCTIMEONLY(15, 51, 16));
            noComplexEventTimes_1_0_0_1_4_2.set(ComplexEventEndTime_676);
            ComplexEventTimes_NoComplexEventTimes_676.insert(ComplexEventEndTime_676.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_676(FIX::UTCTIMEONLY(17, 46, 44));
            noComplexEventTimes_1_0_0_1_4_2.set(ComplexEventStartTime_676);
            ComplexEventTimes_NoComplexEventTimes_676.insert(ComplexEventStartTime_676.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_676);

            noComplexEventDates_1_0_0_3_1.addGroup(noComplexEventTimes_1_0_0_1_4_2);
          }
          noComplexEvents_1_0_2_0.addGroup(noComplexEventDates_1_0_0_3_1);
        }
        noRelatedSym_1_1_0.addGroup(noComplexEvents_1_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_1_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_167;
        FIX::EventDate EventDate_167("LOCALMKTDATE_77011593");
        noEvents_1_0_2_0.set(EventDate_167);
        EvntGrp_NoEvents_167.insert(EventDate_167.getString());
        FIX::EventPx EventPx_167;
        EventPx_167.setString("19613988");
        noEvents_1_0_2_0.set(EventPx_167);
        EvntGrp_NoEvents_167.insert(EventPx_167.getString());
        FIX::EventText EventText_167("STRING_238646191");
        noEvents_1_0_2_0.set(EventText_167);
        EvntGrp_NoEvents_167.insert(EventText_167.getString());
        FIX::EventTime EventTime_167(FIX::UTCTIMESTAMP(20, 13, 15, 18, 5, 2007));
        noEvents_1_0_2_0.set(EventTime_167);
        EvntGrp_NoEvents_167.insert(EventTime_167.getString());
        FIX::EventType EventType_167(2);
        noEvents_1_0_2_0.set(EventType_167);
        EvntGrp_NoEvents_167.insert(EventType_167.getString());
        all_values.push_back(EvntGrp_NoEvents_167);

        noRelatedSym_1_1_0.addGroup(noEvents_1_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_165;
        FIX::InstrumentPartyID InstrumentPartyID_165("STRING_317827893");
        noInstrumentParties_1_0_2_0.set(InstrumentPartyID_165);
        InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyID_165.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_165('1');
        noInstrumentParties_1_0_2_0.set(InstrumentPartyIDSource_165);
        InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyIDSource_165.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_165(171410114);
        noInstrumentParties_1_0_2_0.set(InstrumentPartyRole_165);
        InstrumentParties_NoInstrumentParties_165.insert(InstrumentPartyRole_165.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_165);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334;
          FIX::InstrumentPartySubID InstrumentPartySubID_334("STRING_1486840269");
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubID_334);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334.insert(InstrumentPartySubID_334.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_334(1847885826);
          noInstrumentPartySubIDs_1_0_0_3_0.set(InstrumentPartySubIDType_334);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334.insert(InstrumentPartySubIDType_334.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335;
          FIX::InstrumentPartySubID InstrumentPartySubID_335("STRING_161941586");
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubID_335);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335.insert(InstrumentPartySubID_335.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_335(542936826);
          noInstrumentPartySubIDs_1_0_0_3_1.set(InstrumentPartySubIDType_335);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335.insert(InstrumentPartySubIDType_335.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336;
          FIX::InstrumentPartySubID InstrumentPartySubID_336("STRING_262345503");
          noInstrumentPartySubIDs_1_0_0_3_2.set(InstrumentPartySubID_336);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336.insert(InstrumentPartySubID_336.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_336(250476740);
          noInstrumentPartySubIDs_1_0_0_3_2.set(InstrumentPartySubIDType_336);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336.insert(InstrumentPartySubIDType_336.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);

          noInstrumentParties_1_0_2_0.addGroup(noInstrumentPartySubIDs_1_0_0_3_2);
        }
        noRelatedSym_1_1_0.addGroup(noInstrumentParties_1_0_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_181;
        FIX::SecurityAltID SecurityAltID_181("STRING_2103469230");
        noSecurityAltID_1_0_2_0.set(SecurityAltID_181);
        SecAltIDGrp_NoSecurityAltID_181.insert(SecurityAltID_181.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_181("STRING_1709129411");
        noSecurityAltID_1_0_2_0.set(SecurityAltIDSource_181);
        SecAltIDGrp_NoSecurityAltID_181.insert(SecurityAltIDSource_181.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_181);

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_182;
        FIX::SecurityAltID SecurityAltID_182("STRING_1413761945");
        noSecurityAltID_1_0_2_1.set(SecurityAltID_182);
        SecAltIDGrp_NoSecurityAltID_182.insert(SecurityAltID_182.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_182("STRING_1211897663");
        noSecurityAltID_1_0_2_1.set(SecurityAltIDSource_182);
        SecAltIDGrp_NoSecurityAltID_182.insert(SecurityAltIDSource_182.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_182);

        noRelatedSym_1_1_0.addGroup(noSecurityAltID_1_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_170;
      FIX::SecurityXML SecurityXML_171("XMLDATA_525067004");
      noRelatedSym_1_1_0.set(SecurityXML_171);
      FIX::SecurityXMLLen SecurityXMLLen_85(1923050271);
      noRelatedSym_1_1_0.set(SecurityXMLLen_85);
      FIX::SecurityXMLSchema SecurityXMLSchema_85("STRING_287255520");
      noRelatedSym_1_1_0.set(SecurityXMLSchema_85);
      SecurityXML_170.insert(SecurityXMLSchema_85.getString());
      all_values.push_back(SecurityXML_170);

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
