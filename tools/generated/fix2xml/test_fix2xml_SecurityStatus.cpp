#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityStatus msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatus_87;
  set_field(msg, FIX::Adjustment{1}, SecurityStatus_87);
  FIX::BuyVolume BuyVolume_0;
  BuyVolume_0.setString("18990674");
set_field(msg, BuyVolume_0, SecurityStatus_87);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_K"}, SecurityStatus_87);
  set_field(msg, FIX::Currency{"USD"}, SecurityStatus_87);
  set_field(msg, FIX::DueToRelated{true}, SecurityStatus_87);
  set_field(msg, FIX::EncodedText{"DATA_1876859077"}, SecurityStatus_87);
  set_field(msg, FIX::EncodedTextLen{540365618}, SecurityStatus_87);
  set_field(msg, FIX::FinancialStatus{"MULTIPLECHARVALUE_2"}, SecurityStatus_87);
  FIX::FirstPx FirstPx_6;
  FirstPx_6.setString("20727298");
set_field(msg, FirstPx_6, SecurityStatus_87);
  set_field(msg, FIX::HaltReasonInt{2}, SecurityStatus_87);
  FIX::HighPx HighPx_6;
  HighPx_6.setString("4068735");
set_field(msg, HighPx_6, SecurityStatus_87);
  set_field(msg, FIX::InViewOfCommon{true}, SecurityStatus_87);
  FIX::LastPx LastPx_16;
  LastPx_16.setString("15089551");
set_field(msg, LastPx_16, SecurityStatus_87);
  FIX::LowPx LowPx_6;
  LowPx_6.setString("5018464");
set_field(msg, LowPx_6, SecurityStatus_87);
  set_field(msg, FIX::MDBookType{2}, SecurityStatus_87);
  set_field(msg, FIX::MarketDepth{79985903}, SecurityStatus_87);
  set_field(msg, FIX::MarketID{"EXCHANGE_1225679733"}, SecurityStatus_87);
  set_field(msg, FIX::MarketSegmentID{"STRING_1758046014"}, SecurityStatus_87);
  set_field(msg, FIX::SecurityStatusReqID{"STRING_1433819061"}, SecurityStatus_87);
  set_field(msg, FIX::SecurityTradingEvent{5}, SecurityStatus_87);
  set_field(msg, FIX::SecurityTradingStatus{12}, SecurityStatus_87);
  FIX::SellVolume SellVolume_0;
  SellVolume_0.setString("8479079");
set_field(msg, SellVolume_0, SecurityStatus_87);
  set_field(msg, FIX::Text{"STRING_70792335"}, SecurityStatus_87);
  set_field(msg, FIX::TradingSessionID{"STRING_1"}, SecurityStatus_87);
  set_field(msg, FIX::TradingSessionSubID{"STRING_4"}, SecurityStatus_87);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(16, 20, 13, 9, 8, 2004)}, SecurityStatus_87);
  set_field(msg, FIX::UnsolicitedIndicator{false}, SecurityStatus_87);
  all_values.push_back(SecurityStatus_87);

  all_compo_names.insert("SecurityStatus");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_16;
  set_field(msg, FIX::ApplID{"STRING_462459753"}, ApplicationSequenceControl_16);
  set_field(msg, FIX::ApplLastSeqNum{677275151}, ApplicationSequenceControl_16);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_16);
  set_field(msg, FIX::ApplSeqNum{191835182}, ApplicationSequenceControl_16);
  all_values.push_back(ApplicationSequenceControl_16);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatus::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_132;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1455459805"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{117081398}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_989036515"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1862333343}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1873185608"}, InstrumentLeg_132);
    FIX::LegContractMultiplier LegContractMultiplier_132;
    LegContractMultiplier_132.setString("3505080");
set_field(noLegs_0_0, LegContractMultiplier_132, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{216696192}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_102045995"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_430493951"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1442375925"}, InstrumentLeg_132);
    FIX::LegCouponRate LegCouponRate_132;
    LegCouponRate_132.setString("20.090000");
set_field(noLegs_0_0, LegCouponRate_132, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1864313013"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_564737303"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1071425160}, InstrumentLeg_132);
    FIX::LegFactor LegFactor_132;
    LegFactor_132.setString("17746172");
