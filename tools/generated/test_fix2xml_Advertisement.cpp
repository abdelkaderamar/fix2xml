#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Advertisement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Advertisement, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::Advertisement msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Advertisement_0;
  set_field(msg, FIX::AdvId{"STRING_281174737"}, Advertisement_0);
  set_field(msg, FIX::AdvRefID{"STRING_890656264"}, Advertisement_0);
  set_field(msg, FIX::AdvSide{'X'}, Advertisement_0);
  set_field(msg, FIX::AdvTransType{"STRING_C"}, Advertisement_0);
  set_field(msg, FIX::Currency{"CAN"}, Advertisement_0);
  set_field(msg, FIX::EncodedText{"DATA_1566545829"}, Advertisement_0);
  set_field(msg, FIX::EncodedTextLen{6193593}, Advertisement_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_1451655328"}, Advertisement_0);
  FIX::Price Price_0;
  Price_0.setString("12921695");
set_field(msg, Price_0, Advertisement_0);
  set_field(msg, FIX::QtyType{1}, Advertisement_0);
  FIX::Quantity Quantity_0;
  Quantity_0.setString("2743214");
set_field(msg, Quantity_0, Advertisement_0);
  set_field(msg, FIX::Text{"STRING_1101694339"}, Advertisement_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1116792507"}, Advertisement_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, Advertisement_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_4"}, Advertisement_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(7, 34, 56, 2, 7, 2014)}, Advertisement_0);
  set_field(msg, FIX::URLLink{"STRING_1045136722"}, Advertisement_0);
  all_values.push_back(Advertisement_0);

  all_compo_names.insert("Advertisement");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_0;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_873998347"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1919744279}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_781341029"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1676860502}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_43873121"}, InstrumentLeg_0);
    FIX::LegContractMultiplier LegContractMultiplier_0;
    LegContractMultiplier_0.setString("15686700");
set_field(noLegs_0_0, LegContractMultiplier_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1958035239}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_934529385"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1320599997"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1565210855"}, InstrumentLeg_0);
    FIX::LegCouponRate LegCouponRate_0;
    LegCouponRate_0.setString("42.240000");
set_field(noLegs_0_0, LegCouponRate_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1880085614"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1184257295"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{128958962}, InstrumentLeg_0);
    FIX::LegFactor LegFactor_0;
    LegFactor_0.setString("13339192");
set_field(noLegs_0_0, LegFactor_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1458578729}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1230653302"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_303228068"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_544648332"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_978232666"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_737962640"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1279623067"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1519918100"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_55715588"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_0);
    FIX::LegOptionRatio LegOptionRatio_0;
    LegOptionRatio_0.setString("722342");
set_field(noLegs_0_0, LegOptionRatio_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_811030972"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_341478644"}, InstrumentLeg_0);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_0;
    LegPriceUnitOfMeasureQty_0.setString("17308470");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegProduct{1685029319}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegPutOrCall{113739275}, InstrumentLeg_0);
    FIX::LegRatioQty LegRatioQty_0;
    LegRatioQty_0.setString("3647044");
set_field(noLegs_0_0, LegRatioQty_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1214406174"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_157612396"}, InstrumentLeg_0);
    FIX::LegRepurchaseRate LegRepurchaseRate_0;
    LegRepurchaseRate_0.setString("44.880000");
set_field(noLegs_0_0, LegRepurchaseRate_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1024957765}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1092141781"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1106490838"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_442684973"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_2069746005"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_839092804"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1426958009"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSide{'9'}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_2023350099"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_0);
    FIX::LegStrikePrice LegStrikePrice_0;
    LegStrikePrice_0.setString("13344451");
set_field(noLegs_0_0, LegStrikePrice_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_639086626"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_395723803"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1879093513"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1617319292"}, InstrumentLeg_0);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_0;
    LegUnitOfMeasureQty_0.setString("11336864");
