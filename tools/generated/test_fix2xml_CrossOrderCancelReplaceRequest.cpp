#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CrossOrderCancelReplaceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CrossOrderCancelReplaceRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::CrossOrderCancelReplaceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelReplaceRequest_0;
  set_field(msg, FIX::CancellationRights{'M'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ComplianceID{"STRING_1494421084"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::CrossID{"STRING_464787706"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::CrossPrioritization{2}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::CrossType{2}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::Currency{"GBP"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::Designation{"STRING_1243143990"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(17, 20, 21, 17, 2, 2009)}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_971860865"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExDestinationIDSource{'G'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_3"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_93508157"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(14, 11, 41, 5, 7, 2001)}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::GTBookingInst{0}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::HandlInst{'1'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::HostCrossID{"STRING_1040266529"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::IOIID{"STRING_319409633"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::LocateReqd{false}, CrossOrderCancelReplaceRequest_0);
  FIX::MatchIncrement MatchIncrement_0;
  MatchIncrement_0.setString("9008147");
set_field(msg, MatchIncrement_0, CrossOrderCancelReplaceRequest_0);
  FIX::MaxFloor MaxFloor_0;
  MaxFloor_0.setString("18138307");
set_field(msg, MaxFloor_0, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::MaxPriceLevels{852065039}, CrossOrderCancelReplaceRequest_0);
  FIX::MaxShow MaxShow_0;
  MaxShow_0.setString("3788892");
set_field(msg, MaxShow_0, CrossOrderCancelReplaceRequest_0);
  FIX::MinQty MinQty_0;
  MinQty_0.setString("5452860");
set_field(msg, MinQty_0, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'1'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrdType{'P'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderID{"STRING_1788430045"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrigCrossID{"STRING_1261968620"}, CrossOrderCancelReplaceRequest_0);
  FIX::ParticipationRate ParticipationRate_0;
  ParticipationRate_0.setString("50.550000");
set_field(msg, ParticipationRate_0, CrossOrderCancelReplaceRequest_0);
  FIX::PrevClosePx PrevClosePx_0;
  PrevClosePx_0.setString("1132328");
set_field(msg, PrevClosePx_0, CrossOrderCancelReplaceRequest_0);
  FIX::Price Price_8;
  Price_8.setString("11996739");
set_field(msg, Price_8, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::PriceProtectionScope{'0'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::PriceType{16}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ProcessCode{'3'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::QuoteID{"STRING_1193310298"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::RegistID{"STRING_781741025"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_1848650832"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlType{"STRING_3"}, CrossOrderCancelReplaceRequest_0);
  FIX::StopPx StopPx_0;
  StopPx_0.setString("4827848");
set_field(msg, StopPx_0, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TargetStrategy{1}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_937930338"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TimeInForce{'4'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TransBkdTime{FIX::UTCTIMESTAMP(17, 33, 44, 4, 4, 2014)}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(15, 27, 36, 5, 11, 2000)}, CrossOrderCancelReplaceRequest_0);
  all_values.push_back(CrossOrderCancelReplaceRequest_0);

  all_compo_names.insert("CrossOrderCancelReplaceRequest");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_0;
  set_field(msg, FIX::DiscretionInst{'7'}, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionLimitType{0}, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionMoveType{0}, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionOffsetType{2}, DiscretionInstructions_0);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_0;
  DiscretionOffsetValue_0.setString("18327541");
set_field(msg, DiscretionOffsetValue_0, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionScope{3}, DiscretionInstructions_0);
  all_values.push_back(DiscretionInstructions_0);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_0;
  FIX::DisplayHighQty DisplayHighQty_0;
  DisplayHighQty_0.setString("20253284");
set_field(msg, DisplayHighQty_0, DisplayInstruction_0);
  FIX::DisplayLowQty DisplayLowQty_0;
  DisplayLowQty_0.setString("20593749");
set_field(msg, DisplayLowQty_0, DisplayInstruction_0);
  set_field(msg, FIX::DisplayMethod{'1'}, DisplayInstruction_0);
  FIX::DisplayMinIncr DisplayMinIncr_0;
  DisplayMinIncr_0.setString("6595858");
set_field(msg, DisplayMinIncr_0, DisplayInstruction_0);
  FIX::DisplayQty DisplayQty_0;
  DisplayQty_0.setString("17605421");
set_field(msg, DisplayQty_0, DisplayInstruction_0);
  set_field(msg, FIX::DisplayWhen{'2'}, DisplayInstruction_0);
  FIX::RefreshQty RefreshQty_0;
  RefreshQty_0.setString("11423707");
set_field(msg, RefreshQty_0, DisplayInstruction_0);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_0;
  SecondaryDisplayQty_0.setString("20663407");
set_field(msg, SecondaryDisplayQty_0, DisplayInstruction_0);
  all_values.push_back(DisplayInstruction_0);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_23;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1945369746"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1826399245}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1074262227"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{68998051}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1226447761"}, InstrumentLeg_23);
    FIX::LegContractMultiplier LegContractMultiplier_23;
    LegContractMultiplier_23.setString("4381502");
set_field(noLegs_0_0, LegContractMultiplier_23, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1380376534}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_945905911"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_189315688"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1445086117"}, InstrumentLeg_23);
    FIX::LegCouponRate LegCouponRate_23;
    LegCouponRate_23.setString("11.310000");
set_field(noLegs_0_0, LegCouponRate_23, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_792546124"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_845605570"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{2045835589}, InstrumentLeg_23);
    FIX::LegFactor LegFactor_23;
    LegFactor_23.setString("19823237");
set_field(noLegs_0_0, LegFactor_23, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{13149988}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1390037587"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1667594213"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_380368340"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_955689018"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1545439048"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_292259632"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1714650746"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_57541259"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_23);
    FIX::LegOptionRatio LegOptionRatio_23;
    LegOptionRatio_23.setString("16129472");
set_field(noLegs_0_0, LegOptionRatio_23, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1199912011"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1971658878"}, InstrumentLeg_23);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_23;
    LegPriceUnitOfMeasureQty_23.setString("3016905");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_23, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegProduct{997798109}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1650574475}, InstrumentLeg_23);
    FIX::LegRatioQty LegRatioQty_23;
    LegRatioQty_23.setString("13759527");
set_field(noLegs_0_0, LegRatioQty_23, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1066796161"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_729538588"}, InstrumentLeg_23);
    FIX::LegRepurchaseRate LegRepurchaseRate_23;
    LegRepurchaseRate_23.setString("30.260000");
set_field(noLegs_0_0, LegRepurchaseRate_23, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{299689047}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1675444500"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_2003418714"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1744775165"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_2007155631"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_648481190"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1485976515"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1494086761"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_23);
    FIX::LegStrikePrice LegStrikePrice_23;
    LegStrikePrice_23.setString("15072367");
set_field(noLegs_0_0, LegStrikePrice_23, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_626882396"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1624908679"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1887605089"}, InstrumentLeg_23);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1582571414"}, InstrumentLeg_23);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_23;
    LegUnitOfMeasureQty_23.setString("10228640");
set_field(noLegs_0_0, LegUnitOfMeasureQty_23, InstrumentLeg_23);
    all_values.push_back(InstrumentLeg_23);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_44;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1149738513"}, LegSecAltIDGrp_NoLegSecurityAltID_44);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1080405338"}, LegSecAltIDGrp_NoLegSecurityAltID_44);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_44);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_24;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_2085182829"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{615202147}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_132833702"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1909358059}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_916892655"}, InstrumentLeg_24);
    FIX::LegContractMultiplier LegContractMultiplier_24;
    LegContractMultiplier_24.setString("11306318");
set_field(noLegs_0_1, LegContractMultiplier_24, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1412448886}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_145361742"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_49944324"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2141987475"}, InstrumentLeg_24);
    FIX::LegCouponRate LegCouponRate_24;
    LegCouponRate_24.setString("47.680000");
set_field(noLegs_0_1, LegCouponRate_24, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_349633372"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegCurrency{"USD"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_2094408537"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1529620310}, InstrumentLeg_24);
    FIX::LegFactor LegFactor_24;
    LegFactor_24.setString("3163973");
set_field(noLegs_0_1, LegFactor_24, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1432901404}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1652094698"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1810484137"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_669746213"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1609409164"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1170237239"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1296628610"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1086834195"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_910358680"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'7'}, InstrumentLeg_24);
    FIX::LegOptionRatio LegOptionRatio_24;
    LegOptionRatio_24.setString("21096982");
set_field(noLegs_0_1, LegOptionRatio_24, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_942739754"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1881454889"}, InstrumentLeg_24);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_24;
    LegPriceUnitOfMeasureQty_24.setString("10426199");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_24, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegProduct{880438935}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegPutOrCall{349173388}, InstrumentLeg_24);
    FIX::LegRatioQty LegRatioQty_24;
    LegRatioQty_24.setString("11754536");
