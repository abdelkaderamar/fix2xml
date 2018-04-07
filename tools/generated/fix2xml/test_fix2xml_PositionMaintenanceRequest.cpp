#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionMaintenanceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::PositionMaintenanceRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceRequest_0;
  set_field(msg, FIX::Account{"STRING_512567302"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::AccountType{2}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::AcctIDSource{5}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::AdjustmentType{2}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1960710777"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::ContraryInstructionIndicator{true}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::Currency{"GBP"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1922996145"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::EncodedTextLen{1928642862}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::OrigPosReqRefID{"STRING_734223601"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PosMaintAction{4}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PosMaintRptRefID{"STRING_1349247628"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PosReqID{"STRING_1498614873"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PosTransType{2}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::PriorSpreadIndicator{false}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::SettlCurrency{"CAN"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_2147178437"}, PositionMaintenanceRequest_0);
  set_field(msg, FIX::Text{"STRING_1391786352"}, PositionMaintenanceRequest_0);
  FIX::ThresholdAmount ThresholdAmount_2;
  ThresholdAmount_2.setString("8924440");
set_field(msg, ThresholdAmount_2, PositionMaintenanceRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(19, 8, 6, 6, 11, 2006)}, PositionMaintenanceRequest_0);
  all_values.push_back(PositionMaintenanceRequest_0);

  all_compo_names.insert("PositionMaintenanceRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_66;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_903844243"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{389526723}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1814686655"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1679678495}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_207016853"}, InstrumentLeg_66);
    FIX::LegContractMultiplier LegContractMultiplier_66;
    LegContractMultiplier_66.setString("16279137");
set_field(noLegs_0_0, LegContractMultiplier_66, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{466008525}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1023751015"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_612613890"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_241521023"}, InstrumentLeg_66);
    FIX::LegCouponRate LegCouponRate_66;
    LegCouponRate_66.setString("2.290000");
set_field(noLegs_0_0, LegCouponRate_66, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1346837491"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_697968717"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{854924111}, InstrumentLeg_66);
    FIX::LegFactor LegFactor_66;
    LegFactor_66.setString("6569074");
set_field(noLegs_0_0, LegFactor_66, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{248016461}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_2085653686"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_478124317"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_247711250"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1329956390"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1370568389"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_701564569"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_199067978"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_753061769"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'5'}, InstrumentLeg_66);
    FIX::LegOptionRatio LegOptionRatio_66;
    LegOptionRatio_66.setString("7135176");
set_field(noLegs_0_0, LegOptionRatio_66, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_926260036"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_385811488"}, InstrumentLeg_66);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_66;
    LegPriceUnitOfMeasureQty_66.setString("10904038");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_66, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegProduct{1830104279}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegPutOrCall{775338211}, InstrumentLeg_66);
    FIX::LegRatioQty LegRatioQty_66;
    LegRatioQty_66.setString("7576068");
set_field(noLegs_0_0, LegRatioQty_66, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1362299126"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_982355064"}, InstrumentLeg_66);
    FIX::LegRepurchaseRate LegRepurchaseRate_66;
    LegRepurchaseRate_66.setString("69.890000");
set_field(noLegs_0_0, LegRepurchaseRate_66, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1828307652}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_2006106079"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_850650879"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_2069828675"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_663532660"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_50004723"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_2118925653"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegSide{'6'}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_747973440"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_66);
    FIX::LegStrikePrice LegStrikePrice_66;
    LegStrikePrice_66.setString("9959899");
set_field(noLegs_0_0, LegStrikePrice_66, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_764536155"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1805238634"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1243701151"}, InstrumentLeg_66);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_2094492546"}, InstrumentLeg_66);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_66;
    LegUnitOfMeasureQty_66.setString("10283233");
set_field(noLegs_0_0, LegUnitOfMeasureQty_66, InstrumentLeg_66);
    all_values.push_back(InstrumentLeg_66);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_135;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_146076876"}, LegSecAltIDGrp_NoLegSecurityAltID_135);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1781385144"}, LegSecAltIDGrp_NoLegSecurityAltID_135);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_135);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_136;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_306634140"}, LegSecAltIDGrp_NoLegSecurityAltID_136);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_859594488"}, LegSecAltIDGrp_NoLegSecurityAltID_136);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_136);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_137;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_560161532"}, LegSecAltIDGrp_NoLegSecurityAltID_137);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_692445628"}, LegSecAltIDGrp_NoLegSecurityAltID_137);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_137);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_67;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1949998335"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{242782163}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1467783839"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{560121540}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1605081290"}, InstrumentLeg_67);
    FIX::LegContractMultiplier LegContractMultiplier_67;
    LegContractMultiplier_67.setString("3026552");
