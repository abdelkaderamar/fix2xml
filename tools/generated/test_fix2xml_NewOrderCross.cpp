#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::NewOrderCross msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderCross_0;
  set_field(msg, FIX::CancellationRights{'M'}, NewOrderCross_0);
  set_field(msg, FIX::ComplianceID{"STRING_315509010"}, NewOrderCross_0);
  set_field(msg, FIX::CrossID{"STRING_1341465076"}, NewOrderCross_0);
  set_field(msg, FIX::CrossPrioritization{1}, NewOrderCross_0);
  set_field(msg, FIX::CrossType{2}, NewOrderCross_0);
  set_field(msg, FIX::Currency{"EUR"}, NewOrderCross_0);
  set_field(msg, FIX::Designation{"STRING_2103073212"}, NewOrderCross_0);
  set_field(msg, FIX::EffectiveTime{FIX::UTCTIMESTAMP(1, 50, 13, 8, 5, 2001)}, NewOrderCross_0);
  set_field(msg, FIX::ExDestination{"EXCHANGE_1438761208"}, NewOrderCross_0);
  set_field(msg, FIX::ExDestinationIDSource{'E'}, NewOrderCross_0);
  set_field(msg, FIX::ExecInst{"MULTIPLECHARVALUE_W"}, NewOrderCross_0);
  set_field(msg, FIX::ExpireDate{"LOCALMKTDATE_524000995"}, NewOrderCross_0);
  set_field(msg, FIX::ExpireTime{FIX::UTCTIMESTAMP(10, 34, 42, 19, 2, 2009)}, NewOrderCross_0);
  set_field(msg, FIX::GTBookingInst{1}, NewOrderCross_0);
  set_field(msg, FIX::HandlInst{'3'}, NewOrderCross_0);
  set_field(msg, FIX::IOIID{"STRING_1928175489"}, NewOrderCross_0);
  set_field(msg, FIX::LocateReqd{false}, NewOrderCross_0);
  FIX::MatchIncrement MatchIncrement_3;
  MatchIncrement_3.setString("6956369");
set_field(msg, MatchIncrement_3, NewOrderCross_0);
  FIX::MaxFloor MaxFloor_3;
  MaxFloor_3.setString("1103289");
set_field(msg, MaxFloor_3, NewOrderCross_0);
  set_field(msg, FIX::MaxPriceLevels{931051794}, NewOrderCross_0);
  FIX::MaxShow MaxShow_3;
  MaxShow_3.setString("20371020");
set_field(msg, MaxShow_3, NewOrderCross_0);
  FIX::MinQty MinQty_7;
  MinQty_7.setString("4224601");
set_field(msg, MinQty_7, NewOrderCross_0);
  set_field(msg, FIX::MoneyLaunderingStatus{'N'}, NewOrderCross_0);
  set_field(msg, FIX::OrdType{'1'}, NewOrderCross_0);
  FIX::ParticipationRate ParticipationRate_3;
  ParticipationRate_3.setString("0.990000");
set_field(msg, ParticipationRate_3, NewOrderCross_0);
  FIX::PrevClosePx PrevClosePx_3;
  PrevClosePx_3.setString("20696542");
set_field(msg, PrevClosePx_3, NewOrderCross_0);
  FIX::Price Price_13;
  Price_13.setString("6753560");
set_field(msg, Price_13, NewOrderCross_0);
  set_field(msg, FIX::PriceProtectionScope{'0'}, NewOrderCross_0);
  set_field(msg, FIX::PriceType{16}, NewOrderCross_0);
  set_field(msg, FIX::ProcessCode{'1'}, NewOrderCross_0);
  set_field(msg, FIX::QuoteID{"STRING_1553914868"}, NewOrderCross_0);
  set_field(msg, FIX::RegistID{"STRING_276307026"}, NewOrderCross_0);
  set_field(msg, FIX::SettlDate{"LOCALMKTDATE_159841664"}, NewOrderCross_0);
  set_field(msg, FIX::SettlType{"STRING_5"}, NewOrderCross_0);
  FIX::StopPx StopPx_3;
  StopPx_3.setString("2376794");
set_field(msg, StopPx_3, NewOrderCross_0);
  set_field(msg, FIX::TargetStrategy{2}, NewOrderCross_0);
  set_field(msg, FIX::TargetStrategyParameters{"STRING_1369193424"}, NewOrderCross_0);
  set_field(msg, FIX::TimeInForce{'3'}, NewOrderCross_0);
  set_field(msg, FIX::TransBkdTime{FIX::UTCTIMESTAMP(14, 7, 57, 20, 11, 2014)}, NewOrderCross_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(23, 38, 35, 2, 9, 2017)}, NewOrderCross_0);
  all_values.push_back(NewOrderCross_0);

  all_compo_names.insert("NewOrderCross");

  // DiscretionInstructions
  multiset<string> DiscretionInstructions_3;
  set_field(msg, FIX::DiscretionInst{'0'}, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionLimitType{0}, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionMoveType{1}, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionOffsetType{3}, DiscretionInstructions_3);
  FIX::DiscretionOffsetValue DiscretionOffsetValue_3;
  DiscretionOffsetValue_3.setString("15949146");
set_field(msg, DiscretionOffsetValue_3, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionRoundDirection{1}, DiscretionInstructions_3);
  set_field(msg, FIX::DiscretionScope{1}, DiscretionInstructions_3);
  all_values.push_back(DiscretionInstructions_3);
  all_compo_names.insert(".");

  // DisplayInstruction
  multiset<string> DisplayInstruction_3;
  FIX::DisplayHighQty DisplayHighQty_3;
  DisplayHighQty_3.setString("18018691");
set_field(msg, DisplayHighQty_3, DisplayInstruction_3);
  FIX::DisplayLowQty DisplayLowQty_3;
  DisplayLowQty_3.setString("1967362");
set_field(msg, DisplayLowQty_3, DisplayInstruction_3);
  set_field(msg, FIX::DisplayMethod{'1'}, DisplayInstruction_3);
  FIX::DisplayMinIncr DisplayMinIncr_3;
  DisplayMinIncr_3.setString("20781761");
set_field(msg, DisplayMinIncr_3, DisplayInstruction_3);
  FIX::DisplayQty DisplayQty_3;
  DisplayQty_3.setString("3565779");
set_field(msg, DisplayQty_3, DisplayInstruction_3);
  set_field(msg, FIX::DisplayWhen{'2'}, DisplayInstruction_3);
  FIX::RefreshQty RefreshQty_3;
  RefreshQty_3.setString("1683719");
set_field(msg, RefreshQty_3, DisplayInstruction_3);
  FIX::SecondaryDisplayQty SecondaryDisplayQty_3;
  SecondaryDisplayQty_3.setString("15968773");
set_field(msg, SecondaryDisplayQty_3, DisplayInstruction_3);
  all_values.push_back(DisplayInstruction_3);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::NewOrderCross::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_58;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_149069327"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{461112705}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_154612120"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{863823774}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_128184334"}, InstrumentLeg_58);
    FIX::LegContractMultiplier LegContractMultiplier_58;
    LegContractMultiplier_58.setString("5860880");
set_field(noLegs_0_0, LegContractMultiplier_58, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{356343957}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_287752728"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_890394776"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1777039628"}, InstrumentLeg_58);
    FIX::LegCouponRate LegCouponRate_58;
    LegCouponRate_58.setString("39.060000");
set_field(noLegs_0_0, LegCouponRate_58, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1890338431"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_632416799"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{966581731}, InstrumentLeg_58);
    FIX::LegFactor LegFactor_58;
    LegFactor_58.setString("1468036");
set_field(noLegs_0_0, LegFactor_58, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1263221726}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1550972951"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1741718281"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_421899059"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1638101175"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1396103735"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_618635338"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1131660619"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1326796215"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'9'}, InstrumentLeg_58);
    FIX::LegOptionRatio LegOptionRatio_58;
    LegOptionRatio_58.setString("14704124");
set_field(noLegs_0_0, LegOptionRatio_58, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1495168117"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_424607000"}, InstrumentLeg_58);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_58;
    LegPriceUnitOfMeasureQty_58.setString("10308741");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_58, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegProduct{1644237444}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegPutOrCall{885719705}, InstrumentLeg_58);
    FIX::LegRatioQty LegRatioQty_58;
    LegRatioQty_58.setString("11854862");
set_field(noLegs_0_0, LegRatioQty_58, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_360577570"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1013904039"}, InstrumentLeg_58);
    FIX::LegRepurchaseRate LegRepurchaseRate_58;
    LegRepurchaseRate_58.setString("43.140000");
set_field(noLegs_0_0, LegRepurchaseRate_58, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{716921527}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1301656767"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_514485442"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_346477508"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_217037026"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_257340226"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1507058119"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegSide{'8'}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_889757025"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_58);
    FIX::LegStrikePrice LegStrikePrice_58;
    LegStrikePrice_58.setString("54951");
set_field(noLegs_0_0, LegStrikePrice_58, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1877129153"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_579618508"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_427394162"}, InstrumentLeg_58);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1367746680"}, InstrumentLeg_58);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_58;
    LegUnitOfMeasureQty_58.setString("19757222");
set_field(noLegs_0_0, LegUnitOfMeasureQty_58, InstrumentLeg_58);
    all_values.push_back(InstrumentLeg_58);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_120;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_351923652"}, LegSecAltIDGrp_NoLegSecurityAltID_120);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1155034810"}, LegSecAltIDGrp_NoLegSecurityAltID_120);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_120);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  // Instrument
  multiset<string> Instrument_37;
  FIX::AttachmentPoint AttachmentPoint_37;
  AttachmentPoint_37.setString("27.810000");
