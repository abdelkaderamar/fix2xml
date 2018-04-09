#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::CrossOrderCancelReplaceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelReplaceRequest_0;
  set_field(msg, FIX::CancellationRights{'M'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ComplianceID{"STRING_718709708"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::CrossID{"STRING_1757039005"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::CrossPrioritization{2}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::CrossType{1}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::Currency{"GBP"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::Designation{"STRING_1829737841"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(18, 5, 14, 6, 5, 2001)}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_1215830235"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExDestinationIDSource{'C'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_3"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_1599467569"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(7, 23, 1, 20, 5, 2000)}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::GTBookingInst{2}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::HandlInst{'3'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::HostCrossID{"STRING_623023765"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::IOIID{"STRING_1262615251"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::LocateReqd{false}, CrossOrderCancelReplaceRequest_0);
  FIX::MatchIncrement MatchIncrement_0;
  MatchIncrement_0.setString("20050562");
set_field(msg, MatchIncrement_0, CrossOrderCancelReplaceRequest_0);
  FIX::MaxFloor MaxFloor_0;
  MaxFloor_0.setString("19813249");
set_field(msg, MaxFloor_0, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::MaxPriceLevels{526817932}, CrossOrderCancelReplaceRequest_0);
  FIX::MaxShow MaxShow_0;
  MaxShow_0.setString("11773692");
set_field(msg, MaxShow_0, CrossOrderCancelReplaceRequest_0);
  FIX::MinQty MinQty_0;
  MinQty_0.setString("7615979");
set_field(msg, MinQty_0, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'1'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrdType{'I'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrderID{"STRING_443852189"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::OrigCrossID{"STRING_1290510915"}, CrossOrderCancelReplaceRequest_0);
  FIX::ParticipationRate ParticipationRate_0;
  ParticipationRate_0.setString("27.070000");
set_field(msg, ParticipationRate_0, CrossOrderCancelReplaceRequest_0);
  FIX::PrevClosePx PrevClosePx_0;
  PrevClosePx_0.setString("5475564");
set_field(msg, PrevClosePx_0, CrossOrderCancelReplaceRequest_0);
  FIX::Price Price_8;
  Price_8.setString("16781341");
set_field(msg, Price_8, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::PriceProtectionScope{'1'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::PriceType{3}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::ProcessCode{'4'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::QuoteID{"STRING_533180716"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::RegistID{"STRING_1378790411"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_548004364"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::SettlType{"STRING_6"}, CrossOrderCancelReplaceRequest_0);
  FIX::StopPx StopPx_0;
  StopPx_0.setString("9664151");
set_field(msg, StopPx_0, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TargetStrategy{1}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_1928954661"}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TimeInForce{'9'}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TransBkdTime{FIX::UTCTIMESTAMP(14, 47, 49, 15, 5, 2006)}, CrossOrderCancelReplaceRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(20, 43, 54, 7, 4, 2006)}, CrossOrderCancelReplaceRequest_0);
  all_values.push_back(CrossOrderCancelReplaceRequest_0);

  all_compo_names.insert("CrossOrderCancelReplaceRequest");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_0;
  set_field(msg, FIX::DiscretionInst{'4'}, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionLimitType{2}, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionMoveType{1}, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionOffsetType{3}, DiscretionInstructions_0);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_0;
  DiscretionOffsetValue_0.setString("2694758");
set_field(msg, DiscretionOffsetValue_0, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_0);
  set_field(msg, FIX::DiscretionScope{2}, DiscretionInstructions_0);
  all_values.push_back(DiscretionInstructions_0);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_0;
  FIX::DisplayHighQty DisplayHighQty_0;
  DisplayHighQty_0.setString("10695905");
set_field(msg, DisplayHighQty_0, DisplayInstruction_0);
  FIX::DisplayLowQty DisplayLowQty_0;
  DisplayLowQty_0.setString("5138994");
set_field(msg, DisplayLowQty_0, DisplayInstruction_0);
  set_field(msg, FIX::DisplayMethod{'2'}, DisplayInstruction_0);
  FIX::DisplayMinIncr DisplayMinIncr_0;
  DisplayMinIncr_0.setString("3008972");
set_field(msg, DisplayMinIncr_0, DisplayInstruction_0);
  FIX::DisplayQty DisplayQty_0;
  DisplayQty_0.setString("10619038");
set_field(msg, DisplayQty_0, DisplayInstruction_0);
  set_field(msg, FIX::DisplayWhen{'2'}, DisplayInstruction_0);
  FIX::RefreshQty RefreshQty_0;
  RefreshQty_0.setString("12673123");
set_field(msg, RefreshQty_0, DisplayInstruction_0);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_0;
  SecondaryDisplayQty_0.setString("3760415");
set_field(msg, SecondaryDisplayQty_0, DisplayInstruction_0);
  all_values.push_back(DisplayInstruction_0);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_21;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1480900293"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1716568980}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_705331823"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1126816513}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1284065261"}, InstrumentLeg_21);
    FIX::LegContractMultiplier LegContractMultiplier_21;
    LegContractMultiplier_21.setString("18351113");
set_field(noLegs_0_0, LegContractMultiplier_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1395756497}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_2114176793"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1734669900"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1522269085"}, InstrumentLeg_21);
    FIX::LegCouponRate LegCouponRate_21;
    LegCouponRate_21.setString("59.880000");
set_field(noLegs_0_0, LegCouponRate_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_13562686"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_2117835322"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1334038476}, InstrumentLeg_21);
    FIX::LegFactor LegFactor_21;
    LegFactor_21.setString("17781162");
set_field(noLegs_0_0, LegFactor_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1217651577}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_374958772"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2047592023"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1995601983"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_880713197"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_969698880"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_362017830"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1919648338"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1270596148"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_21);
    FIX::LegOptionRatio LegOptionRatio_21;
    LegOptionRatio_21.setString("7962644");
set_field(noLegs_0_0, LegOptionRatio_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_390424885"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1799963273"}, InstrumentLeg_21);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_21;
    LegPriceUnitOfMeasureQty_21.setString("16018352");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegProduct{1871325178}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1369048605}, InstrumentLeg_21);
    FIX::LegRatioQty LegRatioQty_21;
    LegRatioQty_21.setString("1596834");
set_field(noLegs_0_0, LegRatioQty_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_850658043"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_505630218"}, InstrumentLeg_21);
    FIX::LegRepurchaseRate LegRepurchaseRate_21;
    LegRepurchaseRate_21.setString("48.360000");
set_field(noLegs_0_0, LegRepurchaseRate_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{98930893}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_472323363"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1581981088"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1621199978"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1102969351"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1595543774"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_152383571"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1565895448"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_21);
    FIX::LegStrikePrice LegStrikePrice_21;
    LegStrikePrice_21.setString("6360633");
set_field(noLegs_0_0, LegStrikePrice_21, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1861380819"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_542423467"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_484181712"}, InstrumentLeg_21);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_594610368"}, InstrumentLeg_21);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_21;
    LegUnitOfMeasureQty_21.setString("15121223");
set_field(noLegs_0_0, LegUnitOfMeasureQty_21, InstrumentLeg_21);
    all_values.push_back(InstrumentLeg_21);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_46;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_366775059"}, LegSecAltIDGrp_NoLegSecurityAltID_46);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_635234847"}, LegSecAltIDGrp_NoLegSecurityAltID_46);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_46);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_22;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_122637584"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1163039529}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1025659732"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1922600857}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_617391144"}, InstrumentLeg_22);
    FIX::LegContractMultiplier LegContractMultiplier_22;
    LegContractMultiplier_22.setString("7495012");
set_field(noLegs_0_1, LegContractMultiplier_22, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1144165814}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_777074582"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1600159306"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1649796032"}, InstrumentLeg_22);
    FIX::LegCouponRate LegCouponRate_22;
    LegCouponRate_22.setString("57.700000");
set_field(noLegs_0_1, LegCouponRate_22, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1699090199"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegCurrency{"GBP"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1172806530"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1077605098}, InstrumentLeg_22);
    FIX::LegFactor LegFactor_22;
    LegFactor_22.setString("16544269");
set_field(noLegs_0_1, LegFactor_22, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1325190101}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_2089287630"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1072838784"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_664128500"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_584119074"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1708902161"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_378025672"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1126542541"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_45600226"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'9'}, InstrumentLeg_22);
    FIX::LegOptionRatio LegOptionRatio_22;
    LegOptionRatio_22.setString("4911812");
set_field(noLegs_0_1, LegOptionRatio_22, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_891799768"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1339411099"}, InstrumentLeg_22);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_22;
    LegPriceUnitOfMeasureQty_22.setString("11264160");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_22, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegProduct{1014437352}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegPutOrCall{354966980}, InstrumentLeg_22);
    FIX::LegRatioQty LegRatioQty_22;
    LegRatioQty_22.setString("45921");
set_field(noLegs_0_1, LegRatioQty_22, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_789554561"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_972358124"}, InstrumentLeg_22);
    FIX::LegRepurchaseRate LegRepurchaseRate_22;
    LegRepurchaseRate_22.setString("34.350000");
set_field(noLegs_0_1, LegRepurchaseRate_22, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1933720375}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1749432706"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_206769093"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1436032759"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_226334828"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1905859293"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1410668506"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegSide{'2'}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_931182175"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_22);
    FIX::LegStrikePrice LegStrikePrice_22;
    LegStrikePrice_22.setString("1088886");
