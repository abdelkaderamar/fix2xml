#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::CollateralResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralResponse_0;
  set_field(msg, FIX::Account{"STRING_369406482"}, CollateralResponse_0);
  set_field(msg, FIX::AccountType{2}, CollateralResponse_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_7;
  AccruedInterestAmt_7.setString("2806992");
set_field(msg, AccruedInterestAmt_7, CollateralResponse_0);
  FIX::CashOutstanding CashOutstanding_4;
  CashOutstanding_4.setString("11743594");
set_field(msg, CashOutstanding_4, CollateralResponse_0);
  set_field(msg, FIX::ClOrdID{"STRING_1918574844"}, CollateralResponse_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1286336819"}, CollateralResponse_0);
  set_field(msg, FIX::CollApplType{0}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnID{"STRING_155720824"}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnReason{3}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnRejectReason{99}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnRespType{2}, CollateralResponse_0);
  set_field(msg, FIX::CollAsgnTransType{2}, CollateralResponse_0);
  set_field(msg, FIX::CollReqID{"STRING_1056972606"}, CollateralResponse_0);
  set_field(msg, FIX::CollRespID{"STRING_1951335659"}, CollateralResponse_0);
  set_field(msg, FIX::Currency{"GBP"}, CollateralResponse_0);
  set_field(msg, FIX::EncodedText{"DATA_1344511305"}, CollateralResponse_0);
  set_field(msg, FIX::EncodedTextLen{1435655683}, CollateralResponse_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_7;
  EndAccruedInterestAmt_7.setString("14346489");
set_field(msg, EndAccruedInterestAmt_7, CollateralResponse_0);
  FIX::EndCash EndCash_7;
  EndCash_7.setString("17514673");
set_field(msg, EndCash_7, CollateralResponse_0);
  set_field(msg, FIX::FinancialStatus{"MULTIPLECHARVALUE_1"}, CollateralResponse_0);
  FIX::MarginExcess MarginExcess_4;
  MarginExcess_4.setString("2080033");
set_field(msg, MarginExcess_4, CollateralResponse_0);
  set_field(msg, FIX::OrderID{"STRING_1915956040"}, CollateralResponse_0);
  FIX::Price Price_7;
  Price_7.setString("20992398");
set_field(msg, Price_7, CollateralResponse_0);
  set_field(msg, FIX::PriceType{1}, CollateralResponse_0);
  set_field(msg, FIX::QtyType{0}, CollateralResponse_0);
  FIX::Quantity Quantity_10;
  Quantity_10.setString("15599288");
set_field(msg, Quantity_10, CollateralResponse_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_297519786"}, CollateralResponse_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_1034462699"}, CollateralResponse_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1143575439"}, CollateralResponse_0);
  set_field(msg, FIX::Side{'5'}, CollateralResponse_0);
  FIX::StartCash StartCash_7;
  StartCash_7.setString("14038691");
set_field(msg, StartCash_7, CollateralResponse_0);
  set_field(msg, FIX::Text{"STRING_979256424"}, CollateralResponse_0);
  FIX::TotalNetValue TotalNetValue_4;
  TotalNetValue_4.setString("15647159");
set_field(msg, TotalNetValue_4, CollateralResponse_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 39, 42, 8, 7, 2004)}, CollateralResponse_0);
  all_values.push_back(CollateralResponse_0);

  all_compo_names.insert("CollateralResponse");

  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralResponse::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_7;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_1928238313"}, ExecCollGrp_NoExecs_7);
    all_values.push_back(ExecCollGrp_NoExecs_7);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_8;
  set_field(msg, FIX::AgreementCurrency{"CHF"}, FinancingDetails_8);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_989405798"}, FinancingDetails_8);
  set_field(msg, FIX::AgreementDesc{"STRING_714923085"}, FinancingDetails_8);
  set_field(msg, FIX::AgreementID{"STRING_128275055"}, FinancingDetails_8);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_8);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_2088434"}, FinancingDetails_8);
  FIX::MarginRatio MarginRatio_8;
  MarginRatio_8.setString("23.560000");
set_field(msg, MarginRatio_8, FinancingDetails_8);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1115582545"}, FinancingDetails_8);
  set_field(msg, FIX::TerminationType{1}, FinancingDetails_8);
  all_values.push_back(FinancingDetails_8);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralResponse::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_19;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1067338717"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1114662549}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1621478492"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{479783873}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1412182335"}, InstrumentLeg_19);
    FIX::LegContractMultiplier LegContractMultiplier_19;
    LegContractMultiplier_19.setString("5084575");
