#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::CollateralInquiry msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiry_0;
  set_field(msg, FIX::Account{"STRING_1945878678"}, CollateralInquiry_0);
  set_field(msg, FIX::AccountType{8}, CollateralInquiry_0);
  FIX::AccruedInterestAmt AccruedInterestAmt_4;
  AccruedInterestAmt_4.setString("6697687");
set_field(msg, AccruedInterestAmt_4, CollateralInquiry_0);
  FIX::CashOutstanding CashOutstanding_1;
  CashOutstanding_1.setString("1935802");
set_field(msg, CashOutstanding_1, CollateralInquiry_0);
  set_field(msg, FIX::ClOrdID{"STRING_586426017"}, CollateralInquiry_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_49992003"}, CollateralInquiry_0);
  set_field(msg, FIX::CollInquiryID{"STRING_274821387"}, CollateralInquiry_0);
  set_field(msg, FIX::Currency{"GBP"}, CollateralInquiry_0);
  set_field(msg, FIX::EncodedText{"DATA_1621838083"}, CollateralInquiry_0);
  set_field(msg, FIX::EncodedTextLen{596795548}, CollateralInquiry_0);
  FIX::EndAccruedInterestAmt EndAccruedInterestAmt_4;
  EndAccruedInterestAmt_4.setString("10501258");
set_field(msg, EndAccruedInterestAmt_4, CollateralInquiry_0);
  FIX::EndCash EndCash_4;
  EndCash_4.setString("17552330");
set_field(msg, EndCash_4, CollateralInquiry_0);
  FIX::MarginExcess MarginExcess_1;
  MarginExcess_1.setString("12156776");
set_field(msg, MarginExcess_1, CollateralInquiry_0);
  set_field(msg, FIX::OrderID{"STRING_12584283"}, CollateralInquiry_0);
  FIX::Price Price_4;
  Price_4.setString("14498946");
set_field(msg, Price_4, CollateralInquiry_0);
  set_field(msg, FIX::PriceType{3}, CollateralInquiry_0);
  set_field(msg, FIX::QtyType{2}, CollateralInquiry_0);
  FIX::Quantity Quantity_6;
  Quantity_6.setString("1915832");
set_field(msg, Quantity_6, CollateralInquiry_0);
  set_field(msg, FIX::ResponseDestination{"STRING_373346454"}, CollateralInquiry_0);
  set_field(msg, FIX::ResponseTransportType{1}, CollateralInquiry_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_789469067"}, CollateralInquiry_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_978446843"}, CollateralInquiry_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_620927689"}, CollateralInquiry_0);
  set_field(msg, FIX::SettlSessID{"STRING_ETH"}, CollateralInquiry_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_1363081453"}, CollateralInquiry_0);
  set_field(msg, FIX::Side{'5'}, CollateralInquiry_0);
  FIX::StartCash StartCash_4;
  StartCash_4.setString("21231283");
set_field(msg, StartCash_4, CollateralInquiry_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, CollateralInquiry_0);
  set_field(msg, FIX::Text{"STRING_1883102580"}, CollateralInquiry_0);
  FIX::TotalNetValue TotalNetValue_1;
  TotalNetValue_1.setString("2852954");
set_field(msg, TotalNetValue_1, CollateralInquiry_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, CollateralInquiry_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_7"}, CollateralInquiry_0);
  all_values.push_back(CollateralInquiry_0);

  all_compo_names.insert("CollateralInquiry");

  // CollInqQualGrp
  // Group CollInqQualGrp.NoCollInquiryQualifier
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_0;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_0;
    set_field(noCollInquiryQualifier_0_0, FIX::CollInquiryQualifier{7}, CollInqQualGrp_NoCollInquiryQualifier_0);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_0);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_1;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_1;
    set_field(noCollInquiryQualifier_0_1, FIX::CollInquiryQualifier{4}, CollInqQualGrp_NoCollInquiryQualifier_1);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_1);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoCollInquiryQualifier noCollInquiryQualifier_0_2;
    // CollInqQualGrp.NoCollInquiryQualifier
    multiset<string> CollInqQualGrp_NoCollInquiryQualifier_2;
    set_field(noCollInquiryQualifier_0_2, FIX::CollInquiryQualifier{2}, CollInqQualGrp_NoCollInquiryQualifier_2);
    all_values.push_back(CollInqQualGrp_NoCollInquiryQualifier_2);
    all_compo_names.insert("...NoCollInquiryQualifier");

    msg.addGroup(noCollInquiryQualifier_0_2);
  }
  // ExecCollGrp
  // Group ExecCollGrp.NoExecs
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_0;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_3;
    set_field(noExecs_0_0, FIX::ExecID{"STRING_1346531319"}, ExecCollGrp_NoExecs_3);
    all_values.push_back(ExecCollGrp_NoExecs_3);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoExecs noExecs_0_1;
    // ExecCollGrp.NoExecs
    multiset<string> ExecCollGrp_NoExecs_4;
    set_field(noExecs_0_1, FIX::ExecID{"STRING_2039736934"}, ExecCollGrp_NoExecs_4);
    all_values.push_back(ExecCollGrp_NoExecs_4);
    all_compo_names.insert("...NoExecs");

    msg.addGroup(noExecs_0_1);
  }
  // FinancingDetails
  multiset<string> FinancingDetails_4;
  set_field(msg, FIX::AgreementCurrency{"EUR"}, FinancingDetails_4);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_942379165"}, FinancingDetails_4);
  set_field(msg, FIX::AgreementDesc{"STRING_445980819"}, FinancingDetails_4);
  set_field(msg, FIX::AgreementID{"STRING_1011520824"}, FinancingDetails_4);
  set_field(msg, FIX::DeliveryType{0}, FinancingDetails_4);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_1895875456"}, FinancingDetails_4);
  FIX::MarginRatio MarginRatio_4;
  MarginRatio_4.setString("13.460000");
set_field(msg, MarginRatio_4, FinancingDetails_4);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1672590126"}, FinancingDetails_4);
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
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1955340638"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{729444149}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1239870996"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{428784679}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1377720723"}, InstrumentLeg_12);
    FIX::LegContractMultiplier LegContractMultiplier_12;
    LegContractMultiplier_12.setString("4554688");
set_field(noLegs_0_0, LegContractMultiplier_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1488754204}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1353365431"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1552549113"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1224373136"}, InstrumentLeg_12);
    FIX::LegCouponRate LegCouponRate_12;
    LegCouponRate_12.setString("8.930000");
set_field(noLegs_0_0, LegCouponRate_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_300540806"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1389596373"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{964869784}, InstrumentLeg_12);
    FIX::LegFactor LegFactor_12;
    LegFactor_12.setString("14512977");
set_field(noLegs_0_0, LegFactor_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{605989679}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_163917455"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1343551044"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1444221069"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_2107244322"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_138446561"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1890201888"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_971281498"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1093410009"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_12);
    FIX::LegOptionRatio LegOptionRatio_12;
    LegOptionRatio_12.setString("8593591");
set_field(noLegs_0_0, LegOptionRatio_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_618516488"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1578568778"}, InstrumentLeg_12);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_12;
    LegPriceUnitOfMeasureQty_12.setString("11207833");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegProduct{426373478}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegPutOrCall{160529279}, InstrumentLeg_12);
    FIX::LegRatioQty LegRatioQty_12;
    LegRatioQty_12.setString("2131706");