set_field(noLegs_0_0, LegUnitOfMeasureQty_0, InstrumentLeg_0);
    all_values.push_back(InstrumentLeg_0);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_0;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_989753745"}, LegSecAltIDGrp_NoLegSecurityAltID_0);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1189402031"}, LegSecAltIDGrp_NoLegSecurityAltID_0);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_0);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_1;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_307574853"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1061988039}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_2000433003"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{649053497}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_645351436"}, InstrumentLeg_1);
    FIX::LegContractMultiplier LegContractMultiplier_1;
    LegContractMultiplier_1.setString("15379786");
set_field(noLegs_0_1, LegContractMultiplier_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{762792772}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1010055863"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_604901200"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_920405168"}, InstrumentLeg_1);
    FIX::LegCouponRate LegCouponRate_1;
    LegCouponRate_1.setString("67.030000");
set_field(noLegs_0_1, LegCouponRate_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1629858966"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_2072543939"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1934809307}, InstrumentLeg_1);
    FIX::LegFactor LegFactor_1;
    LegFactor_1.setString("5940466");
set_field(noLegs_0_1, LegFactor_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1352018300}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_693385834"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_469913149"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_760451624"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_785881569"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1804358330"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1399538250"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1181605372"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1535968195"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'8'}, InstrumentLeg_1);
    FIX::LegOptionRatio LegOptionRatio_1;
    LegOptionRatio_1.setString("1678081");
set_field(noLegs_0_1, LegOptionRatio_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_399717479"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1859127640"}, InstrumentLeg_1);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_1;
    LegPriceUnitOfMeasureQty_1.setString("13572101");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegProduct{707292333}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegPutOrCall{773632031}, InstrumentLeg_1);
    FIX::LegRatioQty LegRatioQty_1;
    LegRatioQty_1.setString("12101595");
set_field(noLegs_0_1, LegRatioQty_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1356345830"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1418983468"}, InstrumentLeg_1);
    FIX::LegRepurchaseRate LegRepurchaseRate_1;
    LegRepurchaseRate_1.setString("45.790000");
set_field(noLegs_0_1, LegRepurchaseRate_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{2119138603}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_281555683"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1205555780"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_892060123"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1077502386"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_687931098"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_757123425"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSide{'8'}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_612991389"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_1);
    FIX::LegStrikePrice LegStrikePrice_1;
    LegStrikePrice_1.setString("19650096");
set_field(noLegs_0_1, LegStrikePrice_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1237834919"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1896416127"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_577977666"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_2023716488"}, InstrumentLeg_1);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_1;
    LegUnitOfMeasureQty_1.setString("15532908");
set_field(noLegs_0_1, LegUnitOfMeasureQty_1, InstrumentLeg_1);
    all_values.push_back(InstrumentLeg_1);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_1;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1057838212"}, LegSecAltIDGrp_NoLegSecurityAltID_1);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_941775357"}, LegSecAltIDGrp_NoLegSecurityAltID_1);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_1);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_2;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_699406163"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1225646379}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1341492837"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{411050155}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_435372929"}, InstrumentLeg_2);
    FIX::LegContractMultiplier LegContractMultiplier_2;
    LegContractMultiplier_2.setString("20487851");
set_field(noLegs_0_2, LegContractMultiplier_2, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1184682187}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1645532482"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_1257647352"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_456182007"}, InstrumentLeg_2);
    FIX::LegCouponRate LegCouponRate_2;
    LegCouponRate_2.setString("34.130000");
set_field(noLegs_0_2, LegCouponRate_2, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1229302307"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegCurrency{"EUR"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_2121362431"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1815240076}, InstrumentLeg_2);
    FIX::LegFactor LegFactor_2;
    LegFactor_2.setString("19921902");
set_field(noLegs_0_2, LegFactor_2, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{731002208}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_500212708"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_457698032"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_1275451293"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_1926715686"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_275224074"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_365802564"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1675648166"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_853201740"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'2'}, InstrumentLeg_2);
    FIX::LegOptionRatio LegOptionRatio_2;
    LegOptionRatio_2.setString("10814553");
