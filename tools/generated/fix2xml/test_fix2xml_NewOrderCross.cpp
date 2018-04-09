#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderCross.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderCross, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::NewOrderCross msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderCross_0;
  set_field(msg, FIX::CancellationRights{'O'}, NewOrderCross_0);
  set_field(msg, FIX::ComplianceID{"STRING_506952237"}, NewOrderCross_0);
  set_field(msg, FIX::CrossID{"STRING_986724268"}, NewOrderCross_0);
  set_field(msg, FIX::CrossPrioritization{2}, NewOrderCross_0);
  set_field(msg, FIX::CrossType{2}, NewOrderCross_0);
  set_field(msg, FIX::Currency{"USD"}, NewOrderCross_0);
  set_field(msg, FIX::Designation{"STRING_871769597"}, NewOrderCross_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(16, 27, 27, 13, 7, 2017)}, NewOrderCross_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_1879881066"}, NewOrderCross_0);
  set_field(msg, FIX::ExDestinationIDSource{'B'}, NewOrderCross_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_G"}, NewOrderCross_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_774470055"}, NewOrderCross_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(0, 19, 55, 27, 10, 2003)}, NewOrderCross_0);
  set_field(msg, FIX::GTBookingInst{2}, NewOrderCross_0);
  set_field(msg, FIX::HandlInst{'2'}, NewOrderCross_0);
  set_field(msg, FIX::IOIID{"STRING_1362988545"}, NewOrderCross_0);
  set_field(msg, FIX::LocateReqd{false}, NewOrderCross_0);
  FIX::MatchIncrement MatchIncrement_3;
  MatchIncrement_3.setString("12923926");
set_field(msg, MatchIncrement_3, NewOrderCross_0);
  FIX::MaxFloor MaxFloor_3;
  MaxFloor_3.setString("2340582");
set_field(msg, MaxFloor_3, NewOrderCross_0);
  set_field(msg, FIX::MaxPriceLevels{1142316398}, NewOrderCross_0);
  FIX::MaxShow MaxShow_3;
  MaxShow_3.setString("1316332");
set_field(msg, MaxShow_3, NewOrderCross_0);
  FIX::MinQty MinQty_9;
  MinQty_9.setString("16775827");
set_field(msg, MinQty_9, NewOrderCross_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'Y'}, NewOrderCross_0);
  set_field(msg, FIX::OrdType{'P'}, NewOrderCross_0);
  FIX::ParticipationRate ParticipationRate_3;
  ParticipationRate_3.setString("77.130000");
set_field(msg, ParticipationRate_3, NewOrderCross_0);
  FIX::PrevClosePx PrevClosePx_3;
  PrevClosePx_3.setString("5516532");
set_field(msg, PrevClosePx_3, NewOrderCross_0);
  FIX::Price Price_13;
  Price_13.setString("10167187");
set_field(msg, Price_13, NewOrderCross_0);
  set_field(msg, FIX::PriceProtectionScope{'1'}, NewOrderCross_0);
  set_field(msg, FIX::PriceType{9}, NewOrderCross_0);
  set_field(msg, FIX::ProcessCode{'3'}, NewOrderCross_0);
  set_field(msg, FIX::QuoteID{"STRING_148238222"}, NewOrderCross_0);
  set_field(msg, FIX::RegistID{"STRING_1128582846"}, NewOrderCross_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_19187661"}, NewOrderCross_0);
  set_field(msg, FIX::SettlType{"STRING_8"}, NewOrderCross_0);
  FIX::StopPx StopPx_3;
  StopPx_3.setString("15779567");
set_field(msg, StopPx_3, NewOrderCross_0);
  set_field(msg, FIX::TargetStrategy{1}, NewOrderCross_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_655105695"}, NewOrderCross_0);
  set_field(msg, FIX::TimeInForce{'4'}, NewOrderCross_0);
  set_field(msg, FIX::TransBkdTime{FIX::UTCTIMESTAMP(23, 41, 48, 16, 1, 2008)}, NewOrderCross_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(22, 20, 34, 27, 11, 2005)}, NewOrderCross_0);
  all_values.push_back(NewOrderCross_0);

  all_compo_names.insert("NewOrderCross");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_3;
  set_field(msg, FIX::DiscretionInst{'3'}, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionLimitType{1}, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionMoveType{1}, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionOffsetType{0}, DiscretionInstructions_3);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_3;
  DiscretionOffsetValue_3.setString("1706798");
set_field(msg, DiscretionOffsetValue_3, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionRoundDirection{2}, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionScope{3}, DiscretionInstructions_3);
  all_values.push_back(DiscretionInstructions_3);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_3;
  FIX::DisplayHighQty DisplayHighQty_3;
  DisplayHighQty_3.setString("83793");
set_field(msg, DisplayHighQty_3, DisplayInstruction_3);
  FIX::DisplayLowQty DisplayLowQty_3;
  DisplayLowQty_3.setString("1981688");
set_field(msg, DisplayLowQty_3, DisplayInstruction_3);
  set_field(msg, FIX::DisplayMethod{'1'}, DisplayInstruction_3);
  FIX::DisplayMinIncr DisplayMinIncr_3;
  DisplayMinIncr_3.setString("11369621");
set_field(msg, DisplayMinIncr_3, DisplayInstruction_3);
  FIX::DisplayQty DisplayQty_3;
  DisplayQty_3.setString("2173564");
set_field(msg, DisplayQty_3, DisplayInstruction_3);
  set_field(msg, FIX::DisplayWhen{'2'}, DisplayInstruction_3);
  FIX::RefreshQty RefreshQty_3;
  RefreshQty_3.setString("5674352");
set_field(msg, RefreshQty_3, DisplayInstruction_3);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_3;
  SecondaryDisplayQty_3.setString("7590367");
set_field(msg, SecondaryDisplayQty_3, DisplayInstruction_3);
  all_values.push_back(DisplayInstruction_3);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::NewOrderCross::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_82;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_403414597"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1903812579}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_550827147"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{827814978}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_2134498468"}, InstrumentLeg_82);
    FIX::LegContractMultiplier LegContractMultiplier_82;
    LegContractMultiplier_82.setString("12569228");
set_field(noLegs_0_0, LegContractMultiplier_82, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1036823959}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_295960978"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1895524750"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_461337837"}, InstrumentLeg_82);
    FIX::LegCouponRate LegCouponRate_82;
    LegCouponRate_82.setString("12.980000");
set_field(noLegs_0_0, LegCouponRate_82, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1679035656"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1594179807"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1456064883}, InstrumentLeg_82);
    FIX::LegFactor LegFactor_82;
    LegFactor_82.setString("7984410");
set_field(noLegs_0_0, LegFactor_82, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1646718124}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1355053840"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_969120929"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_568491497"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1910265142"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_977500236"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_766660302"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_466231018"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_2114462388"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'9'}, InstrumentLeg_82);
    FIX::LegOptionRatio LegOptionRatio_82;
    LegOptionRatio_82.setString("10503161");
set_field(noLegs_0_0, LegOptionRatio_82, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_534414031"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1743053566"}, InstrumentLeg_82);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_82;
    LegPriceUnitOfMeasureQty_82.setString("1420233");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_82, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegProduct{937828628}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1499382497}, InstrumentLeg_82);
    FIX::LegRatioQty LegRatioQty_82;
    LegRatioQty_82.setString("6928505");
set_field(noLegs_0_0, LegRatioQty_82, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1765643606"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1486397317"}, InstrumentLeg_82);
    FIX::LegRepurchaseRate LegRepurchaseRate_82;
    LegRepurchaseRate_82.setString("33.630000");