set_field(noLegs_0_1, LegStrikePrice_22, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_282593939"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_865000158"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_773017128"}, InstrumentLeg_22);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_866713013"}, InstrumentLeg_22);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_22;
    LegUnitOfMeasureQty_22.setString("4264186");
set_field(noLegs_0_1, LegUnitOfMeasureQty_22, InstrumentLeg_22);
    all_values.push_back(InstrumentLeg_22);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_47;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1993255554"}, LegSecAltIDGrp_NoLegSecurityAltID_47);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_472018898"}, LegSecAltIDGrp_NoLegSecurityAltID_47);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_47);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_48;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_2123678841"}, LegSecAltIDGrp_NoLegSecurityAltID_48);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_336953146"}, LegSecAltIDGrp_NoLegSecurityAltID_48);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_48);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_23;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_1363818666"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1315606292}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1463369233"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{230772371}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_1670573273"}, InstrumentLeg_23);
    FIX::LegContractMultiplier LegContractMultiplier_23;
    LegContractMultiplier_23.setString("14679614");
set_field(noLegs_0_2, LegContractMultiplier_23, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1020326932}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_495447749"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_74571192"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_806563660"}, InstrumentLeg_23);
    FIX::LegCouponRate LegCouponRate_23;
    LegCouponRate_23.setString("68.080000");
set_field(noLegs_0_2, LegCouponRate_23, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_281340286"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegCurrency{"JPY"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_39715931"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1505781278}, InstrumentLeg_23);
    FIX::LegFactor LegFactor_23;
    LegFactor_23.setString("6089496");
set_field(noLegs_0_2, LegFactor_23, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{970898106}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_1846571235"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_401111049"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1079786734"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_2129165174"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1266111208"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1852803862"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_848394539"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1692529880"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'8'}, InstrumentLeg_23);
    FIX::LegOptionRatio LegOptionRatio_23;
    LegOptionRatio_23.setString("6941664");
set_field(noLegs_0_2, LegOptionRatio_23, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_17065130"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_832558208"}, InstrumentLeg_23);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_23;
    LegPriceUnitOfMeasureQty_23.setString("10311195");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_23, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegProduct{1380883796}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegPutOrCall{680852}, InstrumentLeg_23);
    FIX::LegRatioQty LegRatioQty_23;
    LegRatioQty_23.setString("3470051");
set_field(noLegs_0_2, LegRatioQty_23, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1611656167"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_1671254125"}, InstrumentLeg_23);
    FIX::LegRepurchaseRate LegRepurchaseRate_23;
    LegRepurchaseRate_23.setString("65.820000");
set_field(noLegs_0_2, LegRepurchaseRate_23, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{484499452}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_19218227"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1889537774"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1291063112"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_116615035"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_23394412"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_1386175883"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegSide{'4'}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_63110343"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_23);
    FIX::LegStrikePrice LegStrikePrice_23;
    LegStrikePrice_23.setString("10340084");
set_field(noLegs_0_2, LegStrikePrice_23, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_443561100"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1450407396"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_2113795183"}, InstrumentLeg_23);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_425242626"}, InstrumentLeg_23);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_23;
    LegUnitOfMeasureQty_23.setString("5690349");
set_field(noLegs_0_2, LegUnitOfMeasureQty_23, InstrumentLeg_23);
    all_values.push_back(InstrumentLeg_23);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_49;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1273637165"}, LegSecAltIDGrp_NoLegSecurityAltID_49);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_114081188"}, LegSecAltIDGrp_NoLegSecurityAltID_49);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_49);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_50;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_527994765"}, LegSecAltIDGrp_NoLegSecurityAltID_50);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_1967803610"}, LegSecAltIDGrp_NoLegSecurityAltID_50);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_50);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_16;
  FIX::AttachmentPoint AttachmentPoint_16;
  AttachmentPoint_16.setString("63.180000");
set_field(msg, AttachmentPoint_16, Instrument_16);
  set_field(msg, FIX::CFICode{"STRING_1360552973"}, Instrument_16);
  set_field(msg, FIX::CPProgram{2}, Instrument_16);
  set_field(msg, FIX::CPRegType{"STRING_1512030114"}, Instrument_16);
  FIX::CapPrice CapPrice_16;
  CapPrice_16.setString("13612338");
set_field(msg, CapPrice_16, Instrument_16);
  FIX::ContractMultiplier ContractMultiplier_16;
  ContractMultiplier_16.setString("11984447");
set_field(msg, ContractMultiplier_16, Instrument_16);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_16);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_885004303"}, Instrument_16);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_865927664"}, Instrument_16);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1460702086"}, Instrument_16);
  FIX::CouponRate CouponRate_16;
  CouponRate_16.setString("25.300000");
set_field(msg, CouponRate_16, Instrument_16);
  set_field(msg, FIX::CreditRating{"STRING_607981790"}, Instrument_16);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_604281550"}, Instrument_16);
  FIX::DetachmentPoint DetachmentPoint_16;
  DetachmentPoint_16.setString("75.650000");
set_field(msg, DetachmentPoint_16, Instrument_16);
  set_field(msg, FIX::EncodedIssuer{"DATA_631376203"}, Instrument_16);
  set_field(msg, FIX::EncodedIssuerLen{1990457433}, Instrument_16);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1461184236"}, Instrument_16);
  set_field(msg, FIX::EncodedSecurityDescLen{694486546}, Instrument_16);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_16);
  FIX::Factor Factor_16;
  Factor_16.setString("3629969");
set_field(msg, Factor_16, Instrument_16);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_16);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_16);
  FIX::FloorPrice FloorPrice_16;
  FloorPrice_16.setString("18134043");
set_field(msg, FloorPrice_16, Instrument_16);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_16);
  set_field(msg, FIX::InstrRegistry{"STRING_1456251026"}, Instrument_16);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_16);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1366438281"}, Instrument_16);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_582404543"}, Instrument_16);
  set_field(msg, FIX::Issuer{"STRING_349036827"}, Instrument_16);
  set_field(msg, FIX::ListMethod{0}, Instrument_16);
  set_field(msg, FIX::LocaleOfIssue{"STRING_402724506"}, Instrument_16);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_480183145"}, Instrument_16);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1107502371"}, Instrument_16);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1254164059"}, Instrument_16);
  FIX::MinPriceIncrement MinPriceIncrement_16;
  MinPriceIncrement_16.setString("19922132");
set_field(msg, MinPriceIncrement_16, Instrument_16);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_16;
  MinPriceIncrementAmount_16.setString("3212525");
set_field(msg, MinPriceIncrementAmount_16, Instrument_16);
  set_field(msg, FIX::NTPositionLimit{305125141}, Instrument_16);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_16;
  NotionalPercentageOutstanding_16.setString("22.450000");
set_field(msg, NotionalPercentageOutstanding_16, Instrument_16);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_16);
  FIX::OptPayoutAmount OptPayoutAmount_16;
  OptPayoutAmount_16.setString("11710528");
set_field(msg, OptPayoutAmount_16, Instrument_16);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_16);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_16;
  OriginalNotionalPercentageOutstanding_16.setString("93.820000");
set_field(msg, OriginalNotionalPercentageOutstanding_16, Instrument_16);
  set_field(msg, FIX::Pool{"STRING_1779034596"}, Instrument_16);
  set_field(msg, FIX::PositionLimit{738432233}, Instrument_16);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_16);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_262927151"}, Instrument_16);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_16;
  PriceUnitOfMeasureQty_16.setString("5814060");
set_field(msg, PriceUnitOfMeasureQty_16, Instrument_16);
  set_field(msg, FIX::Product{2}, Instrument_16);
  set_field(msg, FIX::ProductComplex{"STRING_957413697"}, Instrument_16);
  set_field(msg, FIX::PutOrCall{0}, Instrument_16);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_660530822"}, Instrument_16);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_538425045"}, Instrument_16);
  FIX::RepurchaseRate RepurchaseRate_16;
  RepurchaseRate_16.setString("80.690000");
set_field(msg, RepurchaseRate_16, Instrument_16);
  set_field(msg, FIX::RepurchaseTerm{326451505}, Instrument_16);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_16);
  set_field(msg, FIX::SecurityDesc{"STRING_1508629095"}, Instrument_16);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_561407144"}, Instrument_16);
  set_field(msg, FIX::SecurityGroup{"STRING_1452186210"}, Instrument_16);
  set_field(msg, FIX::SecurityID{"STRING_2091033639"}, Instrument_16);
  set_field(msg, FIX::SecurityIDSource{"STRING_K"}, Instrument_16);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_16);
  set_field(msg, FIX::SecuritySubType{"STRING_346274497"}, Instrument_16);
  set_field(msg, FIX::SecurityType{"STRING_DN"}, Instrument_16);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_16);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_16);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1235356728"}, Instrument_16);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_480406881"}, Instrument_16);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_16);
  FIX::StrikeMultiplier StrikeMultiplier_16;
  StrikeMultiplier_16.setString("16866637");
set_field(msg, StrikeMultiplier_16, Instrument_16);
  FIX::StrikePrice StrikePrice_16;
  StrikePrice_16.setString("9291328");
