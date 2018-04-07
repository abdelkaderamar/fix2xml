#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::SecurityStatus msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatus_73;
  set_field(msg, FIX::Adjustment{2}, SecurityStatus_73);
  FIX::BuyVolume BuyVolume_0;
  BuyVolume_0.setString("1897031");
set_field(msg, BuyVolume_0, SecurityStatus_73);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_J"}, SecurityStatus_73);
  set_field(msg, FIX::Currency{"GBP"}, SecurityStatus_73);
  set_field(msg, FIX::DueToRelated{false}, SecurityStatus_73);
  set_field(msg, FIX::EncodedText{"DATA_139321251"}, SecurityStatus_73);
  set_field(msg, FIX::EncodedTextLen{554513087}, SecurityStatus_73);
  set_field(msg, FIX::FinancialStatus{"MULTIPLECHARVALUE_1"}, SecurityStatus_73);
  FIX::FirstPx FirstPx_4;
  FirstPx_4.setString("8614696");
set_field(msg, FirstPx_4, SecurityStatus_73);
  set_field(msg, FIX::HaltReasonInt{2}, SecurityStatus_73);
  FIX::HighPx HighPx_4;
  HighPx_4.setString("5197357");
set_field(msg, HighPx_4, SecurityStatus_73);
  set_field(msg, FIX::InViewOfCommon{true}, SecurityStatus_73);
  FIX::LastPx LastPx_14;
  LastPx_14.setString("19387687");
set_field(msg, LastPx_14, SecurityStatus_73);
  FIX::LowPx LowPx_4;
  LowPx_4.setString("1931275");
set_field(msg, LowPx_4, SecurityStatus_73);
  set_field(msg, FIX::MDBookType{1}, SecurityStatus_73);
  set_field(msg, FIX::MarketDepth{542209903}, SecurityStatus_73);
  set_field(msg, FIX::MarketID{"EXCHANGE_1290635396"}, SecurityStatus_73);
  set_field(msg, FIX::MarketSegmentID{"STRING_630419865"}, SecurityStatus_73);
  set_field(msg, FIX::SecurityStatusReqID{"STRING_1161771755"}, SecurityStatus_73);
  set_field(msg, FIX::SecurityTradingEvent{3}, SecurityStatus_73);
  set_field(msg, FIX::SecurityTradingStatus{12}, SecurityStatus_73);
  FIX::SellVolume SellVolume_0;
  SellVolume_0.setString("12743455");
set_field(msg, SellVolume_0, SecurityStatus_73);
  set_field(msg, FIX::Text{"STRING_418635634"}, SecurityStatus_73);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, SecurityStatus_73);
  set_field(msg, FIX::TradingSessionSubID{"STRING_1"}, SecurityStatus_73);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(10, 29, 52, 13, 6, 2002)}, SecurityStatus_73);
  set_field(msg, FIX::UnsolicitedIndicator{true}, SecurityStatus_73);
  all_values.push_back(SecurityStatus_73);

  all_compo_names.insert("SecurityStatus");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_16;
  set_field(msg, FIX::ApplID{"STRING_1575687063"}, ApplicationSequenceControl_16);
  set_field(msg, FIX::ApplLastSeqNum{663304610}, ApplicationSequenceControl_16);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_16);
  set_field(msg, FIX::ApplSeqNum{1715008314}, ApplicationSequenceControl_16);
  all_values.push_back(ApplicationSequenceControl_16);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatus::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_111;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1034244664"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{428994291}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_346978633"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1553980425}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_373916280"}, InstrumentLeg_111);
    FIX::LegContractMultiplier LegContractMultiplier_111;
    LegContractMultiplier_111.setString("1382637");
set_field(noLegs_0_0, LegContractMultiplier_111, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1747107931}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_2137321137"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_680473647"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_890259679"}, InstrumentLeg_111);
    FIX::LegCouponRate LegCouponRate_111;
    LegCouponRate_111.setString("73.540000");
set_field(noLegs_0_0, LegCouponRate_111, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1842245403"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_969107330"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{58225419}, InstrumentLeg_111);
    FIX::LegFactor LegFactor_111;
    LegFactor_111.setString("17258599");