set_field(noLegs_0_0, LegRepurchaseRate_82, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{654983917}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1782358296"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1697814465"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1116321754"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_875145946"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1229366474"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1236231746"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegSide{'2'}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_676062633"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_82);
    FIX::LegStrikePrice LegStrikePrice_82;
    LegStrikePrice_82.setString("1752971");
set_field(noLegs_0_0, LegStrikePrice_82, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1899866822"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1674638644"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_743788607"}, InstrumentLeg_82);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1662648316"}, InstrumentLeg_82);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_82;
    LegUnitOfMeasureQty_82.setString("5046552");
set_field(noLegs_0_0, LegUnitOfMeasureQty_82, InstrumentLeg_82);
    all_values.push_back(InstrumentLeg_82);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_166;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_2128879334"}, LegSecAltIDGrp_NoLegSecurityAltID_166);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_471633972"}, LegSecAltIDGrp_NoLegSecurityAltID_166);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_166);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_167;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_346982029"}, LegSecAltIDGrp_NoLegSecurityAltID_167);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1031711870"}, LegSecAltIDGrp_NoLegSecurityAltID_167);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_167);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_168;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1006048003"}, LegSecAltIDGrp_NoLegSecurityAltID_168);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_2090035595"}, LegSecAltIDGrp_NoLegSecurityAltID_168);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_168);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_48;
  FIX::AttachmentPoint AttachmentPoint_48;
  AttachmentPoint_48.setString("52.660000");
set_field(msg, AttachmentPoint_48, Instrument_48);
  set_field(msg, FIX::CFICode{"STRING_1943876631"}, Instrument_48);
  set_field(msg, FIX::CPProgram{99}, Instrument_48);
  set_field(msg, FIX::CPRegType{"STRING_1866585809"}, Instrument_48);
  FIX::CapPrice CapPrice_48;
  CapPrice_48.setString("15620365");
set_field(msg, CapPrice_48, Instrument_48);
  FIX::ContractMultiplier ContractMultiplier_48;
  ContractMultiplier_48.setString("7808481");
set_field(msg, ContractMultiplier_48, Instrument_48);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_48);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_69536859"}, Instrument_48);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_415722762"}, Instrument_48);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1219206342"}, Instrument_48);
  FIX::CouponRate CouponRate_48;
  CouponRate_48.setString("86.140000");
set_field(msg, CouponRate_48, Instrument_48);
  set_field(msg, FIX::CreditRating{"STRING_1290868708"}, Instrument_48);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_301089168"}, Instrument_48);
  FIX::DetachmentPoint DetachmentPoint_48;
  DetachmentPoint_48.setString("67.120000");
set_field(msg, DetachmentPoint_48, Instrument_48);
  set_field(msg, FIX::EncodedIssuer{"DATA_1197945376"}, Instrument_48);
  set_field(msg, FIX::EncodedIssuerLen{977151802}, Instrument_48);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_819419694"}, Instrument_48);
  set_field(msg, FIX::EncodedSecurityDescLen{1903463090}, Instrument_48);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_48);
  FIX::Factor Factor_48;
  Factor_48.setString("5718028");
set_field(msg, Factor_48, Instrument_48);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_48);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_48);
  FIX::FloorPrice FloorPrice_48;
  FloorPrice_48.setString("869675");
set_field(msg, FloorPrice_48, Instrument_48);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_48);
  set_field(msg, FIX::InstrRegistry{"STRING_1259202781"}, Instrument_48);
  set_field(msg, FIX::InstrmtAssignmentMethod{'6'}, Instrument_48);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_259423643"}, Instrument_48);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1606184810"}, Instrument_48);
  set_field(msg, FIX::Issuer{"STRING_1100075093"}, Instrument_48);
  set_field(msg, FIX::ListMethod{0}, Instrument_48);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1548736757"}, Instrument_48);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_126326711"}, Instrument_48);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1061864630"}, Instrument_48);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_843187553"}, Instrument_48);
  FIX::MinPriceIncrement MinPriceIncrement_48;
  MinPriceIncrement_48.setString("19929125");
set_field(msg, MinPriceIncrement_48, Instrument_48);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_48;
  MinPriceIncrementAmount_48.setString("4764175");
set_field(msg, MinPriceIncrementAmount_48, Instrument_48);
  set_field(msg, FIX::NTPositionLimit{1624035667}, Instrument_48);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_48;
  NotionalPercentageOutstanding_48.setString("43.970000");
set_field(msg, NotionalPercentageOutstanding_48, Instrument_48);
  set_field(msg, FIX::OptAttribute{'5'}, Instrument_48);
  FIX::OptPayoutAmount OptPayoutAmount_48;
  OptPayoutAmount_48.setString("20397584");
set_field(msg, OptPayoutAmount_48, Instrument_48);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_48);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_48;
  OriginalNotionalPercentageOutstanding_48.setString("30.450000");
set_field(msg, OriginalNotionalPercentageOutstanding_48, Instrument_48);
  set_field(msg, FIX::Pool{"STRING_1183143490"}, Instrument_48);
  set_field(msg, FIX::PositionLimit{887116260}, Instrument_48);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_48);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_233605218"}, Instrument_48);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_48;
  PriceUnitOfMeasureQty_48.setString("18642680");
set_field(msg, PriceUnitOfMeasureQty_48, Instrument_48);
  set_field(msg, FIX::Product{10}, Instrument_48);
  set_field(msg, FIX::ProductComplex{"STRING_2137068308"}, Instrument_48);
  set_field(msg, FIX::PutOrCall{0}, Instrument_48);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1250158673"}, Instrument_48);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1420202747"}, Instrument_48);
  FIX::RepurchaseRate RepurchaseRate_48;
  RepurchaseRate_48.setString("71.980000");
set_field(msg, RepurchaseRate_48, Instrument_48);
  set_field(msg, FIX::RepurchaseTerm{1337126209}, Instrument_48);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_48);
  set_field(msg, FIX::SecurityDesc{"STRING_1877189979"}, Instrument_48);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1405489432"}, Instrument_48);
  set_field(msg, FIX::SecurityGroup{"STRING_1467416060"}, Instrument_48);
  set_field(msg, FIX::SecurityID{"STRING_1335891141"}, Instrument_48);
  set_field(msg, FIX::SecurityIDSource{"STRING_C"}, Instrument_48);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_48);
  set_field(msg, FIX::SecuritySubType{"STRING_737144250"}, Instrument_48);
  set_field(msg, FIX::SecurityType{"STRING_SUPRA"}, Instrument_48);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_48);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_48);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_329836461"}, Instrument_48);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2123686261"}, Instrument_48);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_48);
  FIX::StrikeMultiplier StrikeMultiplier_48;
  StrikeMultiplier_48.setString("5221570");
set_field(msg, StrikeMultiplier_48, Instrument_48);
  FIX::StrikePrice StrikePrice_48;
  StrikePrice_48.setString("9491586");
set_field(msg, StrikePrice_48, Instrument_48);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_48);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_48;
  StrikePriceBoundaryPrecision_48.setString("64.420000");
set_field(msg, StrikePriceBoundaryPrecision_48, Instrument_48);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_48);
  FIX::StrikeValue StrikeValue_48;
  StrikeValue_48.setString("11698005");
set_field(msg, StrikeValue_48, Instrument_48);
  set_field(msg, FIX::Symbol{"STRING_2112906200"}, Instrument_48);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_48);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_48);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_48);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_48);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_48;
  UnitOfMeasureQty_48.setString("17558183");
set_field(msg, UnitOfMeasureQty_48, Instrument_48);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_48);
  all_values.push_back(Instrument_48);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_96;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_96);
    FIX::ComplexEventPrice ComplexEventPrice_96;
    ComplexEventPrice_96.setString("10835795");