set_field(noLegs_0_2, LegOptionRatio_2, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_683234008"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1299873616"}, InstrumentLeg_2);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_2;
    LegPriceUnitOfMeasureQty_2.setString("20232306");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_2, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegProduct{1382640172}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegPutOrCall{378036347}, InstrumentLeg_2);
    FIX::LegRatioQty LegRatioQty_2;
    LegRatioQty_2.setString("12172398");
set_field(noLegs_0_2, LegRatioQty_2, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1793690327"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_813409276"}, InstrumentLeg_2);
    FIX::LegRepurchaseRate LegRepurchaseRate_2;
    LegRepurchaseRate_2.setString("13.960000");
set_field(noLegs_0_2, LegRepurchaseRate_2, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{830888866}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_311458110"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_228705101"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1287070873"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_410161524"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1458007408"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_2024808563"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1431886191"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_2);
    FIX::LegStrikePrice LegStrikePrice_2;
    LegStrikePrice_2.setString("154047");
set_field(noLegs_0_2, LegStrikePrice_2, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_45294052"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_2016825393"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_1290856045"}, InstrumentLeg_2);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_1972009739"}, InstrumentLeg_2);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_2;
    LegUnitOfMeasureQty_2.setString("1445658");
set_field(noLegs_0_2, LegUnitOfMeasureQty_2, InstrumentLeg_2);
    all_values.push_back(InstrumentLeg_2);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_2;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1500174257"}, LegSecAltIDGrp_NoLegSecurityAltID_2);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_997767559"}, LegSecAltIDGrp_NoLegSecurityAltID_2);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_2);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_3;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1898694014"}, LegSecAltIDGrp_NoLegSecurityAltID_3);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_434145937"}, LegSecAltIDGrp_NoLegSecurityAltID_3);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_3);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_4;
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltID{"STRING_1681001568"}, LegSecAltIDGrp_NoLegSecurityAltID_4);
      set_field(noLegSecurityAltID_2_1_2, FIX::LegSecurityAltIDSource{"STRING_1051083983"}, LegSecAltIDGrp_NoLegSecurityAltID_4);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_4);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_2);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_3;
  FIX::AttachmentPoint AttachmentPoint_3;
  AttachmentPoint_3.setString("29.740000");
set_field(msg, AttachmentPoint_3, Instrument_3);
  set_field(msg, FIX::CFICode{"STRING_916158092"}, Instrument_3);
  set_field(msg, FIX::CPProgram{2}, Instrument_3);
  set_field(msg, FIX::CPRegType{"STRING_1527132849"}, Instrument_3);
  FIX::CapPrice CapPrice_3;
  CapPrice_3.setString("5623647");
set_field(msg, CapPrice_3, Instrument_3);
  FIX::ContractMultiplier ContractMultiplier_3;
  ContractMultiplier_3.setString("950459");
set_field(msg, ContractMultiplier_3, Instrument_3);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_3);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1393253638"}, Instrument_3);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_406504069"}, Instrument_3);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_726895698"}, Instrument_3);
  FIX::CouponRate CouponRate_3;
  CouponRate_3.setString("8.630000");
set_field(msg, CouponRate_3, Instrument_3);
  set_field(msg, FIX::CreditRating{"STRING_816665593"}, Instrument_3);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_37419459"}, Instrument_3);
  FIX::DetachmentPoint DetachmentPoint_3;
  DetachmentPoint_3.setString("57.790000");
set_field(msg, DetachmentPoint_3, Instrument_3);
  set_field(msg, FIX::EncodedIssuer{"DATA_383602663"}, Instrument_3);
  set_field(msg, FIX::EncodedIssuerLen{1469305650}, Instrument_3);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_2102730771"}, Instrument_3);
  set_field(msg, FIX::EncodedSecurityDescLen{1942730024}, Instrument_3);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_3);
  FIX::Factor Factor_3;
  Factor_3.setString("5411");