set_field(noLegs_0_0, LegFactor_132, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{278174833}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1540159343"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1892014731"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_2051579073"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_187893328"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1582280236"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1592291996"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_734694759"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1364836609"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_132);
    FIX::LegOptionRatio LegOptionRatio_132;
    LegOptionRatio_132.setString("14119699");
set_field(noLegs_0_0, LegOptionRatio_132, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1679659445"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_99103284"}, InstrumentLeg_132);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_132;
    LegPriceUnitOfMeasureQty_132.setString("4821270");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_132, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegProduct{987635602}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegPutOrCall{216184682}, InstrumentLeg_132);
    FIX::LegRatioQty LegRatioQty_132;
    LegRatioQty_132.setString("14711635");
set_field(noLegs_0_0, LegRatioQty_132, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_702485297"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_2089370290"}, InstrumentLeg_132);
    FIX::LegRepurchaseRate LegRepurchaseRate_132;
    LegRepurchaseRate_132.setString("15.940000");
set_field(noLegs_0_0, LegRepurchaseRate_132, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{919181489}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_43932637"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_104681898"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_214073766"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1904024646"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1968994911"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1214706591"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_386248566"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_132);
    FIX::LegStrikePrice LegStrikePrice_132;
    LegStrikePrice_132.setString("6644233");
set_field(noLegs_0_0, LegStrikePrice_132, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1678807447"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_999439779"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_568518825"}, InstrumentLeg_132);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1866700775"}, InstrumentLeg_132);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_132;
    LegUnitOfMeasureQty_132.setString("4342363");
set_field(noLegs_0_0, LegUnitOfMeasureQty_132, InstrumentLeg_132);
    all_values.push_back(InstrumentLeg_132);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_263;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_453911886"}, LegSecAltIDGrp_NoLegSecurityAltID_263);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1799072977"}, LegSecAltIDGrp_NoLegSecurityAltID_263);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_263);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_133;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_2068078923"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1865881796}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1331248774"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{19698559}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_200525179"}, InstrumentLeg_133);
    FIX::LegContractMultiplier LegContractMultiplier_133;
    LegContractMultiplier_133.setString("1714007");
set_field(noLegs_0_1, LegContractMultiplier_133, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{235883241}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1671688725"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_873886026"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_177769883"}, InstrumentLeg_133);
    FIX::LegCouponRate LegCouponRate_133;
    LegCouponRate_133.setString("66.720000");
set_field(noLegs_0_1, LegCouponRate_133, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1793067515"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_2007141282"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{2125727167}, InstrumentLeg_133);
    FIX::LegFactor LegFactor_133;
    LegFactor_133.setString("12720698");
set_field(noLegs_0_1, LegFactor_133, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1074364225}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1606018637"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1658318399"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1213012329"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_713443685"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_175258151"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_744336128"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1712883465"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_743776976"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'4'}, InstrumentLeg_133);
    FIX::LegOptionRatio LegOptionRatio_133;
    LegOptionRatio_133.setString("21471198");
set_field(noLegs_0_1, LegOptionRatio_133, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_757104149"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_917465142"}, InstrumentLeg_133);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_133;
    LegPriceUnitOfMeasureQty_133.setString("17987091");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_133, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegProduct{677699424}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegPutOrCall{635863291}, InstrumentLeg_133);
    FIX::LegRatioQty LegRatioQty_133;
    LegRatioQty_133.setString("9824742");
set_field(noLegs_0_1, LegRatioQty_133, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_697397983"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_836388470"}, InstrumentLeg_133);
    FIX::LegRepurchaseRate LegRepurchaseRate_133;
    LegRepurchaseRate_133.setString("50.160000");
set_field(noLegs_0_1, LegRepurchaseRate_133, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{933281224}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_360593548"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_2027761042"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1111051108"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1706470220"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1673344909"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1332753629"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1533002543"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_133);
    FIX::LegStrikePrice LegStrikePrice_133;
    LegStrikePrice_133.setString("4598831");
set_field(noLegs_0_1, LegStrikePrice_133, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_769532137"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1792449726"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1672895450"}, InstrumentLeg_133);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1482975823"}, InstrumentLeg_133);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_133;
    LegUnitOfMeasureQty_133.setString("19677078");
set_field(noLegs_0_1, LegUnitOfMeasureQty_133, InstrumentLeg_133);
    all_values.push_back(InstrumentLeg_133);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_264;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1048375640"}, LegSecAltIDGrp_NoLegSecurityAltID_264);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_564001205"}, LegSecAltIDGrp_NoLegSecurityAltID_264);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_264);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_87;
  FIX::AttachmentPoint AttachmentPoint_87;
  AttachmentPoint_87.setString("11.870000");