set_field(noLegs_0_0, LegRatioQty_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_855158157"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1538250003"}, InstrumentLeg_12);
    FIX::LegRepurchaseRate LegRepurchaseRate_12;
    LegRepurchaseRate_12.setString("95.000000");
set_field(noLegs_0_0, LegRepurchaseRate_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{196428713}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_744131786"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_73704965"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1420801850"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_235309032"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_374245772"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_74726654"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSide{'6'}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1763842145"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_12);
    FIX::LegStrikePrice LegStrikePrice_12;
    LegStrikePrice_12.setString("2223481");
set_field(noLegs_0_0, LegStrikePrice_12, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1203513894"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1328915687"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1666569246"}, InstrumentLeg_12);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1163274568"}, InstrumentLeg_12);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_12;
    LegUnitOfMeasureQty_12.setString("14673622");
set_field(noLegs_0_0, LegUnitOfMeasureQty_12, InstrumentLeg_12);
    all_values.push_back(InstrumentLeg_12);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_23;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2134556067"}, LegSecAltIDGrp_NoLegSecurityAltID_23);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_413288610"}, LegSecAltIDGrp_NoLegSecurityAltID_23);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_23);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_24;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_900397535"}, LegSecAltIDGrp_NoLegSecurityAltID_24);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_846431616"}, LegSecAltIDGrp_NoLegSecurityAltID_24);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_24);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_13;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1031805098"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{331482666}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1967214966"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1458178576}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_492011945"}, InstrumentLeg_13);
    FIX::LegContractMultiplier LegContractMultiplier_13;
    LegContractMultiplier_13.setString("329020");
set_field(noLegs_0_1, LegContractMultiplier_13, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{165853086}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_2030261948"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_701541517"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_362281799"}, InstrumentLeg_13);
    FIX::LegCouponRate LegCouponRate_13;
    LegCouponRate_13.setString("0.870000");
set_field(noLegs_0_1, LegCouponRate_13, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_775246482"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1149492254"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1857810303}, InstrumentLeg_13);
    FIX::LegFactor LegFactor_13;
    LegFactor_13.setString("15437696");
set_field(noLegs_0_1, LegFactor_13, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{765850752}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_749923094"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1529134294"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_988198929"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1953436988"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_710566334"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_507284527"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_969227908"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_30444935"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_13);
    FIX::LegOptionRatio LegOptionRatio_13;
    LegOptionRatio_13.setString("9563003");
set_field(noLegs_0_1, LegOptionRatio_13, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_443733545"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_669485901"}, InstrumentLeg_13);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_13;
    LegPriceUnitOfMeasureQty_13.setString("18027319");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_13, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegProduct{1475538644}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1000968567}, InstrumentLeg_13);
    FIX::LegRatioQty LegRatioQty_13;
    LegRatioQty_13.setString("16224632");
set_field(noLegs_0_1, LegRatioQty_13, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_786233572"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1492980512"}, InstrumentLeg_13);
    FIX::LegRepurchaseRate LegRepurchaseRate_13;
    LegRepurchaseRate_13.setString("52.780000");
set_field(noLegs_0_1, LegRepurchaseRate_13, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{952086658}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1375758813"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_209423147"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1314368458"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_2002668900"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_984669629"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_949968459"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegSide{'7'}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_2134161884"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_13);
    FIX::LegStrikePrice LegStrikePrice_13;
    LegStrikePrice_13.setString("7525289");
set_field(noLegs_0_1, LegStrikePrice_13, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1410218209"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1642824669"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1740727917"}, InstrumentLeg_13);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1216171549"}, InstrumentLeg_13);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_13;
    LegUnitOfMeasureQty_13.setString("2059073");
set_field(noLegs_0_1, LegUnitOfMeasureQty_13, InstrumentLeg_13);
    all_values.push_back(InstrumentLeg_13);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_25;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_37915809"}, LegSecAltIDGrp_NoLegSecurityAltID_25);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_236352290"}, LegSecAltIDGrp_NoLegSecurityAltID_25);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_25);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_26;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_2017100809"}, LegSecAltIDGrp_NoLegSecurityAltID_26);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_994216137"}, LegSecAltIDGrp_NoLegSecurityAltID_26);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_26);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_27;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_680085835"}, LegSecAltIDGrp_NoLegSecurityAltID_27);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_539103062"}, LegSecAltIDGrp_NoLegSecurityAltID_27);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_27);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_9;
  FIX::AttachmentPoint AttachmentPoint_9;
  AttachmentPoint_9.setString("44.320000");
set_field(msg, AttachmentPoint_9, Instrument_9);
  set_field(msg, FIX::CFICode{"STRING_8140831"}, Instrument_9);
  set_field(msg, FIX::CPProgram{99}, Instrument_9);
  set_field(msg, FIX::CPRegType{"STRING_124444046"}, Instrument_9);
  FIX::CapPrice CapPrice_9;
  CapPrice_9.setString("7943744");
set_field(msg, CapPrice_9, Instrument_9);
  FIX::ContractMultiplier ContractMultiplier_9;
  ContractMultiplier_9.setString("8855684");
set_field(msg, ContractMultiplier_9, Instrument_9);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_9);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1746461062"}, Instrument_9);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_113843659"}, Instrument_9);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1989232471"}, Instrument_9);
  FIX::CouponRate CouponRate_9;
  CouponRate_9.setString("58.720000");
set_field(msg, CouponRate_9, Instrument_9);
  set_field(msg, FIX::CreditRating{"STRING_2116512559"}, Instrument_9);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_826418452"}, Instrument_9);
  FIX::DetachmentPoint DetachmentPoint_9;
  DetachmentPoint_9.setString("43.320000");
set_field(msg, DetachmentPoint_9, Instrument_9);
  set_field(msg, FIX::EncodedIssuer{"DATA_686433282"}, Instrument_9);
  set_field(msg, FIX::EncodedIssuerLen{813096688}, Instrument_9);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_376125799"}, Instrument_9);
  set_field(msg, FIX::EncodedSecurityDescLen{800123656}, Instrument_9);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_9);
  FIX::Factor Factor_9;
  Factor_9.setString("17863440");
set_field(msg, Factor_9, Instrument_9);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_9);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_9);
  FIX::FloorPrice FloorPrice_9;
  FloorPrice_9.setString("8550319");
set_field(msg, FloorPrice_9, Instrument_9);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_9);
  set_field(msg, FIX::InstrRegistry{"STRING_1259398741"}, Instrument_9);
  set_field(msg, FIX::InstrmtAssignmentMethod{'8'}, Instrument_9);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_737724322"}, Instrument_9);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1129015903"}, Instrument_9);
  set_field(msg, FIX::Issuer{"STRING_1887163855"}, Instrument_9);
  set_field(msg, FIX::ListMethod{0}, Instrument_9);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1668118965"}, Instrument_9);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_389144640"}, Instrument_9);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1425950989"}, Instrument_9);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1060706947"}, Instrument_9);
  FIX::MinPriceIncrement MinPriceIncrement_9;
  MinPriceIncrement_9.setString("5135886");
set_field(msg, MinPriceIncrement_9, Instrument_9);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_9;
  MinPriceIncrementAmount_9.setString("728417");
set_field(msg, MinPriceIncrementAmount_9, Instrument_9);
  set_field(msg, FIX::NTPositionLimit{1946275441}, Instrument_9);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_9;
  NotionalPercentageOutstanding_9.setString("43.620000");