set_field(noLegs_0_0, LegContractMultiplier_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1623359313}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_548715428"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1912326725"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_455132089"}, InstrumentLeg_19);
    FIX::LegCouponRate LegCouponRate_19;
    LegCouponRate_19.setString("14.150000");
set_field(noLegs_0_0, LegCouponRate_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_195588011"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_411432053"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{2111548153}, InstrumentLeg_19);
    FIX::LegFactor LegFactor_19;
    LegFactor_19.setString("14092176");
set_field(noLegs_0_0, LegFactor_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{163890044}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1091459891"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1189972322"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_973320641"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_2022707289"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_31894472"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1688243726"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_3498696"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_309472305"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_19);
    FIX::LegOptionRatio LegOptionRatio_19;
    LegOptionRatio_19.setString("18832410");
set_field(noLegs_0_0, LegOptionRatio_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1425054850"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1900423897"}, InstrumentLeg_19);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_19;
    LegPriceUnitOfMeasureQty_19.setString("13839721");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegProduct{344909919}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegPutOrCall{867602798}, InstrumentLeg_19);
    FIX::LegRatioQty LegRatioQty_19;
    LegRatioQty_19.setString("8579669");
set_field(noLegs_0_0, LegRatioQty_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_824693793"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_132301485"}, InstrumentLeg_19);
    FIX::LegRepurchaseRate LegRepurchaseRate_19;
    LegRepurchaseRate_19.setString("45.400000");
set_field(noLegs_0_0, LegRepurchaseRate_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{300569458}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_681016913"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1131267617"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_755701547"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_646964681"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1326855628"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1961181256"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1738287682"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_19);
    FIX::LegStrikePrice LegStrikePrice_19;
    LegStrikePrice_19.setString("19021777");
set_field(noLegs_0_0, LegStrikePrice_19, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_869222004"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1768187938"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_728014719"}, InstrumentLeg_19);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_744445645"}, InstrumentLeg_19);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_19;
    LegUnitOfMeasureQty_19.setString("18000824");
set_field(noLegs_0_0, LegUnitOfMeasureQty_19, InstrumentLeg_19);
    all_values.push_back(InstrumentLeg_19);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_43;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_747944341"}, LegSecAltIDGrp_NoLegSecurityAltID_43);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_2109554715"}, LegSecAltIDGrp_NoLegSecurityAltID_43);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_43);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_13;
  FIX::AttachmentPoint AttachmentPoint_13;
  AttachmentPoint_13.setString("69.570000");
set_field(msg, AttachmentPoint_13, Instrument_13);
  set_field(msg, FIX::CFICode{"STRING_483701746"}, Instrument_13);
  set_field(msg, FIX::CPProgram{99}, Instrument_13);
  set_field(msg, FIX::CPRegType{"STRING_1712047206"}, Instrument_13);
  FIX::CapPrice CapPrice_13;
  CapPrice_13.setString("18676738");
set_field(msg, CapPrice_13, Instrument_13);
  FIX::ContractMultiplier ContractMultiplier_13;
  ContractMultiplier_13.setString("17320358");
set_field(msg, ContractMultiplier_13, Instrument_13);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_13);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_578157248"}, Instrument_13);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_409245982"}, Instrument_13);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_564467842"}, Instrument_13);
  FIX::CouponRate CouponRate_13;
  CouponRate_13.setString("17.880000");
set_field(msg, CouponRate_13, Instrument_13);
  set_field(msg, FIX::CreditRating{"STRING_709815440"}, Instrument_13);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1245484755"}, Instrument_13);
  FIX::DetachmentPoint DetachmentPoint_13;
  DetachmentPoint_13.setString("57.580000");
set_field(msg, DetachmentPoint_13, Instrument_13);
  set_field(msg, FIX::EncodedIssuer{"DATA_1465516987"}, Instrument_13);
  set_field(msg, FIX::EncodedIssuerLen{1892449436}, Instrument_13);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_107737738"}, Instrument_13);
  set_field(msg, FIX::EncodedSecurityDescLen{1279214595}, Instrument_13);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_13);
  FIX::Factor Factor_13;
  Factor_13.setString("18460254");