set_field(msg, Factor_3, Instrument_3);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_3);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_3);
  FIX::FloorPrice FloorPrice_3;
  FloorPrice_3.setString("19725509");
set_field(msg, FloorPrice_3, Instrument_3);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_3);
  set_field(msg, FIX::InstrRegistry{"STRING_137257762"}, Instrument_3);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_3);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_806921500"}, Instrument_3);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_2035951776"}, Instrument_3);
  set_field(msg, FIX::Issuer{"STRING_1759387460"}, Instrument_3);
  set_field(msg, FIX::ListMethod{0}, Instrument_3);
  set_field(msg, FIX::LocaleOfIssue{"STRING_939552111"}, Instrument_3);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_2069280435"}, Instrument_3);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1256597512"}, Instrument_3);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_221188794"}, Instrument_3);
  FIX::MinPriceIncrement MinPriceIncrement_3;
  MinPriceIncrement_3.setString("14489296");
set_field(msg, MinPriceIncrement_3, Instrument_3);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_3;
  MinPriceIncrementAmount_3.setString("18189622");
set_field(msg, MinPriceIncrementAmount_3, Instrument_3);
  set_field(msg, FIX::NTPositionLimit{316234753}, Instrument_3);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_3;
  NotionalPercentageOutstanding_3.setString("2.330000");
set_field(msg, NotionalPercentageOutstanding_3, Instrument_3);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_3);
  FIX::OptPayoutAmount OptPayoutAmount_3;
  OptPayoutAmount_3.setString("7227388");
set_field(msg, OptPayoutAmount_3, Instrument_3);
  set_field(msg, FIX::OptPayoutType{2}, Instrument_3);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_3;
  OriginalNotionalPercentageOutstanding_3.setString("31.370000");
set_field(msg, OriginalNotionalPercentageOutstanding_3, Instrument_3);
  set_field(msg, FIX::Pool{"STRING_1539404416"}, Instrument_3);
  set_field(msg, FIX::PositionLimit{563951743}, Instrument_3);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_3);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1923007079"}, Instrument_3);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_3;
  PriceUnitOfMeasureQty_3.setString("20332573");
set_field(msg, PriceUnitOfMeasureQty_3, Instrument_3);
  set_field(msg, FIX::Product{2}, Instrument_3);
  set_field(msg, FIX::ProductComplex{"STRING_1718253455"}, Instrument_3);
  set_field(msg, FIX::PutOrCall{0}, Instrument_3);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1963527215"}, Instrument_3);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1382841576"}, Instrument_3);
  FIX::RepurchaseRate RepurchaseRate_3;
  RepurchaseRate_3.setString("69.480000");
set_field(msg, RepurchaseRate_3, Instrument_3);
  set_field(msg, FIX::RepurchaseTerm{1788594481}, Instrument_3);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_3);
  set_field(msg, FIX::SecurityDesc{"STRING_2135824710"}, Instrument_3);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_966352357"}, Instrument_3);
  set_field(msg, FIX::SecurityGroup{"STRING_1998917018"}, Instrument_3);
  set_field(msg, FIX::SecurityID{"STRING_2024292838"}, Instrument_3);
  set_field(msg, FIX::SecurityIDSource{"STRING_8"}, Instrument_3);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_3);
  set_field(msg, FIX::SecuritySubType{"STRING_816361302"}, Instrument_3);
  set_field(msg, FIX::SecurityType{"STRING_WAR"}, Instrument_3);
  set_field(msg, FIX::Seniority{"STRING_SR"}, Instrument_3);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_3);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1948982592"}, Instrument_3);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1119948939"}, Instrument_3);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_3);
  FIX::StrikeMultiplier StrikeMultiplier_3;
  StrikeMultiplier_3.setString("371975");
set_field(msg, StrikeMultiplier_3, Instrument_3);
  FIX::StrikePrice StrikePrice_3;
  StrikePrice_3.setString("20765236");