set_field(noComplexEvents_0_0, ComplexEventPrice_96, ComplexEvents_NoComplexEvents_96);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_96);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_96;
    ComplexEventPriceBoundaryPrecision_96.setString("18.330000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_96, ComplexEvents_NoComplexEvents_96);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_96);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_96);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_96;
    ComplexOptPayoutAmount_96.setString("12919193");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_96, ComplexEvents_NoComplexEvents_96);
    all_values.push_back(ComplexEvents_NoComplexEvents_96);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_189;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 1, 34, 7, 11, 2009)}, ComplexEventDates_NoComplexEventDates_189);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 51, 51, 27, 6, 2003)}, ComplexEventDates_NoComplexEventDates_189);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_189);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_382;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 28, 22)}, ComplexEventTimes_NoComplexEventTimes_382);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 23, 51)}, ComplexEventTimes_NoComplexEventTimes_382);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_382);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_383;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 52, 3)}, ComplexEventTimes_NoComplexEventTimes_383);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 41, 55)}, ComplexEventTimes_NoComplexEventTimes_383);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_383);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_190;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 48, 5, 24, 12, 2008)}, ComplexEventDates_NoComplexEventDates_190);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 24, 50, 11, 6, 2009)}, ComplexEventDates_NoComplexEventDates_190);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_190);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_384;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 2, 37)}, ComplexEventTimes_NoComplexEventTimes_384);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 52, 23)}, ComplexEventTimes_NoComplexEventTimes_384);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_384);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_385;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 8, 11)}, ComplexEventTimes_NoComplexEventTimes_385);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 52, 36)}, ComplexEventTimes_NoComplexEventTimes_385);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_385);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_103;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1610062061"}, EvntGrp_NoEvents_103);
    FIX::EventPx EventPx_103;
    EventPx_103.setString("19649693");
set_field(noEvents_0_0, EventPx_103, EvntGrp_NoEvents_103);
    set_field(noEvents_0_0, FIX::EventText{"STRING_878433463"}, EvntGrp_NoEvents_103);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(3, 16, 52, 27, 9, 2010)}, EvntGrp_NoEvents_103);
    set_field(noEvents_0_0, FIX::EventType{8}, EvntGrp_NoEvents_103);
    all_values.push_back(EvntGrp_NoEvents_103);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_104;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_27391001"}, EvntGrp_NoEvents_104);
    FIX::EventPx EventPx_104;
    EventPx_104.setString("5083888");
set_field(noEvents_0_1, EventPx_104, EvntGrp_NoEvents_104);
    set_field(noEvents_0_1, FIX::EventText{"STRING_395117913"}, EvntGrp_NoEvents_104);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(19, 27, 33, 20, 6, 2000)}, EvntGrp_NoEvents_104);
    set_field(noEvents_0_1, FIX::EventType{4}, EvntGrp_NoEvents_104);
    all_values.push_back(EvntGrp_NoEvents_104);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_105;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_789263113"}, EvntGrp_NoEvents_105);
    FIX::EventPx EventPx_105;
    EventPx_105.setString("9188994");
set_field(noEvents_0_2, EventPx_105, EvntGrp_NoEvents_105);
    set_field(noEvents_0_2, FIX::EventText{"STRING_476077211"}, EvntGrp_NoEvents_105);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(10, 18, 8, 10, 9, 2005)}, EvntGrp_NoEvents_105);
    set_field(noEvents_0_2, FIX::EventType{3}, EvntGrp_NoEvents_105);
    all_values.push_back(EvntGrp_NoEvents_105);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderCross::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_93;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1692844054"}, InstrumentParties_NoInstrumentParties_93);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_93);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1105743767}, InstrumentParties_NoInstrumentParties_93);
    all_values.push_back(InstrumentParties_NoInstrumentParties_93);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_500249017"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1469451499}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_191);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_718817573"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{388756356}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_192);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_98;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1227206407"}, SecAltIDGrp_NoSecurityAltID_98);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_783874269"}, SecAltIDGrp_NoSecurityAltID_98);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_98);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_99;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1852026777"}, SecAltIDGrp_NoSecurityAltID_99);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1494694035"}, SecAltIDGrp_NoSecurityAltID_99);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_99);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_96;
  set_field(msg, FIX::SecurityXML{"XMLDATA_940272816"}, SecurityXML_96);
  set_field(msg, FIX::SecurityXMLLen{1695409043}, SecurityXML_96);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1105517755"}, SecurityXML_96);
  all_values.push_back(SecurityXML_96);
  all_compo_names.insert("..");

  // PegInstructions
  multiset<string> PegInstructions_3;
  set_field(msg, FIX::PegLimitType{2}, PegInstructions_3);
  set_field(msg, FIX::PegMoveType{1}, PegInstructions_3);
  set_field(msg, FIX::PegOffsetType{2}, PegInstructions_3);
  FIX::PegOffsetValue PegOffsetValue_3;
  PegOffsetValue_3.setString("5102198");
