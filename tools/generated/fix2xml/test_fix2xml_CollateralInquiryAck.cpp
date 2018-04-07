#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralInquiryAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiryAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CollateralInquiryAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiryAck_0;
  set_field(msg, FIX::Account{"STRING_42289054"}, CollateralInquiryAck_0);
  set_field(msg, FIX::AccountType{2}, CollateralInquiryAck_0);
  set_field(msg, FIX::ClOrdID{"STRING_293296844"}, CollateralInquiryAck_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1566117002"}, CollateralInquiryAck_0);
  set_field(msg, FIX::CollInquiryID{"STRING_1227301572"}, CollateralInquiryAck_0);
  set_field(msg, FIX::CollInquiryResult{2}, CollateralInquiryAck_0);
  set_field(msg, FIX::CollInquiryStatus{1}, CollateralInquiryAck_0);
  set_field(msg, FIX::Currency{"CHF"}, CollateralInquiryAck_0);
  set_field(msg, FIX::EncodedText{"DATA_972631656"}, CollateralInquiryAck_0);
  set_field(msg, FIX::EncodedTextLen{303264221}, CollateralInquiryAck_0);
  set_field(msg, FIX::OrderID{"STRING_1212734148"}, CollateralInquiryAck_0);
  set_field(msg, FIX::QtyType{2}, CollateralInquiryAck_0);
  FIX::Quantity Quantity_7;
  Quantity_7.setString("6050135");
set_field(msg, Quantity_7, CollateralInquiryAck_0);
  set_field(msg, FIX::ResponseDestination{"STRING_2112955760"}, CollateralInquiryAck_0);
  set_field(msg, FIX::ResponseTransportType{0}, CollateralInquiryAck_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_1798250933"}, CollateralInquiryAck_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_474474467"}, CollateralInquiryAck_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1113092110"}, CollateralInquiryAck_0);
  set_field(msg, FIX::SettlSessID{"STRING_RTH"}, CollateralInquiryAck_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_2079132785"}, CollateralInquiryAck_0);
  set_field(msg, FIX::Text{"STRING_1998482072"}, CollateralInquiryAck_0);
  set_field(msg, FIX::TotNumReports{1755497402}, CollateralInquiryAck_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, CollateralInquiryAck_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_7"}, CollateralInquiryAck_0);
  all_values.push_back(CollateralInquiryAck_0);

  all_compo_names.insert("CollateralInquiryAck");

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_3;
    set_field(noCollInquiryQualifier_0_0, FIX::CollInquiryQualifier{0}, CollInqQualGrp_NoCollInquiryQualifier_3);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_3);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_1;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_4;
    set_field(noCollInquiryQualifier_0_1, FIX::CollInquiryQualifier{6}, CollInqQualGrp_NoCollInquiryQualifier_4);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_4);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoCollInquiryQualifier noCollInquiryQualifier_0_2;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_5;
    set_field(noCollInquiryQualifier_0_2, FIX::CollInquiryQualifier{7}, CollInqQualGrp_NoCollInquiryQualifier_5);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_5);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_2);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_5;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_1768635470"}, ExecCollGrp_NoExecs_5);
    all_values.push_back(ExecCollGrp_NoExecs_5);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_6;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_1219020397"}, ExecCollGrp_NoExecs_6);
    all_values.push_back(ExecCollGrp_NoExecs_6);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoExecs noExecs_0_2;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_7;
    set_field(noExecs_0_2, FIX::ExecID{"STRING_1716081979"}, ExecCollGrp_NoExecs_7);
    all_values.push_back(ExecCollGrp_NoExecs_7);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_2);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_5;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_5);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_795899903"}, FinancingDetails_5);
  set_field(msg, FIX::AgreementDesc{"STRING_580890488"}, FinancingDetails_5);
  set_field(msg, FIX::AgreementID{"STRING_1886480368"}, FinancingDetails_5);
  set_field(msg, FIX::DeliveryType{2}, FinancingDetails_5);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_579661738"}, FinancingDetails_5);
  FIX::MarginRatio MarginRatio_5;
  MarginRatio_5.setString("83.760000");
set_field(msg, MarginRatio_5, FinancingDetails_5);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_381018599"}, FinancingDetails_5);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_5);
  all_values.push_back(FinancingDetails_5);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CollateralInquiryAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_14;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_986032115"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1757867999}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_583327988"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{636799400}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_84858818"}, InstrumentLeg_14);
    FIX::LegContractMultiplier LegContractMultiplier_14;
    LegContractMultiplier_14.setString("16964200");
set_field(noLegs_0_0, LegContractMultiplier_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1085875573}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_16507955"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1547418523"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_693889327"}, InstrumentLeg_14);
    FIX::LegCouponRate LegCouponRate_14;
    LegCouponRate_14.setString("70.050000");