set_field(msg, AttachmentPoint_37, Instrument_37);
  set_field(msg, FIX::CFICode{"STRING_1822336145"}, Instrument_37);
  set_field(msg, FIX::CPProgram{1}, Instrument_37);
  set_field(msg, FIX::CPRegType{"STRING_298366133"}, Instrument_37);
  FIX::CapPrice CapPrice_37;
  CapPrice_37.setString("7057266");
set_field(msg, CapPrice_37, Instrument_37);
  FIX::ContractMultiplier ContractMultiplier_37;
  ContractMultiplier_37.setString("21469567");
set_field(msg, ContractMultiplier_37, Instrument_37);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_37);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1891212902"}, Instrument_37);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_360050645"}, Instrument_37);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_50506229"}, Instrument_37);
  FIX::CouponRate CouponRate_37;
  CouponRate_37.setString("35.680000");
set_field(msg, CouponRate_37, Instrument_37);
  set_field(msg, FIX::CreditRating{"STRING_1076972173"}, Instrument_37);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1352162997"}, Instrument_37);
  FIX::DetachmentPoint DetachmentPoint_37;
  DetachmentPoint_37.setString("90.110000");
set_field(msg, DetachmentPoint_37, Instrument_37);
  set_field(msg, FIX::EncodedIssuer{"DATA_1423449681"}, Instrument_37);
  set_field(msg, FIX::EncodedIssuerLen{1569200023}, Instrument_37);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_139645589"}, Instrument_37);
  set_field(msg, FIX::EncodedSecurityDescLen{783024152}, Instrument_37);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_37);
  FIX::Factor Factor_37;
  Factor_37.setString("10294026");
set_field(msg, Factor_37, Instrument_37);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_37);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_37);
  FIX::FloorPrice FloorPrice_37;
  FloorPrice_37.setString("10348977");
set_field(msg, FloorPrice_37, Instrument_37);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_37);
  set_field(msg, FIX::InstrRegistry{"STRING_1825299014"}, Instrument_37);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_37);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_59088892"}, Instrument_37);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1653537609"}, Instrument_37);
  set_field(msg, FIX::Issuer{"STRING_360837732"}, Instrument_37);
  set_field(msg, FIX::ListMethod{0}, Instrument_37);
  set_field(msg, FIX::LocaleOfIssue{"STRING_661088771"}, Instrument_37);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_234596866"}, Instrument_37);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_85865041"}, Instrument_37);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1163808050"}, Instrument_37);
  FIX::MinPriceIncrement MinPriceIncrement_37;
  MinPriceIncrement_37.setString("5329629");
set_field(msg, MinPriceIncrement_37, Instrument_37);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_37;
  MinPriceIncrementAmount_37.setString("7915916");
set_field(msg, MinPriceIncrementAmount_37, Instrument_37);
  set_field(msg, FIX::NTPositionLimit{1163281125}, Instrument_37);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_37;
  NotionalPercentageOutstanding_37.setString("88.380000");
set_field(msg, NotionalPercentageOutstanding_37, Instrument_37);
  set_field(msg, FIX::OptAttribute{'5'}, Instrument_37);
  FIX::OptPayoutAmount OptPayoutAmount_37;
  OptPayoutAmount_37.setString("15233317");
set_field(msg, OptPayoutAmount_37, Instrument_37);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_37);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_37;
  OriginalNotionalPercentageOutstanding_37.setString("45.030000");
set_field(msg, OriginalNotionalPercentageOutstanding_37, Instrument_37);
  set_field(msg, FIX::Pool{"STRING_452820295"}, Instrument_37);
  set_field(msg, FIX::PositionLimit{972234416}, Instrument_37);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_37);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1876269976"}, Instrument_37);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_37;
  PriceUnitOfMeasureQty_37.setString("3939507");
set_field(msg, PriceUnitOfMeasureQty_37, Instrument_37);
  set_field(msg, FIX::Product{3}, Instrument_37);
  set_field(msg, FIX::ProductComplex{"STRING_511810480"}, Instrument_37);
  set_field(msg, FIX::PutOrCall{1}, Instrument_37);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_954494421"}, Instrument_37);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1620990835"}, Instrument_37);
  FIX::RepurchaseRate RepurchaseRate_37;
  RepurchaseRate_37.setString("79.290000");
set_field(msg, RepurchaseRate_37, Instrument_37);
  set_field(msg, FIX::RepurchaseTerm{1989392139}, Instrument_37);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_37);
  set_field(msg, FIX::SecurityDesc{"STRING_1577743295"}, Instrument_37);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1304200371"}, Instrument_37);
  set_field(msg, FIX::SecurityGroup{"STRING_371421939"}, Instrument_37);
  set_field(msg, FIX::SecurityID{"STRING_1083797256"}, Instrument_37);
  set_field(msg, FIX::SecurityIDSource{"STRING_4"}, Instrument_37);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_37);
  set_field(msg, FIX::SecuritySubType{"STRING_1744886027"}, Instrument_37);
  set_field(msg, FIX::SecurityType{"STRING_DINP"}, Instrument_37);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_37);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_37);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_285114321"}, Instrument_37);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1659891206"}, Instrument_37);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_37);
  FIX::StrikeMultiplier StrikeMultiplier_37;
  StrikeMultiplier_37.setString("477284");
set_field(msg, StrikeMultiplier_37, Instrument_37);
  FIX::StrikePrice StrikePrice_37;
  StrikePrice_37.setString("13003396");
set_field(msg, StrikePrice_37, Instrument_37);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_37);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_37;
  StrikePriceBoundaryPrecision_37.setString("29.970000");
set_field(msg, StrikePriceBoundaryPrecision_37, Instrument_37);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_37);
  FIX::StrikeValue StrikeValue_37;
  StrikeValue_37.setString("4469853");
set_field(msg, StrikeValue_37, Instrument_37);
  set_field(msg, FIX::Symbol{"STRING_1883799215"}, Instrument_37);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_37);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_37);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_37);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_37);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_37;
  UnitOfMeasureQty_37.setString("14951835");
set_field(msg, UnitOfMeasureQty_37, Instrument_37);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_37);
  all_values.push_back(Instrument_37);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_77;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_77);
    FIX::ComplexEventPrice ComplexEventPrice_77;
    ComplexEventPrice_77.setString("4578102");
set_field(noComplexEvents_0_0, ComplexEventPrice_77, ComplexEvents_NoComplexEvents_77);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_77);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_77;
    ComplexEventPriceBoundaryPrecision_77.setString("74.890000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_77, ComplexEvents_NoComplexEvents_77);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_77);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_77);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_77;
    ComplexOptPayoutAmount_77.setString("17616847");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_77, ComplexEvents_NoComplexEvents_77);
    all_values.push_back(ComplexEvents_NoComplexEvents_77);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_157;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 55, 16, 17, 5, 2016)}, ComplexEventDates_NoComplexEventDates_157);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 28, 28, 2, 6, 2000)}, ComplexEventDates_NoComplexEventDates_157);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_157);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_319;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 3, 19)}, ComplexEventTimes_NoComplexEventTimes_319);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 16, 5)}, ComplexEventTimes_NoComplexEventTimes_319);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_319);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_158;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 12, 1, 26, 12, 2006)}, ComplexEventDates_NoComplexEventDates_158);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 23, 55, 1, 1, 2010)}, ComplexEventDates_NoComplexEventDates_158);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_158);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_320;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 32, 40)}, ComplexEventTimes_NoComplexEventTimes_320);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 52, 46)}, ComplexEventTimes_NoComplexEventTimes_320);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_320);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_321;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 42, 45)}, ComplexEventTimes_NoComplexEventTimes_321);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 53, 31)}, ComplexEventTimes_NoComplexEventTimes_321);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_321);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_159;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 44, 43, 2, 12, 2000)}, ComplexEventDates_NoComplexEventDates_159);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 9, 10, 22, 10, 2008)}, ComplexEventDates_NoComplexEventDates_159);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_159);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_322;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 2, 41)}, ComplexEventTimes_NoComplexEventTimes_322);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 33, 57)}, ComplexEventTimes_NoComplexEventTimes_322);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_322);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_323;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 31, 45)}, ComplexEventTimes_NoComplexEventTimes_323);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 30, 19)}, ComplexEventTimes_NoComplexEventTimes_323);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_323);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_324;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 3, 20)}, ComplexEventTimes_NoComplexEventTimes_324);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 14, 28)}, ComplexEventTimes_NoComplexEventTimes_324);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_324);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_78;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_78);
    FIX::ComplexEventPrice ComplexEventPrice_78;
    ComplexEventPrice_78.setString("8504101");
set_field(noComplexEvents_0_1, ComplexEventPrice_78, ComplexEvents_NoComplexEvents_78);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_78);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_78;
    ComplexEventPriceBoundaryPrecision_78.setString("52.290000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_78, ComplexEvents_NoComplexEvents_78);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_78);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_78);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_78;
    ComplexOptPayoutAmount_78.setString("6495859");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_78, ComplexEvents_NoComplexEvents_78);
    all_values.push_back(ComplexEvents_NoComplexEvents_78);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_160;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 56, 4, 0, 10, 2012)}, ComplexEventDates_NoComplexEventDates_160);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 25, 2, 7, 5, 2012)}, ComplexEventDates_NoComplexEventDates_160);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_160);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_325;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 54, 33)}, ComplexEventTimes_NoComplexEventTimes_325);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 40, 57)}, ComplexEventTimes_NoComplexEventTimes_325);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_325);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_161;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 27, 1, 0, 4, 2010)}, ComplexEventDates_NoComplexEventDates_161);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 13, 19, 1, 6, 2010)}, ComplexEventDates_NoComplexEventDates_161);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_161);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_326;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 4, 39)}, ComplexEventTimes_NoComplexEventTimes_326);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 4, 38)}, ComplexEventTimes_NoComplexEventTimes_326);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_326);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_162;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 25, 11, 12, 3, 2009)}, ComplexEventDates_NoComplexEventDates_162);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 46, 56, 19, 8, 2009)}, ComplexEventDates_NoComplexEventDates_162);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_162);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::NewOrderCross::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_327;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 20, 37)}, ComplexEventTimes_NoComplexEventTimes_327);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 9, 56)}, ComplexEventTimes_NoComplexEventTimes_327);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_327);
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
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_78;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_529752745"}, EvntGrp_NoEvents_78);
    FIX::EventPx EventPx_78;
    EventPx_78.setString("15043969");