set_field(noLegs_0_0, LegFactor_111, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1040493610}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1142870415"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1853632322"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_582080851"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1768465927"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1384243148"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1046207688"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_436280941"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1418587056"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'4'}, InstrumentLeg_111);
    FIX::LegOptionRatio LegOptionRatio_111;
    LegOptionRatio_111.setString("10995855");
set_field(noLegs_0_0, LegOptionRatio_111, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_944963344"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_41935770"}, InstrumentLeg_111);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_111;
    LegPriceUnitOfMeasureQty_111.setString("1699196");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_111, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegProduct{1979208008}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegPutOrCall{470930061}, InstrumentLeg_111);
    FIX::LegRatioQty LegRatioQty_111;
    LegRatioQty_111.setString("5168982");
set_field(noLegs_0_0, LegRatioQty_111, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1385704786"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_844846341"}, InstrumentLeg_111);
    FIX::LegRepurchaseRate LegRepurchaseRate_111;
    LegRepurchaseRate_111.setString("19.790000");
set_field(noLegs_0_0, LegRepurchaseRate_111, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{985329069}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_834683830"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1335635626"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1875588748"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1454941185"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1030397381"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1515178534"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegSide{'7'}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1999504711"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_111);
    FIX::LegStrikePrice LegStrikePrice_111;
    LegStrikePrice_111.setString("8925146");
set_field(noLegs_0_0, LegStrikePrice_111, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_568790720"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_46023640"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1474595525"}, InstrumentLeg_111);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_189772999"}, InstrumentLeg_111);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_111;
    LegUnitOfMeasureQty_111.setString("14302667");
set_field(noLegs_0_0, LegUnitOfMeasureQty_111, InstrumentLeg_111);
    all_values.push_back(InstrumentLeg_111);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_233;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_626053941"}, LegSecAltIDGrp_NoLegSecurityAltID_233);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_701370196"}, LegSecAltIDGrp_NoLegSecurityAltID_233);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_233);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_112;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_847730669"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1725639493}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1646333541"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{889666439}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1895559094"}, InstrumentLeg_112);
    FIX::LegContractMultiplier LegContractMultiplier_112;
    LegContractMultiplier_112.setString("14780579");
set_field(noLegs_0_1, LegContractMultiplier_112, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1360596500}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_264973681"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_716279039"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_57959194"}, InstrumentLeg_112);
    FIX::LegCouponRate LegCouponRate_112;
    LegCouponRate_112.setString("56.600000");
set_field(noLegs_0_1, LegCouponRate_112, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1701608108"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegCurrency{"CAN"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1429713209"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{200100561}, InstrumentLeg_112);
    FIX::LegFactor LegFactor_112;
    LegFactor_112.setString("11386850");
set_field(noLegs_0_1, LegFactor_112, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{797408095}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_961599263"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_990706084"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_223328400"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1301474228"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1883220757"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_792119121"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1347497868"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1210332634"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'9'}, InstrumentLeg_112);
    FIX::LegOptionRatio LegOptionRatio_112;
    LegOptionRatio_112.setString("6302810");
set_field(noLegs_0_1, LegOptionRatio_112, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1583652200"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1607946061"}, InstrumentLeg_112);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_112;
    LegPriceUnitOfMeasureQty_112.setString("13316512");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_112, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegProduct{283899221}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1186101906}, InstrumentLeg_112);
    FIX::LegRatioQty LegRatioQty_112;
    LegRatioQty_112.setString("8305010");
set_field(noLegs_0_1, LegRatioQty_112, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1173565660"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_934177353"}, InstrumentLeg_112);
    FIX::LegRepurchaseRate LegRepurchaseRate_112;
    LegRepurchaseRate_112.setString("53.510000");