set_field(msg, Factor_13, Instrument_13);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_13);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_13);
  FIX::FloorPrice FloorPrice_13;
  FloorPrice_13.setString("16007194");
set_field(msg, FloorPrice_13, Instrument_13);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_13);
  set_field(msg, FIX::InstrRegistry{"STRING_1260367303"}, Instrument_13);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_13);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_523160710"}, Instrument_13);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_912966065"}, Instrument_13);
  set_field(msg, FIX::Issuer{"STRING_450025366"}, Instrument_13);
  set_field(msg, FIX::ListMethod{1}, Instrument_13);
  set_field(msg, FIX::LocaleOfIssue{"STRING_875037133"}, Instrument_13);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_261648676"}, Instrument_13);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1754806797"}, Instrument_13);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_114679402"}, Instrument_13);
  FIX::MinPriceIncrement MinPriceIncrement_13;
  MinPriceIncrement_13.setString("19736958");
set_field(msg, MinPriceIncrement_13, Instrument_13);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_13;
  MinPriceIncrementAmount_13.setString("14749970");
set_field(msg, MinPriceIncrementAmount_13, Instrument_13);
  set_field(msg, FIX::NTPositionLimit{1846715239}, Instrument_13);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_13;
  NotionalPercentageOutstanding_13.setString("85.910000");
set_field(msg, NotionalPercentageOutstanding_13, Instrument_13);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_13);
  FIX::OptPayoutAmount OptPayoutAmount_13;
  OptPayoutAmount_13.setString("1084775");
set_field(msg, OptPayoutAmount_13, Instrument_13);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_13);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_13;
  OriginalNotionalPercentageOutstanding_13.setString("24.370000");
set_field(msg, OriginalNotionalPercentageOutstanding_13, Instrument_13);
  set_field(msg, FIX::Pool{"STRING_818293013"}, Instrument_13);
  set_field(msg, FIX::PositionLimit{2068331188}, Instrument_13);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_13);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_136326352"}, Instrument_13);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_13;
  PriceUnitOfMeasureQty_13.setString("18132969");
set_field(msg, PriceUnitOfMeasureQty_13, Instrument_13);
  set_field(msg, FIX::Product{9}, Instrument_13);
  set_field(msg, FIX::ProductComplex{"STRING_1415540947"}, Instrument_13);
  set_field(msg, FIX::PutOrCall{1}, Instrument_13);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_437414058"}, Instrument_13);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_325034007"}, Instrument_13);
  FIX::RepurchaseRate RepurchaseRate_13;
  RepurchaseRate_13.setString("0.890000");
set_field(msg, RepurchaseRate_13, Instrument_13);
  set_field(msg, FIX::RepurchaseTerm{2038133556}, Instrument_13);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_13);
  set_field(msg, FIX::SecurityDesc{"STRING_1479807392"}, Instrument_13);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_71900478"}, Instrument_13);
  set_field(msg, FIX::SecurityGroup{"STRING_626909782"}, Instrument_13);
  set_field(msg, FIX::SecurityID{"STRING_245289810"}, Instrument_13);
  set_field(msg, FIX::SecurityIDSource{"STRING_1"}, Instrument_13);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_13);
  set_field(msg, FIX::SecuritySubType{"STRING_1120326943"}, Instrument_13);
  set_field(msg, FIX::SecurityType{"STRING_FADN"}, Instrument_13);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_13);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_13);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_609786755"}, Instrument_13);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_832851383"}, Instrument_13);
  set_field(msg, FIX::StrikeCurrency{"GBP"}, Instrument_13);
  FIX::StrikeMultiplier StrikeMultiplier_13;
  StrikeMultiplier_13.setString("7385220");
set_field(msg, StrikeMultiplier_13, Instrument_13);
  FIX::StrikePrice StrikePrice_13;
  StrikePrice_13.setString("10427155");
set_field(msg, StrikePrice_13, Instrument_13);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_13);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_13;
  StrikePriceBoundaryPrecision_13.setString("8.210000");
set_field(msg, StrikePriceBoundaryPrecision_13, Instrument_13);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_13);
  FIX::StrikeValue StrikeValue_13;
  StrikeValue_13.setString("16118593");