set_field(noLegs_0_1, LegContractMultiplier_67, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{798158530}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1285905294"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_161277687"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1648809409"}, InstrumentLeg_67);
    FIX::LegCouponRate LegCouponRate_67;
    LegCouponRate_67.setString("3.210000");
set_field(noLegs_0_1, LegCouponRate_67, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_824810347"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegCurrency{"JPY"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1495017217"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{299303924}, InstrumentLeg_67);
    FIX::LegFactor LegFactor_67;
    LegFactor_67.setString("20060584");
set_field(noLegs_0_1, LegFactor_67, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{674647886}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1295293825"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_623110951"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_332402872"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_391511328"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_570119849"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1360726247"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_189293401"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_716196725"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'9'}, InstrumentLeg_67);
    FIX::LegOptionRatio LegOptionRatio_67;
    LegOptionRatio_67.setString("4959275");
set_field(noLegs_0_1, LegOptionRatio_67, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1575791213"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1554789276"}, InstrumentLeg_67);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_67;
    LegPriceUnitOfMeasureQty_67.setString("11883731");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_67, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegProduct{1378305900}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1797571439}, InstrumentLeg_67);
    FIX::LegRatioQty LegRatioQty_67;
    LegRatioQty_67.setString("5086733");
set_field(noLegs_0_1, LegRatioQty_67, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1938427441"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1255169081"}, InstrumentLeg_67);
    FIX::LegRepurchaseRate LegRepurchaseRate_67;
    LegRepurchaseRate_67.setString("86.150000");
set_field(noLegs_0_1, LegRepurchaseRate_67, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{589102323}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_393590727"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_972606302"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_90428084"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1601841048"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1797416650"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1789242217"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegSide{'6'}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1144950219"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_67);
    FIX::LegStrikePrice LegStrikePrice_67;
    LegStrikePrice_67.setString("18195981");
set_field(noLegs_0_1, LegStrikePrice_67, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1236356319"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1115735473"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_4517329"}, InstrumentLeg_67);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1627867647"}, InstrumentLeg_67);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_67;
    LegUnitOfMeasureQty_67.setString("16858553");
set_field(noLegs_0_1, LegUnitOfMeasureQty_67, InstrumentLeg_67);
    all_values.push_back(InstrumentLeg_67);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_138;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1817161048"}, LegSecAltIDGrp_NoLegSecurityAltID_138);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_254568399"}, LegSecAltIDGrp_NoLegSecurityAltID_138);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_138);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_68;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_212387672"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{165604941}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1830359613"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1767176948}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_1353978110"}, InstrumentLeg_68);
    FIX::LegContractMultiplier LegContractMultiplier_68;
    LegContractMultiplier_68.setString("10611818");
set_field(noLegs_0_2, LegContractMultiplier_68, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1417264739}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1862651470"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_852125658"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_524950173"}, InstrumentLeg_68);
    FIX::LegCouponRate LegCouponRate_68;
    LegCouponRate_68.setString("64.380000");
set_field(noLegs_0_2, LegCouponRate_68, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1441227981"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegCurrency{"JPY"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_1531656066"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{372898301}, InstrumentLeg_68);
    FIX::LegFactor LegFactor_68;
    LegFactor_68.setString("11490357");
set_field(noLegs_0_2, LegFactor_68, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1173414635}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_1006948028"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_146502314"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1114477128"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_1499572550"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1966100419"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_203349799"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_467824376"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_1970617749"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_68);
    FIX::LegOptionRatio LegOptionRatio_68;
    LegOptionRatio_68.setString("61960");
set_field(noLegs_0_2, LegOptionRatio_68, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_1188377677"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1500894847"}, InstrumentLeg_68);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_68;
    LegPriceUnitOfMeasureQty_68.setString("2607644");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_68, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegProduct{1400765349}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegPutOrCall{1666499789}, InstrumentLeg_68);
    FIX::LegRatioQty LegRatioQty_68;
    LegRatioQty_68.setString("20911240");
set_field(noLegs_0_2, LegRatioQty_68, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1020458649"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_872994251"}, InstrumentLeg_68);
    FIX::LegRepurchaseRate LegRepurchaseRate_68;
    LegRepurchaseRate_68.setString("22.800000");
set_field(noLegs_0_2, LegRepurchaseRate_68, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{290239741}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_588162074"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1856947939"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_815189914"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1114658512"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1150692272"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_1733730814"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegSide{'4'}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_534864690"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_68);
    FIX::LegStrikePrice LegStrikePrice_68;
    LegStrikePrice_68.setString("17082793");
set_field(noLegs_0_2, LegStrikePrice_68, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_966093495"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1761815661"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_675272806"}, InstrumentLeg_68);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_318182398"}, InstrumentLeg_68);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_68;
    LegUnitOfMeasureQty_68.setString("15804324");
set_field(noLegs_0_2, LegUnitOfMeasureQty_68, InstrumentLeg_68);
    all_values.push_back(InstrumentLeg_68);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_139;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_786006774"}, LegSecAltIDGrp_NoLegSecurityAltID_139);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_1403566533"}, LegSecAltIDGrp_NoLegSecurityAltID_139);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_139);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_140;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_562356404"}, LegSecAltIDGrp_NoLegSecurityAltID_140);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_792202824"}, LegSecAltIDGrp_NoLegSecurityAltID_140);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_140);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_141;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_444460563"}, LegSecAltIDGrp_NoLegSecurityAltID_141);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_2063251252"}, LegSecAltIDGrp_NoLegSecurityAltID_141);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_141);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_51;
  FIX::AttachmentPoint AttachmentPoint_51;
  AttachmentPoint_51.setString("72.740000");