set_field(msg, StrikePrice_16, Instrument_16);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_16);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_16;
  StrikePriceBoundaryPrecision_16.setString("94.670000");
set_field(msg, StrikePriceBoundaryPrecision_16, Instrument_16);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_16);
  FIX::StrikeValue StrikeValue_16;
  StrikeValue_16.setString("7813882");
set_field(msg, StrikeValue_16, Instrument_16);
  set_field(msg, FIX::Symbol{"STRING_486009118"}, Instrument_16);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_16);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_16);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_16);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_16);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_16;
  UnitOfMeasureQty_16.setString("3841639");
set_field(msg, UnitOfMeasureQty_16, Instrument_16);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_16);
  all_values.push_back(Instrument_16);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_29;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_29);
    FIX::ComplexEventPrice ComplexEventPrice_29;
    ComplexEventPrice_29.setString("17705253");
set_field(noComplexEvents_0_0, ComplexEventPrice_29, ComplexEvents_NoComplexEvents_29);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_29);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_29;
    ComplexEventPriceBoundaryPrecision_29.setString("10.960000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_29, ComplexEvents_NoComplexEvents_29);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_29);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_29);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_29;
    ComplexOptPayoutAmount_29.setString("18887210");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_29, ComplexEvents_NoComplexEvents_29);
    all_values.push_back(ComplexEvents_NoComplexEvents_29);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_59;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 50, 2, 5, 3, 2006)}, ComplexEventDates_NoComplexEventDates_59);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 29, 30, 17, 2, 2004)}, ComplexEventDates_NoComplexEventDates_59);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_59);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_143;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 49, 53)}, ComplexEventTimes_NoComplexEventTimes_143);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 54, 42)}, ComplexEventTimes_NoComplexEventTimes_143);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_143);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_144;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 40, 10)}, ComplexEventTimes_NoComplexEventTimes_144);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 49, 52)}, ComplexEventTimes_NoComplexEventTimes_144);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_144);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_60;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 35, 46, 11, 2, 2014)}, ComplexEventDates_NoComplexEventDates_60);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 31, 36, 26, 9, 2004)}, ComplexEventDates_NoComplexEventDates_60);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_60);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_145;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 11, 53)}, ComplexEventTimes_NoComplexEventTimes_145);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 39, 17)}, ComplexEventTimes_NoComplexEventTimes_145);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_145);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_146;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 50, 59)}, ComplexEventTimes_NoComplexEventTimes_146);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 40, 14)}, ComplexEventTimes_NoComplexEventTimes_146);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_146);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_30;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_30);
    FIX::ComplexEventPrice ComplexEventPrice_30;
    ComplexEventPrice_30.setString("15701225");
set_field(noComplexEvents_0_1, ComplexEventPrice_30, ComplexEvents_NoComplexEvents_30);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_30);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_30;
    ComplexEventPriceBoundaryPrecision_30.setString("52.530000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_30, ComplexEvents_NoComplexEvents_30);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_30);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_30);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_30;
    ComplexOptPayoutAmount_30.setString("10719820");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_30, ComplexEvents_NoComplexEvents_30);
    all_values.push_back(ComplexEvents_NoComplexEvents_30);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_61;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 16, 31, 11, 7, 2005)}, ComplexEventDates_NoComplexEventDates_61);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 56, 44, 17, 4, 2006)}, ComplexEventDates_NoComplexEventDates_61);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_61);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_147;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 36, 31)}, ComplexEventTimes_NoComplexEventTimes_147);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 4, 44)}, ComplexEventTimes_NoComplexEventTimes_147);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_147);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_62;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 25, 52, 16, 1, 2001)}, ComplexEventDates_NoComplexEventDates_62);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 45, 11, 8, 1, 2000)}, ComplexEventDates_NoComplexEventDates_62);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_62);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_148;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 33, 12)}, ComplexEventTimes_NoComplexEventTimes_148);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 28, 3)}, ComplexEventTimes_NoComplexEventTimes_148);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_148);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_63;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 31, 28, 25, 4, 2008)}, ComplexEventDates_NoComplexEventDates_63);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 7, 14, 14, 12, 2009)}, ComplexEventDates_NoComplexEventDates_63);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_63);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_149;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 59, 22)}, ComplexEventTimes_NoComplexEventTimes_149);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 52, 25)}, ComplexEventTimes_NoComplexEventTimes_149);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_149);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_38;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_339983175"}, EvntGrp_NoEvents_38);
    FIX::EventPx EventPx_38;
    EventPx_38.setString("19033301");
set_field(noEvents_0_0, EventPx_38, EvntGrp_NoEvents_38);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1923215355"}, EvntGrp_NoEvents_38);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(14, 35, 19, 11, 11, 2008)}, EvntGrp_NoEvents_38);
    set_field(noEvents_0_0, FIX::EventType{1}, EvntGrp_NoEvents_38);
    all_values.push_back(EvntGrp_NoEvents_38);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_33;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1547384434"}, InstrumentParties_NoInstrumentParties_33);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_33);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{474292324}, InstrumentParties_NoInstrumentParties_33);
    all_values.push_back(InstrumentParties_NoInstrumentParties_33);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1525402331"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1939727179}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_67);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_511954271"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{915785246}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_68);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1785236138"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1688455112}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_69);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_40;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_476185278"}, SecAltIDGrp_NoSecurityAltID_40);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_2095085551"}, SecAltIDGrp_NoSecurityAltID_40);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_40);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_41;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1192177859"}, SecAltIDGrp_NoSecurityAltID_41);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1012750198"}, SecAltIDGrp_NoSecurityAltID_41);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_41);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_32;
  set_field(msg, FIX::SecurityXML{"XMLDATA_883950059"}, SecurityXML_32);
  set_field(msg, FIX::SecurityXMLLen{863907523}, SecurityXML_32);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_499040355"}, SecurityXML_32);
  all_values.push_back(SecurityXML_32);
  all_compo_names.insert("..");

  // PegInstructions
  multiset<string> PegInstructions_0;
  set_field(msg, FIX::PegLimitType{2}, PegInstructions_0);
  set_field(msg, FIX::PegMoveType{0}, PegInstructions_0);
  set_field(msg, FIX::PegOffsetType{1}, PegInstructions_0);
  FIX::PegOffsetValue PegOffsetValue_0;
  PegOffsetValue_0.setString("14676263");