set_field(msg, PegOffsetValue_3, PegInstructions_3);
  set_field(msg, FIX::PegPriceType{3}, PegInstructions_3);
  set_field(msg, FIX::PegRoundDirection{1}, PegInstructions_3);
  set_field(msg, FIX::PegScope{3}, PegInstructions_3);
  set_field(msg, FIX::PegSecurityDesc{"STRING_489163060"}, PegInstructions_3);
  set_field(msg, FIX::PegSecurityID{"STRING_148602560"}, PegInstructions_3);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_1292854750"}, PegInstructions_3);
  set_field(msg, FIX::PegSymbol{"STRING_2022269106"}, PegInstructions_3);
  all_values.push_back(PegInstructions_3);
  all_compo_names.insert(".");

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_4;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1842354651"}, RootParties_NoRootPartyIDs_4);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_4);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{831716447}, RootParties_NoRootPartyIDs_4);
    all_values.push_back(RootParties_NoRootPartyIDs_4);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_8;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_1828160682"}, RootSubParties_NoRootPartySubIDs_8);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1937460215}, RootSubParties_NoRootPartySubIDs_8);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_8);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_1;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_5;
    set_field(noRootPartyIDs_0_1, FIX::RootPartyID{"STRING_1981013617"}, RootParties_NoRootPartyIDs_5);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyIDSource{'1'}, RootParties_NoRootPartyIDs_5);
    set_field(noRootPartyIDs_0_1, FIX::RootPartyRole{1259428066}, RootParties_NoRootPartyIDs_5);
    all_values.push_back(RootParties_NoRootPartyIDs_5);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_9;
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubID{"STRING_569682408"}, RootSubParties_NoRootPartySubIDs_9);
      set_field(noRootPartySubIDs_1_1_0, FIX::RootPartySubIDType{608786919}, RootSubParties_NoRootPartySubIDs_9);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_9);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_1_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_10;
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubID{"STRING_1779553950"}, RootSubParties_NoRootPartySubIDs_10);
      set_field(noRootPartySubIDs_1_1_1, FIX::RootPartySubIDType{1353556678}, RootSubParties_NoRootPartySubIDs_10);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_10);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_1.addGroup(noRootPartySubIDs_1_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_1);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_3;
    set_field(noSides_0_0, FIX::Account{"STRING_1126764337"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::AccountType{4}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::AcctIDSource{5}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::AllocID{"STRING_84798444"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::BookingType{2}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::BookingUnit{'1'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::CashMargin{'2'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_377522386"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::ClOrdLinkID{"STRING_647849647"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::ClearingFeeIndicator{"STRING_E"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::CoveredOrUncovered{1}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::CustOrderCapacity{4}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::DayBookingInst{'2'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::EncodedText{"DATA_1876310399"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::EncodedTextLen{1011798165}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::ForexReq{true}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::OrderCapacity{'G'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_3"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::OrigClOrdID{"STRING_915163840"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::PositionEffect{'D'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::PreTradeAnonymity{true}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::PreallocMethod{'1'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::QtyType{1}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_2098778412"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::SettlCurrency{"GBP"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::Side{'5'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::SideComplianceID{"STRING_425871745"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(2, 54, 43, 25, 3, 2013)}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::SolicitedFlag{false}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::Text{"STRING_395560075"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::TradeDate{"LOCALMKTDATE_1250364142"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_118220995"}, SideCrossOrdModGrp_NoSides_3);
    all_values.push_back(SideCrossOrdModGrp_NoSides_3);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_16;
    set_field(noSides_0_0, FIX::CommCurrency{"GBP"}, CommissionData_16);
    set_field(noSides_0_0, FIX::CommType{'3'}, CommissionData_16);
    FIX::Commission Commission_16;
    Commission_16.setString("329387");
set_field(noSides_0_0, Commission_16, CommissionData_16);
    set_field(noSides_0_0, FIX::FundRenewWaiv{'Y'}, CommissionData_16);
    all_values.push_back(CommissionData_16);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_11;
    FIX::CashOrderQty CashOrderQty_11;
    CashOrderQty_11.setString("4305033");
set_field(noSides_0_0, CashOrderQty_11, OrderQtyData_11);
    FIX::OrderPercent OrderPercent_11;
    OrderPercent_11.setString("69.460000");
set_field(noSides_0_0, OrderPercent_11, OrderQtyData_11);
    FIX::OrderQty OrderQty_20;
    OrderQty_20.setString("12502182");
set_field(noSides_0_0, OrderQty_20, OrderQtyData_11);
    set_field(noSides_0_0, FIX::RoundingDirection{'1'}, OrderQtyData_11);
    FIX::RoundingModulus RoundingModulus_11;
    RoundingModulus_11.setString("11344286");
set_field(noSides_0_0, RoundingModulus_11, OrderQtyData_11);
    all_values.push_back(OrderQtyData_11);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_74;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_665613964"}, Parties_NoPartyIDs_74);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_74);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{80}, Parties_NoPartyIDs_74);
      all_values.push_back(Parties_NoPartyIDs_74);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_148;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_856092099"}, PtysSubGrp_NoPartySubIDs_148);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_148);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_148);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_149;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_360363422"}, PtysSubGrp_NoPartySubIDs_149);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_149);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_149);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_150;
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubID{"STRING_965995385"}, PtysSubGrp_NoPartySubIDs_150);
        set_field(noPartySubIDs_0_0_2_2, FIX::PartySubIDType{31}, PtysSubGrp_NoPartySubIDs_150);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_150);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_75;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1104119474"}, Parties_NoPartyIDs_75);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_75);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{82}, Parties_NoPartyIDs_75);
      all_values.push_back(Parties_NoPartyIDs_75);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_151;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_158170769"}, PtysSubGrp_NoPartySubIDs_151);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_151);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_151);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_152;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_718214132"}, PtysSubGrp_NoPartySubIDs_152);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_152);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_152);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_153;
        set_field(noPartySubIDs_0_1_2_2, FIX::PartySubID{"STRING_2142169266"}, PtysSubGrp_NoPartySubIDs_153);
        set_field(noPartySubIDs_0_1_2_2, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_153);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_153);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_76;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_1597140566"}, Parties_NoPartyIDs_76);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_76);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{38}, Parties_NoPartyIDs_76);
      all_values.push_back(Parties_NoPartyIDs_76);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_154;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_1221980819"}, PtysSubGrp_NoPartySubIDs_154);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_154);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_154);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_155;
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubID{"STRING_527332645"}, PtysSubGrp_NoPartySubIDs_155);
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_155);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_155);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_12;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_1661761268"}, PreAllocGrp_NoAllocs_12);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{342613794}, PreAllocGrp_NoAllocs_12);
      FIX::AllocQty AllocQty_29;
      AllocQty_29.setString("3409466");
set_field(noAllocs_0_1_0, AllocQty_29, PreAllocGrp_NoAllocs_12);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"EUR"}, PreAllocGrp_NoAllocs_12);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_1651503381"}, PreAllocGrp_NoAllocs_12);
      all_values.push_back(PreAllocGrp_NoAllocs_12);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_68;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_1605776249"}, NestedParties_NoNestedPartyIDs_68);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_68);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{504752679}, NestedParties_NoNestedPartyIDs_68);
        all_values.push_back(NestedParties_NoNestedPartyIDs_68);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_140;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_1054107205"}, NstdPtysSubGrp_NoNestedPartySubIDs_140);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{1608872154}, NstdPtysSubGrp_NoNestedPartySubIDs_140);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_140);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_141;
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubID{"STRING_2129485165"}, NstdPtysSubGrp_NoNestedPartySubIDs_141);
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubIDType{2052472569}, NstdPtysSubGrp_NoNestedPartySubIDs_141);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_141);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_142;
          set_field(noNestedPartySubIDs_0_0_0_3_2, FIX::NestedPartySubID{"STRING_438904029"}, NstdPtysSubGrp_NoNestedPartySubIDs_142);
          set_field(noNestedPartySubIDs_0_0_0_3_2, FIX::NestedPartySubIDType{140172286}, NstdPtysSubGrp_NoNestedPartySubIDs_142);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_142);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_2);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_13;
      set_field(noAllocs_0_1_1, FIX::AllocAccount{"STRING_796794045"}, PreAllocGrp_NoAllocs_13);
      set_field(noAllocs_0_1_1, FIX::AllocAcctIDSource{1157118162}, PreAllocGrp_NoAllocs_13);
      FIX::AllocQty AllocQty_30;
      AllocQty_30.setString("6939031");