set_field(noLegs_0_0, LegCouponRate_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_457429025"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1999843096"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1566908522}, InstrumentLeg_14);
    FIX::LegFactor LegFactor_14;
    LegFactor_14.setString("3913017");
set_field(noLegs_0_0, LegFactor_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1620994918}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_638445271"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2107383771"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1535443584"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1276099023"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_755800027"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_2116334073"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1015095744"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_833554405"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'5'}, InstrumentLeg_14);
    FIX::LegOptionRatio LegOptionRatio_14;
    LegOptionRatio_14.setString("17267241");
set_field(noLegs_0_0, LegOptionRatio_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1214573004"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_193424401"}, InstrumentLeg_14);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_14;
    LegPriceUnitOfMeasureQty_14.setString("5659713");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegProduct{53121471}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1951292400}, InstrumentLeg_14);
    FIX::LegRatioQty LegRatioQty_14;
    LegRatioQty_14.setString("11492993");
set_field(noLegs_0_0, LegRatioQty_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_689920871"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_2036151218"}, InstrumentLeg_14);
    FIX::LegRepurchaseRate LegRepurchaseRate_14;
    LegRepurchaseRate_14.setString("58.100000");
set_field(noLegs_0_0, LegRepurchaseRate_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1775796444}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_2052659174"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_98170686"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_322202123"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_2001822531"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_555599711"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_712379302"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSide{'8'}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_407959159"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_14);
    FIX::LegStrikePrice LegStrikePrice_14;
    LegStrikePrice_14.setString("20289540");
set_field(noLegs_0_0, LegStrikePrice_14, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_770249447"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1161990364"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1416914014"}, InstrumentLeg_14);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_2046348471"}, InstrumentLeg_14);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_14;
    LegUnitOfMeasureQty_14.setString("19177903");
set_field(noLegs_0_0, LegUnitOfMeasureQty_14, InstrumentLeg_14);
    all_values.push_back(InstrumentLeg_14);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_28;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_913960567"}, LegSecAltIDGrp_NoLegSecurityAltID_28);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_603861148"}, LegSecAltIDGrp_NoLegSecurityAltID_28);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_28);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_29;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_1934276602"}, LegSecAltIDGrp_NoLegSecurityAltID_29);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_493201039"}, LegSecAltIDGrp_NoLegSecurityAltID_29);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_29);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_30;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1818434152"}, LegSecAltIDGrp_NoLegSecurityAltID_30);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_2127701003"}, LegSecAltIDGrp_NoLegSecurityAltID_30);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_30);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_15;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1059172410"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1871555624}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1931509756"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{60988122}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_413992847"}, InstrumentLeg_15);
    FIX::LegContractMultiplier LegContractMultiplier_15;
    LegContractMultiplier_15.setString("18201773");
set_field(noLegs_0_1, LegContractMultiplier_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{759223932}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_42305644"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1725352852"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_857394618"}, InstrumentLeg_15);
    FIX::LegCouponRate LegCouponRate_15;
    LegCouponRate_15.setString("77.670000");
set_field(noLegs_0_1, LegCouponRate_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1579691735"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_242996535"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1820953489}, InstrumentLeg_15);
    FIX::LegFactor LegFactor_15;
    LegFactor_15.setString("12086912");
set_field(noLegs_0_1, LegFactor_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1445086776}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1702423919"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1978940693"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_459593492"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_971854285"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1877805516"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_229900235"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_210135076"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_644282435"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'8'}, InstrumentLeg_15);
    FIX::LegOptionRatio LegOptionRatio_15;
    LegOptionRatio_15.setString("21444116");
set_field(noLegs_0_1, LegOptionRatio_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1137483474"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_504711887"}, InstrumentLeg_15);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_15;
    LegPriceUnitOfMeasureQty_15.setString("21246290");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegProduct{49172237}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegPutOrCall{228783863}, InstrumentLeg_15);
    FIX::LegRatioQty LegRatioQty_15;
    LegRatioQty_15.setString("19086551");
set_field(noLegs_0_1, LegRatioQty_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_110160359"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_642776711"}, InstrumentLeg_15);
    FIX::LegRepurchaseRate LegRepurchaseRate_15;
    LegRepurchaseRate_15.setString("88.200000");
set_field(noLegs_0_1, LegRepurchaseRate_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{869384291}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_685082355"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1159218024"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1726778910"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1049590122"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_591426112"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_992289592"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSide{'2'}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_834422647"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_15);
    FIX::LegStrikePrice LegStrikePrice_15;
    LegStrikePrice_15.setString("1320257");
set_field(noLegs_0_1, LegStrikePrice_15, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_220699704"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1019141834"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_591619267"}, InstrumentLeg_15);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1192553989"}, InstrumentLeg_15);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_15;
    LegUnitOfMeasureQty_15.setString("7494637");