set_field(msg, PegOffsetValue_0, PegInstructions_0);
  set_field(msg, FIX::PegPriceType{8}, PegInstructions_0);
  set_field(msg, FIX::PegRoundDirection{2}, PegInstructions_0);
  set_field(msg, FIX::PegScope{1}, PegInstructions_0);
  set_field(msg, FIX::PegSecurityDesc{"STRING_727797153"}, PegInstructions_0);
  set_field(msg, FIX::PegSecurityID{"STRING_151120463"}, PegInstructions_0);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_900968626"}, PegInstructions_0);
  set_field(msg, FIX::PegSymbol{"STRING_221681656"}, PegInstructions_0);
  all_values.push_back(PegInstructions_0);
  all_compo_names.insert(".");

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_0;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_981672962"}, RootParties_NoRootPartyIDs_0);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_0);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{442125839}, RootParties_NoRootPartyIDs_0);
    all_values.push_back(RootParties_NoRootPartyIDs_0);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_0;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_443840498"}, RootSubParties_NoRootPartySubIDs_0);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1967528171}, RootSubParties_NoRootPartySubIDs_0);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_0);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_0;
    set_field(noSides_0_0, FIX::Account{"STRING_955794769"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AccountType{4}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AcctIDSource{99}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::AllocID{"STRING_496766234"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::BookingType{0}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::BookingUnit{'2'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CashMargin{'2'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_375795357"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ClOrdLinkID{"STRING_227413135"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ClearingFeeIndicator{"STRING_3"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CoveredOrUncovered{0}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::CustOrderCapacity{3}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::DayBookingInst{'0'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedText{"DATA_296109931"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::EncodedTextLen{981340335}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::ForexReq{false}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderCapacity{'P'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_D"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::OrigClOrdID{"STRING_263131327"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PositionEffect{'F'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PreTradeAnonymity{true}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::PreallocMethod{'0'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::QtyType{2}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_22500285"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SettlCurrency{"CAN"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Side{'D'}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideComplianceID{"STRING_1454254554"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(23, 4, 37, 13, 4, 2003)}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::SolicitedFlag{false}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::Text{"STRING_655603969"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeDate{"LOCALMKTDATE_957623308"}, SideCrossOrdModGrp_NoSides_0);
    set_field(noSides_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_579913273"}, SideCrossOrdModGrp_NoSides_0);
    all_values.push_back(SideCrossOrdModGrp_NoSides_0);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_11;
    set_field(noSides_0_0, FIX::CommCurrency{"CHF"}, CommissionData_11);
    set_field(noSides_0_0, FIX::CommType{'6'}, CommissionData_11);
    FIX::Commission Commission_11;
    Commission_11.setString("16094705");
set_field(noSides_0_0, Commission_11, CommissionData_11);
    set_field(noSides_0_0, FIX::FundRenewWaiv{'Y'}, CommissionData_11);
    all_values.push_back(CommissionData_11);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_0;
    FIX::CashOrderQty CashOrderQty_0;
    CashOrderQty_0.setString("21157260");
set_field(noSides_0_0, CashOrderQty_0, OrderQtyData_0);
    FIX::OrderPercent OrderPercent_0;
    OrderPercent_0.setString("72.820000");
set_field(noSides_0_0, OrderPercent_0, OrderQtyData_0);
    FIX::OrderQty OrderQty_9;
    OrderQty_9.setString("12040589");
set_field(noSides_0_0, OrderQty_9, OrderQtyData_0);
    set_field(noSides_0_0, FIX::RoundingDirection{'2'}, OrderQtyData_0);
    FIX::RoundingModulus RoundingModulus_0;
    RoundingModulus_0.setString("5565925");
set_field(noSides_0_0, RoundingModulus_0, OrderQtyData_0);
    all_values.push_back(OrderQtyData_0);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_34;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1082591721"}, Parties_NoPartyIDs_34);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_34);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{5}, Parties_NoPartyIDs_34);
      all_values.push_back(Parties_NoPartyIDs_34);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_74;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_843478564"}, PtysSubGrp_NoPartySubIDs_74);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_74);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_74);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_0;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_1308104689"}, PreAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{1936350395}, PreAllocGrp_NoAllocs_0);
      FIX::AllocQty AllocQty_14;
      AllocQty_14.setString("20503780");
set_field(noAllocs_0_1_0, AllocQty_14, PreAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_0);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_2066867017"}, PreAllocGrp_NoAllocs_0);
      all_values.push_back(PreAllocGrp_NoAllocs_0);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_43;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_1784787502"}, NestedParties_NoNestedPartyIDs_43);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_43);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{669910021}, NestedParties_NoNestedPartyIDs_43);
        all_values.push_back(NestedParties_NoNestedPartyIDs_43);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_91;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_1390261849"}, NstdPtysSubGrp_NoNestedPartySubIDs_91);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{1249823294}, NstdPtysSubGrp_NoNestedPartySubIDs_91);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_91);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_1;
      set_field(noAllocs_0_1_1, FIX::AllocAccount{"STRING_1175924928"}, PreAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocAcctIDSource{1528719706}, PreAllocGrp_NoAllocs_1);
      FIX::AllocQty AllocQty_15;
      AllocQty_15.setString("9219557");
set_field(noAllocs_0_1_1, AllocQty_15, PreAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::AllocSettlCurrency{"CAN"}, PreAllocGrp_NoAllocs_1);
      set_field(noAllocs_0_1_1, FIX::IndividualAllocID{"STRING_890198236"}, PreAllocGrp_NoAllocs_1);
      all_values.push_back(PreAllocGrp_NoAllocs_1);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_44;
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyID{"STRING_1596482044"}, NestedParties_NoNestedPartyIDs_44);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_44);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyRole{1637831707}, NestedParties_NoNestedPartyIDs_44);
        all_values.push_back(NestedParties_NoNestedPartyIDs_44);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_92;
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubID{"STRING_2134308459"}, NstdPtysSubGrp_NoNestedPartySubIDs_92);
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubIDType{311326338}, NstdPtysSubGrp_NoNestedPartySubIDs_92);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_92);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_45;
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyID{"STRING_1399995235"}, NestedParties_NoNestedPartyIDs_45);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_45);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyRole{1154804903}, NestedParties_NoNestedPartyIDs_45);
        all_values.push_back(NestedParties_NoNestedPartyIDs_45);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_93;
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubID{"STRING_906888024"}, NstdPtysSubGrp_NoNestedPartySubIDs_93);
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubIDType{315425944}, NstdPtysSubGrp_NoNestedPartySubIDs_93);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_93);
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
      set_field(noAllocs_0_1_2, FIX::AllocAccount{"STRING_1670957823"}, PreAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::AllocAcctIDSource{809782456}, PreAllocGrp_NoAllocs_2);
      FIX::AllocQty AllocQty_16;
      AllocQty_16.setString("19082012");
set_field(noAllocs_0_1_2, AllocQty_16, PreAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::AllocSettlCurrency{"JPY"}, PreAllocGrp_NoAllocs_2);
      set_field(noAllocs_0_1_2, FIX::IndividualAllocID{"STRING_226509738"}, PreAllocGrp_NoAllocs_2);
      all_values.push_back(PreAllocGrp_NoAllocs_2);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_46;
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyID{"STRING_1161804366"}, NestedParties_NoNestedPartyIDs_46);
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_46);
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyRole{1945015972}, NestedParties_NoNestedPartyIDs_46);
        all_values.push_back(NestedParties_NoNestedPartyIDs_46);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_94;
          set_field(noNestedPartySubIDs_0_2_0_3_0, FIX::NestedPartySubID{"STRING_2146243053"}, NstdPtysSubGrp_NoNestedPartySubIDs_94);
          set_field(noNestedPartySubIDs_0_2_0_3_0, FIX::NestedPartySubIDType{973457252}, NstdPtysSubGrp_NoNestedPartySubIDs_94);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_94);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_95;
          set_field(noNestedPartySubIDs_0_2_0_3_1, FIX::NestedPartySubID{"STRING_1933302273"}, NstdPtysSubGrp_NoNestedPartySubIDs_95);
          set_field(noNestedPartySubIDs_0_2_0_3_1, FIX::NestedPartySubIDType{920715204}, NstdPtysSubGrp_NoNestedPartySubIDs_95);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_95);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_96;
          set_field(noNestedPartySubIDs_0_2_0_3_2, FIX::NestedPartySubID{"STRING_1611369127"}, NstdPtysSubGrp_NoNestedPartySubIDs_96);
          set_field(noNestedPartySubIDs_0_2_0_3_2, FIX::NestedPartySubIDType{178241731}, NstdPtysSubGrp_NoNestedPartySubIDs_96);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_96);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_2);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_1;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_1;
    set_field(noSides_0_1, FIX::Account{"STRING_1810913440"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AccountType{1}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AcctIDSource{99}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::AllocID{"STRING_715146530"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::BookingType{2}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::BookingUnit{'0'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::CashMargin{'1'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ClOrdID{"STRING_346799034"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ClOrdLinkID{"STRING_1943424026"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ClearingFeeIndicator{"STRING_5"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::CoveredOrUncovered{1}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::CustOrderCapacity{3}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::DayBookingInst{'1'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedText{"DATA_1817029881"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::EncodedTextLen{1201505629}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::ForexReq{false}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderCapacity{'W'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_1"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::OrigClOrdID{"STRING_1065011759"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PositionEffect{'D'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PreTradeAnonymity{false}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::PreallocMethod{'1'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::QtyType{1}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SecondaryClOrdID{"STRING_370983099"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SettlCurrency{"CAN"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Side{'G'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideComplianceID{"STRING_269733670"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(22, 41, 44, 19, 10, 2005)}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::SolicitedFlag{true}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::Text{"STRING_618644319"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeDate{"LOCALMKTDATE_405731988"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_1, FIX::TradeOriginationDate{"LOCALMKTDATE_1735722196"}, SideCrossOrdModGrp_NoSides_1);
    all_values.push_back(SideCrossOrdModGrp_NoSides_1);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_12;
    set_field(noSides_0_1, FIX::CommCurrency{"CAN"}, CommissionData_12);
    set_field(noSides_0_1, FIX::CommType{'2'}, CommissionData_12);
    FIX::Commission Commission_12;
    Commission_12.setString("20926161");
set_field(noSides_0_1, Commission_12, CommissionData_12);
    set_field(noSides_0_1, FIX::FundRenewWaiv{'Y'}, CommissionData_12);
    all_values.push_back(CommissionData_12);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_1;
    FIX::CashOrderQty CashOrderQty_1;
    CashOrderQty_1.setString("7593887");
set_field(noSides_0_1, CashOrderQty_1, OrderQtyData_1);
    FIX::OrderPercent OrderPercent_1;
    OrderPercent_1.setString("81.320000");
set_field(noSides_0_1, OrderPercent_1, OrderQtyData_1);
    FIX::OrderQty OrderQty_10;
    OrderQty_10.setString("10343004");
set_field(noSides_0_1, OrderQty_10, OrderQtyData_1);
    set_field(noSides_0_1, FIX::RoundingDirection{'0'}, OrderQtyData_1);
    FIX::RoundingModulus RoundingModulus_1;
    RoundingModulus_1.setString("679807");
set_field(noSides_0_1, RoundingModulus_1, OrderQtyData_1);
    all_values.push_back(OrderQtyData_1);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_35;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_1993909835"}, Parties_NoPartyIDs_35);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_35);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{29}, Parties_NoPartyIDs_35);
      all_values.push_back(Parties_NoPartyIDs_35);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_75;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_1012414634"}, PtysSubGrp_NoPartySubIDs_75);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_75);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_75);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_76;
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubID{"STRING_951572317"}, PtysSubGrp_NoPartySubIDs_76);
        set_field(noPartySubIDs_1_0_2_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_76);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_76);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_77;
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubID{"STRING_784809802"}, PtysSubGrp_NoPartySubIDs_77);
        set_field(noPartySubIDs_1_0_2_2, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_77);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_77);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_36;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_1017697168"}, Parties_NoPartyIDs_36);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_36);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{28}, Parties_NoPartyIDs_36);
      all_values.push_back(Parties_NoPartyIDs_36);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_78;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_1308000733"}, PtysSubGrp_NoPartySubIDs_78);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_78);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_78);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_79;
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubID{"STRING_1612587150"}, PtysSubGrp_NoPartySubIDs_79);
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_79);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_79);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_3;
      set_field(noAllocs_1_1_0, FIX::AllocAccount{"STRING_1200825698"}, PreAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::AllocAcctIDSource{193746102}, PreAllocGrp_NoAllocs_3);
      FIX::AllocQty AllocQty_17;
      AllocQty_17.setString("5472544");
set_field(noAllocs_1_1_0, AllocQty_17, PreAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_3);
      set_field(noAllocs_1_1_0, FIX::IndividualAllocID{"STRING_1245709048"}, PreAllocGrp_NoAllocs_3);
      all_values.push_back(PreAllocGrp_NoAllocs_3);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_47;
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyID{"STRING_1285516738"}, NestedParties_NoNestedPartyIDs_47);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_47);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyRole{1092225838}, NestedParties_NoNestedPartyIDs_47);
        all_values.push_back(NestedParties_NoNestedPartyIDs_47);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_97;
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubID{"STRING_84354508"}, NstdPtysSubGrp_NoNestedPartySubIDs_97);
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubIDType{938652026}, NstdPtysSubGrp_NoNestedPartySubIDs_97);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_97);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_98;
          set_field(noNestedPartySubIDs_1_0_0_3_1, FIX::NestedPartySubID{"STRING_1994929032"}, NstdPtysSubGrp_NoNestedPartySubIDs_98);
          set_field(noNestedPartySubIDs_1_0_0_3_1, FIX::NestedPartySubIDType{115515595}, NstdPtysSubGrp_NoNestedPartySubIDs_98);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_98);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_48;
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyID{"STRING_1338271576"}, NestedParties_NoNestedPartyIDs_48);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_48);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyRole{630591727}, NestedParties_NoNestedPartyIDs_48);
        all_values.push_back(NestedParties_NoNestedPartyIDs_48);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_99;
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubID{"STRING_1069231357"}, NstdPtysSubGrp_NoNestedPartySubIDs_99);
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubIDType{1415401529}, NstdPtysSubGrp_NoNestedPartySubIDs_99);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_99);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_4;
      set_field(noAllocs_1_1_1, FIX::AllocAccount{"STRING_419116887"}, PreAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::AllocAcctIDSource{2086928525}, PreAllocGrp_NoAllocs_4);
      FIX::AllocQty AllocQty_18;
      AllocQty_18.setString("5007030");