set_field(msg, StrikeValue_13, Instrument_13);
  set_field(msg, FIX::Symbol{"STRING_1072425368"}, Instrument_13);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_13);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_13);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_13);
  set_field(msg, FIX::UnitOfMeasure{"STRING_t"}, Instrument_13);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_13;
  UnitOfMeasureQty_13.setString("20049333");
set_field(msg, UnitOfMeasureQty_13, Instrument_13);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_13);
  all_values.push_back(Instrument_13);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralResponse::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_24;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_24);
    FIX::ComplexEventPrice ComplexEventPrice_24;
    ComplexEventPrice_24.setString("21393616");
set_field(noComplexEvents_0_0, ComplexEventPrice_24, ComplexEvents_NoComplexEvents_24);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_24);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_24;
    ComplexEventPriceBoundaryPrecision_24.setString("72.070000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_24, ComplexEvents_NoComplexEvents_24);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_24);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_24);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_24;
    ComplexOptPayoutAmount_24.setString("18019870");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_24, ComplexEvents_NoComplexEvents_24);
    all_values.push_back(ComplexEvents_NoComplexEvents_24);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_48;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 35, 18, 18, 11, 2003)}, ComplexEventDates_NoComplexEventDates_48);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 5, 37, 3, 7, 2007)}, ComplexEventDates_NoComplexEventDates_48);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_48);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_117;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 59, 20)}, ComplexEventTimes_NoComplexEventTimes_117);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 43, 13)}, ComplexEventTimes_NoComplexEventTimes_117);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_117);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_118;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 21, 19)}, ComplexEventTimes_NoComplexEventTimes_118);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 16, 52)}, ComplexEventTimes_NoComplexEventTimes_118);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_118);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_49;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 27, 55, 15, 6, 2011)}, ComplexEventDates_NoComplexEventDates_49);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 34, 27, 12, 10, 2009)}, ComplexEventDates_NoComplexEventDates_49);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_49);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_119;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 37, 51)}, ComplexEventTimes_NoComplexEventTimes_119);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 27, 22)}, ComplexEventTimes_NoComplexEventTimes_119);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_119);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_120;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 43, 52)}, ComplexEventTimes_NoComplexEventTimes_120);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 1, 24)}, ComplexEventTimes_NoComplexEventTimes_120);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_120);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_121;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 43, 51)}, ComplexEventTimes_NoComplexEventTimes_121);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 20, 43)}, ComplexEventTimes_NoComplexEventTimes_121);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_121);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_50;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 2, 33, 7, 12, 2005)}, ComplexEventDates_NoComplexEventDates_50);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 49, 34, 23, 12, 2013)}, ComplexEventDates_NoComplexEventDates_50);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_50);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_122;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 57, 41)}, ComplexEventTimes_NoComplexEventTimes_122);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 34, 36)}, ComplexEventTimes_NoComplexEventTimes_122);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_122);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_123;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 11, 2)}, ComplexEventTimes_NoComplexEventTimes_123);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 22, 28)}, ComplexEventTimes_NoComplexEventTimes_123);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_123);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralResponse::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_33;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_241830300"}, EvntGrp_NoEvents_33);
    FIX::EventPx EventPx_33;
    EventPx_33.setString("19808766");
set_field(noEvents_0_0, EventPx_33, EvntGrp_NoEvents_33);
    set_field(noEvents_0_0, FIX::EventText{"STRING_645291265"}, EvntGrp_NoEvents_33);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(22, 36, 3, 0, 6, 2017)}, EvntGrp_NoEvents_33);
    set_field(noEvents_0_0, FIX::EventType{13}, EvntGrp_NoEvents_33);
    all_values.push_back(EvntGrp_NoEvents_33);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_34;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_775141172"}, EvntGrp_NoEvents_34);
    FIX::EventPx EventPx_34;
    EventPx_34.setString("21038249");
