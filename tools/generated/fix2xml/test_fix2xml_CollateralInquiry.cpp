#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralInquiry.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiry, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::CollateralInquiry msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiry_0;
  set_field(msg, FIX::Account{"STRING_1298657543"}, CollateralInquiry_0);
  set_field(msg, FIX::AccountType{3}, CollateralInquiry_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_4;
  AccruedInterestAmt_4.setString("7888850");
set_field(msg, AccruedInterestAmt_4, CollateralInquiry_0);
  FIX::CashOutstanding CashOutstanding_1;
  CashOutstanding_1.setString("267468");
set_field(msg, CashOutstanding_1, CollateralInquiry_0);
  set_field(msg, FIX::ClOrdID{"STRING_387913372"}, CollateralInquiry_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_272179616"}, CollateralInquiry_0);
  set_field(msg, FIX::CollInquiryID{"STRING_377294705"}, CollateralInquiry_0);
  set_field(msg, FIX::Currency{"JPY"}, CollateralInquiry_0);
  set_field(msg, FIX::EncodedText{"DATA_1648963442"}, CollateralInquiry_0);
  set_field(msg, FIX::EncodedTextLen{47859876}, CollateralInquiry_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_4;
  EndAccruedInterestAmt_4.setString("20614057");
set_field(msg, EndAccruedInterestAmt_4, CollateralInquiry_0);
  FIX::EndCash EndCash_4;
  EndCash_4.setString("3293806");
set_field(msg, EndCash_4, CollateralInquiry_0);
  FIX::MarginExcess MarginExcess_1;
  MarginExcess_1.setString("2574882");
set_field(msg, MarginExcess_1, CollateralInquiry_0);
  set_field(msg, FIX::OrderID{"STRING_99324376"}, CollateralInquiry_0);
  FIX::Price Price_4;
  Price_4.setString("11025689");
set_field(msg, Price_4, CollateralInquiry_0);
  set_field(msg, FIX::PriceType{2}, CollateralInquiry_0);
  set_field(msg, FIX::QtyType{0}, CollateralInquiry_0);
  FIX::Quantity Quantity_6;
  Quantity_6.setString("15808119");
set_field(msg, Quantity_6, CollateralInquiry_0);
  set_field(msg, FIX::ResponseDestination{"STRING_1205081293"}, CollateralInquiry_0);
  set_field(msg, FIX::ResponseTransportType{1}, CollateralInquiry_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1051653575"}, CollateralInquiry_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_986165907"}, CollateralInquiry_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_449531667"}, CollateralInquiry_0);
  set_field(msg, FIX::SettlSessID{"STRING_RTH"}, CollateralInquiry_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_122112067"}, CollateralInquiry_0);
  set_field(msg, FIX::Side{'C'}, CollateralInquiry_0);
  FIX::StartCash StartCash_4;
  StartCash_4.setString("7157173");
set_field(msg, StartCash_4, CollateralInquiry_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, CollateralInquiry_0);
  set_field(msg, FIX::Text{"STRING_818675370"}, CollateralInquiry_0);
  FIX::TotalNetValue TotalNetValue_1;
  TotalNetValue_1.setString("14058182");
set_field(msg, TotalNetValue_1, CollateralInquiry_0);
  set_field(msg, FIX::TradingSessionID{"STRING_6"}, CollateralInquiry_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_3"}, CollateralInquiry_0);
  all_values.push_back(CollateralInquiry_0);

  all_compo_names.insert("CollateralInquiry");

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_0;
    set_field(noCollInquiryQualifier_0_0, FIX::CollInquiryQualifier{1}, CollInqQualGrp_NoCollInquiryQualifier_0);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_0);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_1;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_1;
    set_field(noCollInquiryQualifier_0_1, FIX::CollInquiryQualifier{2}, CollInqQualGrp_NoCollInquiryQualifier_1);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_1);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_2;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_2;
    set_field(noCollInquiryQualifier_0_2, FIX::CollInquiryQualifier{5}, CollInqQualGrp_NoCollInquiryQualifier_2);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_2);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_2);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_1;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_2081903244"}, ExecCollGrp_NoExecs_1);
    all_values.push_back(ExecCollGrp_NoExecs_1);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_2;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_924575916"}, ExecCollGrp_NoExecs_2);
    all_values.push_back(ExecCollGrp_NoExecs_2);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_4;
  set_field(msg, FIX::AgreementCurrency{"EUR"}, FinancingDetails_4);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_838497979"}, FinancingDetails_4);
  set_field(msg, FIX::AgreementDesc{"STRING_1785585662"}, FinancingDetails_4);
  set_field(msg, FIX::AgreementID{"STRING_239767724"}, FinancingDetails_4);
  set_field(msg, FIX::DeliveryType{3}, FinancingDetails_4);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_740670990"}, FinancingDetails_4);
  FIX::MarginRatio MarginRatio_4;
  MarginRatio_4.setString("66.330000");
set_field(msg, MarginRatio_4, FinancingDetails_4);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1455166373"}, FinancingDetails_4);
  set_field(msg, FIX::TerminationType{2}, FinancingDetails_4);
  all_values.push_back(FinancingDetails_4);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralInquiry::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_12;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1621629234"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1225652844}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1593960186"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{2071160902}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1904247846"}, InstrumentLeg_12);
    FIX::LegContractMultiplier LegContractMultiplier_12;
    LegContractMultiplier_12.setString("17160722");
set_field(noLegs_0_0, LegContractMultiplier_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{97327217}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_472481551"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1968098401"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_916002587"}, InstrumentLeg_12);
    FIX::LegCouponRate LegCouponRate_12;
    LegCouponRate_12.setString("98.350000");
set_field(noLegs_0_0, LegCouponRate_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1371298445"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_801245342"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1444093555}, InstrumentLeg_12);
    FIX::LegFactor LegFactor_12;
    LegFactor_12.setString("974352");
set_field(noLegs_0_0, LegFactor_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{608486944}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1378513151"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1022011153"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_2064691988"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1360792624"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1860509132"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1702794002"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1600560348"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_650847839"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_12);
    FIX::LegOptionRatio LegOptionRatio_12;
    LegOptionRatio_12.setString("10032733");
set_field(noLegs_0_0, LegOptionRatio_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_2106014213"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_469980614"}, InstrumentLeg_12);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_12;
    LegPriceUnitOfMeasureQty_12.setString("16110676");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegProduct{1580159799}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1695633459}, InstrumentLeg_12);
    FIX::LegRatioQty LegRatioQty_12;
    LegRatioQty_12.setString("10575441");