set_field(noLegs_0_1, LegRatioQty_24, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_642313347"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1266066043"}, InstrumentLeg_24);
    FIX::LegRepurchaseRate LegRepurchaseRate_24;
    LegRepurchaseRate_24.setString("18.300000");
set_field(noLegs_0_1, LegRepurchaseRate_24, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{2054762233}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1411427785"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_208546154"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_2049266060"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1223408905"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_558179526"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1571730739"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegSide{'8'}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_505104415"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_24);
    FIX::LegStrikePrice LegStrikePrice_24;
    LegStrikePrice_24.setString("19380058");
set_field(noLegs_0_1, LegStrikePrice_24, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_458478452"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_870722957"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_460268385"}, InstrumentLeg_24);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_2067887616"}, InstrumentLeg_24);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_24;
    LegUnitOfMeasureQty_24.setString("20409601");
set_field(noLegs_0_1, LegUnitOfMeasureQty_24, InstrumentLeg_24);
    all_values.push_back(InstrumentLeg_24);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_45;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1007238163"}, LegSecAltIDGrp_NoLegSecurityAltID_45);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_803835229"}, LegSecAltIDGrp_NoLegSecurityAltID_45);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_45);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_46;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_341129724"}, LegSecAltIDGrp_NoLegSecurityAltID_46);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_969452789"}, LegSecAltIDGrp_NoLegSecurityAltID_46);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_46);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_47;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_1746574983"}, LegSecAltIDGrp_NoLegSecurityAltID_47);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_75100965"}, LegSecAltIDGrp_NoLegSecurityAltID_47);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_47);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_16;
  FIX::AttachmentPoint AttachmentPoint_16;
  AttachmentPoint_16.setString("27.530000");
set_field(msg, AttachmentPoint_16, Instrument_16);
  set_field(msg, FIX::CFICode{"STRING_479530270"}, Instrument_16);
  set_field(msg, FIX::CPProgram{99}, Instrument_16);
  set_field(msg, FIX::CPRegType{"STRING_1040042772"}, Instrument_16);
  FIX::CapPrice CapPrice_16;
  CapPrice_16.setString("11218436");
set_field(msg, CapPrice_16, Instrument_16);
  FIX::ContractMultiplier ContractMultiplier_16;
  ContractMultiplier_16.setString("16903403");
set_field(msg, ContractMultiplier_16, Instrument_16);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_16);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1029122203"}, Instrument_16);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_954284535"}, Instrument_16);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1407190756"}, Instrument_16);
  FIX::CouponRate CouponRate_16;
  CouponRate_16.setString("46.150000");
set_field(msg, CouponRate_16, Instrument_16);
  set_field(msg, FIX::CreditRating{"STRING_30209792"}, Instrument_16);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1965370283"}, Instrument_16);
  FIX::DetachmentPoint DetachmentPoint_16;
  DetachmentPoint_16.setString("17.070000");
set_field(msg, DetachmentPoint_16, Instrument_16);
  set_field(msg, FIX::EncodedIssuer{"DATA_921534884"}, Instrument_16);
  set_field(msg, FIX::EncodedIssuerLen{322991050}, Instrument_16);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1309019108"}, Instrument_16);
  set_field(msg, FIX::EncodedSecurityDescLen{2129257352}, Instrument_16);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_16);
  FIX::Factor Factor_16;
  Factor_16.setString("17674975");