set_field(noAllocs_1_1_1, AllocQty_18, PreAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::AllocSettlCurrency{"CAN"}, PreAllocGrp_NoAllocs_4);
      set_field(noAllocs_1_1_1, FIX::IndividualAllocID{"STRING_1808703818"}, PreAllocGrp_NoAllocs_4);
      all_values.push_back(PreAllocGrp_NoAllocs_4);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_49;
        set_field(noNestedPartyIDs_1_1_2_0, FIX::NestedPartyID{"STRING_1775696015"}, NestedParties_NoNestedPartyIDs_49);
        set_field(noNestedPartyIDs_1_1_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_49);
        set_field(noNestedPartyIDs_1_1_2_0, FIX::NestedPartyRole{175966091}, NestedParties_NoNestedPartyIDs_49);
        all_values.push_back(NestedParties_NoNestedPartyIDs_49);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_100;
          set_field(noNestedPartySubIDs_1_1_0_3_0, FIX::NestedPartySubID{"STRING_1781611325"}, NstdPtysSubGrp_NoNestedPartySubIDs_100);
          set_field(noNestedPartySubIDs_1_1_0_3_0, FIX::NestedPartySubIDType{723220574}, NstdPtysSubGrp_NoNestedPartySubIDs_100);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_100);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_101;
          set_field(noNestedPartySubIDs_1_1_0_3_1, FIX::NestedPartySubID{"STRING_972222601"}, NstdPtysSubGrp_NoNestedPartySubIDs_101);
          set_field(noNestedPartySubIDs_1_1_0_3_1, FIX::NestedPartySubIDType{1920489930}, NstdPtysSubGrp_NoNestedPartySubIDs_101);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_101);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_102;
          set_field(noNestedPartySubIDs_1_1_0_3_2, FIX::NestedPartySubID{"STRING_1968929622"}, NstdPtysSubGrp_NoNestedPartySubIDs_102);
          set_field(noNestedPartySubIDs_1_1_0_3_2, FIX::NestedPartySubIDType{1874795856}, NstdPtysSubGrp_NoNestedPartySubIDs_102);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_102);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_0.addGroup(noNestedPartySubIDs_1_1_0_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_50;
        set_field(noNestedPartyIDs_1_1_2_1, FIX::NestedPartyID{"STRING_1058523020"}, NestedParties_NoNestedPartyIDs_50);
        set_field(noNestedPartyIDs_1_1_2_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_50);
        set_field(noNestedPartyIDs_1_1_2_1, FIX::NestedPartyRole{819538046}, NestedParties_NoNestedPartyIDs_50);
        all_values.push_back(NestedParties_NoNestedPartyIDs_50);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_103;
          set_field(noNestedPartySubIDs_1_1_1_3_0, FIX::NestedPartySubID{"STRING_38326380"}, NstdPtysSubGrp_NoNestedPartySubIDs_103);
          set_field(noNestedPartySubIDs_1_1_1_3_0, FIX::NestedPartySubIDType{1758190072}, NstdPtysSubGrp_NoNestedPartySubIDs_103);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_103);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_104;
          set_field(noNestedPartySubIDs_1_1_1_3_1, FIX::NestedPartySubID{"STRING_111982254"}, NstdPtysSubGrp_NoNestedPartySubIDs_104);
          set_field(noNestedPartySubIDs_1_1_1_3_1, FIX::NestedPartySubIDType{153841975}, NstdPtysSubGrp_NoNestedPartySubIDs_104);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_104);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_105;
          set_field(noNestedPartySubIDs_1_1_1_3_2, FIX::NestedPartySubID{"STRING_948978000"}, NstdPtysSubGrp_NoNestedPartySubIDs_105);
          set_field(noNestedPartySubIDs_1_1_1_3_2, FIX::NestedPartySubIDType{971842273}, NstdPtysSubGrp_NoNestedPartySubIDs_105);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_105);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_1.addGroup(noNestedPartySubIDs_1_1_1_3_2);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_51;
        set_field(noNestedPartyIDs_1_1_2_2, FIX::NestedPartyID{"STRING_784433702"}, NestedParties_NoNestedPartyIDs_51);
        set_field(noNestedPartyIDs_1_1_2_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_51);
        set_field(noNestedPartyIDs_1_1_2_2, FIX::NestedPartyRole{2041073630}, NestedParties_NoNestedPartyIDs_51);
        all_values.push_back(NestedParties_NoNestedPartyIDs_51);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_106;
          set_field(noNestedPartySubIDs_1_1_2_3_0, FIX::NestedPartySubID{"STRING_1510455133"}, NstdPtysSubGrp_NoNestedPartySubIDs_106);
          set_field(noNestedPartySubIDs_1_1_2_3_0, FIX::NestedPartySubIDType{1980518508}, NstdPtysSubGrp_NoNestedPartySubIDs_106);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_106);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_1_2_2.addGroup(noNestedPartySubIDs_1_1_2_3_0);
        }
        noAllocs_1_1_1.addGroup(noNestedPartyIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_1_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_5;
      set_field(noAllocs_1_1_2, FIX::AllocAccount{"STRING_553054669"}, PreAllocGrp_NoAllocs_5);
      set_field(noAllocs_1_1_2, FIX::AllocAcctIDSource{1194942778}, PreAllocGrp_NoAllocs_5);
      FIX::AllocQty AllocQty_19;
      AllocQty_19.setString("21436273");
set_field(noAllocs_1_1_2, AllocQty_19, PreAllocGrp_NoAllocs_5);
      set_field(noAllocs_1_1_2, FIX::AllocSettlCurrency{"USD"}, PreAllocGrp_NoAllocs_5);
      set_field(noAllocs_1_1_2, FIX::IndividualAllocID{"STRING_1771839740"}, PreAllocGrp_NoAllocs_5);
      all_values.push_back(PreAllocGrp_NoAllocs_5);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_52;
        set_field(noNestedPartyIDs_1_2_2_0, FIX::NestedPartyID{"STRING_24527919"}, NestedParties_NoNestedPartyIDs_52);
        set_field(noNestedPartyIDs_1_2_2_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_52);
        set_field(noNestedPartyIDs_1_2_2_0, FIX::NestedPartyRole{1436267740}, NestedParties_NoNestedPartyIDs_52);
        all_values.push_back(NestedParties_NoNestedPartyIDs_52);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_107;
          set_field(noNestedPartySubIDs_1_2_0_3_0, FIX::NestedPartySubID{"STRING_1425616759"}, NstdPtysSubGrp_NoNestedPartySubIDs_107);
          set_field(noNestedPartySubIDs_1_2_0_3_0, FIX::NestedPartySubIDType{1209274022}, NstdPtysSubGrp_NoNestedPartySubIDs_107);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_107);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_108;
          set_field(noNestedPartySubIDs_1_2_0_3_1, FIX::NestedPartySubID{"STRING_569194467"}, NstdPtysSubGrp_NoNestedPartySubIDs_108);
          set_field(noNestedPartySubIDs_1_2_0_3_1, FIX::NestedPartySubIDType{1152928967}, NstdPtysSubGrp_NoNestedPartySubIDs_108);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_108);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_109;
          set_field(noNestedPartySubIDs_1_2_0_3_2, FIX::NestedPartySubID{"STRING_120313395"}, NstdPtysSubGrp_NoNestedPartySubIDs_109);
          set_field(noNestedPartySubIDs_1_2_0_3_2, FIX::NestedPartySubIDType{523166340}, NstdPtysSubGrp_NoNestedPartySubIDs_109);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_109);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_0.addGroup(noNestedPartySubIDs_1_2_0_3_2);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_53;
        set_field(noNestedPartyIDs_1_2_2_1, FIX::NestedPartyID{"STRING_1972467013"}, NestedParties_NoNestedPartyIDs_53);
        set_field(noNestedPartyIDs_1_2_2_1, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_53);
        set_field(noNestedPartyIDs_1_2_2_1, FIX::NestedPartyRole{561492720}, NestedParties_NoNestedPartyIDs_53);
        all_values.push_back(NestedParties_NoNestedPartyIDs_53);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_110;
          set_field(noNestedPartySubIDs_1_2_1_3_0, FIX::NestedPartySubID{"STRING_496832519"}, NstdPtysSubGrp_NoNestedPartySubIDs_110);
          set_field(noNestedPartySubIDs_1_2_1_3_0, FIX::NestedPartySubIDType{715334696}, NstdPtysSubGrp_NoNestedPartySubIDs_110);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_110);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_111;
          set_field(noNestedPartySubIDs_1_2_1_3_1, FIX::NestedPartySubID{"STRING_384667790"}, NstdPtysSubGrp_NoNestedPartySubIDs_111);
          set_field(noNestedPartySubIDs_1_2_1_3_1, FIX::NestedPartySubIDType{1468674793}, NstdPtysSubGrp_NoNestedPartySubIDs_111);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_111);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_2_2_1.addGroup(noNestedPartySubIDs_1_2_1_3_1);
        }
        noAllocs_1_1_2.addGroup(noNestedPartyIDs_1_2_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_2);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoSides noSides_0_2;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_2;
    set_field(noSides_0_2, FIX::Account{"STRING_1499768398"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::AccountType{2}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::AcctIDSource{2}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::AllocID{"STRING_1552119982"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::BookingType{2}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::BookingUnit{'2'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::CashMargin{'1'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ClOrdID{"STRING_2033920299"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ClOrdLinkID{"STRING_1191443360"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ClearingFeeIndicator{"STRING_E"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::CoveredOrUncovered{1}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::CustOrderCapacity{1}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::DayBookingInst{'1'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::EncodedText{"DATA_1907010047"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::EncodedTextLen{1269193610}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::ForexReq{false}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::OrderCapacity{'I'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::OrderRestrictions{"MULTIPLECHARVALUE_2"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::OrigClOrdID{"STRING_324680373"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::PositionEffect{'C'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::PreTradeAnonymity{true}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::PreallocMethod{'0'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::QtyType{0}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SecondaryClOrdID{"STRING_1525239053"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SettlCurrency{"JPY"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::Side{'C'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideComplianceID{"STRING_1326676553"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(10, 58, 39, 10, 6, 2013)}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::SolicitedFlag{true}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::Text{"STRING_1057948461"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TradeDate{"LOCALMKTDATE_1591075205"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_2, FIX::TradeOriginationDate{"LOCALMKTDATE_1399533195"}, SideCrossOrdModGrp_NoSides_2);
    all_values.push_back(SideCrossOrdModGrp_NoSides_2);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_13;
    set_field(noSides_0_2, FIX::CommCurrency{"CAN"}, CommissionData_13);
    set_field(noSides_0_2, FIX::CommType{'4'}, CommissionData_13);
    FIX::Commission Commission_13;
    Commission_13.setString("9177076");
set_field(noSides_0_2, Commission_13, CommissionData_13);
    set_field(noSides_0_2, FIX::FundRenewWaiv{'N'}, CommissionData_13);
    all_values.push_back(CommissionData_13);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_2;
    FIX::CashOrderQty CashOrderQty_2;
    CashOrderQty_2.setString("8940580");
set_field(noSides_0_2, CashOrderQty_2, OrderQtyData_2);
    FIX::OrderPercent OrderPercent_2;
    OrderPercent_2.setString("75.880000");
set_field(noSides_0_2, OrderPercent_2, OrderQtyData_2);
    FIX::OrderQty OrderQty_11;
    OrderQty_11.setString("7050696");
set_field(noSides_0_2, OrderQty_11, OrderQtyData_2);
    set_field(noSides_0_2, FIX::RoundingDirection{'2'}, OrderQtyData_2);
    FIX::RoundingModulus RoundingModulus_2;
    RoundingModulus_2.setString("5867443");
set_field(noSides_0_2, RoundingModulus_2, OrderQtyData_2);
    all_values.push_back(OrderQtyData_2);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_37;
      set_field(noPartyIDs_2_1_0, FIX::PartyID{"STRING_330318678"}, Parties_NoPartyIDs_37);
      set_field(noPartyIDs_2_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_37);
      set_field(noPartyIDs_2_1_0, FIX::PartyRole{71}, Parties_NoPartyIDs_37);
      all_values.push_back(Parties_NoPartyIDs_37);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_80;
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubID{"STRING_1664755402"}, PtysSubGrp_NoPartySubIDs_80);
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_80);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_80);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_2_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_6;
      set_field(noAllocs_2_1_0, FIX::AllocAccount{"STRING_478200598"}, PreAllocGrp_NoAllocs_6);
      set_field(noAllocs_2_1_0, FIX::AllocAcctIDSource{1483780740}, PreAllocGrp_NoAllocs_6);
      FIX::AllocQty AllocQty_20;
      AllocQty_20.setString("5250949");
set_field(noAllocs_2_1_0, AllocQty_20, PreAllocGrp_NoAllocs_6);
      set_field(noAllocs_2_1_0, FIX::AllocSettlCurrency{"JPY"}, PreAllocGrp_NoAllocs_6);
      set_field(noAllocs_2_1_0, FIX::IndividualAllocID{"STRING_606359190"}, PreAllocGrp_NoAllocs_6);
      all_values.push_back(PreAllocGrp_NoAllocs_6);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_54;
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyID{"STRING_1994297263"}, NestedParties_NoNestedPartyIDs_54);
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_54);
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyRole{1863529150}, NestedParties_NoNestedPartyIDs_54);
        all_values.push_back(NestedParties_NoNestedPartyIDs_54);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_112;
          set_field(noNestedPartySubIDs_2_0_0_3_0, FIX::NestedPartySubID{"STRING_1683334949"}, NstdPtysSubGrp_NoNestedPartySubIDs_112);
          set_field(noNestedPartySubIDs_2_0_0_3_0, FIX::NestedPartySubIDType{1115578698}, NstdPtysSubGrp_NoNestedPartySubIDs_112);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_112);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_113;
          set_field(noNestedPartySubIDs_2_0_0_3_1, FIX::NestedPartySubID{"STRING_1006670250"}, NstdPtysSubGrp_NoNestedPartySubIDs_113);
          set_field(noNestedPartySubIDs_2_0_0_3_1, FIX::NestedPartySubIDType{1298892351}, NstdPtysSubGrp_NoNestedPartySubIDs_113);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_113);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_114;
          set_field(noNestedPartySubIDs_2_0_0_3_2, FIX::NestedPartySubID{"STRING_102626725"}, NstdPtysSubGrp_NoNestedPartySubIDs_114);
          set_field(noNestedPartySubIDs_2_0_0_3_2, FIX::NestedPartySubIDType{1924377876}, NstdPtysSubGrp_NoNestedPartySubIDs_114);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_114);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_2);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_55;
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyID{"STRING_741072011"}, NestedParties_NoNestedPartyIDs_55);
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_55);
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyRole{1963795464}, NestedParties_NoNestedPartyIDs_55);
        all_values.push_back(NestedParties_NoNestedPartyIDs_55);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_115;
          set_field(noNestedPartySubIDs_2_0_1_3_0, FIX::NestedPartySubID{"STRING_250534117"}, NstdPtysSubGrp_NoNestedPartySubIDs_115);
          set_field(noNestedPartySubIDs_2_0_1_3_0, FIX::NestedPartySubIDType{403056125}, NstdPtysSubGrp_NoNestedPartySubIDs_115);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_115);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_116;
          set_field(noNestedPartySubIDs_2_0_1_3_1, FIX::NestedPartySubID{"STRING_328408056"}, NstdPtysSubGrp_NoNestedPartySubIDs_116);
          set_field(noNestedPartySubIDs_2_0_1_3_1, FIX::NestedPartySubIDType{580852796}, NstdPtysSubGrp_NoNestedPartySubIDs_116);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_116);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_117;
          set_field(noNestedPartySubIDs_2_0_1_3_2, FIX::NestedPartySubID{"STRING_542572474"}, NstdPtysSubGrp_NoNestedPartySubIDs_117);
          set_field(noNestedPartySubIDs_2_0_1_3_2, FIX::NestedPartySubIDType{1803151857}, NstdPtysSubGrp_NoNestedPartySubIDs_117);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_117);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_2);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_56;
        set_field(noNestedPartyIDs_2_0_2_2, FIX::NestedPartyID{"STRING_363323526"}, NestedParties_NoNestedPartyIDs_56);
        set_field(noNestedPartyIDs_2_0_2_2, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_56);
        set_field(noNestedPartyIDs_2_0_2_2, FIX::NestedPartyRole{1960256044}, NestedParties_NoNestedPartyIDs_56);
        all_values.push_back(NestedParties_NoNestedPartyIDs_56);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_118;
          set_field(noNestedPartySubIDs_2_0_2_3_0, FIX::NestedPartySubID{"STRING_538044826"}, NstdPtysSubGrp_NoNestedPartySubIDs_118);
          set_field(noNestedPartySubIDs_2_0_2_3_0, FIX::NestedPartySubIDType{1296553136}, NstdPtysSubGrp_NoNestedPartySubIDs_118);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_118);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_2);
      }
      noSides_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_2_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_7;
      set_field(noAllocs_2_1_1, FIX::AllocAccount{"STRING_684534001"}, PreAllocGrp_NoAllocs_7);
      set_field(noAllocs_2_1_1, FIX::AllocAcctIDSource{214358410}, PreAllocGrp_NoAllocs_7);
      FIX::AllocQty AllocQty_21;
      AllocQty_21.setString("12807179");