set_field(msg, AttachmentPoint_87, Instrument_87);
  set_field(msg, FIX::CFICode{"STRING_1048011824"}, Instrument_87);
  set_field(msg, FIX::CPProgram{99}, Instrument_87);
  set_field(msg, FIX::CPRegType{"STRING_1650766329"}, Instrument_87);
  FIX::CapPrice CapPrice_87;
  CapPrice_87.setString("6992373");
set_field(msg, CapPrice_87, Instrument_87);
  FIX::ContractMultiplier ContractMultiplier_87;
  ContractMultiplier_87.setString("19988047");
set_field(msg, ContractMultiplier_87, Instrument_87);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_87);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1681711625"}, Instrument_87);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_548719115"}, Instrument_87);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_975534443"}, Instrument_87);
  FIX::CouponRate CouponRate_87;
  CouponRate_87.setString("29.930000");
set_field(msg, CouponRate_87, Instrument_87);
  set_field(msg, FIX::CreditRating{"STRING_1482000339"}, Instrument_87);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1336127991"}, Instrument_87);
  FIX::DetachmentPoint DetachmentPoint_87;
  DetachmentPoint_87.setString("3.870000");
set_field(msg, DetachmentPoint_87, Instrument_87);
  set_field(msg, FIX::EncodedIssuer{"DATA_445567799"}, Instrument_87);
  set_field(msg, FIX::EncodedIssuerLen{895114563}, Instrument_87);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_94241649"}, Instrument_87);
  set_field(msg, FIX::EncodedSecurityDescLen{1778321428}, Instrument_87);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_87);
  FIX::Factor Factor_87;
  Factor_87.setString("16272441");
set_field(msg, Factor_87, Instrument_87);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_87);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_87);
  FIX::FloorPrice FloorPrice_87;
  FloorPrice_87.setString("20871273");
set_field(msg, FloorPrice_87, Instrument_87);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_87);
  set_field(msg, FIX::InstrRegistry{"STRING_1683757110"}, Instrument_87);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_87);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1046859241"}, Instrument_87);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1503981340"}, Instrument_87);
  set_field(msg, FIX::Issuer{"STRING_1882287047"}, Instrument_87);
  set_field(msg, FIX::ListMethod{1}, Instrument_87);
  set_field(msg, FIX::LocaleOfIssue{"STRING_2067982545"}, Instrument_87);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_468104586"}, Instrument_87);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_995763058"}, Instrument_87);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1241604252"}, Instrument_87);
  FIX::MinPriceIncrement MinPriceIncrement_87;
  MinPriceIncrement_87.setString("21188709");
set_field(msg, MinPriceIncrement_87, Instrument_87);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_87;
  MinPriceIncrementAmount_87.setString("16950003");
set_field(msg, MinPriceIncrementAmount_87, Instrument_87);
  set_field(msg, FIX::NTPositionLimit{1092925384}, Instrument_87);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_87;
  NotionalPercentageOutstanding_87.setString("32.400000");
set_field(msg, NotionalPercentageOutstanding_87, Instrument_87);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_87);
  FIX::OptPayoutAmount OptPayoutAmount_87;
  OptPayoutAmount_87.setString("16416444");
set_field(msg, OptPayoutAmount_87, Instrument_87);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_87);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_87;
  OriginalNotionalPercentageOutstanding_87.setString("13.670000");
set_field(msg, OriginalNotionalPercentageOutstanding_87, Instrument_87);
  set_field(msg, FIX::Pool{"STRING_976161190"}, Instrument_87);
  set_field(msg, FIX::PositionLimit{274712026}, Instrument_87);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_87);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1421728990"}, Instrument_87);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_87;
  PriceUnitOfMeasureQty_87.setString("11698265");
set_field(msg, PriceUnitOfMeasureQty_87, Instrument_87);
  set_field(msg, FIX::Product{4}, Instrument_87);
  set_field(msg, FIX::ProductComplex{"STRING_1052566770"}, Instrument_87);
  set_field(msg, FIX::PutOrCall{0}, Instrument_87);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_2059713948"}, Instrument_87);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1994401699"}, Instrument_87);
  FIX::RepurchaseRate RepurchaseRate_87;
  RepurchaseRate_87.setString("0.300000");