set_field(msg, NotionalPercentageOutstanding_9, Instrument_9);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_9);
  FIX::OptPayoutAmount OptPayoutAmount_9;
  OptPayoutAmount_9.setString("20601191");
set_field(msg, OptPayoutAmount_9, Instrument_9);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_9);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_9;
  OriginalNotionalPercentageOutstanding_9.setString("50.320000");
set_field(msg, OriginalNotionalPercentageOutstanding_9, Instrument_9);
  set_field(msg, FIX::Pool{"STRING_2029148011"}, Instrument_9);
  set_field(msg, FIX::PositionLimit{814081637}, Instrument_9);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_9);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_568097645"}, Instrument_9);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_9;
  PriceUnitOfMeasureQty_9.setString("16271783");
set_field(msg, PriceUnitOfMeasureQty_9, Instrument_9);
  set_field(msg, FIX::Product{6}, Instrument_9);
  set_field(msg, FIX::ProductComplex{"STRING_1368221301"}, Instrument_9);
  set_field(msg, FIX::PutOrCall{0}, Instrument_9);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_315981875"}, Instrument_9);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1663685979"}, Instrument_9);
  FIX::RepurchaseRate RepurchaseRate_9;
  RepurchaseRate_9.setString("66.520000");
set_field(msg, RepurchaseRate_9, Instrument_9);
  set_field(msg, FIX::RepurchaseTerm{1171013784}, Instrument_9);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_9);
  set_field(msg, FIX::SecurityDesc{"STRING_1316105393"}, Instrument_9);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_2063961503"}, Instrument_9);
  set_field(msg, FIX::SecurityGroup{"STRING_755298686"}, Instrument_9);
  set_field(msg, FIX::SecurityID{"STRING_297637648"}, Instrument_9);
  set_field(msg, FIX::SecurityIDSource{"STRING_3"}, Instrument_9);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_9);
  set_field(msg, FIX::SecuritySubType{"STRING_1965756614"}, Instrument_9);
  set_field(msg, FIX::SecurityType{"STRING_OOC"}, Instrument_9);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_9);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_9);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_558891388"}, Instrument_9);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1524417931"}, Instrument_9);
  set_field(msg, FIX::StrikeCurrency{"USD"}, Instrument_9);
  FIX::StrikeMultiplier StrikeMultiplier_9;
  StrikeMultiplier_9.setString("11962370");
set_field(msg, StrikeMultiplier_9, Instrument_9);
  FIX::StrikePrice StrikePrice_9;
  StrikePrice_9.setString("5904071");
set_field(msg, StrikePrice_9, Instrument_9);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_9);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_9;
  StrikePriceBoundaryPrecision_9.setString("21.230000");
set_field(msg, StrikePriceBoundaryPrecision_9, Instrument_9);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_9);
  FIX::StrikeValue StrikeValue_9;
  StrikeValue_9.setString("15065505");
set_field(msg, StrikeValue_9, Instrument_9);
  set_field(msg, FIX::Symbol{"STRING_2082397840"}, Instrument_9);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_9);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_9);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_9);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_9);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_9;
  UnitOfMeasureQty_9.setString("20315656");
set_field(msg, UnitOfMeasureQty_9, Instrument_9);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_9);
  all_values.push_back(Instrument_9);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_19;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_19);
    FIX::ComplexEventPrice ComplexEventPrice_19;
    ComplexEventPrice_19.setString("20990313");
set_field(noComplexEvents_0_0, ComplexEventPrice_19, ComplexEvents_NoComplexEvents_19);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_19);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_19;
    ComplexEventPriceBoundaryPrecision_19.setString("40.030000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_19, ComplexEvents_NoComplexEvents_19);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_19);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_19);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_19;
    ComplexOptPayoutAmount_19.setString("15545316");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_19, ComplexEvents_NoComplexEvents_19);
    all_values.push_back(ComplexEvents_NoComplexEvents_19);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_41;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 27, 1, 14, 1, 2000)}, ComplexEventDates_NoComplexEventDates_41);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 7, 26, 6, 12, 2007)}, ComplexEventDates_NoComplexEventDates_41);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_41);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_74;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 10, 2)}, ComplexEventTimes_NoComplexEventTimes_74);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 45, 15)}, ComplexEventTimes_NoComplexEventTimes_74);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_74);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_75;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 49, 32)}, ComplexEventTimes_NoComplexEventTimes_75);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 15, 16)}, ComplexEventTimes_NoComplexEventTimes_75);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_75);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_42;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 36, 19, 3, 1, 2005)}, ComplexEventDates_NoComplexEventDates_42);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 43, 42, 4, 7, 2000)}, ComplexEventDates_NoComplexEventDates_42);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_42);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_76;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 9, 3)}, ComplexEventTimes_NoComplexEventTimes_76);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 41, 20)}, ComplexEventTimes_NoComplexEventTimes_76);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_76);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_77;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 1, 30)}, ComplexEventTimes_NoComplexEventTimes_77);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 45, 26)}, ComplexEventTimes_NoComplexEventTimes_77);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_77);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_20;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_20);
    FIX::ComplexEventPrice ComplexEventPrice_20;
    ComplexEventPrice_20.setString("10339987");
set_field(noComplexEvents_0_1, ComplexEventPrice_20, ComplexEvents_NoComplexEvents_20);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_20);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_20;
    ComplexEventPriceBoundaryPrecision_20.setString("2.790000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_20, ComplexEvents_NoComplexEvents_20);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_20);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_20);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_20;
    ComplexOptPayoutAmount_20.setString("11067002");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_20, ComplexEvents_NoComplexEvents_20);
    all_values.push_back(ComplexEvents_NoComplexEvents_20);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_43;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 48, 49, 4, 7, 2000)}, ComplexEventDates_NoComplexEventDates_43);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 50, 24, 14, 4, 2009)}, ComplexEventDates_NoComplexEventDates_43);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_43);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_78;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 0, 59)}, ComplexEventTimes_NoComplexEventTimes_78);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 36, 51)}, ComplexEventTimes_NoComplexEventTimes_78);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_78);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_79;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 45, 11)}, ComplexEventTimes_NoComplexEventTimes_79);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 6, 31)}, ComplexEventTimes_NoComplexEventTimes_79);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_79);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_44;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 19, 36, 4, 7, 2007)}, ComplexEventDates_NoComplexEventDates_44);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 7, 49, 18, 3, 2017)}, ComplexEventDates_NoComplexEventDates_44);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_44);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_80;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 1, 58)}, ComplexEventTimes_NoComplexEventTimes_80);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 34, 2)}, ComplexEventTimes_NoComplexEventTimes_80);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_80);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_81;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 47, 46)}, ComplexEventTimes_NoComplexEventTimes_81);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 44, 33)}, ComplexEventTimes_NoComplexEventTimes_81);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_81);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_45;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 45, 14, 12, 8, 2013)}, ComplexEventDates_NoComplexEventDates_45);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 38, 23, 9, 5, 2014)}, ComplexEventDates_NoComplexEventDates_45);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_45);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_82;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 39, 13)}, ComplexEventTimes_NoComplexEventTimes_82);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 40, 18)}, ComplexEventTimes_NoComplexEventTimes_82);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_82);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_83;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 58, 37)}, ComplexEventTimes_NoComplexEventTimes_83);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 14, 53)}, ComplexEventTimes_NoComplexEventTimes_83);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_83);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_84;
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 30, 33)}, ComplexEventTimes_NoComplexEventTimes_84);
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 4, 0)}, ComplexEventTimes_NoComplexEventTimes_84);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_84);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_21;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_21);
    FIX::ComplexEventPrice ComplexEventPrice_21;
    ComplexEventPrice_21.setString("2875687");