set_field(noLegs_0_0, LegRatioQty_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1503837053"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1452397657"}, InstrumentLeg_12);
    FIX::LegRepurchaseRate LegRepurchaseRate_12;
    LegRepurchaseRate_12.setString("27.570000");
set_field(noLegs_0_0, LegRepurchaseRate_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1601164271}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1924879208"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_446747510"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_369683210"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1655695395"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1818045955"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1355774595"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_471807649"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_12);
    FIX::LegStrikePrice LegStrikePrice_12;
    LegStrikePrice_12.setString("10802945");
set_field(noLegs_0_0, LegStrikePrice_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_2030897654"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_405694042"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_997502934"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1244206630"}, InstrumentLeg_12);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_12;
    LegUnitOfMeasureQty_12.setString("1187195");
set_field(noLegs_0_0, LegUnitOfMeasureQty_12, InstrumentLeg_12);
    all_values.push_back(InstrumentLeg_12);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_26;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_697283331"}, LegSecAltIDGrp_NoLegSecurityAltID_26);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_769567366"}, LegSecAltIDGrp_NoLegSecurityAltID_26);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_26);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_9;
  FIX::AttachmentPoint AttachmentPoint_9;
  AttachmentPoint_9.setString("46.330000");
set_field(msg, AttachmentPoint_9, Instrument_9);
  set_field(msg, FIX::CFICode{"STRING_1700556665"}, Instrument_9);
  set_field(msg, FIX::CPProgram{2}, Instrument_9);
  set_field(msg, FIX::CPRegType{"STRING_1318775248"}, Instrument_9);
  FIX::CapPrice CapPrice_9;
  CapPrice_9.setString("11641406");
set_field(msg, CapPrice_9, Instrument_9);
  FIX::ContractMultiplier ContractMultiplier_9;
  ContractMultiplier_9.setString("1607740");
set_field(msg, ContractMultiplier_9, Instrument_9);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_9);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_74201133"}, Instrument_9);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1664611136"}, Instrument_9);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_171839068"}, Instrument_9);
  FIX::CouponRate CouponRate_9;
  CouponRate_9.setString("38.900000");