set_field(msg, AttachmentPoint_51, Instrument_51);
  set_field(msg, FIX::CFICode{"STRING_1845225912"}, Instrument_51);
  set_field(msg, FIX::CPProgram{2}, Instrument_51);
  set_field(msg, FIX::CPRegType{"STRING_996607689"}, Instrument_51);
  FIX::CapPrice CapPrice_51;
  CapPrice_51.setString("7182009");
set_field(msg, CapPrice_51, Instrument_51);
  FIX::ContractMultiplier ContractMultiplier_51;
  ContractMultiplier_51.setString("3077779");
set_field(msg, ContractMultiplier_51, Instrument_51);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_51);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1008440655"}, Instrument_51);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_895940070"}, Instrument_51);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1710894261"}, Instrument_51);
  FIX::CouponRate CouponRate_51;
  CouponRate_51.setString("5.690000");
set_field(msg, CouponRate_51, Instrument_51);
  set_field(msg, FIX::CreditRating{"STRING_2010598582"}, Instrument_51);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_714102885"}, Instrument_51);
  FIX::DetachmentPoint DetachmentPoint_51;
  DetachmentPoint_51.setString("77.350000");
set_field(msg, DetachmentPoint_51, Instrument_51);
  set_field(msg, FIX::EncodedIssuer{"DATA_329392539"}, Instrument_51);
  set_field(msg, FIX::EncodedIssuerLen{1248967576}, Instrument_51);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1369023203"}, Instrument_51);
  set_field(msg, FIX::EncodedSecurityDescLen{1944705886}, Instrument_51);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_51);
  FIX::Factor Factor_51;
  Factor_51.setString("1876330");
set_field(msg, Factor_51, Instrument_51);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_51);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_51);
  FIX::FloorPrice FloorPrice_51;
  FloorPrice_51.setString("5058154");
set_field(msg, FloorPrice_51, Instrument_51);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_51);
  set_field(msg, FIX::InstrRegistry{"STRING_216175017"}, Instrument_51);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_51);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_248069569"}, Instrument_51);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_778531421"}, Instrument_51);
  set_field(msg, FIX::Issuer{"STRING_2084025047"}, Instrument_51);
  set_field(msg, FIX::ListMethod{0}, Instrument_51);
  set_field(msg, FIX::LocaleOfIssue{"STRING_694299025"}, Instrument_51);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_989508673"}, Instrument_51);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_390272396"}, Instrument_51);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_129082770"}, Instrument_51);
  FIX::MinPriceIncrement MinPriceIncrement_51;
  MinPriceIncrement_51.setString("19861163");
set_field(msg, MinPriceIncrement_51, Instrument_51);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_51;
  MinPriceIncrementAmount_51.setString("11084733");
set_field(msg, MinPriceIncrementAmount_51, Instrument_51);
  set_field(msg, FIX::NTPositionLimit{436860767}, Instrument_51);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_51;
  NotionalPercentageOutstanding_51.setString("26.850000");
set_field(msg, NotionalPercentageOutstanding_51, Instrument_51);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_51);
  FIX::OptPayoutAmount OptPayoutAmount_51;
  OptPayoutAmount_51.setString("13328008");
set_field(msg, OptPayoutAmount_51, Instrument_51);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_51);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_51;
  OriginalNotionalPercentageOutstanding_51.setString("8.860000");
set_field(msg, OriginalNotionalPercentageOutstanding_51, Instrument_51);
  set_field(msg, FIX::Pool{"STRING_1195915772"}, Instrument_51);
  set_field(msg, FIX::PositionLimit{2117576183}, Instrument_51);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_51);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1525308311"}, Instrument_51);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_51;
  PriceUnitOfMeasureQty_51.setString("12190601");
set_field(msg, PriceUnitOfMeasureQty_51, Instrument_51);
  set_field(msg, FIX::Product{7}, Instrument_51);
  set_field(msg, FIX::ProductComplex{"STRING_1322530549"}, Instrument_51);
  set_field(msg, FIX::PutOrCall{1}, Instrument_51);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_464627579"}, Instrument_51);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_734084800"}, Instrument_51);
  FIX::RepurchaseRate RepurchaseRate_51;
  RepurchaseRate_51.setString("57.760000");