set_field(noComplexEvents_0_2, ComplexEventPrice_21, ComplexEvents_NoComplexEvents_21);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_21);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_21;
    ComplexEventPriceBoundaryPrecision_21.setString("26.740000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_21, ComplexEvents_NoComplexEvents_21);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_21);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_21);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_21;
    ComplexOptPayoutAmount_21.setString("3341279");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_21, ComplexEvents_NoComplexEvents_21);
    all_values.push_back(ComplexEvents_NoComplexEvents_21);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_46;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 20, 22, 7, 1, 2004)}, ComplexEventDates_NoComplexEventDates_46);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 38, 32, 22, 12, 2010)}, ComplexEventDates_NoComplexEventDates_46);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_46);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_85;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 10, 54)}, ComplexEventTimes_NoComplexEventTimes_85);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 51, 24)}, ComplexEventTimes_NoComplexEventTimes_85);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_85);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_47;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 39, 54, 9, 10, 2012)}, ComplexEventDates_NoComplexEventDates_47);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 14, 29, 13, 3, 2015)}, ComplexEventDates_NoComplexEventDates_47);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_47);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CollateralInquiry::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_86;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 36, 0)}, ComplexEventTimes_NoComplexEventTimes_86);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 46, 5)}, ComplexEventTimes_NoComplexEventTimes_86);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_86);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_23;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_665819923"}, EvntGrp_NoEvents_23);
    FIX::EventPx EventPx_23;
    EventPx_23.setString("20397923");
set_field(noEvents_0_0, EventPx_23, EvntGrp_NoEvents_23);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1397078223"}, EvntGrp_NoEvents_23);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(22, 54, 38, 10, 9, 2010)}, EvntGrp_NoEvents_23);
    set_field(noEvents_0_0, FIX::EventType{1}, EvntGrp_NoEvents_23);
    all_values.push_back(EvntGrp_NoEvents_23);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_24;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1468524329"}, EvntGrp_NoEvents_24);
    FIX::EventPx EventPx_24;
    EventPx_24.setString("20920800");
set_field(noEvents_0_1, EventPx_24, EvntGrp_NoEvents_24);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1674528859"}, EvntGrp_NoEvents_24);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(2, 33, 7, 15, 4, 2008)}, EvntGrp_NoEvents_24);
    set_field(noEvents_0_1, FIX::EventType{5}, EvntGrp_NoEvents_24);
    all_values.push_back(EvntGrp_NoEvents_24);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_25;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_575683580"}, EvntGrp_NoEvents_25);
    FIX::EventPx EventPx_25;
    EventPx_25.setString("9430619");
