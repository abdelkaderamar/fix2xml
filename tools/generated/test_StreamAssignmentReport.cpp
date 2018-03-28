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
  multiset<string> StreamAssignmentReport_0;
  FIX::StreamAsgnReqID StreamAsgnReqID_0("STRING_1233226095");
  msg.set(StreamAsgnReqID_0);
  StreamAssignmentReport_0.insert(StreamAsgnReqID_0.getString());
  FIX::StreamAsgnReqType StreamAsgnReqType_0(1);
  msg.set(StreamAsgnReqType_0);
  StreamAssignmentReport_0.insert(StreamAsgnReqType_0.getString());
  FIX::StreamAsgnRptID StreamAsgnRptID_0("STRING_1640700953");
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
      multiset<string> Parties_NoPartyIDs_136;
      FIX::PartyID PartyID_136("STRING_136178128");
      noPartyIDs_0_1_0.set(PartyID_136);
      Parties_NoPartyIDs_136.insert(PartyID_136.getString());
      FIX::PartyIDSource PartyIDSource_136('1');
      noPartyIDs_0_1_0.set(PartyIDSource_136);
      Parties_NoPartyIDs_136.insert(PartyIDSource_136.getString());
      FIX::PartyRole PartyRole_136(11);
      noPartyIDs_0_1_0.set(PartyRole_136);
      Parties_NoPartyIDs_136.insert(PartyRole_136.getString());
      all_values.push_back(Parties_NoPartyIDs_136);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_274;
        FIX::PartySubID PartySubID_274("STRING_514435214");
        noPartySubIDs_0_0_2_0.set(PartySubID_274);
        PtysSubGrp_NoPartySubIDs_274.insert(PartySubID_274.getString());
        FIX::PartySubIDType PartySubIDType_274(4);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_274);
        PtysSubGrp_NoPartySubIDs_274.insert(PartySubIDType_274.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_274);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_275;
        FIX::PartySubID PartySubID_275("STRING_177191033");
        noPartySubIDs_0_0_2_1.set(PartySubID_275);
        PtysSubGrp_NoPartySubIDs_275.insert(PartySubID_275.getString());
        FIX::PartySubIDType PartySubIDType_275(10);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_275);
        PtysSubGrp_NoPartySubIDs_275.insert(PartySubIDType_275.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_275);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_137;
      FIX::PartyID PartyID_137("STRING_592301337");
      noPartyIDs_0_1_1.set(PartyID_137);
      Parties_NoPartyIDs_137.insert(PartyID_137.getString());
      FIX::PartyIDSource PartyIDSource_137('3');
      noPartyIDs_0_1_1.set(PartyIDSource_137);
      Parties_NoPartyIDs_137.insert(PartyIDSource_137.getString());
      FIX::PartyRole PartyRole_137(13);
      noPartyIDs_0_1_1.set(PartyRole_137);
      Parties_NoPartyIDs_137.insert(PartyRole_137.getString());
      all_values.push_back(Parties_NoPartyIDs_137);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_276;
        FIX::PartySubID PartySubID_276("STRING_1338903984");
        noPartySubIDs_0_1_2_0.set(PartySubID_276);
        PtysSubGrp_NoPartySubIDs_276.insert(PartySubID_276.getString());
        FIX::PartySubIDType PartySubIDType_276(17);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_276);
        PtysSubGrp_NoPartySubIDs_276.insert(PartySubIDType_276.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_276);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_277;
        FIX::PartySubID PartySubID_277("STRING_938934990");
        noPartySubIDs_0_1_2_1.set(PartySubID_277);
        PtysSubGrp_NoPartySubIDs_277.insert(PartySubID_277.getString());
        FIX::PartySubIDType PartySubIDType_277(14);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_277);
        PtysSubGrp_NoPartySubIDs_277.insert(PartySubIDType_277.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_277);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_278;
        FIX::PartySubID PartySubID_278("STRING_687568469");
        noPartySubIDs_0_1_2_2.set(PartySubID_278);
        PtysSubGrp_NoPartySubIDs_278.insert(PartySubID_278.getString());
        FIX::PartySubIDType PartySubIDType_278(8);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_278);
        PtysSubGrp_NoPartySubIDs_278.insert(PartySubIDType_278.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_278);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // StrmAsgnRptInstrmtGrp
    // Group StrmAsgnRptInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_0;
      FIX::EncodedText EncodedText_87("DATA_2044613386");
      noRelatedSym_0_1_0.set(EncodedText_87);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(EncodedText_87.getString());
      FIX::EncodedTextLen EncodedTextLen_87(1547338969);
      noRelatedSym_0_1_0.set(EncodedTextLen_87);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(EncodedTextLen_87.getString());
      FIX::MDStreamID MDStreamID_4("STRING_388616147");
      noRelatedSym_0_1_0.set(MDStreamID_4);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(MDStreamID_4.getString());
      FIX::SettlType SettlType_26("STRING_8");
      noRelatedSym_0_1_0.set(SettlType_26);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(SettlType_26.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_0(1);
      noRelatedSym_0_1_0.set(StreamAsgnRejReason_0);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(StreamAsgnRejReason_0.getString());
      FIX::StreamAsgnType StreamAsgnType_0(3);
      noRelatedSym_0_1_0.set(StreamAsgnType_0);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(StreamAsgnType_0.getString());
      FIX::Text Text_87("STRING_1074559807");
      noRelatedSym_0_1_0.set(Text_87);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_0.insert(Text_87.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_0);

      // Instrument
      multiset<string> Instrument_91;
      FIX::AttachmentPoint AttachmentPoint_91;
      AttachmentPoint_91.setString("49.030000");
      noRelatedSym_0_1_0.set(AttachmentPoint_91);
      Instrument_91.insert(AttachmentPoint_91.getString());
      FIX::CFICode CFICode_96("STRING_1075554113");
      noRelatedSym_0_1_0.set(CFICode_96);
      Instrument_91.insert(CFICode_96.getString());
      FIX::CPProgram CPProgram_91(99);
      noRelatedSym_0_1_0.set(CPProgram_91);
      Instrument_91.insert(CPProgram_91.getString());
      FIX::CPRegType CPRegType_91("STRING_1106974465");
      noRelatedSym_0_1_0.set(CPRegType_91);
      Instrument_91.insert(CPRegType_91.getString());
      FIX::CapPrice CapPrice_91;
      CapPrice_91.setString("1333475");
      noRelatedSym_0_1_0.set(CapPrice_91);
      Instrument_91.insert(CapPrice_91.getString());
      FIX::ContractMultiplier ContractMultiplier_91;
      ContractMultiplier_91.setString("7039552");
      noRelatedSym_0_1_0.set(ContractMultiplier_91);
      Instrument_91.insert(ContractMultiplier_91.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_91(1);
      noRelatedSym_0_1_0.set(ContractMultiplierUnit_91);
      Instrument_91.insert(ContractMultiplierUnit_91.getString());
      FIX::ContractSettlMonth ContractSettlMonth_91("MONTHYEAR_942993878");
      noRelatedSym_0_1_0.set(ContractSettlMonth_91);
      Instrument_91.insert(ContractSettlMonth_91.getString());
      FIX::CountryOfIssue CountryOfIssue_91("COUNTRY_723857773");
      noRelatedSym_0_1_0.set(CountryOfIssue_91);
      Instrument_91.insert(CountryOfIssue_91.getString());
      FIX::CouponPaymentDate CouponPaymentDate_91("LOCALMKTDATE_456359071");
      noRelatedSym_0_1_0.set(CouponPaymentDate_91);
      Instrument_91.insert(CouponPaymentDate_91.getString());
      FIX::CouponRate CouponRate_91;
      CouponRate_91.setString("14.550000");
      noRelatedSym_0_1_0.set(CouponRate_91);
      Instrument_91.insert(CouponRate_91.getString());
      FIX::CreditRating CreditRating_91("STRING_901048807");
      noRelatedSym_0_1_0.set(CreditRating_91);
      Instrument_91.insert(CreditRating_91.getString());
      FIX::DatedDate DatedDate_91("LOCALMKTDATE_1235417404");
      noRelatedSym_0_1_0.set(DatedDate_91);
      Instrument_91.insert(DatedDate_91.getString());
      FIX::DetachmentPoint DetachmentPoint_91;
      DetachmentPoint_91.setString("27.930000");
      noRelatedSym_0_1_0.set(DetachmentPoint_91);
      Instrument_91.insert(DetachmentPoint_91.getString());
      FIX::EncodedIssuer EncodedIssuer_91("DATA_767190750");
      noRelatedSym_0_1_0.set(EncodedIssuer_91);
      Instrument_91.insert(EncodedIssuer_91.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_91(619606569);
      noRelatedSym_0_1_0.set(EncodedIssuerLen_91);
      Instrument_91.insert(EncodedIssuerLen_91.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_91("DATA_246493099");
      noRelatedSym_0_1_0.set(EncodedSecurityDesc_91);
      Instrument_91.insert(EncodedSecurityDesc_91.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_91(2106094734);
      noRelatedSym_0_1_0.set(EncodedSecurityDescLen_91);
      Instrument_91.insert(EncodedSecurityDescLen_91.getString());
      FIX::ExerciseStyle ExerciseStyle_91(1);
      noRelatedSym_0_1_0.set(ExerciseStyle_91);
      Instrument_91.insert(ExerciseStyle_91.getString());
      FIX::Factor Factor_91;
      Factor_91.setString("11854280");
      noRelatedSym_0_1_0.set(Factor_91);
      Instrument_91.insert(Factor_91.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_91(false);
      noRelatedSym_0_1_0.set(FlexProductEligibilityIndicator_91);
      Instrument_91.insert(FlexProductEligibilityIndicator_91.getString());
      FIX::FlexibleIndicator FlexibleIndicator_91(false);
      noRelatedSym_0_1_0.set(FlexibleIndicator_91);
      Instrument_91.insert(FlexibleIndicator_91.getString());
      FIX::FloorPrice FloorPrice_91;
      FloorPrice_91.setString("12853391");
      noRelatedSym_0_1_0.set(FloorPrice_91);
      Instrument_91.insert(FloorPrice_91.getString());
      FIX::FlowScheduleType FlowScheduleType_91(0);
      noRelatedSym_0_1_0.set(FlowScheduleType_91);
      Instrument_91.insert(FlowScheduleType_91.getString());
      FIX::InstrRegistry InstrRegistry_91("STRING_1604663267");
      noRelatedSym_0_1_0.set(InstrRegistry_91);
      Instrument_91.insert(InstrRegistry_91.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_91('6');
      noRelatedSym_0_1_0.set(InstrmtAssignmentMethod_91);
      Instrument_91.insert(InstrmtAssignmentMethod_91.getString());
      FIX::InterestAccrualDate InterestAccrualDate_91("LOCALMKTDATE_1224321273");
      noRelatedSym_0_1_0.set(InterestAccrualDate_91);
      Instrument_91.insert(InterestAccrualDate_91.getString());
      FIX::IssueDate IssueDate_91("LOCALMKTDATE_201077759");
      noRelatedSym_0_1_0.set(IssueDate_91);
      Instrument_91.insert(IssueDate_91.getString());
      FIX::Issuer Issuer_91("STRING_570753322");
      noRelatedSym_0_1_0.set(Issuer_91);
      Instrument_91.insert(Issuer_91.getString());
      FIX::ListMethod ListMethod_91(1);
      noRelatedSym_0_1_0.set(ListMethod_91);
      Instrument_91.insert(ListMethod_91.getString());
      FIX::LocaleOfIssue LocaleOfIssue_91("STRING_1275637567");
      noRelatedSym_0_1_0.set(LocaleOfIssue_91);
      Instrument_91.insert(LocaleOfIssue_91.getString());
      FIX::MaturityDate MaturityDate_91("LOCALMKTDATE_1689538226");
      noRelatedSym_0_1_0.set(MaturityDate_91);
      Instrument_91.insert(MaturityDate_91.getString());
      FIX::MaturityMonthYear MaturityMonthYear_91("MONTHYEAR_1669163990");
      noRelatedSym_0_1_0.set(MaturityMonthYear_91);
      Instrument_91.insert(MaturityMonthYear_91.getString());
      FIX::MaturityTime MaturityTime_91("TZTIMEONLY_1843414680");
      noRelatedSym_0_1_0.set(MaturityTime_91);
      Instrument_91.insert(MaturityTime_91.getString());
      FIX::MinPriceIncrement MinPriceIncrement_91;
      MinPriceIncrement_91.setString("6490290");
      noRelatedSym_0_1_0.set(MinPriceIncrement_91);
      Instrument_91.insert(MinPriceIncrement_91.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_91;
      MinPriceIncrementAmount_91.setString("18025115");
      noRelatedSym_0_1_0.set(MinPriceIncrementAmount_91);
      Instrument_91.insert(MinPriceIncrementAmount_91.getString());
      FIX::NTPositionLimit NTPositionLimit_91(399886273);
      noRelatedSym_0_1_0.set(NTPositionLimit_91);
      Instrument_91.insert(NTPositionLimit_91.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_91;
      NotionalPercentageOutstanding_91.setString("29.000000");
      noRelatedSym_0_1_0.set(NotionalPercentageOutstanding_91);
      Instrument_91.insert(NotionalPercentageOutstanding_91.getString());
      FIX::OptAttribute OptAttribute_91('5');
      noRelatedSym_0_1_0.set(OptAttribute_91);
      Instrument_91.insert(OptAttribute_91.getString());
      FIX::OptPayoutAmount OptPayoutAmount_91;
      OptPayoutAmount_91.setString("11237440");
      noRelatedSym_0_1_0.set(OptPayoutAmount_91);
      Instrument_91.insert(OptPayoutAmount_91.getString());
      FIX::OptPayoutType OptPayoutType_91(2);
      noRelatedSym_0_1_0.set(OptPayoutType_91);
      Instrument_91.insert(OptPayoutType_91.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_91;
      OriginalNotionalPercentageOutstanding_91.setString("31.960000");
      noRelatedSym_0_1_0.set(OriginalNotionalPercentageOutstanding_91);
      Instrument_91.insert(OriginalNotionalPercentageOutstanding_91.getString());
      FIX::Pool Pool_91("STRING_2024792854");
      noRelatedSym_0_1_0.set(Pool_91);
      Instrument_91.insert(Pool_91.getString());
      FIX::PositionLimit PositionLimit_91(135245728);
      noRelatedSym_0_1_0.set(PositionLimit_91);
      Instrument_91.insert(PositionLimit_91.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_91("STRING_INX");
      noRelatedSym_0_1_0.set(PriceQuoteMethod_91);
      Instrument_91.insert(PriceQuoteMethod_91.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_91("STRING_644499956");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasure_91);
      Instrument_91.insert(PriceUnitOfMeasure_91.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_91;
      PriceUnitOfMeasureQty_91.setString("7548522");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasureQty_91);
      Instrument_91.insert(PriceUnitOfMeasureQty_91.getString());
      FIX::Product Product_99(7);
      noRelatedSym_0_1_0.set(Product_99);
      Instrument_91.insert(Product_99.getString());
      FIX::ProductComplex ProductComplex_91("STRING_603111042");
      noRelatedSym_0_1_0.set(ProductComplex_91);
      Instrument_91.insert(ProductComplex_91.getString());
      FIX::PutOrCall PutOrCall_91(1);
      noRelatedSym_0_1_0.set(PutOrCall_91);
      Instrument_91.insert(PutOrCall_91.getString());
      FIX::RedemptionDate RedemptionDate_91("LOCALMKTDATE_964483529");
      noRelatedSym_0_1_0.set(RedemptionDate_91);
      Instrument_91.insert(RedemptionDate_91.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_91("STRING_1167453179");
      noRelatedSym_0_1_0.set(RepoCollateralSecurityType_91);
      Instrument_91.insert(RepoCollateralSecurityType_91.getString());
      FIX::RepurchaseRate RepurchaseRate_91;
      RepurchaseRate_91.setString("72.390000");
      noRelatedSym_0_1_0.set(RepurchaseRate_91);
      Instrument_91.insert(RepurchaseRate_91.getString());
      FIX::RepurchaseTerm RepurchaseTerm_91(102339074);
      noRelatedSym_0_1_0.set(RepurchaseTerm_91);
      Instrument_91.insert(RepurchaseTerm_91.getString());
      FIX::RestructuringType RestructuringType_91("STRING_FR");
      noRelatedSym_0_1_0.set(RestructuringType_91);
      Instrument_91.insert(RestructuringType_91.getString());
      FIX::SecurityDesc SecurityDesc_91("STRING_792046858");
      noRelatedSym_0_1_0.set(SecurityDesc_91);
      Instrument_91.insert(SecurityDesc_91.getString());
      FIX::SecurityExchange SecurityExchange_91("EXCHANGE_787533588");
      noRelatedSym_0_1_0.set(SecurityExchange_91);
      Instrument_91.insert(SecurityExchange_91.getString());
      FIX::SecurityGroup SecurityGroup_91("STRING_1079995929");
      noRelatedSym_0_1_0.set(SecurityGroup_91);
      Instrument_91.insert(SecurityGroup_91.getString());
      FIX::SecurityID SecurityID_91("STRING_993124618");
      noRelatedSym_0_1_0.set(SecurityID_91);
      Instrument_91.insert(SecurityID_91.getString());
      FIX::SecurityIDSource SecurityIDSource_91("STRING_4");
      noRelatedSym_0_1_0.set(SecurityIDSource_91);
      Instrument_91.insert(SecurityIDSource_91.getString());
      FIX::SecurityStatus SecurityStatus_92("STRING_2");
      noRelatedSym_0_1_0.set(SecurityStatus_92);
      Instrument_91.insert(SecurityStatus_92.getString());
      FIX::SecuritySubType SecuritySubType_95("STRING_121278537");
      noRelatedSym_0_1_0.set(SecuritySubType_95);
      Instrument_91.insert(SecuritySubType_95.getString());
      FIX::SecurityType SecurityType_99("STRING_STN");
      noRelatedSym_0_1_0.set(SecurityType_99);
      Instrument_91.insert(SecurityType_99.getString());
      FIX::Seniority Seniority_91("STRING_SR");
      noRelatedSym_0_1_0.set(Seniority_91);
      Instrument_91.insert(Seniority_91.getString());
      FIX::SettlMethod SettlMethod_91('P');
      noRelatedSym_0_1_0.set(SettlMethod_91);
      Instrument_91.insert(SettlMethod_91.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_91("STRING_1549370532");
      noRelatedSym_0_1_0.set(SettleOnOpenFlag_91);
      Instrument_91.insert(SettleOnOpenFlag_91.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_91("STRING_850314012");
      noRelatedSym_0_1_0.set(StateOrProvinceOfIssue_91);
      Instrument_91.insert(StateOrProvinceOfIssue_91.getString());
      FIX::StrikeCurrency StrikeCurrency_91("EUR");
      noRelatedSym_0_1_0.set(StrikeCurrency_91);
      Instrument_91.insert(StrikeCurrency_91.getString());
      FIX::StrikeMultiplier StrikeMultiplier_91;
      StrikeMultiplier_91.setString("14483357");
      noRelatedSym_0_1_0.set(StrikeMultiplier_91);
      Instrument_91.insert(StrikeMultiplier_91.getString());
      FIX::StrikePrice StrikePrice_91;
      StrikePrice_91.setString("13408398");
      noRelatedSym_0_1_0.set(StrikePrice_91);
      Instrument_91.insert(StrikePrice_91.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_91(2);
      noRelatedSym_0_1_0.set(StrikePriceBoundaryMethod_91);
      Instrument_91.insert(StrikePriceBoundaryMethod_91.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_91;
      StrikePriceBoundaryPrecision_91.setString("53.010000");
      noRelatedSym_0_1_0.set(StrikePriceBoundaryPrecision_91);
      Instrument_91.insert(StrikePriceBoundaryPrecision_91.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_91(4);
      noRelatedSym_0_1_0.set(StrikePriceDeterminationMethod_91);
      Instrument_91.insert(StrikePriceDeterminationMethod_91.getString());
      FIX::StrikeValue StrikeValue_91;
      StrikeValue_91.setString("11753974");
      noRelatedSym_0_1_0.set(StrikeValue_91);
      Instrument_91.insert(StrikeValue_91.getString());
      FIX::Symbol Symbol_91("STRING_1823781291");
      noRelatedSym_0_1_0.set(Symbol_91);
      Instrument_91.insert(Symbol_91.getString());
      FIX::SymbolSfx SymbolSfx_91("STRING_WI");
      noRelatedSym_0_1_0.set(SymbolSfx_91);
      Instrument_91.insert(SymbolSfx_91.getString());
      FIX::TimeUnit TimeUnit_91("STRING_Mo");
      noRelatedSym_0_1_0.set(TimeUnit_91);
      Instrument_91.insert(TimeUnit_91.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_91(4);
      noRelatedSym_0_1_0.set(UnderlyingPriceDeterminationMethod_91);
      Instrument_91.insert(UnderlyingPriceDeterminationMethod_91.getString());
      FIX::UnitOfMeasure UnitOfMeasure_91("STRING_lbs");
      noRelatedSym_0_1_0.set(UnitOfMeasure_91);
      Instrument_91.insert(UnitOfMeasure_91.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_91;
      UnitOfMeasureQty_91.setString("15575834");
      noRelatedSym_0_1_0.set(UnitOfMeasureQty_91);
      Instrument_91.insert(UnitOfMeasureQty_91.getString());
      FIX::ValuationMethod ValuationMethod_91("STRING_CDS");
      noRelatedSym_0_1_0.set(ValuationMethod_91);
      Instrument_91.insert(ValuationMethod_91.getString());
      all_values.push_back(Instrument_91);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_172;
        FIX::ComplexEventCondition ComplexEventCondition_172(1);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_172);
        ComplexEvents_NoComplexEvents_172.insert(ComplexEventCondition_172.getString());
        FIX::ComplexEventPrice ComplexEventPrice_172;
        ComplexEventPrice_172.setString("5221756");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_172);
        ComplexEvents_NoComplexEvents_172.insert(ComplexEventPrice_172.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_172(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_172);
        ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceBoundaryMethod_172.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_172;
        ComplexEventPriceBoundaryPrecision_172.setString("39.400000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_172);
        ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceBoundaryPrecision_172.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_172(3);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_172);
        ComplexEvents_NoComplexEvents_172.insert(ComplexEventPriceTimeType_172.getString());
        FIX::ComplexEventType ComplexEventType_172(6);
        noComplexEvents_0_0_2_0.set(ComplexEventType_172);
        ComplexEvents_NoComplexEvents_172.insert(ComplexEventType_172.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_172;
        ComplexOptPayoutAmount_172.setString("3826549");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_172);
        ComplexEvents_NoComplexEvents_172.insert(ComplexOptPayoutAmount_172.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_172);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_347;
          FIX::ComplexEventEndDate ComplexEventEndDate_347(FIX::UTCTIMESTAMP(23, 28, 51, 12, 9, 2009));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_347);
          ComplexEventDates_NoComplexEventDates_347.insert(ComplexEventEndDate_347.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_347(FIX::UTCTIMESTAMP(1, 8, 8, 2, 6, 2008));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_347);
          ComplexEventDates_NoComplexEventDates_347.insert(ComplexEventStartDate_347.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_347);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_698;
            FIX::ComplexEventEndTime ComplexEventEndTime_698(FIX::UTCTIMEONLY(15, 44, 36));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_698);
            ComplexEventTimes_NoComplexEventTimes_698.insert(ComplexEventEndTime_698.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_698(FIX::UTCTIMEONLY(3, 29, 21));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_698);
            ComplexEventTimes_NoComplexEventTimes_698.insert(ComplexEventStartTime_698.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_698);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_699;
            FIX::ComplexEventEndTime ComplexEventEndTime_699(FIX::UTCTIMEONLY(12, 22, 21));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_699);
            ComplexEventTimes_NoComplexEventTimes_699.insert(ComplexEventEndTime_699.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_699(FIX::UTCTIMEONLY(1, 12, 23));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_699);
            ComplexEventTimes_NoComplexEventTimes_699.insert(ComplexEventStartTime_699.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_699);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_348;
          FIX::ComplexEventEndDate ComplexEventEndDate_348(FIX::UTCTIMESTAMP(23, 43, 9, 0, 5, 2016));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_348);
          ComplexEventDates_NoComplexEventDates_348.insert(ComplexEventEndDate_348.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_348(FIX::UTCTIMESTAMP(17, 12, 15, 19, 11, 2003));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_348);
          ComplexEventDates_NoComplexEventDates_348.insert(ComplexEventStartDate_348.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_348);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_700;
            FIX::ComplexEventEndTime ComplexEventEndTime_700(FIX::UTCTIMEONLY(19, 46, 22));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_700);
            ComplexEventTimes_NoComplexEventTimes_700.insert(ComplexEventEndTime_700.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_700(FIX::UTCTIMEONLY(13, 43, 1));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_700);
            ComplexEventTimes_NoComplexEventTimes_700.insert(ComplexEventStartTime_700.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_700);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_701;
            FIX::ComplexEventEndTime ComplexEventEndTime_701(FIX::UTCTIMEONLY(8, 24, 55));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventEndTime_701);
            ComplexEventTimes_NoComplexEventTimes_701.insert(ComplexEventEndTime_701.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_701(FIX::UTCTIMEONLY(5, 7, 0));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventStartTime_701);
            ComplexEventTimes_NoComplexEventTimes_701.insert(ComplexEventStartTime_701.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_701);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_702;
            FIX::ComplexEventEndTime ComplexEventEndTime_702(FIX::UTCTIMEONLY(19, 43, 9));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventEndTime_702);
            ComplexEventTimes_NoComplexEventTimes_702.insert(ComplexEventEndTime_702.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_702(FIX::UTCTIMEONLY(3, 5, 42));
            noComplexEventTimes_0_0_0_1_4_2.set(ComplexEventStartTime_702);
            ComplexEventTimes_NoComplexEventTimes_702.insert(ComplexEventStartTime_702.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_702);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_349;
          FIX::ComplexEventEndDate ComplexEventEndDate_349(FIX::UTCTIMESTAMP(6, 49, 28, 0, 6, 2006));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventEndDate_349);
          ComplexEventDates_NoComplexEventDates_349.insert(ComplexEventEndDate_349.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_349(FIX::UTCTIMESTAMP(12, 16, 45, 24, 10, 2010));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventStartDate_349);
          ComplexEventDates_NoComplexEventDates_349.insert(ComplexEventStartDate_349.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_349);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_703;
            FIX::ComplexEventEndTime ComplexEventEndTime_703(FIX::UTCTIMEONLY(16, 33, 51));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventEndTime_703);
            ComplexEventTimes_NoComplexEventTimes_703.insert(ComplexEventEndTime_703.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_703(FIX::UTCTIMEONLY(18, 58, 9));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventStartTime_703);
            ComplexEventTimes_NoComplexEventTimes_703.insert(ComplexEventStartTime_703.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_703);

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_181;
        FIX::EventDate EventDate_181("LOCALMKTDATE_608098017");
        noEvents_0_0_2_0.set(EventDate_181);
        EvntGrp_NoEvents_181.insert(EventDate_181.getString());
        FIX::EventPx EventPx_181;
        EventPx_181.setString("11150479");
        noEvents_0_0_2_0.set(EventPx_181);
        EvntGrp_NoEvents_181.insert(EventPx_181.getString());
        FIX::EventText EventText_181("STRING_738661259");
        noEvents_0_0_2_0.set(EventText_181);
        EvntGrp_NoEvents_181.insert(EventText_181.getString());
        FIX::EventTime EventTime_181(FIX::UTCTIMESTAMP(12, 4, 6, 9, 3, 2014));
        noEvents_0_0_2_0.set(EventTime_181);
        EvntGrp_NoEvents_181.insert(EventTime_181.getString());
        FIX::EventType EventType_181(14);
        noEvents_0_0_2_0.set(EventType_181);
        EvntGrp_NoEvents_181.insert(EventType_181.getString());
        all_values.push_back(EvntGrp_NoEvents_181);

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_182;
        FIX::EventDate EventDate_182("LOCALMKTDATE_96964318");
        noEvents_0_0_2_1.set(EventDate_182);
        EvntGrp_NoEvents_182.insert(EventDate_182.getString());
        FIX::EventPx EventPx_182;
        EventPx_182.setString("14348447");
        noEvents_0_0_2_1.set(EventPx_182);
        EvntGrp_NoEvents_182.insert(EventPx_182.getString());
        FIX::EventText EventText_182("STRING_877186684");
        noEvents_0_0_2_1.set(EventText_182);
        EvntGrp_NoEvents_182.insert(EventText_182.getString());
        FIX::EventTime EventTime_182(FIX::UTCTIMESTAMP(5, 12, 6, 25, 11, 2002));
        noEvents_0_0_2_1.set(EventTime_182);
        EvntGrp_NoEvents_182.insert(EventTime_182.getString());
        FIX::EventType EventType_182(15);
        noEvents_0_0_2_1.set(EventType_182);
        EvntGrp_NoEvents_182.insert(EventType_182.getString());
        all_values.push_back(EvntGrp_NoEvents_182);

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_181;
        FIX::InstrumentPartyID InstrumentPartyID_181("STRING_140065259");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_181);
        InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyID_181.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_181('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_181);
        InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyIDSource_181.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_181(1637576180);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_181);
        InstrumentParties_NoInstrumentParties_181.insert(InstrumentPartyRole_181.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_181);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379;
          FIX::InstrumentPartySubID InstrumentPartySubID_379("STRING_827566378");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_379);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379.insert(InstrumentPartySubID_379.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_379(523750691);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_379);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379.insert(InstrumentPartySubIDType_379.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_379);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380;
          FIX::InstrumentPartySubID InstrumentPartySubID_380("STRING_1693730537");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_380);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380.insert(InstrumentPartySubID_380.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_380(1774785476);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_380);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380.insert(InstrumentPartySubIDType_380.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_380);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381;
          FIX::InstrumentPartySubID InstrumentPartySubID_381("STRING_1131848708");
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubID_381);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381.insert(InstrumentPartySubID_381.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_381(661294793);
          noInstrumentPartySubIDs_0_0_0_3_2.set(InstrumentPartySubIDType_381);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381.insert(InstrumentPartySubIDType_381.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_381);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_182;
        FIX::InstrumentPartyID InstrumentPartyID_182("STRING_365963087");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_182);
        InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyID_182.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_182('5');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_182);
        InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyIDSource_182.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_182(387912741);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_182);
        InstrumentParties_NoInstrumentParties_182.insert(InstrumentPartyRole_182.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_182);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382;
          FIX::InstrumentPartySubID InstrumentPartySubID_382("STRING_842116299");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_382);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382.insert(InstrumentPartySubID_382.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_382(684420206);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_382);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382.insert(InstrumentPartySubIDType_382.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_382);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383;
          FIX::InstrumentPartySubID InstrumentPartySubID_383("STRING_1347771606");
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubID_383);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383.insert(InstrumentPartySubID_383.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_383(1442357075);
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubIDType_383);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383.insert(InstrumentPartySubIDType_383.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_383);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_183;
        FIX::InstrumentPartyID InstrumentPartyID_183("STRING_1069901820");
        noInstrumentParties_0_0_2_2.set(InstrumentPartyID_183);
        InstrumentParties_NoInstrumentParties_183.insert(InstrumentPartyID_183.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_183('1');
        noInstrumentParties_0_0_2_2.set(InstrumentPartyIDSource_183);
        InstrumentParties_NoInstrumentParties_183.insert(InstrumentPartyIDSource_183.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_183(729718156);
        noInstrumentParties_0_0_2_2.set(InstrumentPartyRole_183);
        InstrumentParties_NoInstrumentParties_183.insert(InstrumentPartyRole_183.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_183);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384;
          FIX::InstrumentPartySubID InstrumentPartySubID_384("STRING_860809466");
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubID_384);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384.insert(InstrumentPartySubID_384.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_384(2007428313);
          noInstrumentPartySubIDs_0_0_2_3_0.set(InstrumentPartySubIDType_384);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384.insert(InstrumentPartySubIDType_384.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384);

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385;
          FIX::InstrumentPartySubID InstrumentPartySubID_385("STRING_90156308");
          noInstrumentPartySubIDs_0_0_2_3_1.set(InstrumentPartySubID_385);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385.insert(InstrumentPartySubID_385.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_385(1556414852);
          noInstrumentPartySubIDs_0_0_2_3_1.set(InstrumentPartySubIDType_385);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385.insert(InstrumentPartySubIDType_385.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385);

          noInstrumentParties_0_0_2_2.addGroup(noInstrumentPartySubIDs_0_0_2_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_204;
        FIX::SecurityAltID SecurityAltID_204("STRING_939728142");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_204);
        SecAltIDGrp_NoSecurityAltID_204.insert(SecurityAltID_204.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_204("STRING_2038721038");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_204);
        SecAltIDGrp_NoSecurityAltID_204.insert(SecurityAltIDSource_204.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_204);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_205;
        FIX::SecurityAltID SecurityAltID_205("STRING_83699717");
        noSecurityAltID_0_0_2_1.set(SecurityAltID_205);
        SecAltIDGrp_NoSecurityAltID_205.insert(SecurityAltID_205.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_205("STRING_20488024");
        noSecurityAltID_0_0_2_1.set(SecurityAltIDSource_205);
        SecAltIDGrp_NoSecurityAltID_205.insert(SecurityAltIDSource_205.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_205);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_206;
        FIX::SecurityAltID SecurityAltID_206("STRING_31302649");
        noSecurityAltID_0_0_2_2.set(SecurityAltID_206);
        SecAltIDGrp_NoSecurityAltID_206.insert(SecurityAltID_206.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_206("STRING_1318339997");
        noSecurityAltID_0_0_2_2.set(SecurityAltIDSource_206);
        SecAltIDGrp_NoSecurityAltID_206.insert(SecurityAltIDSource_206.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_206);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_182;
      FIX::SecurityXML SecurityXML_183("XMLDATA_1658064204");
      noRelatedSym_0_1_0.set(SecurityXML_183);
      FIX::SecurityXMLLen SecurityXMLLen_91(226300197);
      noRelatedSym_0_1_0.set(SecurityXMLLen_91);
      FIX::SecurityXMLSchema SecurityXMLSchema_91("STRING_2145906375");
      noRelatedSym_0_1_0.set(SecurityXMLSchema_91);
      SecurityXML_182.insert(SecurityXMLSchema_91.getString());
      all_values.push_back(SecurityXML_182);

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_1;
      // StrmAsgnRptInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnRptInstrmtGrp_NoRelatedSym_1;
      FIX::EncodedText EncodedText_88("DATA_34331247");
      noRelatedSym_0_1_1.set(EncodedText_88);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(EncodedText_88.getString());
      FIX::EncodedTextLen EncodedTextLen_88(1920030734);
      noRelatedSym_0_1_1.set(EncodedTextLen_88);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(EncodedTextLen_88.getString());
      FIX::MDStreamID MDStreamID_5("STRING_1773208204");
      noRelatedSym_0_1_1.set(MDStreamID_5);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(MDStreamID_5.getString());
      FIX::SettlType SettlType_27("STRING_0");
      noRelatedSym_0_1_1.set(SettlType_27);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(SettlType_27.getString());
      FIX::StreamAsgnRejReason StreamAsgnRejReason_1(0);
      noRelatedSym_0_1_1.set(StreamAsgnRejReason_1);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(StreamAsgnRejReason_1.getString());
      FIX::StreamAsgnType StreamAsgnType_1(1);
      noRelatedSym_0_1_1.set(StreamAsgnType_1);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(StreamAsgnType_1.getString());
      FIX::Text Text_88("STRING_1751823909");
      noRelatedSym_0_1_1.set(Text_88);
      StrmAsgnRptInstrmtGrp_NoRelatedSym_1.insert(Text_88.getString());
      all_values.push_back(StrmAsgnRptInstrmtGrp_NoRelatedSym_1);

      // Instrument
      multiset<string> Instrument_92;
      FIX::AttachmentPoint AttachmentPoint_92;
      AttachmentPoint_92.setString("46.210000");
      noRelatedSym_0_1_1.set(AttachmentPoint_92);
      Instrument_92.insert(AttachmentPoint_92.getString());
      FIX::CFICode CFICode_97("STRING_1170542195");
      noRelatedSym_0_1_1.set(CFICode_97);
      Instrument_92.insert(CFICode_97.getString());
      FIX::CPProgram CPProgram_92(2);
      noRelatedSym_0_1_1.set(CPProgram_92);
      Instrument_92.insert(CPProgram_92.getString());
      FIX::CPRegType CPRegType_92("STRING_1506174828");
      noRelatedSym_0_1_1.set(CPRegType_92);
      Instrument_92.insert(CPRegType_92.getString());
      FIX::CapPrice CapPrice_92;
      CapPrice_92.setString("3708301");
      noRelatedSym_0_1_1.set(CapPrice_92);
      Instrument_92.insert(CapPrice_92.getString());
      FIX::ContractMultiplier ContractMultiplier_92;
      ContractMultiplier_92.setString("18888136");
      noRelatedSym_0_1_1.set(ContractMultiplier_92);
      Instrument_92.insert(ContractMultiplier_92.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_92(1);
      noRelatedSym_0_1_1.set(ContractMultiplierUnit_92);
      Instrument_92.insert(ContractMultiplierUnit_92.getString());
      FIX::ContractSettlMonth ContractSettlMonth_92("MONTHYEAR_1815566079");
      noRelatedSym_0_1_1.set(ContractSettlMonth_92);
      Instrument_92.insert(ContractSettlMonth_92.getString());
      FIX::CountryOfIssue CountryOfIssue_92("COUNTRY_471048144");
      noRelatedSym_0_1_1.set(CountryOfIssue_92);
      Instrument_92.insert(CountryOfIssue_92.getString());
      FIX::CouponPaymentDate CouponPaymentDate_92("LOCALMKTDATE_228197856");
      noRelatedSym_0_1_1.set(CouponPaymentDate_92);
      Instrument_92.insert(CouponPaymentDate_92.getString());
      FIX::CouponRate CouponRate_92;
      CouponRate_92.setString("18.970000");
      noRelatedSym_0_1_1.set(CouponRate_92);
      Instrument_92.insert(CouponRate_92.getString());
      FIX::CreditRating CreditRating_92("STRING_330992810");
      noRelatedSym_0_1_1.set(CreditRating_92);
      Instrument_92.insert(CreditRating_92.getString());
      FIX::DatedDate DatedDate_92("LOCALMKTDATE_318354164");
      noRelatedSym_0_1_1.set(DatedDate_92);
      Instrument_92.insert(DatedDate_92.getString());
      FIX::DetachmentPoint DetachmentPoint_92;
      DetachmentPoint_92.setString("67.490000");
      noRelatedSym_0_1_1.set(DetachmentPoint_92);
      Instrument_92.insert(DetachmentPoint_92.getString());
      FIX::EncodedIssuer EncodedIssuer_92("DATA_1302960580");
      noRelatedSym_0_1_1.set(EncodedIssuer_92);
      Instrument_92.insert(EncodedIssuer_92.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_92(1258082307);
      noRelatedSym_0_1_1.set(EncodedIssuerLen_92);
      Instrument_92.insert(EncodedIssuerLen_92.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_92("DATA_1976544139");
      noRelatedSym_0_1_1.set(EncodedSecurityDesc_92);
      Instrument_92.insert(EncodedSecurityDesc_92.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_92(1386660297);
      noRelatedSym_0_1_1.set(EncodedSecurityDescLen_92);
      Instrument_92.insert(EncodedSecurityDescLen_92.getString());
      FIX::ExerciseStyle ExerciseStyle_92(1);
      noRelatedSym_0_1_1.set(ExerciseStyle_92);
      Instrument_92.insert(ExerciseStyle_92.getString());
      FIX::Factor Factor_92;
      Factor_92.setString("20078467");
      noRelatedSym_0_1_1.set(Factor_92);
      Instrument_92.insert(Factor_92.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_92(true);
      noRelatedSym_0_1_1.set(FlexProductEligibilityIndicator_92);
      Instrument_92.insert(FlexProductEligibilityIndicator_92.getString());
      FIX::FlexibleIndicator FlexibleIndicator_92(false);
      noRelatedSym_0_1_1.set(FlexibleIndicator_92);
      Instrument_92.insert(FlexibleIndicator_92.getString());
      FIX::FloorPrice FloorPrice_92;
      FloorPrice_92.setString("866633");
      noRelatedSym_0_1_1.set(FloorPrice_92);
      Instrument_92.insert(FloorPrice_92.getString());
      FIX::FlowScheduleType FlowScheduleType_92(4);
      noRelatedSym_0_1_1.set(FlowScheduleType_92);
      Instrument_92.insert(FlowScheduleType_92.getString());
      FIX::InstrRegistry InstrRegistry_92("STRING_823482135");
      noRelatedSym_0_1_1.set(InstrRegistry_92);
      Instrument_92.insert(InstrRegistry_92.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_92('2');
      noRelatedSym_0_1_1.set(InstrmtAssignmentMethod_92);
      Instrument_92.insert(InstrmtAssignmentMethod_92.getString());
      FIX::InterestAccrualDate InterestAccrualDate_92("LOCALMKTDATE_181663930");
      noRelatedSym_0_1_1.set(InterestAccrualDate_92);
      Instrument_92.insert(InterestAccrualDate_92.getString());
      FIX::IssueDate IssueDate_92("LOCALMKTDATE_1989662091");
      noRelatedSym_0_1_1.set(IssueDate_92);
      Instrument_92.insert(IssueDate_92.getString());
      FIX::Issuer Issuer_92("STRING_293052305");
      noRelatedSym_0_1_1.set(Issuer_92);
      Instrument_92.insert(Issuer_92.getString());
      FIX::ListMethod ListMethod_92(1);
      noRelatedSym_0_1_1.set(ListMethod_92);
      Instrument_92.insert(ListMethod_92.getString());
      FIX::LocaleOfIssue LocaleOfIssue_92("STRING_1594002352");
      noRelatedSym_0_1_1.set(LocaleOfIssue_92);
      Instrument_92.insert(LocaleOfIssue_92.getString());
      FIX::MaturityDate MaturityDate_92("LOCALMKTDATE_1114806926");
      noRelatedSym_0_1_1.set(MaturityDate_92);
      Instrument_92.insert(MaturityDate_92.getString());
      FIX::MaturityMonthYear MaturityMonthYear_92("MONTHYEAR_1343893769");
      noRelatedSym_0_1_1.set(MaturityMonthYear_92);
      Instrument_92.insert(MaturityMonthYear_92.getString());
      FIX::MaturityTime MaturityTime_92("TZTIMEONLY_2040458912");
      noRelatedSym_0_1_1.set(MaturityTime_92);
      Instrument_92.insert(MaturityTime_92.getString());
      FIX::MinPriceIncrement MinPriceIncrement_92;
      MinPriceIncrement_92.setString("4734981");
      noRelatedSym_0_1_1.set(MinPriceIncrement_92);
      Instrument_92.insert(MinPriceIncrement_92.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_92;
      MinPriceIncrementAmount_92.setString("17147239");
      noRelatedSym_0_1_1.set(MinPriceIncrementAmount_92);
      Instrument_92.insert(MinPriceIncrementAmount_92.getString());
      FIX::NTPositionLimit NTPositionLimit_92(1781788900);
      noRelatedSym_0_1_1.set(NTPositionLimit_92);
      Instrument_92.insert(NTPositionLimit_92.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_92;
      NotionalPercentageOutstanding_92.setString("11.060000");
      noRelatedSym_0_1_1.set(NotionalPercentageOutstanding_92);
      Instrument_92.insert(NotionalPercentageOutstanding_92.getString());
      FIX::OptAttribute OptAttribute_92('1');
      noRelatedSym_0_1_1.set(OptAttribute_92);
      Instrument_92.insert(OptAttribute_92.getString());
      FIX::OptPayoutAmount OptPayoutAmount_92;
      OptPayoutAmount_92.setString("1053533");
      noRelatedSym_0_1_1.set(OptPayoutAmount_92);
      Instrument_92.insert(OptPayoutAmount_92.getString());
      FIX::OptPayoutType OptPayoutType_92(2);
      noRelatedSym_0_1_1.set(OptPayoutType_92);
      Instrument_92.insert(OptPayoutType_92.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_92;
      OriginalNotionalPercentageOutstanding_92.setString("82.510000");
      noRelatedSym_0_1_1.set(OriginalNotionalPercentageOutstanding_92);
      Instrument_92.insert(OriginalNotionalPercentageOutstanding_92.getString());
      FIX::Pool Pool_92("STRING_436346207");
      noRelatedSym_0_1_1.set(Pool_92);
      Instrument_92.insert(Pool_92.getString());
      FIX::PositionLimit PositionLimit_92(1448643127);
      noRelatedSym_0_1_1.set(PositionLimit_92);
      Instrument_92.insert(PositionLimit_92.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_92("STRING_STD");
      noRelatedSym_0_1_1.set(PriceQuoteMethod_92);
      Instrument_92.insert(PriceQuoteMethod_92.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_92("STRING_1739306787");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasure_92);
      Instrument_92.insert(PriceUnitOfMeasure_92.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_92;
      PriceUnitOfMeasureQty_92.setString("5592417");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasureQty_92);
      Instrument_92.insert(PriceUnitOfMeasureQty_92.getString());
      FIX::Product Product_100(4);
      noRelatedSym_0_1_1.set(Product_100);
      Instrument_92.insert(Product_100.getString());
      FIX::ProductComplex ProductComplex_92("STRING_978483437");
      noRelatedSym_0_1_1.set(ProductComplex_92);
      Instrument_92.insert(ProductComplex_92.getString());
      FIX::PutOrCall PutOrCall_92(1);
      noRelatedSym_0_1_1.set(PutOrCall_92);
      Instrument_92.insert(PutOrCall_92.getString());
      FIX::RedemptionDate RedemptionDate_92("LOCALMKTDATE_1538944984");
      noRelatedSym_0_1_1.set(RedemptionDate_92);
      Instrument_92.insert(RedemptionDate_92.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_92("STRING_1536000083");
      noRelatedSym_0_1_1.set(RepoCollateralSecurityType_92);
      Instrument_92.insert(RepoCollateralSecurityType_92.getString());
      FIX::RepurchaseRate RepurchaseRate_92;
      RepurchaseRate_92.setString("93.560000");
      noRelatedSym_0_1_1.set(RepurchaseRate_92);
      Instrument_92.insert(RepurchaseRate_92.getString());
      FIX::RepurchaseTerm RepurchaseTerm_92(1625608323);
      noRelatedSym_0_1_1.set(RepurchaseTerm_92);
      Instrument_92.insert(RepurchaseTerm_92.getString());
      FIX::RestructuringType RestructuringType_92("STRING_MR");
      noRelatedSym_0_1_1.set(RestructuringType_92);
      Instrument_92.insert(RestructuringType_92.getString());
      FIX::SecurityDesc SecurityDesc_92("STRING_1302961491");
      noRelatedSym_0_1_1.set(SecurityDesc_92);
      Instrument_92.insert(SecurityDesc_92.getString());
      FIX::SecurityExchange SecurityExchange_92("EXCHANGE_1484818748");
      noRelatedSym_0_1_1.set(SecurityExchange_92);
      Instrument_92.insert(SecurityExchange_92.getString());
      FIX::SecurityGroup SecurityGroup_92("STRING_126119739");
      noRelatedSym_0_1_1.set(SecurityGroup_92);
      Instrument_92.insert(SecurityGroup_92.getString());
      FIX::SecurityID SecurityID_92("STRING_1145139934");
      noRelatedSym_0_1_1.set(SecurityID_92);
      Instrument_92.insert(SecurityID_92.getString());
      FIX::SecurityIDSource SecurityIDSource_92("STRING_E");
      noRelatedSym_0_1_1.set(SecurityIDSource_92);
      Instrument_92.insert(SecurityIDSource_92.getString());
      FIX::SecurityStatus SecurityStatus_93("STRING_2");
      noRelatedSym_0_1_1.set(SecurityStatus_93);
      Instrument_92.insert(SecurityStatus_93.getString());
      FIX::SecuritySubType SecuritySubType_96("STRING_591658638");
      noRelatedSym_0_1_1.set(SecuritySubType_96);
      Instrument_92.insert(SecuritySubType_96.getString());
      FIX::SecurityType SecurityType_100("STRING_IRS");
      noRelatedSym_0_1_1.set(SecurityType_100);
      Instrument_92.insert(SecurityType_100.getString());
      FIX::Seniority Seniority_92("STRING_SB");
      noRelatedSym_0_1_1.set(Seniority_92);
      Instrument_92.insert(Seniority_92.getString());
      FIX::SettlMethod SettlMethod_92('P');
      noRelatedSym_0_1_1.set(SettlMethod_92);
      Instrument_92.insert(SettlMethod_92.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_92("STRING_1218692438");
      noRelatedSym_0_1_1.set(SettleOnOpenFlag_92);
      Instrument_92.insert(SettleOnOpenFlag_92.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_92("STRING_1210605357");
      noRelatedSym_0_1_1.set(StateOrProvinceOfIssue_92);
      Instrument_92.insert(StateOrProvinceOfIssue_92.getString());
      FIX::StrikeCurrency StrikeCurrency_92("USD");
      noRelatedSym_0_1_1.set(StrikeCurrency_92);
      Instrument_92.insert(StrikeCurrency_92.getString());
      FIX::StrikeMultiplier StrikeMultiplier_92;
      StrikeMultiplier_92.setString("4459280");
      noRelatedSym_0_1_1.set(StrikeMultiplier_92);
      Instrument_92.insert(StrikeMultiplier_92.getString());
      FIX::StrikePrice StrikePrice_92;
      StrikePrice_92.setString("2242925");
      noRelatedSym_0_1_1.set(StrikePrice_92);
      Instrument_92.insert(StrikePrice_92.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_92(5);
      noRelatedSym_0_1_1.set(StrikePriceBoundaryMethod_92);
      Instrument_92.insert(StrikePriceBoundaryMethod_92.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_92;
      StrikePriceBoundaryPrecision_92.setString("26.660000");
      noRelatedSym_0_1_1.set(StrikePriceBoundaryPrecision_92);
      Instrument_92.insert(StrikePriceBoundaryPrecision_92.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_92(4);
      noRelatedSym_0_1_1.set(StrikePriceDeterminationMethod_92);
      Instrument_92.insert(StrikePriceDeterminationMethod_92.getString());
      FIX::StrikeValue StrikeValue_92;
      StrikeValue_92.setString("4047483");
      noRelatedSym_0_1_1.set(StrikeValue_92);
      Instrument_92.insert(StrikeValue_92.getString());
      FIX::Symbol Symbol_92("STRING_2059664018");
      noRelatedSym_0_1_1.set(Symbol_92);
      Instrument_92.insert(Symbol_92.getString());
      FIX::SymbolSfx SymbolSfx_92("STRING_WI");
      noRelatedSym_0_1_1.set(SymbolSfx_92);
      Instrument_92.insert(SymbolSfx_92.getString());
      FIX::TimeUnit TimeUnit_92("STRING_Yr");
      noRelatedSym_0_1_1.set(TimeUnit_92);
      Instrument_92.insert(TimeUnit_92.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_92(2);
      noRelatedSym_0_1_1.set(UnderlyingPriceDeterminationMethod_92);
      Instrument_92.insert(UnderlyingPriceDeterminationMethod_92.getString());
      FIX::UnitOfMeasure UnitOfMeasure_92("STRING_tn");
      noRelatedSym_0_1_1.set(UnitOfMeasure_92);
      Instrument_92.insert(UnitOfMeasure_92.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_92;
      UnitOfMeasureQty_92.setString("6543185");
      noRelatedSym_0_1_1.set(UnitOfMeasureQty_92);
      Instrument_92.insert(UnitOfMeasureQty_92.getString());
      FIX::ValuationMethod ValuationMethod_92("STRING_EQTY");
      noRelatedSym_0_1_1.set(ValuationMethod_92);
      Instrument_92.insert(ValuationMethod_92.getString());
      all_values.push_back(Instrument_92);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_173;
        FIX::ComplexEventCondition ComplexEventCondition_173(2);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_173);
        ComplexEvents_NoComplexEvents_173.insert(ComplexEventCondition_173.getString());
        FIX::ComplexEventPrice ComplexEventPrice_173;
        ComplexEventPrice_173.setString("4603482");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_173);
        ComplexEvents_NoComplexEvents_173.insert(ComplexEventPrice_173.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_173(2);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_173);
        ComplexEvents_NoComplexEvents_173.insert(ComplexEventPriceBoundaryMethod_173.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_173;
        ComplexEventPriceBoundaryPrecision_173.setString("57.930000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_173);
        ComplexEvents_NoComplexEvents_173.insert(ComplexEventPriceBoundaryPrecision_173.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_173(1);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_173);
        ComplexEvents_NoComplexEvents_173.insert(ComplexEventPriceTimeType_173.getString());
        FIX::ComplexEventType ComplexEventType_173(4);
        noComplexEvents_0_1_2_0.set(ComplexEventType_173);
        ComplexEvents_NoComplexEvents_173.insert(ComplexEventType_173.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_173;
        ComplexOptPayoutAmount_173.setString("14344157");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_173);
        ComplexEvents_NoComplexEvents_173.insert(ComplexOptPayoutAmount_173.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_173);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_350;
          FIX::ComplexEventEndDate ComplexEventEndDate_350(FIX::UTCTIMESTAMP(6, 1, 27, 25, 4, 2000));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_350);
          ComplexEventDates_NoComplexEventDates_350.insert(ComplexEventEndDate_350.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_350(FIX::UTCTIMESTAMP(20, 47, 9, 27, 2, 2002));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_350);
          ComplexEventDates_NoComplexEventDates_350.insert(ComplexEventStartDate_350.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_350);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_704;
            FIX::ComplexEventEndTime ComplexEventEndTime_704(FIX::UTCTIMEONLY(3, 9, 29));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_704);
            ComplexEventTimes_NoComplexEventTimes_704.insert(ComplexEventEndTime_704.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_704(FIX::UTCTIMEONLY(6, 51, 47));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_704);
            ComplexEventTimes_NoComplexEventTimes_704.insert(ComplexEventStartTime_704.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_704);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_705;
            FIX::ComplexEventEndTime ComplexEventEndTime_705(FIX::UTCTIMEONLY(16, 8, 36));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventEndTime_705);
            ComplexEventTimes_NoComplexEventTimes_705.insert(ComplexEventEndTime_705.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_705(FIX::UTCTIMEONLY(12, 16, 11));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventStartTime_705);
            ComplexEventTimes_NoComplexEventTimes_705.insert(ComplexEventStartTime_705.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_705);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_706;
            FIX::ComplexEventEndTime ComplexEventEndTime_706(FIX::UTCTIMEONLY(2, 12, 1));
            noComplexEventTimes_0_1_0_0_4_2.set(ComplexEventEndTime_706);
            ComplexEventTimes_NoComplexEventTimes_706.insert(ComplexEventEndTime_706.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_706(FIX::UTCTIMEONLY(16, 18, 51));
            noComplexEventTimes_0_1_0_0_4_2.set(ComplexEventStartTime_706);
            ComplexEventTimes_NoComplexEventTimes_706.insert(ComplexEventStartTime_706.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_706);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_351;
          FIX::ComplexEventEndDate ComplexEventEndDate_351(FIX::UTCTIMESTAMP(9, 52, 7, 19, 2, 2012));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventEndDate_351);
          ComplexEventDates_NoComplexEventDates_351.insert(ComplexEventEndDate_351.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_351(FIX::UTCTIMESTAMP(20, 13, 39, 8, 8, 2012));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventStartDate_351);
          ComplexEventDates_NoComplexEventDates_351.insert(ComplexEventStartDate_351.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_351);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_707;
            FIX::ComplexEventEndTime ComplexEventEndTime_707(FIX::UTCTIMEONLY(14, 55, 51));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventEndTime_707);
            ComplexEventTimes_NoComplexEventTimes_707.insert(ComplexEventEndTime_707.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_707(FIX::UTCTIMEONLY(7, 7, 30));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventStartTime_707);
            ComplexEventTimes_NoComplexEventTimes_707.insert(ComplexEventStartTime_707.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_707);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_708;
            FIX::ComplexEventEndTime ComplexEventEndTime_708(FIX::UTCTIMEONLY(21, 35, 15));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventEndTime_708);
            ComplexEventTimes_NoComplexEventTimes_708.insert(ComplexEventEndTime_708.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_708(FIX::UTCTIMEONLY(15, 33, 51));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventStartTime_708);
            ComplexEventTimes_NoComplexEventTimes_708.insert(ComplexEventStartTime_708.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_708);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_1);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_352;
          FIX::ComplexEventEndDate ComplexEventEndDate_352(FIX::UTCTIMESTAMP(10, 44, 6, 1, 2, 2016));
          noComplexEventDates_0_1_0_3_2.set(ComplexEventEndDate_352);
          ComplexEventDates_NoComplexEventDates_352.insert(ComplexEventEndDate_352.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_352(FIX::UTCTIMESTAMP(9, 15, 27, 9, 3, 2008));
          noComplexEventDates_0_1_0_3_2.set(ComplexEventStartDate_352);
          ComplexEventDates_NoComplexEventDates_352.insert(ComplexEventStartDate_352.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_352);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_709;
            FIX::ComplexEventEndTime ComplexEventEndTime_709(FIX::UTCTIMEONLY(16, 47, 19));
            noComplexEventTimes_0_1_0_2_4_0.set(ComplexEventEndTime_709);
            ComplexEventTimes_NoComplexEventTimes_709.insert(ComplexEventEndTime_709.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_709(FIX::UTCTIMEONLY(19, 26, 2));
            noComplexEventTimes_0_1_0_2_4_0.set(ComplexEventStartTime_709);
            ComplexEventTimes_NoComplexEventTimes_709.insert(ComplexEventStartTime_709.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_709);

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_0);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_183;
        FIX::EventDate EventDate_183("LOCALMKTDATE_1663413939");
        noEvents_0_1_2_0.set(EventDate_183);
        EvntGrp_NoEvents_183.insert(EventDate_183.getString());
        FIX::EventPx EventPx_183;
        EventPx_183.setString("7488303");
        noEvents_0_1_2_0.set(EventPx_183);
        EvntGrp_NoEvents_183.insert(EventPx_183.getString());
        FIX::EventText EventText_183("STRING_1773146839");
        noEvents_0_1_2_0.set(EventText_183);
        EvntGrp_NoEvents_183.insert(EventText_183.getString());
        FIX::EventTime EventTime_183(FIX::UTCTIMESTAMP(20, 44, 31, 19, 8, 2015));
        noEvents_0_1_2_0.set(EventTime_183);
        EvntGrp_NoEvents_183.insert(EventTime_183.getString());
        FIX::EventType EventType_183(14);
        noEvents_0_1_2_0.set(EventType_183);
        EvntGrp_NoEvents_183.insert(EventType_183.getString());
        all_values.push_back(EvntGrp_NoEvents_183);

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_184;
        FIX::EventDate EventDate_184("LOCALMKTDATE_244664856");
        noEvents_0_1_2_1.set(EventDate_184);
        EvntGrp_NoEvents_184.insert(EventDate_184.getString());
        FIX::EventPx EventPx_184;
        EventPx_184.setString("1997105");
        noEvents_0_1_2_1.set(EventPx_184);
        EvntGrp_NoEvents_184.insert(EventPx_184.getString());
        FIX::EventText EventText_184("STRING_682768015");
        noEvents_0_1_2_1.set(EventText_184);
        EvntGrp_NoEvents_184.insert(EventText_184.getString());
        FIX::EventTime EventTime_184(FIX::UTCTIMESTAMP(5, 10, 52, 3, 5, 2004));
        noEvents_0_1_2_1.set(EventTime_184);
        EvntGrp_NoEvents_184.insert(EventTime_184.getString());
        FIX::EventType EventType_184(99);
        noEvents_0_1_2_1.set(EventType_184);
        EvntGrp_NoEvents_184.insert(EventType_184.getString());
        all_values.push_back(EvntGrp_NoEvents_184);

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_184;
        FIX::InstrumentPartyID InstrumentPartyID_184("STRING_19916754");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_184);
        InstrumentParties_NoInstrumentParties_184.insert(InstrumentPartyID_184.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_184('1');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_184);
        InstrumentParties_NoInstrumentParties_184.insert(InstrumentPartyIDSource_184.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_184(1066151524);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_184);
        InstrumentParties_NoInstrumentParties_184.insert(InstrumentPartyRole_184.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_184);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386;
          FIX::InstrumentPartySubID InstrumentPartySubID_386("STRING_1335389222");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_386);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386.insert(InstrumentPartySubID_386.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_386(582924083);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_386);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386.insert(InstrumentPartySubIDType_386.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387;
          FIX::InstrumentPartySubID InstrumentPartySubID_387("STRING_1894022197");
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubID_387);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387.insert(InstrumentPartySubID_387.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_387(858765358);
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubIDType_387);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387.insert(InstrumentPartySubIDType_387.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentReport::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_207;
        FIX::SecurityAltID SecurityAltID_207("STRING_495368946");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_207);
        SecAltIDGrp_NoSecurityAltID_207.insert(SecurityAltID_207.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_207("STRING_484428550");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_207);
        SecAltIDGrp_NoSecurityAltID_207.insert(SecurityAltIDSource_207.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_207);

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_184;
      FIX::SecurityXML SecurityXML_185("XMLDATA_762699574");
      noRelatedSym_0_1_1.set(SecurityXML_185);
      FIX::SecurityXMLLen SecurityXMLLen_92(898701423);
      noRelatedSym_0_1_1.set(SecurityXMLLen_92);
      FIX::SecurityXMLSchema SecurityXMLSchema_92("STRING_1664740974");
      noRelatedSym_0_1_1.set(SecurityXMLSchema_92);
      SecurityXML_184.insert(SecurityXMLSchema_92.getString());
      all_values.push_back(SecurityXML_184);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