set_field(msg, CouponRate_9, Instrument_9);
  set_field(msg, FIX::CreditRating{"STRING_1118291759"}, Instrument_9);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2096718276"}, Instrument_9);
  FIX::DetachmentPoint DetachmentPoint_9;
  DetachmentPoint_9.setString("14.010000");
set_field(msg, DetachmentPoint_9, Instrument_9);
  set_field(msg, FIX::EncodedIssuer{"DATA_1487974970"}, Instrument_9);
  set_field(msg, FIX::EncodedIssuerLen{1604930024}, Instrument_9);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_817643708"}, Instrument_9);
  set_field(msg, FIX::EncodedSecurityDescLen{696265917}, Instrument_9);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_9);
  FIX::Factor Factor_9;
  Factor_9.setString("12894513");
set_field(msg, Factor_9, Instrument_9);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_9);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_9);
  FIX::FloorPrice FloorPrice_9;
  FloorPrice_9.setString("2222623");
set_field(msg, FloorPrice_9, Instrument_9);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_9);
  set_field(msg, FIX::InstrRegistry{"STRING_680554607"}, Instrument_9);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_9);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_328787408"}, Instrument_9);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_799274134"}, Instrument_9);
  set_field(msg, FIX::Issuer{"STRING_1772578526"}, Instrument_9);
  set_field(msg, FIX::ListMethod{1}, Instrument_9);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1568841500"}, Instrument_9);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_473889511"}, Instrument_9);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_579143756"}, Instrument_9);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_149455784"}, Instrument_9);
  FIX::MinPriceIncrement MinPriceIncrement_9;
  MinPriceIncrement_9.setString("17926647");
set_field(msg, MinPriceIncrement_9, Instrument_9);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_9;
  MinPriceIncrementAmount_9.setString("17432843");
set_field(msg, MinPriceIncrementAmount_9, Instrument_9);
  set_field(msg, FIX::NTPositionLimit{310229867}, Instrument_9);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_9;
  NotionalPercentageOutstanding_9.setString("61.700000");
set_field(msg, NotionalPercentageOutstanding_9, Instrument_9);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_9);
  FIX::OptPayoutAmount OptPayoutAmount_9;
  OptPayoutAmount_9.setString("19748410");
set_field(msg, OptPayoutAmount_9, Instrument_9);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_9);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_9;
  OriginalNotionalPercentageOutstanding_9.setString("57.620000");
set_field(msg, OriginalNotionalPercentageOutstanding_9, Instrument_9);
  set_field(msg, FIX::Pool{"STRING_945649115"}, Instrument_9);
  set_field(msg, FIX::PositionLimit{633179867}, Instrument_9);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_9);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_286140437"}, Instrument_9);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_9;
  PriceUnitOfMeasureQty_9.setString("906262");
set_field(msg, PriceUnitOfMeasureQty_9, Instrument_9);
  set_field(msg, FIX::Product{4}, Instrument_9);
  set_field(msg, FIX::ProductComplex{"STRING_982406354"}, Instrument_9);
  set_field(msg, FIX::PutOrCall{0}, Instrument_9);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1477028582"}, Instrument_9);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_183573126"}, Instrument_9);
  FIX::RepurchaseRate RepurchaseRate_9;
  RepurchaseRate_9.setString("44.830000");
set_field(msg, RepurchaseRate_9, Instrument_9);
  set_field(msg, FIX::RepurchaseTerm{1699290885}, Instrument_9);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_9);
  set_field(msg, FIX::SecurityDesc{"STRING_1937219090"}, Instrument_9);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_771572475"}, Instrument_9);
  set_field(msg, FIX::SecurityGroup{"STRING_1744424961"}, Instrument_9);
  set_field(msg, FIX::SecurityID{"STRING_589009576"}, Instrument_9);
  set_field(msg, FIX::SecurityIDSource{"STRING_6"}, Instrument_9);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_9);
  set_field(msg, FIX::SecuritySubType{"STRING_10367428"}, Instrument_9);
  set_field(msg, FIX::SecurityType{"STRING_CL"}, Instrument_9);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_9);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_9);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_515737976"}, Instrument_9);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_797956547"}, Instrument_9);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_9);
  FIX::StrikeMultiplier StrikeMultiplier_9;
  StrikeMultiplier_9.setString("4679584");
set_field(msg, StrikeMultiplier_9, Instrument_9);
  FIX::StrikePrice StrikePrice_9;
  StrikePrice_9.setString("2974104");
set_field(msg, StrikePrice_9, Instrument_9);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_9);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_9;
  StrikePriceBoundaryPrecision_9.setString("41.820000");