set_field(noEvents_0_2, EventPx_25, EvntGrp_NoEvents_25);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1218534652"}, EvntGrp_NoEvents_25);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(13, 31, 59, 18, 5, 2012)}, EvntGrp_NoEvents_25);
    set_field(noEvents_0_2, FIX::EventType{10}, EvntGrp_NoEvents_25);
    all_values.push_back(EvntGrp_NoEvents_25);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_15;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1385372568"}, InstrumentParties_NoInstrumentParties_15);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_15);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{325996401}, InstrumentParties_NoInstrumentParties_15);
    all_values.push_back(InstrumentParties_NoInstrumentParties_15);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_83033126"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{2095180481}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_34);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1717578089"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1290862167}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_35);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_16;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1416221162"}, InstrumentParties_NoInstrumentParties_16);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_16);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{817907378}, InstrumentParties_NoInstrumentParties_16);
    all_values.push_back(InstrumentParties_NoInstrumentParties_16);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_284785222"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{733566003}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_36);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1235217039"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1958904229}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_37);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_17;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_811386775"}, InstrumentParties_NoInstrumentParties_17);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_17);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1495896905}, InstrumentParties_NoInstrumentParties_17);
    all_values.push_back(InstrumentParties_NoInstrumentParties_17);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_261387112"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{566947910}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_38);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CollateralInquiry::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_16;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_2091084917"}, SecAltIDGrp_NoSecurityAltID_16);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1482776181"}, SecAltIDGrp_NoSecurityAltID_16);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_16);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_18;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1426073126"}, SecurityXML_18);
  set_field(msg, FIX::SecurityXMLLen{1000727792}, SecurityXML_18);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1119831233"}, SecurityXML_18);
  all_values.push_back(SecurityXML_18);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::CollateralInquiry::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_21;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1950163021"}, Parties_NoPartyIDs_21);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_21);
    set_field(noPartyIDs_0_0, FIX::PartyRole{31}, Parties_NoPartyIDs_21);
    all_values.push_back(Parties_NoPartyIDs_21);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::CollateralInquiry::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_45;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_332477261"}, PtysSubGrp_NoPartySubIDs_45);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_45);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_45);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // SettlInstructionsData
  multiset<string> SettlInstructionsData_6;
  set_field(msg, FIX::SettlDeliveryType{0}, SettlInstructionsData_6);
  set_field(msg, FIX::StandInstDbID{"STRING_280174094"}, SettlInstructionsData_6);
  set_field(msg, FIX::StandInstDbName{"STRING_943907241"}, SettlInstructionsData_6);
  set_field(msg, FIX::StandInstDbType{2}, SettlInstructionsData_6);
  all_values.push_back(SettlInstructionsData_6);
  all_compo_names.insert(".");

  // DlvyInstGrp
  // Group DlvyInstGrp.NoDlvyInst
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_0;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_13;
    set_field(noDlvyInst_0_0, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_13);
    set_field(noDlvyInst_0_0, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_13);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_13);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_22;
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyID{"STRING_743383323"}, SettlParties_NoSettlPartyIDs_22);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_22);
      set_field(noSettlPartyIDs_0_1_0, FIX::SettlPartyRole{545794521}, SettlParties_NoSettlPartyIDs_22);
      all_values.push_back(SettlParties_NoSettlPartyIDs_22);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_45;
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubID{"STRING_399727115"}, SettlPtysSubGrp_NoSettlPartySubIDs_45);
        set_field(noSettlPartySubIDs_0_0_2_0, FIX::SettlPartySubIDType{2011603341}, SettlPtysSubGrp_NoSettlPartySubIDs_45);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_45);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_46;
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubID{"STRING_2050700809"}, SettlPtysSubGrp_NoSettlPartySubIDs_46);
        set_field(noSettlPartySubIDs_0_0_2_1, FIX::SettlPartySubIDType{1786797470}, SettlPtysSubGrp_NoSettlPartySubIDs_46);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_46);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_0_2_2;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_47;
        set_field(noSettlPartySubIDs_0_0_2_2, FIX::SettlPartySubID{"STRING_125506805"}, SettlPtysSubGrp_NoSettlPartySubIDs_47);
        set_field(noSettlPartySubIDs_0_0_2_2, FIX::SettlPartySubIDType{470165071}, SettlPtysSubGrp_NoSettlPartySubIDs_47);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_47);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_0.addGroup(noSettlPartySubIDs_0_0_2_2);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_0_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_23;
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyID{"STRING_134840230"}, SettlParties_NoSettlPartyIDs_23);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyIDSource{'6'}, SettlParties_NoSettlPartyIDs_23);
      set_field(noSettlPartyIDs_0_1_1, FIX::SettlPartyRole{1952941253}, SettlParties_NoSettlPartyIDs_23);
      all_values.push_back(SettlParties_NoSettlPartyIDs_23);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_0_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_48;
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubID{"STRING_1069835866"}, SettlPtysSubGrp_NoSettlPartySubIDs_48);
        set_field(noSettlPartySubIDs_0_1_2_0, FIX::SettlPartySubIDType{925288838}, SettlPtysSubGrp_NoSettlPartySubIDs_48);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_48);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_0_1_1.addGroup(noSettlPartySubIDs_0_1_2_0);
      }
      noDlvyInst_0_0.addGroup(noSettlPartyIDs_0_1_1);
    }
    msg.addGroup(noDlvyInst_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_1;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_14;
    set_field(noDlvyInst_0_1, FIX::DlvyInstType{'S'}, DlvyInstGrp_NoDlvyInst_14);
    set_field(noDlvyInst_0_1, FIX::SettlInstSource{'2'}, DlvyInstGrp_NoDlvyInst_14);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_14);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_24;
      set_field(noSettlPartyIDs_1_1_0, FIX::SettlPartyID{"STRING_401230870"}, SettlParties_NoSettlPartyIDs_24);
      set_field(noSettlPartyIDs_1_1_0, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_24);
      set_field(noSettlPartyIDs_1_1_0, FIX::SettlPartyRole{1264246960}, SettlParties_NoSettlPartyIDs_24);
      all_values.push_back(SettlParties_NoSettlPartyIDs_24);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_49;
        set_field(noSettlPartySubIDs_1_0_2_0, FIX::SettlPartySubID{"STRING_723942641"}, SettlPtysSubGrp_NoSettlPartySubIDs_49);
        set_field(noSettlPartySubIDs_1_0_2_0, FIX::SettlPartySubIDType{1544421055}, SettlPtysSubGrp_NoSettlPartySubIDs_49);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_49);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_0_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_50;
        set_field(noSettlPartySubIDs_1_0_2_1, FIX::SettlPartySubID{"STRING_571467263"}, SettlPtysSubGrp_NoSettlPartySubIDs_50);
        set_field(noSettlPartySubIDs_1_0_2_1, FIX::SettlPartySubIDType{908293248}, SettlPtysSubGrp_NoSettlPartySubIDs_50);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_50);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_0.addGroup(noSettlPartySubIDs_1_0_2_1);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_25;
      set_field(noSettlPartyIDs_1_1_1, FIX::SettlPartyID{"STRING_1093332664"}, SettlParties_NoSettlPartyIDs_25);
      set_field(noSettlPartyIDs_1_1_1, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_25);
      set_field(noSettlPartyIDs_1_1_1, FIX::SettlPartyRole{1910551233}, SettlParties_NoSettlPartyIDs_25);
      all_values.push_back(SettlParties_NoSettlPartyIDs_25);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_51;
        set_field(noSettlPartySubIDs_1_1_2_0, FIX::SettlPartySubID{"STRING_1773448687"}, SettlPtysSubGrp_NoSettlPartySubIDs_51);
        set_field(noSettlPartySubIDs_1_1_2_0, FIX::SettlPartySubIDType{1498891574}, SettlPtysSubGrp_NoSettlPartySubIDs_51);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_51);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_1.addGroup(noSettlPartySubIDs_1_1_2_0);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_1_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_26;
      set_field(noSettlPartyIDs_1_1_2, FIX::SettlPartyID{"STRING_949704666"}, SettlParties_NoSettlPartyIDs_26);
      set_field(noSettlPartyIDs_1_1_2, FIX::SettlPartyIDSource{'1'}, SettlParties_NoSettlPartyIDs_26);
      set_field(noSettlPartyIDs_1_1_2, FIX::SettlPartyRole{1898618689}, SettlParties_NoSettlPartyIDs_26);
      all_values.push_back(SettlParties_NoSettlPartyIDs_26);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_52;
        set_field(noSettlPartySubIDs_1_2_2_0, FIX::SettlPartySubID{"STRING_83986104"}, SettlPtysSubGrp_NoSettlPartySubIDs_52);
        set_field(noSettlPartySubIDs_1_2_2_0, FIX::SettlPartySubIDType{1537932512}, SettlPtysSubGrp_NoSettlPartySubIDs_52);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_52);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_2.addGroup(noSettlPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_1_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_53;
        set_field(noSettlPartySubIDs_1_2_2_1, FIX::SettlPartySubID{"STRING_939331164"}, SettlPtysSubGrp_NoSettlPartySubIDs_53);
        set_field(noSettlPartySubIDs_1_2_2_1, FIX::SettlPartySubIDType{554151176}, SettlPtysSubGrp_NoSettlPartySubIDs_53);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_53);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_1_1_2.addGroup(noSettlPartySubIDs_1_2_2_1);
      }
      noDlvyInst_0_1.addGroup(noSettlPartyIDs_1_1_2);
    }
    msg.addGroup(noDlvyInst_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoDlvyInst noDlvyInst_0_2;
    // DlvyInstGrp.NoDlvyInst
    multiset<string> DlvyInstGrp_NoDlvyInst_15;
    set_field(noDlvyInst_0_2, FIX::DlvyInstType{'C'}, DlvyInstGrp_NoDlvyInst_15);
    set_field(noDlvyInst_0_2, FIX::SettlInstSource{'1'}, DlvyInstGrp_NoDlvyInst_15);
    all_values.push_back(DlvyInstGrp_NoDlvyInst_15);
    all_compo_names.insert("....NoDlvyInst");

    // SettlParties
    // Group SettlParties.NoSettlPartyIDs
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_0;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_27;
      set_field(noSettlPartyIDs_2_1_0, FIX::SettlPartyID{"STRING_1086202450"}, SettlParties_NoSettlPartyIDs_27);
      set_field(noSettlPartyIDs_2_1_0, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_27);
      set_field(noSettlPartyIDs_2_1_0, FIX::SettlPartyRole{1284897619}, SettlParties_NoSettlPartyIDs_27);
      all_values.push_back(SettlParties_NoSettlPartyIDs_27);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_0_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_54;
        set_field(noSettlPartySubIDs_2_0_2_0, FIX::SettlPartySubID{"STRING_803306697"}, SettlPtysSubGrp_NoSettlPartySubIDs_54);
        set_field(noSettlPartySubIDs_2_0_2_0, FIX::SettlPartySubIDType{69183670}, SettlPtysSubGrp_NoSettlPartySubIDs_54);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_54);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_2_1_0.addGroup(noSettlPartySubIDs_2_0_2_0);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_1;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_28;
      set_field(noSettlPartyIDs_2_1_1, FIX::SettlPartyID{"STRING_1775819149"}, SettlParties_NoSettlPartyIDs_28);
      set_field(noSettlPartyIDs_2_1_1, FIX::SettlPartyIDSource{'4'}, SettlParties_NoSettlPartyIDs_28);
      set_field(noSettlPartyIDs_2_1_1, FIX::SettlPartyRole{1333430631}, SettlParties_NoSettlPartyIDs_28);
      all_values.push_back(SettlParties_NoSettlPartyIDs_28);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_1_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_55;
        set_field(noSettlPartySubIDs_2_1_2_0, FIX::SettlPartySubID{"STRING_1210219892"}, SettlPtysSubGrp_NoSettlPartySubIDs_55);
        set_field(noSettlPartySubIDs_2_1_2_0, FIX::SettlPartySubIDType{730368038}, SettlPtysSubGrp_NoSettlPartySubIDs_55);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_55);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_2_1_1.addGroup(noSettlPartySubIDs_2_1_2_0);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs noSettlPartyIDs_2_1_2;
      // SettlParties.NoSettlPartyIDs
      multiset<string> SettlParties_NoSettlPartyIDs_29;
      set_field(noSettlPartyIDs_2_1_2, FIX::SettlPartyID{"STRING_1974846434"}, SettlParties_NoSettlPartyIDs_29);
      set_field(noSettlPartyIDs_2_1_2, FIX::SettlPartyIDSource{'2'}, SettlParties_NoSettlPartyIDs_29);
      set_field(noSettlPartyIDs_2_1_2, FIX::SettlPartyRole{1823700702}, SettlParties_NoSettlPartyIDs_29);
      all_values.push_back(SettlParties_NoSettlPartyIDs_29);
      all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs");

      // SettlPtysSubGrp
      // Group SettlPtysSubGrp.NoSettlPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_0;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_56;
        set_field(noSettlPartySubIDs_2_2_2_0, FIX::SettlPartySubID{"STRING_1881580726"}, SettlPtysSubGrp_NoSettlPartySubIDs_56);
        set_field(noSettlPartySubIDs_2_2_2_0, FIX::SettlPartySubIDType{80127199}, SettlPtysSubGrp_NoSettlPartySubIDs_56);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_56);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_2_1_2.addGroup(noSettlPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoDlvyInst::NoSettlPartyIDs::NoSettlPartySubIDs noSettlPartySubIDs_2_2_2_1;
        // SettlPtysSubGrp.NoSettlPartySubIDs
        multiset<string> SettlPtysSubGrp_NoSettlPartySubIDs_57;
        set_field(noSettlPartySubIDs_2_2_2_1, FIX::SettlPartySubID{"STRING_483393189"}, SettlPtysSubGrp_NoSettlPartySubIDs_57);
        set_field(noSettlPartySubIDs_2_2_2_1, FIX::SettlPartySubIDType{1232988652}, SettlPtysSubGrp_NoSettlPartySubIDs_57);
        all_values.push_back(SettlPtysSubGrp_NoSettlPartySubIDs_57);
        all_compo_names.insert("....NoDlvyInst...NoSettlPartyIDs...NoSettlPartySubIDs");

        noSettlPartyIDs_2_1_2.addGroup(noSettlPartySubIDs_2_2_2_1);
      }
      noDlvyInst_0_2.addGroup(noSettlPartyIDs_2_1_2);
    }
    msg.addGroup(noDlvyInst_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_4;
  set_field(msg, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SWAP"}, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1843656225"}, SpreadOrBenchmarkCurveData_4);
  FIX::BenchmarkPrice BenchmarkPrice_4;
  BenchmarkPrice_4.setString("7481482");