set_field(noLegs_0_1, LegRepurchaseRate_112, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{386678512}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1199151034"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_877354391"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_444637706"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_2119286695"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_431478851"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1337280731"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegSide{'8'}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1861192060"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_112);
    FIX::LegStrikePrice LegStrikePrice_112;
    LegStrikePrice_112.setString("5111165");
set_field(noLegs_0_1, LegStrikePrice_112, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_351496907"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_61998142"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_734444908"}, InstrumentLeg_112);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1652971136"}, InstrumentLeg_112);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_112;
    LegUnitOfMeasureQty_112.setString("19452189");
set_field(noLegs_0_1, LegUnitOfMeasureQty_112, InstrumentLeg_112);
    all_values.push_back(InstrumentLeg_112);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_234;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_852985356"}, LegSecAltIDGrp_NoLegSecurityAltID_234);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1008067886"}, LegSecAltIDGrp_NoLegSecurityAltID_234);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_234);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_235;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_360972501"}, LegSecAltIDGrp_NoLegSecurityAltID_235);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1483266365"}, LegSecAltIDGrp_NoLegSecurityAltID_235);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_235);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_73;
  FIX::AttachmentPoint AttachmentPoint_73;
  AttachmentPoint_73.setString("64.380000");
set_field(msg, AttachmentPoint_73, Instrument_73);
  set_field(msg, FIX::CFICode{"STRING_1968918563"}, Instrument_73);
  set_field(msg, FIX::CPProgram{1}, Instrument_73);
  set_field(msg, FIX::CPRegType{"STRING_728135659"}, Instrument_73);
  FIX::CapPrice CapPrice_73;
  CapPrice_73.setString("10075368");
set_field(msg, CapPrice_73, Instrument_73);
  FIX::ContractMultiplier ContractMultiplier_73;
  ContractMultiplier_73.setString("14979350");
set_field(msg, ContractMultiplier_73, Instrument_73);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_73);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1941714174"}, Instrument_73);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1659010371"}, Instrument_73);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_140896184"}, Instrument_73);
  FIX::CouponRate CouponRate_73;
  CouponRate_73.setString("15.610000");
set_field(msg, CouponRate_73, Instrument_73);
  set_field(msg, FIX::CreditRating{"STRING_388881114"}, Instrument_73);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_585533890"}, Instrument_73);
  FIX::DetachmentPoint DetachmentPoint_73;
  DetachmentPoint_73.setString("46.080000");
set_field(msg, DetachmentPoint_73, Instrument_73);
  set_field(msg, FIX::EncodedIssuer{"DATA_820359966"}, Instrument_73);
  set_field(msg, FIX::EncodedIssuerLen{1922814621}, Instrument_73);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1045275294"}, Instrument_73);
  set_field(msg, FIX::EncodedSecurityDescLen{534068378}, Instrument_73);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_73);
  FIX::Factor Factor_73;
  Factor_73.setString("1165673");
set_field(msg, Factor_73, Instrument_73);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_73);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_73);
  FIX::FloorPrice FloorPrice_73;
  FloorPrice_73.setString("1785654");
set_field(msg, FloorPrice_73, Instrument_73);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_73);
  set_field(msg, FIX::InstrRegistry{"STRING_1169696661"}, Instrument_73);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_73);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1158710175"}, Instrument_73);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_2022682018"}, Instrument_73);
  set_field(msg, FIX::Issuer{"STRING_984368633"}, Instrument_73);
  set_field(msg, FIX::ListMethod{0}, Instrument_73);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1358464735"}, Instrument_73);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1428605072"}, Instrument_73);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1341117591"}, Instrument_73);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_2025898657"}, Instrument_73);
  FIX::MinPriceIncrement MinPriceIncrement_73;
  MinPriceIncrement_73.setString("92570");
set_field(msg, MinPriceIncrement_73, Instrument_73);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_73;
  MinPriceIncrementAmount_73.setString("2011707");
set_field(msg, MinPriceIncrementAmount_73, Instrument_73);
  set_field(msg, FIX::NTPositionLimit{1376350029}, Instrument_73);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_73;
  NotionalPercentageOutstanding_73.setString("84.030000");
set_field(msg, NotionalPercentageOutstanding_73, Instrument_73);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_73);
  FIX::OptPayoutAmount OptPayoutAmount_73;
  OptPayoutAmount_73.setString("8878767");