set_field(msg, RepurchaseRate_51, Instrument_51);
  set_field(msg, FIX::RepurchaseTerm{970443028}, Instrument_51);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_51);
  set_field(msg, FIX::SecurityDesc{"STRING_1582550793"}, Instrument_51);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_114781602"}, Instrument_51);
  set_field(msg, FIX::SecurityGroup{"STRING_1974141052"}, Instrument_51);
  set_field(msg, FIX::SecurityID{"STRING_213598567"}, Instrument_51);
  set_field(msg, FIX::SecurityIDSource{"STRING_G"}, Instrument_51);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_51);
  set_field(msg, FIX::SecuritySubType{"STRING_907897592"}, Instrument_51);
  set_field(msg, FIX::SecurityType{"STRING_LOFC"}, Instrument_51);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_51);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_51);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_879464390"}, Instrument_51);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2017933243"}, Instrument_51);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_51);
  FIX::StrikeMultiplier StrikeMultiplier_51;
  StrikeMultiplier_51.setString("19873635");
set_field(msg, StrikeMultiplier_51, Instrument_51);
  FIX::StrikePrice StrikePrice_51;
  StrikePrice_51.setString("6591583");
set_field(msg, StrikePrice_51, Instrument_51);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_51);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_51;
  StrikePriceBoundaryPrecision_51.setString("7.990000");
set_field(msg, StrikePriceBoundaryPrecision_51, Instrument_51);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_51);
  FIX::StrikeValue StrikeValue_51;
  StrikeValue_51.setString("19456092");
set_field(msg, StrikeValue_51, Instrument_51);
  set_field(msg, FIX::Symbol{"STRING_540912125"}, Instrument_51);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_51);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_51);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_51);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_51);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_51;
  UnitOfMeasureQty_51.setString("8985254");
set_field(msg, UnitOfMeasureQty_51, Instrument_51);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_51);
  all_values.push_back(Instrument_51);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_102;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_102);
    FIX::ComplexEventPrice ComplexEventPrice_102;
    ComplexEventPrice_102.setString("1054936");
set_field(noComplexEvents_0_0, ComplexEventPrice_102, ComplexEvents_NoComplexEvents_102);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_102);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_102;
    ComplexEventPriceBoundaryPrecision_102.setString("83.630000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_102, ComplexEvents_NoComplexEvents_102);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_102);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_102);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_102;
    ComplexOptPayoutAmount_102.setString("19135669");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_102, ComplexEvents_NoComplexEvents_102);
    all_values.push_back(ComplexEvents_NoComplexEvents_102);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_218;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 33, 45, 13, 4, 2008)}, ComplexEventDates_NoComplexEventDates_218);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 13, 19, 19, 6, 2000)}, ComplexEventDates_NoComplexEventDates_218);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_218);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_440;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 15, 37)}, ComplexEventTimes_NoComplexEventTimes_440);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 11, 20)}, ComplexEventTimes_NoComplexEventTimes_440);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_440);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_219;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 3, 41, 5, 3, 2001)}, ComplexEventDates_NoComplexEventDates_219);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 9, 4, 19, 12, 2013)}, ComplexEventDates_NoComplexEventDates_219);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_219);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_441;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 45, 9)}, ComplexEventTimes_NoComplexEventTimes_441);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 52, 24)}, ComplexEventTimes_NoComplexEventTimes_441);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_441);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_442;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 39, 22)}, ComplexEventTimes_NoComplexEventTimes_442);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 33, 29)}, ComplexEventTimes_NoComplexEventTimes_442);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_442);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_103;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_103);
    FIX::ComplexEventPrice ComplexEventPrice_103;
    ComplexEventPrice_103.setString("15540077");
set_field(noComplexEvents_0_1, ComplexEventPrice_103, ComplexEvents_NoComplexEvents_103);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_103);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_103;
    ComplexEventPriceBoundaryPrecision_103.setString("25.590000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_103, ComplexEvents_NoComplexEvents_103);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_103);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_103);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_103;
    ComplexOptPayoutAmount_103.setString("11548383");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_103, ComplexEvents_NoComplexEvents_103);
    all_values.push_back(ComplexEvents_NoComplexEvents_103);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_220;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 31, 5, 26, 8, 2007)}, ComplexEventDates_NoComplexEventDates_220);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 22, 30, 9, 6, 2008)}, ComplexEventDates_NoComplexEventDates_220);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_220);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_443;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 44, 12)}, ComplexEventTimes_NoComplexEventTimes_443);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 37, 46)}, ComplexEventTimes_NoComplexEventTimes_443);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_443);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_444;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 11, 33)}, ComplexEventTimes_NoComplexEventTimes_444);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 7, 29)}, ComplexEventTimes_NoComplexEventTimes_444);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_444);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_221;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 53, 4, 1, 1, 2011)}, ComplexEventDates_NoComplexEventDates_221);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 56, 41, 9, 6, 2007)}, ComplexEventDates_NoComplexEventDates_221);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_221);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_445;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 31, 47)}, ComplexEventTimes_NoComplexEventTimes_445);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 16, 50)}, ComplexEventTimes_NoComplexEventTimes_445);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_445);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_222;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 1, 11, 17, 4, 2011)}, ComplexEventDates_NoComplexEventDates_222);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 54, 24, 19, 4, 2010)}, ComplexEventDates_NoComplexEventDates_222);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_222);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::PositionMaintenanceRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_446;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 33, 51)}, ComplexEventTimes_NoComplexEventTimes_446);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 38, 12)}, ComplexEventTimes_NoComplexEventTimes_446);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_446);
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
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_106;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_727632445"}, EvntGrp_NoEvents_106);
    FIX::EventPx EventPx_106;
    EventPx_106.setString("5199133");