set_field(msg, BenchmarkPrice_4, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkPriceType{374572558}, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_635503742"}, SpreadOrBenchmarkCurveData_4);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1302299413"}, SpreadOrBenchmarkCurveData_4);
  FIX::Spread Spread_4;
  Spread_4.setString("20473453");
set_field(msg, Spread_4, SpreadOrBenchmarkCurveData_4);
  all_values.push_back(SpreadOrBenchmarkCurveData_4);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_9;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_RATING"}, Stipulations_NoStipulations_9);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_986064102"}, Stipulations_NoStipulations_9);
    all_values.push_back(Stipulations_NoStipulations_9);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_10;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_SECTYPE"}, Stipulations_NoStipulations_10);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_799322165"}, Stipulations_NoStipulations_10);
    all_values.push_back(Stipulations_NoStipulations_10);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_11;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_LOT"}, Stipulations_NoStipulations_11);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_230557488"}, Stipulations_NoStipulations_11);
    all_values.push_back(Stipulations_NoStipulations_11);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // TrdCollGrp
  // Group TrdCollGrp.NoTrades
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_0;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_2;
    set_field(noTrades_0_0, FIX::SecondaryTradeReportID{"STRING_1988987883"}, TrdCollGrp_NoTrades_2);
    set_field(noTrades_0_0, FIX::TradeReportID{"STRING_716834739"}, TrdCollGrp_NoTrades_2);
    all_values.push_back(TrdCollGrp_NoTrades_2);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrades noTrades_0_1;
    // TrdCollGrp.NoTrades
    multiset<string> TrdCollGrp_NoTrades_3;
    set_field(noTrades_0_1, FIX::SecondaryTradeReportID{"STRING_54452819"}, TrdCollGrp_NoTrades_3);
    set_field(noTrades_0_1, FIX::TradeReportID{"STRING_1244883407"}, TrdCollGrp_NoTrades_3);
    all_values.push_back(TrdCollGrp_NoTrades_3);
    all_compo_names.insert("...NoTrades");

    msg.addGroup(noTrades_0_1);
  }
  // TrdRegTimestamps
  // Group TrdRegTimestamps.NoTrdRegTimestamps
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_0;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_3;
    set_field(noTrdRegTimestamps_0_0, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_AON"}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskType{"STRING_PR"}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(16, 3, 30, 21, 12, 2014)}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampOrigin{"STRING_929746018"}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    set_field(noTrdRegTimestamps_0_0, FIX::TrdRegTimestampType{2}, TrdRegTimestamps_NoTrdRegTimestamps_3);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_3);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_1;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_4;
    set_field(noTrdRegTimestamps_0_1, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_MAO"}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskType{"STRING_IS"}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(20, 51, 9, 2, 3, 2017)}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampOrigin{"STRING_1146456731"}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    set_field(noTrdRegTimestamps_0_1, FIX::TrdRegTimestampType{6}, TrdRegTimestamps_NoTrdRegTimestamps_4);
    all_values.push_back(TrdRegTimestamps_NoTrdRegTimestamps_4);
    all_compo_names.insert("...NoTrdRegTimestamps");

    msg.addGroup(noTrdRegTimestamps_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoTrdRegTimestamps noTrdRegTimestamps_0_2;
    // TrdRegTimestamps.NoTrdRegTimestamps
    multiset<string> TrdRegTimestamps_NoTrdRegTimestamps_5;
    set_field(noTrdRegTimestamps_0_2, FIX::DeskOrderHandlingInst{"MULTIPLESTRINGVALUE_MAC"}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskType{"STRING_D"}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::DeskTypeSource{1}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestamp{FIX::UTCTIMESTAMP(2, 22, 30, 3, 9, 2016)}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampOrigin{"STRING_1167790506"}, TrdRegTimestamps_NoTrdRegTimestamps_5);
    set_field(noTrdRegTimestamps_0_2, FIX::TrdRegTimestampType{7}, TrdRegTimestamps_NoTrdRegTimestamps_5);
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
    multiset<string> UnderlyingInstrument_15;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1708955617"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1086918069}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1506330869"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1132468945}, UnderlyingInstrument_15);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_15;
    UnderlyingAdjustedQuantity_15.setString("20166640");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_15, UnderlyingInstrument_15);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_15;
    UnderlyingAllocationPercent_15.setString("71.220000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_15, UnderlyingInstrument_15);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_15;
    UnderlyingAttachmentPoint_15.setString("48.510000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1547074694"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_989555934"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_7344499"}, UnderlyingInstrument_15);
    FIX::UnderlyingCapValue UnderlyingCapValue_15;
    UnderlyingCapValue_15.setString("2323010");