set_field(msg, Factor_16, Instrument_16);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_16);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_16);
  FIX::FloorPrice FloorPrice_16;
  FloorPrice_16.setString("16879015");
set_field(msg, FloorPrice_16, Instrument_16);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_16);
  set_field(msg, FIX::InstrRegistry{"STRING_183194955"}, Instrument_16);
  set_field(msg, FIX::InstrmtAssignmentMethod{'5'}, Instrument_16);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1549808439"}, Instrument_16);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_524324679"}, Instrument_16);
  set_field(msg, FIX::Issuer{"STRING_1517108832"}, Instrument_16);
  set_field(msg, FIX::ListMethod{0}, Instrument_16);
  set_field(msg, FIX::LocaleOfIssue{"STRING_599425645"}, Instrument_16);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1381697938"}, Instrument_16);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1628430044"}, Instrument_16);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1023699999"}, Instrument_16);
  FIX::MinPriceIncrement MinPriceIncrement_16;
  MinPriceIncrement_16.setString("2742570");
set_field(msg, MinPriceIncrement_16, Instrument_16);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_16;
  MinPriceIncrementAmount_16.setString("6027900");
set_field(msg, MinPriceIncrementAmount_16, Instrument_16);
  set_field(msg, FIX::NTPositionLimit{566556748}, Instrument_16);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_16;
  NotionalPercentageOutstanding_16.setString("16.640000");
set_field(msg, NotionalPercentageOutstanding_16, Instrument_16);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_16);
  FIX::OptPayoutAmount OptPayoutAmount_16;
  OptPayoutAmount_16.setString("15208412");
set_field(msg, OptPayoutAmount_16, Instrument_16);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_16);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_16;
  OriginalNotionalPercentageOutstanding_16.setString("31.840000");
set_field(msg, OriginalNotionalPercentageOutstanding_16, Instrument_16);
  set_field(msg, FIX::Pool{"STRING_1551051076"}, Instrument_16);
  set_field(msg, FIX::PositionLimit{550495407}, Instrument_16);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_16);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_325102312"}, Instrument_16);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_16;
  PriceUnitOfMeasureQty_16.setString("8734864");
set_field(msg, PriceUnitOfMeasureQty_16, Instrument_16);
  set_field(msg, FIX::Product{3}, Instrument_16);
  set_field(msg, FIX::ProductComplex{"STRING_306876016"}, Instrument_16);
  set_field(msg, FIX::PutOrCall{0}, Instrument_16);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1699517912"}, Instrument_16);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1159372677"}, Instrument_16);
  FIX::RepurchaseRate RepurchaseRate_16;
  RepurchaseRate_16.setString("12.880000");
set_field(msg, RepurchaseRate_16, Instrument_16);
  set_field(msg, FIX::RepurchaseTerm{1239935793}, Instrument_16);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_16);
  set_field(msg, FIX::SecurityDesc{"STRING_1743976244"}, Instrument_16);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1787591836"}, Instrument_16);
  set_field(msg, FIX::SecurityGroup{"STRING_1307670678"}, Instrument_16);
  set_field(msg, FIX::SecurityID{"STRING_120817275"}, Instrument_16);
  set_field(msg, FIX::SecurityIDSource{"STRING_G"}, Instrument_16);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_16);
  set_field(msg, FIX::SecuritySubType{"STRING_720242920"}, Instrument_16);
  set_field(msg, FIX::SecurityType{"STRING_BDN"}, Instrument_16);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_16);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_16);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_665688373"}, Instrument_16);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_392823215"}, Instrument_16);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_16);
  FIX::StrikeMultiplier StrikeMultiplier_16;
  StrikeMultiplier_16.setString("20247354");
set_field(msg, StrikeMultiplier_16, Instrument_16);
  FIX::StrikePrice StrikePrice_16;
  StrikePrice_16.setString("16838573");
set_field(msg, StrikePrice_16, Instrument_16);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_16);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_16;
  StrikePriceBoundaryPrecision_16.setString("49.680000");
set_field(msg, StrikePriceBoundaryPrecision_16, Instrument_16);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_16);
  FIX::StrikeValue StrikeValue_16;
  StrikeValue_16.setString("12742105");
set_field(msg, StrikeValue_16, Instrument_16);
  set_field(msg, FIX::Symbol{"STRING_1063069860"}, Instrument_16);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_16);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_16);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_16);
  set_field(msg, FIX::UnitOfMeasure{"STRING_tn"}, Instrument_16);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_16;
  UnitOfMeasureQty_16.setString("9872130");
set_field(msg, UnitOfMeasureQty_16, Instrument_16);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_16);
  all_values.push_back(Instrument_16);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_37;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_37);
    FIX::ComplexEventPrice ComplexEventPrice_37;
    ComplexEventPrice_37.setString("17870602");