set_field(noEvents_0_0, EventPx_78, EvntGrp_NoEvents_78);
    set_field(noEvents_0_0, FIX::EventText{"STRING_453939246"}, EvntGrp_NoEvents_78);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(1, 10, 51, 22, 10, 2016)}, EvntGrp_NoEvents_78);
    set_field(noEvents_0_0, FIX::EventType{14}, EvntGrp_NoEvents_78);
    all_values.push_back(EvntGrp_NoEvents_78);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_79;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_744883022"}, EvntGrp_NoEvents_79);
    FIX::EventPx EventPx_79;
    EventPx_79.setString("9975959");
set_field(noEvents_0_1, EventPx_79, EvntGrp_NoEvents_79);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1085551616"}, EvntGrp_NoEvents_79);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(4, 43, 28, 7, 7, 2017)}, EvntGrp_NoEvents_79);
    set_field(noEvents_0_1, FIX::EventType{3}, EvntGrp_NoEvents_79);
    all_values.push_back(EvntGrp_NoEvents_79);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::NewOrderCross::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_71;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1905934303"}, InstrumentParties_NoInstrumentParties_71);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_71);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1344787577}, InstrumentParties_NoInstrumentParties_71);
    all_values.push_back(InstrumentParties_NoInstrumentParties_71);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_2132540603"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{33783618}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_143);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1703084388"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{2120060330}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_144);
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
    multiset<string> SecAltIDGrp_NoSecurityAltID_77;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1059997721"}, SecAltIDGrp_NoSecurityAltID_77);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_426515928"}, SecAltIDGrp_NoSecurityAltID_77);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_77);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_78;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1307504217"}, SecAltIDGrp_NoSecurityAltID_78);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1110776586"}, SecAltIDGrp_NoSecurityAltID_78);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_78);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_79;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_2105527978"}, SecAltIDGrp_NoSecurityAltID_79);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_650705440"}, SecAltIDGrp_NoSecurityAltID_79);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_79);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_74;
  set_field(msg, FIX::SecurityXML{"XMLDATA_957093608"}, SecurityXML_74);
  set_field(msg, FIX::SecurityXMLLen{701957531}, SecurityXML_74);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_370734589"}, SecurityXML_74);
  all_values.push_back(SecurityXML_74);
  all_compo_names.insert("..");

  // PegInstructions
  multiset<string> PegInstructions_3;
  set_field(msg, FIX::PegLimitType{2}, PegInstructions_3);
  set_field(msg, FIX::PegMoveType{1}, PegInstructions_3);
  set_field(msg, FIX::PegOffsetType{3}, PegInstructions_3);
  FIX::PegOffsetValue PegOffsetValue_3;
  PegOffsetValue_3.setString("12756904");
set_field(msg, PegOffsetValue_3, PegInstructions_3);
  set_field(msg, FIX::PegPriceType{2}, PegInstructions_3);
  set_field(msg, FIX::PegRoundDirection{1}, PegInstructions_3);
  set_field(msg, FIX::PegScope{2}, PegInstructions_3);
  set_field(msg, FIX::PegSecurityDesc{"STRING_1840785725"}, PegInstructions_3);
  set_field(msg, FIX::PegSecurityID{"STRING_973221627"}, PegInstructions_3);
  set_field(msg, FIX::PegSecurityIDSource{"STRING_1626477975"}, PegInstructions_3);
  set_field(msg, FIX::PegSymbol{"STRING_1068779888"}, PegInstructions_3);
  all_values.push_back(PegInstructions_3);
  all_compo_names.insert(".");

  // RootParties
  // Group RootParties.NoRootPartyIDs
  {
    FIX50SP2::NewOrderCross::NoRootPartyIDs noRootPartyIDs_0_0;
    // RootParties.NoRootPartyIDs
    multiset<string> RootParties_NoRootPartyIDs_3;
    set_field(noRootPartyIDs_0_0, FIX::RootPartyID{"STRING_1021094875"}, RootParties_NoRootPartyIDs_3);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyIDSource{'8'}, RootParties_NoRootPartyIDs_3);
    set_field(noRootPartyIDs_0_0, FIX::RootPartyRole{1369756156}, RootParties_NoRootPartyIDs_3);
    all_values.push_back(RootParties_NoRootPartyIDs_3);
    all_compo_names.insert("...NoRootPartyIDs");

    // RootSubParties
    // Group RootSubParties.NoRootPartySubIDs
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_0;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_7;
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubID{"STRING_1396673136"}, RootSubParties_NoRootPartySubIDs_7);
      set_field(noRootPartySubIDs_0_1_0, FIX::RootPartySubIDType{1354813112}, RootSubParties_NoRootPartySubIDs_7);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_7);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoRootPartyIDs::NoRootPartySubIDs noRootPartySubIDs_0_1_1;
      // RootSubParties.NoRootPartySubIDs
      multiset<string> RootSubParties_NoRootPartySubIDs_8;
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubID{"STRING_252182423"}, RootSubParties_NoRootPartySubIDs_8);
      set_field(noRootPartySubIDs_0_1_1, FIX::RootPartySubIDType{952273877}, RootSubParties_NoRootPartySubIDs_8);
      all_values.push_back(RootSubParties_NoRootPartySubIDs_8);
      all_compo_names.insert("...NoRootPartyIDs...NoRootPartySubIDs");

      noRootPartyIDs_0_0.addGroup(noRootPartySubIDs_0_1_1);
    }
    msg.addGroup(noRootPartyIDs_0_0);
  }
  // SideCrossOrdModGrp
  // Group SideCrossOrdModGrp.NoSides
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_0;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_1;
    set_field(noSides_0_0, FIX::Account{"STRING_815718787"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::AccountType{2}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::AcctIDSource{3}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::AllocID{"STRING_2123223004"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::BookingType{2}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::BookingUnit{'1'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::CashMargin{'1'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::ClOrdID{"STRING_1932658144"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::ClOrdLinkID{"STRING_266423935"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::ClearingFeeIndicator{"STRING_M"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::CoveredOrUncovered{0}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::CustOrderCapacity{2}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::DayBookingInst{'2'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::EncodedText{"DATA_1251003861"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::EncodedTextLen{1451748466}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::ForexReq{false}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::OrderCapacity{'R'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_E"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::OrigClOrdID{"STRING_167165144"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::PositionEffect{'O'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::PreTradeAnonymity{false}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::PreallocMethod{'0'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::QtyType{1}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::SecondaryClOrdID{"STRING_893577327"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::SettlCurrency{"USD"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::Side{'1'}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::SideComplianceID{"STRING_1501422307"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(13, 13, 36, 11, 8, 2002)}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::SolicitedFlag{false}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::Text{"STRING_1999700579"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::TradeDate{"LOCALMKTDATE_432095700"}, SideCrossOrdModGrp_NoSides_1);
    set_field(noSides_0_0, FIX::TradeOriginationDate{"LOCALMKTDATE_1720567675"}, SideCrossOrdModGrp_NoSides_1);
    all_values.push_back(SideCrossOrdModGrp_NoSides_1);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_11;
    set_field(noSides_0_0, FIX::CommCurrency{"GBP"}, CommissionData_11);
    set_field(noSides_0_0, FIX::CommType{'1'}, CommissionData_11);
    FIX::Commission Commission_11;
    Commission_11.setString("18319053");
set_field(noSides_0_0, Commission_11, CommissionData_11);
    set_field(noSides_0_0, FIX::FundRenewWaiv{'Y'}, CommissionData_11);
    all_values.push_back(CommissionData_11);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_8;
    FIX::CashOrderQty CashOrderQty_8;
    CashOrderQty_8.setString("7994012");
set_field(noSides_0_0, CashOrderQty_8, OrderQtyData_8);
    FIX::OrderPercent OrderPercent_8;
    OrderPercent_8.setString("1.730000");
set_field(noSides_0_0, OrderPercent_8, OrderQtyData_8);
    FIX::OrderQty OrderQty_16;
    OrderQty_16.setString("8412449");
set_field(noSides_0_0, OrderQty_16, OrderQtyData_8);
    set_field(noSides_0_0, FIX::RoundingDirection{'2'}, OrderQtyData_8);
    FIX::RoundingModulus RoundingModulus_8;
    RoundingModulus_8.setString("1337370");
set_field(noSides_0_0, RoundingModulus_8, OrderQtyData_8);
    all_values.push_back(OrderQtyData_8);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_69;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_660407543"}, Parties_NoPartyIDs_69);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_69);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{85}, Parties_NoPartyIDs_69);
      all_values.push_back(Parties_NoPartyIDs_69);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_134;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_1093661179"}, PtysSubGrp_NoPartySubIDs_134);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{17}, PtysSubGrp_NoPartySubIDs_134);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_134);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_135;
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubID{"STRING_113513063"}, PtysSubGrp_NoPartySubIDs_135);
        set_field(noPartySubIDs_0_0_2_1, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_135);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_135);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_70;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1433294613"}, Parties_NoPartyIDs_70);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'I'}, Parties_NoPartyIDs_70);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{9}, Parties_NoPartyIDs_70);
      all_values.push_back(Parties_NoPartyIDs_70);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_136;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_1105101020"}, PtysSubGrp_NoPartySubIDs_136);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{24}, PtysSubGrp_NoPartySubIDs_136);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_136);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_137;
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubID{"STRING_254889945"}, PtysSubGrp_NoPartySubIDs_137);
        set_field(noPartySubIDs_0_1_2_1, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_137);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_137);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_1);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_0_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_71;
      set_field(noPartyIDs_0_1_2, FIX::PartyID{"STRING_931723214"}, Parties_NoPartyIDs_71);
      set_field(noPartyIDs_0_1_2, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_71);
      set_field(noPartyIDs_0_1_2, FIX::PartyRole{21}, Parties_NoPartyIDs_71);
      all_values.push_back(Parties_NoPartyIDs_71);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_138;
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubID{"STRING_225747742"}, PtysSubGrp_NoPartySubIDs_138);
        set_field(noPartySubIDs_0_2_2_0, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_138);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_138);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_139;
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubID{"STRING_53204640"}, PtysSubGrp_NoPartySubIDs_139);
        set_field(noPartySubIDs_0_2_2_1, FIX::PartySubIDType{7}, PtysSubGrp_NoPartySubIDs_139);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_139);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_2_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_140;
        set_field(noPartySubIDs_0_2_2_2, FIX::PartySubID{"STRING_124456825"}, PtysSubGrp_NoPartySubIDs_140);
        set_field(noPartySubIDs_0_2_2_2, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_140);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_140);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_2.addGroup(noPartySubIDs_0_2_2_2);
      }
      noSides_0_0.addGroup(noPartyIDs_0_1_2);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_0_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_6;
      set_field(noAllocs_0_1_0, FIX::AllocAccount{"STRING_965701753"}, PreAllocGrp_NoAllocs_6);
      set_field(noAllocs_0_1_0, FIX::AllocAcctIDSource{1843013136}, PreAllocGrp_NoAllocs_6);
      FIX::AllocQty AllocQty_18;
      AllocQty_18.setString("11800766");