set_field(msg, StrikePriceBoundaryPrecision_9, Instrument_9);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_9);
  FIX::StrikeValue StrikeValue_9;
  StrikeValue_9.setString("1974856");
set_field(msg, StrikeValue_9, Instrument_9);
  set_field(msg, FIX::Symbol{"STRING_208227697"}, Instrument_9);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_9);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_9);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_9);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_9);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_9;
  UnitOfMeasureQty_9.setString("12699157");
set_field(msg, UnitOfMeasureQty_9, Instrument_9);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_9);
  all_values.push_back(Instrument_9);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_17;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_17);
    FIX::ComplexEventPrice ComplexEventPrice_17;
    ComplexEventPrice_17.setString("14246407");
set_field(noComplexEvents_0_0, ComplexEventPrice_17, ComplexEvents_NoComplexEvents_17);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_17);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_17;
    ComplexEventPriceBoundaryPrecision_17.setString("20.420000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_17, ComplexEvents_NoComplexEvents_17);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_17);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_17);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_17;
    ComplexOptPayoutAmount_17.setString("7578416");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_17, ComplexEvents_NoComplexEvents_17);
    all_values.push_back(ComplexEvents_NoComplexEvents_17);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_32;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 5, 19, 7, 2, 2012)}, ComplexEventDates_NoComplexEventDates_32);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 58, 54, 13, 5, 2008)}, ComplexEventDates_NoComplexEventDates_32);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_32);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_78;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 28, 59)}, ComplexEventTimes_NoComplexEventTimes_78);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 34, 28)}, ComplexEventTimes_NoComplexEventTimes_78);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_78);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_33;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 13, 8, 11, 11, 2005)}, ComplexEventDates_NoComplexEventDates_33);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 54, 14, 23, 6, 2001)}, ComplexEventDates_NoComplexEventDates_33);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_33);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_79;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 36, 10)}, ComplexEventTimes_NoComplexEventTimes_79);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 58, 45)}, ComplexEventTimes_NoComplexEventTimes_79);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_79);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_80;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 5, 16)}, ComplexEventTimes_NoComplexEventTimes_80);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 43, 30)}, ComplexEventTimes_NoComplexEventTimes_80);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_80);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_81;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 35, 5)}, ComplexEventTimes_NoComplexEventTimes_81);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 52, 54)}, ComplexEventTimes_NoComplexEventTimes_81);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_81);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_18;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_18);
    FIX::ComplexEventPrice ComplexEventPrice_18;
    ComplexEventPrice_18.setString("18059833");
set_field(noComplexEvents_0_1, ComplexEventPrice_18, ComplexEvents_NoComplexEvents_18);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_18);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_18;
    ComplexEventPriceBoundaryPrecision_18.setString("21.380000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_18, ComplexEvents_NoComplexEvents_18);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_18);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_18);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_18;
    ComplexOptPayoutAmount_18.setString("3056595");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_18, ComplexEvents_NoComplexEvents_18);
    all_values.push_back(ComplexEvents_NoComplexEvents_18);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_34;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 3, 12, 16, 6, 2009)}, ComplexEventDates_NoComplexEventDates_34);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 55, 10, 25, 7, 2005)}, ComplexEventDates_NoComplexEventDates_34);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_34);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_82;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 59, 8)}, ComplexEventTimes_NoComplexEventTimes_82);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 53, 32)}, ComplexEventTimes_NoComplexEventTimes_82);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_82);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_83;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 32, 21)}, ComplexEventTimes_NoComplexEventTimes_83);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 21, 52)}, ComplexEventTimes_NoComplexEventTimes_83);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_83);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_35;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 47, 40, 21, 5, 2005)}, ComplexEventDates_NoComplexEventDates_35);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 24, 45, 4, 7, 2006)}, ComplexEventDates_NoComplexEventDates_35);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_35);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_84;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 3, 34)}, ComplexEventTimes_NoComplexEventTimes_84);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 19, 55)}, ComplexEventTimes_NoComplexEventTimes_84);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_84);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_23;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1449409422"}, EvntGrp_NoEvents_23);
    FIX::EventPx EventPx_23;
    EventPx_23.setString("9685452");