set_field(msg, OptPayoutAmount_73, Instrument_73);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_73);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_73;
  OriginalNotionalPercentageOutstanding_73.setString("28.520000");
set_field(msg, OriginalNotionalPercentageOutstanding_73, Instrument_73);
  set_field(msg, FIX::Pool{"STRING_1276757867"}, Instrument_73);
  set_field(msg, FIX::PositionLimit{489904829}, Instrument_73);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_73);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_2097117833"}, Instrument_73);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_73;
  PriceUnitOfMeasureQty_73.setString("2652358");
set_field(msg, PriceUnitOfMeasureQty_73, Instrument_73);
  set_field(msg, FIX::Product{4}, Instrument_73);
  set_field(msg, FIX::ProductComplex{"STRING_483702563"}, Instrument_73);
  set_field(msg, FIX::PutOrCall{1}, Instrument_73);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_968326459"}, Instrument_73);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1528887449"}, Instrument_73);
  FIX::RepurchaseRate RepurchaseRate_73;
  RepurchaseRate_73.setString("35.940000");
set_field(msg, RepurchaseRate_73, Instrument_73);
  set_field(msg, FIX::RepurchaseTerm{1146891954}, Instrument_73);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_73);
  set_field(msg, FIX::SecurityDesc{"STRING_116886608"}, Instrument_73);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1123192701"}, Instrument_73);
  set_field(msg, FIX::SecurityGroup{"STRING_172260122"}, Instrument_73);
  set_field(msg, FIX::SecurityID{"STRING_2139568626"}, Instrument_73);
  set_field(msg, FIX::SecurityIDSource{"STRING_B"}, Instrument_73);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_73);
  set_field(msg, FIX::SecuritySubType{"STRING_1350549713"}, Instrument_73);
  set_field(msg, FIX::SecurityType{"STRING_?"}, Instrument_73);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_73);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_73);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1397939842"}, Instrument_73);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1086747507"}, Instrument_73);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_73);
  FIX::StrikeMultiplier StrikeMultiplier_73;
  StrikeMultiplier_73.setString("10821487");
set_field(msg, StrikeMultiplier_73, Instrument_73);
  FIX::StrikePrice StrikePrice_73;
  StrikePrice_73.setString("13457078");
set_field(msg, StrikePrice_73, Instrument_73);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_73);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_73;
  StrikePriceBoundaryPrecision_73.setString("16.510000");
set_field(msg, StrikePriceBoundaryPrecision_73, Instrument_73);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_73);
  FIX::StrikeValue StrikeValue_73;
  StrikeValue_73.setString("15556903");
set_field(msg, StrikeValue_73, Instrument_73);
  set_field(msg, FIX::Symbol{"STRING_1877415464"}, Instrument_73);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_73);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_73);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_73);
  set_field(msg, FIX::UnitOfMeasure{"STRING_t"}, Instrument_73);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_73;
  UnitOfMeasureQty_73.setString("12513905");
set_field(msg, UnitOfMeasureQty_73, Instrument_73);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_73);
  all_values.push_back(Instrument_73);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatus::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_151;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_151);
    FIX::ComplexEventPrice ComplexEventPrice_151;
    ComplexEventPrice_151.setString("5494256");
set_field(noComplexEvents_0_0, ComplexEventPrice_151, ComplexEvents_NoComplexEvents_151);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_151);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_151;
    ComplexEventPriceBoundaryPrecision_151.setString("71.440000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_151, ComplexEvents_NoComplexEvents_151);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_151);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_151);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_151;
    ComplexOptPayoutAmount_151.setString("3075521");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_151, ComplexEvents_NoComplexEvents_151);
    all_values.push_back(ComplexEvents_NoComplexEvents_151);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_315;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 45, 16, 9, 12, 2017)}, ComplexEventDates_NoComplexEventDates_315);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 54, 19, 0, 7, 2002)}, ComplexEventDates_NoComplexEventDates_315);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_315);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_642;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 10, 28)}, ComplexEventTimes_NoComplexEventTimes_642);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 30, 13)}, ComplexEventTimes_NoComplexEventTimes_642);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_642);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_643;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 33, 12)}, ComplexEventTimes_NoComplexEventTimes_643);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 54, 25)}, ComplexEventTimes_NoComplexEventTimes_643);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_643);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityStatus::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_644;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 10, 41)}, ComplexEventTimes_NoComplexEventTimes_644);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 16, 14)}, ComplexEventTimes_NoComplexEventTimes_644);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_644);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
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
    multiset<string> EvntGrp_NoEvents_147;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1116941043"}, EvntGrp_NoEvents_147);
    FIX::EventPx EventPx_147;
    EventPx_147.setString("10544771");