set_field(noLegs_0_1, LegUnitOfMeasureQty_15, InstrumentLeg_15);
    all_values.push_back(InstrumentLeg_15);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_31;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1402689065"}, LegSecAltIDGrp_NoLegSecurityAltID_31);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1393746137"}, LegSecAltIDGrp_NoLegSecurityAltID_31);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_31);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_10;
  FIX::AttachmentPoint AttachmentPoint_10;
  AttachmentPoint_10.setString("8.850000");
set_field(msg, AttachmentPoint_10, Instrument_10);
  set_field(msg, FIX::CFICode{"STRING_1399617095"}, Instrument_10);
  set_field(msg, FIX::CPProgram{2}, Instrument_10);
  set_field(msg, FIX::CPRegType{"STRING_12509125"}, Instrument_10);
  FIX::CapPrice CapPrice_10;
  CapPrice_10.setString("13767624");
set_field(msg, CapPrice_10, Instrument_10);
  FIX::ContractMultiplier ContractMultiplier_10;
  ContractMultiplier_10.setString("4329182");
set_field(msg, ContractMultiplier_10, Instrument_10);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_10);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1137933974"}, Instrument_10);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_543078560"}, Instrument_10);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_884069699"}, Instrument_10);
  FIX::CouponRate CouponRate_10;
  CouponRate_10.setString("91.460000");
set_field(msg, CouponRate_10, Instrument_10);
  set_field(msg, FIX::CreditRating{"STRING_1412462851"}, Instrument_10);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1569152054"}, Instrument_10);
  FIX::DetachmentPoint DetachmentPoint_10;
  DetachmentPoint_10.setString("71.710000");
set_field(msg, DetachmentPoint_10, Instrument_10);
  set_field(msg, FIX::EncodedIssuer{"DATA_991758113"}, Instrument_10);
  set_field(msg, FIX::EncodedIssuerLen{471258529}, Instrument_10);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_174959635"}, Instrument_10);
  set_field(msg, FIX::EncodedSecurityDescLen{1984047705}, Instrument_10);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_10);
  FIX::Factor Factor_10;
  Factor_10.setString("10093822");
set_field(msg, Factor_10, Instrument_10);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_10);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_10);
  FIX::FloorPrice FloorPrice_10;
  FloorPrice_10.setString("11414080");
set_field(msg, FloorPrice_10, Instrument_10);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_10);
  set_field(msg, FIX::InstrRegistry{"STRING_509595049"}, Instrument_10);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_10);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1915577185"}, Instrument_10);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1259058751"}, Instrument_10);
  set_field(msg, FIX::Issuer{"STRING_407063180"}, Instrument_10);
  set_field(msg, FIX::ListMethod{0}, Instrument_10);
  set_field(msg, FIX::LocaleOfIssue{"STRING_505321241"}, Instrument_10);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_2062344065"}, Instrument_10);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_422916050"}, Instrument_10);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_889067205"}, Instrument_10);
  FIX::MinPriceIncrement MinPriceIncrement_10;
  MinPriceIncrement_10.setString("20748531");
set_field(msg, MinPriceIncrement_10, Instrument_10);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_10;
  MinPriceIncrementAmount_10.setString("17996785");
set_field(msg, MinPriceIncrementAmount_10, Instrument_10);
  set_field(msg, FIX::NTPositionLimit{1321985406}, Instrument_10);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_10;
  NotionalPercentageOutstanding_10.setString("25.310000");
set_field(msg, NotionalPercentageOutstanding_10, Instrument_10);
  set_field(msg, FIX::OptAttribute{'7'}, Instrument_10);
  FIX::OptPayoutAmount OptPayoutAmount_10;
  OptPayoutAmount_10.setString("18650639");
set_field(msg, OptPayoutAmount_10, Instrument_10);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_10);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_10;
  OriginalNotionalPercentageOutstanding_10.setString("80.040000");
set_field(msg, OriginalNotionalPercentageOutstanding_10, Instrument_10);
  set_field(msg, FIX::Pool{"STRING_1130043169"}, Instrument_10);
  set_field(msg, FIX::PositionLimit{474400637}, Instrument_10);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_10);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_2121801283"}, Instrument_10);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_10;
  PriceUnitOfMeasureQty_10.setString("9456591");
set_field(msg, PriceUnitOfMeasureQty_10, Instrument_10);
  set_field(msg, FIX::Product{4}, Instrument_10);
  set_field(msg, FIX::ProductComplex{"STRING_1958365340"}, Instrument_10);
  set_field(msg, FIX::PutOrCall{1}, Instrument_10);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_2129803444"}, Instrument_10);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_313205183"}, Instrument_10);
  FIX::RepurchaseRate RepurchaseRate_10;
  RepurchaseRate_10.setString("44.530000");