set_field(noEvents_0_0, EventPx_23, EvntGrp_NoEvents_23);
    set_field(noEvents_0_0, FIX::EventText{"STRING_755160097"}, EvntGrp_NoEvents_23);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 58, 18, 12, 9, 2011)}, EvntGrp_NoEvents_23);
    set_field(noEvents_0_0, FIX::EventType{13}, EvntGrp_NoEvents_23);
    all_values.push_back(EvntGrp_NoEvents_23);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_24;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_93528629"}, EvntGrp_NoEvents_24);
    FIX::EventPx EventPx_24;
    EventPx_24.setString("14697495");
set_field(noEvents_0_1, EventPx_24, EvntGrp_NoEvents_24);
    set_field(noEvents_0_1, FIX::EventText{"STRING_2012543901"}, EvntGrp_NoEvents_24);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(17, 38, 49, 1, 1, 2001)}, EvntGrp_NoEvents_24);
    set_field(noEvents_0_1, FIX::EventType{2}, EvntGrp_NoEvents_24);
    all_values.push_back(EvntGrp_NoEvents_24);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_25;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_771830786"}, EvntGrp_NoEvents_25);
    FIX::EventPx EventPx_25;
    EventPx_25.setString("19883377");
set_field(noEvents_0_2, EventPx_25, EvntGrp_NoEvents_25);
    set_field(noEvents_0_2, FIX::EventText{"STRING_2029209184"}, EvntGrp_NoEvents_25);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(12, 44, 11, 27, 1, 2017)}, EvntGrp_NoEvents_25);
    set_field(noEvents_0_2, FIX::EventType{19}, EvntGrp_NoEvents_25);
    all_values.push_back(EvntGrp_NoEvents_25);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_17;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_525242479"}, InstrumentParties_NoInstrumentParties_17);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'3'}, InstrumentParties_NoInstrumentParties_17);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{77547147}, InstrumentParties_NoInstrumentParties_17);
    all_values.push_back(InstrumentParties_NoInstrumentParties_17);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1819035082"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1247246783}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_271911874"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{403053906}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_18;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1340775413"}, InstrumentParties_NoInstrumentParties_18);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_18);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{268114160}, InstrumentParties_NoInstrumentParties_18);
    all_values.push_back(InstrumentParties_NoInstrumentParties_18);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1535354121"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1523976118}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_23;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1445741170"}, SecAltIDGrp_NoSecurityAltID_23);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_94574690"}, SecAltIDGrp_NoSecurityAltID_23);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_23);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_24;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1356901798"}, SecAltIDGrp_NoSecurityAltID_24);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1093512904"}, SecAltIDGrp_NoSecurityAltID_24);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_24);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_25;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_866405476"}, SecAltIDGrp_NoSecurityAltID_25);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1197755927"}, SecAltIDGrp_NoSecurityAltID_25);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_25);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_18;
  set_field(msg, FIX::SecurityXML{"XMLDATA_975238440"}, SecurityXML_18);
  set_field(msg, FIX::SecurityXMLLen{940971788}, SecurityXML_18);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_202517691"}, SecurityXML_18);
  all_values.push_back(SecurityXML_18);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_24;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1562360719"}, Parties_NoPartyIDs_24);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_24);
    set_field(noPartyIDs_0_0, FIX::PartyRole{75}, Parties_NoPartyIDs_24);
    all_values.push_back(Parties_NoPartyIDs_24);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_54;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1035380941"}, PtysSubGrp_NoPartySubIDs_54);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_54);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_54);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_55;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_2010917904"}, PtysSubGrp_NoPartySubIDs_55);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_55);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_55);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_56;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_319241853"}, PtysSubGrp_NoPartySubIDs_56);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_56);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_56);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_25;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1043016858"}, Parties_NoPartyIDs_25);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_25);
    set_field(noPartyIDs_0_1, FIX::PartyRole{42}, Parties_NoPartyIDs_25);
    all_values.push_back(Parties_NoPartyIDs_25);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_57;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_759780402"}, PtysSubGrp_NoPartySubIDs_57);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_57);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_57);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_9;
  set_field(msg, FIX::SettlDeliveryType{0}, SettlInstructionsData_9);
  set_field(msg, FIX::StandInstDbID{"STRING_2121413199"}, SettlInstructionsData_9);
  set_field(msg, FIX::StandInstDbName{"STRING_1931499053"}, SettlInstructionsData_9);
  set_field(msg, FIX::StandInstDbType{4}, SettlInstructionsData_9);
  all_values.push_back(SettlInstructionsData_9);
  all_compo_names.insert(".");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_15;
    set_field(noDlvyInst_0_0, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_15);
    set_field(noDlvyInst_0_0, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_15);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_15);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_29;
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyID{"STRING_175785832"}, SettlParties_NoSettlPartyIDs_29);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_29);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyRole{332632548}, SettlParties_NoSettlPartyIDs_29);
      all_values.push_back(SettlParties_NoSettlPartyIDs_29);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_58;
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubID{"STRING_845145702"}, SettlPtysSubGrp_NoSettlPartySubIDs_58);
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubIDType{535150240}, SettlPtysSubGrp_NoSettlPartySubIDs_58);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_58);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_59;
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubID{"STRING_1780153649"}, SettlPtysSubGrp_NoSettlPartySubIDs_59);
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubIDType{260022773}, SettlPtysSubGrp_NoSettlPartySubIDs_59);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_59);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_4;
  set_field(msg, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SWAP"}, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_631466063"}, SpreadOrBenchmarkCurveData_4);
  FIX::BenchmarkPrice BenchmarkPrice_4;
  BenchmarkPrice_4.setString("10059385");