set_field(noEvents_0_1, EventPx_34, EvntGrp_NoEvents_34);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1148250406"}, EvntGrp_NoEvents_34);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(23, 35, 54, 11, 4, 2002)}, EvntGrp_NoEvents_34);
    set_field(noEvents_0_1, FIX::EventType{12}, EvntGrp_NoEvents_34);
    all_values.push_back(EvntGrp_NoEvents_34);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_25;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1114642708"}, InstrumentParties_NoInstrumentParties_25);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_25);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1324296244}, InstrumentParties_NoInstrumentParties_25);
    all_values.push_back(InstrumentParties_NoInstrumentParties_25);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_677082901"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{462624378}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_52);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1480333481"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1057948373}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_53);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_26;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_704454678"}, InstrumentParties_NoInstrumentParties_26);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_26);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1703239638}, InstrumentParties_NoInstrumentParties_26);
    all_values.push_back(InstrumentParties_NoInstrumentParties_26);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_366479453"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{795519526}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_54);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_27;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_739463545"}, InstrumentParties_NoInstrumentParties_27);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_27);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1797641884}, InstrumentParties_NoInstrumentParties_27);
    all_values.push_back(InstrumentParties_NoInstrumentParties_27);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_23719310"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{425299408}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_55);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_969684078"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1171969716}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_56);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_34;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1825430789"}, SecAltIDGrp_NoSecurityAltID_34);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1616741351"}, SecAltIDGrp_NoSecurityAltID_34);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_34);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_35;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1049840735"}, SecAltIDGrp_NoSecurityAltID_35);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_542850464"}, SecAltIDGrp_NoSecurityAltID_35);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_35);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_26;
  set_field(msg, FIX::SecurityXML{"XMLDATA_805734654"}, SecurityXML_26);
  set_field(msg, FIX::SecurityXMLLen{1253537575}, SecurityXML_26);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1152657215"}, SecurityXML_26);
  all_values.push_back(SecurityXML_26);
  all_compo_names.insert("..");

  // MiscFeesGrp
  // Group MiscFeesGrp.NoMiscFees
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_0;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_22;
    FIX::MiscFeeAmt MiscFeeAmt_22;
    MiscFeeAmt_22.setString("2206966");
set_field(noMiscFees_0_0, MiscFeeAmt_22, MiscFeesGrp_NoMiscFees_22);
    set_field(noMiscFees_0_0, FIX::MiscFeeBasis{2}, MiscFeesGrp_NoMiscFees_22);
    set_field(noMiscFees_0_0, FIX::MiscFeeCurr{"JPY"}, MiscFeesGrp_NoMiscFees_22);
    set_field(noMiscFees_0_0, FIX::MiscFeeType{"STRING_3"}, MiscFeesGrp_NoMiscFees_22);
    all_values.push_back(MiscFeesGrp_NoMiscFees_22);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_1;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_23;
    FIX::MiscFeeAmt MiscFeeAmt_23;
    MiscFeeAmt_23.setString("17290135");
set_field(noMiscFees_0_1, MiscFeeAmt_23, MiscFeesGrp_NoMiscFees_23);
    set_field(noMiscFees_0_1, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_23);
    set_field(noMiscFees_0_1, FIX::MiscFeeCurr{"CHF"}, MiscFeesGrp_NoMiscFees_23);
    set_field(noMiscFees_0_1, FIX::MiscFeeType{"STRING_8"}, MiscFeesGrp_NoMiscFees_23);
    all_values.push_back(MiscFeesGrp_NoMiscFees_23);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoMiscFees noMiscFees_0_2;
    // MiscFeesGrp.NoMiscFees
    multiset<string> MiscFeesGrp_NoMiscFees_24;
    FIX::MiscFeeAmt MiscFeeAmt_24;
    MiscFeeAmt_24.setString("2342086");
set_field(noMiscFees_0_2, MiscFeeAmt_24, MiscFeesGrp_NoMiscFees_24);
    set_field(noMiscFees_0_2, FIX::MiscFeeBasis{0}, MiscFeesGrp_NoMiscFees_24);
    set_field(noMiscFees_0_2, FIX::MiscFeeCurr{"CAN"}, MiscFeesGrp_NoMiscFees_24);
    set_field(noMiscFees_0_2, FIX::MiscFeeType{"STRING_2"}, MiscFeesGrp_NoMiscFees_24);
    all_values.push_back(MiscFeesGrp_NoMiscFees_24);
    all_compo_names.insert("...NoMiscFees");

    msg.addGroup(noMiscFees_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralResponse::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_31;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_679886407"}, Parties_NoPartyIDs_31);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_31);
    set_field(noPartyIDs_0_0, FIX::PartyRole{7}, Parties_NoPartyIDs_31);
    all_values.push_back(Parties_NoPartyIDs_31);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralResponse::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_68;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1916090722"}, PtysSubGrp_NoPartySubIDs_68);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_68);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_68);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_7;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SWAP"}, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1911325553"}, SpreadOrBenchmarkCurveData_7);
  FIX::BenchmarkPrice BenchmarkPrice_7;
  BenchmarkPrice_7.setString("21368883");
