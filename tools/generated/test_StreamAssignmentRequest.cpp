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
  multiset<string> StreamAssignmentRequest_0;
  FIX::StreamAsgnReqID StreamAsgnReqID_1("STRING_79083468");
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
      multiset<string> Parties_NoPartyIDs_138;
      FIX::PartyID PartyID_138("STRING_1322690862");
      noPartyIDs_0_1_0.set(PartyID_138);
      Parties_NoPartyIDs_138.insert(PartyID_138.getString());
      FIX::PartyIDSource PartyIDSource_138('4');
      noPartyIDs_0_1_0.set(PartyIDSource_138);
      Parties_NoPartyIDs_138.insert(PartyIDSource_138.getString());
      FIX::PartyRole PartyRole_138(58);
      noPartyIDs_0_1_0.set(PartyRole_138);
      Parties_NoPartyIDs_138.insert(PartyRole_138.getString());
      all_values.push_back(Parties_NoPartyIDs_138);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_279;
        FIX::PartySubID PartySubID_279("STRING_1813959552");
        noPartySubIDs_0_0_2_0.set(PartySubID_279);
        PtysSubGrp_NoPartySubIDs_279.insert(PartySubID_279.getString());
        FIX::PartySubIDType PartySubIDType_279(23);
        noPartySubIDs_0_0_2_0.set(PartySubIDType_279);
        PtysSubGrp_NoPartySubIDs_279.insert(PartySubIDType_279.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_279);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_280;
        FIX::PartySubID PartySubID_280("STRING_852235115");
        noPartySubIDs_0_0_2_1.set(PartySubID_280);
        PtysSubGrp_NoPartySubIDs_280.insert(PartySubID_280.getString());
        FIX::PartySubIDType PartySubIDType_280(11);
        noPartySubIDs_0_0_2_1.set(PartySubIDType_280);
        PtysSubGrp_NoPartySubIDs_280.insert(PartySubIDType_280.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_280);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_281;
        FIX::PartySubID PartySubID_281("STRING_1465960499");
        noPartySubIDs_0_0_2_2.set(PartySubID_281);
        PtysSubGrp_NoPartySubIDs_281.insert(PartySubID_281.getString());
        FIX::PartySubIDType PartySubIDType_281(17);
        noPartySubIDs_0_0_2_2.set(PartySubIDType_281);
        PtysSubGrp_NoPartySubIDs_281.insert(PartySubIDType_281.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_281);

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_139;
      FIX::PartyID PartyID_139("STRING_839980353");
      noPartyIDs_0_1_1.set(PartyID_139);
      Parties_NoPartyIDs_139.insert(PartyID_139.getString());
      FIX::PartyIDSource PartyIDSource_139('H');
      noPartyIDs_0_1_1.set(PartyIDSource_139);
      Parties_NoPartyIDs_139.insert(PartyIDSource_139.getString());
      FIX::PartyRole PartyRole_139(8);
      noPartyIDs_0_1_1.set(PartyRole_139);
      Parties_NoPartyIDs_139.insert(PartyRole_139.getString());
      all_values.push_back(Parties_NoPartyIDs_139);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_282;
        FIX::PartySubID PartySubID_282("STRING_1512631431");
        noPartySubIDs_0_1_2_0.set(PartySubID_282);
        PtysSubGrp_NoPartySubIDs_282.insert(PartySubID_282.getString());
        FIX::PartySubIDType PartySubIDType_282(23);
        noPartySubIDs_0_1_2_0.set(PartySubIDType_282);
        PtysSubGrp_NoPartySubIDs_282.insert(PartySubIDType_282.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_282);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_283;
        FIX::PartySubID PartySubID_283("STRING_1081887849");
        noPartySubIDs_0_1_2_1.set(PartySubID_283);
        PtysSubGrp_NoPartySubIDs_283.insert(PartySubID_283.getString());
        FIX::PartySubIDType PartySubIDType_283(5);
        noPartySubIDs_0_1_2_1.set(PartySubIDType_283);
        PtysSubGrp_NoPartySubIDs_283.insert(PartySubIDType_283.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_283);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_284;
        FIX::PartySubID PartySubID_284("STRING_1215381023");
        noPartySubIDs_0_1_2_2.set(PartySubID_284);
        PtysSubGrp_NoPartySubIDs_284.insert(PartySubID_284.getString());
        FIX::PartySubIDType PartySubIDType_284(25);
        noPartySubIDs_0_1_2_2.set(PartySubIDType_284);
        PtysSubGrp_NoPartySubIDs_284.insert(PartySubIDType_284.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_284);

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noAsgnReqs_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_140;
      FIX::PartyID PartyID_140("STRING_1514317308");
      noPartyIDs_0_1_2.set(PartyID_140);
      Parties_NoPartyIDs_140.insert(PartyID_140.getString());
      FIX::PartyIDSource PartyIDSource_140('8');
      noPartyIDs_0_1_2.set(PartyIDSource_140);
      Parties_NoPartyIDs_140.insert(PartyIDSource_140.getString());
      FIX::PartyRole PartyRole_140(76);
      noPartyIDs_0_1_2.set(PartyRole_140);
      Parties_NoPartyIDs_140.insert(PartyRole_140.getString());
      all_values.push_back(Parties_NoPartyIDs_140);

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_285;
        FIX::PartySubID PartySubID_285("STRING_1005167304");
        noPartySubIDs_0_2_2_0.set(PartySubID_285);
        PtysSubGrp_NoPartySubIDs_285.insert(PartySubID_285.getString());
        FIX::PartySubIDType PartySubIDType_285(6);
        noPartySubIDs_0_2_2_0.set(PartySubIDType_285);
        PtysSubGrp_NoPartySubIDs_285.insert(PartySubIDType_285.getString());
        all_values.push_back(PtysSubGrp_NoPartySubIDs_285);

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
      FIX::MDEntrySize MDEntrySize_4;
      MDEntrySize_4.setString("10842507");
      noRelatedSym_0_1_0.set(MDEntrySize_4);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(MDEntrySize_4.getString());
      FIX::MDStreamID MDStreamID_6("STRING_1817734038");
      noRelatedSym_0_1_0.set(MDStreamID_6);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(MDStreamID_6.getString());
      FIX::SettlType SettlType_28("STRING_6");
      noRelatedSym_0_1_0.set(SettlType_28);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_0.insert(SettlType_28.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_0);

      // Instrument
      multiset<string> Instrument_93;
      FIX::AttachmentPoint AttachmentPoint_93;
      AttachmentPoint_93.setString("40.940000");
      noRelatedSym_0_1_0.set(AttachmentPoint_93);
      Instrument_93.insert(AttachmentPoint_93.getString());
      FIX::CFICode CFICode_98("STRING_992941252");
      noRelatedSym_0_1_0.set(CFICode_98);
      Instrument_93.insert(CFICode_98.getString());
      FIX::CPProgram CPProgram_93(99);
      noRelatedSym_0_1_0.set(CPProgram_93);
      Instrument_93.insert(CPProgram_93.getString());
      FIX::CPRegType CPRegType_93("STRING_22947334");
      noRelatedSym_0_1_0.set(CPRegType_93);
      Instrument_93.insert(CPRegType_93.getString());
      FIX::CapPrice CapPrice_93;
      CapPrice_93.setString("10821722");
      noRelatedSym_0_1_0.set(CapPrice_93);
      Instrument_93.insert(CapPrice_93.getString());
      FIX::ContractMultiplier ContractMultiplier_93;
      ContractMultiplier_93.setString("15073149");
      noRelatedSym_0_1_0.set(ContractMultiplier_93);
      Instrument_93.insert(ContractMultiplier_93.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_93(2);
      noRelatedSym_0_1_0.set(ContractMultiplierUnit_93);
      Instrument_93.insert(ContractMultiplierUnit_93.getString());
      FIX::ContractSettlMonth ContractSettlMonth_93("MONTHYEAR_1934407338");
      noRelatedSym_0_1_0.set(ContractSettlMonth_93);
      Instrument_93.insert(ContractSettlMonth_93.getString());
      FIX::CountryOfIssue CountryOfIssue_93("COUNTRY_1193707584");
      noRelatedSym_0_1_0.set(CountryOfIssue_93);
      Instrument_93.insert(CountryOfIssue_93.getString());
      FIX::CouponPaymentDate CouponPaymentDate_93("LOCALMKTDATE_796934945");
      noRelatedSym_0_1_0.set(CouponPaymentDate_93);
      Instrument_93.insert(CouponPaymentDate_93.getString());
      FIX::CouponRate CouponRate_93;
      CouponRate_93.setString("3.300000");
      noRelatedSym_0_1_0.set(CouponRate_93);
      Instrument_93.insert(CouponRate_93.getString());
      FIX::CreditRating CreditRating_93("STRING_2033687937");
      noRelatedSym_0_1_0.set(CreditRating_93);
      Instrument_93.insert(CreditRating_93.getString());
      FIX::DatedDate DatedDate_93("LOCALMKTDATE_1450801018");
      noRelatedSym_0_1_0.set(DatedDate_93);
      Instrument_93.insert(DatedDate_93.getString());
      FIX::DetachmentPoint DetachmentPoint_93;
      DetachmentPoint_93.setString("74.050000");
      noRelatedSym_0_1_0.set(DetachmentPoint_93);
      Instrument_93.insert(DetachmentPoint_93.getString());
      FIX::EncodedIssuer EncodedIssuer_93("DATA_472723192");
      noRelatedSym_0_1_0.set(EncodedIssuer_93);
      Instrument_93.insert(EncodedIssuer_93.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_93(815948802);
      noRelatedSym_0_1_0.set(EncodedIssuerLen_93);
      Instrument_93.insert(EncodedIssuerLen_93.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_93("DATA_364335206");
      noRelatedSym_0_1_0.set(EncodedSecurityDesc_93);
      Instrument_93.insert(EncodedSecurityDesc_93.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_93(1554611041);
      noRelatedSym_0_1_0.set(EncodedSecurityDescLen_93);
      Instrument_93.insert(EncodedSecurityDescLen_93.getString());
      FIX::ExerciseStyle ExerciseStyle_93(2);
      noRelatedSym_0_1_0.set(ExerciseStyle_93);
      Instrument_93.insert(ExerciseStyle_93.getString());
      FIX::Factor Factor_93;
      Factor_93.setString("15797162");
      noRelatedSym_0_1_0.set(Factor_93);
      Instrument_93.insert(Factor_93.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_93(false);
      noRelatedSym_0_1_0.set(FlexProductEligibilityIndicator_93);
      Instrument_93.insert(FlexProductEligibilityIndicator_93.getString());
      FIX::FlexibleIndicator FlexibleIndicator_93(false);
      noRelatedSym_0_1_0.set(FlexibleIndicator_93);
      Instrument_93.insert(FlexibleIndicator_93.getString());
      FIX::FloorPrice FloorPrice_93;
      FloorPrice_93.setString("5580269");
      noRelatedSym_0_1_0.set(FloorPrice_93);
      Instrument_93.insert(FloorPrice_93.getString());
      FIX::FlowScheduleType FlowScheduleType_93(4);
      noRelatedSym_0_1_0.set(FlowScheduleType_93);
      Instrument_93.insert(FlowScheduleType_93.getString());
      FIX::InstrRegistry InstrRegistry_93("STRING_950729809");
      noRelatedSym_0_1_0.set(InstrRegistry_93);
      Instrument_93.insert(InstrRegistry_93.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_93('1');
      noRelatedSym_0_1_0.set(InstrmtAssignmentMethod_93);
      Instrument_93.insert(InstrmtAssignmentMethod_93.getString());
      FIX::InterestAccrualDate InterestAccrualDate_93("LOCALMKTDATE_1435481978");
      noRelatedSym_0_1_0.set(InterestAccrualDate_93);
      Instrument_93.insert(InterestAccrualDate_93.getString());
      FIX::IssueDate IssueDate_93("LOCALMKTDATE_1517819384");
      noRelatedSym_0_1_0.set(IssueDate_93);
      Instrument_93.insert(IssueDate_93.getString());
      FIX::Issuer Issuer_93("STRING_499961371");
      noRelatedSym_0_1_0.set(Issuer_93);
      Instrument_93.insert(Issuer_93.getString());
      FIX::ListMethod ListMethod_93(0);
      noRelatedSym_0_1_0.set(ListMethod_93);
      Instrument_93.insert(ListMethod_93.getString());
      FIX::LocaleOfIssue LocaleOfIssue_93("STRING_1956824606");
      noRelatedSym_0_1_0.set(LocaleOfIssue_93);
      Instrument_93.insert(LocaleOfIssue_93.getString());
      FIX::MaturityDate MaturityDate_93("LOCALMKTDATE_975335465");
      noRelatedSym_0_1_0.set(MaturityDate_93);
      Instrument_93.insert(MaturityDate_93.getString());
      FIX::MaturityMonthYear MaturityMonthYear_93("MONTHYEAR_2098673620");
      noRelatedSym_0_1_0.set(MaturityMonthYear_93);
      Instrument_93.insert(MaturityMonthYear_93.getString());
      FIX::MaturityTime MaturityTime_93("TZTIMEONLY_1650179979");
      noRelatedSym_0_1_0.set(MaturityTime_93);
      Instrument_93.insert(MaturityTime_93.getString());
      FIX::MinPriceIncrement MinPriceIncrement_93;
      MinPriceIncrement_93.setString("9982828");
      noRelatedSym_0_1_0.set(MinPriceIncrement_93);
      Instrument_93.insert(MinPriceIncrement_93.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_93;
      MinPriceIncrementAmount_93.setString("10333621");
      noRelatedSym_0_1_0.set(MinPriceIncrementAmount_93);
      Instrument_93.insert(MinPriceIncrementAmount_93.getString());
      FIX::NTPositionLimit NTPositionLimit_93(1010011256);
      noRelatedSym_0_1_0.set(NTPositionLimit_93);
      Instrument_93.insert(NTPositionLimit_93.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_93;
      NotionalPercentageOutstanding_93.setString("72.460000");
      noRelatedSym_0_1_0.set(NotionalPercentageOutstanding_93);
      Instrument_93.insert(NotionalPercentageOutstanding_93.getString());
      FIX::OptAttribute OptAttribute_93('8');
      noRelatedSym_0_1_0.set(OptAttribute_93);
      Instrument_93.insert(OptAttribute_93.getString());
      FIX::OptPayoutAmount OptPayoutAmount_93;
      OptPayoutAmount_93.setString("562351");
      noRelatedSym_0_1_0.set(OptPayoutAmount_93);
      Instrument_93.insert(OptPayoutAmount_93.getString());
      FIX::OptPayoutType OptPayoutType_93(2);
      noRelatedSym_0_1_0.set(OptPayoutType_93);
      Instrument_93.insert(OptPayoutType_93.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_93;
      OriginalNotionalPercentageOutstanding_93.setString("25.660000");
      noRelatedSym_0_1_0.set(OriginalNotionalPercentageOutstanding_93);
      Instrument_93.insert(OriginalNotionalPercentageOutstanding_93.getString());
      FIX::Pool Pool_93("STRING_2089923129");
      noRelatedSym_0_1_0.set(Pool_93);
      Instrument_93.insert(Pool_93.getString());
      FIX::PositionLimit PositionLimit_93(429509562);
      noRelatedSym_0_1_0.set(PositionLimit_93);
      Instrument_93.insert(PositionLimit_93.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_93("STRING_PCTPAR");
      noRelatedSym_0_1_0.set(PriceQuoteMethod_93);
      Instrument_93.insert(PriceQuoteMethod_93.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_93("STRING_415162673");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasure_93);
      Instrument_93.insert(PriceUnitOfMeasure_93.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_93;
      PriceUnitOfMeasureQty_93.setString("12454583");
      noRelatedSym_0_1_0.set(PriceUnitOfMeasureQty_93);
      Instrument_93.insert(PriceUnitOfMeasureQty_93.getString());
      FIX::Product Product_101(5);
      noRelatedSym_0_1_0.set(Product_101);
      Instrument_93.insert(Product_101.getString());
      FIX::ProductComplex ProductComplex_93("STRING_1969773714");
      noRelatedSym_0_1_0.set(ProductComplex_93);
      Instrument_93.insert(ProductComplex_93.getString());
      FIX::PutOrCall PutOrCall_93(0);
      noRelatedSym_0_1_0.set(PutOrCall_93);
      Instrument_93.insert(PutOrCall_93.getString());
      FIX::RedemptionDate RedemptionDate_93("LOCALMKTDATE_86334112");
      noRelatedSym_0_1_0.set(RedemptionDate_93);
      Instrument_93.insert(RedemptionDate_93.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_93("STRING_1210006731");
      noRelatedSym_0_1_0.set(RepoCollateralSecurityType_93);
      Instrument_93.insert(RepoCollateralSecurityType_93.getString());
      FIX::RepurchaseRate RepurchaseRate_93;
      RepurchaseRate_93.setString("22.950000");
      noRelatedSym_0_1_0.set(RepurchaseRate_93);
      Instrument_93.insert(RepurchaseRate_93.getString());
      FIX::RepurchaseTerm RepurchaseTerm_93(644361054);
      noRelatedSym_0_1_0.set(RepurchaseTerm_93);
      Instrument_93.insert(RepurchaseTerm_93.getString());
      FIX::RestructuringType RestructuringType_93("STRING_XR");
      noRelatedSym_0_1_0.set(RestructuringType_93);
      Instrument_93.insert(RestructuringType_93.getString());
      FIX::SecurityDesc SecurityDesc_93("STRING_746588456");
      noRelatedSym_0_1_0.set(SecurityDesc_93);
      Instrument_93.insert(SecurityDesc_93.getString());
      FIX::SecurityExchange SecurityExchange_93("EXCHANGE_60071653");
      noRelatedSym_0_1_0.set(SecurityExchange_93);
      Instrument_93.insert(SecurityExchange_93.getString());
      FIX::SecurityGroup SecurityGroup_93("STRING_1539243261");
      noRelatedSym_0_1_0.set(SecurityGroup_93);
      Instrument_93.insert(SecurityGroup_93.getString());
      FIX::SecurityID SecurityID_93("STRING_116924193");
      noRelatedSym_0_1_0.set(SecurityID_93);
      Instrument_93.insert(SecurityID_93.getString());
      FIX::SecurityIDSource SecurityIDSource_93("STRING_E");
      noRelatedSym_0_1_0.set(SecurityIDSource_93);
      Instrument_93.insert(SecurityIDSource_93.getString());
      FIX::SecurityStatus SecurityStatus_94("STRING_2");
      noRelatedSym_0_1_0.set(SecurityStatus_94);
      Instrument_93.insert(SecurityStatus_94.getString());
      FIX::SecuritySubType SecuritySubType_97("STRING_2073748799");
      noRelatedSym_0_1_0.set(SecuritySubType_97);
      Instrument_93.insert(SecuritySubType_97.getString());
      FIX::SecurityType SecurityType_101("STRING_TNOTE");
      noRelatedSym_0_1_0.set(SecurityType_101);
      Instrument_93.insert(SecurityType_101.getString());
      FIX::Seniority Seniority_93("STRING_SD");
      noRelatedSym_0_1_0.set(Seniority_93);
      Instrument_93.insert(Seniority_93.getString());
      FIX::SettlMethod SettlMethod_93('C');
      noRelatedSym_0_1_0.set(SettlMethod_93);
      Instrument_93.insert(SettlMethod_93.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_93("STRING_386167642");
      noRelatedSym_0_1_0.set(SettleOnOpenFlag_93);
      Instrument_93.insert(SettleOnOpenFlag_93.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_93("STRING_1482044147");
      noRelatedSym_0_1_0.set(StateOrProvinceOfIssue_93);
      Instrument_93.insert(StateOrProvinceOfIssue_93.getString());
      FIX::StrikeCurrency StrikeCurrency_93("CHF");
      noRelatedSym_0_1_0.set(StrikeCurrency_93);
      Instrument_93.insert(StrikeCurrency_93.getString());
      FIX::StrikeMultiplier StrikeMultiplier_93;
      StrikeMultiplier_93.setString("1548463");
      noRelatedSym_0_1_0.set(StrikeMultiplier_93);
      Instrument_93.insert(StrikeMultiplier_93.getString());
      FIX::StrikePrice StrikePrice_93;
      StrikePrice_93.setString("4952079");
      noRelatedSym_0_1_0.set(StrikePrice_93);
      Instrument_93.insert(StrikePrice_93.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_93(2);
      noRelatedSym_0_1_0.set(StrikePriceBoundaryMethod_93);
      Instrument_93.insert(StrikePriceBoundaryMethod_93.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_93;
      StrikePriceBoundaryPrecision_93.setString("89.500000");
      noRelatedSym_0_1_0.set(StrikePriceBoundaryPrecision_93);
      Instrument_93.insert(StrikePriceBoundaryPrecision_93.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_93(1);
      noRelatedSym_0_1_0.set(StrikePriceDeterminationMethod_93);
      Instrument_93.insert(StrikePriceDeterminationMethod_93.getString());
      FIX::StrikeValue StrikeValue_93;
      StrikeValue_93.setString("1236429");
      noRelatedSym_0_1_0.set(StrikeValue_93);
      Instrument_93.insert(StrikeValue_93.getString());
      FIX::Symbol Symbol_93("STRING_822725274");
      noRelatedSym_0_1_0.set(Symbol_93);
      Instrument_93.insert(Symbol_93.getString());
      FIX::SymbolSfx SymbolSfx_93("STRING_WI");
      noRelatedSym_0_1_0.set(SymbolSfx_93);
      Instrument_93.insert(SymbolSfx_93.getString());
      FIX::TimeUnit TimeUnit_93("STRING_Wk");
      noRelatedSym_0_1_0.set(TimeUnit_93);
      Instrument_93.insert(TimeUnit_93.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_93(1);
      noRelatedSym_0_1_0.set(UnderlyingPriceDeterminationMethod_93);
      Instrument_93.insert(UnderlyingPriceDeterminationMethod_93.getString());
      FIX::UnitOfMeasure UnitOfMeasure_93("STRING_Alw");
      noRelatedSym_0_1_0.set(UnitOfMeasure_93);
      Instrument_93.insert(UnitOfMeasure_93.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_93;
      UnitOfMeasureQty_93.setString("11326012");
      noRelatedSym_0_1_0.set(UnitOfMeasureQty_93);
      Instrument_93.insert(UnitOfMeasureQty_93.getString());
      FIX::ValuationMethod ValuationMethod_93("STRING_FUT");
      noRelatedSym_0_1_0.set(ValuationMethod_93);
      Instrument_93.insert(ValuationMethod_93.getString());
      all_values.push_back(Instrument_93);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_174;
        FIX::ComplexEventCondition ComplexEventCondition_174(2);
        noComplexEvents_0_0_2_0.set(ComplexEventCondition_174);
        ComplexEvents_NoComplexEvents_174.insert(ComplexEventCondition_174.getString());
        FIX::ComplexEventPrice ComplexEventPrice_174;
        ComplexEventPrice_174.setString("600383");
        noComplexEvents_0_0_2_0.set(ComplexEventPrice_174);
        ComplexEvents_NoComplexEvents_174.insert(ComplexEventPrice_174.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_174(2);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryMethod_174);
        ComplexEvents_NoComplexEvents_174.insert(ComplexEventPriceBoundaryMethod_174.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_174;
        ComplexEventPriceBoundaryPrecision_174.setString("83.160000");
        noComplexEvents_0_0_2_0.set(ComplexEventPriceBoundaryPrecision_174);
        ComplexEvents_NoComplexEvents_174.insert(ComplexEventPriceBoundaryPrecision_174.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_174(3);
        noComplexEvents_0_0_2_0.set(ComplexEventPriceTimeType_174);
        ComplexEvents_NoComplexEvents_174.insert(ComplexEventPriceTimeType_174.getString());
        FIX::ComplexEventType ComplexEventType_174(6);
        noComplexEvents_0_0_2_0.set(ComplexEventType_174);
        ComplexEvents_NoComplexEvents_174.insert(ComplexEventType_174.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_174;
        ComplexOptPayoutAmount_174.setString("17919725");
        noComplexEvents_0_0_2_0.set(ComplexOptPayoutAmount_174);
        ComplexEvents_NoComplexEvents_174.insert(ComplexOptPayoutAmount_174.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_174);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_353;
          FIX::ComplexEventEndDate ComplexEventEndDate_353(FIX::UTCTIMESTAMP(20, 23, 25, 27, 11, 2013));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventEndDate_353);
          ComplexEventDates_NoComplexEventDates_353.insert(ComplexEventEndDate_353.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_353(FIX::UTCTIMESTAMP(7, 17, 32, 8, 8, 2014));
          noComplexEventDates_0_0_0_3_0.set(ComplexEventStartDate_353);
          ComplexEventDates_NoComplexEventDates_353.insert(ComplexEventStartDate_353.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_353);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_710;
            FIX::ComplexEventEndTime ComplexEventEndTime_710(FIX::UTCTIMEONLY(21, 15, 9));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventEndTime_710);
            ComplexEventTimes_NoComplexEventTimes_710.insert(ComplexEventEndTime_710.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_710(FIX::UTCTIMEONLY(7, 5, 29));
            noComplexEventTimes_0_0_0_0_4_0.set(ComplexEventStartTime_710);
            ComplexEventTimes_NoComplexEventTimes_710.insert(ComplexEventStartTime_710.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_710);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_711;
            FIX::ComplexEventEndTime ComplexEventEndTime_711(FIX::UTCTIMEONLY(0, 7, 55));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventEndTime_711);
            ComplexEventTimes_NoComplexEventTimes_711.insert(ComplexEventEndTime_711.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_711(FIX::UTCTIMEONLY(11, 16, 17));
            noComplexEventTimes_0_0_0_0_4_1.set(ComplexEventStartTime_711);
            ComplexEventTimes_NoComplexEventTimes_711.insert(ComplexEventStartTime_711.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_711);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_712;
            FIX::ComplexEventEndTime ComplexEventEndTime_712(FIX::UTCTIMEONLY(16, 40, 17));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventEndTime_712);
            ComplexEventTimes_NoComplexEventTimes_712.insert(ComplexEventEndTime_712.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_712(FIX::UTCTIMEONLY(2, 22, 5));
            noComplexEventTimes_0_0_0_0_4_2.set(ComplexEventStartTime_712);
            ComplexEventTimes_NoComplexEventTimes_712.insert(ComplexEventStartTime_712.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_712);

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_2);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_354;
          FIX::ComplexEventEndDate ComplexEventEndDate_354(FIX::UTCTIMESTAMP(15, 29, 1, 22, 2, 2013));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventEndDate_354);
          ComplexEventDates_NoComplexEventDates_354.insert(ComplexEventEndDate_354.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_354(FIX::UTCTIMESTAMP(2, 32, 13, 8, 5, 2011));
          noComplexEventDates_0_0_0_3_1.set(ComplexEventStartDate_354);
          ComplexEventDates_NoComplexEventDates_354.insert(ComplexEventStartDate_354.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_354);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_713;
            FIX::ComplexEventEndTime ComplexEventEndTime_713(FIX::UTCTIMEONLY(15, 32, 26));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventEndTime_713);
            ComplexEventTimes_NoComplexEventTimes_713.insert(ComplexEventEndTime_713.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_713(FIX::UTCTIMEONLY(11, 34, 44));
            noComplexEventTimes_0_0_0_1_4_0.set(ComplexEventStartTime_713);
            ComplexEventTimes_NoComplexEventTimes_713.insert(ComplexEventStartTime_713.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_713);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_714;
            FIX::ComplexEventEndTime ComplexEventEndTime_714(FIX::UTCTIMEONLY(14, 16, 32));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventEndTime_714);
            ComplexEventTimes_NoComplexEventTimes_714.insert(ComplexEventEndTime_714.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_714(FIX::UTCTIMEONLY(7, 54, 3));
            noComplexEventTimes_0_0_0_1_4_1.set(ComplexEventStartTime_714);
            ComplexEventTimes_NoComplexEventTimes_714.insert(ComplexEventStartTime_714.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_714);

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_355;
          FIX::ComplexEventEndDate ComplexEventEndDate_355(FIX::UTCTIMESTAMP(13, 24, 50, 15, 6, 2001));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventEndDate_355);
          ComplexEventDates_NoComplexEventDates_355.insert(ComplexEventEndDate_355.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_355(FIX::UTCTIMESTAMP(19, 39, 25, 7, 8, 2010));
          noComplexEventDates_0_0_0_3_2.set(ComplexEventStartDate_355);
          ComplexEventDates_NoComplexEventDates_355.insert(ComplexEventStartDate_355.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_355);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_715;
            FIX::ComplexEventEndTime ComplexEventEndTime_715(FIX::UTCTIMEONLY(7, 13, 8));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventEndTime_715);
            ComplexEventTimes_NoComplexEventTimes_715.insert(ComplexEventEndTime_715.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_715(FIX::UTCTIMEONLY(0, 42, 22));
            noComplexEventTimes_0_0_0_2_4_0.set(ComplexEventStartTime_715);
            ComplexEventTimes_NoComplexEventTimes_715.insert(ComplexEventStartTime_715.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_715);

            noComplexEventDates_0_0_0_3_2.addGroup(noComplexEventTimes_0_0_0_2_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_185;
        FIX::EventDate EventDate_185("LOCALMKTDATE_35808337");
        noEvents_0_0_2_0.set(EventDate_185);
        EvntGrp_NoEvents_185.insert(EventDate_185.getString());
        FIX::EventPx EventPx_185;
        EventPx_185.setString("19897967");
        noEvents_0_0_2_0.set(EventPx_185);
        EvntGrp_NoEvents_185.insert(EventPx_185.getString());
        FIX::EventText EventText_185("STRING_1759088835");
        noEvents_0_0_2_0.set(EventText_185);
        EvntGrp_NoEvents_185.insert(EventText_185.getString());
        FIX::EventTime EventTime_185(FIX::UTCTIMESTAMP(1, 1, 38, 10, 7, 2002));
        noEvents_0_0_2_0.set(EventTime_185);
        EvntGrp_NoEvents_185.insert(EventTime_185.getString());
        FIX::EventType EventType_185(13);
        noEvents_0_0_2_0.set(EventType_185);
        EvntGrp_NoEvents_185.insert(EventType_185.getString());
        all_values.push_back(EvntGrp_NoEvents_185);

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_186;
        FIX::EventDate EventDate_186("LOCALMKTDATE_1471698334");
        noEvents_0_0_2_1.set(EventDate_186);
        EvntGrp_NoEvents_186.insert(EventDate_186.getString());
        FIX::EventPx EventPx_186;
        EventPx_186.setString("8542936");
        noEvents_0_0_2_1.set(EventPx_186);
        EvntGrp_NoEvents_186.insert(EventPx_186.getString());
        FIX::EventText EventText_186("STRING_933180179");
        noEvents_0_0_2_1.set(EventText_186);
        EvntGrp_NoEvents_186.insert(EventText_186.getString());
        FIX::EventTime EventTime_186(FIX::UTCTIMESTAMP(14, 38, 2, 14, 3, 2012));
        noEvents_0_0_2_1.set(EventTime_186);
        EvntGrp_NoEvents_186.insert(EventTime_186.getString());
        FIX::EventType EventType_186(19);
        noEvents_0_0_2_1.set(EventType_186);
        EvntGrp_NoEvents_186.insert(EventType_186.getString());
        all_values.push_back(EvntGrp_NoEvents_186);

        noRelatedSym_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_185;
        FIX::InstrumentPartyID InstrumentPartyID_185("STRING_952577501");
        noInstrumentParties_0_0_2_0.set(InstrumentPartyID_185);
        InstrumentParties_NoInstrumentParties_185.insert(InstrumentPartyID_185.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_185('9');
        noInstrumentParties_0_0_2_0.set(InstrumentPartyIDSource_185);
        InstrumentParties_NoInstrumentParties_185.insert(InstrumentPartyIDSource_185.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_185(2104874329);
        noInstrumentParties_0_0_2_0.set(InstrumentPartyRole_185);
        InstrumentParties_NoInstrumentParties_185.insert(InstrumentPartyRole_185.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_185);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388;
          FIX::InstrumentPartySubID InstrumentPartySubID_388("STRING_714616412");
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubID_388);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388.insert(InstrumentPartySubID_388.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_388(632027363);
          noInstrumentPartySubIDs_0_0_0_3_0.set(InstrumentPartySubIDType_388);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388.insert(InstrumentPartySubIDType_388.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389;
          FIX::InstrumentPartySubID InstrumentPartySubID_389("STRING_997541913");
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubID_389);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389.insert(InstrumentPartySubID_389.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_389(1144676115);
          noInstrumentPartySubIDs_0_0_0_3_1.set(InstrumentPartySubIDType_389);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389.insert(InstrumentPartySubIDType_389.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389);

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_186;
        FIX::InstrumentPartyID InstrumentPartyID_186("STRING_667835700");
        noInstrumentParties_0_0_2_1.set(InstrumentPartyID_186);
        InstrumentParties_NoInstrumentParties_186.insert(InstrumentPartyID_186.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_186('8');
        noInstrumentParties_0_0_2_1.set(InstrumentPartyIDSource_186);
        InstrumentParties_NoInstrumentParties_186.insert(InstrumentPartyIDSource_186.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_186(756281303);
        noInstrumentParties_0_0_2_1.set(InstrumentPartyRole_186);
        InstrumentParties_NoInstrumentParties_186.insert(InstrumentPartyRole_186.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_186);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390;
          FIX::InstrumentPartySubID InstrumentPartySubID_390("STRING_1946582597");
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubID_390);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390.insert(InstrumentPartySubID_390.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_390(1832354064);
          noInstrumentPartySubIDs_0_0_1_3_0.set(InstrumentPartySubIDType_390);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390.insert(InstrumentPartySubIDType_390.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391;
          FIX::InstrumentPartySubID InstrumentPartySubID_391("STRING_459533713");
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubID_391);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391.insert(InstrumentPartySubID_391.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_391(196838231);
          noInstrumentPartySubIDs_0_0_1_3_1.set(InstrumentPartySubIDType_391);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391.insert(InstrumentPartySubIDType_391.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392;
          FIX::InstrumentPartySubID InstrumentPartySubID_392("STRING_2029574143");
          noInstrumentPartySubIDs_0_0_1_3_2.set(InstrumentPartySubID_392);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392.insert(InstrumentPartySubID_392.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_392(1199376915);
          noInstrumentPartySubIDs_0_0_1_3_2.set(InstrumentPartySubIDType_392);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392.insert(InstrumentPartySubIDType_392.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_392);

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_2);
        }
        noRelatedSym_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_208;
        FIX::SecurityAltID SecurityAltID_208("STRING_1353788829");
        noSecurityAltID_0_0_2_0.set(SecurityAltID_208);
        SecAltIDGrp_NoSecurityAltID_208.insert(SecurityAltID_208.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_208("STRING_2053670518");
        noSecurityAltID_0_0_2_0.set(SecurityAltIDSource_208);
        SecAltIDGrp_NoSecurityAltID_208.insert(SecurityAltIDSource_208.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_208);

        noRelatedSym_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_186;
      FIX::SecurityXML SecurityXML_187("XMLDATA_1856604182");
      noRelatedSym_0_1_0.set(SecurityXML_187);
      FIX::SecurityXMLLen SecurityXMLLen_93(835254586);
      noRelatedSym_0_1_0.set(SecurityXMLLen_93);
      FIX::SecurityXMLSchema SecurityXMLSchema_93("STRING_1856011133");
      noRelatedSym_0_1_0.set(SecurityXMLSchema_93);
      SecurityXML_186.insert(SecurityXMLSchema_93.getString());
      all_values.push_back(SecurityXML_186);

      noAsgnReqs_0_0.addGroup(noRelatedSym_0_1_0);
    }
    {
      FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym noRelatedSym_0_1_1;
      // StrmAsgnReqInstrmtGrp.NoRelatedSym
      multiset<string> StrmAsgnReqInstrmtGrp_NoRelatedSym_1;
      FIX::MDEntrySize MDEntrySize_5;
      MDEntrySize_5.setString("9356575");
      noRelatedSym_0_1_1.set(MDEntrySize_5);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(MDEntrySize_5.getString());
      FIX::MDStreamID MDStreamID_7("STRING_1857980209");
      noRelatedSym_0_1_1.set(MDStreamID_7);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(MDStreamID_7.getString());
      FIX::SettlType SettlType_29("STRING_3");
      noRelatedSym_0_1_1.set(SettlType_29);
      StrmAsgnReqInstrmtGrp_NoRelatedSym_1.insert(SettlType_29.getString());
      all_values.push_back(StrmAsgnReqInstrmtGrp_NoRelatedSym_1);

      // Instrument
      multiset<string> Instrument_94;
      FIX::AttachmentPoint AttachmentPoint_94;
      AttachmentPoint_94.setString("59.230000");
      noRelatedSym_0_1_1.set(AttachmentPoint_94);
      Instrument_94.insert(AttachmentPoint_94.getString());
      FIX::CFICode CFICode_99("STRING_1280436791");
      noRelatedSym_0_1_1.set(CFICode_99);
      Instrument_94.insert(CFICode_99.getString());
      FIX::CPProgram CPProgram_94(99);
      noRelatedSym_0_1_1.set(CPProgram_94);
      Instrument_94.insert(CPProgram_94.getString());
      FIX::CPRegType CPRegType_94("STRING_1514972095");
      noRelatedSym_0_1_1.set(CPRegType_94);
      Instrument_94.insert(CPRegType_94.getString());
      FIX::CapPrice CapPrice_94;
      CapPrice_94.setString("855306");
      noRelatedSym_0_1_1.set(CapPrice_94);
      Instrument_94.insert(CapPrice_94.getString());
      FIX::ContractMultiplier ContractMultiplier_94;
      ContractMultiplier_94.setString("17186544");
      noRelatedSym_0_1_1.set(ContractMultiplier_94);
      Instrument_94.insert(ContractMultiplier_94.getString());
      FIX::ContractMultiplierUnit ContractMultiplierUnit_94(0);
      noRelatedSym_0_1_1.set(ContractMultiplierUnit_94);
      Instrument_94.insert(ContractMultiplierUnit_94.getString());
      FIX::ContractSettlMonth ContractSettlMonth_94("MONTHYEAR_1353229624");
      noRelatedSym_0_1_1.set(ContractSettlMonth_94);
      Instrument_94.insert(ContractSettlMonth_94.getString());
      FIX::CountryOfIssue CountryOfIssue_94("COUNTRY_285787221");
      noRelatedSym_0_1_1.set(CountryOfIssue_94);
      Instrument_94.insert(CountryOfIssue_94.getString());
      FIX::CouponPaymentDate CouponPaymentDate_94("LOCALMKTDATE_2104390140");
      noRelatedSym_0_1_1.set(CouponPaymentDate_94);
      Instrument_94.insert(CouponPaymentDate_94.getString());
      FIX::CouponRate CouponRate_94;
      CouponRate_94.setString("78.900000");
      noRelatedSym_0_1_1.set(CouponRate_94);
      Instrument_94.insert(CouponRate_94.getString());
      FIX::CreditRating CreditRating_94("STRING_1430463336");
      noRelatedSym_0_1_1.set(CreditRating_94);
      Instrument_94.insert(CreditRating_94.getString());
      FIX::DatedDate DatedDate_94("LOCALMKTDATE_624742192");
      noRelatedSym_0_1_1.set(DatedDate_94);
      Instrument_94.insert(DatedDate_94.getString());
      FIX::DetachmentPoint DetachmentPoint_94;
      DetachmentPoint_94.setString("29.340000");
      noRelatedSym_0_1_1.set(DetachmentPoint_94);
      Instrument_94.insert(DetachmentPoint_94.getString());
      FIX::EncodedIssuer EncodedIssuer_94("DATA_39260991");
      noRelatedSym_0_1_1.set(EncodedIssuer_94);
      Instrument_94.insert(EncodedIssuer_94.getString());
      FIX::EncodedIssuerLen EncodedIssuerLen_94(702156508);
      noRelatedSym_0_1_1.set(EncodedIssuerLen_94);
      Instrument_94.insert(EncodedIssuerLen_94.getString());
      FIX::EncodedSecurityDesc EncodedSecurityDesc_94("DATA_842241883");
      noRelatedSym_0_1_1.set(EncodedSecurityDesc_94);
      Instrument_94.insert(EncodedSecurityDesc_94.getString());
      FIX::EncodedSecurityDescLen EncodedSecurityDescLen_94(1871615056);
      noRelatedSym_0_1_1.set(EncodedSecurityDescLen_94);
      Instrument_94.insert(EncodedSecurityDescLen_94.getString());
      FIX::ExerciseStyle ExerciseStyle_94(2);
      noRelatedSym_0_1_1.set(ExerciseStyle_94);
      Instrument_94.insert(ExerciseStyle_94.getString());
      FIX::Factor Factor_94;
      Factor_94.setString("10390801");
      noRelatedSym_0_1_1.set(Factor_94);
      Instrument_94.insert(Factor_94.getString());
      FIX::FlexProductEligibilityIndicator FlexProductEligibilityIndicator_94(false);
      noRelatedSym_0_1_1.set(FlexProductEligibilityIndicator_94);
      Instrument_94.insert(FlexProductEligibilityIndicator_94.getString());
      FIX::FlexibleIndicator FlexibleIndicator_94(false);
      noRelatedSym_0_1_1.set(FlexibleIndicator_94);
      Instrument_94.insert(FlexibleIndicator_94.getString());
      FIX::FloorPrice FloorPrice_94;
      FloorPrice_94.setString("19625041");
      noRelatedSym_0_1_1.set(FloorPrice_94);
      Instrument_94.insert(FloorPrice_94.getString());
      FIX::FlowScheduleType FlowScheduleType_94(2);
      noRelatedSym_0_1_1.set(FlowScheduleType_94);
      Instrument_94.insert(FlowScheduleType_94.getString());
      FIX::InstrRegistry InstrRegistry_94("STRING_119770359");
      noRelatedSym_0_1_1.set(InstrRegistry_94);
      Instrument_94.insert(InstrRegistry_94.getString());
      FIX::InstrmtAssignmentMethod InstrmtAssignmentMethod_94('1');
      noRelatedSym_0_1_1.set(InstrmtAssignmentMethod_94);
      Instrument_94.insert(InstrmtAssignmentMethod_94.getString());
      FIX::InterestAccrualDate InterestAccrualDate_94("LOCALMKTDATE_1795265318");
      noRelatedSym_0_1_1.set(InterestAccrualDate_94);
      Instrument_94.insert(InterestAccrualDate_94.getString());
      FIX::IssueDate IssueDate_94("LOCALMKTDATE_1975781492");
      noRelatedSym_0_1_1.set(IssueDate_94);
      Instrument_94.insert(IssueDate_94.getString());
      FIX::Issuer Issuer_94("STRING_459798558");
      noRelatedSym_0_1_1.set(Issuer_94);
      Instrument_94.insert(Issuer_94.getString());
      FIX::ListMethod ListMethod_94(1);
      noRelatedSym_0_1_1.set(ListMethod_94);
      Instrument_94.insert(ListMethod_94.getString());
      FIX::LocaleOfIssue LocaleOfIssue_94("STRING_1167747027");
      noRelatedSym_0_1_1.set(LocaleOfIssue_94);
      Instrument_94.insert(LocaleOfIssue_94.getString());
      FIX::MaturityDate MaturityDate_94("LOCALMKTDATE_48760833");
      noRelatedSym_0_1_1.set(MaturityDate_94);
      Instrument_94.insert(MaturityDate_94.getString());
      FIX::MaturityMonthYear MaturityMonthYear_94("MONTHYEAR_638715023");
      noRelatedSym_0_1_1.set(MaturityMonthYear_94);
      Instrument_94.insert(MaturityMonthYear_94.getString());
      FIX::MaturityTime MaturityTime_94("TZTIMEONLY_1894375521");
      noRelatedSym_0_1_1.set(MaturityTime_94);
      Instrument_94.insert(MaturityTime_94.getString());
      FIX::MinPriceIncrement MinPriceIncrement_94;
      MinPriceIncrement_94.setString("15637329");
      noRelatedSym_0_1_1.set(MinPriceIncrement_94);
      Instrument_94.insert(MinPriceIncrement_94.getString());
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_94;
      MinPriceIncrementAmount_94.setString("7242456");
      noRelatedSym_0_1_1.set(MinPriceIncrementAmount_94);
      Instrument_94.insert(MinPriceIncrementAmount_94.getString());
      FIX::NTPositionLimit NTPositionLimit_94(1465546330);
      noRelatedSym_0_1_1.set(NTPositionLimit_94);
      Instrument_94.insert(NTPositionLimit_94.getString());
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_94;
      NotionalPercentageOutstanding_94.setString("20.570000");
      noRelatedSym_0_1_1.set(NotionalPercentageOutstanding_94);
      Instrument_94.insert(NotionalPercentageOutstanding_94.getString());
      FIX::OptAttribute OptAttribute_94('2');
      noRelatedSym_0_1_1.set(OptAttribute_94);
      Instrument_94.insert(OptAttribute_94.getString());
      FIX::OptPayoutAmount OptPayoutAmount_94;
      OptPayoutAmount_94.setString("17513335");
      noRelatedSym_0_1_1.set(OptPayoutAmount_94);
      Instrument_94.insert(OptPayoutAmount_94.getString());
      FIX::OptPayoutType OptPayoutType_94(2);
      noRelatedSym_0_1_1.set(OptPayoutType_94);
      Instrument_94.insert(OptPayoutType_94.getString());
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_94;
      OriginalNotionalPercentageOutstanding_94.setString("95.340000");
      noRelatedSym_0_1_1.set(OriginalNotionalPercentageOutstanding_94);
      Instrument_94.insert(OriginalNotionalPercentageOutstanding_94.getString());
      FIX::Pool Pool_94("STRING_1034313239");
      noRelatedSym_0_1_1.set(Pool_94);
      Instrument_94.insert(Pool_94.getString());
      FIX::PositionLimit PositionLimit_94(1470260741);
      noRelatedSym_0_1_1.set(PositionLimit_94);
      Instrument_94.insert(PositionLimit_94.getString());
      FIX::PriceQuoteMethod PriceQuoteMethod_94("STRING_STD");
      noRelatedSym_0_1_1.set(PriceQuoteMethod_94);
      Instrument_94.insert(PriceQuoteMethod_94.getString());
      FIX::PriceUnitOfMeasure PriceUnitOfMeasure_94("STRING_1073574231");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasure_94);
      Instrument_94.insert(PriceUnitOfMeasure_94.getString());
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_94;
      PriceUnitOfMeasureQty_94.setString("249336");
      noRelatedSym_0_1_1.set(PriceUnitOfMeasureQty_94);
      Instrument_94.insert(PriceUnitOfMeasureQty_94.getString());
      FIX::Product Product_102(4);
      noRelatedSym_0_1_1.set(Product_102);
      Instrument_94.insert(Product_102.getString());
      FIX::ProductComplex ProductComplex_94("STRING_797705639");
      noRelatedSym_0_1_1.set(ProductComplex_94);
      Instrument_94.insert(ProductComplex_94.getString());
      FIX::PutOrCall PutOrCall_94(1);
      noRelatedSym_0_1_1.set(PutOrCall_94);
      Instrument_94.insert(PutOrCall_94.getString());
      FIX::RedemptionDate RedemptionDate_94("LOCALMKTDATE_910260819");
      noRelatedSym_0_1_1.set(RedemptionDate_94);
      Instrument_94.insert(RedemptionDate_94.getString());
      FIX::RepoCollateralSecurityType RepoCollateralSecurityType_94("STRING_403927542");
      noRelatedSym_0_1_1.set(RepoCollateralSecurityType_94);
      Instrument_94.insert(RepoCollateralSecurityType_94.getString());
      FIX::RepurchaseRate RepurchaseRate_94;
      RepurchaseRate_94.setString("73.120000");
      noRelatedSym_0_1_1.set(RepurchaseRate_94);
      Instrument_94.insert(RepurchaseRate_94.getString());
      FIX::RepurchaseTerm RepurchaseTerm_94(725281289);
      noRelatedSym_0_1_1.set(RepurchaseTerm_94);
      Instrument_94.insert(RepurchaseTerm_94.getString());
      FIX::RestructuringType RestructuringType_94("STRING_MM");
      noRelatedSym_0_1_1.set(RestructuringType_94);
      Instrument_94.insert(RestructuringType_94.getString());
      FIX::SecurityDesc SecurityDesc_94("STRING_1519977671");
      noRelatedSym_0_1_1.set(SecurityDesc_94);
      Instrument_94.insert(SecurityDesc_94.getString());
      FIX::SecurityExchange SecurityExchange_94("EXCHANGE_249422294");
      noRelatedSym_0_1_1.set(SecurityExchange_94);
      Instrument_94.insert(SecurityExchange_94.getString());
      FIX::SecurityGroup SecurityGroup_94("STRING_1011719944");
      noRelatedSym_0_1_1.set(SecurityGroup_94);
      Instrument_94.insert(SecurityGroup_94.getString());
      FIX::SecurityID SecurityID_94("STRING_1348275516");
      noRelatedSym_0_1_1.set(SecurityID_94);
      Instrument_94.insert(SecurityID_94.getString());
      FIX::SecurityIDSource SecurityIDSource_94("STRING_B");
      noRelatedSym_0_1_1.set(SecurityIDSource_94);
      Instrument_94.insert(SecurityIDSource_94.getString());
      FIX::SecurityStatus SecurityStatus_95("STRING_1");
      noRelatedSym_0_1_1.set(SecurityStatus_95);
      Instrument_94.insert(SecurityStatus_95.getString());
      FIX::SecuritySubType SecuritySubType_98("STRING_368538895");
      noRelatedSym_0_1_1.set(SecuritySubType_98);
      Instrument_94.insert(SecuritySubType_98.getString());
      FIX::SecurityType SecurityType_102("STRING_ONITE");
      noRelatedSym_0_1_1.set(SecurityType_102);
      Instrument_94.insert(SecurityType_102.getString());
      FIX::Seniority Seniority_94("STRING_SD");
      noRelatedSym_0_1_1.set(Seniority_94);
      Instrument_94.insert(Seniority_94.getString());
      FIX::SettlMethod SettlMethod_94('C');
      noRelatedSym_0_1_1.set(SettlMethod_94);
      Instrument_94.insert(SettlMethod_94.getString());
      FIX::SettleOnOpenFlag SettleOnOpenFlag_94("STRING_174230966");
      noRelatedSym_0_1_1.set(SettleOnOpenFlag_94);
      Instrument_94.insert(SettleOnOpenFlag_94.getString());
      FIX::StateOrProvinceOfIssue StateOrProvinceOfIssue_94("STRING_1732958867");
      noRelatedSym_0_1_1.set(StateOrProvinceOfIssue_94);
      Instrument_94.insert(StateOrProvinceOfIssue_94.getString());
      FIX::StrikeCurrency StrikeCurrency_94("CAN");
      noRelatedSym_0_1_1.set(StrikeCurrency_94);
      Instrument_94.insert(StrikeCurrency_94.getString());
      FIX::StrikeMultiplier StrikeMultiplier_94;
      StrikeMultiplier_94.setString("16629505");
      noRelatedSym_0_1_1.set(StrikeMultiplier_94);
      Instrument_94.insert(StrikeMultiplier_94.getString());
      FIX::StrikePrice StrikePrice_94;
      StrikePrice_94.setString("11848270");
      noRelatedSym_0_1_1.set(StrikePrice_94);
      Instrument_94.insert(StrikePrice_94.getString());
      FIX::StrikePriceBoundaryMethod StrikePriceBoundaryMethod_94(3);
      noRelatedSym_0_1_1.set(StrikePriceBoundaryMethod_94);
      Instrument_94.insert(StrikePriceBoundaryMethod_94.getString());
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_94;
      StrikePriceBoundaryPrecision_94.setString("0.460000");
      noRelatedSym_0_1_1.set(StrikePriceBoundaryPrecision_94);
      Instrument_94.insert(StrikePriceBoundaryPrecision_94.getString());
      FIX::StrikePriceDeterminationMethod StrikePriceDeterminationMethod_94(2);
      noRelatedSym_0_1_1.set(StrikePriceDeterminationMethod_94);
      Instrument_94.insert(StrikePriceDeterminationMethod_94.getString());
      FIX::StrikeValue StrikeValue_94;
      StrikeValue_94.setString("12311386");
      noRelatedSym_0_1_1.set(StrikeValue_94);
      Instrument_94.insert(StrikeValue_94.getString());
      FIX::Symbol Symbol_94("STRING_825168866");
      noRelatedSym_0_1_1.set(Symbol_94);
      Instrument_94.insert(Symbol_94.getString());
      FIX::SymbolSfx SymbolSfx_94("STRING_CD");
      noRelatedSym_0_1_1.set(SymbolSfx_94);
      Instrument_94.insert(SymbolSfx_94.getString());
      FIX::TimeUnit TimeUnit_94("STRING_S");
      noRelatedSym_0_1_1.set(TimeUnit_94);
      Instrument_94.insert(TimeUnit_94.getString());
      FIX::UnderlyingPriceDeterminationMethod UnderlyingPriceDeterminationMethod_94(3);
      noRelatedSym_0_1_1.set(UnderlyingPriceDeterminationMethod_94);
      Instrument_94.insert(UnderlyingPriceDeterminationMethod_94.getString());
      FIX::UnitOfMeasure UnitOfMeasure_94("STRING_Bcf");
      noRelatedSym_0_1_1.set(UnitOfMeasure_94);
      Instrument_94.insert(UnitOfMeasure_94.getString());
      FIX::UnitOfMeasureQty UnitOfMeasureQty_94;
      UnitOfMeasureQty_94.setString("2952124");
      noRelatedSym_0_1_1.set(UnitOfMeasureQty_94);
      Instrument_94.insert(UnitOfMeasureQty_94.getString());
      FIX::ValuationMethod ValuationMethod_94("STRING_CDSD");
      noRelatedSym_0_1_1.set(ValuationMethod_94);
      Instrument_94.insert(ValuationMethod_94.getString());
      all_values.push_back(Instrument_94);

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_175;
        FIX::ComplexEventCondition ComplexEventCondition_175(1);
        noComplexEvents_0_1_2_0.set(ComplexEventCondition_175);
        ComplexEvents_NoComplexEvents_175.insert(ComplexEventCondition_175.getString());
        FIX::ComplexEventPrice ComplexEventPrice_175;
        ComplexEventPrice_175.setString("1844080");
        noComplexEvents_0_1_2_0.set(ComplexEventPrice_175);
        ComplexEvents_NoComplexEvents_175.insert(ComplexEventPrice_175.getString());
        FIX::ComplexEventPriceBoundaryMethod ComplexEventPriceBoundaryMethod_175(2);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryMethod_175);
        ComplexEvents_NoComplexEvents_175.insert(ComplexEventPriceBoundaryMethod_175.getString());
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_175;
        ComplexEventPriceBoundaryPrecision_175.setString("37.770000");
        noComplexEvents_0_1_2_0.set(ComplexEventPriceBoundaryPrecision_175);
        ComplexEvents_NoComplexEvents_175.insert(ComplexEventPriceBoundaryPrecision_175.getString());
        FIX::ComplexEventPriceTimeType ComplexEventPriceTimeType_175(2);
        noComplexEvents_0_1_2_0.set(ComplexEventPriceTimeType_175);
        ComplexEvents_NoComplexEvents_175.insert(ComplexEventPriceTimeType_175.getString());
        FIX::ComplexEventType ComplexEventType_175(1);
        noComplexEvents_0_1_2_0.set(ComplexEventType_175);
        ComplexEvents_NoComplexEvents_175.insert(ComplexEventType_175.getString());
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_175;
        ComplexOptPayoutAmount_175.setString("2687056");
        noComplexEvents_0_1_2_0.set(ComplexOptPayoutAmount_175);
        ComplexEvents_NoComplexEvents_175.insert(ComplexOptPayoutAmount_175.getString());
        all_values.push_back(ComplexEvents_NoComplexEvents_175);

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_356;
          FIX::ComplexEventEndDate ComplexEventEndDate_356(FIX::UTCTIMESTAMP(21, 3, 22, 1, 6, 2007));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventEndDate_356);
          ComplexEventDates_NoComplexEventDates_356.insert(ComplexEventEndDate_356.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_356(FIX::UTCTIMESTAMP(20, 45, 21, 0, 4, 2000));
          noComplexEventDates_0_1_0_3_0.set(ComplexEventStartDate_356);
          ComplexEventDates_NoComplexEventDates_356.insert(ComplexEventStartDate_356.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_356);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_716;
            FIX::ComplexEventEndTime ComplexEventEndTime_716(FIX::UTCTIMEONLY(10, 13, 40));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventEndTime_716);
            ComplexEventTimes_NoComplexEventTimes_716.insert(ComplexEventEndTime_716.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_716(FIX::UTCTIMEONLY(23, 21, 22));
            noComplexEventTimes_0_1_0_0_4_0.set(ComplexEventStartTime_716);
            ComplexEventTimes_NoComplexEventTimes_716.insert(ComplexEventStartTime_716.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_716);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_717;
            FIX::ComplexEventEndTime ComplexEventEndTime_717(FIX::UTCTIMEONLY(8, 53, 18));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventEndTime_717);
            ComplexEventTimes_NoComplexEventTimes_717.insert(ComplexEventEndTime_717.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_717(FIX::UTCTIMEONLY(13, 36, 48));
            noComplexEventTimes_0_1_0_0_4_1.set(ComplexEventStartTime_717);
            ComplexEventTimes_NoComplexEventTimes_717.insert(ComplexEventStartTime_717.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_717);

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_357;
          FIX::ComplexEventEndDate ComplexEventEndDate_357(FIX::UTCTIMESTAMP(21, 43, 11, 22, 6, 2000));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventEndDate_357);
          ComplexEventDates_NoComplexEventDates_357.insert(ComplexEventEndDate_357.getString());
          FIX::ComplexEventStartDate ComplexEventStartDate_357(FIX::UTCTIMESTAMP(1, 49, 20, 22, 5, 2000));
          noComplexEventDates_0_1_0_3_1.set(ComplexEventStartDate_357);
          ComplexEventDates_NoComplexEventDates_357.insert(ComplexEventStartDate_357.getString());
          all_values.push_back(ComplexEventDates_NoComplexEventDates_357);

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_718;
            FIX::ComplexEventEndTime ComplexEventEndTime_718(FIX::UTCTIMEONLY(17, 9, 46));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventEndTime_718);
            ComplexEventTimes_NoComplexEventTimes_718.insert(ComplexEventEndTime_718.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_718(FIX::UTCTIMEONLY(0, 7, 5));
            noComplexEventTimes_0_1_0_1_4_0.set(ComplexEventStartTime_718);
            ComplexEventTimes_NoComplexEventTimes_718.insert(ComplexEventStartTime_718.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_718);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_719;
            FIX::ComplexEventEndTime ComplexEventEndTime_719(FIX::UTCTIMEONLY(20, 50, 7));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventEndTime_719);
            ComplexEventTimes_NoComplexEventTimes_719.insert(ComplexEventEndTime_719.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_719(FIX::UTCTIMEONLY(3, 43, 2));
            noComplexEventTimes_0_1_0_1_4_1.set(ComplexEventStartTime_719);
            ComplexEventTimes_NoComplexEventTimes_719.insert(ComplexEventStartTime_719.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_719);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_1);
          }
          {
            FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_720;
            FIX::ComplexEventEndTime ComplexEventEndTime_720(FIX::UTCTIMEONLY(8, 45, 3));
            noComplexEventTimes_0_1_0_1_4_2.set(ComplexEventEndTime_720);
            ComplexEventTimes_NoComplexEventTimes_720.insert(ComplexEventEndTime_720.getString());
            FIX::ComplexEventStartTime ComplexEventStartTime_720(FIX::UTCTIMEONLY(6, 7, 57));
            noComplexEventTimes_0_1_0_1_4_2.set(ComplexEventStartTime_720);
            ComplexEventTimes_NoComplexEventTimes_720.insert(ComplexEventStartTime_720.getString());
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_720);

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        noRelatedSym_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_187;
        FIX::EventDate EventDate_187("LOCALMKTDATE_1988748357");
        noEvents_0_1_2_0.set(EventDate_187);
        EvntGrp_NoEvents_187.insert(EventDate_187.getString());
        FIX::EventPx EventPx_187;
        EventPx_187.setString("21063518");
        noEvents_0_1_2_0.set(EventPx_187);
        EvntGrp_NoEvents_187.insert(EventPx_187.getString());
        FIX::EventText EventText_187("STRING_415867554");
        noEvents_0_1_2_0.set(EventText_187);
        EvntGrp_NoEvents_187.insert(EventText_187.getString());
        FIX::EventTime EventTime_187(FIX::UTCTIMESTAMP(16, 50, 55, 13, 12, 2003));
        noEvents_0_1_2_0.set(EventTime_187);
        EvntGrp_NoEvents_187.insert(EventTime_187.getString());
        FIX::EventType EventType_187(16);
        noEvents_0_1_2_0.set(EventType_187);
        EvntGrp_NoEvents_187.insert(EventType_187.getString());
        all_values.push_back(EvntGrp_NoEvents_187);

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_188;
        FIX::EventDate EventDate_188("LOCALMKTDATE_474394167");
        noEvents_0_1_2_1.set(EventDate_188);
        EvntGrp_NoEvents_188.insert(EventDate_188.getString());
        FIX::EventPx EventPx_188;
        EventPx_188.setString("4133141");
        noEvents_0_1_2_1.set(EventPx_188);
        EvntGrp_NoEvents_188.insert(EventPx_188.getString());
        FIX::EventText EventText_188("STRING_912649212");
        noEvents_0_1_2_1.set(EventText_188);
        EvntGrp_NoEvents_188.insert(EventText_188.getString());
        FIX::EventTime EventTime_188(FIX::UTCTIMESTAMP(17, 3, 23, 3, 11, 2017));
        noEvents_0_1_2_1.set(EventTime_188);
        EvntGrp_NoEvents_188.insert(EventTime_188.getString());
        FIX::EventType EventType_188(14);
        noEvents_0_1_2_1.set(EventType_188);
        EvntGrp_NoEvents_188.insert(EventType_188.getString());
        all_values.push_back(EvntGrp_NoEvents_188);

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_1);
      }
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoEvents noEvents_0_1_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_189;
        FIX::EventDate EventDate_189("LOCALMKTDATE_1793606150");
        noEvents_0_1_2_2.set(EventDate_189);
        EvntGrp_NoEvents_189.insert(EventDate_189.getString());
        FIX::EventPx EventPx_189;
        EventPx_189.setString("7085258");
        noEvents_0_1_2_2.set(EventPx_189);
        EvntGrp_NoEvents_189.insert(EventPx_189.getString());
        FIX::EventText EventText_189("STRING_1914743518");
        noEvents_0_1_2_2.set(EventText_189);
        EvntGrp_NoEvents_189.insert(EventText_189.getString());
        FIX::EventTime EventTime_189(FIX::UTCTIMESTAMP(10, 33, 53, 20, 10, 2000));
        noEvents_0_1_2_2.set(EventTime_189);
        EvntGrp_NoEvents_189.insert(EventTime_189.getString());
        FIX::EventType EventType_189(10);
        noEvents_0_1_2_2.set(EventType_189);
        EvntGrp_NoEvents_189.insert(EventType_189.getString());
        all_values.push_back(EvntGrp_NoEvents_189);

        noRelatedSym_0_1_1.addGroup(noEvents_0_1_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_187;
        FIX::InstrumentPartyID InstrumentPartyID_187("STRING_848978895");
        noInstrumentParties_0_1_2_0.set(InstrumentPartyID_187);
        InstrumentParties_NoInstrumentParties_187.insert(InstrumentPartyID_187.getString());
        FIX::InstrumentPartyIDSource InstrumentPartyIDSource_187('1');
        noInstrumentParties_0_1_2_0.set(InstrumentPartyIDSource_187);
        InstrumentParties_NoInstrumentParties_187.insert(InstrumentPartyIDSource_187.getString());
        FIX::InstrumentPartyRole InstrumentPartyRole_187(1164635501);
        noInstrumentParties_0_1_2_0.set(InstrumentPartyRole_187);
        InstrumentParties_NoInstrumentParties_187.insert(InstrumentPartyRole_187.getString());
        all_values.push_back(InstrumentParties_NoInstrumentParties_187);

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393;
          FIX::InstrumentPartySubID InstrumentPartySubID_393("STRING_199768330");
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubID_393);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393.insert(InstrumentPartySubID_393.getString());
          FIX::InstrumentPartySubIDType InstrumentPartySubIDType_393(1047311972);
          noInstrumentPartySubIDs_0_1_0_3_0.set(InstrumentPartySubIDType_393);
          InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393.insert(InstrumentPartySubIDType_393.getString());
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_393);

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        noRelatedSym_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::StreamAssignmentRequest::NoAsgnReqs::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_209;
        FIX::SecurityAltID SecurityAltID_209("STRING_1930134446");
        noSecurityAltID_0_1_2_0.set(SecurityAltID_209);
        SecAltIDGrp_NoSecurityAltID_209.insert(SecurityAltID_209.getString());
        FIX::SecurityAltIDSource SecurityAltIDSource_209("STRING_1521706139");
        noSecurityAltID_0_1_2_0.set(SecurityAltIDSource_209);
        SecAltIDGrp_NoSecurityAltID_209.insert(SecurityAltIDSource_209.getString());
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_209);

        noRelatedSym_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_188;
      FIX::SecurityXML SecurityXML_189("XMLDATA_1492661829");
      noRelatedSym_0_1_1.set(SecurityXML_189);
      FIX::SecurityXMLLen SecurityXMLLen_94(695300010);
      noRelatedSym_0_1_1.set(SecurityXMLLen_94);
      FIX::SecurityXMLSchema SecurityXMLSchema_94("STRING_1374711315");
      noRelatedSym_0_1_1.set(SecurityXMLSchema_94);
      SecurityXML_188.insert(SecurityXMLSchema_94.getString());
      all_values.push_back(SecurityXML_188);

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