set_field(noComplexEvents_0_0, ComplexEventPrice_37, ComplexEvents_NoComplexEvents_37);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_37);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_37;
    ComplexEventPriceBoundaryPrecision_37.setString("69.440000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_37, ComplexEvents_NoComplexEvents_37);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_37);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_37);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_37;
    ComplexOptPayoutAmount_37.setString("1178205");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_37, ComplexEvents_NoComplexEvents_37);
    all_values.push_back(ComplexEvents_NoComplexEvents_37);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_78;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 22, 32, 3, 12, 2005)}, ComplexEventDates_NoComplexEventDates_78);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 23, 59, 21, 9, 2000)}, ComplexEventDates_NoComplexEventDates_78);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_78);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_157;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 5, 16)}, ComplexEventTimes_NoComplexEventTimes_157);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 32, 46)}, ComplexEventTimes_NoComplexEventTimes_157);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_157);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_158;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 55, 13)}, ComplexEventTimes_NoComplexEventTimes_158);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 24, 15)}, ComplexEventTimes_NoComplexEventTimes_158);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_158);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_79;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 37, 42, 16, 5, 2017)}, ComplexEventDates_NoComplexEventDates_79);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 5, 54, 9, 2, 2007)}, ComplexEventDates_NoComplexEventDates_79);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_79);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_159;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 21, 17)}, ComplexEventTimes_NoComplexEventTimes_159);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 49, 7)}, ComplexEventTimes_NoComplexEventTimes_159);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_159);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_80;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 54, 48, 3, 9, 2011)}, ComplexEventDates_NoComplexEventDates_80);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 21, 51, 7, 10, 2001)}, ComplexEventDates_NoComplexEventDates_80);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_80);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_160;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 46, 15)}, ComplexEventTimes_NoComplexEventTimes_160);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 40, 37)}, ComplexEventTimes_NoComplexEventTimes_160);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_160);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_161;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 58, 33)}, ComplexEventTimes_NoComplexEventTimes_161);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 14, 3)}, ComplexEventTimes_NoComplexEventTimes_161);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_161);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_162;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 57, 33)}, ComplexEventTimes_NoComplexEventTimes_162);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 38, 32)}, ComplexEventTimes_NoComplexEventTimes_162);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_162);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_38;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_38);
    FIX::ComplexEventPrice ComplexEventPrice_38;
    ComplexEventPrice_38.setString("15804860");
set_field(noComplexEvents_0_1, ComplexEventPrice_38, ComplexEvents_NoComplexEvents_38);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_38);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_38;
    ComplexEventPriceBoundaryPrecision_38.setString("78.140000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_38, ComplexEvents_NoComplexEvents_38);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_38);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_38);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_38;
    ComplexOptPayoutAmount_38.setString("13615070");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_38, ComplexEvents_NoComplexEvents_38);
    all_values.push_back(ComplexEvents_NoComplexEvents_38);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_81;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 53, 59, 8, 3, 2000)}, ComplexEventDates_NoComplexEventDates_81);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 27, 21, 17, 1, 2005)}, ComplexEventDates_NoComplexEventDates_81);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_81);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_163;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 49, 45)}, ComplexEventTimes_NoComplexEventTimes_163);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 15, 19)}, ComplexEventTimes_NoComplexEventTimes_163);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_163);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_82;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 34, 15, 16, 10, 2014)}, ComplexEventDates_NoComplexEventDates_82);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 35, 47, 11, 4, 2017)}, ComplexEventDates_NoComplexEventDates_82);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_82);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_164;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 19, 24)}, ComplexEventTimes_NoComplexEventTimes_164);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 51, 57)}, ComplexEventTimes_NoComplexEventTimes_164);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_164);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_83;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 38, 1, 24, 2, 2010)}, ComplexEventDates_NoComplexEventDates_83);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 15, 1, 5, 12, 2003)}, ComplexEventDates_NoComplexEventDates_83);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_83);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_165;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 2, 57)}, ComplexEventTimes_NoComplexEventTimes_165);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 54, 18)}, ComplexEventTimes_NoComplexEventTimes_165);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_165);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_166;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 37, 36)}, ComplexEventTimes_NoComplexEventTimes_166);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 19, 47)}, ComplexEventTimes_NoComplexEventTimes_166);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_166);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_167;
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 25, 41)}, ComplexEventTimes_NoComplexEventTimes_167);
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 49, 23)}, ComplexEventTimes_NoComplexEventTimes_167);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_167);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_39;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_39);
    FIX::ComplexEventPrice ComplexEventPrice_39;
    ComplexEventPrice_39.setString("2942037");
set_field(noComplexEvents_0_2, ComplexEventPrice_39, ComplexEvents_NoComplexEvents_39);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_39);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_39;
    ComplexEventPriceBoundaryPrecision_39.setString("61.850000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_39, ComplexEvents_NoComplexEvents_39);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_39);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_39);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_39;
    ComplexOptPayoutAmount_39.setString("4982208");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_39, ComplexEvents_NoComplexEvents_39);
    all_values.push_back(ComplexEvents_NoComplexEvents_39);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_84;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 27, 17, 11, 10, 2006)}, ComplexEventDates_NoComplexEventDates_84);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 13, 43, 25, 3, 2015)}, ComplexEventDates_NoComplexEventDates_84);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_84);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_168;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 9, 59)}, ComplexEventTimes_NoComplexEventTimes_168);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 48, 55)}, ComplexEventTimes_NoComplexEventTimes_168);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_168);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_169;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 12, 2)}, ComplexEventTimes_NoComplexEventTimes_169);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 54, 28)}, ComplexEventTimes_NoComplexEventTimes_169);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_169);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_37;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_812474141"}, EvntGrp_NoEvents_37);
    FIX::EventPx EventPx_37;
    EventPx_37.setString("19237859");
set_field(noEvents_0_0, EventPx_37, EvntGrp_NoEvents_37);
    set_field(noEvents_0_0, FIX::EventText{"STRING_304053421"}, EvntGrp_NoEvents_37);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(20, 37, 52, 7, 7, 2003)}, EvntGrp_NoEvents_37);
    set_field(noEvents_0_0, FIX::EventType{1}, EvntGrp_NoEvents_37);
    all_values.push_back(EvntGrp_NoEvents_37);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_29;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_698390602"}, InstrumentParties_NoInstrumentParties_29);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_29);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{578109878}, InstrumentParties_NoInstrumentParties_29);
    all_values.push_back(InstrumentParties_NoInstrumentParties_29);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_838236374"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1400287777}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_60);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_30;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1866647858"}, InstrumentParties_NoInstrumentParties_30);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_30);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{809235438}, InstrumentParties_NoInstrumentParties_30);
    all_values.push_back(InstrumentParties_NoInstrumentParties_30);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1314524794"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{512386855}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_61);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_960437190"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{282454228}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_62);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_31;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_801746093"}, InstrumentParties_NoInstrumentParties_31);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_31);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1896088163}, InstrumentParties_NoInstrumentParties_31);
    all_values.push_back(InstrumentParties_NoInstrumentParties_31);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_69990306"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{561078656}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_63);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_30;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_374043727"}, SecAltIDGrp_NoSecurityAltID_30);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_612631232"}, SecAltIDGrp_NoSecurityAltID_30);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_30);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_31;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_215170089"}, SecAltIDGrp_NoSecurityAltID_31);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1674864524"}, SecAltIDGrp_NoSecurityAltID_31);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_31);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_32;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_331516696"}, SecAltIDGrp_NoSecurityAltID_32);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_483941844"}, SecAltIDGrp_NoSecurityAltID_32);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_32);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_32;
  set_field(msg, FIX::SecurityXML{"XMLDATA_160777458"}, SecurityXML_32);
  set_field(msg, FIX::SecurityXMLLen{1387838384}, SecurityXML_32);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_969764445"}, SecurityXML_32);
  all_values.push_back(SecurityXML_32);
  all_compo_names.insert("..");

  // PegInstructions
  multiset<string> PegInstructions_0;
  set_field(msg, FIX::PegLimitType{0}, PegInstructions_0);
  set_field(msg, FIX::PegMoveType{0}, PegInstructions_0);
  set_field(msg, FIX::PegOffsetType{1}, PegInstructions_0);
  FIX::PegOffsetValue PegOffsetValue_0;
  PegOffsetValue_0.setString("15325563");