set_field(noAllocs_0_1_1, AllocQty_30, PreAllocGrp_NoAllocs_13);
      set_field(noAllocs_0_1_1, FIX::AllocSettlCurrency{"JPY"}, PreAllocGrp_NoAllocs_13);
      set_field(noAllocs_0_1_1, FIX::IndividualAllocID{"STRING_143560048"}, PreAllocGrp_NoAllocs_13);
      all_values.push_back(PreAllocGrp_NoAllocs_13);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_69;
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyID{"STRING_1384181414"}, NestedParties_NoNestedPartyIDs_69);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_69);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyRole{2068670479}, NestedParties_NoNestedPartyIDs_69);
        all_values.push_back(NestedParties_NoNestedPartyIDs_69);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_143;
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubID{"STRING_153488392"}, NstdPtysSubGrp_NoNestedPartySubIDs_143);
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubIDType{245902218}, NstdPtysSubGrp_NoNestedPartySubIDs_143);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_143);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_144;
          set_field(noNestedPartySubIDs_0_1_0_3_1, FIX::NestedPartySubID{"STRING_880645606"}, NstdPtysSubGrp_NoNestedPartySubIDs_144);
          set_field(noNestedPartySubIDs_0_1_0_3_1, FIX::NestedPartySubIDType{1815249660}, NstdPtysSubGrp_NoNestedPartySubIDs_144);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_144);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_70;
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyID{"STRING_588516013"}, NestedParties_NoNestedPartyIDs_70);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_70);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyRole{86840968}, NestedParties_NoNestedPartyIDs_70);
        all_values.push_back(NestedParties_NoNestedPartyIDs_70);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_145;
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubID{"STRING_725611975"}, NstdPtysSubGrp_NoNestedPartySubIDs_145);
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubIDType{1362008024}, NstdPtysSubGrp_NoNestedPartySubIDs_145);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_145);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_146;
          set_field(noNestedPartySubIDs_0_1_1_3_1, FIX::NestedPartySubID{"STRING_1112461223"}, NstdPtysSubGrp_NoNestedPartySubIDs_146);
          set_field(noNestedPartySubIDs_0_1_1_3_1, FIX::NestedPartySubIDType{589995131}, NstdPtysSubGrp_NoNestedPartySubIDs_146);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_146);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_147;
          set_field(noNestedPartySubIDs_0_1_1_3_2, FIX::NestedPartySubID{"STRING_1866760703"}, NstdPtysSubGrp_NoNestedPartySubIDs_147);
          set_field(noNestedPartySubIDs_0_1_1_3_2, FIX::NestedPartySubIDType{1536749209}, NstdPtysSubGrp_NoNestedPartySubIDs_147);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_147);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_71;
        set_field(noNestedPartyIDs_0_1_2_2, FIX::NestedPartyID{"STRING_1644102336"}, NestedParties_NoNestedPartyIDs_71);
        set_field(noNestedPartyIDs_0_1_2_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_71);
        set_field(noNestedPartyIDs_0_1_2_2, FIX::NestedPartyRole{1518750726}, NestedParties_NoNestedPartyIDs_71);
        all_values.push_back(NestedParties_NoNestedPartyIDs_71);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_148;
          set_field(noNestedPartySubIDs_0_1_2_3_0, FIX::NestedPartySubID{"STRING_1767053239"}, NstdPtysSubGrp_NoNestedPartySubIDs_148);
          set_field(noNestedPartySubIDs_0_1_2_3_0, FIX::NestedPartySubIDType{1658923012}, NstdPtysSubGrp_NoNestedPartySubIDs_148);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_148);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_149;
          set_field(noNestedPartySubIDs_0_1_2_3_1, FIX::NestedPartySubID{"STRING_198401655"}, NstdPtysSubGrp_NoNestedPartySubIDs_149);
          set_field(noNestedPartySubIDs_0_1_2_3_1, FIX::NestedPartySubIDType{776687753}, NstdPtysSubGrp_NoNestedPartySubIDs_149);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_149);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_150;
          set_field(noNestedPartySubIDs_0_1_2_3_2, FIX::NestedPartySubID{"STRING_205342494"}, NstdPtysSubGrp_NoNestedPartySubIDs_150);
          set_field(noNestedPartySubIDs_0_1_2_3_2, FIX::NestedPartySubIDType{989881319}, NstdPtysSubGrp_NoNestedPartySubIDs_150);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_150);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_0_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_14;
      set_field(noAllocs_0_1_2, FIX::AllocAccount{"STRING_622757395"}, PreAllocGrp_NoAllocs_14);
      set_field(noAllocs_0_1_2, FIX::AllocAcctIDSource{348902542}, PreAllocGrp_NoAllocs_14);
      FIX::AllocQty AllocQty_31;
      AllocQty_31.setString("18365709");
set_field(noAllocs_0_1_2, AllocQty_31, PreAllocGrp_NoAllocs_14);
      set_field(noAllocs_0_1_2, FIX::AllocSettlCurrency{"CHF"}, PreAllocGrp_NoAllocs_14);
      set_field(noAllocs_0_1_2, FIX::IndividualAllocID{"STRING_1757757810"}, PreAllocGrp_NoAllocs_14);
      all_values.push_back(PreAllocGrp_NoAllocs_14);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_72;
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyID{"STRING_128546681"}, NestedParties_NoNestedPartyIDs_72);
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_72);
        set_field(noNestedPartyIDs_0_2_2_0, FIX::NestedPartyRole{1945413703}, NestedParties_NoNestedPartyIDs_72);
        all_values.push_back(NestedParties_NoNestedPartyIDs_72);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_151;
          set_field(noNestedPartySubIDs_0_2_0_3_0, FIX::NestedPartySubID{"STRING_444692394"}, NstdPtysSubGrp_NoNestedPartySubIDs_151);
          set_field(noNestedPartySubIDs_0_2_0_3_0, FIX::NestedPartySubIDType{1019522297}, NstdPtysSubGrp_NoNestedPartySubIDs_151);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_151);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_152;
          set_field(noNestedPartySubIDs_0_2_0_3_1, FIX::NestedPartySubID{"STRING_2030637310"}, NstdPtysSubGrp_NoNestedPartySubIDs_152);
          set_field(noNestedPartySubIDs_0_2_0_3_1, FIX::NestedPartySubIDType{2098861016}, NstdPtysSubGrp_NoNestedPartySubIDs_152);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_152);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_153;
          set_field(noNestedPartySubIDs_0_2_0_3_2, FIX::NestedPartySubID{"STRING_1745134272"}, NstdPtysSubGrp_NoNestedPartySubIDs_153);
          set_field(noNestedPartySubIDs_0_2_0_3_2, FIX::NestedPartySubIDType{1245161686}, NstdPtysSubGrp_NoNestedPartySubIDs_153);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_153);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_0.addGroup(noNestedPartySubIDs_0_2_0_3_2);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_73;
        set_field(noNestedPartyIDs_0_2_2_1, FIX::NestedPartyID{"STRING_1063838591"}, NestedParties_NoNestedPartyIDs_73);
        set_field(noNestedPartyIDs_0_2_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_73);
        set_field(noNestedPartyIDs_0_2_2_1, FIX::NestedPartyRole{964438741}, NestedParties_NoNestedPartyIDs_73);
        all_values.push_back(NestedParties_NoNestedPartyIDs_73);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_154;
          set_field(noNestedPartySubIDs_0_2_1_3_0, FIX::NestedPartySubID{"STRING_1831748092"}, NstdPtysSubGrp_NoNestedPartySubIDs_154);
          set_field(noNestedPartySubIDs_0_2_1_3_0, FIX::NestedPartySubIDType{145104303}, NstdPtysSubGrp_NoNestedPartySubIDs_154);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_154);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_155;
          set_field(noNestedPartySubIDs_0_2_1_3_1, FIX::NestedPartySubID{"STRING_1971854878"}, NstdPtysSubGrp_NoNestedPartySubIDs_155);
          set_field(noNestedPartySubIDs_0_2_1_3_1, FIX::NestedPartySubIDType{1233355702}, NstdPtysSubGrp_NoNestedPartySubIDs_155);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_155);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_1.addGroup(noNestedPartySubIDs_0_2_1_3_1);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_2_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_74;
        set_field(noNestedPartyIDs_0_2_2_2, FIX::NestedPartyID{"STRING_1912157542"}, NestedParties_NoNestedPartyIDs_74);
        set_field(noNestedPartyIDs_0_2_2_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_74);
        set_field(noNestedPartyIDs_0_2_2_2, FIX::NestedPartyRole{1431757358}, NestedParties_NoNestedPartyIDs_74);
        all_values.push_back(NestedParties_NoNestedPartyIDs_74);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_156;
          set_field(noNestedPartySubIDs_0_2_2_3_0, FIX::NestedPartySubID{"STRING_1688636736"}, NstdPtysSubGrp_NoNestedPartySubIDs_156);
          set_field(noNestedPartySubIDs_0_2_2_3_0, FIX::NestedPartySubIDType{274155029}, NstdPtysSubGrp_NoNestedPartySubIDs_156);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_156);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_157;
          set_field(noNestedPartySubIDs_0_2_2_3_1, FIX::NestedPartySubID{"STRING_1164119042"}, NstdPtysSubGrp_NoNestedPartySubIDs_157);
          set_field(noNestedPartySubIDs_0_2_2_3_1, FIX::NestedPartySubIDType{2037539278}, NstdPtysSubGrp_NoNestedPartySubIDs_157);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_157);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_2_2_2.addGroup(noNestedPartySubIDs_0_2_2_3_1);
        }
        noAllocs_0_1_2.addGroup(noNestedPartyIDs_0_2_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_2);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_1;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_4;
    set_field(noSides_0_1, FIX::Account{"STRING_2110726008"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::AccountType{2}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::AcctIDSource{99}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::AllocID{"STRING_1721000170"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::BookingType{0}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::BookingUnit{'1'}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::CashMargin{'1'}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::ClOrdID{"STRING_1886272355"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::ClOrdLinkID{"STRING_1937456941"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::ClearingFeeIndicator{"STRING_9"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::CoveredOrUncovered{0}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::CustOrderCapacity{4}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::DayBookingInst{'0'}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::EncodedText{"DATA_355961628"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::EncodedTextLen{918288641}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::ForexReq{true}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::OrderCapacity{'R'}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_E"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::OrigClOrdID{"STRING_1342705408"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::PositionEffect{'F'}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::PreTradeAnonymity{true}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::PreallocMethod{'0'}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::QtyType{2}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::SecondaryClOrdID{"STRING_1792505580"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::SettlCurrency{"CAN"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::Side{'C'}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::SideComplianceID{"STRING_44040320"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(13, 18, 50, 12, 10, 2017)}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::SolicitedFlag{true}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::Text{"STRING_1940354117"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::TradeDate{"LOCALMKTDATE_2133591704"}, SideCrossOrdModGrp_NoSides_4);
    set_field(noSides_0_1, FIX::TradeOriginationDate{"LOCALMKTDATE_2053724183"}, SideCrossOrdModGrp_NoSides_4);
    all_values.push_back(SideCrossOrdModGrp_NoSides_4);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_17;
    set_field(noSides_0_1, FIX::CommCurrency{"JPY"}, CommissionData_17);
    set_field(noSides_0_1, FIX::CommType{'6'}, CommissionData_17);
    FIX::Commission Commission_17;
    Commission_17.setString("14034543");
set_field(noSides_0_1, Commission_17, CommissionData_17);
    set_field(noSides_0_1, FIX::FundRenewWaiv{'Y'}, CommissionData_17);
    all_values.push_back(CommissionData_17);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_12;
    FIX::CashOrderQty CashOrderQty_12;
    CashOrderQty_12.setString("10205131");
set_field(noSides_0_1, CashOrderQty_12, OrderQtyData_12);
    FIX::OrderPercent OrderPercent_12;
    OrderPercent_12.setString("93.600000");
set_field(noSides_0_1, OrderPercent_12, OrderQtyData_12);
    FIX::OrderQty OrderQty_21;
    OrderQty_21.setString("5758572");
set_field(noSides_0_1, OrderQty_21, OrderQtyData_12);
    set_field(noSides_0_1, FIX::RoundingDirection{'1'}, OrderQtyData_12);
    FIX::RoundingModulus RoundingModulus_12;
    RoundingModulus_12.setString("20569867");
set_field(noSides_0_1, RoundingModulus_12, OrderQtyData_12);
    all_values.push_back(OrderQtyData_12);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_77;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_1791992381"}, Parties_NoPartyIDs_77);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_77);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{81}, Parties_NoPartyIDs_77);
      all_values.push_back(Parties_NoPartyIDs_77);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_156;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_1582356713"}, PtysSubGrp_NoPartySubIDs_156);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_156);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_156);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_78;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_1851237506"}, Parties_NoPartyIDs_78);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_78);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{21}, Parties_NoPartyIDs_78);
      all_values.push_back(Parties_NoPartyIDs_78);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_157;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_971759265"}, PtysSubGrp_NoPartySubIDs_157);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_157);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_157);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_158;
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubID{"STRING_1706308759"}, PtysSubGrp_NoPartySubIDs_158);
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubIDType{12}, PtysSubGrp_NoPartySubIDs_158);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_158);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_159;
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubID{"STRING_1218389048"}, PtysSubGrp_NoPartySubIDs_159);
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_159);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_159);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_79;
      set_field(noPartyIDs_1_1_2, FIX::PartyID{"STRING_1365804270"}, Parties_NoPartyIDs_79);
      set_field(noPartyIDs_1_1_2, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_79);
      set_field(noPartyIDs_1_1_2, FIX::PartyRole{55}, Parties_NoPartyIDs_79);
      all_values.push_back(Parties_NoPartyIDs_79);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_160;
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubID{"STRING_594103280"}, PtysSubGrp_NoPartySubIDs_160);
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_160);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_160);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_15;
      set_field(noAllocs_1_1_0, FIX::AllocAccount{"STRING_1997557647"}, PreAllocGrp_NoAllocs_15);
      set_field(noAllocs_1_1_0, FIX::AllocAcctIDSource{1795581342}, PreAllocGrp_NoAllocs_15);
      FIX::AllocQty AllocQty_32;
      AllocQty_32.setString("8096258");