set_field(noUnderlyings_0_0, UnderlyingCapValue_15, UnderlyingInstrument_15);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_15;
    UnderlyingCashAmount_15.setString("8183163");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_15);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_15;
    UnderlyingContractMultiplier_15.setString("5794356");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1633140963}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_85376900"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1725892364"}, UnderlyingInstrument_15);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_15;
    UnderlyingCouponRate_15.setString("6.150000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1142317807"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_15);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_15;
    UnderlyingCurrentValue_15.setString("7686098");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_15, UnderlyingInstrument_15);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_15;
    UnderlyingDetachmentPoint_15.setString("30.220000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_15, UnderlyingInstrument_15);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_15;
    UnderlyingDirtyPrice_15.setString("13500454");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_15, UnderlyingInstrument_15);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_15;
    UnderlyingEndPrice_15.setString("1744727");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_15, UnderlyingInstrument_15);
    FIX::UnderlyingEndValue UnderlyingEndValue_15;
    UnderlyingEndValue_15.setString("745719");
set_field(noUnderlyings_0_0, UnderlyingEndValue_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{241705285}, UnderlyingInstrument_15);
    FIX::UnderlyingFXRate UnderlyingFXRate_15;
    UnderlyingFXRate_15.setString("14784198");
set_field(noUnderlyings_0_0, UnderlyingFXRate_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_15);
    FIX::UnderlyingFactor UnderlyingFactor_15;
    UnderlyingFactor_15.setString("10630394");
set_field(noUnderlyings_0_0, UnderlyingFactor_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{119580908}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_803834445"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2473891"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1625911777"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1936303390"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_2019137978"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_539085251"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_40974594"}, UnderlyingInstrument_15);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_15;
    UnderlyingNotionalPercentageOutstanding_15.setString("90.250000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_15);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_15;
    UnderlyingOriginalNotionalPercentageOutstanding_15.setString("90.930000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1651030091"}, UnderlyingInstrument_15);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_15;
    UnderlyingPriceUnitOfMeasureQty_15.setString("1994739");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1454796222}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{82982076}, UnderlyingInstrument_15);
    FIX::UnderlyingPx UnderlyingPx_15;
    UnderlyingPx_15.setString("18326148");
set_field(noUnderlyings_0_0, UnderlyingPx_15, UnderlyingInstrument_15);
    FIX::UnderlyingQty UnderlyingQty_15;
    UnderlyingQty_15.setString("15401731");
set_field(noUnderlyings_0_0, UnderlyingQty_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1808874440"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_198781866"}, UnderlyingInstrument_15);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_15;
    UnderlyingRepurchaseRate_15.setString("72.810000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1254762075}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1581930017"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1303617087"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_622581449"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_784491814"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1478089875"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_697153419"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1026197100"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_809026122"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1939515895"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_15);
    FIX::UnderlyingStartValue UnderlyingStartValue_15;
    UnderlyingStartValue_15.setString("9286070");
set_field(noUnderlyings_0_0, UnderlyingStartValue_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_595866692"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_15);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_15;
    UnderlyingStrikePrice_15.setString("3846864");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_15, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1963364791"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_946120410"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_425661028"}, UnderlyingInstrument_15);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1234610168"}, UnderlyingInstrument_15);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_15;
    UnderlyingUnitOfMeasureQty_15.setString("3272779");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_15, UnderlyingInstrument_15);
    all_values.push_back(UnderlyingInstrument_15);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_34;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_738156611"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_526751883"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_34);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_28;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_821138687"}, UnderlyingStipulations_NoUnderlyingStips_28);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_211883133"}, UnderlyingStipulations_NoUnderlyingStips_28);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_28);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_32;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_482529479"}, UndlyInstrumentParties_NoUndlyInstrumentParties_32);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_32);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1856473099}, UndlyInstrumentParties_NoUndlyInstrumentParties_32);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_32);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1992595016"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1012606539}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_56);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_16;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_212389356"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{629603183}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_343212766"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{909542775}, UnderlyingInstrument_16);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_16;
    UnderlyingAdjustedQuantity_16.setString("16558002");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_16, UnderlyingInstrument_16);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_16;
    UnderlyingAllocationPercent_16.setString("88.880000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_16, UnderlyingInstrument_16);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_16;
    UnderlyingAttachmentPoint_16.setString("50.220000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1597553204"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_2080845918"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1297441714"}, UnderlyingInstrument_16);
    FIX::UnderlyingCapValue UnderlyingCapValue_16;
    UnderlyingCapValue_16.setString("15417800");
set_field(noUnderlyings_0_1, UnderlyingCapValue_16, UnderlyingInstrument_16);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_16;
    UnderlyingCashAmount_16.setString("3403974");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_16);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_16;
    UnderlyingContractMultiplier_16.setString("13576611");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1286517840}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_2107789177"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_444787680"}, UnderlyingInstrument_16);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_16;
    UnderlyingCouponRate_16.setString("57.880000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_434285651"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_16);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_16;
    UnderlyingCurrentValue_16.setString("2155783");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_16, UnderlyingInstrument_16);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_16;
    UnderlyingDetachmentPoint_16.setString("29.790000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_16, UnderlyingInstrument_16);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_16;
    UnderlyingDirtyPrice_16.setString("2049471");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_16, UnderlyingInstrument_16);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_16;
    UnderlyingEndPrice_16.setString("15370441");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_16, UnderlyingInstrument_16);
    FIX::UnderlyingEndValue UnderlyingEndValue_16;
    UnderlyingEndValue_16.setString("3391288");
set_field(noUnderlyings_0_1, UnderlyingEndValue_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{615612156}, UnderlyingInstrument_16);
    FIX::UnderlyingFXRate UnderlyingFXRate_16;
    UnderlyingFXRate_16.setString("12460336");
set_field(noUnderlyings_0_1, UnderlyingFXRate_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_16);
    FIX::UnderlyingFactor UnderlyingFactor_16;
    UnderlyingFactor_16.setString("4607235");
set_field(noUnderlyings_0_1, UnderlyingFactor_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{111156508}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_141326074"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1090326707"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_454369274"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1050868849"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_598643342"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1606608163"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1752443872"}, UnderlyingInstrument_16);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_16;
    UnderlyingNotionalPercentageOutstanding_16.setString("28.990000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_16);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_16;
    UnderlyingOriginalNotionalPercentageOutstanding_16.setString("19.380000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1590492916"}, UnderlyingInstrument_16);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_16;
    UnderlyingPriceUnitOfMeasureQty_16.setString("18803678");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{437046439}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{800670428}, UnderlyingInstrument_16);
    FIX::UnderlyingPx UnderlyingPx_16;
    UnderlyingPx_16.setString("10194020");
set_field(noUnderlyings_0_1, UnderlyingPx_16, UnderlyingInstrument_16);
    FIX::UnderlyingQty UnderlyingQty_16;
    UnderlyingQty_16.setString("3973519");
set_field(noUnderlyings_0_1, UnderlyingQty_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1245458108"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_485714195"}, UnderlyingInstrument_16);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_16;
    UnderlyingRepurchaseRate_16.setString("76.200000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{280918751}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_478778218"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1047215968"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_137518082"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_683725374"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_436776485"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_476646893"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1299337530"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1682810102"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_405583610"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_16);
    FIX::UnderlyingStartValue UnderlyingStartValue_16;
    UnderlyingStartValue_16.setString("17939666");