set_field(msg, PegOffsetValue_0, PegInstructions_0);
  set_field(msg, FIX::PegPriceType{1}, PegInstructions_0);
  set_field(msg, FIX::PegRoundDirection{2}, PegInstructions_0);
  set_field(msg, FIX::PegScope{4}, PegInstructions_0);
  set_field(msg, FIX::PegSecurityDesc{"STRING_1633290874"}, PegInstructions_0);
  set_field(msg, FIX::PegSecurityID{"STRING_628488593"}, PegInstructions_0);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_1594595885"}, PegInstructions_0);
  set_field(msg, FIX::PegSymbol{"STRING_459673012"}, PegInstructions_0);
  all_values.push_back(PegInstructions_0);
  all_compo_names.insert(".");

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_0;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_2106982740"}, RootParties_NoRootPartyIDs_0);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_0);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{77983968}, RootParties_NoRootPartyIDs_0);
    all_values.push_back(RootParties_NoRootPartyIDs_0);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_0;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_1914528704"}, RootSubParties_NoRootPartySubIDs_0);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1974072131}, RootSubParties_NoRootPartySubIDs_0);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_0);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_1;
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubID{"STRING_1885374727"}, RootSubParties_NoRootPartySubIDs_1);
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubIDType{1984519010}, RootSubParties_NoRootPartySubIDs_1);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_1);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_1;
    set_field(noRootPartyIDs_0_1, FIX::RootPartyID{"STRING_387667139"}, RootParties_NoRootPartyIDs_1);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyIDSource{'6'}, RootParties_NoRootPartyIDs_1);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyRole{211079089}, RootParties_NoRootPartyIDs_1);
    all_values.push_back(RootParties_NoRootPartyIDs_1);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_2;
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubID{"STRING_853492997"}, RootSubParties_NoRootPartySubIDs_2);
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubIDType{1885943613}, RootSubParties_NoRootPartySubIDs_2);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_2);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_3;
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubID{"STRING_1331815068"}, RootSubParties_NoRootPartySubIDs_3);
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubIDType{1337434841}, RootSubParties_NoRootPartySubIDs_3);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_3);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_2;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_4;
      set_field(noRootPartySubIDs_1_1_2, FIX::RootPartySubID{"STRING_2046721072"}, RootSubParties_NoRootPartySubIDs_4);
      set_field(noRootPartySubIDs_1_1_2, FIX::RootPartySubIDType{572169804}, RootSubParties_NoRootPartySubIDs_4);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_4);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_2);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_0;
    set_field(noSides_0_0, FIX::Account{"STRING_853683863"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AccountType{6}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AcctIDSource{3}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AllocID{"STRING_238756532"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::BookingType{1}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::BookingUnit{'0'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CashMargin{'2'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_1910849034"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ClOrdLinkID{"STRING_866472897"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ClearingFeeIndicator{"STRING_H"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CoveredOrUncovered{0}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CustOrderCapacity{2}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::DayBookingInst{'0'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedText{"DATA_1643148600"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedTextLen{739986605}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ForexReq{false}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderCapacity{'A'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_A"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrigClOrdID{"STRING_929864574"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PositionEffect{'F'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PreTradeAnonymity{true}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PreallocMethod{'0'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::QtyType{2}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_1954540600"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SettlCurrency{"JPY"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Side{'6'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideComplianceID{"STRING_1611631673"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(9, 11, 41, 12, 12, 2005)}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SolicitedFlag{true}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Text{"STRING_715321575"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeDate{"LOCALMKTDATE_1065079225"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_115396866"}, SideCrossOrdModGrp_NoSides_0);
    all_values.push_back(SideCrossOrdModGrp_NoSides_0);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_8;
    set_field(noSides_0_0, FIX::CommCurrency{"CAN"}, CommissionData_8);
    set_field(noSides_0_0, FIX::CommType{'3'}, CommissionData_8);
    FIX::Commission Commission_8;
    Commission_8.setString("963134");
set_field(noSides_0_0, Commission_8, CommissionData_8);
    set_field(noSides_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_8);
    all_values.push_back(CommissionData_8);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_0;
    FIX::CashOrderQty CashOrderQty_0;
    CashOrderQty_0.setString("19815838");
set_field(noSides_0_0, CashOrderQty_0, OrderQtyData_0);
    FIX::OrderPercent OrderPercent_0;
    OrderPercent_0.setString("0.660000");
set_field(noSides_0_0, OrderPercent_0, OrderQtyData_0);
    FIX::OrderQty OrderQty_8;
    OrderQty_8.setString("10115265");
set_field(noSides_0_0, OrderQty_8, OrderQtyData_0);
    set_field(noSides_0_0, FIX::RoundingDirection{'0'}, OrderQtyData_0);
    FIX::RoundingModulus RoundingModulus_0;
    RoundingModulus_0.setString("14028751");
set_field(noSides_0_0, RoundingModulus_0, OrderQtyData_0);
    all_values.push_back(OrderQtyData_0);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_36;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_344039243"}, Parties_NoPartyIDs_36);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_36);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{64}, Parties_NoPartyIDs_36);
      all_values.push_back(Parties_NoPartyIDs_36);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_77;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_16690688"}, PtysSubGrp_NoPartySubIDs_77);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_77);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_77);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_78;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_851631778"}, PtysSubGrp_NoPartySubIDs_78);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_78);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_78);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_79;
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubID{"STRING_1100439863"}, PtysSubGrp_NoPartySubIDs_79);
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_79);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_79);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_37;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_719120887"}, Parties_NoPartyIDs_37);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_37);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{14}, Parties_NoPartyIDs_37);
      all_values.push_back(Parties_NoPartyIDs_37);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_80;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1201640798"}, PtysSubGrp_NoPartySubIDs_80);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_80);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_80);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_81;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_1145625687"}, PtysSubGrp_NoPartySubIDs_81);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_81);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_81);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_38;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_708400811"}, Parties_NoPartyIDs_38);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'5'}, Parties_NoPartyIDs_38);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{59}, Parties_NoPartyIDs_38);
      all_values.push_back(Parties_NoPartyIDs_38);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_82;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_1599457817"}, PtysSubGrp_NoPartySubIDs_82);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_82);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_82);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_0;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_1433558033"}, PreAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{136403076}, PreAllocGrp_NoAllocs_0);
      FIX::AllocQty AllocQty_11;
      AllocQty_11.setString("9283053");