set_field(noEvents_0_0, EventPx_106, EvntGrp_NoEvents_106);
    set_field(noEvents_0_0, FIX::EventText{"STRING_346313200"}, EvntGrp_NoEvents_106);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 56, 20, 9, 4, 2003)}, EvntGrp_NoEvents_106);
    set_field(noEvents_0_0, FIX::EventType{5}, EvntGrp_NoEvents_106);
    all_values.push_back(EvntGrp_NoEvents_106);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_107;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1012139704"}, EvntGrp_NoEvents_107);
    FIX::EventPx EventPx_107;
    EventPx_107.setString("13606694");
set_field(noEvents_0_1, EventPx_107, EvntGrp_NoEvents_107);
    set_field(noEvents_0_1, FIX::EventText{"STRING_1829132055"}, EvntGrp_NoEvents_107);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(16, 1, 43, 3, 6, 2011)}, EvntGrp_NoEvents_107);
    set_field(noEvents_0_1, FIX::EventType{9}, EvntGrp_NoEvents_107);
    all_values.push_back(EvntGrp_NoEvents_107);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_97;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1937540780"}, InstrumentParties_NoInstrumentParties_97);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_97);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1257844006}, InstrumentParties_NoInstrumentParties_97);
    all_values.push_back(InstrumentParties_NoInstrumentParties_97);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_360898199"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{569553256}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_194);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1561036962"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1334294160}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_195);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1297185702"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{2080950318}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_196);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_105;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1555837031"}, SecAltIDGrp_NoSecurityAltID_105);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1763230541"}, SecAltIDGrp_NoSecurityAltID_105);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_105);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_106;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_814367728"}, SecAltIDGrp_NoSecurityAltID_106);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_266669063"}, SecAltIDGrp_NoSecurityAltID_106);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_106);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_102;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1053851374"}, SecurityXML_102);
  set_field(msg, FIX::SecurityXMLLen{1851596551}, SecurityXML_102);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_2064470385"}, SecurityXML_102);
  all_values.push_back(SecurityXML_102);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::PositionMaintenanceRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_94;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_716252608"}, Parties_NoPartyIDs_94);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_94);
    set_field(noPartyIDs_0_0, FIX::PartyRole{84}, Parties_NoPartyIDs_94);
    all_values.push_back(Parties_NoPartyIDs_94);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_193;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1334469814"}, PtysSubGrp_NoPartySubIDs_193);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{13}, PtysSubGrp_NoPartySubIDs_193);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_193);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_194;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1798116579"}, PtysSubGrp_NoPartySubIDs_194);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_194);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_194);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_95;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1303269392"}, Parties_NoPartyIDs_95);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_95);
    set_field(noPartyIDs_0_1, FIX::PartyRole{32}, Parties_NoPartyIDs_95);
    all_values.push_back(Parties_NoPartyIDs_95);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_195;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_386018538"}, PtysSubGrp_NoPartySubIDs_195);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_195);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_195);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_96;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_132232145"}, Parties_NoPartyIDs_96);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_96);
    set_field(noPartyIDs_0_2, FIX::PartyRole{49}, Parties_NoPartyIDs_96);
    all_values.push_back(Parties_NoPartyIDs_96);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_196;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1584358591"}, PtysSubGrp_NoPartySubIDs_196);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_196);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_196);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_197;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_1998971104"}, PtysSubGrp_NoPartySubIDs_197);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_197);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_197);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // PositionAmountData
  // Group PositionAmountData.NoPosAmt
  {
    FIX50SP2::PositionMaintenanceRequest::NoPosAmt noPosAmt_0_0;
    // PositionAmountData.NoPosAmt
    multiset<string> PositionAmountData_NoPosAmt_10;
    FIX::PosAmt PosAmt_10;
    PosAmt_10.setString("14073244");
set_field(noPosAmt_0_0, PosAmt_10, PositionAmountData_NoPosAmt_10);
    set_field(noPosAmt_0_0, FIX::PosAmtType{"STRING_ICMTM"}, PositionAmountData_NoPosAmt_10);
    set_field(noPosAmt_0_0, FIX::PositionCurrency{"STRING_1228194340"}, PositionAmountData_NoPosAmt_10);
    all_values.push_back(PositionAmountData_NoPosAmt_10);
    all_compo_names.insert("...NoPosAmt");

    msg.addGroup(noPosAmt_0_0);
  }
  // PositionQty
  // Group PositionQty.NoPositions
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_0;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_6;
    FIX::LongQty LongQty_6;
    LongQty_6.setString("399398");