set_field(msg, RepurchaseRate_10, Instrument_10);
  set_field(msg, FIX::RepurchaseTerm{1123727854}, Instrument_10);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_10);
  set_field(msg, FIX::SecurityDesc{"STRING_1395959502"}, Instrument_10);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_709271532"}, Instrument_10);
  set_field(msg, FIX::SecurityGroup{"STRING_804321916"}, Instrument_10);
  set_field(msg, FIX::SecurityID{"STRING_507534606"}, Instrument_10);
  set_field(msg, FIX::SecurityIDSource{"STRING_L"}, Instrument_10);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_10);
  set_field(msg, FIX::SecuritySubType{"STRING_1012855847"}, Instrument_10);
  set_field(msg, FIX::SecurityType{"STRING_TBA"}, Instrument_10);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_10);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_10);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_958564672"}, Instrument_10);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2050215451"}, Instrument_10);
  set_field(msg, FIX::StrikeCurrency{"CHF"}, Instrument_10);
  FIX::StrikeMultiplier StrikeMultiplier_10;
  StrikeMultiplier_10.setString("6928606");
set_field(msg, StrikeMultiplier_10, Instrument_10);
  FIX::StrikePrice StrikePrice_10;
  StrikePrice_10.setString("7940051");
set_field(msg, StrikePrice_10, Instrument_10);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_10);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_10;
  StrikePriceBoundaryPrecision_10.setString("86.650000");
set_field(msg, StrikePriceBoundaryPrecision_10, Instrument_10);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_10);
  FIX::StrikeValue StrikeValue_10;
  StrikeValue_10.setString("5068764");
set_field(msg, StrikeValue_10, Instrument_10);
  set_field(msg, FIX::Symbol{"STRING_852766544"}, Instrument_10);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_10);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_10);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_10);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_10);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_10;
  UnitOfMeasureQty_10.setString("7009631");
set_field(msg, UnitOfMeasureQty_10, Instrument_10);
  set_field(msg, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_10);
  all_values.push_back(Instrument_10);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiryAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_22;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_22);
    FIX::ComplexEventPrice ComplexEventPrice_22;
    ComplexEventPrice_22.setString("9317517");
set_field(noComplexEvents_0_0, ComplexEventPrice_22, ComplexEvents_NoComplexEvents_22);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_22);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_22;
    ComplexEventPriceBoundaryPrecision_22.setString("34.870000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_22, ComplexEvents_NoComplexEvents_22);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_22);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_22);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_22;
    ComplexOptPayoutAmount_22.setString("13433380");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_22, ComplexEvents_NoComplexEvents_22);
    all_values.push_back(ComplexEvents_NoComplexEvents_22);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_48;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 14, 46, 8, 11, 2004)}, ComplexEventDates_NoComplexEventDates_48);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 43, 34, 15, 9, 2004)}, ComplexEventDates_NoComplexEventDates_48);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_48);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_87;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 50, 42)}, ComplexEventTimes_NoComplexEventTimes_87);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 16, 6)}, ComplexEventTimes_NoComplexEventTimes_87);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_87);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_88;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 45, 54)}, ComplexEventTimes_NoComplexEventTimes_88);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 7, 23)}, ComplexEventTimes_NoComplexEventTimes_88);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_88);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_89;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 30, 29)}, ComplexEventTimes_NoComplexEventTimes_89);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 39, 55)}, ComplexEventTimes_NoComplexEventTimes_89);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_89);
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
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_26;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_109554794"}, EvntGrp_NoEvents_26);
    FIX::EventPx EventPx_26;
    EventPx_26.setString("3462937");
set_field(noEvents_0_0, EventPx_26, EvntGrp_NoEvents_26);
    set_field(noEvents_0_0, FIX::EventText{"STRING_512751201"}, EvntGrp_NoEvents_26);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 42, 38, 22, 9, 2002)}, EvntGrp_NoEvents_26);
    set_field(noEvents_0_0, FIX::EventType{12}, EvntGrp_NoEvents_26);
    all_values.push_back(EvntGrp_NoEvents_26);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_27;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1885040574"}, EvntGrp_NoEvents_27);
    FIX::EventPx EventPx_27;
    EventPx_27.setString("5761670");