set_field(msg, RepurchaseRate_87, Instrument_87);
  set_field(msg, FIX::RepurchaseTerm{1999357613}, Instrument_87);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_87);
  set_field(msg, FIX::SecurityDesc{"STRING_354583492"}, Instrument_87);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1464413081"}, Instrument_87);
  set_field(msg, FIX::SecurityGroup{"STRING_457660711"}, Instrument_87);
  set_field(msg, FIX::SecurityID{"STRING_1858564832"}, Instrument_87);
  set_field(msg, FIX::SecurityIDSource{"STRING_1"}, Instrument_87);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_87);
  set_field(msg, FIX::SecuritySubType{"STRING_1779063730"}, Instrument_87);
  set_field(msg, FIX::SecurityType{"STRING_CL"}, Instrument_87);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_87);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_87);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1638708334"}, Instrument_87);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_948691751"}, Instrument_87);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_87);
  FIX::StrikeMultiplier StrikeMultiplier_87;
  StrikeMultiplier_87.setString("304364");
set_field(msg, StrikeMultiplier_87, Instrument_87);
  FIX::StrikePrice StrikePrice_87;
  StrikePrice_87.setString("14602705");
set_field(msg, StrikePrice_87, Instrument_87);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_87);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_87;
  StrikePriceBoundaryPrecision_87.setString("78.430000");
set_field(msg, StrikePriceBoundaryPrecision_87, Instrument_87);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_87);
  FIX::StrikeValue StrikeValue_87;
  StrikeValue_87.setString("9625376");
set_field(msg, StrikeValue_87, Instrument_87);
  set_field(msg, FIX::Symbol{"STRING_138512302"}, Instrument_87);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_87);
  set_field(msg, FIX::TimeUnit{"STRING_Wk"}, Instrument_87);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_87);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_87);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_87;
  UnitOfMeasureQty_87.setString("9118832");
set_field(msg, UnitOfMeasureQty_87, Instrument_87);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_87);
  all_values.push_back(Instrument_87);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_179;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_179);
    FIX::ComplexEventPrice ComplexEventPrice_179;
    ComplexEventPrice_179.setString("3350863");
set_field(noComplexEvents_0_0, ComplexEventPrice_179, ComplexEvents_NoComplexEvents_179);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_179);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_179;
    ComplexEventPriceBoundaryPrecision_179.setString("67.440000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_179, ComplexEvents_NoComplexEvents_179);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_179);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_179);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_179;
    ComplexOptPayoutAmount_179.setString("17958579");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_179, ComplexEvents_NoComplexEvents_179);
    all_values.push_back(ComplexEvents_NoComplexEvents_179);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_360;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 15, 5, 5, 2, 2014)}, ComplexEventDates_NoComplexEventDates_360);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 45, 37, 24, 1, 2011)}, ComplexEventDates_NoComplexEventDates_360);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_360);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_729;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 27, 0)}, ComplexEventTimes_NoComplexEventTimes_729);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 17, 16)}, ComplexEventTimes_NoComplexEventTimes_729);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_729);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

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
    multiset<string> EvntGrp_NoEvents_172;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_149965572"}, EvntGrp_NoEvents_172);
    FIX::EventPx EventPx_172;
    EventPx_172.setString("886115");
set_field(noEvents_0_0, EventPx_172, EvntGrp_NoEvents_172);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1531182010"}, EvntGrp_NoEvents_172);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(23, 31, 46, 10, 7, 2007)}, EvntGrp_NoEvents_172);
    set_field(noEvents_0_0, FIX::EventType{99}, EvntGrp_NoEvents_172);
    all_values.push_back(EvntGrp_NoEvents_172);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_173;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_612649351"}, EvntGrp_NoEvents_173);
    FIX::EventPx EventPx_173;
    EventPx_173.setString("8865775");