set_field(noPositions_0_0, LongQty_6, PositionQty_NoPositions_6);
    set_field(noPositions_0_0, FIX::PosQtyStatus{1}, PositionQty_NoPositions_6);
    set_field(noPositions_0_0, FIX::PosType{"STRING_PNTN"}, PositionQty_NoPositions_6);
    set_field(noPositions_0_0, FIX::QuantityDate{"LOCALMKTDATE_2146738998"}, PositionQty_NoPositions_6);
    FIX::ShortQty ShortQty_6;
    ShortQty_6.setString("16485598");
set_field(noPositions_0_0, ShortQty_6, PositionQty_NoPositions_6);
    all_values.push_back(PositionQty_NoPositions_6);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_96;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1787702876"}, NestedParties_NoNestedPartyIDs_96);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'7'}, NestedParties_NoNestedPartyIDs_96);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{2055622660}, NestedParties_NoNestedPartyIDs_96);
      all_values.push_back(NestedParties_NoNestedPartyIDs_96);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_198;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_439789430"}, NstdPtysSubGrp_NoNestedPartySubIDs_198);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1693507837}, NstdPtysSubGrp_NoNestedPartySubIDs_198);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_198);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_199;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1331787720"}, NstdPtysSubGrp_NoNestedPartySubIDs_199);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1035750837}, NstdPtysSubGrp_NoNestedPartySubIDs_199);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_199);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noPositions_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noPositions_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoPositions noPositions_0_1;
    // PositionQty.NoPositions
    multiset<string> PositionQty_NoPositions_7;
    FIX::LongQty LongQty_7;
    LongQty_7.setString("17501939");
set_field(noPositions_0_1, LongQty_7, PositionQty_NoPositions_7);
    set_field(noPositions_0_1, FIX::PosQtyStatus{2}, PositionQty_NoPositions_7);
    set_field(noPositions_0_1, FIX::PosType{"STRING_ALC"}, PositionQty_NoPositions_7);
    set_field(noPositions_0_1, FIX::QuantityDate{"LOCALMKTDATE_935704463"}, PositionQty_NoPositions_7);
    FIX::ShortQty ShortQty_7;
    ShortQty_7.setString("3384080");
set_field(noPositions_0_1, ShortQty_7, PositionQty_NoPositions_7);
    all_values.push_back(PositionQty_NoPositions_7);
    all_compo_names.insert("...NoPositions");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_97;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_482113202"}, NestedParties_NoNestedPartyIDs_97);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_97);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{881965947}, NestedParties_NoNestedPartyIDs_97);
      all_values.push_back(NestedParties_NoNestedPartyIDs_97);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_200;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_891680863"}, NstdPtysSubGrp_NoNestedPartySubIDs_200);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{252307560}, NstdPtysSubGrp_NoNestedPartySubIDs_200);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_200);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_201;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1776642713"}, NstdPtysSubGrp_NoNestedPartySubIDs_201);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{151521703}, NstdPtysSubGrp_NoNestedPartySubIDs_201);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_201);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_202;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_1385879714"}, NstdPtysSubGrp_NoNestedPartySubIDs_202);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{857353406}, NstdPtysSubGrp_NoNestedPartySubIDs_202);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_202);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_98;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1825515254"}, NestedParties_NoNestedPartyIDs_98);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_98);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1789660650}, NestedParties_NoNestedPartyIDs_98);
      all_values.push_back(NestedParties_NoNestedPartyIDs_98);
      all_compo_names.insert("...NoPositions...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_203;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_1425074944"}, NstdPtysSubGrp_NoNestedPartySubIDs_203);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1290736854}, NstdPtysSubGrp_NoNestedPartySubIDs_203);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_203);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_204;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_1990164740"}, NstdPtysSubGrp_NoNestedPartySubIDs_204);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{1065294173}, NstdPtysSubGrp_NoNestedPartySubIDs_204);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_204);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoPositions::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_205;
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubID{"STRING_2079893353"}, NstdPtysSubGrp_NoNestedPartySubIDs_205);
        set_field(noNestedPartySubIDs_1_1_2_2, FIX::NestedPartySubIDType{1898303752}, NstdPtysSubGrp_NoNestedPartySubIDs_205);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_205);
        all_compo_names.insert("...NoPositions...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noPositions_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noPositions_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::PositionMaintenanceRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_19;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_3"}, TrdgSesGrp_NoTradingSessions_19);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_1"}, TrdgSesGrp_NoTradingSessions_19);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_19);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_88;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1407949973"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1047038217}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_484292433"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{682235700}, UnderlyingInstrument_88);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_88;
    UnderlyingAdjustedQuantity_88.setString("19827426");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_88, UnderlyingInstrument_88);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_88;
    UnderlyingAllocationPercent_88.setString("4.390000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_88, UnderlyingInstrument_88);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_88;
    UnderlyingAttachmentPoint_88.setString("67.040000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_317372234"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1862893846"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_861809003"}, UnderlyingInstrument_88);
    FIX::UnderlyingCapValue UnderlyingCapValue_88;
    UnderlyingCapValue_88.setString("16801883");