set_field(noEvents_0_0, EventPx_147, EvntGrp_NoEvents_147);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1612438983"}, EvntGrp_NoEvents_147);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(11, 45, 59, 21, 12, 2003)}, EvntGrp_NoEvents_147);
    set_field(noEvents_0_0, FIX::EventType{2}, EvntGrp_NoEvents_147);
    all_values.push_back(EvntGrp_NoEvents_147);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_148;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1047538359"}, EvntGrp_NoEvents_148);
    FIX::EventPx EventPx_148;
    EventPx_148.setString("2743690");
set_field(noEvents_0_1, EventPx_148, EvntGrp_NoEvents_148);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1474716454"}, EvntGrp_NoEvents_148);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(23, 59, 11, 25, 4, 2017)}, EvntGrp_NoEvents_148);
    set_field(noEvents_0_1, FIX::EventType{15}, EvntGrp_NoEvents_148);
    all_values.push_back(EvntGrp_NoEvents_148);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatus::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_139;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_767447838"}, InstrumentParties_NoInstrumentParties_139);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_139);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{738101813}, InstrumentParties_NoInstrumentParties_139);
    all_values.push_back(InstrumentParties_NoInstrumentParties_139);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1420227758"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1928061609}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_286);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_887711734"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{681115229}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_287);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_897519004"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1942188908}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatus::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_144;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1864889297"}, SecAltIDGrp_NoSecurityAltID_144);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1719802727"}, SecAltIDGrp_NoSecurityAltID_144);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_144);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_146;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1370784129"}, SecurityXML_146);
  set_field(msg, FIX::SecurityXMLLen{265137008}, SecurityXML_146);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_645169452"}, SecurityXML_146);
  all_values.push_back(SecurityXML_146);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_14;
  set_field(msg, FIX::DeliveryForm{1}, InstrumentExtension_14);
  FIX::PctAtRisk PctAtRisk_14;
  PctAtRisk_14.setString("3.560000");
set_field(msg, PctAtRisk_14, InstrumentExtension_14);
  all_values.push_back(InstrumentExtension_14);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_25;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{29}, AttrbGrp_NoInstrAttrib_25);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_1249289425"}, AttrbGrp_NoInstrAttrib_25);
    all_values.push_back(AttrbGrp_NoInstrAttrib_25);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityStatus::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_26;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{1}, AttrbGrp_NoInstrAttrib_26);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_417012447"}, AttrbGrp_NoInstrAttrib_26);
    all_values.push_back(AttrbGrp_NoInstrAttrib_26);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatus::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_132;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_77624092"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1103910759}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1665196533"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{326007091}, UnderlyingInstrument_132);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_132;
    UnderlyingAdjustedQuantity_132.setString("10020329");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_132, UnderlyingInstrument_132);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_132;
    UnderlyingAllocationPercent_132.setString("17.390000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_132, UnderlyingInstrument_132);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_132;
    UnderlyingAttachmentPoint_132.setString("52.030000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1769480755"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_2114704356"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1604567016"}, UnderlyingInstrument_132);
    FIX::UnderlyingCapValue UnderlyingCapValue_132;
    UnderlyingCapValue_132.setString("19983535");