set_field(msg, BenchmarkPrice_7, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkPriceType{1464525640}, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1017379480"}, SpreadOrBenchmarkCurveData_7);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1142061894"}, SpreadOrBenchmarkCurveData_7);
  FIX::Spread Spread_7;
  Spread_7.setString("14066185");
set_field(msg, Spread_7, SpreadOrBenchmarkCurveData_7);
  all_values.push_back(SpreadOrBenchmarkCurveData_7);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_17;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_MHP"}, Stipulations_NoStipulations_17);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_525524053"}, Stipulations_NoStipulations_17);
    all_values.push_back(Stipulations_NoStipulations_17);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_18;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_ORDRINCR"}, Stipulations_NoStipulations_18);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1853471205"}, Stipulations_NoStipulations_18);
    all_values.push_back(Stipulations_NoStipulations_18);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralResponse::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_19;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_MAT"}, Stipulations_NoStipulations_19);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_1716270326"}, Stipulations_NoStipulations_19);
    all_values.push_back(Stipulations_NoStipulations_19);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_12;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_393038497"}, TrdCollGrp_NoTrades_12);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_788035163"}, TrdCollGrp_NoTrades_12);
    all_values.push_back(TrdCollGrp_NoTrades_12);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_13;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_618648857"}, TrdCollGrp_NoTrades_13);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_1734122428"}, TrdCollGrp_NoTrades_13);
    all_values.push_back(TrdCollGrp_NoTrades_13);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralResponse::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_11;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_E.W"}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_A"}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(21, 36, 4, 27, 8, 2003)}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1828754190"}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{3}, TrdRegTimestamps_NoTrdRegTimestamps_11);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_11);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralResponse::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_12;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_IO"}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_T"}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(11, 58, 35, 18, 1, 2009)}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_604207947"}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{5}, TrdRegTimestamps_NoTrdRegTimestamps_12);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_12);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  // UndInstrmtCollGrp
  // Group UndInstrmtCollGrp.NoUnderlyings
  {
    FIX50SP2::CollateralResponse::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtCollGrp.NoUnderlyings
    multiset<string> UndInstrmtCollGrp_NoUnderlyings_3;
    set_field(noUnderlyings_0_0, FIX::CollAction{1}, UndInstrmtCollGrp_NoUnderlyings_3);
    all_values.push_back(UndInstrmtCollGrp_NoUnderlyings_3);
    all_compo_names.insert("...NoUnderlyings");

    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_20;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1687804925"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{2039350772}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1607297016"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1274443705}, UnderlyingInstrument_20);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_20;
    UnderlyingAdjustedQuantity_20.setString("1181465");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_20, UnderlyingInstrument_20);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_20;
    UnderlyingAllocationPercent_20.setString("3.970000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_20, UnderlyingInstrument_20);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_20;
    UnderlyingAttachmentPoint_20.setString("63.150000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_338270288"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1288970185"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1260255568"}, UnderlyingInstrument_20);
    FIX::UnderlyingCapValue UnderlyingCapValue_20;
    UnderlyingCapValue_20.setString("5759575");
set_field(noUnderlyings_0_0, UnderlyingCapValue_20, UnderlyingInstrument_20);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_20;
    UnderlyingCashAmount_20.setString("4274521");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_20);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_20;
    UnderlyingContractMultiplier_20.setString("20031781");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{427418914}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1176242438"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1941706020"}, UnderlyingInstrument_20);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_20;
    UnderlyingCouponRate_20.setString("75.930000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_846917660"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_20);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_20;
    UnderlyingCurrentValue_20.setString("16596547");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_20, UnderlyingInstrument_20);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_20;
    UnderlyingDetachmentPoint_20.setString("43.480000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_20, UnderlyingInstrument_20);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_20;
    UnderlyingDirtyPrice_20.setString("8441963");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_20, UnderlyingInstrument_20);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_20;
    UnderlyingEndPrice_20.setString("4103915");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_20, UnderlyingInstrument_20);
    FIX::UnderlyingEndValue UnderlyingEndValue_20;
    UnderlyingEndValue_20.setString("8996931");