set_field(noAllocs_2_1_1, AllocQty_21, PreAllocGrp_NoAllocs_7);
      set_field(noAllocs_2_1_1, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_7);
      set_field(noAllocs_2_1_1, FIX::IndividualAllocID{"STRING_1127531542"}, PreAllocGrp_NoAllocs_7);
      all_values.push_back(PreAllocGrp_NoAllocs_7);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_57;
        set_field(noNestedPartyIDs_2_1_2_0, FIX::NestedPartyID{"STRING_280836519"}, NestedParties_NoNestedPartyIDs_57);
        set_field(noNestedPartyIDs_2_1_2_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_57);
        set_field(noNestedPartyIDs_2_1_2_0, FIX::NestedPartyRole{919004237}, NestedParties_NoNestedPartyIDs_57);
        all_values.push_back(NestedParties_NoNestedPartyIDs_57);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_119;
          set_field(noNestedPartySubIDs_2_1_0_3_0, FIX::NestedPartySubID{"STRING_891480220"}, NstdPtysSubGrp_NoNestedPartySubIDs_119);
          set_field(noNestedPartySubIDs_2_1_0_3_0, FIX::NestedPartySubIDType{70412940}, NstdPtysSubGrp_NoNestedPartySubIDs_119);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_119);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_0);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_58;
        set_field(noNestedPartyIDs_2_1_2_1, FIX::NestedPartyID{"STRING_1499041942"}, NestedParties_NoNestedPartyIDs_58);
        set_field(noNestedPartyIDs_2_1_2_1, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_58);
        set_field(noNestedPartyIDs_2_1_2_1, FIX::NestedPartyRole{811484951}, NestedParties_NoNestedPartyIDs_58);
        all_values.push_back(NestedParties_NoNestedPartyIDs_58);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_120;
          set_field(noNestedPartySubIDs_2_1_1_3_0, FIX::NestedPartySubID{"STRING_484686264"}, NstdPtysSubGrp_NoNestedPartySubIDs_120);
          set_field(noNestedPartySubIDs_2_1_1_3_0, FIX::NestedPartySubIDType{110142974}, NstdPtysSubGrp_NoNestedPartySubIDs_120);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_120);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_1.addGroup(noNestedPartySubIDs_2_1_1_3_0);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_1);
      }
      noSides_0_2.addGroup(noAllocs_2_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs noAllocs_2_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_8;
      set_field(noAllocs_2_1_2, FIX::AllocAccount{"STRING_598777211"}, PreAllocGrp_NoAllocs_8);
      set_field(noAllocs_2_1_2, FIX::AllocAcctIDSource{887742389}, PreAllocGrp_NoAllocs_8);
      FIX::AllocQty AllocQty_22;
      AllocQty_22.setString("4385510");
set_field(noAllocs_2_1_2, AllocQty_22, PreAllocGrp_NoAllocs_8);
      set_field(noAllocs_2_1_2, FIX::AllocSettlCurrency{"CHF"}, PreAllocGrp_NoAllocs_8);
      set_field(noAllocs_2_1_2, FIX::IndividualAllocID{"STRING_94219240"}, PreAllocGrp_NoAllocs_8);
      all_values.push_back(PreAllocGrp_NoAllocs_8);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_59;
        set_field(noNestedPartyIDs_2_2_2_0, FIX::NestedPartyID{"STRING_1490159092"}, NestedParties_NoNestedPartyIDs_59);
        set_field(noNestedPartyIDs_2_2_2_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_59);
        set_field(noNestedPartyIDs_2_2_2_0, FIX::NestedPartyRole{1702392563}, NestedParties_NoNestedPartyIDs_59);
        all_values.push_back(NestedParties_NoNestedPartyIDs_59);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_121;
          set_field(noNestedPartySubIDs_2_2_0_3_0, FIX::NestedPartySubID{"STRING_1203544773"}, NstdPtysSubGrp_NoNestedPartySubIDs_121);
          set_field(noNestedPartySubIDs_2_2_0_3_0, FIX::NestedPartySubIDType{239442916}, NstdPtysSubGrp_NoNestedPartySubIDs_121);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_121);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_122;
          set_field(noNestedPartySubIDs_2_2_0_3_1, FIX::NestedPartySubID{"STRING_95078681"}, NstdPtysSubGrp_NoNestedPartySubIDs_122);
          set_field(noNestedPartySubIDs_2_2_0_3_1, FIX::NestedPartySubIDType{336779051}, NstdPtysSubGrp_NoNestedPartySubIDs_122);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_122);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_123;
          set_field(noNestedPartySubIDs_2_2_0_3_2, FIX::NestedPartySubID{"STRING_1530336107"}, NstdPtysSubGrp_NoNestedPartySubIDs_123);
          set_field(noNestedPartySubIDs_2_2_0_3_2, FIX::NestedPartySubIDType{659869698}, NstdPtysSubGrp_NoNestedPartySubIDs_123);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_123);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_2);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_60;
        set_field(noNestedPartyIDs_2_2_2_1, FIX::NestedPartyID{"STRING_1464310593"}, NestedParties_NoNestedPartyIDs_60);
        set_field(noNestedPartyIDs_2_2_2_1, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_60);
        set_field(noNestedPartyIDs_2_2_2_1, FIX::NestedPartyRole{940706217}, NestedParties_NoNestedPartyIDs_60);
        all_values.push_back(NestedParties_NoNestedPartyIDs_60);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_124;
          set_field(noNestedPartySubIDs_2_2_1_3_0, FIX::NestedPartySubID{"STRING_1685009632"}, NstdPtysSubGrp_NoNestedPartySubIDs_124);
          set_field(noNestedPartySubIDs_2_2_1_3_0, FIX::NestedPartySubIDType{189637787}, NstdPtysSubGrp_NoNestedPartySubIDs_124);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_124);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_1.addGroup(noNestedPartySubIDs_2_2_1_3_0);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_125;
          set_field(noNestedPartySubIDs_2_2_1_3_1, FIX::NestedPartySubID{"STRING_93117136"}, NstdPtysSubGrp_NoNestedPartySubIDs_125);
          set_field(noNestedPartySubIDs_2_2_1_3_1, FIX::NestedPartySubIDType{1755422572}, NstdPtysSubGrp_NoNestedPartySubIDs_125);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_125);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_1.addGroup(noNestedPartySubIDs_2_2_1_3_1);
        }
        {
          FIX50SP2::CrossOrderCancelReplaceRequest::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_126;
          set_field(noNestedPartySubIDs_2_2_1_3_2, FIX::NestedPartySubID{"STRING_1688679729"}, NstdPtysSubGrp_NoNestedPartySubIDs_126);
          set_field(noNestedPartySubIDs_2_2_1_3_2, FIX::NestedPartySubIDType{761491585}, NstdPtysSubGrp_NoNestedPartySubIDs_126);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_126);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_1.addGroup(noNestedPartySubIDs_2_2_1_3_2);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_1);
      }
      noSides_0_2.addGroup(noAllocs_2_1_2);
    }
    msg.addGroup(noSides_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_9;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_EUREPO"}, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_529566850"}, SpreadOrBenchmarkCurveData_9);
  FIX::BenchmarkPrice BenchmarkPrice_9;
  BenchmarkPrice_9.setString("4882163");