set_field(noUnderlyings_0_0, UnderlyingCapValue_88, UnderlyingInstrument_88);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_88;
    UnderlyingCashAmount_88.setString("6070910");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_88);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_88;
    UnderlyingContractMultiplier_88.setString("13093474");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{758612765}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_352512629"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_19217159"}, UnderlyingInstrument_88);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_88;
    UnderlyingCouponRate_88.setString("43.710000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1778332223"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_88);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_88;
    UnderlyingCurrentValue_88.setString("10559235");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_88, UnderlyingInstrument_88);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_88;
    UnderlyingDetachmentPoint_88.setString("10.150000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_88, UnderlyingInstrument_88);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_88;
    UnderlyingDirtyPrice_88.setString("15483373");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_88, UnderlyingInstrument_88);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_88;
    UnderlyingEndPrice_88.setString("21212176");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_88, UnderlyingInstrument_88);
    FIX::UnderlyingEndValue UnderlyingEndValue_88;
    UnderlyingEndValue_88.setString("8845407");
set_field(noUnderlyings_0_0, UnderlyingEndValue_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1299157461}, UnderlyingInstrument_88);
    FIX::UnderlyingFXRate UnderlyingFXRate_88;
    UnderlyingFXRate_88.setString("10675465");
set_field(noUnderlyings_0_0, UnderlyingFXRate_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_88);
    FIX::UnderlyingFactor UnderlyingFactor_88;
    UnderlyingFactor_88.setString("5960017");
set_field(noUnderlyings_0_0, UnderlyingFactor_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1345663119}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_517206181"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1643039971"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1829955553"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1199441882"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1478299003"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_505172344"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1179284938"}, UnderlyingInstrument_88);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_88;
    UnderlyingNotionalPercentageOutstanding_88.setString("12.370000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_88);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_88;
    UnderlyingOriginalNotionalPercentageOutstanding_88.setString("39.420000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1328375925"}, UnderlyingInstrument_88);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_88;
    UnderlyingPriceUnitOfMeasureQty_88.setString("8276736");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1007726857}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{490239678}, UnderlyingInstrument_88);
    FIX::UnderlyingPx UnderlyingPx_88;
    UnderlyingPx_88.setString("15862863");
set_field(noUnderlyings_0_0, UnderlyingPx_88, UnderlyingInstrument_88);
    FIX::UnderlyingQty UnderlyingQty_88;
    UnderlyingQty_88.setString("13602394");
set_field(noUnderlyings_0_0, UnderlyingQty_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_509456837"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2022930740"}, UnderlyingInstrument_88);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_88;
    UnderlyingRepurchaseRate_88.setString("80.620000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{170850998}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1581103357"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2047011582"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1122982013"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_981957066"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_2020745627"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_2007522733"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_133630879"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_940808525"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1116778942"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_88);
    FIX::UnderlyingStartValue UnderlyingStartValue_88;
    UnderlyingStartValue_88.setString("1389879");
set_field(noUnderlyings_0_0, UnderlyingStartValue_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1633985123"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_88);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_88;
    UnderlyingStrikePrice_88.setString("6859433");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_88, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1703487961"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_326632246"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1865228296"}, UnderlyingInstrument_88);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1351675550"}, UnderlyingInstrument_88);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_88;
    UnderlyingUnitOfMeasureQty_88.setString("5472147");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_88, UnderlyingInstrument_88);
    all_values.push_back(UnderlyingInstrument_88);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_189;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_532567827"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1374888393"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_189);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_175;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1022807505"}, UnderlyingStipulations_NoUnderlyingStips_175);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_813691114"}, UnderlyingStipulations_NoUnderlyingStips_175);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_175);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_176;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1979321286"}, UnderlyingStipulations_NoUnderlyingStips_176);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1532264342"}, UnderlyingStipulations_NoUnderlyingStips_176);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_176);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_177;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_689138207"}, UnderlyingStipulations_NoUnderlyingStips_177);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_822925701"}, UnderlyingStipulations_NoUnderlyingStips_177);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_177);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_181;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_122757916"}, UndlyInstrumentParties_NoUndlyInstrumentParties_181);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_181);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{678613705}, UndlyInstrumentParties_NoUndlyInstrumentParties_181);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_181);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_595715615"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{538652791}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_356);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1238345862"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1536524140}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_357);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1655431733"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1967978496}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_358);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_182;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1675512137"}, UndlyInstrumentParties_NoUndlyInstrumentParties_182);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_182);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{45683806}, UndlyInstrumentParties_NoUndlyInstrumentParties_182);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_182);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1827876566"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1749171767}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_359);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1823604285"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1545621214}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_360);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_953363669"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{223335426}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_361);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::PositionMaintenanceRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_89;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1156976156"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1485931497}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1598223819"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1776057955}, UnderlyingInstrument_89);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_89;
    UnderlyingAdjustedQuantity_89.setString("3612553");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_89, UnderlyingInstrument_89);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_89;
    UnderlyingAllocationPercent_89.setString("12.850000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_89, UnderlyingInstrument_89);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_89;
    UnderlyingAttachmentPoint_89.setString("55.940000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1893519697"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_953569492"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_283337647"}, UnderlyingInstrument_89);
    FIX::UnderlyingCapValue UnderlyingCapValue_89;
    UnderlyingCapValue_89.setString("14491513");