set_field(noAllocs_0_1_0, AllocQty_11, PreAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"USD"}, PreAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_722212829"}, PreAllocGrp_NoAllocs_0);
      all_values.push_back(PreAllocGrp_NoAllocs_0);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_43;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_1748911968"}, NestedParties_NoNestedPartyIDs_43);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_43);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{529271205}, NestedParties_NoNestedPartyIDs_43);
        all_values.push_back(NestedParties_NoNestedPartyIDs_43);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_93;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_1573116025"}, NstdPtysSubGrp_NoNestedPartySubIDs_93);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{1380902983}, NstdPtysSubGrp_NoNestedPartySubIDs_93);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_93);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_94;
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubID{"STRING_773681718"}, NstdPtysSubGrp_NoNestedPartySubIDs_94);
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubIDType{526072240}, NstdPtysSubGrp_NoNestedPartySubIDs_94);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_94);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_95;
          set_field(noNestedPartySubIDs_0_0_0_3_2, FIX::NestedPartySubID{"STRING_1181056611"}, NstdPtysSubGrp_NoNestedPartySubIDs_95);
          set_field(noNestedPartySubIDs_0_0_0_3_2, FIX::NestedPartySubIDType{1492802605}, NstdPtysSubGrp_NoNestedPartySubIDs_95);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_95);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_1;
      set_field(noAllocs_0_1_1, FIX::AllocAccount{"STRING_1250375767"}, PreAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocAcctIDSource{783415952}, PreAllocGrp_NoAllocs_1);
      FIX::AllocQty AllocQty_12;
      AllocQty_12.setString("1389131");
set_field(noAllocs_0_1_1, AllocQty_12, PreAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::IndividualAllocID{"STRING_1284538852"}, PreAllocGrp_NoAllocs_1);
      all_values.push_back(PreAllocGrp_NoAllocs_1);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_44;
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyID{"STRING_1135138350"}, NestedParties_NoNestedPartyIDs_44);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_44);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyRole{1425284839}, NestedParties_NoNestedPartyIDs_44);
        all_values.push_back(NestedParties_NoNestedPartyIDs_44);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_96;
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubID{"STRING_1997535575"}, NstdPtysSubGrp_NoNestedPartySubIDs_96);
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubIDType{725387849}, NstdPtysSubGrp_NoNestedPartySubIDs_96);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_96);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_45;
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyID{"STRING_1149142663"}, NestedParties_NoNestedPartyIDs_45);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_45);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyRole{861790925}, NestedParties_NoNestedPartyIDs_45);
        all_values.push_back(NestedParties_NoNestedPartyIDs_45);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_97;
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubID{"STRING_1813978218"}, NstdPtysSubGrp_NoNestedPartySubIDs_97);
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubIDType{253585509}, NstdPtysSubGrp_NoNestedPartySubIDs_97);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_97);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_2;
      set_field(noAllocs_0_1_2, FIX::AllocAccount{"STRING_652177149"}, PreAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::AllocAcctIDSource{540902072}, PreAllocGrp_NoAllocs_2);
      FIX::AllocQty AllocQty_13;
      AllocQty_13.setString("20024974");