set_field(noUnderlyings_0_1, UnderlyingStartValue_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_546909684"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_16);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_16;
    UnderlyingStrikePrice_16.setString("15977785");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_16, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1301547457"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1707460400"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1202738758"}, UnderlyingInstrument_16);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1350260356"}, UnderlyingInstrument_16);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_16;
    UnderlyingUnitOfMeasureQty_16.setString("10999471");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_16, UnderlyingInstrument_16);
    all_values.push_back(UnderlyingInstrument_16);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_35;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_793269624"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_832831400"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_35);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_36;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_394703488"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1593940052"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_36);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_29;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_792055457"}, UnderlyingStipulations_NoUnderlyingStips_29);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_691914512"}, UnderlyingStipulations_NoUnderlyingStips_29);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_29);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_30;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_190464002"}, UnderlyingStipulations_NoUnderlyingStips_30);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1623693077"}, UnderlyingStipulations_NoUnderlyingStips_30);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_30);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_31;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_972833263"}, UnderlyingStipulations_NoUnderlyingStips_31);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_669242220"}, UnderlyingStipulations_NoUnderlyingStips_31);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_31);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_33;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1110351346"}, UndlyInstrumentParties_NoUndlyInstrumentParties_33);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_33);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{960201883}, UndlyInstrumentParties_NoUndlyInstrumentParties_33);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_33);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_504821477"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{495528337}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_57);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_34;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1992581849"}, UndlyInstrumentParties_NoUndlyInstrumentParties_34);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_34);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{142011300}, UndlyInstrumentParties_NoUndlyInstrumentParties_34);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_34);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_820302999"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{242863537}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_58);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1989786420"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{2121850456}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_59);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::CollateralInquiry::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_17;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1950323937"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{1045041530}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1324627164"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{902787474}, UnderlyingInstrument_17);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_17;
    UnderlyingAdjustedQuantity_17.setString("10026985");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_17, UnderlyingInstrument_17);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_17;
    UnderlyingAllocationPercent_17.setString("67.880000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_17, UnderlyingInstrument_17);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_17;
    UnderlyingAttachmentPoint_17.setString("88.750000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1397402066"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_1564353192"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1440368682"}, UnderlyingInstrument_17);
    FIX::UnderlyingCapValue UnderlyingCapValue_17;
    UnderlyingCapValue_17.setString("419738");
set_field(noUnderlyings_0_2, UnderlyingCapValue_17, UnderlyingInstrument_17);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_17;
    UnderlyingCashAmount_17.setString("1087840");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_17);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_17;
    UnderlyingContractMultiplier_17.setString("16656669");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1081617319}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_152591257"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_41608702"}, UnderlyingInstrument_17);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_17;
    UnderlyingCouponRate_17.setString("50.170000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1505558852"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_17);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_17;
    UnderlyingCurrentValue_17.setString("20103803");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_17, UnderlyingInstrument_17);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_17;
    UnderlyingDetachmentPoint_17.setString("89.230000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_17, UnderlyingInstrument_17);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_17;
    UnderlyingDirtyPrice_17.setString("14765814");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_17, UnderlyingInstrument_17);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_17;
    UnderlyingEndPrice_17.setString("21277792");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_17, UnderlyingInstrument_17);
    FIX::UnderlyingEndValue UnderlyingEndValue_17;
    UnderlyingEndValue_17.setString("16393502");
set_field(noUnderlyings_0_2, UnderlyingEndValue_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1868589344}, UnderlyingInstrument_17);
    FIX::UnderlyingFXRate UnderlyingFXRate_17;
    UnderlyingFXRate_17.setString("8005985");
set_field(noUnderlyings_0_2, UnderlyingFXRate_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_17);
    FIX::UnderlyingFactor UnderlyingFactor_17;
    UnderlyingFactor_17.setString("17108921");
set_field(noUnderlyings_0_2, UnderlyingFactor_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{774965373}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1685054049"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_608449998"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_2099592537"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_440357875"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1611148576"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2070005677"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_28493102"}, UnderlyingInstrument_17);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_17;
    UnderlyingNotionalPercentageOutstanding_17.setString("69.950000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_17);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_17;
    UnderlyingOriginalNotionalPercentageOutstanding_17.setString("17.850000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_903040870"}, UnderlyingInstrument_17);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_17;
    UnderlyingPriceUnitOfMeasureQty_17.setString("15956592");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{952210822}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{421224175}, UnderlyingInstrument_17);
    FIX::UnderlyingPx UnderlyingPx_17;
    UnderlyingPx_17.setString("5297929");
set_field(noUnderlyings_0_2, UnderlyingPx_17, UnderlyingInstrument_17);
    FIX::UnderlyingQty UnderlyingQty_17;
    UnderlyingQty_17.setString("11048020");
set_field(noUnderlyings_0_2, UnderlyingQty_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_462832878"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_574277966"}, UnderlyingInstrument_17);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_17;
    UnderlyingRepurchaseRate_17.setString("72.840000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1464643463}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_58277575"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_325773966"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_814498738"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1534859033"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_306069532"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_306365313"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1255964729"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1106668098"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_41095425"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_17);
    FIX::UnderlyingStartValue UnderlyingStartValue_17;
    UnderlyingStartValue_17.setString("18816334");
set_field(noUnderlyings_0_2, UnderlyingStartValue_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1726149474"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_17);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_17;
    UnderlyingStrikePrice_17.setString("190237");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_17, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_891488123"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_1756264390"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_47516804"}, UnderlyingInstrument_17);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1752555118"}, UnderlyingInstrument_17);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_17;
    UnderlyingUnitOfMeasureQty_17.setString("10956559");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_17, UnderlyingInstrument_17);
    all_values.push_back(UnderlyingInstrument_17);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_37;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_508112341"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_543831593"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_37);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_38;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_321105763"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_929336516"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_38);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_39;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_1073624542"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1425907843"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_39);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_32;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_1647902509"}, UnderlyingStipulations_NoUnderlyingStips_32);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_1888785127"}, UnderlyingStipulations_NoUnderlyingStips_32);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_32);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_33;
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipType{"STRING_709329210"}, UnderlyingStipulations_NoUnderlyingStips_33);
      set_field(noUnderlyingStips_2_1_1, FIX::UnderlyingStipValue{"STRING_1706180084"}, UnderlyingStipulations_NoUnderlyingStips_33);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_33);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_34;
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipType{"STRING_67075445"}, UnderlyingStipulations_NoUnderlyingStips_34);
      set_field(noUnderlyingStips_2_1_2, FIX::UnderlyingStipValue{"STRING_1523827948"}, UnderlyingStipulations_NoUnderlyingStips_34);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_34);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_35;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_373144977"}, UndlyInstrumentParties_NoUndlyInstrumentParties_35);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_35);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{202036550}, UndlyInstrumentParties_NoUndlyInstrumentParties_35);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_35);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1871288687"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1021409747}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_60);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_36;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1213962899"}, UndlyInstrumentParties_NoUndlyInstrumentParties_36);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_36);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{301749294}, UndlyInstrumentParties_NoUndlyInstrumentParties_36);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_36);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1468978216"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1193237417}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_61);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_509002354"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1516495020}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_62);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_798308888"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1604658318}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_63);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_37;
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_885389962"}, UndlyInstrumentParties_NoUndlyInstrumentParties_37);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_37);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyRole{1006264}, UndlyInstrumentParties_NoUndlyInstrumentParties_37);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_37);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_88274097"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1074630806}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_64);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_484919920"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1480443492}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_65);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      {
        FIX50SP2::CollateralInquiry::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_575049667"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{226221399}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_66);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
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