set_field(noUnderlyings_0_1, UnderlyingCapValue_89, UnderlyingInstrument_89);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_89;
    UnderlyingCashAmount_89.setString("10763274");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_89);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_89;
    UnderlyingContractMultiplier_89.setString("21277650");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{33558744}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1601506897"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_518934238"}, UnderlyingInstrument_89);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_89;
    UnderlyingCouponRate_89.setString("46.060000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_990547390"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_89);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_89;
    UnderlyingCurrentValue_89.setString("5185758");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_89, UnderlyingInstrument_89);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_89;
    UnderlyingDetachmentPoint_89.setString("55.310000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_89, UnderlyingInstrument_89);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_89;
    UnderlyingDirtyPrice_89.setString("11380832");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_89, UnderlyingInstrument_89);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_89;
    UnderlyingEndPrice_89.setString("20155479");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_89, UnderlyingInstrument_89);
    FIX::UnderlyingEndValue UnderlyingEndValue_89;
    UnderlyingEndValue_89.setString("8492084");
set_field(noUnderlyings_0_1, UnderlyingEndValue_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{739771380}, UnderlyingInstrument_89);
    FIX::UnderlyingFXRate UnderlyingFXRate_89;
    UnderlyingFXRate_89.setString("16916685");
set_field(noUnderlyings_0_1, UnderlyingFXRate_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_89);
    FIX::UnderlyingFactor UnderlyingFactor_89;
    UnderlyingFactor_89.setString("16931350");
set_field(noUnderlyings_0_1, UnderlyingFactor_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1915003982}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1404322171"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1031582898"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1365744153"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1032896479"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1392838253"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1630175439"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_493308425"}, UnderlyingInstrument_89);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_89;
    UnderlyingNotionalPercentageOutstanding_89.setString("43.020000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_89);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_89;
    UnderlyingOriginalNotionalPercentageOutstanding_89.setString("60.720000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_440542043"}, UnderlyingInstrument_89);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_89;
    UnderlyingPriceUnitOfMeasureQty_89.setString("15125886");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1782437354}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{420823490}, UnderlyingInstrument_89);
    FIX::UnderlyingPx UnderlyingPx_89;
    UnderlyingPx_89.setString("15461474");
set_field(noUnderlyings_0_1, UnderlyingPx_89, UnderlyingInstrument_89);
    FIX::UnderlyingQty UnderlyingQty_89;
    UnderlyingQty_89.setString("12364606");
set_field(noUnderlyings_0_1, UnderlyingQty_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_939757728"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_670568395"}, UnderlyingInstrument_89);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_89;
    UnderlyingRepurchaseRate_89.setString("43.460000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{966640051}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1762967850"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_598100225"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_2135455583"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_753567463"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_466164496"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_837180384"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1493338843"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_10349405"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1084526400"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_89);
    FIX::UnderlyingStartValue UnderlyingStartValue_89;
    UnderlyingStartValue_89.setString("19253533");
set_field(noUnderlyings_0_1, UnderlyingStartValue_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_341364923"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_89);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_89;
    UnderlyingStrikePrice_89.setString("13742614");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_89, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1315927748"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_626305684"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1867569827"}, UnderlyingInstrument_89);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_307318402"}, UnderlyingInstrument_89);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_89;
    UnderlyingUnitOfMeasureQty_89.setString("10625669");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_89, UnderlyingInstrument_89);
    all_values.push_back(UnderlyingInstrument_89);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_190;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_747860445"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_427672012"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_190);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_178;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1168683936"}, UnderlyingStipulations_NoUnderlyingStips_178);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1973819448"}, UnderlyingStipulations_NoUnderlyingStips_178);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_178);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_179;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1368146562"}, UnderlyingStipulations_NoUnderlyingStips_179);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_2108441664"}, UnderlyingStipulations_NoUnderlyingStips_179);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_179);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_183;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1447670908"}, UndlyInstrumentParties_NoUndlyInstrumentParties_183);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_183);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{112388397}, UndlyInstrumentParties_NoUndlyInstrumentParties_183);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_183);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_915570003"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{865955860}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_362);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_184;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_364451982"}, UndlyInstrumentParties_NoUndlyInstrumentParties_184);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_184);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{211811055}, UndlyInstrumentParties_NoUndlyInstrumentParties_184);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_184);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_689793139"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1250801300}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_363);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_152671126"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1031158063}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_364);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1173890795"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1296285019}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_365);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_185;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_257935817"}, UndlyInstrumentParties_NoUndlyInstrumentParties_185);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_185);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{1922590703}, UndlyInstrumentParties_NoUndlyInstrumentParties_185);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_185);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_649653297"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{837674023}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_366);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_474754248"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{1397513742}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_367);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::PositionMaintenanceRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1265346035"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{606440206}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_368);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
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