set_field(noEvents_0_1, EventPx_173, EvntGrp_NoEvents_173);
    set_field(noEvents_0_1, FIX::EventText{"STRING_2085483628"}, EvntGrp_NoEvents_173);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(6, 5, 57, 23, 6, 2006)}, EvntGrp_NoEvents_173);
    set_field(noEvents_0_1, FIX::EventType{19}, EvntGrp_NoEvents_173);
    all_values.push_back(EvntGrp_NoEvents_173);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_163;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_726642514"}, InstrumentParties_NoInstrumentParties_163);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_163);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1916863520}, InstrumentParties_NoInstrumentParties_163);
    all_values.push_back(InstrumentParties_NoInstrumentParties_163);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_432431319"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1731742769}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_329);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_694227750"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{2026320233}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_330);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1881708342"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{782839252}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_331);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_164;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1410018595"}, InstrumentParties_NoInstrumentParties_164);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_164);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1202591211}, InstrumentParties_NoInstrumentParties_164);
    all_values.push_back(InstrumentParties_NoInstrumentParties_164);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_189419589"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{211411925}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_332);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_165;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_901601892"}, InstrumentParties_NoInstrumentParties_165);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_165);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1357960045}, InstrumentParties_NoInstrumentParties_165);
    all_values.push_back(InstrumentParties_NoInstrumentParties_165);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_2100280373"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1295960025}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_333);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_2098665363"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{303426556}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_334);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_172;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1967631172"}, SecAltIDGrp_NoSecurityAltID_172);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_805934263"}, SecAltIDGrp_NoSecurityAltID_172);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_172);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_174;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1732876487"}, SecurityXML_174);
  set_field(msg, FIX::SecurityXMLLen{1410096782}, SecurityXML_174);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_275373833"}, SecurityXML_174);
  all_values.push_back(SecurityXML_174);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_16;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_16);
  FIX::PctAtRisk PctAtRisk_16;
  PctAtRisk_16.setString("92.960000");
set_field(msg, PctAtRisk_16, InstrumentExtension_16);
  all_values.push_back(InstrumentExtension_16);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_31;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{20}, AttrbGrp_NoInstrAttrib_31);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_468351642"}, AttrbGrp_NoInstrAttrib_31);
    all_values.push_back(AttrbGrp_NoInstrAttrib_31);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_32;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{12}, AttrbGrp_NoInstrAttrib_32);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_1524228461"}, AttrbGrp_NoInstrAttrib_32);
    all_values.push_back(AttrbGrp_NoInstrAttrib_32);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatus::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_134;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1155377396"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1258453155}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1945418644"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{417912343}, UnderlyingInstrument_134);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_134;
    UnderlyingAdjustedQuantity_134.setString("7946591");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_134, UnderlyingInstrument_134);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_134;
    UnderlyingAllocationPercent_134.setString("62.080000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_134, UnderlyingInstrument_134);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_134;
    UnderlyingAttachmentPoint_134.setString("35.810000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_984078767"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1211938133"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1761605473"}, UnderlyingInstrument_134);
    FIX::UnderlyingCapValue UnderlyingCapValue_134;
    UnderlyingCapValue_134.setString("502979");
set_field(noUnderlyings_0_0, UnderlyingCapValue_134, UnderlyingInstrument_134);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_134;
    UnderlyingCashAmount_134.setString("4224145");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_134);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_134;
    UnderlyingContractMultiplier_134.setString("30946");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1718374555}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1079554783"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_306521211"}, UnderlyingInstrument_134);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_134;
    UnderlyingCouponRate_134.setString("28.970000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_899702307"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_134);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_134;
    UnderlyingCurrentValue_134.setString("1623154");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_134, UnderlyingInstrument_134);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_134;
    UnderlyingDetachmentPoint_134.setString("93.070000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_134, UnderlyingInstrument_134);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_134;
    UnderlyingDirtyPrice_134.setString("13827215");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_134, UnderlyingInstrument_134);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_134;
    UnderlyingEndPrice_134.setString("1515710");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_134, UnderlyingInstrument_134);
    FIX::UnderlyingEndValue UnderlyingEndValue_134;
    UnderlyingEndValue_134.setString("844551");
set_field(noUnderlyings_0_0, UnderlyingEndValue_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1175207248}, UnderlyingInstrument_134);
    FIX::UnderlyingFXRate UnderlyingFXRate_134;
    UnderlyingFXRate_134.setString("6199227");
set_field(noUnderlyings_0_0, UnderlyingFXRate_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_134);
    FIX::UnderlyingFactor UnderlyingFactor_134;
    UnderlyingFactor_134.setString("5519520");