set_field(noUnderlyings_0_0, UnderlyingEndValue_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{379241662}, UnderlyingInstrument_20);
    FIX::UnderlyingFXRate UnderlyingFXRate_20;
    UnderlyingFXRate_20.setString("10145994");
set_field(noUnderlyings_0_0, UnderlyingFXRate_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_20);
    FIX::UnderlyingFactor UnderlyingFactor_20;
    UnderlyingFactor_20.setString("16305572");
set_field(noUnderlyings_0_0, UnderlyingFactor_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{2003247625}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1734780897"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1522424396"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1463060993"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_861740955"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1640570974"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_423767742"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1655887270"}, UnderlyingInstrument_20);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_20;
    UnderlyingNotionalPercentageOutstanding_20.setString("12.620000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_20);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_20;
    UnderlyingOriginalNotionalPercentageOutstanding_20.setString("91.900000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_407315179"}, UnderlyingInstrument_20);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_20;
    UnderlyingPriceUnitOfMeasureQty_20.setString("21401900");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{116147438}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{263009654}, UnderlyingInstrument_20);
    FIX::UnderlyingPx UnderlyingPx_20;
    UnderlyingPx_20.setString("4201253");
set_field(noUnderlyings_0_0, UnderlyingPx_20, UnderlyingInstrument_20);
    FIX::UnderlyingQty UnderlyingQty_20;
    UnderlyingQty_20.setString("12923898");
set_field(noUnderlyings_0_0, UnderlyingQty_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_57232027"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_611352928"}, UnderlyingInstrument_20);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_20;
    UnderlyingRepurchaseRate_20.setString("75.370000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1254507937}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1583768680"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1651478664"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_966488637"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_280481411"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_2061870182"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1866181830"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_659723073"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_928986000"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1913157802"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_20);
    FIX::UnderlyingStartValue UnderlyingStartValue_20;
    UnderlyingStartValue_20.setString("7847499");
set_field(noUnderlyings_0_0, UnderlyingStartValue_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1500455052"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_20);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_20;
    UnderlyingStrikePrice_20.setString("2147123");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1158308420"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_524095065"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1870599629"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_989666035"}, UnderlyingInstrument_20);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_20;
    UnderlyingUnitOfMeasureQty_20.setString("893493");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_20, UnderlyingInstrument_20);
    all_values.push_back(UnderlyingInstrument_20);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_42;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1396981214"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_82055765"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_35;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1659990868"}, UnderlyingStipulations_NoUnderlyingStips_35);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_502181100"}, UnderlyingStipulations_NoUnderlyingStips_35);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_35);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_40;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1717222895"}, UndlyInstrumentParties_NoUndlyInstrumentParties_40);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_40);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1892136376}, UndlyInstrumentParties_NoUndlyInstrumentParties_40);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_40);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_549819060"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1396131392}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1790735822"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{830300471}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_41;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1310517927"}, UndlyInstrumentParties_NoUndlyInstrumentParties_41);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_41);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1490023544}, UndlyInstrumentParties_NoUndlyInstrumentParties_41);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_41);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1275108158"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1632820242}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_876770256"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{628079562}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_42;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1150557688"}, UndlyInstrumentParties_NoUndlyInstrumentParties_42);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_42);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{842791921}, UndlyInstrumentParties_NoUndlyInstrumentParties_42);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_42);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1501192643"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{565907902}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_80);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralResponse::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1151048495"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1590541988}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_81);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // header
  multiset<string> header_19;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_19);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_400546061"}, header_19);
  set_header_field(msg.getHeader(), FIX::BodyLength{1672597753}, header_19);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1665605684"}, header_19);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_2060536930"}, header_19);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_27295205"}, header_19);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1418434523"}, header_19);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1630276177}, header_19);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_19);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1163087251}, header_19);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_307039714"}, header_19);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1690648293"}, header_19);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_411734995"}, header_19);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(12, 22, 52, 12, 6, 2016)}, header_19);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_19);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_19);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1215429965"}, header_19);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{351899294}, header_19);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1520657388"}, header_19);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_2058221886"}, header_19);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_513281755"}, header_19);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(21, 30, 3, 27, 1, 2004)}, header_19);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1052451251"}, header_19);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1977929594"}, header_19);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_2017317681"}, header_19);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_323402126"}, header_19);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1460722123}, header_19);
  all_values.push_back(header_19);
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