set_field(noAllocs_1_1_0, AllocQty_32, PreAllocGrp_NoAllocs_15);
      set_field(noAllocs_1_1_0, FIX::AllocSettlCurrency{"GBP"}, PreAllocGrp_NoAllocs_15);
      set_field(noAllocs_1_1_0, FIX::IndividualAllocID{"STRING_226262769"}, PreAllocGrp_NoAllocs_15);
      all_values.push_back(PreAllocGrp_NoAllocs_15);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_75;
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyID{"STRING_2142517655"}, NestedParties_NoNestedPartyIDs_75);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_75);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyRole{1871171235}, NestedParties_NoNestedPartyIDs_75);
        all_values.push_back(NestedParties_NoNestedPartyIDs_75);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_158;
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubID{"STRING_976507768"}, NstdPtysSubGrp_NoNestedPartySubIDs_158);
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubIDType{1306044300}, NstdPtysSubGrp_NoNestedPartySubIDs_158);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_158);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_159;
          set_field(noNestedPartySubIDs_1_0_0_3_1, FIX::NestedPartySubID{"STRING_226748941"}, NstdPtysSubGrp_NoNestedPartySubIDs_159);
          set_field(noNestedPartySubIDs_1_0_0_3_1, FIX::NestedPartySubIDType{680261626}, NstdPtysSubGrp_NoNestedPartySubIDs_159);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_159);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_76;
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyID{"STRING_927300944"}, NestedParties_NoNestedPartyIDs_76);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_76);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyRole{1403671755}, NestedParties_NoNestedPartyIDs_76);
        all_values.push_back(NestedParties_NoNestedPartyIDs_76);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_160;
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubID{"STRING_983527700"}, NstdPtysSubGrp_NoNestedPartySubIDs_160);
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubIDType{962496867}, NstdPtysSubGrp_NoNestedPartySubIDs_160);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_160);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_161;
          set_field(noNestedPartySubIDs_1_0_1_3_1, FIX::NestedPartySubID{"STRING_949929002"}, NstdPtysSubGrp_NoNestedPartySubIDs_161);
          set_field(noNestedPartySubIDs_1_0_1_3_1, FIX::NestedPartySubIDType{54433100}, NstdPtysSubGrp_NoNestedPartySubIDs_161);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_161);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_162;
          set_field(noNestedPartySubIDs_1_0_1_3_2, FIX::NestedPartySubID{"STRING_1077737131"}, NstdPtysSubGrp_NoNestedPartySubIDs_162);
          set_field(noNestedPartySubIDs_1_0_1_3_2, FIX::NestedPartySubIDType{168249624}, NstdPtysSubGrp_NoNestedPartySubIDs_162);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_162);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_2;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_5;
    set_field(noSides_0_2, FIX::Account{"STRING_1065692617"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::AccountType{8}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::AcctIDSource{5}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::AllocID{"STRING_1659795898"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::BookingType{1}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::BookingUnit{'2'}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::CashMargin{'3'}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::ClOrdID{"STRING_789024822"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::ClOrdLinkID{"STRING_2039032992"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::ClearingFeeIndicator{"STRING_L"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::CoveredOrUncovered{0}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::CustOrderCapacity{2}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::DayBookingInst{'0'}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::EncodedText{"DATA_1008013799"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::EncodedTextLen{2136067264}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::ForexReq{false}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::OrderCapacity{'P'}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::OrderRestrictions{"MULTIPLECHARVALUE_A"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::OrigClOrdID{"STRING_350287949"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::PositionEffect{'R'}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::PreTradeAnonymity{false}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::PreallocMethod{'1'}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::QtyType{0}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::SecondaryClOrdID{"STRING_901541118"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::SettlCurrency{"USD"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::Side{'2'}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::SideComplianceID{"STRING_1979094456"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(21, 1, 34, 5, 4, 2012)}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::SolicitedFlag{false}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::Text{"STRING_522078342"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::TradeDate{"LOCALMKTDATE_563169213"}, SideCrossOrdModGrp_NoSides_5);
    set_field(noSides_0_2, FIX::TradeOriginationDate{"LOCALMKTDATE_1755845223"}, SideCrossOrdModGrp_NoSides_5);
    all_values.push_back(SideCrossOrdModGrp_NoSides_5);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_18;
    set_field(noSides_0_2, FIX::CommCurrency{"EUR"}, CommissionData_18);
    set_field(noSides_0_2, FIX::CommType{'4'}, CommissionData_18);
    FIX::Commission Commission_18;
    Commission_18.setString("5314397");
set_field(noSides_0_2, Commission_18, CommissionData_18);
    set_field(noSides_0_2, FIX::FundRenewWaiv{'Y'}, CommissionData_18);
    all_values.push_back(CommissionData_18);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_13;
    FIX::CashOrderQty CashOrderQty_13;
    CashOrderQty_13.setString("16293551");
set_field(noSides_0_2, CashOrderQty_13, OrderQtyData_13);
    FIX::OrderPercent OrderPercent_13;
    OrderPercent_13.setString("34.160000");
set_field(noSides_0_2, OrderPercent_13, OrderQtyData_13);
    FIX::OrderQty OrderQty_22;
    OrderQty_22.setString("4621721");
set_field(noSides_0_2, OrderQty_22, OrderQtyData_13);
    set_field(noSides_0_2, FIX::RoundingDirection{'1'}, OrderQtyData_13);
    FIX::RoundingModulus RoundingModulus_13;
    RoundingModulus_13.setString("14851148");
set_field(noSides_0_2, RoundingModulus_13, OrderQtyData_13);
    all_values.push_back(OrderQtyData_13);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_80;
      set_field(noPartyIDs_2_1_0, FIX::PartyID{"STRING_1443543775"}, Parties_NoPartyIDs_80);
      set_field(noPartyIDs_2_1_0, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_80);
      set_field(noPartyIDs_2_1_0, FIX::PartyRole{84}, Parties_NoPartyIDs_80);
      all_values.push_back(Parties_NoPartyIDs_80);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_161;
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubID{"STRING_1884525282"}, PtysSubGrp_NoPartySubIDs_161);
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_161);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_161);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      noSides_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_2_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_16;
      set_field(noAllocs_2_1_0, FIX::AllocAccount{"STRING_1601079619"}, PreAllocGrp_NoAllocs_16);
      set_field(noAllocs_2_1_0, FIX::AllocAcctIDSource{803341636}, PreAllocGrp_NoAllocs_16);
      FIX::AllocQty AllocQty_33;
      AllocQty_33.setString("720005");
set_field(noAllocs_2_1_0, AllocQty_33, PreAllocGrp_NoAllocs_16);
      set_field(noAllocs_2_1_0, FIX::AllocSettlCurrency{"CHF"}, PreAllocGrp_NoAllocs_16);
      set_field(noAllocs_2_1_0, FIX::IndividualAllocID{"STRING_1760471231"}, PreAllocGrp_NoAllocs_16);
      all_values.push_back(PreAllocGrp_NoAllocs_16);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_77;
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyID{"STRING_95873284"}, NestedParties_NoNestedPartyIDs_77);
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyIDSource{'8'}, NestedParties_NoNestedPartyIDs_77);
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyRole{1040601115}, NestedParties_NoNestedPartyIDs_77);
        all_values.push_back(NestedParties_NoNestedPartyIDs_77);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_163;
          set_field(noNestedPartySubIDs_2_0_0_3_0, FIX::NestedPartySubID{"STRING_1376939760"}, NstdPtysSubGrp_NoNestedPartySubIDs_163);
          set_field(noNestedPartySubIDs_2_0_0_3_0, FIX::NestedPartySubIDType{648962690}, NstdPtysSubGrp_NoNestedPartySubIDs_163);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_163);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_164;
          set_field(noNestedPartySubIDs_2_0_0_3_1, FIX::NestedPartySubID{"STRING_1031579312"}, NstdPtysSubGrp_NoNestedPartySubIDs_164);
          set_field(noNestedPartySubIDs_2_0_0_3_1, FIX::NestedPartySubIDType{1326828581}, NstdPtysSubGrp_NoNestedPartySubIDs_164);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_164);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_1);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_78;
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyID{"STRING_1270304057"}, NestedParties_NoNestedPartyIDs_78);
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_78);
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyRole{597273464}, NestedParties_NoNestedPartyIDs_78);
        all_values.push_back(NestedParties_NoNestedPartyIDs_78);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_165;
          set_field(noNestedPartySubIDs_2_0_1_3_0, FIX::NestedPartySubID{"STRING_2083042528"}, NstdPtysSubGrp_NoNestedPartySubIDs_165);
          set_field(noNestedPartySubIDs_2_0_1_3_0, FIX::NestedPartySubIDType{1059445644}, NstdPtysSubGrp_NoNestedPartySubIDs_165);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_165);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      noSides_0_2.addGroup(noAllocs_2_1_0);
    }
    msg.addGroup(noSides_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_18;
  set_field(msg, FIX::BenchmarkCurveCurrency{"JPY"}, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_SONIA"}, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1471310704"}, SpreadOrBenchmarkCurveData_18);
  FIX::BenchmarkPrice BenchmarkPrice_18;
  BenchmarkPrice_18.setString("2561741");