set_field(noAllocs_0_1_0, AllocQty_18, PreAllocGrp_NoAllocs_6);
      set_field(noAllocs_0_1_0, FIX::AllocSettlCurrency{"JPY"}, PreAllocGrp_NoAllocs_6);
      set_field(noAllocs_0_1_0, FIX::IndividualAllocID{"STRING_1380160544"}, PreAllocGrp_NoAllocs_6);
      all_values.push_back(PreAllocGrp_NoAllocs_6);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_57;
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyID{"STRING_1707439757"}, NestedParties_NoNestedPartyIDs_57);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_57);
        set_field(noNestedPartyIDs_0_0_2_0, FIX::NestedPartyRole{1691247243}, NestedParties_NoNestedPartyIDs_57);
        all_values.push_back(NestedParties_NoNestedPartyIDs_57);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_126;
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubID{"STRING_1562766071"}, NstdPtysSubGrp_NoNestedPartySubIDs_126);
          set_field(noNestedPartySubIDs_0_0_0_3_0, FIX::NestedPartySubIDType{977058208}, NstdPtysSubGrp_NoNestedPartySubIDs_126);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_126);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_127;
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubID{"STRING_948658644"}, NstdPtysSubGrp_NoNestedPartySubIDs_127);
          set_field(noNestedPartySubIDs_0_0_0_3_1, FIX::NestedPartySubIDType{1746751111}, NstdPtysSubGrp_NoNestedPartySubIDs_127);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_127);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_0.addGroup(noNestedPartySubIDs_0_0_0_3_1);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_58;
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyID{"STRING_944197626"}, NestedParties_NoNestedPartyIDs_58);
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_58);
        set_field(noNestedPartyIDs_0_0_2_1, FIX::NestedPartyRole{743081147}, NestedParties_NoNestedPartyIDs_58);
        all_values.push_back(NestedParties_NoNestedPartyIDs_58);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_128;
          set_field(noNestedPartySubIDs_0_0_1_3_0, FIX::NestedPartySubID{"STRING_817027940"}, NstdPtysSubGrp_NoNestedPartySubIDs_128);
          set_field(noNestedPartySubIDs_0_0_1_3_0, FIX::NestedPartySubIDType{1674804361}, NstdPtysSubGrp_NoNestedPartySubIDs_128);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_128);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_0_2_1.addGroup(noNestedPartySubIDs_0_0_1_3_0);
        }
        noAllocs_0_1_0.addGroup(noNestedPartyIDs_0_0_2_1);
      }
      noSides_0_0.addGroup(noAllocs_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_0_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_7;
      set_field(noAllocs_0_1_1, FIX::AllocAccount{"STRING_1306194447"}, PreAllocGrp_NoAllocs_7);
      set_field(noAllocs_0_1_1, FIX::AllocAcctIDSource{12391916}, PreAllocGrp_NoAllocs_7);
      FIX::AllocQty AllocQty_19;
      AllocQty_19.setString("321279");
set_field(noAllocs_0_1_1, AllocQty_19, PreAllocGrp_NoAllocs_7);
      set_field(noAllocs_0_1_1, FIX::AllocSettlCurrency{"CAN"}, PreAllocGrp_NoAllocs_7);
      set_field(noAllocs_0_1_1, FIX::IndividualAllocID{"STRING_85332595"}, PreAllocGrp_NoAllocs_7);
      all_values.push_back(PreAllocGrp_NoAllocs_7);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_59;
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyID{"STRING_761487804"}, NestedParties_NoNestedPartyIDs_59);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyIDSource{'9'}, NestedParties_NoNestedPartyIDs_59);
        set_field(noNestedPartyIDs_0_1_2_0, FIX::NestedPartyRole{340967615}, NestedParties_NoNestedPartyIDs_59);
        all_values.push_back(NestedParties_NoNestedPartyIDs_59);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_129;
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubID{"STRING_633467983"}, NstdPtysSubGrp_NoNestedPartySubIDs_129);
          set_field(noNestedPartySubIDs_0_1_0_3_0, FIX::NestedPartySubIDType{1521044307}, NstdPtysSubGrp_NoNestedPartySubIDs_129);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_129);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_130;
          set_field(noNestedPartySubIDs_0_1_0_3_1, FIX::NestedPartySubID{"STRING_1553817736"}, NstdPtysSubGrp_NoNestedPartySubIDs_130);
          set_field(noNestedPartySubIDs_0_1_0_3_1, FIX::NestedPartySubIDType{989405015}, NstdPtysSubGrp_NoNestedPartySubIDs_130);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_130);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_131;
          set_field(noNestedPartySubIDs_0_1_0_3_2, FIX::NestedPartySubID{"STRING_753721203"}, NstdPtysSubGrp_NoNestedPartySubIDs_131);
          set_field(noNestedPartySubIDs_0_1_0_3_2, FIX::NestedPartySubIDType{1165709025}, NstdPtysSubGrp_NoNestedPartySubIDs_131);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_131);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_0.addGroup(noNestedPartySubIDs_0_1_0_3_2);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_60;
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyID{"STRING_549361124"}, NestedParties_NoNestedPartyIDs_60);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_60);
        set_field(noNestedPartyIDs_0_1_2_1, FIX::NestedPartyRole{709472620}, NestedParties_NoNestedPartyIDs_60);
        all_values.push_back(NestedParties_NoNestedPartyIDs_60);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_132;
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubID{"STRING_495341701"}, NstdPtysSubGrp_NoNestedPartySubIDs_132);
          set_field(noNestedPartySubIDs_0_1_1_3_0, FIX::NestedPartySubIDType{1686530828}, NstdPtysSubGrp_NoNestedPartySubIDs_132);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_132);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_133;
          set_field(noNestedPartySubIDs_0_1_1_3_1, FIX::NestedPartySubID{"STRING_1171488940"}, NstdPtysSubGrp_NoNestedPartySubIDs_133);
          set_field(noNestedPartySubIDs_0_1_1_3_1, FIX::NestedPartySubIDType{94609165}, NstdPtysSubGrp_NoNestedPartySubIDs_133);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_133);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_1.addGroup(noNestedPartySubIDs_0_1_1_3_1);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_61;
        set_field(noNestedPartyIDs_0_1_2_2, FIX::NestedPartyID{"STRING_483244806"}, NestedParties_NoNestedPartyIDs_61);
        set_field(noNestedPartyIDs_0_1_2_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_61);
        set_field(noNestedPartyIDs_0_1_2_2, FIX::NestedPartyRole{837690312}, NestedParties_NoNestedPartyIDs_61);
        all_values.push_back(NestedParties_NoNestedPartyIDs_61);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_134;
          set_field(noNestedPartySubIDs_0_1_2_3_0, FIX::NestedPartySubID{"STRING_1894792896"}, NstdPtysSubGrp_NoNestedPartySubIDs_134);
          set_field(noNestedPartySubIDs_0_1_2_3_0, FIX::NestedPartySubIDType{365011025}, NstdPtysSubGrp_NoNestedPartySubIDs_134);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_134);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_0_1_2_2.addGroup(noNestedPartySubIDs_0_1_2_3_0);
        }
        noAllocs_0_1_1.addGroup(noNestedPartyIDs_0_1_2_2);
      }
      noSides_0_0.addGroup(noAllocs_0_1_1);
    }
    msg.addGroup(noSides_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_1;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_2;
    set_field(noSides_0_1, FIX::Account{"STRING_841043176"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::AccountType{2}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::AcctIDSource{2}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::AllocID{"STRING_225501717"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::BookingType{2}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::BookingUnit{'2'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::CashMargin{'1'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::ClOrdID{"STRING_1158219948"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::ClOrdLinkID{"STRING_1420410071"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::ClearingFeeIndicator{"STRING_B"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::CoveredOrUncovered{0}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::CustOrderCapacity{3}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::DayBookingInst{'0'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::EncodedText{"DATA_144259946"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::EncodedTextLen{895799421}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::ForexReq{true}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::OrderCapacity{'W'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_6"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::OrigClOrdID{"STRING_1068438464"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::PositionEffect{'R'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::PreTradeAnonymity{false}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::PreallocMethod{'0'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::QtyType{0}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::SecondaryClOrdID{"STRING_691996133"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::SettlCurrency{"CHF"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::Side{'2'}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::SideComplianceID{"STRING_348595995"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(1, 20, 54, 5, 10, 2015)}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::SolicitedFlag{false}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::Text{"STRING_1593217578"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::TradeDate{"LOCALMKTDATE_15773260"}, SideCrossOrdModGrp_NoSides_2);
    set_field(noSides_0_1, FIX::TradeOriginationDate{"LOCALMKTDATE_684239945"}, SideCrossOrdModGrp_NoSides_2);
    all_values.push_back(SideCrossOrdModGrp_NoSides_2);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_12;
    set_field(noSides_0_1, FIX::CommCurrency{"USD"}, CommissionData_12);
    set_field(noSides_0_1, FIX::CommType{'6'}, CommissionData_12);
    FIX::Commission Commission_12;
    Commission_12.setString("7725384");
set_field(noSides_0_1, Commission_12, CommissionData_12);
    set_field(noSides_0_1, FIX::FundRenewWaiv{'Y'}, CommissionData_12);
    all_values.push_back(CommissionData_12);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_9;
    FIX::CashOrderQty CashOrderQty_9;
    CashOrderQty_9.setString("15664257");
set_field(noSides_0_1, CashOrderQty_9, OrderQtyData_9);
    FIX::OrderPercent OrderPercent_9;
    OrderPercent_9.setString("78.280000");
set_field(noSides_0_1, OrderPercent_9, OrderQtyData_9);
    FIX::OrderQty OrderQty_17;
    OrderQty_17.setString("12473914");
set_field(noSides_0_1, OrderQty_17, OrderQtyData_9);
    set_field(noSides_0_1, FIX::RoundingDirection{'1'}, OrderQtyData_9);
    FIX::RoundingModulus RoundingModulus_9;
    RoundingModulus_9.setString("9660147");
set_field(noSides_0_1, RoundingModulus_9, OrderQtyData_9);
    all_values.push_back(OrderQtyData_9);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_72;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_600869015"}, Parties_NoPartyIDs_72);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_72);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{17}, Parties_NoPartyIDs_72);
      all_values.push_back(Parties_NoPartyIDs_72);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_141;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_1178518051"}, PtysSubGrp_NoPartySubIDs_141);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{14}, PtysSubGrp_NoPartySubIDs_141);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_141);
        all_compo_names.insert("...NoSides...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noSides_0_1.addGroup(noPartyIDs_1_1_0);
    }
    // PreAllocGrp
    // Group PreAllocGrp.NoAllocs
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_1_1_0;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_8;
      set_field(noAllocs_1_1_0, FIX::AllocAccount{"STRING_800795492"}, PreAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_0, FIX::AllocAcctIDSource{1591628062}, PreAllocGrp_NoAllocs_8);
      FIX::AllocQty AllocQty_20;
      AllocQty_20.setString("14827063");
set_field(noAllocs_1_1_0, AllocQty_20, PreAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_0, FIX::AllocSettlCurrency{"JPY"}, PreAllocGrp_NoAllocs_8);
      set_field(noAllocs_1_1_0, FIX::IndividualAllocID{"STRING_1752848207"}, PreAllocGrp_NoAllocs_8);
      all_values.push_back(PreAllocGrp_NoAllocs_8);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_62;
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyID{"STRING_1268497436"}, NestedParties_NoNestedPartyIDs_62);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_62);
        set_field(noNestedPartyIDs_1_0_2_0, FIX::NestedPartyRole{973173679}, NestedParties_NoNestedPartyIDs_62);
        all_values.push_back(NestedParties_NoNestedPartyIDs_62);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_135;
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubID{"STRING_116781371"}, NstdPtysSubGrp_NoNestedPartySubIDs_135);
          set_field(noNestedPartySubIDs_1_0_0_3_0, FIX::NestedPartySubIDType{1657413624}, NstdPtysSubGrp_NoNestedPartySubIDs_135);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_135);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_0.addGroup(noNestedPartySubIDs_1_0_0_3_0);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_63;
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyID{"STRING_1580375367"}, NestedParties_NoNestedPartyIDs_63);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_63);
        set_field(noNestedPartyIDs_1_0_2_1, FIX::NestedPartyRole{932095779}, NestedParties_NoNestedPartyIDs_63);
        all_values.push_back(NestedParties_NoNestedPartyIDs_63);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_136;
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubID{"STRING_1252664171"}, NstdPtysSubGrp_NoNestedPartySubIDs_136);
          set_field(noNestedPartySubIDs_1_0_1_3_0, FIX::NestedPartySubIDType{351037880}, NstdPtysSubGrp_NoNestedPartySubIDs_136);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_136);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_137;
          set_field(noNestedPartySubIDs_1_0_1_3_1, FIX::NestedPartySubID{"STRING_1873767954"}, NstdPtysSubGrp_NoNestedPartySubIDs_137);
          set_field(noNestedPartySubIDs_1_0_1_3_1, FIX::NestedPartySubIDType{352571924}, NstdPtysSubGrp_NoNestedPartySubIDs_137);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_137);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_1_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_138;
          set_field(noNestedPartySubIDs_1_0_1_3_2, FIX::NestedPartySubID{"STRING_1079948952"}, NstdPtysSubGrp_NoNestedPartySubIDs_138);
          set_field(noNestedPartySubIDs_1_0_1_3_2, FIX::NestedPartySubIDType{692299031}, NstdPtysSubGrp_NoNestedPartySubIDs_138);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_138);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_1.addGroup(noNestedPartySubIDs_1_0_1_3_2);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_64;
        set_field(noNestedPartyIDs_1_0_2_2, FIX::NestedPartyID{"STRING_520918142"}, NestedParties_NoNestedPartyIDs_64);
        set_field(noNestedPartyIDs_1_0_2_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_64);
        set_field(noNestedPartyIDs_1_0_2_2, FIX::NestedPartyRole{1178820949}, NestedParties_NoNestedPartyIDs_64);
        all_values.push_back(NestedParties_NoNestedPartyIDs_64);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_139;
          set_field(noNestedPartySubIDs_1_0_2_3_0, FIX::NestedPartySubID{"STRING_1692692105"}, NstdPtysSubGrp_NoNestedPartySubIDs_139);
          set_field(noNestedPartySubIDs_1_0_2_3_0, FIX::NestedPartySubIDType{209855352}, NstdPtysSubGrp_NoNestedPartySubIDs_139);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_139);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_140;
          set_field(noNestedPartySubIDs_1_0_2_3_1, FIX::NestedPartySubID{"STRING_1348592945"}, NstdPtysSubGrp_NoNestedPartySubIDs_140);
          set_field(noNestedPartySubIDs_1_0_2_3_1, FIX::NestedPartySubIDType{1598816172}, NstdPtysSubGrp_NoNestedPartySubIDs_140);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_140);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_1_0_2_2.addGroup(noNestedPartySubIDs_1_0_2_3_1);
        }
        noAllocs_1_1_0.addGroup(noNestedPartyIDs_1_0_2_2);
      }
      noSides_0_1.addGroup(noAllocs_1_1_0);
    }
    msg.addGroup(noSides_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoSides noSides_0_2;
    // SideCrossOrdModGrp.NoSides
    multiset<string> SideCrossOrdModGrp_NoSides_3;
    set_field(noSides_0_2, FIX::Account{"STRING_1010650844"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::AccountType{2}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::AcctIDSource{4}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::AllocID{"STRING_1181033025"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::BookingType{0}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::BookingUnit{'0'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::CashMargin{'1'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::ClOrdID{"STRING_71502582"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::ClOrdLinkID{"STRING_640411567"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::ClearingFeeIndicator{"STRING_C"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::CoveredOrUncovered{0}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::CustOrderCapacity{3}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::DayBookingInst{'0'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::EncodedText{"DATA_218625667"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::EncodedTextLen{750844893}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::ForexReq{false}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::OrderCapacity{'P'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::OrderRestrictions{"MULTIPLECHARVALUE_F"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::OrigClOrdID{"STRING_99456727"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::PositionEffect{'F'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::PreTradeAnonymity{false}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::PreallocMethod{'0'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::QtyType{0}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::SecondaryClOrdID{"STRING_729515483"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::SettlCurrency{"EUR"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::Side{'B'}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::SideComplianceID{"STRING_257948457"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::SideTimeInForce{FIX::UTCTIMESTAMP(19, 9, 7, 15, 12, 2002)}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::SolicitedFlag{false}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::Text{"STRING_1182723335"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::TradeDate{"LOCALMKTDATE_608735063"}, SideCrossOrdModGrp_NoSides_3);
    set_field(noSides_0_2, FIX::TradeOriginationDate{"LOCALMKTDATE_1850914395"}, SideCrossOrdModGrp_NoSides_3);
    all_values.push_back(SideCrossOrdModGrp_NoSides_3);
    all_compo_names.insert("...NoSides");

    // CommissionData
    multiset<string> CommissionData_13;
    set_field(noSides_0_2, FIX::CommCurrency{"JPY"}, CommissionData_13);
    set_field(noSides_0_2, FIX::CommType{'2'}, CommissionData_13);
    FIX::Commission Commission_13;
    Commission_13.setString("4328441");
set_field(noSides_0_2, Commission_13, CommissionData_13);
    set_field(noSides_0_2, FIX::FundRenewWaiv{'N'}, CommissionData_13);
    all_values.push_back(CommissionData_13);
    all_compo_names.insert("...NoSides.");

    // OrderQtyData
    multiset<string> OrderQtyData_10;
    FIX::CashOrderQty CashOrderQty_10;
    CashOrderQty_10.setString("7077903");
set_field(noSides_0_2, CashOrderQty_10, OrderQtyData_10);
    FIX::OrderPercent OrderPercent_10;
    OrderPercent_10.setString("90.860000");
set_field(noSides_0_2, OrderPercent_10, OrderQtyData_10);
    FIX::OrderQty OrderQty_18;
    OrderQty_18.setString("6273537");
set_field(noSides_0_2, OrderQty_18, OrderQtyData_10);
    set_field(noSides_0_2, FIX::RoundingDirection{'2'}, OrderQtyData_10);
    FIX::RoundingModulus RoundingModulus_10;
    RoundingModulus_10.setString("10397145");
set_field(noSides_0_2, RoundingModulus_10, OrderQtyData_10);
    all_values.push_back(OrderQtyData_10);
    all_compo_names.insert("...NoSides.");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::NewOrderCross::NoSides::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_73;
      set_field(noPartyIDs_2_1_0, FIX::PartyID{"STRING_1282186254"}, Parties_NoPartyIDs_73);
      set_field(noPartyIDs_2_1_0, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_73);
      set_field(noPartyIDs_2_1_0, FIX::PartyRole{9}, Parties_NoPartyIDs_73);
      all_values.push_back(Parties_NoPartyIDs_73);
      all_compo_names.insert("...NoSides...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_142;
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubID{"STRING_1977827327"}, PtysSubGrp_NoPartySubIDs_142);
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_142);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_142);
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
      multiset<string> PreAllocGrp_NoAllocs_9;
      set_field(noAllocs_2_1_0, FIX::AllocAccount{"STRING_665420041"}, PreAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::AllocAcctIDSource{729420933}, PreAllocGrp_NoAllocs_9);
      FIX::AllocQty AllocQty_21;
      AllocQty_21.setString("20826335");
set_field(noAllocs_2_1_0, AllocQty_21, PreAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::AllocSettlCurrency{"JPY"}, PreAllocGrp_NoAllocs_9);
      set_field(noAllocs_2_1_0, FIX::IndividualAllocID{"STRING_1029632577"}, PreAllocGrp_NoAllocs_9);
      all_values.push_back(PreAllocGrp_NoAllocs_9);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_65;
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyID{"STRING_1082021793"}, NestedParties_NoNestedPartyIDs_65);
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_65);
        set_field(noNestedPartyIDs_2_0_2_0, FIX::NestedPartyRole{1162456884}, NestedParties_NoNestedPartyIDs_65);
        all_values.push_back(NestedParties_NoNestedPartyIDs_65);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_141;
          set_field(noNestedPartySubIDs_2_0_0_3_0, FIX::NestedPartySubID{"STRING_1766399644"}, NstdPtysSubGrp_NoNestedPartySubIDs_141);
          set_field(noNestedPartySubIDs_2_0_0_3_0, FIX::NestedPartySubIDType{865887631}, NstdPtysSubGrp_NoNestedPartySubIDs_141);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_141);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_142;
          set_field(noNestedPartySubIDs_2_0_0_3_1, FIX::NestedPartySubID{"STRING_1940396383"}, NstdPtysSubGrp_NoNestedPartySubIDs_142);
          set_field(noNestedPartySubIDs_2_0_0_3_1, FIX::NestedPartySubIDType{1681527799}, NstdPtysSubGrp_NoNestedPartySubIDs_142);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_142);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_0.addGroup(noNestedPartySubIDs_2_0_0_3_1);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_66;
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyID{"STRING_1355052326"}, NestedParties_NoNestedPartyIDs_66);
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_66);
        set_field(noNestedPartyIDs_2_0_2_1, FIX::NestedPartyRole{412979021}, NestedParties_NoNestedPartyIDs_66);
        all_values.push_back(NestedParties_NoNestedPartyIDs_66);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_143;
          set_field(noNestedPartySubIDs_2_0_1_3_0, FIX::NestedPartySubID{"STRING_1409446014"}, NstdPtysSubGrp_NoNestedPartySubIDs_143);
          set_field(noNestedPartySubIDs_2_0_1_3_0, FIX::NestedPartySubIDType{1040332738}, NstdPtysSubGrp_NoNestedPartySubIDs_143);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_143);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_144;
          set_field(noNestedPartySubIDs_2_0_1_3_1, FIX::NestedPartySubID{"STRING_1047205195"}, NstdPtysSubGrp_NoNestedPartySubIDs_144);
          set_field(noNestedPartySubIDs_2_0_1_3_1, FIX::NestedPartySubIDType{301676868}, NstdPtysSubGrp_NoNestedPartySubIDs_144);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_144);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_1.addGroup(noNestedPartySubIDs_2_0_1_3_1);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_1);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_0_2_2;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_67;
        set_field(noNestedPartyIDs_2_0_2_2, FIX::NestedPartyID{"STRING_1767143182"}, NestedParties_NoNestedPartyIDs_67);
        set_field(noNestedPartyIDs_2_0_2_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_67);
        set_field(noNestedPartyIDs_2_0_2_2, FIX::NestedPartyRole{1549988712}, NestedParties_NoNestedPartyIDs_67);
        all_values.push_back(NestedParties_NoNestedPartyIDs_67);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_145;
          set_field(noNestedPartySubIDs_2_0_2_3_0, FIX::NestedPartySubID{"STRING_159249537"}, NstdPtysSubGrp_NoNestedPartySubIDs_145);
          set_field(noNestedPartySubIDs_2_0_2_3_0, FIX::NestedPartySubIDType{1380332391}, NstdPtysSubGrp_NoNestedPartySubIDs_145);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_145);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_146;
          set_field(noNestedPartySubIDs_2_0_2_3_1, FIX::NestedPartySubID{"STRING_1997348135"}, NstdPtysSubGrp_NoNestedPartySubIDs_146);
          set_field(noNestedPartySubIDs_2_0_2_3_1, FIX::NestedPartySubIDType{10567704}, NstdPtysSubGrp_NoNestedPartySubIDs_146);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_146);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_147;
          set_field(noNestedPartySubIDs_2_0_2_3_2, FIX::NestedPartySubID{"STRING_2045752432"}, NstdPtysSubGrp_NoNestedPartySubIDs_147);
          set_field(noNestedPartySubIDs_2_0_2_3_2, FIX::NestedPartySubIDType{579285420}, NstdPtysSubGrp_NoNestedPartySubIDs_147);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_147);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_0_2_2.addGroup(noNestedPartySubIDs_2_0_2_3_2);
        }
        noAllocs_2_1_0.addGroup(noNestedPartyIDs_2_0_2_2);
      }
      noSides_0_2.addGroup(noAllocs_2_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_2_1_1;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_10;
      set_field(noAllocs_2_1_1, FIX::AllocAccount{"STRING_2093201302"}, PreAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::AllocAcctIDSource{599874484}, PreAllocGrp_NoAllocs_10);
      FIX::AllocQty AllocQty_22;
      AllocQty_22.setString("10179873");
set_field(noAllocs_2_1_1, AllocQty_22, PreAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::AllocSettlCurrency{"JPY"}, PreAllocGrp_NoAllocs_10);
      set_field(noAllocs_2_1_1, FIX::IndividualAllocID{"STRING_2100009128"}, PreAllocGrp_NoAllocs_10);
      all_values.push_back(PreAllocGrp_NoAllocs_10);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_68;
        set_field(noNestedPartyIDs_2_1_2_0, FIX::NestedPartyID{"STRING_1145376440"}, NestedParties_NoNestedPartyIDs_68);
        set_field(noNestedPartyIDs_2_1_2_0, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_68);
        set_field(noNestedPartyIDs_2_1_2_0, FIX::NestedPartyRole{1751930809}, NestedParties_NoNestedPartyIDs_68);
        all_values.push_back(NestedParties_NoNestedPartyIDs_68);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_148;
          set_field(noNestedPartySubIDs_2_1_0_3_0, FIX::NestedPartySubID{"STRING_2010183344"}, NstdPtysSubGrp_NoNestedPartySubIDs_148);
          set_field(noNestedPartySubIDs_2_1_0_3_0, FIX::NestedPartySubIDType{1285974960}, NstdPtysSubGrp_NoNestedPartySubIDs_148);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_148);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_149;
          set_field(noNestedPartySubIDs_2_1_0_3_1, FIX::NestedPartySubID{"STRING_1218832750"}, NstdPtysSubGrp_NoNestedPartySubIDs_149);
          set_field(noNestedPartySubIDs_2_1_0_3_1, FIX::NestedPartySubIDType{88456624}, NstdPtysSubGrp_NoNestedPartySubIDs_149);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_149);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_0.addGroup(noNestedPartySubIDs_2_1_0_3_1);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2_1;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_69;
        set_field(noNestedPartyIDs_2_1_2_1, FIX::NestedPartyID{"STRING_1698953981"}, NestedParties_NoNestedPartyIDs_69);
        set_field(noNestedPartyIDs_2_1_2_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_69);
        set_field(noNestedPartyIDs_2_1_2_1, FIX::NestedPartyRole{1497902638}, NestedParties_NoNestedPartyIDs_69);
        all_values.push_back(NestedParties_NoNestedPartyIDs_69);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_1_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_150;
          set_field(noNestedPartySubIDs_2_1_1_3_0, FIX::NestedPartySubID{"STRING_33913338"}, NstdPtysSubGrp_NoNestedPartySubIDs_150);
          set_field(noNestedPartySubIDs_2_1_1_3_0, FIX::NestedPartySubIDType{1799579507}, NstdPtysSubGrp_NoNestedPartySubIDs_150);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_150);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_1.addGroup(noNestedPartySubIDs_2_1_1_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_1_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_151;
          set_field(noNestedPartySubIDs_2_1_1_3_1, FIX::NestedPartySubID{"STRING_211462605"}, NstdPtysSubGrp_NoNestedPartySubIDs_151);
          set_field(noNestedPartySubIDs_2_1_1_3_1, FIX::NestedPartySubIDType{215821140}, NstdPtysSubGrp_NoNestedPartySubIDs_151);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_151);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_1_2_1.addGroup(noNestedPartySubIDs_2_1_1_3_1);
        }
        noAllocs_2_1_1.addGroup(noNestedPartyIDs_2_1_2_1);
      }
      noSides_0_2.addGroup(noAllocs_2_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoSides::NoAllocs noAllocs_2_1_2;
      // PreAllocGrp.NoAllocs
      multiset<string> PreAllocGrp_NoAllocs_11;
      set_field(noAllocs_2_1_2, FIX::AllocAccount{"STRING_1202084571"}, PreAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::AllocAcctIDSource{1737338264}, PreAllocGrp_NoAllocs_11);
      FIX::AllocQty AllocQty_23;
      AllocQty_23.setString("3750706");
set_field(noAllocs_2_1_2, AllocQty_23, PreAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::AllocSettlCurrency{"CAN"}, PreAllocGrp_NoAllocs_11);
      set_field(noAllocs_2_1_2, FIX::IndividualAllocID{"STRING_385638382"}, PreAllocGrp_NoAllocs_11);
      all_values.push_back(PreAllocGrp_NoAllocs_11);
      all_compo_names.insert("...NoSides...NoAllocs");

      // NestedParties
      // Group NestedParties.NoNestedPartyIDs
      {
        FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_2_2_0;
        // NestedParties.NoNestedPartyIDs
        multiset<string> NestedParties_NoNestedPartyIDs_70;
        set_field(noNestedPartyIDs_2_2_2_0, FIX::NestedPartyID{"STRING_19004523"}, NestedParties_NoNestedPartyIDs_70);
        set_field(noNestedPartyIDs_2_2_2_0, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_70);
        set_field(noNestedPartyIDs_2_2_2_0, FIX::NestedPartyRole{933076582}, NestedParties_NoNestedPartyIDs_70);
        all_values.push_back(NestedParties_NoNestedPartyIDs_70);
        all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs");

        // NstdPtysSubGrp
        // Group NstdPtysSubGrp.NoNestedPartySubIDs
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_0;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_152;
          set_field(noNestedPartySubIDs_2_2_0_3_0, FIX::NestedPartySubID{"STRING_1306706268"}, NstdPtysSubGrp_NoNestedPartySubIDs_152);
          set_field(noNestedPartySubIDs_2_2_0_3_0, FIX::NestedPartySubIDType{915996138}, NstdPtysSubGrp_NoNestedPartySubIDs_152);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_152);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_0);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_1;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_153;
          set_field(noNestedPartySubIDs_2_2_0_3_1, FIX::NestedPartySubID{"STRING_989517338"}, NstdPtysSubGrp_NoNestedPartySubIDs_153);
          set_field(noNestedPartySubIDs_2_2_0_3_1, FIX::NestedPartySubIDType{1292237432}, NstdPtysSubGrp_NoNestedPartySubIDs_153);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_153);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_1);
        }
        {
          FIX50SP2::NewOrderCross::NoSides::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_0_3_2;
          // NstdPtysSubGrp.NoNestedPartySubIDs
          multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_154;
          set_field(noNestedPartySubIDs_2_2_0_3_2, FIX::NestedPartySubID{"STRING_2061372579"}, NstdPtysSubGrp_NoNestedPartySubIDs_154);
          set_field(noNestedPartySubIDs_2_2_0_3_2, FIX::NestedPartySubIDType{1059304299}, NstdPtysSubGrp_NoNestedPartySubIDs_154);
          all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_154);
          all_compo_names.insert("...NoSides...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

          noNestedPartyIDs_2_2_2_0.addGroup(noNestedPartySubIDs_2_2_0_3_2);
        }
        noAllocs_2_1_2.addGroup(noNestedPartyIDs_2_2_2_0);
      }
      noSides_0_2.addGroup(noAllocs_2_1_2);
    }
    msg.addGroup(noSides_0_2);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_16;
  set_field(msg, FIX::BenchmarkCurveCurrency{"CAN"}, SpreadOrBenchmarkCurveData_16);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_16);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_35175905"}, SpreadOrBenchmarkCurveData_16);
  FIX::BenchmarkPrice BenchmarkPrice_16;
  BenchmarkPrice_16.setString("9965021");