set_field(noUnderlyings_0_0, UnderlyingFactor_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1782502125}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_368889710"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1810405216"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1580437122"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_786802053"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_457580746"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_433479682"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1646805634"}, UnderlyingInstrument_134);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_134;
    UnderlyingNotionalPercentageOutstanding_134.setString("95.130000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_134);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_134;
    UnderlyingOriginalNotionalPercentageOutstanding_134.setString("74.590000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1491957442"}, UnderlyingInstrument_134);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_134;
    UnderlyingPriceUnitOfMeasureQty_134.setString("20678323");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{241816879}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1495052097}, UnderlyingInstrument_134);
    FIX::UnderlyingPx UnderlyingPx_134;
    UnderlyingPx_134.setString("16387232");
set_field(noUnderlyings_0_0, UnderlyingPx_134, UnderlyingInstrument_134);
    FIX::UnderlyingQty UnderlyingQty_134;
    UnderlyingQty_134.setString("13213716");
set_field(noUnderlyings_0_0, UnderlyingQty_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1801573308"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1265462503"}, UnderlyingInstrument_134);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_134;
    UnderlyingRepurchaseRate_134.setString("3.220000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{766545134}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_477594592"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_235905764"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_6890794"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1860316148"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_387476855"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_91345945"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_888039748"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1007399588"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1452341907"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_134);
    FIX::UnderlyingStartValue UnderlyingStartValue_134;
    UnderlyingStartValue_134.setString("6424180");
set_field(noUnderlyings_0_0, UnderlyingStartValue_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1821231617"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_134);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_134;
    UnderlyingStrikePrice_134.setString("4605500");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_134, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1560494123"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_508851221"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_2107355656"}, UnderlyingInstrument_134);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_854669988"}, UnderlyingInstrument_134);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_134;
    UnderlyingUnitOfMeasureQty_134.setString("67853");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_134, UnderlyingInstrument_134);
    all_values.push_back(UnderlyingInstrument_134);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_277;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_199143783"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2074617735"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_277);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_278;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1462616346"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1694195880"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_278);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_279;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1565857340"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_636504361"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_279);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_272;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_683836195"}, UnderlyingStipulations_NoUnderlyingStips_272);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_710094684"}, UnderlyingStipulations_NoUnderlyingStips_272);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_272);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_273;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_2114830675"}, UnderlyingStipulations_NoUnderlyingStips_273);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1161430787"}, UnderlyingStipulations_NoUnderlyingStips_273);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_273);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_274;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_946000448"}, UnderlyingStipulations_NoUnderlyingStips_274);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_2121721469"}, UnderlyingStipulations_NoUnderlyingStips_274);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_274);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_284;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1333477303"}, UndlyInstrumentParties_NoUndlyInstrumentParties_284);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_284);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1762303036}, UndlyInstrumentParties_NoUndlyInstrumentParties_284);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_284);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1517925673"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1054811198}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_569);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_835811309"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1191673642}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_570);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_86;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_86);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_911182848"}, header_86);
  set_header_field(msg.getHeader(), FIX::BodyLength{1652223664}, header_86);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1570735051"}, header_86);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1420034070"}, header_86);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1612095672"}, header_86);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_277921391"}, header_86);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1426819459}, header_86);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_86);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{477065174}, header_86);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1353953546"}, header_86);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_544190"}, header_86);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_23777407"}, header_86);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 48, 34, 11, 12, 2001)}, header_86);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_86);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_86);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1344373861"}, header_86);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1479137339}, header_86);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1379231563"}, header_86);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_959193250"}, header_86);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1672530583"}, header_86);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(0, 4, 11, 19, 5, 2008)}, header_86);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1447496778"}, header_86);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_544591514"}, header_86);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_910699272"}, header_86);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1725418170"}, header_86);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1971410973}, header_86);
  all_values.push_back(header_86);
  all_compo_names.insert(".header");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";
  cout << "////////////////////////////////////////////" << endl;
  cout << msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    BOOST_LOG_TRIVIAL(debug) << "XML Elements are:";
    cout << "	[";
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

    BOOST_LOG_TRIVIAL(debug) << "FIX Components are:"; 
    cout << "	[";
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, " "));    cout << "]" << endl;

  }
  BOOST_LOG_TRIVIAL(debug) << "All FIX components";
  for (const auto& l : all_values) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }
  BOOST_LOG_TRIVIAL(debug) << "All XML components";
  for (const auto& l : elt_lists) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;

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
      BOOST_LOG_TRIVIAL(debug) << "[TO CHECK] This XML component was not found in FIX message";
      cout << "	 ---> [";
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << "]" << endl << endl;
    } // end if ! found
  } // end for elt_lists
}