set_field(msg, BenchmarkPrice_9, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkPriceType{2133920239}, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_968117880"}, SpreadOrBenchmarkCurveData_9);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1667846393"}, SpreadOrBenchmarkCurveData_9);
  FIX::Spread Spread_9;
  Spread_9.setString("14167514");
set_field(msg, Spread_9, SpreadOrBenchmarkCurveData_9);
  all_values.push_back(SpreadOrBenchmarkCurveData_9);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_22;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_SECTYPE"}, Stipulations_NoStipulations_22);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_759426898"}, Stipulations_NoStipulations_22);
    all_values.push_back(Stipulations_NoStipulations_22);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_23;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_SECTOR"}, Stipulations_NoStipulations_23);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_618225193"}, Stipulations_NoStipulations_23);
    all_values.push_back(Stipulations_NoStipulations_23);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_0;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_25389882"}, StrategyParametersGrp_NoStrategyParameters_0);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{12}, StrategyParametersGrp_NoStrategyParameters_0);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_735225850"}, StrategyParametersGrp_NoStrategyParameters_0);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_0);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_1;
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterName{"STRING_362168933"}, StrategyParametersGrp_NoStrategyParameters_1);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterType{22}, StrategyParametersGrp_NoStrategyParameters_1);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterValue{"STRING_1395095548"}, StrategyParametersGrp_NoStrategyParameters_1);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_1);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoStrategyParameters noStrategyParameters_0_2;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_2;
    set_field(noStrategyParameters_0_2, FIX::StrategyParameterName{"STRING_1826479527"}, StrategyParametersGrp_NoStrategyParameters_2);
    set_field(noStrategyParameters_0_2, FIX::StrategyParameterType{26}, StrategyParametersGrp_NoStrategyParameters_2);
    set_field(noStrategyParameters_0_2, FIX::StrategyParameterValue{"STRING_188318117"}, StrategyParametersGrp_NoStrategyParameters_2);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_2);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_2);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_0;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_0);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_0);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_0);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_0;
  set_field(msg, FIX::TriggerAction{'2'}, TriggeringInstruction_0);
  FIX::TriggerNewPrice TriggerNewPrice_0;
  TriggerNewPrice_0.setString("1519908");