set_field(msg, BenchmarkPrice_4, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkPriceType{1609132455}, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_2002931487"}, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1325180378"}, SpreadOrBenchmarkCurveData_4);
  FIX::Spread Spread_4;
  Spread_4.setString("21391876");
set_field(msg, Spread_4, SpreadOrBenchmarkCurveData_4);
  all_values.push_back(SpreadOrBenchmarkCurveData_4);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_9;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_GEOG"}, Stipulations_NoStipulations_9);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_793671149"}, Stipulations_NoStipulations_9);
    all_values.push_back(Stipulations_NoStipulations_9);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_10;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_POOL"}, Stipulations_NoStipulations_10);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1503965769"}, Stipulations_NoStipulations_10);
    all_values.push_back(Stipulations_NoStipulations_10);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_2;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_1911236738"}, TrdCollGrp_NoTrades_2);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_1477895320"}, TrdCollGrp_NoTrades_2);
    all_values.push_back(TrdCollGrp_NoTrades_2);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_3;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_973831487"}, TrdCollGrp_NoTrades_3);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_854430484"}, TrdCollGrp_NoTrades_3);
    all_values.push_back(TrdCollGrp_NoTrades_3);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_4;
    set_field(noTrades_0_2, FIX::SecondaryTradeReportID{"STRING_1403353791"}, TrdCollGrp_NoTrades_4);
    set_field(noTrades_0_2, FIX::TradeReportID{"STRING_56104415"}, TrdCollGrp_NoTrades_4);
    all_values.push_back(TrdCollGrp_NoTrades_4);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_2);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_3;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_E.W"}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PF"}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(8, 37, 20, 21, 7, 2001)}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_1779828340"}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{4}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_3);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_4;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_RSV"}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_T"}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(2, 37, 54, 1, 11, 2012)}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_2064131082"}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{7}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_4);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_5;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_RSV"}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_AR"}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(10, 15, 44, 22, 8, 2009)}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_2059506270"}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{2}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_5);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_13;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1318035823"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1301953836}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_139376618"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{172650498}, UnderlyingInstrument_13);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_13;
    UnderlyingAdjustedQuantity_13.setString("9342985");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_13, UnderlyingInstrument_13);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_13;
    UnderlyingAllocationPercent_13.setString("24.790000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_13, UnderlyingInstrument_13);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_13;
    UnderlyingAttachmentPoint_13.setString("48.840000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1572581745"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_600537147"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1147743462"}, UnderlyingInstrument_13);
    FIX::UnderlyingCapValue UnderlyingCapValue_13;
    UnderlyingCapValue_13.setString("13885616");
set_field(noUnderlyings_0_0, UnderlyingCapValue_13, UnderlyingInstrument_13);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_13;
    UnderlyingCashAmount_13.setString("5536458");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_13);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_13;
    UnderlyingContractMultiplier_13.setString("19487270");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1300425715}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1824781824"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1865374439"}, UnderlyingInstrument_13);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_13;
    UnderlyingCouponRate_13.setString("80.070000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_2025580002"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_13);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_13;
    UnderlyingCurrentValue_13.setString("9333250");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_13, UnderlyingInstrument_13);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_13;
    UnderlyingDetachmentPoint_13.setString("64.440000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_13, UnderlyingInstrument_13);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_13;
    UnderlyingDirtyPrice_13.setString("5240463");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_13, UnderlyingInstrument_13);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_13;
    UnderlyingEndPrice_13.setString("18807526");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_13, UnderlyingInstrument_13);
    FIX::UnderlyingEndValue UnderlyingEndValue_13;
    UnderlyingEndValue_13.setString("8040061");