set_field(msg, BenchmarkPrice_16, SpreadOrBenchmarkCurveData_16);
  set_field(msg, FIX::BenchmarkPriceType{1010460620}, SpreadOrBenchmarkCurveData_16);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1734129886"}, SpreadOrBenchmarkCurveData_16);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_2130693896"}, SpreadOrBenchmarkCurveData_16);
  FIX::Spread Spread_16;
  Spread_16.setString("3608796");
set_field(msg, Spread_16, SpreadOrBenchmarkCurveData_16);
  all_values.push_back(SpreadOrBenchmarkCurveData_16);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::NewOrderCross::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_25;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_TRADERCREDIT"}, Stipulations_NoStipulations_25);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_12975469"}, Stipulations_NoStipulations_25);
    all_values.push_back(Stipulations_NoStipulations_25);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  // StrategyParametersGrp
  // Group StrategyParametersGrp.NoStrategyParameters
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_0;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_3;
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterName{"STRING_232944727"}, StrategyParametersGrp_NoStrategyParameters_3);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterType{3}, StrategyParametersGrp_NoStrategyParameters_3);
    set_field(noStrategyParameters_0_0, FIX::StrategyParameterValue{"STRING_2127250179"}, StrategyParametersGrp_NoStrategyParameters_3);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_3);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoStrategyParameters noStrategyParameters_0_1;
    // StrategyParametersGrp.NoStrategyParameters
    multiset<string> StrategyParametersGrp_NoStrategyParameters_4;
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterName{"STRING_608015404"}, StrategyParametersGrp_NoStrategyParameters_4);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterType{17}, StrategyParametersGrp_NoStrategyParameters_4);
    set_field(noStrategyParameters_0_1, FIX::StrategyParameterValue{"STRING_1566969283"}, StrategyParametersGrp_NoStrategyParameters_4);
    all_values.push_back(StrategyParametersGrp_NoStrategyParameters_4);
    all_compo_names.insert("...NoStrategyParameters");

    msg.addGroup(noStrategyParameters_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_7;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_7);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_7);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_7);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_8;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_8);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_8);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_8);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
  }
  {
    FIX50SP2::NewOrderCross::NoTradingSessions noTradingSessions_0_2;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_9;
    set_field(noTradingSessions_0_2, FIX::TradingSessionID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_9);
    set_field(noTradingSessions_0_2, FIX::TradingSessionSubID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_9);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_9);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_2);
  }
  // TriggeringInstruction
  multiset<string> TriggeringInstruction_3;
  set_field(msg, FIX::TriggerAction{'3'}, TriggeringInstruction_3);
  FIX::TriggerNewPrice TriggerNewPrice_3;
  TriggerNewPrice_3.setString("14649993");