set_field(msg, BenchmarkPrice_18, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkPriceType{1814471147}, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_352188128"}, SpreadOrBenchmarkCurveData_18);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_2140699478"}, SpreadOrBenchmarkCurveData_18);
  FIX::Spread Spread_18;
  Spread_18.setString("6387183");
set_field(msg, Spread_18, SpreadOrBenchmarkCurveData_18);
  all_values.push_back(SpreadOrBenchmarkCurveData_18);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderCross::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_30;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_INSURED"}, Stipulations_NoStipulations_30);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1442059963"}, Stipulations_NoStipulations_30);
    all_values.push_back(Stipulations_NoStipulations_30);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_7;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_1842182890"}, StrategyParametersGrp_NoStrategyParameters_7);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{14}, StrategyParametersGrp_NoStrategyParameters_7);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_1633882297"}, StrategyParametersGrp_NoStrategyParameters_7);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_7);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_8;
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterName{"STRING_1915963604"}, StrategyParametersGrp_NoStrategyParameters_8);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterType{23}, StrategyParametersGrp_NoStrategyParameters_8);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterValue{"STRING_300169196"}, StrategyParametersGrp_NoStrategyParameters_8);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_8);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_6;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_1"}, TrdgSesGrp_NoTradingSessions_6);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_6"}, TrdgSesGrp_NoTradingSessions_6);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_6);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_7;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_7);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_2"}, TrdgSesGrp_NoTradingSessions_7);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_7);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_3;
  set_field(msg, FIX::TriggerAction{'3'}, TriggeringInstruction_3);
  FIX::TriggerNewPrice TriggerNewPrice_3;
  TriggerNewPrice_3.setString("5808641");