set_field(noEvents_0_1, EventPx_27, EvntGrp_NoEvents_27);
    set_field(noEvents_0_1, FIX::EventText{"STRING_743047549"}, EvntGrp_NoEvents_27);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(18, 27, 34, 13, 1, 2004)}, EvntGrp_NoEvents_27);
    set_field(noEvents_0_1, FIX::EventType{1}, EvntGrp_NoEvents_27);
    all_values.push_back(EvntGrp_NoEvents_27);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiryAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_18;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_661291526"}, InstrumentParties_NoInstrumentParties_18);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_18);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{425523612}, InstrumentParties_NoInstrumentParties_18);
    all_values.push_back(InstrumentParties_NoInstrumentParties_18);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1213505671"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{293292344}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_39);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_942112529"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{114403425}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_40);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_19;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_402847138"}, InstrumentParties_NoInstrumentParties_19);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_19);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{627154626}, InstrumentParties_NoInstrumentParties_19);
    all_values.push_back(InstrumentParties_NoInstrumentParties_19);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1097360648"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1111152048}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_41);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_17;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_119857946"}, SecAltIDGrp_NoSecurityAltID_17);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_871447633"}, SecAltIDGrp_NoSecurityAltID_17);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_17);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_18;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1862578044"}, SecAltIDGrp_NoSecurityAltID_18);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_65145790"}, SecAltIDGrp_NoSecurityAltID_18);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_18);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_19;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_609004559"}, SecAltIDGrp_NoSecurityAltID_19);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_291261465"}, SecAltIDGrp_NoSecurityAltID_19);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_19);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_20;
  set_field(msg, FIX::SecurityXML{"XMLDATA_808193339"}, SecurityXML_20);
  set_field(msg, FIX::SecurityXMLLen{1911150459}, SecurityXML_20);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_287282131"}, SecurityXML_20);
  all_values.push_back(SecurityXML_20);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_22;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1318721526"}, Parties_NoPartyIDs_22);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_22);
    set_field(noPartyIDs_0_0, FIX::PartyRole{44}, Parties_NoPartyIDs_22);
    all_values.push_back(Parties_NoPartyIDs_22);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_46;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1924344637"}, PtysSubGrp_NoPartySubIDs_46);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_46);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_46);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_47;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_836347378"}, PtysSubGrp_NoPartySubIDs_47);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_47);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_47);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_48;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1078948934"}, PtysSubGrp_NoPartySubIDs_48);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_48);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_48);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_23;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_587384942"}, Parties_NoPartyIDs_23);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_23);
    set_field(noPartyIDs_0_1, FIX::PartyRole{3}, Parties_NoPartyIDs_23);
    all_values.push_back(Parties_NoPartyIDs_23);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_49;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1775088416"}, PtysSubGrp_NoPartySubIDs_49);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_49);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_49);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_50;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1328942993"}, PtysSubGrp_NoPartySubIDs_50);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_50);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_50);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_51;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_151174305"}, PtysSubGrp_NoPartySubIDs_51);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_51);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_51);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_24;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_63610645"}, Parties_NoPartyIDs_24);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_24);
    set_field(noPartyIDs_0_2, FIX::PartyRole{49}, Parties_NoPartyIDs_24);
    all_values.push_back(Parties_NoPartyIDs_24);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_52;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_336178042"}, PtysSubGrp_NoPartySubIDs_52);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_52);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_52);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_53;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_69966506"}, PtysSubGrp_NoPartySubIDs_53);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_53);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_53);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_4;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_357248637"}, TrdCollGrp_NoTrades_4);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_109602220"}, TrdCollGrp_NoTrades_4);
    all_values.push_back(TrdCollGrp_NoTrades_4);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_5;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_707968275"}, TrdCollGrp_NoTrades_5);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_1701428274"}, TrdCollGrp_NoTrades_5);
    all_values.push_back(TrdCollGrp_NoTrades_5);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoTrades noTrades_0_2;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_6;
    set_field(noTrades_0_2, FIX::SecondaryTradeReportID{"STRING_656347258"}, TrdCollGrp_NoTrades_6);
    set_field(noTrades_0_2, FIX::TradeReportID{"STRING_883024127"}, TrdCollGrp_NoTrades_6);
    all_values.push_back(TrdCollGrp_NoTrades_6);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_18;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1309772580"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1719371505}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_852168534"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{241237866}, UnderlyingInstrument_18);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_18;
    UnderlyingAdjustedQuantity_18.setString("6901500");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_18, UnderlyingInstrument_18);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_18;
    UnderlyingAllocationPercent_18.setString("34.770000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_18, UnderlyingInstrument_18);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_18;
    UnderlyingAttachmentPoint_18.setString("91.440000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_603041044"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_2141341844"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1241083912"}, UnderlyingInstrument_18);
    FIX::UnderlyingCapValue UnderlyingCapValue_18;
    UnderlyingCapValue_18.setString("18043383");