set_field(msg, TriggerNewPrice_0, TriggeringInstruction_0);
  FIX::TriggerNewQty TriggerNewQty_0;
  TriggerNewQty_0.setString("20666356");
set_field(msg, TriggerNewQty_0, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerOrderType{'1'}, TriggeringInstruction_0);
  FIX::TriggerPrice TriggerPrice_0;
  TriggerPrice_0.setString("5714147");
set_field(msg, TriggerPrice_0, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerPriceDirection{'D'}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerPriceType{'3'}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerPriceTypeScope{'1'}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_296807547"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerSecurityID{"STRING_967855957"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_2069099478"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerSymbol{"STRING_1964653940"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_237123763"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_983952950"}, TriggeringInstruction_0);
  set_field(msg, FIX::TriggerType{'3'}, TriggeringInstruction_0);
  all_values.push_back(TriggeringInstruction_0);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_25;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1953281707"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1498711764}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1636697831"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1978671589}, UnderlyingInstrument_25);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_25;
    UnderlyingAdjustedQuantity_25.setString("2088962");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_25, UnderlyingInstrument_25);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_25;
    UnderlyingAllocationPercent_25.setString("0.330000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_25, UnderlyingInstrument_25);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_25;
    UnderlyingAttachmentPoint_25.setString("68.750000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_449416794"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1619535581"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_2019836402"}, UnderlyingInstrument_25);
    FIX::UnderlyingCapValue UnderlyingCapValue_25;
    UnderlyingCapValue_25.setString("14559427");
set_field(noUnderlyings_0_0, UnderlyingCapValue_25, UnderlyingInstrument_25);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_25;
    UnderlyingCashAmount_25.setString("18078536");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_25);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_25;
    UnderlyingContractMultiplier_25.setString("19999947");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{38325955}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_2021702776"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_4501930"}, UnderlyingInstrument_25);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_25;
    UnderlyingCouponRate_25.setString("15.890000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1756944293"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_25);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_25;
    UnderlyingCurrentValue_25.setString("5908800");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_25, UnderlyingInstrument_25);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_25;
    UnderlyingDetachmentPoint_25.setString("82.750000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_25, UnderlyingInstrument_25);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_25;
    UnderlyingDirtyPrice_25.setString("628766");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_25, UnderlyingInstrument_25);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_25;
    UnderlyingEndPrice_25.setString("15587359");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_25, UnderlyingInstrument_25);
    FIX::UnderlyingEndValue UnderlyingEndValue_25;
    UnderlyingEndValue_25.setString("15985141");
set_field(noUnderlyings_0_0, UnderlyingEndValue_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{2027530589}, UnderlyingInstrument_25);
    FIX::UnderlyingFXRate UnderlyingFXRate_25;
    UnderlyingFXRate_25.setString("17958597");
set_field(noUnderlyings_0_0, UnderlyingFXRate_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_25);
    FIX::UnderlyingFactor UnderlyingFactor_25;
    UnderlyingFactor_25.setString("7605335");
set_field(noUnderlyings_0_0, UnderlyingFactor_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{644926745}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_240781467"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_111761627"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_134140928"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_71969409"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_320657853"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_358580961"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_265326284"}, UnderlyingInstrument_25);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_25;
    UnderlyingNotionalPercentageOutstanding_25.setString("46.470000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_25);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_25;
    UnderlyingOriginalNotionalPercentageOutstanding_25.setString("90.380000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_78533758"}, UnderlyingInstrument_25);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_25;
    UnderlyingPriceUnitOfMeasureQty_25.setString("16384865");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1038148235}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{2078528464}, UnderlyingInstrument_25);
    FIX::UnderlyingPx UnderlyingPx_25;
    UnderlyingPx_25.setString("16768125");
set_field(noUnderlyings_0_0, UnderlyingPx_25, UnderlyingInstrument_25);
    FIX::UnderlyingQty UnderlyingQty_25;
    UnderlyingQty_25.setString("9123673");
set_field(noUnderlyings_0_0, UnderlyingQty_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2083030395"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1634290489"}, UnderlyingInstrument_25);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_25;
    UnderlyingRepurchaseRate_25.setString("80.080000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{511463425}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1400359591"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1112708019"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_40878052"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1463236240"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_523960339"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1639392158"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1343283181"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_172336423"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2074375566"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_25);
    FIX::UnderlyingStartValue UnderlyingStartValue_25;
    UnderlyingStartValue_25.setString("8172631");
set_field(noUnderlyings_0_0, UnderlyingStartValue_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_167673385"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_25);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_25;
    UnderlyingStrikePrice_25.setString("2396427");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_25, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_388752525"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1309985058"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_504969078"}, UnderlyingInstrument_25);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1158827172"}, UnderlyingInstrument_25);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_25;
    UnderlyingUnitOfMeasureQty_25.setString("11406179");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_25, UnderlyingInstrument_25);
    all_values.push_back(UnderlyingInstrument_25);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_48;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1237360930"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_631620898"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_48);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_49;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1680796351"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1168405747"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_49);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_50;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_160949798"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_445680067"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_50);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_43;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1795240287"}, UnderlyingStipulations_NoUnderlyingStips_43);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_967508075"}, UnderlyingStipulations_NoUnderlyingStips_43);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_43);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_44;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1615415919"}, UnderlyingStipulations_NoUnderlyingStips_44);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1048116230"}, UnderlyingStipulations_NoUnderlyingStips_44);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_44);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_45;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_2080216095"}, UnderlyingStipulations_NoUnderlyingStips_45);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1656293971"}, UnderlyingStipulations_NoUnderlyingStips_45);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_45);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_51;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_456692786"}, UndlyInstrumentParties_NoUndlyInstrumentParties_51);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_51);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1707152003}, UndlyInstrumentParties_NoUndlyInstrumentParties_51);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_51);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1075094399"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1663485047}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_100);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_52;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1446292378"}, UndlyInstrumentParties_NoUndlyInstrumentParties_52);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_52);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1731579719}, UndlyInstrumentParties_NoUndlyInstrumentParties_52);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_52);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1482410579"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{2120332244}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_101);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1560197885"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1987379658}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_102);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::CrossOrderCancelReplaceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1131675769"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{553332190}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_103);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_4;
  FIX::Yield Yield_4;
  Yield_4.setString("41.260000");
set_field(msg, Yield_4, YieldData_4);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_221553051"}, YieldData_4);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1184953088"}, YieldData_4);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_4;
  YieldRedemptionPrice_4.setString("158568");
set_field(msg, YieldRedemptionPrice_4, YieldData_4);
  set_field(msg, FIX::YieldRedemptionPriceType{1389958798}, YieldData_4);
  set_field(msg, FIX::YieldType{"STRING_AFTERTAX"}, YieldData_4);
  all_values.push_back(YieldData_4);
  all_compo_names.insert(".");

  // header
  multiset<string> header_24;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_24);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_346427644"}, header_24);
  set_header_field(msg.getHeader(), FIX::BodyLength{993659525}, header_24);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1429044972"}, header_24);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1961843563"}, header_24);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_2041775755"}, header_24);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1361777419"}, header_24);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1470653887}, header_24);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_24);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1818470206}, header_24);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_471372720"}, header_24);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1965312932"}, header_24);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_300015767"}, header_24);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(12, 45, 17, 15, 9, 2016)}, header_24);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_24);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_24);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1964057846"}, header_24);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{22451121}, header_24);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1962567400"}, header_24);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_299118325"}, header_24);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_244004172"}, header_24);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(19, 11, 19, 8, 4, 2013)}, header_24);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_58073376"}, header_24);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1794750531"}, header_24);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1086407712"}, header_24);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1419850796"}, header_24);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1117920770}, header_24);
  all_values.push_back(header_24);
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