set_field(noUnderlyings_0_0, UnderlyingCapValue_132, UnderlyingInstrument_132);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_132;
    UnderlyingCashAmount_132.setString("13874484");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_132);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_132;
    UnderlyingContractMultiplier_132.setString("7385816");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{2068563695}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_135180334"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_533286882"}, UnderlyingInstrument_132);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_132;
    UnderlyingCouponRate_132.setString("6.110000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_2000069631"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_132);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_132;
    UnderlyingCurrentValue_132.setString("1177229");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_132, UnderlyingInstrument_132);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_132;
    UnderlyingDetachmentPoint_132.setString("54.140000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_132, UnderlyingInstrument_132);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_132;
    UnderlyingDirtyPrice_132.setString("11716658");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_132, UnderlyingInstrument_132);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_132;
    UnderlyingEndPrice_132.setString("10926433");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_132, UnderlyingInstrument_132);
    FIX::UnderlyingEndValue UnderlyingEndValue_132;
    UnderlyingEndValue_132.setString("3773833");
set_field(noUnderlyings_0_0, UnderlyingEndValue_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1952935397}, UnderlyingInstrument_132);
    FIX::UnderlyingFXRate UnderlyingFXRate_132;
    UnderlyingFXRate_132.setString("1944491");
set_field(noUnderlyings_0_0, UnderlyingFXRate_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_132);
    FIX::UnderlyingFactor UnderlyingFactor_132;
    UnderlyingFactor_132.setString("2224641");
set_field(noUnderlyings_0_0, UnderlyingFactor_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1832119030}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1556331772"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1326374955"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1349831915"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1882338863"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_180924224"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_19430007"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_601320418"}, UnderlyingInstrument_132);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_132;
    UnderlyingNotionalPercentageOutstanding_132.setString("49.790000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_132);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_132;
    UnderlyingOriginalNotionalPercentageOutstanding_132.setString("37.860000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1801274866"}, UnderlyingInstrument_132);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_132;
    UnderlyingPriceUnitOfMeasureQty_132.setString("13740991");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1443548764}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{392372840}, UnderlyingInstrument_132);
    FIX::UnderlyingPx UnderlyingPx_132;
    UnderlyingPx_132.setString("12951792");
set_field(noUnderlyings_0_0, UnderlyingPx_132, UnderlyingInstrument_132);
    FIX::UnderlyingQty UnderlyingQty_132;
    UnderlyingQty_132.setString("15787290");
set_field(noUnderlyings_0_0, UnderlyingQty_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_925659722"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1362329840"}, UnderlyingInstrument_132);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_132;
    UnderlyingRepurchaseRate_132.setString("50.810000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1031265684}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_652780933"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1549038073"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1782041098"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1824446822"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_494197773"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_11940770"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1629898571"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_688646899"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1490648450"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_132);
    FIX::UnderlyingStartValue UnderlyingStartValue_132;
    UnderlyingStartValue_132.setString("3732822");
set_field(noUnderlyings_0_0, UnderlyingStartValue_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_899496575"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_132);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_132;
    UnderlyingStrikePrice_132.setString("6343517");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_132, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1212178299"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1742544203"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1235672209"}, UnderlyingInstrument_132);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1015099630"}, UnderlyingInstrument_132);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_132;
    UnderlyingUnitOfMeasureQty_132.setString("17291949");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_132, UnderlyingInstrument_132);
    all_values.push_back(UnderlyingInstrument_132);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_272;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_668890848"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_955810452"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_272);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_271;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1061263689"}, UnderlyingStipulations_NoUnderlyingStips_271);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_103506033"}, UnderlyingStipulations_NoUnderlyingStips_271);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_271);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_272;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_21386561"}, UnderlyingStipulations_NoUnderlyingStips_272);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1986923411"}, UnderlyingStipulations_NoUnderlyingStips_272);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_272);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_273;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1465835873"}, UnderlyingStipulations_NoUnderlyingStips_273);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1452701643"}, UnderlyingStipulations_NoUnderlyingStips_273);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_273);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_272;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2118616806"}, UndlyInstrumentParties_NoUndlyInstrumentParties_272);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_272);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{505262897}, UndlyInstrumentParties_NoUndlyInstrumentParties_272);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_272);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatus::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1348453842"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{517203667}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_545);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";cout << "////////////////////////////////////////////" << endl;
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