set_field(msg, StrikePrice_3, Instrument_3);
  set_field(msg, FIX::StrikePriceBoundaryMethod{5}, Instrument_3);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_3;
  StrikePriceBoundaryPrecision_3.setString("7.020000");
set_field(msg, StrikePriceBoundaryPrecision_3, Instrument_3);
  set_field(msg, FIX::StrikePriceDeterminationMethod{4}, Instrument_3);
  FIX::StrikeValue StrikeValue_3;
  StrikeValue_3.setString("6916195");
set_field(msg, StrikeValue_3, Instrument_3);
  set_field(msg, FIX::Symbol{"STRING_1495025971"}, Instrument_3);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_3);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_3);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_3);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_3);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_3;
  UnitOfMeasureQty_3.setString("19478774");
set_field(msg, UnitOfMeasureQty_3, Instrument_3);
  set_field(msg, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_3);
  all_values.push_back(Instrument_3);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_5;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_5);
    FIX::ComplexEventPrice ComplexEventPrice_5;
    ComplexEventPrice_5.setString("7676827");
set_field(noComplexEvents_0_0, ComplexEventPrice_5, ComplexEvents_NoComplexEvents_5);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_5);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_5;
    ComplexEventPriceBoundaryPrecision_5.setString("18.120000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_5, ComplexEvents_NoComplexEvents_5);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_5);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_5);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_5;
    ComplexOptPayoutAmount_5.setString("16641110");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_5, ComplexEvents_NoComplexEvents_5);
    all_values.push_back(ComplexEvents_NoComplexEvents_5);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_11;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 58, 39, 17, 3, 2000)}, ComplexEventDates_NoComplexEventDates_11);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 43, 57, 2, 10, 2015)}, ComplexEventDates_NoComplexEventDates_11);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_11);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_15;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 6, 43)}, ComplexEventTimes_NoComplexEventTimes_15);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 24, 43)}, ComplexEventTimes_NoComplexEventTimes_15);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_15);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_16;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 18, 35)}, ComplexEventTimes_NoComplexEventTimes_16);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 50, 21)}, ComplexEventTimes_NoComplexEventTimes_16);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_16);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_17;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 19, 7)}, ComplexEventTimes_NoComplexEventTimes_17);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 17, 26)}, ComplexEventTimes_NoComplexEventTimes_17);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_17);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_12;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 24, 52, 21, 2, 2016)}, ComplexEventDates_NoComplexEventDates_12);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 14, 37, 25, 11, 2001)}, ComplexEventDates_NoComplexEventDates_12);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_12);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_18;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 27, 1)}, ComplexEventTimes_NoComplexEventTimes_18);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 51, 33)}, ComplexEventTimes_NoComplexEventTimes_18);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_18);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_19;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 44, 18)}, ComplexEventTimes_NoComplexEventTimes_19);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 27, 18)}, ComplexEventTimes_NoComplexEventTimes_19);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_19);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_6;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_6);
    FIX::ComplexEventPrice ComplexEventPrice_6;
    ComplexEventPrice_6.setString("12188620");