set_field(noAllocs_0_1_2, AllocQty_13, PreAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::AllocSettlCurrency{"CAN"}, PreAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::IndividualAllocID{"STRING_1620616486"}, PreAllocGrp_NoAllocs_2);
      all_values.push_back(PreAllocGrp_NoAllocs_2);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_46;
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyID{"STRING_303592613"}, NestedParties_NoNestedPartyIDs_46);
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_46);
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyRole{540705954}, NestedParties_NoNestedPartyIDs_46);
        all_values.push_back(NestedParties_NoNestedPartyIDs_46);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_98;
          set_field(noNestedPartySubIDs_0_2_0_3_0, FIX::NestedPartySubID{"STRING_1739617161"}, NstdPtysSubGrp_NoNestedPartySubIDs_98);
          set_field(noNestedPartySubIDs_0_2_0_3_0, FIX::NestedPartySubIDType{1791081721}, NstdPtysSubGrp_NoNestedPartySubIDs_98);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_98);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_99;
          set_field(noNestedPartySubIDs_0_2_0_3_1, FIX::NestedPartySubID{"STRING_120581529"}, NstdPtysSubGrp_NoNestedPartySubIDs_99);
          set_field(noNestedPartySubIDs_0_2_0_3_1, FIX::NestedPartySubIDType{1878530325}, NstdPtysSubGrp_NoNestedPartySubIDs_99);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_99);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_100;
          set_field(noNestedPartySubIDs_0_2_0_3_2, FIX::NestedPartySubID{"STRING_2095614638"}, NstdPtysSubGrp_NoNestedPartySubIDs_100);
          set_field(noNestedPartySubIDs_0_2_0_3_2, FIX::NestedPartySubIDType{547319068}, NstdPtysSubGrp_NoNestedPartySubIDs_100);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_100);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_2);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_47;
        set_field(noNestedPartyIDs_0_2_2_1, FIX::NestedPartyID{"STRING_1015585529"}, NestedParties_NoNestedPartyIDs_47);
        set_field(noNestedPartyIDs_0_2_2_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_47);
        set_field(noNestedPartyIDs_0_2_2_1, FIX::NestedPartyRole{1682457418}, NestedParties_NoNestedPartyIDs_47);
        all_values.push_back(NestedParties_NoNestedPartyIDs_47);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_101;
          set_field(noNestedPartySubIDs_0_2_1_3_0, FIX::NestedPartySubID{"STRING_1447427471"}, NstdPtysSubGrp_NoNestedPartySubIDs_101);
          set_field(noNestedPartySubIDs_0_2_1_3_0, FIX::NestedPartySubIDType{767337726}, NstdPtysSubGrp_NoNestedPartySubIDs_101);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_101);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_102;
          set_field(noNestedPartySubIDs_0_2_1_3_1, FIX::NestedPartySubID{"STRING_1263715214"}, NstdPtysSubGrp_NoNestedPartySubIDs_102);
          set_field(noNestedPartySubIDs_0_2_1_3_1, FIX::NestedPartySubIDType{25331672}, NstdPtysSubGrp_NoNestedPartySubIDs_102);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_102);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_103;
          set_field(noNestedPartySubIDs_0_2_1_3_2, FIX::NestedPartySubID{"STRING_1916480389"}, NstdPtysSubGrp_NoNestedPartySubIDs_103);
          set_field(noNestedPartySubIDs_0_2_1_3_2, FIX::NestedPartySubIDType{399841526}, NstdPtysSubGrp_NoNestedPartySubIDs_103);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_103);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_2);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_48;
        set_field(noNestedPartyIDs_0_2_2_2, FIX::NestedPartyID{"STRING_887122598"}, NestedParties_NoNestedPartyIDs_48);
        set_field(noNestedPartyIDs_0_2_2_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_48);
        set_field(noNestedPartyIDs_0_2_2_2, FIX::NestedPartyRole{66336097}, NestedParties_NoNestedPartyIDs_48);
        all_values.push_back(NestedParties_NoNestedPartyIDs_48);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_104;
          set_field(noNestedPartySubIDs_0_2_2_3_0, FIX::NestedPartySubID{"STRING_351138210"}, NstdPtysSubGrp_NoNestedPartySubIDs_104);
          set_field(noNestedPartySubIDs_0_2_2_3_0, FIX::NestedPartySubIDType{607238169}, NstdPtysSubGrp_NoNestedPartySubIDs_104);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_104);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_105;
          set_field(noNestedPartySubIDs_0_2_2_3_1, FIX::NestedPartySubID{"STRING_995721937"}, NstdPtysSubGrp_NoNestedPartySubIDs_105);
          set_field(noNestedPartySubIDs_0_2_2_3_1, FIX::NestedPartySubIDType{940139546}, NstdPtysSubGrp_NoNestedPartySubIDs_105);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_105);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_106;
          set_field(noNestedPartySubIDs_0_2_2_3_2, FIX::NestedPartySubID{"STRING_1677411446"}, NstdPtysSubGrp_NoNestedPartySubIDs_106);
          set_field(noNestedPartySubIDs_0_2_2_3_2, FIX::NestedPartySubIDType{468854775}, NstdPtysSubGrp_NoNestedPartySubIDs_106);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_106);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_2);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_9;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_Treasury"}, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1495479215"}, SpreadOrBenchmarkCurveData_9);
  FIX::BenchmarkPrice BenchmarkPrice_9;
  BenchmarkPrice_9.setString("13181696");
set_field(msg, BenchmarkPrice_9, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkPriceType{307802844}, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1139077288"}, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1438751165"}, SpreadOrBenchmarkCurveData_9);
  FIX::Spread Spread_9;
  Spread_9.setString("388495");
set_field(msg, Spread_9, SpreadOrBenchmarkCurveData_9);
  all_values.push_back(SpreadOrBenchmarkCurveData_9);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_19;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_CPY"}, Stipulations_NoStipulations_19);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1054435051"}, Stipulations_NoStipulations_19);
    all_values.push_back(Stipulations_NoStipulations_19);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_20;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_PROTECT"}, Stipulations_NoStipulations_20);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1521044003"}, Stipulations_NoStipulations_20);
    all_values.push_back(Stipulations_NoStipulations_20);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_21;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_AVFICO"}, Stipulations_NoStipulations_21);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_409294735"}, Stipulations_NoStipulations_21);
    all_values.push_back(Stipulations_NoStipulations_21);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_0;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_1584329904"}, StrategyParametersGrp_NoStrategyParameters_0);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{15}, StrategyParametersGrp_NoStrategyParameters_0);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_2057378470"}, StrategyParametersGrp_NoStrategyParameters_0);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_0);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_0;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_6"}, TrdgSesGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_0);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_0);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_1;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_1);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_1);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_1);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_2;
    set_field(noTradingSessions_0_2, FIX::TradingSessionID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_2);
    set_field(noTradingSessions_0_2, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_2);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_2);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_0;
  set_field(msg, FIX::TriggerAction{'2'}, TriggeringInstruction_0);
  FIX::TriggerNewPrice TriggerNewPrice_0;
  TriggerNewPrice_0.setString("9001336");
set_field(msg, TriggerNewPrice_0, TriggeringInstruction_0);
  FIX::TriggerNewQty TriggerNewQty_0;
  TriggerNewQty_0.setString("401898");