set_field(noUnderlyings_0_0, UnderlyingCapValue_18, UnderlyingInstrument_18);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_18;
    UnderlyingCashAmount_18.setString("13228011");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_18);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_18;
    UnderlyingContractMultiplier_18.setString("19555126");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1615412584}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1593792339"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_79061258"}, UnderlyingInstrument_18);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_18;
    UnderlyingCouponRate_18.setString("79.630000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1372497380"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_18);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_18;
    UnderlyingCurrentValue_18.setString("14424638");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_18, UnderlyingInstrument_18);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_18;
    UnderlyingDetachmentPoint_18.setString("6.820000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_18, UnderlyingInstrument_18);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_18;
    UnderlyingDirtyPrice_18.setString("17942982");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_18, UnderlyingInstrument_18);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_18;
    UnderlyingEndPrice_18.setString("17997125");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_18, UnderlyingInstrument_18);
    FIX::UnderlyingEndValue UnderlyingEndValue_18;
    UnderlyingEndValue_18.setString("16692129");
set_field(noUnderlyings_0_0, UnderlyingEndValue_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{354782926}, UnderlyingInstrument_18);
    FIX::UnderlyingFXRate UnderlyingFXRate_18;
    UnderlyingFXRate_18.setString("13536571");
set_field(noUnderlyings_0_0, UnderlyingFXRate_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_18);
    FIX::UnderlyingFactor UnderlyingFactor_18;
    UnderlyingFactor_18.setString("12378070");
set_field(noUnderlyings_0_0, UnderlyingFactor_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{684462764}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1487849092"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_809694911"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1536631299"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1729086958"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1499844921"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_828701128"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1195082454"}, UnderlyingInstrument_18);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_18;
    UnderlyingNotionalPercentageOutstanding_18.setString("59.650000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_18);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_18;
    UnderlyingOriginalNotionalPercentageOutstanding_18.setString("27.190000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1759740666"}, UnderlyingInstrument_18);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_18;
    UnderlyingPriceUnitOfMeasureQty_18.setString("21453605");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1818864413}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1567769672}, UnderlyingInstrument_18);
    FIX::UnderlyingPx UnderlyingPx_18;
    UnderlyingPx_18.setString("16132894");
set_field(noUnderlyings_0_0, UnderlyingPx_18, UnderlyingInstrument_18);
    FIX::UnderlyingQty UnderlyingQty_18;
    UnderlyingQty_18.setString("12651731");
set_field(noUnderlyings_0_0, UnderlyingQty_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1646830931"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_97793765"}, UnderlyingInstrument_18);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_18;
    UnderlyingRepurchaseRate_18.setString("68.360000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{2062070231}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_355361666"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1932650722"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1474197265"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_2176317"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1584879597"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_995926519"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_356959243"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_791053099"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1174003032"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_18);
    FIX::UnderlyingStartValue UnderlyingStartValue_18;
    UnderlyingStartValue_18.setString("14755158");
set_field(noUnderlyings_0_0, UnderlyingStartValue_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_514368476"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_18);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_18;
    UnderlyingStrikePrice_18.setString("959717");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_18, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1756822480"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1693364642"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1291054241"}, UnderlyingInstrument_18);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1712224797"}, UnderlyingInstrument_18);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_18;
    UnderlyingUnitOfMeasureQty_18.setString("3684403");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_18, UnderlyingInstrument_18);
    all_values.push_back(UnderlyingInstrument_18);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_40;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1324481815"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_366317185"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_40);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_41;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1251117725"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_744767840"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_41);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_42;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1979606636"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_368807181"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_42);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_35;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_2077400401"}, UnderlyingStipulations_NoUnderlyingStips_35);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_858994017"}, UnderlyingStipulations_NoUnderlyingStips_35);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_35);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_36;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_158701706"}, UnderlyingStipulations_NoUnderlyingStips_36);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_285278420"}, UnderlyingStipulations_NoUnderlyingStips_36);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_36);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_37;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_644161091"}, UnderlyingStipulations_NoUnderlyingStips_37);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1632898972"}, UnderlyingStipulations_NoUnderlyingStips_37);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_37);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_38;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_81557041"}, UndlyInstrumentParties_NoUndlyInstrumentParties_38);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_38);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{644413980}, UndlyInstrumentParties_NoUndlyInstrumentParties_38);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_38);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1655344875"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{91696628}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_67);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_200642355"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{22229704}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_68);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_348674188"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1065305870}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_69);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_39;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_118201491"}, UndlyInstrumentParties_NoUndlyInstrumentParties_39);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_39);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{611186864}, UndlyInstrumentParties_NoUndlyInstrumentParties_39);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_39);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1670237818"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{979627183}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_70);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_841509045"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{847235985}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_71);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1345944369"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{2092626770}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_72);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_40;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1592003825"}, UndlyInstrumentParties_NoUndlyInstrumentParties_40);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_40);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{313950304}, UndlyInstrumentParties_NoUndlyInstrumentParties_40);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_40);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1107984110"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1172944321}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_73);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1994820655"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1393262530}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_74);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_19;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1817105413"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1480235979}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1680717267"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1898662454}, UnderlyingInstrument_19);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_19;
    UnderlyingAdjustedQuantity_19.setString("19615778");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_19, UnderlyingInstrument_19);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_19;
    UnderlyingAllocationPercent_19.setString("75.990000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_19, UnderlyingInstrument_19);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_19;
    UnderlyingAttachmentPoint_19.setString("89.460000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1469439050"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_269344228"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_824431301"}, UnderlyingInstrument_19);
    FIX::UnderlyingCapValue UnderlyingCapValue_19;
    UnderlyingCapValue_19.setString("14916687");