set_field(msg, TriggerNewPrice_3, TriggeringInstruction_3);
  FIX::TriggerNewQty TriggerNewQty_3;
  TriggerNewQty_3.setString("17764698");
set_field(msg, TriggerNewQty_3, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerOrderType{'1'}, TriggeringInstruction_3);
  FIX::TriggerPrice TriggerPrice_3;
  TriggerPrice_3.setString("3768200");
set_field(msg, TriggerPrice_3, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerPriceDirection{'D'}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerPriceType{'4'}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerPriceTypeScope{'1'}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerSecurityDesc{"STRING_560846726"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerSecurityID{"STRING_225361269"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerSecurityIDSource{"STRING_161800973"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerSymbol{"STRING_147492965"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerTradingSessionID{"STRING_208571517"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerTradingSessionSubID{"STRING_522680583"}, TriggeringInstruction_3);
  set_field(msg, FIX::TriggerType{'3'}, TriggeringInstruction_3);
  all_values.push_back(TriggeringInstruction_3);
  all_compo_names.insert(".");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::NewOrderCross::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_62;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_535656053"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{715854189}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_458639831"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1750716093}, UnderlyingInstrument_62);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_62;
    UnderlyingAdjustedQuantity_62.setString("6956207");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_62, UnderlyingInstrument_62);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_62;
    UnderlyingAllocationPercent_62.setString("52.360000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_62, UnderlyingInstrument_62);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_62;
    UnderlyingAttachmentPoint_62.setString("58.000000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_115106356"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_2060309022"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1088937604"}, UnderlyingInstrument_62);
    FIX::UnderlyingCapValue UnderlyingCapValue_62;
    UnderlyingCapValue_62.setString("17010801");
set_field(noUnderlyings_0_0, UnderlyingCapValue_62, UnderlyingInstrument_62);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_62;
    UnderlyingCashAmount_62.setString("12378351");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_62);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_62;
    UnderlyingContractMultiplier_62.setString("290785");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1722067640}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1395026869"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1494077885"}, UnderlyingInstrument_62);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_62;
    UnderlyingCouponRate_62.setString("38.680000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_846216677"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_62);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_62;
    UnderlyingCurrentValue_62.setString("750758");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_62, UnderlyingInstrument_62);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_62;
    UnderlyingDetachmentPoint_62.setString("82.440000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_62, UnderlyingInstrument_62);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_62;
    UnderlyingDirtyPrice_62.setString("2900877");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_62, UnderlyingInstrument_62);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_62;
    UnderlyingEndPrice_62.setString("3004371");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_62, UnderlyingInstrument_62);
    FIX::UnderlyingEndValue UnderlyingEndValue_62;
    UnderlyingEndValue_62.setString("11840392");