set_field(msg, TriggerNewQty_0, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerOrderType{'2'}, TriggeringInstruction_0);
  FIX::TriggerPrice TriggerPrice_0;
  TriggerPrice_0.setString("18549069");
set_field(msg, TriggerPrice_0, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerPriceDirection{'U'}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerPriceType{'5'}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerPriceTypeScope{'3'}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_1191879894"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerSecurityID{"STRING_655538704"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_194496108"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerSymbol{"STRING_483147411"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_694388225"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_1281704387"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerType{'1'}, TriggeringInstruction_0);
  all_values.push_back(TriggeringInstruction_0);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_30;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_243571650"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1842778000}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2069437966"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{652866385}, UnderlyingInstrument_30);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_30;
    UnderlyingAdjustedQuantity_30.setString("19836760");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_30, UnderlyingInstrument_30);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_30;
    UnderlyingAllocationPercent_30.setString("42.220000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_30, UnderlyingInstrument_30);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_30;
    UnderlyingAttachmentPoint_30.setString("27.930000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1893570904"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1342972005"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_261758150"}, UnderlyingInstrument_30);
    FIX::UnderlyingCapValue UnderlyingCapValue_30;
    UnderlyingCapValue_30.setString("15024267");
set_field(noUnderlyings_0_0, UnderlyingCapValue_30, UnderlyingInstrument_30);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_30;
    UnderlyingCashAmount_30.setString("12459958");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_30);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_30;
    UnderlyingContractMultiplier_30.setString("14624208");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1756257933}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1887427017"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_215070873"}, UnderlyingInstrument_30);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_30;
    UnderlyingCouponRate_30.setString("77.800000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1519493546"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_30);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_30;
    UnderlyingCurrentValue_30.setString("18672294");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_30, UnderlyingInstrument_30);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_30;
    UnderlyingDetachmentPoint_30.setString("65.930000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_30, UnderlyingInstrument_30);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_30;
    UnderlyingDirtyPrice_30.setString("7145542");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_30, UnderlyingInstrument_30);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_30;
    UnderlyingEndPrice_30.setString("3752844");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_30, UnderlyingInstrument_30);
    FIX::UnderlyingEndValue UnderlyingEndValue_30;
    UnderlyingEndValue_30.setString("13198927");
set_field(noUnderlyings_0_0, UnderlyingEndValue_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1197701696}, UnderlyingInstrument_30);
    FIX::UnderlyingFXRate UnderlyingFXRate_30;
    UnderlyingFXRate_30.setString("10696726");
set_field(noUnderlyings_0_0, UnderlyingFXRate_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_30);
    FIX::UnderlyingFactor UnderlyingFactor_30;
    UnderlyingFactor_30.setString("15194356");
set_field(noUnderlyings_0_0, UnderlyingFactor_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{671012316}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_697685090"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1214730045"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_592966635"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1350551476"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1050922478"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2099250857"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_290560621"}, UnderlyingInstrument_30);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_30;
    UnderlyingNotionalPercentageOutstanding_30.setString("97.340000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_30);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_30;
    UnderlyingOriginalNotionalPercentageOutstanding_30.setString("87.710000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_151952874"}, UnderlyingInstrument_30);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_30;
    UnderlyingPriceUnitOfMeasureQty_30.setString("3932514");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1129050387}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1614373755}, UnderlyingInstrument_30);
    FIX::UnderlyingPx UnderlyingPx_30;
    UnderlyingPx_30.setString("20257");
set_field(noUnderlyings_0_0, UnderlyingPx_30, UnderlyingInstrument_30);
    FIX::UnderlyingQty UnderlyingQty_30;
    UnderlyingQty_30.setString("8689937");
set_field(noUnderlyings_0_0, UnderlyingQty_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1829444628"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1798473516"}, UnderlyingInstrument_30);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_30;
    UnderlyingRepurchaseRate_30.setString("36.550000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1751938753}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1321147906"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2108233061"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_729851698"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_2035702191"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_336033876"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_2049744399"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1085920240"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1405706564"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_356374191"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_30);
    FIX::UnderlyingStartValue UnderlyingStartValue_30;
    UnderlyingStartValue_30.setString("20767188");
set_field(noUnderlyings_0_0, UnderlyingStartValue_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1054059282"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_30);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_30;
    UnderlyingStrikePrice_30.setString("2571271");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_30, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_576041160"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_473969077"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_547687731"}, UnderlyingInstrument_30);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1373050895"}, UnderlyingInstrument_30);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_30;
    UnderlyingUnitOfMeasureQty_30.setString("17687082");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_30, UnderlyingInstrument_30);
    all_values.push_back(UnderlyingInstrument_30);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_66;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1525003769"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_14476094"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_66);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_60;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_991893876"}, UnderlyingStipulations_NoUnderlyingStips_60);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_16501830"}, UnderlyingStipulations_NoUnderlyingStips_60);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_60);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_61;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_950566998"}, UnderlyingStipulations_NoUnderlyingStips_61);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_673854856"}, UnderlyingStipulations_NoUnderlyingStips_61);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_61);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_60;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1191570653"}, UndlyInstrumentParties_NoUndlyInstrumentParties_60);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_60);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{988639605}, UndlyInstrumentParties_NoUndlyInstrumentParties_60);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_60);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1008161660"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{876858148}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1488353942"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{910422411}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1962778388"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{746576858}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_116);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_4;
  FIX::Yield Yield_4;
  Yield_4.setString("66.030000");
set_field(msg, Yield_4, YieldData_4);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_273167025"}, YieldData_4);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_675812091"}, YieldData_4);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_4;
  YieldRedemptionPrice_4.setString("1733722");
set_field(msg, YieldRedemptionPrice_4, YieldData_4);
  set_field(msg, FIX::YieldRedemptionPriceType{1945769355}, YieldData_4);
  set_field(msg, FIX::YieldType{"STRING_OPENAVG"}, YieldData_4);
  all_values.push_back(YieldData_4);
  all_compo_names.insert(".");


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