set_field(noUnderlyings_0_1, UnderlyingCapValue_19, UnderlyingInstrument_19);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_19;
    UnderlyingCashAmount_19.setString("6180184");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_19);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_19;
    UnderlyingContractMultiplier_19.setString("16098702");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{576031436}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_353440388"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_871642329"}, UnderlyingInstrument_19);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_19;
    UnderlyingCouponRate_19.setString("56.060000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1333067571"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_19);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_19;
    UnderlyingCurrentValue_19.setString("5315282");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_19, UnderlyingInstrument_19);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_19;
    UnderlyingDetachmentPoint_19.setString("44.970000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_19, UnderlyingInstrument_19);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_19;
    UnderlyingDirtyPrice_19.setString("3905417");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_19, UnderlyingInstrument_19);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_19;
    UnderlyingEndPrice_19.setString("17095956");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_19, UnderlyingInstrument_19);
    FIX::UnderlyingEndValue UnderlyingEndValue_19;
    UnderlyingEndValue_19.setString("19722448");
set_field(noUnderlyings_0_1, UnderlyingEndValue_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{79177070}, UnderlyingInstrument_19);
    FIX::UnderlyingFXRate UnderlyingFXRate_19;
    UnderlyingFXRate_19.setString("6700961");
set_field(noUnderlyings_0_1, UnderlyingFXRate_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_19);
    FIX::UnderlyingFactor UnderlyingFactor_19;
    UnderlyingFactor_19.setString("20739977");
set_field(noUnderlyings_0_1, UnderlyingFactor_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{2063358642}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_667327239"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1406750056"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1596592262"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_418506045"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1220844230"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1774239861"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1042294991"}, UnderlyingInstrument_19);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_19;
    UnderlyingNotionalPercentageOutstanding_19.setString("96.320000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_19);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_19;
    UnderlyingOriginalNotionalPercentageOutstanding_19.setString("62.930000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2034468386"}, UnderlyingInstrument_19);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_19;
    UnderlyingPriceUnitOfMeasureQty_19.setString("5141188");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1608979816}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1496854983}, UnderlyingInstrument_19);
    FIX::UnderlyingPx UnderlyingPx_19;
    UnderlyingPx_19.setString("10901502");
set_field(noUnderlyings_0_1, UnderlyingPx_19, UnderlyingInstrument_19);
    FIX::UnderlyingQty UnderlyingQty_19;
    UnderlyingQty_19.setString("19624202");
set_field(noUnderlyings_0_1, UnderlyingQty_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_221013665"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1188935900"}, UnderlyingInstrument_19);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_19;
    UnderlyingRepurchaseRate_19.setString("41.280000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1934165039}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_2134957492"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1679532420"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1444975888"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_378015614"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1241644422"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1269737041"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_457192684"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1911740534"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_119958868"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_19);
    FIX::UnderlyingStartValue UnderlyingStartValue_19;
    UnderlyingStartValue_19.setString("18276155");
set_field(noUnderlyings_0_1, UnderlyingStartValue_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_787286107"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_19);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_19;
    UnderlyingStrikePrice_19.setString("12057921");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_19, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_863817399"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_903480356"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_100603496"}, UnderlyingInstrument_19);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1406617032"}, UnderlyingInstrument_19);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_19;
    UnderlyingUnitOfMeasureQty_19.setString("7995807");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_19, UnderlyingInstrument_19);
    all_values.push_back(UnderlyingInstrument_19);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_43;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1293601770"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1313699655"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_43);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_44;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1428825958"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_642973106"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_44);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_38;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1243762514"}, UnderlyingStipulations_NoUnderlyingStips_38);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_863986771"}, UnderlyingStipulations_NoUnderlyingStips_38);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_38);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_39;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1445302201"}, UnderlyingStipulations_NoUnderlyingStips_39);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_244282994"}, UnderlyingStipulations_NoUnderlyingStips_39);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_39);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_40;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_650668162"}, UnderlyingStipulations_NoUnderlyingStips_40);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_1432776046"}, UnderlyingStipulations_NoUnderlyingStips_40);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_40);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_41;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2095644051"}, UndlyInstrumentParties_NoUndlyInstrumentParties_41);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_41);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1017976189}, UndlyInstrumentParties_NoUndlyInstrumentParties_41);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_41);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_120500696"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{782233075}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_75);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1337856312"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{504207457}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_76);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_462364955"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{2125142420}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_77);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralInquiryAck::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_20;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_147180626"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1739089098}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1183450925"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1010998025}, UnderlyingInstrument_20);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_20;
    UnderlyingAdjustedQuantity_20.setString("4950858");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_20, UnderlyingInstrument_20);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_20;
    UnderlyingAllocationPercent_20.setString("44.210000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_20, UnderlyingInstrument_20);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_20;
    UnderlyingAttachmentPoint_20.setString("14.090000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1294666603"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1103900563"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1563733180"}, UnderlyingInstrument_20);
    FIX::UnderlyingCapValue UnderlyingCapValue_20;
    UnderlyingCapValue_20.setString("4608826");