set_field(noUnderlyings_0_0, UnderlyingEndValue_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{437580732}, UnderlyingInstrument_62);
    FIX::UnderlyingFXRate UnderlyingFXRate_62;
    UnderlyingFXRate_62.setString("5090086");
set_field(noUnderlyings_0_0, UnderlyingFXRate_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_62);
    FIX::UnderlyingFactor UnderlyingFactor_62;
    UnderlyingFactor_62.setString("7635230");
set_field(noUnderlyings_0_0, UnderlyingFactor_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{734703732}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_94892205"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1479377196"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1193343563"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1845608299"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_27514269"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_112515151"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_951350451"}, UnderlyingInstrument_62);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_62;
    UnderlyingNotionalPercentageOutstanding_62.setString("6.250000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_62);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_62;
    UnderlyingOriginalNotionalPercentageOutstanding_62.setString("80.550000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1843700788"}, UnderlyingInstrument_62);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_62;
    UnderlyingPriceUnitOfMeasureQty_62.setString("12631757");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1750530399}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1872779319}, UnderlyingInstrument_62);
    FIX::UnderlyingPx UnderlyingPx_62;
    UnderlyingPx_62.setString("8377597");
set_field(noUnderlyings_0_0, UnderlyingPx_62, UnderlyingInstrument_62);
    FIX::UnderlyingQty UnderlyingQty_62;
    UnderlyingQty_62.setString("9980736");
