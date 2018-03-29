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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::StreamAssignmentRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentRequest_0;
  FIX::StreamAsgnReqID StreamAsgnReqID_1("STRING_396052405");
  msg.set(StreamAsgnReqID_1);
  StreamAssignmentRequest_0.insert(StreamAsgnReqID_1.getString());
  FIX::StreamAsgnReqType StreamAsgnReqType_1(2);
  msg.set(StreamAsgnReqType_1);
  StreamAssignmentRequest_0.insert(StreamAsgnReqType_1.getString());
  all_values.push_back(StreamAssignmentRequest_0);

  all_compo_names.insert("StreamAssignmentRequest");

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
      FIX::PartyID PartyID_148("STRING_1375927059");
      noPartyIDs_0_1_0.set(PartyID_148);
      Parties_NoPartyIDs_148.insert(PartyID_148.getString());
      FIX::PartyIDSource PartyIDSource_148('6');
      noPartyIDs_0_1_0.set(PartyIDSource_148);
      Parties_NoPartyIDs_148.insert(PartyIDSource_148.getString());
      FIX::PartyRole PartyRole_148(60);
      noPartyIDs_0_1_0.set(PartyRole_148);
      Parties_NoPartyIDs_148.insert(PartyRole_148.getString());
      all_values.push_back(Parties_NoPartyIDs_148);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_316;
        FIX::PartySubID PartySubID_316("STRING_1130552467");
        noPartySubIDs_0_0_2_0.set(PartySubID_316);
        PtysSubGrp_NoPartySubIDs_316.insert(PartySubID_316.getString());
        FIX::PartySubIDType PartySubIDType_316(15);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_316);
        PtysSubGrp_NoPartySubIDs_316.insert(PartySubIDType_316.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_316);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_317;
        FIX::PartySubID PartySubID_317("STRING_122780829");
        noPartySubIDs_0_0_2_1.set(PartySubID_317);
        PtysSubGrp_NoPartySubIDs_317.insert(PartySubID_317.getString());
        FIX::PartySubIDType PartySubIDType_317(6);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_317);
        PtysSubGrp_NoPartySubIDs_317.insert(PartySubIDType_317.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_317);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_149;
      FIX::PartyID PartyID_149("STRING_650048966");
      noPartyIDs_0_1_1.set(PartyID_149);
      Parties_NoPartyIDs_149.insert(PartyID_149.getString());
      FIX::PartyIDSource PartyIDSource_149('1');
      noPartyIDs_0_1_1.set(PartyIDSource_149);
      Parties_NoPartyIDs_149.insert(PartyIDSource_149.getString());
      FIX::PartyRole PartyRole_149(35);
      noPartyIDs_0_1_1.set(PartyRole_149);
      Parties_NoPartyIDs_149.insert(PartyRole_149.getString());
      all_values.push_back(Parties_NoPartyIDs_149);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_318;
        FIX::PartySubID PartySubID_318("STRING_936075792");
        noPartySubIDs_0_1_2_0.set(PartySubID_318);
        PtysSubGrp_NoPartySubIDs_318.insert(PartySubID_318.getString());
        FIX::PartySubIDType PartySubIDType_318(26);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_318);
        PtysSubGrp_NoPartySubIDs_318.insert(PartySubIDType_318.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_318);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_150;
      FIX::PartyID PartyID_150("STRING_802629259");
      noPartyIDs_0_1_2.set(PartyID_150);
      Parties_NoPartyIDs_150.insert(PartyID_150.getString());
      FIX::PartyIDSource PartyIDSource_150('I');
      noPartyIDs_0_1_2.set(PartyIDSource_150);
      Parties_NoPartyIDs_150.insert(PartyIDSource_150.getString());
      FIX::PartyRole PartyRole_150(18);
      noPartyIDs_0_1_2.set(PartyRole_150);
      Parties_NoPartyIDs_150.insert(PartyRole_150.getString());
      all_values.push_back(Parties_NoPartyIDs_150);
      all_compo_names.insert("Parties.NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_319;
        FIX::PartySubID PartySubID_319("STRING_1618751989");
        noPartySubIDs_0_2_2_0.set(PartySubID_319);
        PtysSubGrp_NoPartySubIDs_319.insert(PartySubID_319.getString());
        FIX::PartySubIDType PartySubIDType_319(3);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_319);
        PtysSubGrp_NoPartySubIDs_319.insert(PartySubIDType_319.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_319);
        all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // StrmAsgnReqInstrmtGrp
    // Group StrmAsgnReqInstrmtGrp.NoRelatedSym
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_0;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_0;
      FIX::MDEntrySize MDEntrySize_5;
      MDEntrySize_5.setString("20155266");
      noRelatedSym_0_1_0.set(MDEntrySize_5);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(MDEntrySize_5.getString());
      FIX::MDStreamID MDStreamID_8("STRING_1009246907");
      noRelatedSym_0_1_0.set(MDStreamID_8);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(MDStreamID_8.getString());
      FIX::SettlType SettlType_35("STRING_2");
      noRelatedSym_0_1_0.set(SettlType_35);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(SettlType_35.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_0);
      all_compo_names.insert("StrmAsgnReqInstrmtGrp.NoRelatedSym");

      // Instrument
      multiset<string> Instrument_97;
      FIX::AttachmentPoint AttachmentPoint_97;
      AttachmentPoint_97.setString("68.600000");
      noRelatedSym_0_1_0.set(AttachmentPoint_97);
      Instrument_97.insert(AttachmentPoint_97.getString());
      FIX::CFICode CFICode_102("STRING_1663581791");
      noRelatedSym_0_1_0.set(CFICode_102);
      Instrument_97.insert(CFICode_102.getString());
      FIX::CPProgram CPProgram_97(99);
      noRelatedSym_0_1_0.set(CPProgram_97);
      Instrument_97.insert(CPProgram_97.getString());
      FIX::CPRegType CPRegType_97("STRING_662689265");
      noRelatedSym_0_1_0.set(CPRegType_97);
      Instrument_97.insert(CPRegType_97.getString());
      FIX::CapPrice CapPrice_97;
      CapPrice_97.setString("8109388");
      noRelatedSym_0_1_0.set(CapPrice_97);
      Instrument_97.insert(CapPrice_97.getString());
      FIX::ContractMultiplier ContractMultiplier_97;
      ContractMultiplier_97.setString("11905725");
      noRelatedSym_0_1_0.set(ContractMultiplier_97);
      Instrument_97.insert(ContractMultiplier_97.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_97(1);
      noRelatedSym_0_1_0.set(ContractMultiplierUnit_97);
      Instrument_97.insert(ContractMultiplierUnit_97.getString());
      FIX::ContractSettlMonth ContractSettlMonth_97("MONTHYEAR_39382222");
      noRelatedSym_0_1_0.set(ContractSettlMonth_97);
      Instrument_97.insert(ContractSettlMonth_97.getString());
      FIX::CountryOfIssue CountryOfIssue_97("COUNTRY_1422231346");
      noRelatedSym_0_1_0.set(CountryOfIssue_97);
      Instrument_97.insert(CountryOfIssue_97.getString());
      FIX::CouponPaymentDate CouponPaymentDate_97("LOCALMKTDATE_1675494398");
      noRelatedSym_0_1_0.set(CouponPaymentDate_97);
      Instrument_97.insert(CouponPaymentDate_97.getString());
      FIX::CouponRate CouponRate_97;
      CouponRate_97.setString("23.040000");
      noRelatedSym_0_1_0.set(CouponRate_97);
      Instrument_97.insert(CouponRate_97.getString());
      FIX::CreditRating CreditRating_97("STRING_405300165");
      noRelatedSym_0_1_0.set(CreditRating_97);
      Instrument_97.insert(CreditRating_97.getString());
      FIX::DatedDate DatedDate_97("LOCALMKTDATE_1850740516");
      noRelatedSym_0_1_0.set(DatedDate_97);
      Instrument_97.insert(DatedDate_97.getString());
      FIX::DetachmentPoint DetachmentPoint_97;
      DetachmentPoint_97.setString("31.330000");
      noRelatedSym_0_1_0.set(DetachmentPoint_97);
      Instrument_97.insert(DetachmentPoint_97.getString());
      FIX::EncodedIssuer EncodedIssuer_97("DATA_361722118");
      noRelatedSym_0_1_0.set(EncodedIssuer_97);
      Instrument_97.insert(EncodedIssuer_97.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_97(353305835);
      noRelatedSym_0_1_0.set(EncodedIssuerLen_97);
      Instrument_97.insert(EncodedIssuerLen_97.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_97("DATA_295334192");
      noRelatedSym_0_1_0.set(EncodedSecurityDesc_97);
      Instrument_97.insert(EncodedSecurityDesc_97.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_97(1054860751);
      noRelatedSym_0_1_0.set(EncodedSecurityDescLen_97);
      Instrument_97.insert(EncodedSecurityDescLen_97.getString());
      FIX::ExerciseStyle ExerciseStyle_97(2);
      noRelatedSym_0_1_0.set(ExerciseStyle_97);
      Instrument_97.insert(ExerciseStyle_97.getString());
      FIX::Factor Factor_97;
      Factor_97.setString("12314099");
      noRelatedSym_0_1_0.set(Factor_97);
      Instrument_97.insert(Factor_97.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_97(false);
      noRelatedSym_0_1_0.set(FlexProductEligibilityIndicator_97);
      Instrument_97.insert(FlexProductEligibilityIndicator_97.getString());
      FIX::FlexibleIndicator FlexibleIndicator_97(false);
      noRelatedSym_0_1_0.set(FlexibleIndicator_97);
      Instrument_97.insert(FlexibleIndicator_97.getString());
      FIX::FloorPrice FloorPrice_97;
      FloorPrice_97.setString("3559989");
      noRelatedSym_0_1_0.set(FloorPrice_97);
      Instrument_97.insert(FloorPrice_97.getString());
      FIX::FlowScheduleType FlowScheduleType_97(3);
      noRelatedSym_0_1_0.set(FlowScheduleType_97);
      Instrument_97.insert(FlowScheduleType_97.getString());
      FIX::InstrRegistry InstrRegistry_97("STRING_472033702");
      noRelatedSym_0_1_0.set(InstrRegistry_97);
      Instrument_97.insert(InstrRegistry_97.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_97('1');
      noRelatedSym_0_1_0.set(InstrmtAssignmentMethod_97);
      Instrument_97.insert(InstrmtAssignmentMethod_97.getString());
      FIX::InterestAccrualDate InterestAccrualDate_97("LOCALMKTDATE_1306869736");
      noRelatedSym_0_1_0.set(InterestAccrualDate_97);
      Instrument_97.insert(InterestAccrualDate_97.getString());
      FIX::IssueDate IssueDate_97("LOCALMKTDATE_437882458");
      noRelatedSym_0_1_0.set(IssueDate_97);
      Instrument_97.insert(IssueDate_97.getString());
      FIX::Issuer Issuer_97("STRING_1842793916");
      noRelatedSym_0_1_0.set(Issuer_97);
      Instrument_97.insert(Issuer_97.getString());
      FIX::ListMethod ListMethod_97(0);
      noRelatedSym_0_1_0.set(ListMethod_97);
      Instrument_97.insert(ListMethod_97.getString());
      FIX::LocaleOfIssue LocaleOfIssue_97("STRING_539856960");
      noRelatedSym_0_1_0.set(LocaleOfIssue_97);
      Instrument_97.insert(LocaleOfIssue_97.getString());
      FIX::MaturityDate MaturityDate_97("LOCALMKTDATE_2109430776");
      noRelatedSym_0_1_0.set(MaturityDate_97);
      Instrument_97.insert(MaturityDate_97.getString());
      FIX::MaturityMonthYear MaturityMonthYear_97("MONTHYEAR_1832214787");
      noRelatedSym_0_1_0.set(MaturityMonthYear_97);
      Instrument_97.insert(MaturityMonthYear_97.getString());
      FIX::MaturityTime MaturityTime_97("TZTIMEONLY_1985259249");
      noRelatedSym_0_1_0.set(MaturityTime_97);
      Instrument_97.insert(MaturityTime_97.getString());
      FIX::MinPriceIncrement MinPriceIncrement_97;
      MinPriceIncrement_97.setString("6246363");
      noRelatedSym_0_1_0.set(MinPriceIncrement_97);
      Instrument_97.insert(MinPriceIncrement_97.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_97;
      MinPriceIncrementAmount_97.setString("4956699");
      noRelatedSym_0_1_0.set(MinPriceIncrementAmount_97);
      Instrument_97.insert(MinPriceIncrementAmount_97.getString());
      FIX::NTPositionLimit NTPositionLimit_97(1028348134);
      noRelatedSym_0_1_0.set(NTPositionLimit_97);
      Instrument_97.insert(NTPositionLimit_97.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_97;
      NotionalPercentageOutstanding_97.setString("70.620000");
      noRelatedSym_0_1_0.set(NotionalPercentageOutstanding_97);
      Instrument_97.insert(NotionalPercentageOutstanding_97.getString());
      FIX::OptAttribute OptAttribute_97('5');
      noRelatedSym_0_1_0.set(OptAttribute_97);
      Instrument_97.insert(OptAttribute_97.getString());
      FIX::OptPayoutAmount OptPayoutAmount_97;
      OptPayoutAmount_97.setString("3030958");
      noRelatedSym_0_1_0.set(OptPayoutAmount_97);
      Instrument_97.insert(OptPayoutAmount_97.getString());
      FIX::OptPayoutType OptPayoutType_97(3);
      noRelatedSym_0_1_0.set(OptPayoutType_97);
      Instrument_97.insert(OptPayoutType_97.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_97;
      OriginalNotionalPercentageOutstanding_97.setString("44.760000");
      noRelatedSym_0_1_0.set(OriginalNotionalPercentageOutstanding_97);
      Instrument_97.insert(OriginalNotionalPercentageOutstanding_97.getString());
      FIX::Pool Pool_97("STRING_708395998");
      noRelatedSym_0_1_0.set(Pool_97);
      Instrument_97.insert(Pool_97.getString());
      FIX::PositionLimit PositionLimit_97(1098944681);
      noRelatedSym_0_1_0.set(PositionLimit_97);
      Instrument_97.insert(PositionLimit_97.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_97("STRING_INX");
      noRelatedSym_0_1_0.set(PriceQuoteMethod_97);
      Instrument_97.insert(PriceQuoteMethod_97.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_97("STRING_1070118116");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasure_97);
      Instrument_97.insert(PriceUnitOfMeasure_97.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_97;
      PriceUnitOfMeasureQty_97.setString("14522505");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasureQty_97);
      Instrument_97.insert(PriceUnitOfMeasureQty_97.getString());
      FIX::Product Product_105(4);
      noRelatedSym_0_1_0.set(Product_105);
      Instrument_97.insert(Product_105.getString());
      FIX::ProductComplex ProductComplex_97("STRING_2124978867");
      noRelatedSym_0_1_0.set(ProductComplex_97);
      Instrument_97.insert(ProductComplex_97.getString());
      FIX::PutOrCall PutOrCall_97(0);
      noRelatedSym_0_1_0.set(PutOrCall_97);
      Instrument_97.insert(PutOrCall_97.getString());
      FIX::RedemptionDate RedemptionDate_97("LOCALMKTDATE_894274489");
      noRelatedSym_0_1_0.set(RedemptionDate_97);
      Instrument_97.insert(RedemptionDate_97.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_97("STRING_300872087");
      noRelatedSym_0_1_0.set(RepoCollateralSecurityType_97);
      Instrument_97.insert(RepoCollateralSecurityType_97.getString());
      FIX::RepurchaseRate RepurchaseRate_97;
      RepurchaseRate_97.setString("61.750000");
      noRelatedSym_0_1_0.set(RepurchaseRate_97);
      Instrument_97.insert(RepurchaseRate_97.getString());
      FIX::RepurchaseTerm RepurchaseTerm_97(1250273399);
      noRelatedSym_0_1_0.set(RepurchaseTerm_97);
      Instrument_97.insert(RepurchaseTerm_97.getString());
      FIX::RestructuringType RestructuringType_97("STRING_XR");
      noRelatedSym_0_1_0.set(RestructuringType_97);
      Instrument_97.insert(RestructuringType_97.getString());
      FIX::SecurityDesc SecurityDesc_97("STRING_1993069877");
      noRelatedSym_0_1_0.set(SecurityDesc_97);
      Instrument_97.insert(SecurityDesc_97.getString());
      FIX::SecurityExchange SecurityExchange_97("EXCHANGE_1077540650");
      noRelatedSym_0_1_0.set(SecurityExchange_97);
      Instrument_97.insert(SecurityExchange_97.getString());
      FIX::SecurityGroup SecurityGroup_97("STRING_2023105932");
      noRelatedSym_0_1_0.set(SecurityGroup_97);
      Instrument_97.insert(SecurityGroup_97.getString());
      FIX::SecurityID SecurityID_97("STRING_283468687");
      noRelatedSym_0_1_0.set(SecurityID_97);
      Instrument_97.insert(SecurityID_97.getString());
      FIX::SecurityIDSource SecurityIDSource_97("STRING_6");
      noRelatedSym_0_1_0.set(SecurityIDSource_97);
      Instrument_97.insert(SecurityIDSource_97.getString());
      FIX::SecurityStatus SecurityStatus_98("STRING_1");
      noRelatedSym_0_1_0.set(SecurityStatus_98);
      Instrument_97.insert(SecurityStatus_98.getString());
      FIX::SecuritySubType SecuritySubType_101("STRING_823325648");
      noRelatedSym_0_1_0.set(SecuritySubType_101);
      Instrument_97.insert(SecuritySubType_101.getString());
      FIX::SecurityType SecurityType_105("STRING_EUCORP");
      noRelatedSym_0_1_0.set(SecurityType_105);
      Instrument_97.insert(SecurityType_105.getString());
      FIX::Seniority Seniority_97("STRING_SR");
      noRelatedSym_0_1_0.set(Seniority_97);
      Instrument_97.insert(Seniority_97.getString());
      FIX::SettlMethod SettlMethod_97('P');
      noRelatedSym_0_1_0.set(SettlMethod_97);
      Instrument_97.insert(SettlMethod_97.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_97("STRING_1359434441");
      noRelatedSym_0_1_0.set(SettleOnOpenFlag_97);
      Instrument_97.insert(SettleOnOpenFlag_97.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_97("STRING_224656370");
      noRelatedSym_0_1_0.set(StateOrProvinceOfIssue_97);
      Instrument_97.insert(StateOrProvinceOfIssue_97.getString());
      FIX::StrikeCurrency StrikeCurrency_97("CAN");
      noRelatedSym_0_1_0.set(StrikeCurrency_97);
      Instrument_97.insert(StrikeCurrency_97.getString());
      FIX::StrikeMultiplier StrikeMultiplier_97;
      StrikeMultiplier_97.setString("7597085");
      noRelatedSym_0_1_0.set(StrikeMultiplier_97);
      Instrument_97.insert(StrikeMultiplier_97.getString());
      FIX::StrikePrice StrikePrice_97;
      StrikePrice_97.setString("19925452");
      noRelatedSym_0_1_0.set(StrikePrice_97);
      Instrument_97.insert(StrikePrice_97.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_97(5);
      noRelatedSym_0_1_0.set(StrikePriceBoundaryMethod_97);
      Instrument_97.insert(StrikePriceBoundaryMethod_97.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_97;
      StrikePriceBoundaryPrecision_97.setString("93.710000");
      noRelatedSym_0_1_0.set(StrikePriceBoundaryPrecision_97);
      Instrument_97.insert(StrikePriceBoundaryPrecision_97.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_97(3);
      noRelatedSym_0_1_0.set(StrikePriceDeterminationMethod_97);
      Instrument_97.insert(StrikePriceDeterminationMethod_97.getString());
      FIX::StrikeValue StrikeValue_97;
      StrikeValue_97.setString("14267767");
      noRelatedSym_0_1_0.set(StrikeValue_97);
      Instrument_97.insert(StrikeValue_97.getString());
      FIX::Symbol Symbol_97("STRING_17139684");
      noRelatedSym_0_1_0.set(Symbol_97);
      Instrument_97.insert(Symbol_97.getString());
      FIX::SymbolSfx SymbolSfx_97("STRING_CD");
      noRelatedSym_0_1_0.set(SymbolSfx_97);
      Instrument_97.insert(SymbolSfx_97.getString());
      FIX::TimeUnit TimeUnit_97("STRING_H");
      noRelatedSym_0_1_0.set(TimeUnit_97);
      Instrument_97.insert(TimeUnit_97.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_97(3);
      noRelatedSym_0_1_0.set(UnderlyingPriceDeterminationMethod_97);
      Instrument_97.insert(UnderlyingPriceDeterminationMethod_97.getString());
      FIX::UnitOfMeasure UnitOfMeasure_97("STRING_MMbbl");
      noRelatedSym_0_1_0.set(UnitOfMeasure_97);
      Instrument_97.insert(UnitOfMeasure_97.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_97;
      UnitOfMeasureQty_97.setString("7431304");
      noRelatedSym_0_1_0.set(UnitOfMeasureQty_97);
      Instrument_97.insert(UnitOfMeasureQty_97.getString());
      FIX::ValuationMethod ValuationMethod_97("STRING_CDSD");
      noRelatedSym_0_1_0.set(ValuationMethod_97);
      Instrument_97.insert(ValuationMethod_97.getString());
      all_values.push_back(Instrument_97);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_195;
        FIX::ComplexEventCondition ComplexEventCondition_195(2);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_195);
        ComplexEvents_NoComplexEvents_195.insert(ComplexEventCondition_195.getString());
        FIX::ComplexEventPrice ComplexEventPrice_195;
        ComplexEventPrice_195.setString("18245520");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_195);
        ComplexEvents_NoComplexEvents_195.insert(ComplexEventPrice_195.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_195(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_195);
        ComplexEvents_NoComplexEvents_195.insert(ComplexEventPriceBoundaryMethod_195.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_195;
        ComplexEventPriceBoundaryPrecision_195.setString("28.640000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_195);
        ComplexEvents_NoComplexEvents_195.insert(ComplexEventPriceBoundaryPrecision_195.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_195(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_195);
        ComplexEvents_NoComplexEvents_195.insert(ComplexEventPriceTimeType_195.getString());
        FIX::ComplexEventType ComplexEventType_195(8);
        noComplexEvents_0_0_2_0.set(ComplexEventType_195);
        ComplexEvents_NoComplexEvents_195.insert(ComplexEventType_195.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_195;
        ComplexOptPayoutAmount_195.setString("2457379");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_195);
        ComplexEvents_NoComplexEvents_195.insert(ComplexOptPayoutAmount_195.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_195);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_392;
          FIX::ComplexEventEndDate ComplexEventEndDate_392(FIX::UTCTIMESTAMP(16, 40, 39, 1, 10, 2017));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_392);
          ComplexEventDates_NoComplexEventDates_392.insert(ComplexEventEndDate_392.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_392(FIX::UTCTIMESTAMP(0, 32, 24, 7, 12, 2010));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_392);
          ComplexEventDates_NoComplexEventDates_392.insert(ComplexEventStartDate_392.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_392);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_797;
            FIX::ComplexEventEndTime ComplexEventEndTime_797(FIX::UTCTIMEONLY(8, 8, 17));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_797);
            ComplexEventTimes_NoComplexEventTimes_797.insert(ComplexEventEndTime_797.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_797(FIX::UTCTIMEONLY(13, 37, 18));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_797);
            ComplexEventTimes_NoComplexEventTimes_797.insert(ComplexEventStartTime_797.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_797);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_798;
            FIX::ComplexEventEndTime ComplexEventEndTime_798(FIX::UTCTIMEONLY(12, 54, 53));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_798);
            ComplexEventTimes_NoComplexEventTimes_798.insert(ComplexEventEndTime_798.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_798(FIX::UTCTIMEONLY(22, 37, 22));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_798);
            ComplexEventTimes_NoComplexEventTimes_798.insert(ComplexEventStartTime_798.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_798);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_799;
            FIX::ComplexEventEndTime ComplexEventEndTime_799(FIX::UTCTIMEONLY(9, 2, 54));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventEndTime_799);
            ComplexEventTimes_NoComplexEventTimes_799.insert(ComplexEventEndTime_799.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_799(FIX::UTCTIMEONLY(15, 23, 50));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventStartTime_799);
            ComplexEventTimes_NoComplexEventTimes_799.insert(ComplexEventStartTime_799.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_799);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_393;
          FIX::ComplexEventEndDate ComplexEventEndDate_393(FIX::UTCTIMESTAMP(11, 7, 42, 14, 10, 2014));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_393);
          ComplexEventDates_NoComplexEventDates_393.insert(ComplexEventEndDate_393.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_393(FIX::UTCTIMESTAMP(18, 11, 59, 4, 5, 2004));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_393);
          ComplexEventDates_NoComplexEventDates_393.insert(ComplexEventStartDate_393.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_393);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_800;
            FIX::ComplexEventEndTime ComplexEventEndTime_800(FIX::UTCTIMEONLY(20, 37, 53));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_800);
            ComplexEventTimes_NoComplexEventTimes_800.insert(ComplexEventEndTime_800.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_800(FIX::UTCTIMEONLY(11, 22, 4));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_800);
            ComplexEventTimes_NoComplexEventTimes_800.insert(ComplexEventStartTime_800.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_800);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_194;
        FIX::EventDate EventDate_194("LOCALMKTDATE_1794569203");
        noEvents_0_0_2_0.set(EventDate_194);
        EvntGrp_NoEvents_194.insert(EventDate_194.getString());
        FIX::EventPx EventPx_194;
        EventPx_194.setString("8967002");
        noEvents_0_0_2_0.set(EventPx_194);
        EvntGrp_NoEvents_194.insert(EventPx_194.getString());
        FIX::EventText EventText_194("STRING_983110864");
        noEvents_0_0_2_0.set(EventText_194);
        EvntGrp_NoEvents_194.insert(EventText_194.getString());
        FIX::EventTime EventTime_194(FIX::UTCTIMESTAMP(5, 19, 40, 0, 8, 2011));
        noEvents_0_0_2_0.set(EventTime_194);
        EvntGrp_NoEvents_194.insert(EventTime_194.getString());
        FIX::EventType EventType_194(11);
        noEvents_0_0_2_0.set(EventType_194);
        EvntGrp_NoEvents_194.insert(EventType_194.getString());
        all_values.push_back(EvntGrp_NoEvents_194);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_203;
        FIX::InstrumentPartyID InstrumentPartyID_203("STRING_46989708");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_203);
        InstrumentParties_NoInstrumentParties_203.insert(InstrumentPartyID_203.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_203('1');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_203);
        InstrumentParties_NoInstrumentParties_203.insert(InstrumentPartyIDSource_203.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_203(497356723);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_203);
        InstrumentParties_NoInstrumentParties_203.insert(InstrumentPartyRole_203.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_203);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392;
          FIX::InstrumentPartySubID InstrumentPartySubID_392("STRING_1149776396");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_392);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392.insert(InstrumentPartySubID_392.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_392(12381695);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_392);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392.insert(InstrumentPartySubIDType_392.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_204;
        FIX::InstrumentPartyID InstrumentPartyID_204("STRING_957535086");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_204);
        InstrumentParties_NoInstrumentParties_204.insert(InstrumentPartyID_204.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_204('1');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_204);
        InstrumentParties_NoInstrumentParties_204.insert(InstrumentPartyIDSource_204.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_204(1552363023);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_204);
        InstrumentParties_NoInstrumentParties_204.insert(InstrumentPartyRole_204.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_204);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393;
          FIX::InstrumentPartySubID InstrumentPartySubID_393("STRING_1347793068");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_393);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393.insert(InstrumentPartySubID_393.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_393(499401844);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_393);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393.insert(InstrumentPartySubIDType_393.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394;
          FIX::InstrumentPartySubID InstrumentPartySubID_394("STRING_1855986206");
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubID_394);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394.insert(InstrumentPartySubID_394.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_394(595097854);
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubIDType_394);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394.insert(InstrumentPartySubIDType_394.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_394);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_181;
        FIX::SecurityAltID SecurityAltID_181("STRING_1742271689");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_181);
        SecAltIDGrp_NoSecurityAltID_181.insert(SecurityAltID_181.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_181("STRING_1655244896");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_181);
        SecAltIDGrp_NoSecurityAltID_181.insert(SecurityAltIDSource_181.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_181);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_194;
      FIX::SecurityXML SecurityXML_195("XMLDATA_848390150");
      noRelatedSym_0_1_0.set(SecurityXML_195);
      FIX::SecurityXMLLen SecurityXMLLen_97(1043448279);
      noRelatedSym_0_1_0.set(SecurityXMLLen_97);
      FIX::SecurityXMLSchema SecurityXMLSchema_97("STRING_1302330452");
      noRelatedSym_0_1_0.set(SecurityXMLSchema_97);
      SecurityXML_194.insert(SecurityXMLSchema_97.getString());
      all_values.push_back(SecurityXML_194);
      all_compo_names.insert("SecurityXML");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_1;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_1;
      FIX::MDEntrySize MDEntrySize_6;
      MDEntrySize_6.setString("17450903");
      noRelatedSym_0_1_1.set(MDEntrySize_6);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(MDEntrySize_6.getString());
      FIX::MDStreamID MDStreamID_9("STRING_2026559143");
      noRelatedSym_0_1_1.set(MDStreamID_9);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(MDStreamID_9.getString());
      FIX::SettlType SettlType_36("STRING_9");
      noRelatedSym_0_1_1.set(SettlType_36);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(SettlType_36.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_1);
      all_compo_names.insert("StrmAsgnReqInstrmtGrp.NoRelatedSym");

      // Instrument
      multiset<string> Instrument_98;
      FIX::AttachmentPoint AttachmentPoint_98;
      AttachmentPoint_98.setString("67.930000");
      noRelatedSym_0_1_1.set(AttachmentPoint_98);
      Instrument_98.insert(AttachmentPoint_98.getString());
      FIX::CFICode CFICode_103("STRING_740852875");
      noRelatedSym_0_1_1.set(CFICode_103);
      Instrument_98.insert(CFICode_103.getString());
      FIX::CPProgram CPProgram_98(99);
      noRelatedSym_0_1_1.set(CPProgram_98);
      Instrument_98.insert(CPProgram_98.getString());
      FIX::CPRegType CPRegType_98("STRING_1336722413");
      noRelatedSym_0_1_1.set(CPRegType_98);
      Instrument_98.insert(CPRegType_98.getString());
      FIX::CapPrice CapPrice_98;
      CapPrice_98.setString("4377375");
      noRelatedSym_0_1_1.set(CapPrice_98);
      Instrument_98.insert(CapPrice_98.getString());
      FIX::ContractMultiplier ContractMultiplier_98;
      ContractMultiplier_98.setString("6373397");
      noRelatedSym_0_1_1.set(ContractMultiplier_98);
      Instrument_98.insert(ContractMultiplier_98.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_98(2);
      noRelatedSym_0_1_1.set(ContractMultiplierUnit_98);
      Instrument_98.insert(ContractMultiplierUnit_98.getString());
      FIX::ContractSettlMonth ContractSettlMonth_98("MONTHYEAR_723263335");
      noRelatedSym_0_1_1.set(ContractSettlMonth_98);
      Instrument_98.insert(ContractSettlMonth_98.getString());
      FIX::CountryOfIssue CountryOfIssue_98("COUNTRY_684329481");
      noRelatedSym_0_1_1.set(CountryOfIssue_98);
      Instrument_98.insert(CountryOfIssue_98.getString());
      FIX::CouponPaymentDate CouponPaymentDate_98("LOCALMKTDATE_1292304620");
      noRelatedSym_0_1_1.set(CouponPaymentDate_98);
      Instrument_98.insert(CouponPaymentDate_98.getString());
      FIX::CouponRate CouponRate_98;
      CouponRate_98.setString("0.590000");
      noRelatedSym_0_1_1.set(CouponRate_98);
      Instrument_98.insert(CouponRate_98.getString());
      FIX::CreditRating CreditRating_98("STRING_1960169223");
      noRelatedSym_0_1_1.set(CreditRating_98);
      Instrument_98.insert(CreditRating_98.getString());
      FIX::DatedDate DatedDate_98("LOCALMKTDATE_294597368");
      noRelatedSym_0_1_1.set(DatedDate_98);
      Instrument_98.insert(DatedDate_98.getString());
      FIX::DetachmentPoint DetachmentPoint_98;
      DetachmentPoint_98.setString("17.540000");
      noRelatedSym_0_1_1.set(DetachmentPoint_98);
      Instrument_98.insert(DetachmentPoint_98.getString());
      FIX::EncodedIssuer EncodedIssuer_98("DATA_770220662");
      noRelatedSym_0_1_1.set(EncodedIssuer_98);
      Instrument_98.insert(EncodedIssuer_98.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_98(1814706356);
      noRelatedSym_0_1_1.set(EncodedIssuerLen_98);
      Instrument_98.insert(EncodedIssuerLen_98.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_98("DATA_637881129");
      noRelatedSym_0_1_1.set(EncodedSecurityDesc_98);
      Instrument_98.insert(EncodedSecurityDesc_98.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_98(1764239391);
      noRelatedSym_0_1_1.set(EncodedSecurityDescLen_98);
      Instrument_98.insert(EncodedSecurityDescLen_98.getString());
      FIX::ExerciseStyle ExerciseStyle_98(1);
      noRelatedSym_0_1_1.set(ExerciseStyle_98);
      Instrument_98.insert(ExerciseStyle_98.getString());
      FIX::Factor Factor_98;
      Factor_98.setString("11372829");
      noRelatedSym_0_1_1.set(Factor_98);
      Instrument_98.insert(Factor_98.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_98(false);
      noRelatedSym_0_1_1.set(FlexProductEligibilityIndicator_98);
      Instrument_98.insert(FlexProductEligibilityIndicator_98.getString());
      FIX::FlexibleIndicator FlexibleIndicator_98(false);
      noRelatedSym_0_1_1.set(FlexibleIndicator_98);
      Instrument_98.insert(FlexibleIndicator_98.getString());
      FIX::FloorPrice FloorPrice_98;
      FloorPrice_98.setString("8928738");
      noRelatedSym_0_1_1.set(FloorPrice_98);
      Instrument_98.insert(FloorPrice_98.getString());
      FIX::FlowScheduleType FlowScheduleType_98(0);
      noRelatedSym_0_1_1.set(FlowScheduleType_98);
      Instrument_98.insert(FlowScheduleType_98.getString());
      FIX::InstrRegistry InstrRegistry_98("STRING_1117874879");
      noRelatedSym_0_1_1.set(InstrRegistry_98);
      Instrument_98.insert(InstrRegistry_98.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_98('1');
      noRelatedSym_0_1_1.set(InstrmtAssignmentMethod_98);
      Instrument_98.insert(InstrmtAssignmentMethod_98.getString());
      FIX::InterestAccrualDate InterestAccrualDate_98("LOCALMKTDATE_2110978270");
      noRelatedSym_0_1_1.set(InterestAccrualDate_98);
      Instrument_98.insert(InterestAccrualDate_98.getString());
      FIX::IssueDate IssueDate_98("LOCALMKTDATE_272721683");
      noRelatedSym_0_1_1.set(IssueDate_98);
      Instrument_98.insert(IssueDate_98.getString());
      FIX::Issuer Issuer_98("STRING_1338870749");
      noRelatedSym_0_1_1.set(Issuer_98);
      Instrument_98.insert(Issuer_98.getString());
      FIX::ListMethod ListMethod_98(1);
      noRelatedSym_0_1_1.set(ListMethod_98);
      Instrument_98.insert(ListMethod_98.getString());
      FIX::LocaleOfIssue LocaleOfIssue_98("STRING_1539241005");
      noRelatedSym_0_1_1.set(LocaleOfIssue_98);
      Instrument_98.insert(LocaleOfIssue_98.getString());
      FIX::MaturityDate MaturityDate_98("LOCALMKTDATE_963803894");
      noRelatedSym_0_1_1.set(MaturityDate_98);
      Instrument_98.insert(MaturityDate_98.getString());
      FIX::MaturityMonthYear MaturityMonthYear_98("MONTHYEAR_583422992");
      noRelatedSym_0_1_1.set(MaturityMonthYear_98);
      Instrument_98.insert(MaturityMonthYear_98.getString());
      FIX::MaturityTime MaturityTime_98("TZTIMEONLY_64215750");
      noRelatedSym_0_1_1.set(MaturityTime_98);
      Instrument_98.insert(MaturityTime_98.getString());
      FIX::MinPriceIncrement MinPriceIncrement_98;
      MinPriceIncrement_98.setString("1530426");
      noRelatedSym_0_1_1.set(MinPriceIncrement_98);
      Instrument_98.insert(MinPriceIncrement_98.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_98;
      MinPriceIncrementAmount_98.setString("10211605");
      noRelatedSym_0_1_1.set(MinPriceIncrementAmount_98);
      Instrument_98.insert(MinPriceIncrementAmount_98.getString());
      FIX::NTPositionLimit NTPositionLimit_98(701555523);
      noRelatedSym_0_1_1.set(NTPositionLimit_98);
      Instrument_98.insert(NTPositionLimit_98.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_98;
      NotionalPercentageOutstanding_98.setString("49.750000");
      noRelatedSym_0_1_1.set(NotionalPercentageOutstanding_98);
      Instrument_98.insert(NotionalPercentageOutstanding_98.getString());
      FIX::OptAttribute OptAttribute_98('1');
      noRelatedSym_0_1_1.set(OptAttribute_98);
      Instrument_98.insert(OptAttribute_98.getString());
      FIX::OptPayoutAmount OptPayoutAmount_98;
      OptPayoutAmount_98.setString("13858850");
      noRelatedSym_0_1_1.set(OptPayoutAmount_98);
      Instrument_98.insert(OptPayoutAmount_98.getString());
      FIX::OptPayoutType OptPayoutType_98(3);
      noRelatedSym_0_1_1.set(OptPayoutType_98);
      Instrument_98.insert(OptPayoutType_98.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_98;
      OriginalNotionalPercentageOutstanding_98.setString("2.930000");
      noRelatedSym_0_1_1.set(OriginalNotionalPercentageOutstanding_98);
      Instrument_98.insert(OriginalNotionalPercentageOutstanding_98.getString());
      FIX::Pool Pool_98("STRING_1198570579");
      noRelatedSym_0_1_1.set(Pool_98);
      Instrument_98.insert(Pool_98.getString());
      FIX::PositionLimit PositionLimit_98(764653316);
      noRelatedSym_0_1_1.set(PositionLimit_98);
      Instrument_98.insert(PositionLimit_98.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_98("STRING_PCTPAR");
      noRelatedSym_0_1_1.set(PriceQuoteMethod_98);
      Instrument_98.insert(PriceQuoteMethod_98.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_98("STRING_1968791241");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasure_98);
      Instrument_98.insert(PriceUnitOfMeasure_98.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_98;
      PriceUnitOfMeasureQty_98.setString("4318760");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasureQty_98);
      Instrument_98.insert(PriceUnitOfMeasureQty_98.getString());
      FIX::Product Product_106(6);
      noRelatedSym_0_1_1.set(Product_106);
      Instrument_98.insert(Product_106.getString());
      FIX::ProductComplex ProductComplex_98("STRING_1585546984");
      noRelatedSym_0_1_1.set(ProductComplex_98);
      Instrument_98.insert(ProductComplex_98.getString());
      FIX::PutOrCall PutOrCall_98(1);
      noRelatedSym_0_1_1.set(PutOrCall_98);
      Instrument_98.insert(PutOrCall_98.getString());
      FIX::RedemptionDate RedemptionDate_98("LOCALMKTDATE_1678242502");
      noRelatedSym_0_1_1.set(RedemptionDate_98);
      Instrument_98.insert(RedemptionDate_98.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_98("STRING_910805285");
      noRelatedSym_0_1_1.set(RepoCollateralSecurityType_98);
      Instrument_98.insert(RepoCollateralSecurityType_98.getString());
      FIX::RepurchaseRate RepurchaseRate_98;
      RepurchaseRate_98.setString("17.840000");
      noRelatedSym_0_1_1.set(RepurchaseRate_98);
      Instrument_98.insert(RepurchaseRate_98.getString());
      FIX::RepurchaseTerm RepurchaseTerm_98(423632713);
      noRelatedSym_0_1_1.set(RepurchaseTerm_98);
      Instrument_98.insert(RepurchaseTerm_98.getString());
      FIX::RestructuringType RestructuringType_98("STRING_FR");
      noRelatedSym_0_1_1.set(RestructuringType_98);
      Instrument_98.insert(RestructuringType_98.getString());
      FIX::SecurityDesc SecurityDesc_98("STRING_2027396664");
      noRelatedSym_0_1_1.set(SecurityDesc_98);
      Instrument_98.insert(SecurityDesc_98.getString());
      FIX::SecurityExchange SecurityExchange_98("EXCHANGE_17413075");
      noRelatedSym_0_1_1.set(SecurityExchange_98);
      Instrument_98.insert(SecurityExchange_98.getString());
      FIX::SecurityGroup SecurityGroup_98("STRING_1941829898");
      noRelatedSym_0_1_1.set(SecurityGroup_98);
      Instrument_98.insert(SecurityGroup_98.getString());
      FIX::SecurityID SecurityID_98("STRING_152634699");
      noRelatedSym_0_1_1.set(SecurityID_98);
      Instrument_98.insert(SecurityID_98.getString());
      FIX::SecurityIDSource SecurityIDSource_98("STRING_H");
      noRelatedSym_0_1_1.set(SecurityIDSource_98);
      Instrument_98.insert(SecurityIDSource_98.getString());
      FIX::SecurityStatus SecurityStatus_99("STRING_2");
      noRelatedSym_0_1_1.set(SecurityStatus_99);
      Instrument_98.insert(SecurityStatus_99.getString());
      FIX::SecuritySubType SecuritySubType_102("STRING_1691875704");
      noRelatedSym_0_1_1.set(SecuritySubType_102);
      Instrument_98.insert(SecuritySubType_102.getString());
      FIX::SecurityType SecurityType_106("STRING_TPRN");
      noRelatedSym_0_1_1.set(SecurityType_106);
      Instrument_98.insert(SecurityType_106.getString());
      FIX::Seniority Seniority_98("STRING_SR");
      noRelatedSym_0_1_1.set(Seniority_98);
      Instrument_98.insert(Seniority_98.getString());
      FIX::SettlMethod SettlMethod_98('P');
      noRelatedSym_0_1_1.set(SettlMethod_98);
      Instrument_98.insert(SettlMethod_98.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_98("STRING_325646730");
      noRelatedSym_0_1_1.set(SettleOnOpenFlag_98);
      Instrument_98.insert(SettleOnOpenFlag_98.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_98("STRING_1241499906");
      noRelatedSym_0_1_1.set(StateOrProvinceOfIssue_98);
      Instrument_98.insert(StateOrProvinceOfIssue_98.getString());
      FIX::StrikeCurrency StrikeCurrency_98("CAN");
      noRelatedSym_0_1_1.set(StrikeCurrency_98);
      Instrument_98.insert(StrikeCurrency_98.getString());
      FIX::StrikeMultiplier StrikeMultiplier_98;
      StrikeMultiplier_98.setString("8384401");
      noRelatedSym_0_1_1.set(StrikeMultiplier_98);
      Instrument_98.insert(StrikeMultiplier_98.getString());
      FIX::StrikePrice StrikePrice_98;
      StrikePrice_98.setString("16960483");
      noRelatedSym_0_1_1.set(StrikePrice_98);
      Instrument_98.insert(StrikePrice_98.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_98(4);
      noRelatedSym_0_1_1.set(StrikePriceBoundaryMethod_98);
      Instrument_98.insert(StrikePriceBoundaryMethod_98.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_98;
      StrikePriceBoundaryPrecision_98.setString("4.330000");
      noRelatedSym_0_1_1.set(StrikePriceBoundaryPrecision_98);
      Instrument_98.insert(StrikePriceBoundaryPrecision_98.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_98(2);
      noRelatedSym_0_1_1.set(StrikePriceDeterminationMethod_98);
      Instrument_98.insert(StrikePriceDeterminationMethod_98.getString());
      FIX::StrikeValue StrikeValue_98;
      StrikeValue_98.setString("7381073");
      noRelatedSym_0_1_1.set(StrikeValue_98);
      Instrument_98.insert(StrikeValue_98.getString());
      FIX::Symbol Symbol_98("STRING_1559078832");
      noRelatedSym_0_1_1.set(Symbol_98);
      Instrument_98.insert(Symbol_98.getString());
      FIX::SymbolSfx SymbolSfx_98("STRING_WI");
      noRelatedSym_0_1_1.set(SymbolSfx_98);
      Instrument_98.insert(SymbolSfx_98.getString());
      FIX::TimeUnit TimeUnit_98("STRING_Yr");
      noRelatedSym_0_1_1.set(TimeUnit_98);
      Instrument_98.insert(TimeUnit_98.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_98(2);
      noRelatedSym_0_1_1.set(UnderlyingPriceDeterminationMethod_98);
      Instrument_98.insert(UnderlyingPriceDeterminationMethod_98.getString());
      FIX::UnitOfMeasure UnitOfMeasure_98("STRING_Gal");
      noRelatedSym_0_1_1.set(UnitOfMeasure_98);
      Instrument_98.insert(UnitOfMeasure_98.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_98;
      UnitOfMeasureQty_98.setString("4693914");
      noRelatedSym_0_1_1.set(UnitOfMeasureQty_98);
      Instrument_98.insert(UnitOfMeasureQty_98.getString());
      FIX::ValuationMethod ValuationMethod_98("STRING_EQTY");
      noRelatedSym_0_1_1.set(ValuationMethod_98);
      Instrument_98.insert(ValuationMethod_98.getString());
      all_values.push_back(Instrument_98);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_196;
        FIX::ComplexEventCondition ComplexEventCondition_196(2);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_196);
        ComplexEvents_NoComplexEvents_196.insert(ComplexEventCondition_196.getString());
        FIX::ComplexEventPrice ComplexEventPrice_196;
        ComplexEventPrice_196.setString("20544299");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_196);
        ComplexEvents_NoComplexEvents_196.insert(ComplexEventPrice_196.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_196(5);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_196);
        ComplexEvents_NoComplexEvents_196.insert(ComplexEventPriceBoundaryMethod_196.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_196;
        ComplexEventPriceBoundaryPrecision_196.setString("62.990000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_196);
        ComplexEvents_NoComplexEvents_196.insert(ComplexEventPriceBoundaryPrecision_196.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_196(2);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_196);
        ComplexEvents_NoComplexEvents_196.insert(ComplexEventPriceTimeType_196.getString());
        FIX::ComplexEventType ComplexEventType_196(7);
        noComplexEvents_0_1_2_0.set(ComplexEventType_196);
        ComplexEvents_NoComplexEvents_196.insert(ComplexEventType_196.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_196;
        ComplexOptPayoutAmount_196.setString("14114609");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_196);
        ComplexEvents_NoComplexEvents_196.insert(ComplexOptPayoutAmount_196.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_196);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_394;
          FIX::ComplexEventEndDate ComplexEventEndDate_394(FIX::UTCTIMESTAMP(15, 31, 26, 14, 2, 2009));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_394);
          ComplexEventDates_NoComplexEventDates_394.insert(ComplexEventEndDate_394.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_394(FIX::UTCTIMESTAMP(23, 45, 58, 0, 12, 2000));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_394);
          ComplexEventDates_NoComplexEventDates_394.insert(ComplexEventStartDate_394.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_394);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_801;
            FIX::ComplexEventEndTime ComplexEventEndTime_801(FIX::UTCTIMEONLY(3, 42, 16));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_801);
            ComplexEventTimes_NoComplexEventTimes_801.insert(ComplexEventEndTime_801.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_801(FIX::UTCTIMEONLY(9, 43, 11));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_801);
            ComplexEventTimes_NoComplexEventTimes_801.insert(ComplexEventStartTime_801.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_801);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_802;
            FIX::ComplexEventEndTime ComplexEventEndTime_802(FIX::UTCTIMEONLY(0, 20, 36));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventEndTime_802);
            ComplexEventTimes_NoComplexEventTimes_802.insert(ComplexEventEndTime_802.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_802(FIX::UTCTIMEONLY(11, 27, 59));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventStartTime_802);
            ComplexEventTimes_NoComplexEventTimes_802.insert(ComplexEventStartTime_802.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_802);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_197;
        FIX::ComplexEventCondition ComplexEventCondition_197(1);
        noComplexEvents_0_1_2_1.set(ComplexEventCondition_197);
        ComplexEvents_NoComplexEvents_197.insert(ComplexEventCondition_197.getString());
        FIX::ComplexEventPrice ComplexEventPrice_197;
        ComplexEventPrice_197.setString("483472");
        noComplexEvents_0_1_2_1.set(ComplexEventPrice_197);
        ComplexEvents_NoComplexEvents_197.insert(ComplexEventPrice_197.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_197(3);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryMethod_197);
        ComplexEvents_NoComplexEvents_197.insert(ComplexEventPriceBoundaryMethod_197.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_197;
        ComplexEventPriceBoundaryPrecision_197.setString("6.640000");
        noComplexEvents_0_1_2_1.set(ComplexEventPriceBoundaryPrecision_197);
        ComplexEvents_NoComplexEvents_197.insert(ComplexEventPriceBoundaryPrecision_197.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_197(2);
        noComplexEvents_0_1_2_1.set(ComplexEventPriceTimeType_197);
        ComplexEvents_NoComplexEvents_197.insert(ComplexEventPriceTimeType_197.getString());
        FIX::ComplexEventType ComplexEventType_197(2);
        noComplexEvents_0_1_2_1.set(ComplexEventType_197);
        ComplexEvents_NoComplexEvents_197.insert(ComplexEventType_197.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_197;
        ComplexOptPayoutAmount_197.setString("18787456");
        noComplexEvents_0_1_2_1.set(ComplexOptPayoutAmount_197);
        ComplexEvents_NoComplexEvents_197.insert(ComplexOptPayoutAmount_197.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_197);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_395;
          FIX::ComplexEventEndDate ComplexEventEndDate_395(FIX::UTCTIMESTAMP(15, 28, 51, 10, 9, 2008));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventEndDate_395);
          ComplexEventDates_NoComplexEventDates_395.insert(ComplexEventEndDate_395.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_395(FIX::UTCTIMESTAMP(15, 50, 18, 10, 5, 2001));
          noComplexEventDates_0_1_1_3_0.set(ComplexEventStartDate_395);
          ComplexEventDates_NoComplexEventDates_395.insert(ComplexEventStartDate_395.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_395);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_803;
            FIX::ComplexEventEndTime ComplexEventEndTime_803(FIX::UTCTIMEONLY(13, 42, 49));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventEndTime_803);
            ComplexEventTimes_NoComplexEventTimes_803.insert(ComplexEventEndTime_803.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_803(FIX::UTCTIMEONLY(21, 9, 8));
            noComplexEventTimes_0_1_1_0_4_0.set(ComplexEventStartTime_803);
            ComplexEventTimes_NoComplexEventTimes_803.insert(ComplexEventStartTime_803.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_803);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_198;
        FIX::ComplexEventCondition ComplexEventCondition_198(2);
        noComplexEvents_0_1_2_2.set(ComplexEventCondition_198);
        ComplexEvents_NoComplexEvents_198.insert(ComplexEventCondition_198.getString());
        FIX::ComplexEventPrice ComplexEventPrice_198;
        ComplexEventPrice_198.setString("11628787");
        noComplexEvents_0_1_2_2.set(ComplexEventPrice_198);
        ComplexEvents_NoComplexEvents_198.insert(ComplexEventPrice_198.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_198(2);
        noComplexEvents_0_1_2_2.set(ComplexEventPriceBoundaryMethod_198);
        ComplexEvents_NoComplexEvents_198.insert(ComplexEventPriceBoundaryMethod_198.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_198;
        ComplexEventPriceBoundaryPrecision_198.setString("58.560000");
        noComplexEvents_0_1_2_2.set(ComplexEventPriceBoundaryPrecision_198);
        ComplexEvents_NoComplexEvents_198.insert(ComplexEventPriceBoundaryPrecision_198.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_198(1);
        noComplexEvents_0_1_2_2.set(ComplexEventPriceTimeType_198);
        ComplexEvents_NoComplexEvents_198.insert(ComplexEventPriceTimeType_198.getString());
        FIX::ComplexEventType ComplexEventType_198(7);
        noComplexEvents_0_1_2_2.set(ComplexEventType_198);
        ComplexEvents_NoComplexEvents_198.insert(ComplexEventType_198.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_198;
        ComplexOptPayoutAmount_198.setString("13656478");
        noComplexEvents_0_1_2_2.set(ComplexOptPayoutAmount_198);
        ComplexEvents_NoComplexEvents_198.insert(ComplexOptPayoutAmount_198.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_198);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_396;
          FIX::ComplexEventEndDate ComplexEventEndDate_396(FIX::UTCTIMESTAMP(0, 4, 37, 14, 1, 2007));
          noComplexEventDates_0_1_2_3_0.set(ComplexEventEndDate_396);
          ComplexEventDates_NoComplexEventDates_396.insert(ComplexEventEndDate_396.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_396(FIX::UTCTIMESTAMP(8, 19, 26, 10, 12, 2013));
          noComplexEventDates_0_1_2_3_0.set(ComplexEventStartDate_396);
          ComplexEventDates_NoComplexEventDates_396.insert(ComplexEventStartDate_396.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_396);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_804;
            FIX::ComplexEventEndTime ComplexEventEndTime_804(FIX::UTCTIMEONLY(13, 25, 18));
            noComplexEventTimes_0_1_2_0_4_0.set(ComplexEventEndTime_804);
            ComplexEventTimes_NoComplexEventTimes_804.insert(ComplexEventEndTime_804.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_804(FIX::UTCTIMEONLY(3, 19, 2));
            noComplexEventTimes_0_1_2_0_4_0.set(ComplexEventStartTime_804);
            ComplexEventTimes_NoComplexEventTimes_804.insert(ComplexEventStartTime_804.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_804);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_0.addGroup(noComplexEventTimes_0_1_2_0_4_0);
          }
          noComplexEvents_0_1_2_2.addGroup(noComplexEventDates_0_1_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_397;
          FIX::ComplexEventEndDate ComplexEventEndDate_397(FIX::UTCTIMESTAMP(7, 25, 10, 4, 5, 2000));
          noComplexEventDates_0_1_2_3_1.set(ComplexEventEndDate_397);
          ComplexEventDates_NoComplexEventDates_397.insert(ComplexEventEndDate_397.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_397(FIX::UTCTIMESTAMP(14, 48, 56, 11, 12, 2012));
          noComplexEventDates_0_1_2_3_1.set(ComplexEventStartDate_397);
          ComplexEventDates_NoComplexEventDates_397.insert(ComplexEventStartDate_397.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_397);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_805;
            FIX::ComplexEventEndTime ComplexEventEndTime_805(FIX::UTCTIMEONLY(20, 8, 13));
            noComplexEventTimes_0_1_2_1_4_0.set(ComplexEventEndTime_805);
            ComplexEventTimes_NoComplexEventTimes_805.insert(ComplexEventEndTime_805.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_805(FIX::UTCTIMEONLY(23, 32, 10));
            noComplexEventTimes_0_1_2_1_4_0.set(ComplexEventStartTime_805);
            ComplexEventTimes_NoComplexEventTimes_805.insert(ComplexEventStartTime_805.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_805);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_1.addGroup(noComplexEventTimes_0_1_2_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_806;
            FIX::ComplexEventEndTime ComplexEventEndTime_806(FIX::UTCTIMEONLY(21, 35, 2));
            noComplexEventTimes_0_1_2_1_4_1.set(ComplexEventEndTime_806);
            ComplexEventTimes_NoComplexEventTimes_806.insert(ComplexEventEndTime_806.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_806(FIX::UTCTIMEONLY(14, 21, 58));
            noComplexEventTimes_0_1_2_1_4_1.set(ComplexEventStartTime_806);
            ComplexEventTimes_NoComplexEventTimes_806.insert(ComplexEventStartTime_806.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_806);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_1.addGroup(noComplexEventTimes_0_1_2_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_807;
            FIX::ComplexEventEndTime ComplexEventEndTime_807(FIX::UTCTIMEONLY(16, 23, 31));
            noComplexEventTimes_0_1_2_1_4_2.set(ComplexEventEndTime_807);
            ComplexEventTimes_NoComplexEventTimes_807.insert(ComplexEventEndTime_807.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_807(FIX::UTCTIMEONLY(16, 19, 16));
            noComplexEventTimes_0_1_2_1_4_2.set(ComplexEventStartTime_807);
            ComplexEventTimes_NoComplexEventTimes_807.insert(ComplexEventStartTime_807.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_807);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_1_2_3_1.addGroup(noComplexEventTimes_0_1_2_1_4_2);
          }
          noComplexEvents_0_1_2_2.addGroup(noComplexEventDates_0_1_2_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_195;
        FIX::EventDate EventDate_195("LOCALMKTDATE_1523750700");
        noEvents_0_1_2_0.set(EventDate_195);
        EvntGrp_NoEvents_195.insert(EventDate_195.getString());
        FIX::EventPx EventPx_195;
        EventPx_195.setString("11405199");
        noEvents_0_1_2_0.set(EventPx_195);
        EvntGrp_NoEvents_195.insert(EventPx_195.getString());
        FIX::EventText EventText_195("STRING_175364122");
        noEvents_0_1_2_0.set(EventText_195);
        EvntGrp_NoEvents_195.insert(EventText_195.getString());
        FIX::EventTime EventTime_195(FIX::UTCTIMESTAMP(9, 18, 34, 1, 3, 2017));
        noEvents_0_1_2_0.set(EventTime_195);
        EvntGrp_NoEvents_195.insert(EventTime_195.getString());
        FIX::EventType EventType_195(9);
        noEvents_0_1_2_0.set(EventType_195);
        EvntGrp_NoEvents_195.insert(EventType_195.getString());
        all_values.push_back(EvntGrp_NoEvents_195);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_196;
        FIX::EventDate EventDate_196("LOCALMKTDATE_101230422");
        noEvents_0_1_2_1.set(EventDate_196);
        EvntGrp_NoEvents_196.insert(EventDate_196.getString());
        FIX::EventPx EventPx_196;
        EventPx_196.setString("20717033");
        noEvents_0_1_2_1.set(EventPx_196);
        EvntGrp_NoEvents_196.insert(EventPx_196.getString());
        FIX::EventText EventText_196("STRING_2137071118");
        noEvents_0_1_2_1.set(EventText_196);
        EvntGrp_NoEvents_196.insert(EventText_196.getString());
        FIX::EventTime EventTime_196(FIX::UTCTIMESTAMP(21, 25, 36, 12, 9, 2015));
        noEvents_0_1_2_1.set(EventTime_196);
        EvntGrp_NoEvents_196.insert(EventTime_196.getString());
        FIX::EventType EventType_196(3);
        noEvents_0_1_2_1.set(EventType_196);
        EvntGrp_NoEvents_196.insert(EventType_196.getString());
        all_values.push_back(EvntGrp_NoEvents_196);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_205;
        FIX::InstrumentPartyID InstrumentPartyID_205("STRING_624860405");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_205);
        InstrumentParties_NoInstrumentParties_205.insert(InstrumentPartyID_205.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_205('6');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_205);
        InstrumentParties_NoInstrumentParties_205.insert(InstrumentPartyIDSource_205.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_205(1089955588);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_205);
        InstrumentParties_NoInstrumentParties_205.insert(InstrumentPartyRole_205.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_205);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395;
          FIX::InstrumentPartySubID InstrumentPartySubID_395("STRING_512595598");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_395);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395.insert(InstrumentPartySubID_395.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_395(967814860);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_395);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395.insert(InstrumentPartySubIDType_395.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_395);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396;
          FIX::InstrumentPartySubID InstrumentPartySubID_396("STRING_953821118");
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubID_396);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396.insert(InstrumentPartySubID_396.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_396(1813264268);
          noInstrumentPartySubIDs_0_1_0_3_1.set(InstrumentPartySubIDType_396);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396.insert(InstrumentPartySubIDType_396.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_396);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_397;
          FIX::InstrumentPartySubID InstrumentPartySubID_397("STRING_344081912");
          noInstrumentPartySubIDs_0_1_0_3_2.set(InstrumentPartySubID_397);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_397.insert(InstrumentPartySubID_397.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_397(2094341082);
          noInstrumentPartySubIDs_0_1_0_3_2.set(InstrumentPartySubIDType_397);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_397.insert(InstrumentPartySubIDType_397.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_397);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_206;
        FIX::InstrumentPartyID InstrumentPartyID_206("STRING_1988628390");
        noInstrumentParties_0_1_2_1.set(InstrumentPartyID_206);
        InstrumentParties_NoInstrumentParties_206.insert(InstrumentPartyID_206.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_206('5');
        noInstrumentParties_0_1_2_1.set(InstrumentPartyIDSource_206);
        InstrumentParties_NoInstrumentParties_206.insert(InstrumentPartyIDSource_206.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_206(264090187);
        noInstrumentParties_0_1_2_1.set(InstrumentPartyRole_206);
        InstrumentParties_NoInstrumentParties_206.insert(InstrumentPartyRole_206.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_206);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_398;
          FIX::InstrumentPartySubID InstrumentPartySubID_398("STRING_2081807085");
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubID_398);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_398.insert(InstrumentPartySubID_398.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_398(2095015537);
          noInstrumentPartySubIDs_0_1_1_3_0.set(InstrumentPartySubIDType_398);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_398.insert(InstrumentPartySubIDType_398.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_398);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_399;
          FIX::InstrumentPartySubID InstrumentPartySubID_399("STRING_1621452839");
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubID_399);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_399.insert(InstrumentPartySubID_399.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_399(1637041644);
          noInstrumentPartySubIDs_0_1_1_3_1.set(InstrumentPartySubIDType_399);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_399.insert(InstrumentPartySubIDType_399.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_399);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_400;
          FIX::InstrumentPartySubID InstrumentPartySubID_400("STRING_1456696937");
          noInstrumentPartySubIDs_0_1_1_3_2.set(InstrumentPartySubID_400);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_400.insert(InstrumentPartySubID_400.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_400(1722683261);
          noInstrumentPartySubIDs_0_1_1_3_2.set(InstrumentPartySubIDType_400);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_400.insert(InstrumentPartySubIDType_400.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_400);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_2;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_207;
        FIX::InstrumentPartyID InstrumentPartyID_207("STRING_1561261355");
        noInstrumentParties_0_1_2_2.set(InstrumentPartyID_207);
        InstrumentParties_NoInstrumentParties_207.insert(InstrumentPartyID_207.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_207('1');
        noInstrumentParties_0_1_2_2.set(InstrumentPartyIDSource_207);
        InstrumentParties_NoInstrumentParties_207.insert(InstrumentPartyIDSource_207.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_207(2041584435);
        noInstrumentParties_0_1_2_2.set(InstrumentPartyRole_207);
        InstrumentParties_NoInstrumentParties_207.insert(InstrumentPartyRole_207.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_207);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_401;
          FIX::InstrumentPartySubID InstrumentPartySubID_401("STRING_619376784");
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubID_401);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_401.insert(InstrumentPartySubID_401.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_401(337579543);
          noInstrumentPartySubIDs_0_1_2_3_0.set(InstrumentPartySubIDType_401);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_401.insert(InstrumentPartySubIDType_401.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_401);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_402;
          FIX::InstrumentPartySubID InstrumentPartySubID_402("STRING_1518822433");
          noInstrumentPartySubIDs_0_1_2_3_1.set(InstrumentPartySubID_402);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_402.insert(InstrumentPartySubID_402.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_402(1238246168);
          noInstrumentPartySubIDs_0_1_2_3_1.set(InstrumentPartySubIDType_402);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_402.insert(InstrumentPartySubIDType_402.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_402);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_403;
          FIX::InstrumentPartySubID InstrumentPartySubID_403("STRING_1927074220");
          noInstrumentPartySubIDs_0_1_2_3_2.set(InstrumentPartySubID_403);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_403.insert(InstrumentPartySubID_403.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_403(1296534267);
          noInstrumentPartySubIDs_0_1_2_3_2.set(InstrumentPartySubIDType_403);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_403.insert(InstrumentPartySubIDType_403.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_403);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_2.addGroup(noInstrumentPartySubIDs_0_1_2_3_2);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_2);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_182;
        FIX::SecurityAltID SecurityAltID_182("STRING_404450977");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_182);
        SecAltIDGrp_NoSecurityAltID_182.insert(SecurityAltID_182.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_182("STRING_1985520545");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_182);
        SecAltIDGrp_NoSecurityAltID_182.insert(SecurityAltIDSource_182.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_182);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_183;
        FIX::SecurityAltID SecurityAltID_183("STRING_1609574494");
        noSecurityAltID_0_1_2_1.set(SecurityAltID_183);
        SecAltIDGrp_NoSecurityAltID_183.insert(SecurityAltID_183.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_183("STRING_1877197447");
        noSecurityAltID_0_1_2_1.set(SecurityAltIDSource_183);
        SecAltIDGrp_NoSecurityAltID_183.insert(SecurityAltIDSource_183.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_183);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_184;
        FIX::SecurityAltID SecurityAltID_184("STRING_350632495");
        noSecurityAltID_0_1_2_2.set(SecurityAltID_184);
        SecAltIDGrp_NoSecurityAltID_184.insert(SecurityAltID_184.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_184("STRING_429905706");
        noSecurityAltID_0_1_2_2.set(SecurityAltIDSource_184);
        SecAltIDGrp_NoSecurityAltID_184.insert(SecurityAltIDSource_184.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_184);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_196;
      FIX::SecurityXML SecurityXML_197("XMLDATA_683534917");
      noRelatedSym_0_1_1.set(SecurityXML_197);
      FIX::SecurityXMLLen SecurityXMLLen_98(16413116);
      noRelatedSym_0_1_1.set(SecurityXMLLen_98);
      FIX::SecurityXMLSchema SecurityXMLSchema_98("STRING_773987618");
      noRelatedSym_0_1_1.set(SecurityXMLSchema_98);
      SecurityXML_196.insert(SecurityXMLSchema_98.getString());
      all_values.push_back(SecurityXML_196);
      all_compo_names.insert("SecurityXML");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_1);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_2;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_2;
      FIX::MDEntrySize MDEntrySize_7;
      MDEntrySize_7.setString("6303923");
      noRelatedSym_0_1_2.set(MDEntrySize_7);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_2.insert(MDEntrySize_7.getString());
      FIX::MDStreamID MDStreamID_10("STRING_2005041506");
      noRelatedSym_0_1_2.set(MDStreamID_10);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_2.insert(MDStreamID_10.getString());
      FIX::SettlType SettlType_37("STRING_1");
      noRelatedSym_0_1_2.set(SettlType_37);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_2.insert(SettlType_37.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_2);
      all_compo_names.insert("StrmAsgnReqInstrmtGrp.NoRelatedSym");

      // Instrument
      multiset<string> Instrument_99;
      FIX::AttachmentPoint AttachmentPoint_99;
      AttachmentPoint_99.setString("25.390000");
      noRelatedSym_0_1_2.set(AttachmentPoint_99);
      Instrument_99.insert(AttachmentPoint_99.getString());
      FIX::CFICode CFICode_104("STRING_1563097859");
      noRelatedSym_0_1_2.set(CFICode_104);
      Instrument_99.insert(CFICode_104.getString());
      FIX::CPProgram CPProgram_99(99);
      noRelatedSym_0_1_2.set(CPProgram_99);
      Instrument_99.insert(CPProgram_99.getString());
      FIX::CPRegType CPRegType_99("STRING_842014428");
      noRelatedSym_0_1_2.set(CPRegType_99);
      Instrument_99.insert(CPRegType_99.getString());
      FIX::CapPrice CapPrice_99;
      CapPrice_99.setString("10370670");
      noRelatedSym_0_1_2.set(CapPrice_99);
      Instrument_99.insert(CapPrice_99.getString());
      FIX::ContractMultiplier ContractMultiplier_99;
      ContractMultiplier_99.setString("7499789");
      noRelatedSym_0_1_2.set(ContractMultiplier_99);
      Instrument_99.insert(ContractMultiplier_99.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_99(0);
      noRelatedSym_0_1_2.set(ContractMultiplierUnit_99);
      Instrument_99.insert(ContractMultiplierUnit_99.getString());
      FIX::ContractSettlMonth ContractSettlMonth_99("MONTHYEAR_612266664");
      noRelatedSym_0_1_2.set(ContractSettlMonth_99);
      Instrument_99.insert(ContractSettlMonth_99.getString());
      FIX::CountryOfIssue CountryOfIssue_99("COUNTRY_163756629");
      noRelatedSym_0_1_2.set(CountryOfIssue_99);
      Instrument_99.insert(CountryOfIssue_99.getString());
      FIX::CouponPaymentDate CouponPaymentDate_99("LOCALMKTDATE_1597512124");
      noRelatedSym_0_1_2.set(CouponPaymentDate_99);
      Instrument_99.insert(CouponPaymentDate_99.getString());
      FIX::CouponRate CouponRate_99;
      CouponRate_99.setString("74.520000");
      noRelatedSym_0_1_2.set(CouponRate_99);
      Instrument_99.insert(CouponRate_99.getString());
      FIX::CreditRating CreditRating_99("STRING_6463798");
      noRelatedSym_0_1_2.set(CreditRating_99);
      Instrument_99.insert(CreditRating_99.getString());
      FIX::DatedDate DatedDate_99("LOCALMKTDATE_69405260");
      noRelatedSym_0_1_2.set(DatedDate_99);
      Instrument_99.insert(DatedDate_99.getString());
      FIX::DetachmentPoint DetachmentPoint_99;
      DetachmentPoint_99.setString("69.950000");
      noRelatedSym_0_1_2.set(DetachmentPoint_99);
      Instrument_99.insert(DetachmentPoint_99.getString());
      FIX::EncodedIssuer EncodedIssuer_99("DATA_1525286231");
      noRelatedSym_0_1_2.set(EncodedIssuer_99);
      Instrument_99.insert(EncodedIssuer_99.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_99(1307651429);
      noRelatedSym_0_1_2.set(EncodedIssuerLen_99);
      Instrument_99.insert(EncodedIssuerLen_99.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_99("DATA_623537568");
      noRelatedSym_0_1_2.set(EncodedSecurityDesc_99);
      Instrument_99.insert(EncodedSecurityDesc_99.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_99(674336850);
      noRelatedSym_0_1_2.set(EncodedSecurityDescLen_99);
      Instrument_99.insert(EncodedSecurityDescLen_99.getString());
      FIX::ExerciseStyle ExerciseStyle_99(1);
      noRelatedSym_0_1_2.set(ExerciseStyle_99);
      Instrument_99.insert(ExerciseStyle_99.getString());
      FIX::Factor Factor_99;
      Factor_99.setString("10279885");
      noRelatedSym_0_1_2.set(Factor_99);
      Instrument_99.insert(Factor_99.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_99(true);
      noRelatedSym_0_1_2.set(FlexProductEligibilityIndicator_99);
      Instrument_99.insert(FlexProductEligibilityIndicator_99.getString());
      FIX::FlexibleIndicator FlexibleIndicator_99(true);
      noRelatedSym_0_1_2.set(FlexibleIndicator_99);
      Instrument_99.insert(FlexibleIndicator_99.getString());
      FIX::FloorPrice FloorPrice_99;
      FloorPrice_99.setString("7577023");
      noRelatedSym_0_1_2.set(FloorPrice_99);
      Instrument_99.insert(FloorPrice_99.getString());
      FIX::FlowScheduleType FlowScheduleType_99(3);
      noRelatedSym_0_1_2.set(FlowScheduleType_99);
      Instrument_99.insert(FlowScheduleType_99.getString());
      FIX::InstrRegistry InstrRegistry_99("STRING_1719266886");
      noRelatedSym_0_1_2.set(InstrRegistry_99);
      Instrument_99.insert(InstrRegistry_99.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_99('1');
      noRelatedSym_0_1_2.set(InstrmtAssignmentMethod_99);
      Instrument_99.insert(InstrmtAssignmentMethod_99.getString());
      FIX::InterestAccrualDate InterestAccrualDate_99("LOCALMKTDATE_879419359");
      noRelatedSym_0_1_2.set(InterestAccrualDate_99);
      Instrument_99.insert(InterestAccrualDate_99.getString());
      FIX::IssueDate IssueDate_99("LOCALMKTDATE_345770856");
      noRelatedSym_0_1_2.set(IssueDate_99);
      Instrument_99.insert(IssueDate_99.getString());
      FIX::Issuer Issuer_99("STRING_2071629613");
      noRelatedSym_0_1_2.set(Issuer_99);
      Instrument_99.insert(Issuer_99.getString());
      FIX::ListMethod ListMethod_99(0);
      noRelatedSym_0_1_2.set(ListMethod_99);
      Instrument_99.insert(ListMethod_99.getString());
      FIX::LocaleOfIssue LocaleOfIssue_99("STRING_1671868345");
      noRelatedSym_0_1_2.set(LocaleOfIssue_99);
      Instrument_99.insert(LocaleOfIssue_99.getString());
      FIX::MaturityDate MaturityDate_99("LOCALMKTDATE_818628504");
      noRelatedSym_0_1_2.set(MaturityDate_99);
      Instrument_99.insert(MaturityDate_99.getString());
      FIX::MaturityMonthYear MaturityMonthYear_99("MONTHYEAR_152591429");
      noRelatedSym_0_1_2.set(MaturityMonthYear_99);
      Instrument_99.insert(MaturityMonthYear_99.getString());
      FIX::MaturityTime MaturityTime_99("TZTIMEONLY_784805623");
      noRelatedSym_0_1_2.set(MaturityTime_99);
      Instrument_99.insert(MaturityTime_99.getString());
      FIX::MinPriceIncrement MinPriceIncrement_99;
      MinPriceIncrement_99.setString("16606429");
      noRelatedSym_0_1_2.set(MinPriceIncrement_99);
      Instrument_99.insert(MinPriceIncrement_99.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_99;
      MinPriceIncrementAmount_99.setString("11896584");
      noRelatedSym_0_1_2.set(MinPriceIncrementAmount_99);
      Instrument_99.insert(MinPriceIncrementAmount_99.getString());
      FIX::NTPositionLimit NTPositionLimit_99(1534784545);
      noRelatedSym_0_1_2.set(NTPositionLimit_99);
      Instrument_99.insert(NTPositionLimit_99.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_99;
      NotionalPercentageOutstanding_99.setString("6.490000");
      noRelatedSym_0_1_2.set(NotionalPercentageOutstanding_99);
      Instrument_99.insert(NotionalPercentageOutstanding_99.getString());
      FIX::OptAttribute OptAttribute_99('1');
      noRelatedSym_0_1_2.set(OptAttribute_99);
      Instrument_99.insert(OptAttribute_99.getString());
      FIX::OptPayoutAmount OptPayoutAmount_99;
      OptPayoutAmount_99.setString("16985411");
      noRelatedSym_0_1_2.set(OptPayoutAmount_99);
      Instrument_99.insert(OptPayoutAmount_99.getString());
      FIX::OptPayoutType OptPayoutType_99(3);
      noRelatedSym_0_1_2.set(OptPayoutType_99);
      Instrument_99.insert(OptPayoutType_99.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_99;
      OriginalNotionalPercentageOutstanding_99.setString("89.490000");
      noRelatedSym_0_1_2.set(OriginalNotionalPercentageOutstanding_99);
      Instrument_99.insert(OriginalNotionalPercentageOutstanding_99.getString());
      FIX::Pool Pool_99("STRING_1705004973");
      noRelatedSym_0_1_2.set(Pool_99);
      Instrument_99.insert(Pool_99.getString());
      FIX::PositionLimit PositionLimit_99(1331304385);
      noRelatedSym_0_1_2.set(PositionLimit_99);
      Instrument_99.insert(PositionLimit_99.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_99("STRING_STD");
      noRelatedSym_0_1_2.set(PriceQuoteMethod_99);
      Instrument_99.insert(PriceQuoteMethod_99.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_99("STRING_1082807556");
      noRelatedSym_0_1_2.set(PriceUnitOfMeasure_99);
      Instrument_99.insert(PriceUnitOfMeasure_99.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_99;
      PriceUnitOfMeasureQty_99.setString("4914721");
      noRelatedSym_0_1_2.set(PriceUnitOfMeasureQty_99);
      Instrument_99.insert(PriceUnitOfMeasureQty_99.getString());
      FIX::Product Product_107(2);
      noRelatedSym_0_1_2.set(Product_107);
      Instrument_99.insert(Product_107.getString());
      FIX::ProductComplex ProductComplex_99("STRING_1757144406");
      noRelatedSym_0_1_2.set(ProductComplex_99);
      Instrument_99.insert(ProductComplex_99.getString());
      FIX::PutOrCall PutOrCall_99(1);
      noRelatedSym_0_1_2.set(PutOrCall_99);
      Instrument_99.insert(PutOrCall_99.getString());
      FIX::RedemptionDate RedemptionDate_99("LOCALMKTDATE_508798410");
      noRelatedSym_0_1_2.set(RedemptionDate_99);
      Instrument_99.insert(RedemptionDate_99.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_99("STRING_122034506");
      noRelatedSym_0_1_2.set(RepoCollateralSecurityType_99);
      Instrument_99.insert(RepoCollateralSecurityType_99.getString());
      FIX::RepurchaseRate RepurchaseRate_99;
      RepurchaseRate_99.setString("0.330000");
      noRelatedSym_0_1_2.set(RepurchaseRate_99);
      Instrument_99.insert(RepurchaseRate_99.getString());
      FIX::RepurchaseTerm RepurchaseTerm_99(1266500754);
      noRelatedSym_0_1_2.set(RepurchaseTerm_99);
      Instrument_99.insert(RepurchaseTerm_99.getString());
      FIX::RestructuringType RestructuringType_99("STRING_MM");
      noRelatedSym_0_1_2.set(RestructuringType_99);
      Instrument_99.insert(RestructuringType_99.getString());
      FIX::SecurityDesc SecurityDesc_99("STRING_1032403272");
      noRelatedSym_0_1_2.set(SecurityDesc_99);
      Instrument_99.insert(SecurityDesc_99.getString());
      FIX::SecurityExchange SecurityExchange_99("EXCHANGE_560254368");
      noRelatedSym_0_1_2.set(SecurityExchange_99);
      Instrument_99.insert(SecurityExchange_99.getString());
      FIX::SecurityGroup SecurityGroup_99("STRING_1864460109");
      noRelatedSym_0_1_2.set(SecurityGroup_99);
      Instrument_99.insert(SecurityGroup_99.getString());
      FIX::SecurityID SecurityID_99("STRING_1378174128");
      noRelatedSym_0_1_2.set(SecurityID_99);
      Instrument_99.insert(SecurityID_99.getString());
      FIX::SecurityIDSource SecurityIDSource_99("STRING_M");
      noRelatedSym_0_1_2.set(SecurityIDSource_99);
      Instrument_99.insert(SecurityIDSource_99.getString());
      FIX::SecurityStatus SecurityStatus_100("STRING_2");
      noRelatedSym_0_1_2.set(SecurityStatus_100);
      Instrument_99.insert(SecurityStatus_100.getString());
      FIX::SecuritySubType SecuritySubType_103("STRING_902558826");
      noRelatedSym_0_1_2.set(SecuritySubType_103);
      Instrument_99.insert(SecuritySubType_103.getString());
      FIX::SecurityType SecurityType_107("STRING_SECPLEDGE");
      noRelatedSym_0_1_2.set(SecurityType_107);
      Instrument_99.insert(SecurityType_107.getString());
      FIX::Seniority Seniority_99("STRING_SD");
      noRelatedSym_0_1_2.set(Seniority_99);
      Instrument_99.insert(Seniority_99.getString());
      FIX::SettlMethod SettlMethod_99('P');
      noRelatedSym_0_1_2.set(SettlMethod_99);
      Instrument_99.insert(SettlMethod_99.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_99("STRING_816188121");
      noRelatedSym_0_1_2.set(SettleOnOpenFlag_99);
      Instrument_99.insert(SettleOnOpenFlag_99.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_99("STRING_1796203589");
      noRelatedSym_0_1_2.set(StateOrProvinceOfIssue_99);
      Instrument_99.insert(StateOrProvinceOfIssue_99.getString());
      FIX::StrikeCurrency StrikeCurrency_99("JPY");
      noRelatedSym_0_1_2.set(StrikeCurrency_99);
      Instrument_99.insert(StrikeCurrency_99.getString());
      FIX::StrikeMultiplier StrikeMultiplier_99;
      StrikeMultiplier_99.setString("14506450");
      noRelatedSym_0_1_2.set(StrikeMultiplier_99);
      Instrument_99.insert(StrikeMultiplier_99.getString());
      FIX::StrikePrice StrikePrice_99;
      StrikePrice_99.setString("6257228");
      noRelatedSym_0_1_2.set(StrikePrice_99);
      Instrument_99.insert(StrikePrice_99.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_99(3);
      noRelatedSym_0_1_2.set(StrikePriceBoundaryMethod_99);
      Instrument_99.insert(StrikePriceBoundaryMethod_99.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_99;
      StrikePriceBoundaryPrecision_99.setString("40.350000");
      noRelatedSym_0_1_2.set(StrikePriceBoundaryPrecision_99);
      Instrument_99.insert(StrikePriceBoundaryPrecision_99.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_99(4);
      noRelatedSym_0_1_2.set(StrikePriceDeterminationMethod_99);
      Instrument_99.insert(StrikePriceDeterminationMethod_99.getString());
      FIX::StrikeValue StrikeValue_99;
      StrikeValue_99.setString("9262949");
      noRelatedSym_0_1_2.set(StrikeValue_99);
      Instrument_99.insert(StrikeValue_99.getString());
      FIX::Symbol Symbol_99("STRING_468726332");
      noRelatedSym_0_1_2.set(Symbol_99);
      Instrument_99.insert(Symbol_99.getString());
      FIX::SymbolSfx SymbolSfx_99("STRING_WI");
      noRelatedSym_0_1_2.set(SymbolSfx_99);
      Instrument_99.insert(SymbolSfx_99.getString());
      FIX::TimeUnit TimeUnit_99("STRING_D");
      noRelatedSym_0_1_2.set(TimeUnit_99);
      Instrument_99.insert(TimeUnit_99.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_99(1);
      noRelatedSym_0_1_2.set(UnderlyingPriceDeterminationMethod_99);
      Instrument_99.insert(UnderlyingPriceDeterminationMethod_99.getString());
      FIX::UnitOfMeasure UnitOfMeasure_99("STRING_Bcf");
      noRelatedSym_0_1_2.set(UnitOfMeasure_99);
      Instrument_99.insert(UnitOfMeasure_99.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_99;
      UnitOfMeasureQty_99.setString("15890260");
      noRelatedSym_0_1_2.set(UnitOfMeasureQty_99);
      Instrument_99.insert(UnitOfMeasureQty_99.getString());
      FIX::ValuationMethod ValuationMethod_99("STRING_FUT");
      noRelatedSym_0_1_2.set(ValuationMethod_99);
      Instrument_99.insert(ValuationMethod_99.getString());
      all_values.push_back(Instrument_99);
      all_compo_names.insert("Instrument");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_199;
        FIX::ComplexEventCondition ComplexEventCondition_199(2);
        noComplexEvents_0_2_2_0.set(ComplexEventCondition_199);
        ComplexEvents_NoComplexEvents_199.insert(ComplexEventCondition_199.getString());
        FIX::ComplexEventPrice ComplexEventPrice_199;
        ComplexEventPrice_199.setString("17248353");
        noComplexEvents_0_2_2_0.set(ComplexEventPrice_199);
        ComplexEvents_NoComplexEvents_199.insert(ComplexEventPrice_199.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_199(1);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryMethod_199);
        ComplexEvents_NoComplexEvents_199.insert(ComplexEventPriceBoundaryMethod_199.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_199;
        ComplexEventPriceBoundaryPrecision_199.setString("56.610000");
        noComplexEvents_0_2_2_0.set(ComplexEventPriceBoundaryPrecision_199);
        ComplexEvents_NoComplexEvents_199.insert(ComplexEventPriceBoundaryPrecision_199.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_199(3);
        noComplexEvents_0_2_2_0.set(ComplexEventPriceTimeType_199);
        ComplexEvents_NoComplexEvents_199.insert(ComplexEventPriceTimeType_199.getString());
        FIX::ComplexEventType ComplexEventType_199(4);
        noComplexEvents_0_2_2_0.set(ComplexEventType_199);
        ComplexEvents_NoComplexEvents_199.insert(ComplexEventType_199.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_199;
        ComplexOptPayoutAmount_199.setString("11652561");
        noComplexEvents_0_2_2_0.set(ComplexOptPayoutAmount_199);
        ComplexEvents_NoComplexEvents_199.insert(ComplexOptPayoutAmount_199.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_199);
        all_compo_names.insert("ComplexEvents.NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_398;
          FIX::ComplexEventEndDate ComplexEventEndDate_398(FIX::UTCTIMESTAMP(0, 51, 32, 1, 5, 2011));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventEndDate_398);
          ComplexEventDates_NoComplexEventDates_398.insert(ComplexEventEndDate_398.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_398(FIX::UTCTIMESTAMP(14, 0, 2, 25, 8, 2001));
          noComplexEventDates_0_2_0_3_0.set(ComplexEventStartDate_398);
          ComplexEventDates_NoComplexEventDates_398.insert(ComplexEventStartDate_398.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_398);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_808;
            FIX::ComplexEventEndTime ComplexEventEndTime_808(FIX::UTCTIMEONLY(16, 52, 16));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventEndTime_808);
            ComplexEventTimes_NoComplexEventTimes_808.insert(ComplexEventEndTime_808.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_808(FIX::UTCTIMEONLY(16, 22, 54));
            noComplexEventTimes_0_2_0_0_4_0.set(ComplexEventStartTime_808);
            ComplexEventTimes_NoComplexEventTimes_808.insert(ComplexEventStartTime_808.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_808);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_809;
            FIX::ComplexEventEndTime ComplexEventEndTime_809(FIX::UTCTIMEONLY(3, 36, 11));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventEndTime_809);
            ComplexEventTimes_NoComplexEventTimes_809.insert(ComplexEventEndTime_809.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_809(FIX::UTCTIMEONLY(15, 45, 22));
            noComplexEventTimes_0_2_0_0_4_1.set(ComplexEventStartTime_809);
            ComplexEventTimes_NoComplexEventTimes_809.insert(ComplexEventStartTime_809.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_809);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_810;
            FIX::ComplexEventEndTime ComplexEventEndTime_810(FIX::UTCTIMEONLY(9, 5, 14));
            noComplexEventTimes_0_2_0_0_4_2.set(ComplexEventEndTime_810);
            ComplexEventTimes_NoComplexEventTimes_810.insert(ComplexEventEndTime_810.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_810(FIX::UTCTIMEONLY(9, 8, 23));
            noComplexEventTimes_0_2_0_0_4_2.set(ComplexEventStartTime_810);
            ComplexEventTimes_NoComplexEventTimes_810.insert(ComplexEventStartTime_810.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_810);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_2);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_399;
          FIX::ComplexEventEndDate ComplexEventEndDate_399(FIX::UTCTIMESTAMP(12, 18, 12, 11, 12, 2000));
          noComplexEventDates_0_2_0_3_1.set(ComplexEventEndDate_399);
          ComplexEventDates_NoComplexEventDates_399.insert(ComplexEventEndDate_399.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_399(FIX::UTCTIMESTAMP(4, 26, 47, 18, 8, 2001));
          noComplexEventDates_0_2_0_3_1.set(ComplexEventStartDate_399);
          ComplexEventDates_NoComplexEventDates_399.insert(ComplexEventStartDate_399.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_399);
          all_compo_names.insert("ComplexEventDates.NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_811;
            FIX::ComplexEventEndTime ComplexEventEndTime_811(FIX::UTCTIMEONLY(17, 4, 16));
            noComplexEventTimes_0_2_0_1_4_0.set(ComplexEventEndTime_811);
            ComplexEventTimes_NoComplexEventTimes_811.insert(ComplexEventEndTime_811.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_811(FIX::UTCTIMEONLY(19, 2, 28));
            noComplexEventTimes_0_2_0_1_4_0.set(ComplexEventStartTime_811);
            ComplexEventTimes_NoComplexEventTimes_811.insert(ComplexEventStartTime_811.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_811);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_812;
            FIX::ComplexEventEndTime ComplexEventEndTime_812(FIX::UTCTIMEONLY(3, 33, 28));
            noComplexEventTimes_0_2_0_1_4_1.set(ComplexEventEndTime_812);
            ComplexEventTimes_NoComplexEventTimes_812.insert(ComplexEventEndTime_812.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_812(FIX::UTCTIMEONLY(23, 36, 30));
            noComplexEventTimes_0_2_0_1_4_1.set(ComplexEventStartTime_812);
            ComplexEventTimes_NoComplexEventTimes_812.insert(ComplexEventStartTime_812.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_812);
            all_compo_names.insert("ComplexEventTimes.NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_1);
        }
        noRelatedSym_0_1_2.addGroup(noComplexEvents_0_2_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_197;
        FIX::EventDate EventDate_197("LOCALMKTDATE_2130245076");
        noEvents_0_2_2_0.set(EventDate_197);
        EvntGrp_NoEvents_197.insert(EventDate_197.getString());
        FIX::EventPx EventPx_197;
        EventPx_197.setString("12543560");
        noEvents_0_2_2_0.set(EventPx_197);
        EvntGrp_NoEvents_197.insert(EventPx_197.getString());
        FIX::EventText EventText_197("STRING_1922346683");
        noEvents_0_2_2_0.set(EventText_197);
        EvntGrp_NoEvents_197.insert(EventText_197.getString());
        FIX::EventTime EventTime_197(FIX::UTCTIMESTAMP(23, 57, 15, 3, 12, 2008));
        noEvents_0_2_2_0.set(EventTime_197);
        EvntGrp_NoEvents_197.insert(EventTime_197.getString());
        FIX::EventType EventType_197(6);
        noEvents_0_2_2_0.set(EventType_197);
        EvntGrp_NoEvents_197.insert(EventType_197.getString());
        all_values.push_back(EvntGrp_NoEvents_197);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_0_1_2.addGroup(noEvents_0_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_198;
        FIX::EventDate EventDate_198("LOCALMKTDATE_787268890");
        noEvents_0_2_2_1.set(EventDate_198);
        EvntGrp_NoEvents_198.insert(EventDate_198.getString());
        FIX::EventPx EventPx_198;
        EventPx_198.setString("20628963");
        noEvents_0_2_2_1.set(EventPx_198);
        EvntGrp_NoEvents_198.insert(EventPx_198.getString());
        FIX::EventText EventText_198("STRING_211083213");
        noEvents_0_2_2_1.set(EventText_198);
        EvntGrp_NoEvents_198.insert(EventText_198.getString());
        FIX::EventTime EventTime_198(FIX::UTCTIMESTAMP(12, 37, 32, 14, 2, 2008));
        noEvents_0_2_2_1.set(EventTime_198);
        EvntGrp_NoEvents_198.insert(EventTime_198.getString());
        FIX::EventType EventType_198(11);
        noEvents_0_2_2_1.set(EventType_198);
        EvntGrp_NoEvents_198.insert(EventType_198.getString());
        all_values.push_back(EvntGrp_NoEvents_198);
        all_compo_names.insert("EvntGrp.NoEvents");

        noRelatedSym_0_1_2.addGroup(noEvents_0_2_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_208;
        FIX::InstrumentPartyID InstrumentPartyID_208("STRING_1166068133");
        noInstrumentParties_0_2_2_0.set(InstrumentPartyID_208);
        InstrumentParties_NoInstrumentParties_208.insert(InstrumentPartyID_208.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_208('1');
        noInstrumentParties_0_2_2_0.set(InstrumentPartyIDSource_208);
        InstrumentParties_NoInstrumentParties_208.insert(InstrumentPartyIDSource_208.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_208(1053731195);
        noInstrumentParties_0_2_2_0.set(InstrumentPartyRole_208);
        InstrumentParties_NoInstrumentParties_208.insert(InstrumentPartyRole_208.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_208);
        all_compo_names.insert("InstrumentParties.NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_404;
          FIX::InstrumentPartySubID InstrumentPartySubID_404("STRING_1717279358");
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubID_404);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_404.insert(InstrumentPartySubID_404.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_404(1015345684);
          noInstrumentPartySubIDs_0_2_0_3_0.set(InstrumentPartySubIDType_404);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_404.insert(InstrumentPartySubIDType_404.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_404);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_405;
          FIX::InstrumentPartySubID InstrumentPartySubID_405("STRING_1563987218");
          noInstrumentPartySubIDs_0_2_0_3_1.set(InstrumentPartySubID_405);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_405.insert(InstrumentPartySubID_405.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_405(1282521941);
          noInstrumentPartySubIDs_0_2_0_3_1.set(InstrumentPartySubIDType_405);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_405.insert(InstrumentPartySubIDType_405.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_405);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_406;
          FIX::InstrumentPartySubID InstrumentPartySubID_406("STRING_998107112");
          noInstrumentPartySubIDs_0_2_0_3_2.set(InstrumentPartySubID_406);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_406.insert(InstrumentPartySubID_406.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_406(670859598);
          noInstrumentPartySubIDs_0_2_0_3_2.set(InstrumentPartySubIDType_406);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_406.insert(InstrumentPartySubIDType_406.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_406);
          all_compo_names.insert("InstrumentPtysSubGrp.NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_2);
        }
        noRelatedSym_0_1_2.addGroup(noInstrumentParties_0_2_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_185;
        FIX::SecurityAltID SecurityAltID_185("STRING_30646620");
        noSecurityAltID_0_2_2_0.set(SecurityAltID_185);
        SecAltIDGrp_NoSecurityAltID_185.insert(SecurityAltID_185.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_185("STRING_64557309");
        noSecurityAltID_0_2_2_0.set(SecurityAltIDSource_185);
        SecAltIDGrp_NoSecurityAltID_185.insert(SecurityAltIDSource_185.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_185);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_0_1_2.addGroup(noSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_2_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_186;
        FIX::SecurityAltID SecurityAltID_186("STRING_489985245");
        noSecurityAltID_0_2_2_1.set(SecurityAltID_186);
        SecAltIDGrp_NoSecurityAltID_186.insert(SecurityAltID_186.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_186("STRING_1905288975");
        noSecurityAltID_0_2_2_1.set(SecurityAltIDSource_186);
        SecAltIDGrp_NoSecurityAltID_186.insert(SecurityAltIDSource_186.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_186);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_0_1_2.addGroup(noSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_2_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_187;
        FIX::SecurityAltID SecurityAltID_187("STRING_207493001");
        noSecurityAltID_0_2_2_2.set(SecurityAltID_187);
        SecAltIDGrp_NoSecurityAltID_187.insert(SecurityAltID_187.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_187("STRING_446206680");
        noSecurityAltID_0_2_2_2.set(SecurityAltIDSource_187);
        SecAltIDGrp_NoSecurityAltID_187.insert(SecurityAltIDSource_187.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_187);
        all_compo_names.insert("SecAltIDGrp.NoSecurityAltID");

        noRelatedSym_0_1_2.addGroup(noSecurityAltID_0_2_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_198;
      FIX::SecurityXML SecurityXML_199("XMLDATA_1773960549");
      noRelatedSym_0_1_2.set(SecurityXML_199);
      FIX::SecurityXMLLen SecurityXMLLen_99(290308186);
      noRelatedSym_0_1_2.set(SecurityXMLLen_99);
      FIX::SecurityXMLSchema SecurityXMLSchema_99("STRING_1233475571");
      noRelatedSym_0_1_2.set(SecurityXMLSchema_99);
      SecurityXML_198.insert(SecurityXMLSchema_99.getString());
      all_values.push_back(SecurityXML_198);
      all_compo_names.insert("SecurityXML");

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_2);
    }
    msg.addGroup(noAsgnReqs_0_0);
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