set_field(noUnderlyings_0_0, UnderlyingEndValue_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1574984778}, UnderlyingInstrument_13);
    FIX::UnderlyingFXRate UnderlyingFXRate_13;
    UnderlyingFXRate_13.setString("4770693");
set_field(noUnderlyings_0_0, UnderlyingFXRate_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_13);
    FIX::UnderlyingFactor UnderlyingFactor_13;
    UnderlyingFactor_13.setString("18613540");
set_field(noUnderlyings_0_0, UnderlyingFactor_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1862388328}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_2034064552"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1015824281"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_2001764946"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_59231402"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1950122810"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_493413778"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1865446286"}, UnderlyingInstrument_13);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_13;
    UnderlyingNotionalPercentageOutstanding_13.setString("9.070000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_13);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_13;
    UnderlyingOriginalNotionalPercentageOutstanding_13.setString("61.000000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_616298950"}, UnderlyingInstrument_13);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_13;
    UnderlyingPriceUnitOfMeasureQty_13.setString("16475967");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{105959189}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{417542307}, UnderlyingInstrument_13);
    FIX::UnderlyingPx UnderlyingPx_13;
    UnderlyingPx_13.setString("8005388");
set_field(noUnderlyings_0_0, UnderlyingPx_13, UnderlyingInstrument_13);
    FIX::UnderlyingQty UnderlyingQty_13;
    UnderlyingQty_13.setString("19307410");
set_field(noUnderlyings_0_0, UnderlyingQty_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_135433099"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1890076856"}, UnderlyingInstrument_13);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_13;
    UnderlyingRepurchaseRate_13.setString("73.680000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1247866645}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1595074996"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_594678737"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_863229442"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_2119121331"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_327947690"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1667235548"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1546622461"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_805017062"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_235780629"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_13);
    FIX::UnderlyingStartValue UnderlyingStartValue_13;
    UnderlyingStartValue_13.setString("5199217");
set_field(noUnderlyings_0_0, UnderlyingStartValue_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_122361533"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_13);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_13;
    UnderlyingStrikePrice_13.setString("1815929");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_13, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_2078956349"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_867616818"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_2047039222"}, UnderlyingInstrument_13);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1306693608"}, UnderlyingInstrument_13);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_13;
    UnderlyingUnitOfMeasureQty_13.setString("19615677");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_13, UnderlyingInstrument_13);
    all_values.push_back(UnderlyingInstrument_13);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_27;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1922992559"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1461680878"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_27);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_28;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_871220863"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_193051218"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_28);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_29;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_114736079"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_654478229"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_29);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_21;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_2004812935"}, UnderlyingStipulations_NoUnderlyingStips_21);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_315831949"}, UnderlyingStipulations_NoUnderlyingStips_21);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_21);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_22;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1576350963"}, UnderlyingStipulations_NoUnderlyingStips_22);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1452404283"}, UnderlyingStipulations_NoUnderlyingStips_22);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_22);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_27;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_292096757"}, UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1238458376}, UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_27);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_823180779"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2043475438}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_51);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_47629287"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{2083673685}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_52);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_14;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_415913532"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{169990820}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_65023577"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{790116572}, UnderlyingInstrument_14);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_14;
    UnderlyingAdjustedQuantity_14.setString("3515837");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_14, UnderlyingInstrument_14);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_14;
    UnderlyingAllocationPercent_14.setString("99.260000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_14, UnderlyingInstrument_14);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_14;
    UnderlyingAttachmentPoint_14.setString("33.910000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_251139330"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1303189887"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1471817487"}, UnderlyingInstrument_14);
    FIX::UnderlyingCapValue UnderlyingCapValue_14;
    UnderlyingCapValue_14.setString("10164010");