set_field(noUnderlyings_0_0, UnderlyingQty_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1219373556"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_41329936"}, UnderlyingInstrument_62);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_62;
    UnderlyingRepurchaseRate_62.setString("2.970000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{942787799}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1918054625"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1919366138"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1965026043"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_60658744"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_72319600"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1001581612"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_498239477"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_581328228"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_560817765"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_62);
    FIX::UnderlyingStartValue UnderlyingStartValue_62;
    UnderlyingStartValue_62.setString("13160319");
set_field(noUnderlyings_0_0, UnderlyingStartValue_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_655709970"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_62);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_62;
    UnderlyingStrikePrice_62.setString("3538346");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_62, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_621170302"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_474407027"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1305185072"}, UnderlyingInstrument_62);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_763790927"}, UnderlyingInstrument_62);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_62;
    UnderlyingUnitOfMeasureQty_62.setString("4997475");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_62, UnderlyingInstrument_62);
    all_values.push_back(UnderlyingInstrument_62);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_131;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_460008067"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1762923276"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_131);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_132;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_801036231"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_185303738"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_132);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_133;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_453199344"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1799109851"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_133);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_119;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_494529280"}, UnderlyingStipulations_NoUnderlyingStips_119);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1495916500"}, UnderlyingStipulations_NoUnderlyingStips_119);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_119);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_133;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_265100257"}, UndlyInstrumentParties_NoUndlyInstrumentParties_133);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_133);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{17523842}, UndlyInstrumentParties_NoUndlyInstrumentParties_133);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_133);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1340118591"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1019105454}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_261);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::NewOrderCross::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_63;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_823998479"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1921446819}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1579923219"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{2085760963}, UnderlyingInstrument_63);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_63;
    UnderlyingAdjustedQuantity_63.setString("10899951");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_63, UnderlyingInstrument_63);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_63;
    UnderlyingAllocationPercent_63.setString("95.420000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_63, UnderlyingInstrument_63);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_63;
    UnderlyingAttachmentPoint_63.setString("33.470000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1451887007"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_441984163"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1153103649"}, UnderlyingInstrument_63);
    FIX::UnderlyingCapValue UnderlyingCapValue_63;
    UnderlyingCapValue_63.setString("19262940");
set_field(noUnderlyings_0_1, UnderlyingCapValue_63, UnderlyingInstrument_63);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_63;
    UnderlyingCashAmount_63.setString("17471692");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_63);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_63;
    UnderlyingContractMultiplier_63.setString("2785579");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{797675068}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_229418996"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2041481215"}, UnderlyingInstrument_63);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_63;
    UnderlyingCouponRate_63.setString("12.990000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_414722735"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_63);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_63;
    UnderlyingCurrentValue_63.setString("18194000");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_63, UnderlyingInstrument_63);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_63;
    UnderlyingDetachmentPoint_63.setString("61.920000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_63, UnderlyingInstrument_63);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_63;
    UnderlyingDirtyPrice_63.setString("5987703");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_63, UnderlyingInstrument_63);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_63;
    UnderlyingEndPrice_63.setString("20193814");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_63, UnderlyingInstrument_63);
    FIX::UnderlyingEndValue UnderlyingEndValue_63;
    UnderlyingEndValue_63.setString("11068264");
set_field(noUnderlyings_0_1, UnderlyingEndValue_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1866569345}, UnderlyingInstrument_63);
    FIX::UnderlyingFXRate UnderlyingFXRate_63;
    UnderlyingFXRate_63.setString("20369053");
set_field(noUnderlyings_0_1, UnderlyingFXRate_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_63);
    FIX::UnderlyingFactor UnderlyingFactor_63;
    UnderlyingFactor_63.setString("10592042");
set_field(noUnderlyings_0_1, UnderlyingFactor_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{908527125}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_109100283"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_833167460"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_340966696"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_47377598"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1923162592"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_429116238"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_579310945"}, UnderlyingInstrument_63);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_63;
    UnderlyingNotionalPercentageOutstanding_63.setString("59.510000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_63);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_63;
    UnderlyingOriginalNotionalPercentageOutstanding_63.setString("45.950000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1006376337"}, UnderlyingInstrument_63);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_63;
    UnderlyingPriceUnitOfMeasureQty_63.setString("4707859");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1501825524}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1284934276}, UnderlyingInstrument_63);
    FIX::UnderlyingPx UnderlyingPx_63;
    UnderlyingPx_63.setString("12684610");
set_field(noUnderlyings_0_1, UnderlyingPx_63, UnderlyingInstrument_63);
    FIX::UnderlyingQty UnderlyingQty_63;
    UnderlyingQty_63.setString("17312445");
set_field(noUnderlyings_0_1, UnderlyingQty_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1178931843"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_719688709"}, UnderlyingInstrument_63);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_63;
    UnderlyingRepurchaseRate_63.setString("72.550000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1526128755}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1970026211"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1817883637"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_220371300"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_421312917"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1689781466"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1327197750"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_140398615"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1579203136"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_612299554"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_63);
    FIX::UnderlyingStartValue UnderlyingStartValue_63;
    UnderlyingStartValue_63.setString("3402466");
set_field(noUnderlyings_0_1, UnderlyingStartValue_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_721399837"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_63);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_63;
    UnderlyingStrikePrice_63.setString("7687774");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_63, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1808449308"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1110329548"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1348088380"}, UnderlyingInstrument_63);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_888531611"}, UnderlyingInstrument_63);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_63;
    UnderlyingUnitOfMeasureQty_63.setString("19814299");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_63, UnderlyingInstrument_63);
    all_values.push_back(UnderlyingInstrument_63);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_134;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1894907948"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_304732292"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_134);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_135;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_287361203"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_135);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1032358576"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_135);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_135);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_120;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_2018605724"}, UnderlyingStipulations_NoUnderlyingStips_120);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_63806772"}, UnderlyingStipulations_NoUnderlyingStips_120);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_120);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_121;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_145398411"}, UnderlyingStipulations_NoUnderlyingStips_121);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_2017089331"}, UnderlyingStipulations_NoUnderlyingStips_121);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_121);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_134;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2115424622"}, UndlyInstrumentParties_NoUndlyInstrumentParties_134);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_134);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1810306827}, UndlyInstrumentParties_NoUndlyInstrumentParties_134);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_134);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1229787139"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{990020929}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_262);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::NewOrderCross::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_529652507"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{661506627}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_263);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_11;
  FIX::Yield Yield_11;
  Yield_11.setString("4.830000");
set_field(msg, Yield_11, YieldData_11);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1729255411"}, YieldData_11);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1001753241"}, YieldData_11);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_11;
  YieldRedemptionPrice_11.setString("1762366");
set_field(msg, YieldRedemptionPrice_11, YieldData_11);
  set_field(msg, FIX::YieldRedemptionPriceType{1614542127}, YieldData_11);
  set_field(msg, FIX::YieldType{"STRING_CLOSE"}, YieldData_11);
  all_values.push_back(YieldData_11);
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