set_field(msg, TriggerNewPrice_3, TriggeringInstruction_3);
  FIX::TriggerNewQty TriggerNewQty_3;
  TriggerNewQty_3.setString("12587180");
set_field(msg, TriggerNewQty_3, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerOrderType{'2'}, TriggeringInstruction_3);
  FIX::TriggerPrice TriggerPrice_3;
  TriggerPrice_3.setString("13330397");
set_field(msg, TriggerPrice_3, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerPriceDirection{'U'}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerPriceType{'6'}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerPriceTypeScope{'0'}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_467466985"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerSecurityID{"STRING_90111474"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_684633732"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerSymbol{"STRING_723641181"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_1904582621"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_1036821861"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerType{'4'}, TriggeringInstruction_3);
  all_values.push_back(TriggeringInstruction_3);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderCross::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_63;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_838232410"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{163668812}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1837877263"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{711643476}, UnderlyingInstrument_63);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_63;
    UnderlyingAdjustedQuantity_63.setString("20058517");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_63, UnderlyingInstrument_63);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_63;
    UnderlyingAllocationPercent_63.setString("56.480000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_63, UnderlyingInstrument_63);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_63;
    UnderlyingAttachmentPoint_63.setString("21.250000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1774331658"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_2129307318"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_498211321"}, UnderlyingInstrument_63);
    FIX::UnderlyingCapValue UnderlyingCapValue_63;
    UnderlyingCapValue_63.setString("4359290");
set_field(noUnderlyings_0_0, UnderlyingCapValue_63, UnderlyingInstrument_63);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_63;
    UnderlyingCashAmount_63.setString("7934269");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_63);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_63;
    UnderlyingContractMultiplier_63.setString("18939728");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{489125926}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_884290518"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_327353365"}, UnderlyingInstrument_63);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_63;
    UnderlyingCouponRate_63.setString("39.990000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_190534223"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_63);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_63;
    UnderlyingCurrentValue_63.setString("5562235");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_63, UnderlyingInstrument_63);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_63;
    UnderlyingDetachmentPoint_63.setString("61.400000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_63, UnderlyingInstrument_63);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_63;
    UnderlyingDirtyPrice_63.setString("12621042");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_63, UnderlyingInstrument_63);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_63;
    UnderlyingEndPrice_63.setString("6463350");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_63, UnderlyingInstrument_63);
    FIX::UnderlyingEndValue UnderlyingEndValue_63;
    UnderlyingEndValue_63.setString("15583498");
set_field(noUnderlyings_0_0, UnderlyingEndValue_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1985745469}, UnderlyingInstrument_63);
    FIX::UnderlyingFXRate UnderlyingFXRate_63;
    UnderlyingFXRate_63.setString("4034340");
set_field(noUnderlyings_0_0, UnderlyingFXRate_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_63);
    FIX::UnderlyingFactor UnderlyingFactor_63;
    UnderlyingFactor_63.setString("5551188");
set_field(noUnderlyings_0_0, UnderlyingFactor_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{799251319}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1285920495"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_718787645"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_489644934"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1997563971"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_577155699"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_277816935"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_48122448"}, UnderlyingInstrument_63);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_63;
    UnderlyingNotionalPercentageOutstanding_63.setString("37.100000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_63);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_63;
    UnderlyingOriginalNotionalPercentageOutstanding_63.setString("37.690000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_639932791"}, UnderlyingInstrument_63);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_63;
    UnderlyingPriceUnitOfMeasureQty_63.setString("10530675");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{574170398}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{386421986}, UnderlyingInstrument_63);
    FIX::UnderlyingPx UnderlyingPx_63;
    UnderlyingPx_63.setString("15421934");
set_field(noUnderlyings_0_0, UnderlyingPx_63, UnderlyingInstrument_63);
    FIX::UnderlyingQty UnderlyingQty_63;
    UnderlyingQty_63.setString("14584609");
set_field(noUnderlyings_0_0, UnderlyingQty_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_713775351"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1142553848"}, UnderlyingInstrument_63);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_63;
    UnderlyingRepurchaseRate_63.setString("51.390000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{226684815}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1937191152"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_57735063"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1100400955"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1051811792"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_704070109"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_511267179"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_890073614"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1107504128"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_958955265"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_63);
    FIX::UnderlyingStartValue UnderlyingStartValue_63;
    UnderlyingStartValue_63.setString("19067554");
set_field(noUnderlyings_0_0, UnderlyingStartValue_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_97392112"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_63);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_63;
    UnderlyingStrikePrice_63.setString("20949560");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_593652143"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_526733669"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_2143078532"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_797655853"}, UnderlyingInstrument_63);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_63;
    UnderlyingUnitOfMeasureQty_63.setString("7863742");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_63, UnderlyingInstrument_63);
    all_values.push_back(UnderlyingInstrument_63);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_131;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1437588644"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1839441845"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_132;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1116099052"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1824010630"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_133;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1234151694"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_427076321"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_124;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_229221895"}, UnderlyingStipulations_NoUnderlyingStips_124);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_2076071460"}, UnderlyingStipulations_NoUnderlyingStips_124);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_124);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_125;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_616987148"}, UnderlyingStipulations_NoUnderlyingStips_125);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_18929399"}, UnderlyingStipulations_NoUnderlyingStips_125);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_125);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_126;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_2133806524"}, UnderlyingStipulations_NoUnderlyingStips_126);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1717388103"}, UnderlyingStipulations_NoUnderlyingStips_126);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_126);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_137;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_690392985"}, UndlyInstrumentParties_NoUndlyInstrumentParties_137);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_137);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1960814805}, UndlyInstrumentParties_NoUndlyInstrumentParties_137);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_137);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1040126900"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1258523604}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_271);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_138;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1557168913"}, UndlyInstrumentParties_NoUndlyInstrumentParties_138);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_138);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1275020047}, UndlyInstrumentParties_NoUndlyInstrumentParties_138);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_138);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1084991448"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1868672190}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_272);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_13;
  FIX::Yield Yield_13;
  Yield_13.setString("56.680000");
set_field(msg, Yield_13, YieldData_13);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1080586333"}, YieldData_13);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_518844395"}, YieldData_13);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_13;
  YieldRedemptionPrice_13.setString("9717099");
set_field(msg, YieldRedemptionPrice_13, YieldData_13);
  set_field(msg, FIX::YieldRedemptionPriceType{1622514987}, YieldData_13);
  set_field(msg, FIX::YieldType{"STRING_COMPOUND"}, YieldData_13);
  all_values.push_back(YieldData_13);
  all_compo_names.insert(".");

  // header
  multiset<string> header_51;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_9"}, header_51);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_591130391"}, header_51);
  set_header_field(msg.getHeader(), FIX::BodyLength{1632960022}, header_51);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1897819834"}, header_51);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1018206712"}, header_51);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_2023262356"}, header_51);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_2127041729"}, header_51);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{946794525}, header_51);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_51);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{2145971128}, header_51);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_933117401"}, header_51);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_62670312"}, header_51);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1069228671"}, header_51);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(11, 29, 12, 19, 6, 2006)}, header_51);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_51);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_51);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_342211117"}, header_51);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1258995660}, header_51);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_989808375"}, header_51);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_527546786"}, header_51);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_192098345"}, header_51);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(8, 32, 2, 4, 12, 2005)}, header_51);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1913261054"}, header_51);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1276466788"}, header_51);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_678857245"}, header_51);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1892819135"}, header_51);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{75777665}, header_51);
  all_values.push_back(header_51);
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