set_field(noUnderlyings_0_2, UnderlyingCapValue_20, UnderlyingInstrument_20);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_20;
    UnderlyingCashAmount_20.setString("3852428");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_20);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_20;
    UnderlyingContractMultiplier_20.setString("7172489");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1629005387}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_923209409"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_15067465"}, UnderlyingInstrument_20);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_20;
    UnderlyingCouponRate_20.setString("83.820000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1573877571"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_20);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_20;
    UnderlyingCurrentValue_20.setString("15220379");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_20, UnderlyingInstrument_20);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_20;
    UnderlyingDetachmentPoint_20.setString("15.230000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_20, UnderlyingInstrument_20);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_20;
    UnderlyingDirtyPrice_20.setString("5201126");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_20, UnderlyingInstrument_20);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_20;
    UnderlyingEndPrice_20.setString("5924517");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_20, UnderlyingInstrument_20);
    FIX::UnderlyingEndValue UnderlyingEndValue_20;
    UnderlyingEndValue_20.setString("12316522");
set_field(noUnderlyings_0_2, UnderlyingEndValue_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1302345765}, UnderlyingInstrument_20);
    FIX::UnderlyingFXRate UnderlyingFXRate_20;
    UnderlyingFXRate_20.setString("19303080");
set_field(noUnderlyings_0_2, UnderlyingFXRate_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_20);
    FIX::UnderlyingFactor UnderlyingFactor_20;
    UnderlyingFactor_20.setString("17647107");
set_field(noUnderlyings_0_2, UnderlyingFactor_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{1907966855}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1883040302"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1356316170"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_943934132"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_746554679"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1851401976"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_80504906"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1016686089"}, UnderlyingInstrument_20);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_20;
    UnderlyingNotionalPercentageOutstanding_20.setString("49.320000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_20);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_20;
    UnderlyingOriginalNotionalPercentageOutstanding_20.setString("56.210000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1459467542"}, UnderlyingInstrument_20);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_20;
    UnderlyingPriceUnitOfMeasureQty_20.setString("15696483");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{492158259}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{29232806}, UnderlyingInstrument_20);
    FIX::UnderlyingPx UnderlyingPx_20;
    UnderlyingPx_20.setString("10511700");
set_field(noUnderlyings_0_2, UnderlyingPx_20, UnderlyingInstrument_20);
    FIX::UnderlyingQty UnderlyingQty_20;
    UnderlyingQty_20.setString("14153676");
set_field(noUnderlyings_0_2, UnderlyingQty_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_44300271"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_776974815"}, UnderlyingInstrument_20);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_20;
    UnderlyingRepurchaseRate_20.setString("15.910000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1492143782}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_279111316"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_216315918"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_455811657"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_799224006"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_808767689"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1687463876"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_2101569771"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_591592124"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_1275839904"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_20);
    FIX::UnderlyingStartValue UnderlyingStartValue_20;
    UnderlyingStartValue_20.setString("3520753");
set_field(noUnderlyings_0_2, UnderlyingStartValue_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1011396558"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_20);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_20;
    UnderlyingStrikePrice_20.setString("17579512");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_20, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_631547695"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1376514370"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_627153678"}, UnderlyingInstrument_20);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1630132627"}, UnderlyingInstrument_20);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_20;
    UnderlyingUnitOfMeasureQty_20.setString("4134361");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_20, UnderlyingInstrument_20);
    all_values.push_back(UnderlyingInstrument_20);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_45;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_942116521"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1983084533"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_45);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_46;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1552247558"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_971349327"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_46);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_47;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_886770967"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_820131578"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_47);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_41;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_1663745782"}, UnderlyingStipulations_NoUnderlyingStips_41);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1661893170"}, UnderlyingStipulations_NoUnderlyingStips_41);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_41);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_42;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1942857099"}, UndlyInstrumentParties_NoUndlyInstrumentParties_42);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_42);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{816121389}, UndlyInstrumentParties_NoUndlyInstrumentParties_42);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_42);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_539493129"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{356101617}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_78);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiryAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_548683581"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1131085253}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_79);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
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