set_field(noComplexEvents_0_1, ComplexEventPrice_6, ComplexEvents_NoComplexEvents_6);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_6);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_6;
    ComplexEventPriceBoundaryPrecision_6.setString("23.080000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_6, ComplexEvents_NoComplexEvents_6);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_6);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_6);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_6;
    ComplexOptPayoutAmount_6.setString("19434875");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_6, ComplexEvents_NoComplexEvents_6);
    all_values.push_back(ComplexEvents_NoComplexEvents_6);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_13;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 31, 13, 5, 10, 2015)}, ComplexEventDates_NoComplexEventDates_13);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 48, 43, 2, 4, 2009)}, ComplexEventDates_NoComplexEventDates_13);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_13);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_20;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 48, 8)}, ComplexEventTimes_NoComplexEventTimes_20);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 35, 59)}, ComplexEventTimes_NoComplexEventTimes_20);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_20);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_14;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 33, 31, 15, 9, 2015)}, ComplexEventDates_NoComplexEventDates_14);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 30, 13, 13, 8, 2002)}, ComplexEventDates_NoComplexEventDates_14);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_14);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_21;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 59, 21)}, ComplexEventTimes_NoComplexEventTimes_21);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 48, 54)}, ComplexEventTimes_NoComplexEventTimes_21);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_21);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_22;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 43, 29)}, ComplexEventTimes_NoComplexEventTimes_22);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 5, 27)}, ComplexEventTimes_NoComplexEventTimes_22);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_22);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_15;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 52, 19, 18, 2, 2014)}, ComplexEventDates_NoComplexEventDates_15);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 8, 17, 6, 4, 2013)}, ComplexEventDates_NoComplexEventDates_15);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_15);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_23;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 47, 2)}, ComplexEventTimes_NoComplexEventTimes_23);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 42, 20)}, ComplexEventTimes_NoComplexEventTimes_23);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_23);
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
    FIX50SP2::Advertisement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_9;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1334893228"}, EvntGrp_NoEvents_9);
    FIX::EventPx EventPx_9;
    EventPx_9.setString("3977851");
set_field(noEvents_0_0, EventPx_9, EvntGrp_NoEvents_9);
    set_field(noEvents_0_0, FIX::EventText{"STRING_325279208"}, EvntGrp_NoEvents_9);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(16, 13, 14, 12, 10, 2013)}, EvntGrp_NoEvents_9);
    set_field(noEvents_0_0, FIX::EventType{4}, EvntGrp_NoEvents_9);
    all_values.push_back(EvntGrp_NoEvents_9);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Advertisement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_4;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_42242112"}, InstrumentParties_NoInstrumentParties_4);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_4);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1408743639}, InstrumentParties_NoInstrumentParties_4);
    all_values.push_back(InstrumentParties_NoInstrumentParties_4);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1964204890"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1849029716}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_8);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_290467839"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{882622626}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_9);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_5;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_691050567"}, SecAltIDGrp_NoSecurityAltID_5);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1997451347"}, SecAltIDGrp_NoSecurityAltID_5);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_5);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_6;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_684030274"}, SecAltIDGrp_NoSecurityAltID_6);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_2141399175"}, SecAltIDGrp_NoSecurityAltID_6);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_6);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_6;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1749009161"}, SecurityXML_6);
  set_field(msg, FIX::SecurityXMLLen{1297539008}, SecurityXML_6);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_994291045"}, SecurityXML_6);
  all_values.push_back(SecurityXML_6);
  all_compo_names.insert("..");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Advertisement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_0;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1723703128"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1300824244}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1558367923"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{2121488243}, UnderlyingInstrument_0);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_0;
    UnderlyingAdjustedQuantity_0.setString("16261034");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_0, UnderlyingInstrument_0);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_0;
    UnderlyingAllocationPercent_0.setString("42.100000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_0, UnderlyingInstrument_0);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_0;
    UnderlyingAttachmentPoint_0.setString("95.710000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_751127958"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_719639385"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_664181848"}, UnderlyingInstrument_0);
    FIX::UnderlyingCapValue UnderlyingCapValue_0;
    UnderlyingCapValue_0.setString("8232427");
set_field(noUnderlyings_0_0, UnderlyingCapValue_0, UnderlyingInstrument_0);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_0;
    UnderlyingCashAmount_0.setString("7780237");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_0);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_0;
    UnderlyingContractMultiplier_0.setString("9999891");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{820265824}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1618645905"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_261249134"}, UnderlyingInstrument_0);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_0;
    UnderlyingCouponRate_0.setString("43.450000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1435367148"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_0);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_0;
    UnderlyingCurrentValue_0.setString("1705061");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_0, UnderlyingInstrument_0);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_0;
    UnderlyingDetachmentPoint_0.setString("49.460000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_0, UnderlyingInstrument_0);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_0;
    UnderlyingDirtyPrice_0.setString("20878727");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_0, UnderlyingInstrument_0);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_0;
    UnderlyingEndPrice_0.setString("204738");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_0, UnderlyingInstrument_0);
    FIX::UnderlyingEndValue UnderlyingEndValue_0;
    UnderlyingEndValue_0.setString("14993952");