set_field(noUnderlyings_0_1, UnderlyingCapValue_14, UnderlyingInstrument_14);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_14;
    UnderlyingCashAmount_14.setString("10786987");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_14);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_14;
    UnderlyingContractMultiplier_14.setString("18876218");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1271750016}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_900750796"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_394616449"}, UnderlyingInstrument_14);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_14;
    UnderlyingCouponRate_14.setString("43.340000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_758080083"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_14);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_14;
    UnderlyingCurrentValue_14.setString("630007");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_14, UnderlyingInstrument_14);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_14;
    UnderlyingDetachmentPoint_14.setString("90.840000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_14, UnderlyingInstrument_14);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_14;
    UnderlyingDirtyPrice_14.setString("13211984");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_14, UnderlyingInstrument_14);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_14;
    UnderlyingEndPrice_14.setString("14870426");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_14, UnderlyingInstrument_14);
    FIX::UnderlyingEndValue UnderlyingEndValue_14;
    UnderlyingEndValue_14.setString("7119338");
set_field(noUnderlyings_0_1, UnderlyingEndValue_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1133047063}, UnderlyingInstrument_14);
    FIX::UnderlyingFXRate UnderlyingFXRate_14;
    UnderlyingFXRate_14.setString("1627398");
set_field(noUnderlyings_0_1, UnderlyingFXRate_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_14);
    FIX::UnderlyingFactor UnderlyingFactor_14;
    UnderlyingFactor_14.setString("11806763");
set_field(noUnderlyings_0_1, UnderlyingFactor_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{98929854}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1023839134"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1350667171"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_163953431"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1813955706"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1702250927"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_160449710"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1324205449"}, UnderlyingInstrument_14);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_14;
    UnderlyingNotionalPercentageOutstanding_14.setString("2.570000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_14);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_14;
    UnderlyingOriginalNotionalPercentageOutstanding_14.setString("92.880000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_822307613"}, UnderlyingInstrument_14);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_14;
    UnderlyingPriceUnitOfMeasureQty_14.setString("3948547");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1434554005}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{562445833}, UnderlyingInstrument_14);
    FIX::UnderlyingPx UnderlyingPx_14;
    UnderlyingPx_14.setString("16666047");
set_field(noUnderlyings_0_1, UnderlyingPx_14, UnderlyingInstrument_14);
    FIX::UnderlyingQty UnderlyingQty_14;
    UnderlyingQty_14.setString("1878211");
set_field(noUnderlyings_0_1, UnderlyingQty_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_957062282"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1119355449"}, UnderlyingInstrument_14);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_14;
    UnderlyingRepurchaseRate_14.setString("12.370000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1667510680}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_973450"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1008901956"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1140986116"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1322171856"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_348460993"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1852919928"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_307735272"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_511200810"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_313361882"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_14);
    FIX::UnderlyingStartValue UnderlyingStartValue_14;
    UnderlyingStartValue_14.setString("6101306");
set_field(noUnderlyings_0_1, UnderlyingStartValue_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1337201016"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_14);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_14;
    UnderlyingStrikePrice_14.setString("10036730");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_14, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_246362424"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_934533806"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_180394876"}, UnderlyingInstrument_14);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_52269033"}, UnderlyingInstrument_14);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_14;
    UnderlyingUnitOfMeasureQty_14.setString("2506897");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_14, UnderlyingInstrument_14);
    all_values.push_back(UnderlyingInstrument_14);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_30;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_874576647"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_645544502"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_30);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_31;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_116004522"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1437022480"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_31);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_23;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_303825676"}, UnderlyingStipulations_NoUnderlyingStips_23);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_246601115"}, UnderlyingStipulations_NoUnderlyingStips_23);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_23);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_24;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1284021067"}, UnderlyingStipulations_NoUnderlyingStips_24);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1249726913"}, UnderlyingStipulations_NoUnderlyingStips_24);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_24);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_28;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1284994518"}, UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{907614264}, UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_28);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_459606214"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{613050544}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_53);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_767417998"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{970807025}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_54);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_15;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_15);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_108345973"}, header_15);
  set_header_field(msg.getHeader(), FIX::BodyLength{1580937690}, header_15);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_116129795"}, header_15);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_799941118"}, header_15);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_207538138"}, header_15);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1119802870"}, header_15);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1046303543}, header_15);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_15);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1300197747}, header_15);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1098572576"}, header_15);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1392761700"}, header_15);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2129131912"}, header_15);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(3, 26, 56, 13, 7, 2007)}, header_15);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_15);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_15);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1275917318"}, header_15);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{477020110}, header_15);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1762350596"}, header_15);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_36047934"}, header_15);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_936702837"}, header_15);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(23, 55, 28, 18, 9, 2002)}, header_15);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1691640701"}, header_15);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_464924279"}, header_15);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_686272368"}, header_15);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_663959924"}, header_15);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1511227822}, header_15);
  all_values.push_back(header_15);
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