set_field(noUnderlyings_0_0, UnderlyingEndValue_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{2081788278}, UnderlyingInstrument_0);
    FIX::UnderlyingFXRate UnderlyingFXRate_0;
    UnderlyingFXRate_0.setString("17694829");
set_field(noUnderlyings_0_0, UnderlyingFXRate_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_0);
    FIX::UnderlyingFactor UnderlyingFactor_0;
    UnderlyingFactor_0.setString("9285956");
set_field(noUnderlyings_0_0, UnderlyingFactor_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1992957681}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_225670060"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_81936271"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1403841956"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_199674655"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1708039724"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2090026166"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_53680579"}, UnderlyingInstrument_0);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_0;
    UnderlyingNotionalPercentageOutstanding_0.setString("40.340000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_0);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_0;
    UnderlyingOriginalNotionalPercentageOutstanding_0.setString("24.270000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1134926829"}, UnderlyingInstrument_0);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_0;
    UnderlyingPriceUnitOfMeasureQty_0.setString("14402056");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{698678190}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{2134915971}, UnderlyingInstrument_0);
    FIX::UnderlyingPx UnderlyingPx_0;
    UnderlyingPx_0.setString("1129877");
set_field(noUnderlyings_0_0, UnderlyingPx_0, UnderlyingInstrument_0);
    FIX::UnderlyingQty UnderlyingQty_0;
    UnderlyingQty_0.setString("1698404");
set_field(noUnderlyings_0_0, UnderlyingQty_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_248681457"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1219342136"}, UnderlyingInstrument_0);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_0;
    UnderlyingRepurchaseRate_0.setString("75.960000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{211476660}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_468680672"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1775713722"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1026841606"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_409069776"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1796187547"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_378753178"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_343374406"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1418186885"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1028203759"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_0);
    FIX::UnderlyingStartValue UnderlyingStartValue_0;
    UnderlyingStartValue_0.setString("12636609");
set_field(noUnderlyings_0_0, UnderlyingStartValue_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1253873819"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_0);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_0;
    UnderlyingStrikePrice_0.setString("14535484");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_914462429"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_462561744"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1507229054"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1226146463"}, UnderlyingInstrument_0);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_0;
    UnderlyingUnitOfMeasureQty_0.setString("11247436");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_0, UnderlyingInstrument_0);
    all_values.push_back(UnderlyingInstrument_0);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_0;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_213589644"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_417465615"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_1;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_776286023"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_201021968"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_2;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_530453407"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_2);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_946126471"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_2);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_2);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_0;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1749795543"}, UnderlyingStipulations_NoUnderlyingStips_0);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_403850419"}, UnderlyingStipulations_NoUnderlyingStips_0);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_0);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_1;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_661180085"}, UnderlyingStipulations_NoUnderlyingStips_1);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_70992568"}, UnderlyingStipulations_NoUnderlyingStips_1);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_1);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_2;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_32080493"}, UnderlyingStipulations_NoUnderlyingStips_2);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_1688021691"}, UnderlyingStipulations_NoUnderlyingStips_2);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_2);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_0;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1828268040"}, UndlyInstrumentParties_NoUndlyInstrumentParties_0);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_0);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{823436750}, UndlyInstrumentParties_NoUndlyInstrumentParties_0);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_0);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_947494981"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2095406832}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_1;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_215148547"}, UndlyInstrumentParties_NoUndlyInstrumentParties_1);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_1);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1301829538}, UndlyInstrumentParties_NoUndlyInstrumentParties_1);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_1);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1507433627"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{68808319}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1197729518"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{867179033}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
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
