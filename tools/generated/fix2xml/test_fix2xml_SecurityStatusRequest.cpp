#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityStatusRequest_0;
  set_field(msg, FIX::Currency{"USD"}, SecurityStatusRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1177880871"}, SecurityStatusRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1596654954"}, SecurityStatusRequest_0);
  set_field(msg, FIX::SecurityStatusReqID{"STRING_78777103"}, SecurityStatusRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, SecurityStatusRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, SecurityStatusRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_4"}, SecurityStatusRequest_0);
  all_values.push_back(SecurityStatusRequest_0);

  all_compo_names.insert("SecurityStatusRequest");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_134;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1433363093"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{642766379}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1728998469"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1579023129}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1956414176"}, InstrumentLeg_134);
    FIX::LegContractMultiplier LegContractMultiplier_134;
    LegContractMultiplier_134.setString("9258886");
set_field(noLegs_0_0, LegContractMultiplier_134, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{910676820}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1188162091"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1885081933"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_435723755"}, InstrumentLeg_134);
    FIX::LegCouponRate LegCouponRate_134;
    LegCouponRate_134.setString("56.800000");
set_field(noLegs_0_0, LegCouponRate_134, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1751602733"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegCurrency{"USD"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1628364460"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{2068623092}, InstrumentLeg_134);
    FIX::LegFactor LegFactor_134;
    LegFactor_134.setString("10303028");
set_field(noLegs_0_0, LegFactor_134, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{928377591}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_465730958"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1941002136"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_506312113"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_289658284"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1389629252"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_561311809"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1467539155"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_838800558"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'6'}, InstrumentLeg_134);
    FIX::LegOptionRatio LegOptionRatio_134;
    LegOptionRatio_134.setString("12702636");
set_field(noLegs_0_0, LegOptionRatio_134, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_925020416"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_2090928964"}, InstrumentLeg_134);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_134;
    LegPriceUnitOfMeasureQty_134.setString("3816678");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_134, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegProduct{210899861}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegPutOrCall{586211695}, InstrumentLeg_134);
    FIX::LegRatioQty LegRatioQty_134;
    LegRatioQty_134.setString("21106663");
set_field(noLegs_0_0, LegRatioQty_134, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1789922990"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_395142223"}, InstrumentLeg_134);
    FIX::LegRepurchaseRate LegRepurchaseRate_134;
    LegRepurchaseRate_134.setString("13.700000");
set_field(noLegs_0_0, LegRepurchaseRate_134, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{553116162}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1583304315"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_626669655"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_988839918"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1373656347"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_230788740"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1785421917"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegSide{'9'}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1859153200"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_134);
    FIX::LegStrikePrice LegStrikePrice_134;
    LegStrikePrice_134.setString("6400471");
set_field(noLegs_0_0, LegStrikePrice_134, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_24808672"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1781693316"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1146359256"}, InstrumentLeg_134);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_314466956"}, InstrumentLeg_134);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_134;
    LegUnitOfMeasureQty_134.setString("10238389");
set_field(noLegs_0_0, LegUnitOfMeasureQty_134, InstrumentLeg_134);
    all_values.push_back(InstrumentLeg_134);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_265;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1782006111"}, LegSecAltIDGrp_NoLegSecurityAltID_265);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1862639479"}, LegSecAltIDGrp_NoLegSecurityAltID_265);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_265);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_266;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_200276331"}, LegSecAltIDGrp_NoLegSecurityAltID_266);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_904786081"}, LegSecAltIDGrp_NoLegSecurityAltID_266);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_266);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_267;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_640176247"}, LegSecAltIDGrp_NoLegSecurityAltID_267);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_143721647"}, LegSecAltIDGrp_NoLegSecurityAltID_267);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_267);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_135;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1286453946"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{851076108}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_729933343"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1249636633}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_493515450"}, InstrumentLeg_135);
    FIX::LegContractMultiplier LegContractMultiplier_135;
    LegContractMultiplier_135.setString("11250755");
set_field(noLegs_0_1, LegContractMultiplier_135, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{2138708003}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1046631612"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_560896233"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_617894010"}, InstrumentLeg_135);
    FIX::LegCouponRate LegCouponRate_135;
    LegCouponRate_135.setString("15.300000");
set_field(noLegs_0_1, LegCouponRate_135, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1934552581"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegCurrency{"GBP"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_744940896"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{560352303}, InstrumentLeg_135);
    FIX::LegFactor LegFactor_135;
    LegFactor_135.setString("12324875");
set_field(noLegs_0_1, LegFactor_135, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{585632076}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1200399446"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1257296185"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_219841744"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_199275055"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1571763141"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1243680664"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1906946121"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1206285605"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'9'}, InstrumentLeg_135);
    FIX::LegOptionRatio LegOptionRatio_135;
    LegOptionRatio_135.setString("21072224");
set_field(noLegs_0_1, LegOptionRatio_135, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_2111071686"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1599012742"}, InstrumentLeg_135);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_135;
    LegPriceUnitOfMeasureQty_135.setString("1034604");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_135, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegProduct{1250041984}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegPutOrCall{302605202}, InstrumentLeg_135);
    FIX::LegRatioQty LegRatioQty_135;
    LegRatioQty_135.setString("8333937");
set_field(noLegs_0_1, LegRatioQty_135, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_352194970"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_796120652"}, InstrumentLeg_135);
    FIX::LegRepurchaseRate LegRepurchaseRate_135;
    LegRepurchaseRate_135.setString("93.610000");
set_field(noLegs_0_1, LegRepurchaseRate_135, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{343419325}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1842752265"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_371881946"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_961313336"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1730740147"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_158950879"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1809996086"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_903891776"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_135);
    FIX::LegStrikePrice LegStrikePrice_135;
    LegStrikePrice_135.setString("14895238");
set_field(noLegs_0_1, LegStrikePrice_135, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1423264188"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1598966350"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1709365596"}, InstrumentLeg_135);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1622539243"}, InstrumentLeg_135);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_135;
    LegUnitOfMeasureQty_135.setString("10232458");
set_field(noLegs_0_1, LegUnitOfMeasureQty_135, InstrumentLeg_135);
    all_values.push_back(InstrumentLeg_135);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_268;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1382001716"}, LegSecAltIDGrp_NoLegSecurityAltID_268);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_82047801"}, LegSecAltIDGrp_NoLegSecurityAltID_268);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_268);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_269;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1764399108"}, LegSecAltIDGrp_NoLegSecurityAltID_269);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1341740520"}, LegSecAltIDGrp_NoLegSecurityAltID_269);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_269);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_270;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_45635839"}, LegSecAltIDGrp_NoLegSecurityAltID_270);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_1215928202"}, LegSecAltIDGrp_NoLegSecurityAltID_270);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_270);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoLegs noLegs_0_2;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_136;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_1445200971"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{1295677823}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1518533405"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{131111118}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_1647872793"}, InstrumentLeg_136);
    FIX::LegContractMultiplier LegContractMultiplier_136;
    LegContractMultiplier_136.setString("1671704");
set_field(noLegs_0_2, LegContractMultiplier_136, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{2089580479}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_1991292119"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_2009922674"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_313978777"}, InstrumentLeg_136);
    FIX::LegCouponRate LegCouponRate_136;
    LegCouponRate_136.setString("18.070000");
set_field(noLegs_0_2, LegCouponRate_136, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1593179174"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegCurrency{"CAN"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_702361825"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{1376821433}, InstrumentLeg_136);
    FIX::LegFactor LegFactor_136;
    LegFactor_136.setString("6904989");
set_field(noLegs_0_2, LegFactor_136, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{1044031990}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_718861637"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2113763175"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_495514693"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_280743585"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1588818770"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_1518760537"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1086306197"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_823336838"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_136);
    FIX::LegOptionRatio LegOptionRatio_136;
    LegOptionRatio_136.setString("7032216");
set_field(noLegs_0_2, LegOptionRatio_136, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_17593710"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1646444177"}, InstrumentLeg_136);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_136;
    LegPriceUnitOfMeasureQty_136.setString("19191498");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_136, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegProduct{1462794681}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegPutOrCall{794638352}, InstrumentLeg_136);
    FIX::LegRatioQty LegRatioQty_136;
    LegRatioQty_136.setString("12901996");
set_field(noLegs_0_2, LegRatioQty_136, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1593905799"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_295027498"}, InstrumentLeg_136);
    FIX::LegRepurchaseRate LegRepurchaseRate_136;
    LegRepurchaseRate_136.setString("0.260000");
set_field(noLegs_0_2, LegRepurchaseRate_136, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{1536002630}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_138835969"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1319809053"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1849981408"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_943957776"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_765504579"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_175427417"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_1467866404"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_136);
    FIX::LegStrikePrice LegStrikePrice_136;
    LegStrikePrice_136.setString("3644147");
set_field(noLegs_0_2, LegStrikePrice_136, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_123626839"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_2068370535"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_859929440"}, InstrumentLeg_136);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_404370424"}, InstrumentLeg_136);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_136;
    LegUnitOfMeasureQty_136.setString("15097056");
set_field(noLegs_0_2, LegUnitOfMeasureQty_136, InstrumentLeg_136);
    all_values.push_back(InstrumentLeg_136);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_271;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1490676621"}, LegSecAltIDGrp_NoLegSecurityAltID_271);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_185558847"}, LegSecAltIDGrp_NoLegSecurityAltID_271);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_271);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_272;
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltID{"STRING_1832014667"}, LegSecAltIDGrp_NoLegSecurityAltID_272);
      set_field(noLegSecurityAltID_2_1_1, FIX::LegSecurityAltIDSource{"STRING_46414631"}, LegSecAltIDGrp_NoLegSecurityAltID_272);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_272);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_1);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_88;
  FIX::AttachmentPoint AttachmentPoint_88;
  AttachmentPoint_88.setString("25.570000");
set_field(msg, AttachmentPoint_88, Instrument_88);
  set_field(msg, FIX::CFICode{"STRING_1330975196"}, Instrument_88);
  set_field(msg, FIX::CPProgram{99}, Instrument_88);
  set_field(msg, FIX::CPRegType{"STRING_1665947239"}, Instrument_88);
  FIX::CapPrice CapPrice_88;
  CapPrice_88.setString("21256135");
set_field(msg, CapPrice_88, Instrument_88);
  FIX::ContractMultiplier ContractMultiplier_88;
  ContractMultiplier_88.setString("11082804");
set_field(msg, ContractMultiplier_88, Instrument_88);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_88);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_273157398"}, Instrument_88);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_418166838"}, Instrument_88);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_500888373"}, Instrument_88);
  FIX::CouponRate CouponRate_88;
  CouponRate_88.setString("33.670000");
set_field(msg, CouponRate_88, Instrument_88);
  set_field(msg, FIX::CreditRating{"STRING_1737975891"}, Instrument_88);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_203386133"}, Instrument_88);
  FIX::DetachmentPoint DetachmentPoint_88;
  DetachmentPoint_88.setString("11.430000");
set_field(msg, DetachmentPoint_88, Instrument_88);
  set_field(msg, FIX::EncodedIssuer{"DATA_355996822"}, Instrument_88);
  set_field(msg, FIX::EncodedIssuerLen{378813550}, Instrument_88);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_620059517"}, Instrument_88);
  set_field(msg, FIX::EncodedSecurityDescLen{1823863227}, Instrument_88);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_88);
  FIX::Factor Factor_88;
  Factor_88.setString("5746668");
set_field(msg, Factor_88, Instrument_88);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_88);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_88);
  FIX::FloorPrice FloorPrice_88;
  FloorPrice_88.setString("4955537");
set_field(msg, FloorPrice_88, Instrument_88);
  set_field(msg, FIX::FlowScheduleType{1}, Instrument_88);
  set_field(msg, FIX::InstrRegistry{"STRING_311576015"}, Instrument_88);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_88);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1131930095"}, Instrument_88);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1802252636"}, Instrument_88);
  set_field(msg, FIX::Issuer{"STRING_43334622"}, Instrument_88);
  set_field(msg, FIX::ListMethod{0}, Instrument_88);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1848667267"}, Instrument_88);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_246487179"}, Instrument_88);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_2147436310"}, Instrument_88);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1666748110"}, Instrument_88);
  FIX::MinPriceIncrement MinPriceIncrement_88;
  MinPriceIncrement_88.setString("19124344");
set_field(msg, MinPriceIncrement_88, Instrument_88);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_88;
  MinPriceIncrementAmount_88.setString("21255662");
set_field(msg, MinPriceIncrementAmount_88, Instrument_88);
  set_field(msg, FIX::NTPositionLimit{627544922}, Instrument_88);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_88;
  NotionalPercentageOutstanding_88.setString("1.610000");
set_field(msg, NotionalPercentageOutstanding_88, Instrument_88);
  set_field(msg, FIX::OptAttribute{'2'}, Instrument_88);
  FIX::OptPayoutAmount OptPayoutAmount_88;
  OptPayoutAmount_88.setString("10457117");
set_field(msg, OptPayoutAmount_88, Instrument_88);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_88);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_88;
  OriginalNotionalPercentageOutstanding_88.setString("33.280000");
set_field(msg, OriginalNotionalPercentageOutstanding_88, Instrument_88);
  set_field(msg, FIX::Pool{"STRING_636204004"}, Instrument_88);
  set_field(msg, FIX::PositionLimit{1581594667}, Instrument_88);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_88);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_992200827"}, Instrument_88);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_88;
  PriceUnitOfMeasureQty_88.setString("19604082");
set_field(msg, PriceUnitOfMeasureQty_88, Instrument_88);
  set_field(msg, FIX::Product{8}, Instrument_88);
  set_field(msg, FIX::ProductComplex{"STRING_668580406"}, Instrument_88);
  set_field(msg, FIX::PutOrCall{1}, Instrument_88);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1066427218"}, Instrument_88);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_709374732"}, Instrument_88);
  FIX::RepurchaseRate RepurchaseRate_88;
  RepurchaseRate_88.setString("25.600000");
set_field(msg, RepurchaseRate_88, Instrument_88);
  set_field(msg, FIX::RepurchaseTerm{1561980983}, Instrument_88);
  set_field(msg, FIX::RestructuringType{"STRING_MM"}, Instrument_88);
  set_field(msg, FIX::SecurityDesc{"STRING_1962768575"}, Instrument_88);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1419756758"}, Instrument_88);
  set_field(msg, FIX::SecurityGroup{"STRING_594544945"}, Instrument_88);
  set_field(msg, FIX::SecurityID{"STRING_1617537563"}, Instrument_88);
  set_field(msg, FIX::SecurityIDSource{"STRING_F"}, Instrument_88);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_88);
  set_field(msg, FIX::SecuritySubType{"STRING_1318721183"}, Instrument_88);
  set_field(msg, FIX::SecurityType{"STRING_TMCP"}, Instrument_88);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_88);
  set_field(msg, FIX::SettlMethod{'P'}, Instrument_88);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1474529330"}, Instrument_88);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1389041283"}, Instrument_88);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_88);
  FIX::StrikeMultiplier StrikeMultiplier_88;
  StrikeMultiplier_88.setString("16402812");
set_field(msg, StrikeMultiplier_88, Instrument_88);
  FIX::StrikePrice StrikePrice_88;
  StrikePrice_88.setString("3637586");
set_field(msg, StrikePrice_88, Instrument_88);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_88);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_88;
  StrikePriceBoundaryPrecision_88.setString("9.250000");
set_field(msg, StrikePriceBoundaryPrecision_88, Instrument_88);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_88);
  FIX::StrikeValue StrikeValue_88;
  StrikeValue_88.setString("10166853");
set_field(msg, StrikeValue_88, Instrument_88);
  set_field(msg, FIX::Symbol{"STRING_27731749"}, Instrument_88);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_88);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_88);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_88);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_88);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_88;
  UnitOfMeasureQty_88.setString("4261132");
set_field(msg, UnitOfMeasureQty_88, Instrument_88);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_88);
  all_values.push_back(Instrument_88);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_180;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_180);
    FIX::ComplexEventPrice ComplexEventPrice_180;
    ComplexEventPrice_180.setString("10004166");
set_field(noComplexEvents_0_0, ComplexEventPrice_180, ComplexEvents_NoComplexEvents_180);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_180);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_180;
    ComplexEventPriceBoundaryPrecision_180.setString("7.730000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_180, ComplexEvents_NoComplexEvents_180);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_180);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_180);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_180;
    ComplexOptPayoutAmount_180.setString("13626446");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_180, ComplexEvents_NoComplexEvents_180);
    all_values.push_back(ComplexEvents_NoComplexEvents_180);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_361;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 25, 29, 1, 8, 2001)}, ComplexEventDates_NoComplexEventDates_361);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 1, 30, 3, 3, 2009)}, ComplexEventDates_NoComplexEventDates_361);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_361);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_730;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 20, 45)}, ComplexEventTimes_NoComplexEventTimes_730);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 6, 5)}, ComplexEventTimes_NoComplexEventTimes_730);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_730);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_731;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 49, 41)}, ComplexEventTimes_NoComplexEventTimes_731);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 30, 30)}, ComplexEventTimes_NoComplexEventTimes_731);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_731);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_732;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 47, 17)}, ComplexEventTimes_NoComplexEventTimes_732);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 34, 43)}, ComplexEventTimes_NoComplexEventTimes_732);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_732);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_362;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 5, 17, 10, 2, 2016)}, ComplexEventDates_NoComplexEventDates_362);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 5, 47, 11, 12, 2011)}, ComplexEventDates_NoComplexEventDates_362);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_362);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_733;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 14, 13)}, ComplexEventTimes_NoComplexEventTimes_733);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 43, 53)}, ComplexEventTimes_NoComplexEventTimes_733);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_733);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_181;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_181);
    FIX::ComplexEventPrice ComplexEventPrice_181;
    ComplexEventPrice_181.setString("15228064");
set_field(noComplexEvents_0_1, ComplexEventPrice_181, ComplexEvents_NoComplexEvents_181);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_181);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_181;
    ComplexEventPriceBoundaryPrecision_181.setString("90.770000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_181, ComplexEvents_NoComplexEvents_181);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_181);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_181);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_181;
    ComplexOptPayoutAmount_181.setString("12801371");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_181, ComplexEvents_NoComplexEvents_181);
    all_values.push_back(ComplexEvents_NoComplexEvents_181);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_363;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 36, 2, 25, 2, 2010)}, ComplexEventDates_NoComplexEventDates_363);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 51, 9, 22, 8, 2006)}, ComplexEventDates_NoComplexEventDates_363);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_363);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_734;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 12, 44)}, ComplexEventTimes_NoComplexEventTimes_734);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 28, 45)}, ComplexEventTimes_NoComplexEventTimes_734);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_734);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_735;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 26, 51)}, ComplexEventTimes_NoComplexEventTimes_735);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 35, 47)}, ComplexEventTimes_NoComplexEventTimes_735);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_735);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_364;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 24, 32, 11, 6, 2001)}, ComplexEventDates_NoComplexEventDates_364);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 2, 23, 22, 2, 2017)}, ComplexEventDates_NoComplexEventDates_364);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_364);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_736;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 49, 17)}, ComplexEventTimes_NoComplexEventTimes_736);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 37, 17)}, ComplexEventTimes_NoComplexEventTimes_736);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_736);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_182;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_182);
    FIX::ComplexEventPrice ComplexEventPrice_182;
    ComplexEventPrice_182.setString("11046390");
set_field(noComplexEvents_0_2, ComplexEventPrice_182, ComplexEvents_NoComplexEvents_182);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_182);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_182;
    ComplexEventPriceBoundaryPrecision_182.setString("20.720000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_182, ComplexEvents_NoComplexEvents_182);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_182);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_182);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_182;
    ComplexOptPayoutAmount_182.setString("6878141");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_182, ComplexEvents_NoComplexEvents_182);
    all_values.push_back(ComplexEvents_NoComplexEvents_182);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_365;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 18, 23, 0, 12, 2006)}, ComplexEventDates_NoComplexEventDates_365);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 37, 20, 25, 7, 2014)}, ComplexEventDates_NoComplexEventDates_365);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_365);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_737;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 31, 12)}, ComplexEventTimes_NoComplexEventTimes_737);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 41, 49)}, ComplexEventTimes_NoComplexEventTimes_737);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_737);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_738;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 24, 42)}, ComplexEventTimes_NoComplexEventTimes_738);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 41, 47)}, ComplexEventTimes_NoComplexEventTimes_738);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_738);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_739;
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 57, 7)}, ComplexEventTimes_NoComplexEventTimes_739);
        set_field(noComplexEventTimes_2_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 42, 15)}, ComplexEventTimes_NoComplexEventTimes_739);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_739);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_366;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 36, 54, 1, 7, 2012)}, ComplexEventDates_NoComplexEventDates_366);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 7, 48, 3, 9, 2017)}, ComplexEventDates_NoComplexEventDates_366);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_366);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_740;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 53, 44)}, ComplexEventTimes_NoComplexEventTimes_740);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 17, 25)}, ComplexEventTimes_NoComplexEventTimes_740);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_740);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_741;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 23, 22)}, ComplexEventTimes_NoComplexEventTimes_741);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 56, 1)}, ComplexEventTimes_NoComplexEventTimes_741);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_741);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_367;
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 29, 10, 4, 12, 2016)}, ComplexEventDates_NoComplexEventDates_367);
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 45, 13, 17, 7, 2011)}, ComplexEventDates_NoComplexEventDates_367);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_367);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_742;
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 44, 1)}, ComplexEventTimes_NoComplexEventTimes_742);
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 18, 23)}, ComplexEventTimes_NoComplexEventTimes_742);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_742);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_743;
        set_field(noComplexEventTimes_2_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 46, 59)}, ComplexEventTimes_NoComplexEventTimes_743);
        set_field(noComplexEventTimes_2_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 55, 48)}, ComplexEventTimes_NoComplexEventTimes_743);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_743);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_744;
        set_field(noComplexEventTimes_2_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 17, 41)}, ComplexEventTimes_NoComplexEventTimes_744);
        set_field(noComplexEventTimes_2_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 19, 59)}, ComplexEventTimes_NoComplexEventTimes_744);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_744);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_2);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::SecurityStatusRequest::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_174;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1219388045"}, EvntGrp_NoEvents_174);
    FIX::EventPx EventPx_174;
    EventPx_174.setString("16055417");
set_field(noEvents_0_0, EventPx_174, EvntGrp_NoEvents_174);
    set_field(noEvents_0_0, FIX::EventText{"STRING_588496832"}, EvntGrp_NoEvents_174);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(4, 22, 51, 15, 11, 2016)}, EvntGrp_NoEvents_174);
    set_field(noEvents_0_0, FIX::EventType{14}, EvntGrp_NoEvents_174);
    all_values.push_back(EvntGrp_NoEvents_174);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::SecurityStatusRequest::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_166;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_96458463"}, InstrumentParties_NoInstrumentParties_166);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_166);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1697023918}, InstrumentParties_NoInstrumentParties_166);
    all_values.push_back(InstrumentParties_NoInstrumentParties_166);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1245101594"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1104247729}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_335);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_2126143252"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{210637040}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_336);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_953413296"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1476386913}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_337);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::SecurityStatusRequest::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_173;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1467612270"}, SecAltIDGrp_NoSecurityAltID_173);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1324175682"}, SecAltIDGrp_NoSecurityAltID_173);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_173);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_174;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1348171403"}, SecAltIDGrp_NoSecurityAltID_174);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_829377964"}, SecAltIDGrp_NoSecurityAltID_174);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_174);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_175;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_971257939"}, SecAltIDGrp_NoSecurityAltID_175);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_190563515"}, SecAltIDGrp_NoSecurityAltID_175);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_175);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_176;
  set_field(msg, FIX::SecurityXML{"XMLDATA_880820584"}, SecurityXML_176);
  set_field(msg, FIX::SecurityXMLLen{360300749}, SecurityXML_176);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1409951560"}, SecurityXML_176);
  all_values.push_back(SecurityXML_176);
  all_compo_names.insert("..");

  // InstrumentExtension
  multiset<string> InstrumentExtension_17;
  set_field(msg, FIX::DeliveryForm{2}, InstrumentExtension_17);
  FIX::PctAtRisk PctAtRisk_17;
  PctAtRisk_17.setString("75.810000");
set_field(msg, PctAtRisk_17, InstrumentExtension_17);
  all_values.push_back(InstrumentExtension_17);
  all_compo_names.insert(".");

  // AttrbGrp
  // Group AttrbGrp.NoInstrAttrib
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_0;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_33;
    set_field(noInstrAttrib_0_0, FIX::InstrAttribType{20}, AttrbGrp_NoInstrAttrib_33);
    set_field(noInstrAttrib_0_0, FIX::InstrAttribValue{"STRING_273049036"}, AttrbGrp_NoInstrAttrib_33);
    all_values.push_back(AttrbGrp_NoInstrAttrib_33);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoInstrAttrib noInstrAttrib_0_1;
    // AttrbGrp.NoInstrAttrib
    multiset<string> AttrbGrp_NoInstrAttrib_34;
    set_field(noInstrAttrib_0_1, FIX::InstrAttribType{21}, AttrbGrp_NoInstrAttrib_34);
    set_field(noInstrAttrib_0_1, FIX::InstrAttribValue{"STRING_1690017656"}, AttrbGrp_NoInstrAttrib_34);
    all_values.push_back(AttrbGrp_NoInstrAttrib_34);
    all_compo_names.insert("....NoInstrAttrib");

    msg.addGroup(noInstrAttrib_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_135;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_841475435"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{691267501}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1918575815"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{937933898}, UnderlyingInstrument_135);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_135;
    UnderlyingAdjustedQuantity_135.setString("19488048");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_135, UnderlyingInstrument_135);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_135;
    UnderlyingAllocationPercent_135.setString("60.850000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_135, UnderlyingInstrument_135);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_135;
    UnderlyingAttachmentPoint_135.setString("17.750000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1046422843"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_424880166"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_273741379"}, UnderlyingInstrument_135);
    FIX::UnderlyingCapValue UnderlyingCapValue_135;
    UnderlyingCapValue_135.setString("12570598");
set_field(noUnderlyings_0_0, UnderlyingCapValue_135, UnderlyingInstrument_135);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_135;
    UnderlyingCashAmount_135.setString("13782934");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_135);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_135;
    UnderlyingContractMultiplier_135.setString("5827325");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{698422084}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_926820327"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1930903989"}, UnderlyingInstrument_135);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_135;
    UnderlyingCouponRate_135.setString("0.490000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1898078266"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_135);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_135;
    UnderlyingCurrentValue_135.setString("1108953");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_135, UnderlyingInstrument_135);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_135;
    UnderlyingDetachmentPoint_135.setString("54.160000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_135, UnderlyingInstrument_135);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_135;
    UnderlyingDirtyPrice_135.setString("6000156");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_135, UnderlyingInstrument_135);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_135;
    UnderlyingEndPrice_135.setString("10596929");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_135, UnderlyingInstrument_135);
    FIX::UnderlyingEndValue UnderlyingEndValue_135;
    UnderlyingEndValue_135.setString("12128458");
set_field(noUnderlyings_0_0, UnderlyingEndValue_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1457553303}, UnderlyingInstrument_135);
    FIX::UnderlyingFXRate UnderlyingFXRate_135;
    UnderlyingFXRate_135.setString("13327419");
set_field(noUnderlyings_0_0, UnderlyingFXRate_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_135);
    FIX::UnderlyingFactor UnderlyingFactor_135;
    UnderlyingFactor_135.setString("10000873");
set_field(noUnderlyings_0_0, UnderlyingFactor_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1923545379}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1163541273"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1691354813"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1694637547"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_2101475171"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1492676062"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1015269984"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_249073298"}, UnderlyingInstrument_135);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_135;
    UnderlyingNotionalPercentageOutstanding_135.setString("52.580000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_135);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_135;
    UnderlyingOriginalNotionalPercentageOutstanding_135.setString("46.770000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1648675141"}, UnderlyingInstrument_135);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_135;
    UnderlyingPriceUnitOfMeasureQty_135.setString("6709599");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{125459322}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{83924079}, UnderlyingInstrument_135);
    FIX::UnderlyingPx UnderlyingPx_135;
    UnderlyingPx_135.setString("13693820");
set_field(noUnderlyings_0_0, UnderlyingPx_135, UnderlyingInstrument_135);
    FIX::UnderlyingQty UnderlyingQty_135;
    UnderlyingQty_135.setString("10522796");
set_field(noUnderlyings_0_0, UnderlyingQty_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2014828069"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_749698451"}, UnderlyingInstrument_135);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_135;
    UnderlyingRepurchaseRate_135.setString("42.670000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1988811925}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1010835436"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_913769634"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1225263694"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1610851110"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1973462583"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_290625881"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_920920765"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1158720920"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_612691719"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_135);
    FIX::UnderlyingStartValue UnderlyingStartValue_135;
    UnderlyingStartValue_135.setString("9347826");
set_field(noUnderlyings_0_0, UnderlyingStartValue_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1776232992"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_135);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_135;
    UnderlyingStrikePrice_135.setString("17302245");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_135, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_810071656"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1497206535"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1979297813"}, UnderlyingInstrument_135);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1201686914"}, UnderlyingInstrument_135);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_135;
    UnderlyingUnitOfMeasureQty_135.setString("7898730");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_135, UnderlyingInstrument_135);
    all_values.push_back(UnderlyingInstrument_135);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_280;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_702878407"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1460833004"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_280);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_281;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_480088165"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_786802487"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_281);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_275;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1532367814"}, UnderlyingStipulations_NoUnderlyingStips_275);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_654146908"}, UnderlyingStipulations_NoUnderlyingStips_275);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_275);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_276;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1432429857"}, UnderlyingStipulations_NoUnderlyingStips_276);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_187758433"}, UnderlyingStipulations_NoUnderlyingStips_276);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_276);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_285;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_295781645"}, UndlyInstrumentParties_NoUndlyInstrumentParties_285);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_285);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1720738879}, UndlyInstrumentParties_NoUndlyInstrumentParties_285);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_285);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_927507003"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2011364761}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_571);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_680069872"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{2086227923}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_572);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_476572832"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{453594300}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_573);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_136;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_873526927"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{105322177}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1918473542"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1355463478}, UnderlyingInstrument_136);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_136;
    UnderlyingAdjustedQuantity_136.setString("18355466");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_136, UnderlyingInstrument_136);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_136;
    UnderlyingAllocationPercent_136.setString("15.500000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_136, UnderlyingInstrument_136);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_136;
    UnderlyingAttachmentPoint_136.setString("63.660000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1667360858"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1782748464"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1495059404"}, UnderlyingInstrument_136);
    FIX::UnderlyingCapValue UnderlyingCapValue_136;
    UnderlyingCapValue_136.setString("20219897");
set_field(noUnderlyings_0_1, UnderlyingCapValue_136, UnderlyingInstrument_136);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_136;
    UnderlyingCashAmount_136.setString("3381432");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_136);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_136;
    UnderlyingContractMultiplier_136.setString("3545942");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1124945710}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1491140166"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1886962032"}, UnderlyingInstrument_136);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_136;
    UnderlyingCouponRate_136.setString("26.180000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_776086375"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_136);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_136;
    UnderlyingCurrentValue_136.setString("10718680");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_136, UnderlyingInstrument_136);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_136;
    UnderlyingDetachmentPoint_136.setString("48.840000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_136, UnderlyingInstrument_136);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_136;
    UnderlyingDirtyPrice_136.setString("18478230");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_136, UnderlyingInstrument_136);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_136;
    UnderlyingEndPrice_136.setString("8310171");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_136, UnderlyingInstrument_136);
    FIX::UnderlyingEndValue UnderlyingEndValue_136;
    UnderlyingEndValue_136.setString("19562718");
set_field(noUnderlyings_0_1, UnderlyingEndValue_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1711704148}, UnderlyingInstrument_136);
    FIX::UnderlyingFXRate UnderlyingFXRate_136;
    UnderlyingFXRate_136.setString("15110869");
set_field(noUnderlyings_0_1, UnderlyingFXRate_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_136);
    FIX::UnderlyingFactor UnderlyingFactor_136;
    UnderlyingFactor_136.setString("407933");
set_field(noUnderlyings_0_1, UnderlyingFactor_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1964681300}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_621059442"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_146115510"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1735671194"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1976522921"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1981662202"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_169249096"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_534225639"}, UnderlyingInstrument_136);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_136;
    UnderlyingNotionalPercentageOutstanding_136.setString("94.120000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_136);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_136;
    UnderlyingOriginalNotionalPercentageOutstanding_136.setString("50.430000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1376045465"}, UnderlyingInstrument_136);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_136;
    UnderlyingPriceUnitOfMeasureQty_136.setString("1426571");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{690210156}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1730639683}, UnderlyingInstrument_136);
    FIX::UnderlyingPx UnderlyingPx_136;
    UnderlyingPx_136.setString("12676028");
set_field(noUnderlyings_0_1, UnderlyingPx_136, UnderlyingInstrument_136);
    FIX::UnderlyingQty UnderlyingQty_136;
    UnderlyingQty_136.setString("338666");
set_field(noUnderlyings_0_1, UnderlyingQty_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1470118067"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_899211816"}, UnderlyingInstrument_136);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_136;
    UnderlyingRepurchaseRate_136.setString("30.500000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1397354884}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1026295972"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1881821070"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_278636121"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_726635360"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_565354550"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_87424360"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_290855860"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_2076441549"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1982440523"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_136);
    FIX::UnderlyingStartValue UnderlyingStartValue_136;
    UnderlyingStartValue_136.setString("18936392");
set_field(noUnderlyings_0_1, UnderlyingStartValue_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_456016318"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_136);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_136;
    UnderlyingStrikePrice_136.setString("2850555");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_136, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_311943258"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1651075843"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_819281230"}, UnderlyingInstrument_136);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1813482670"}, UnderlyingInstrument_136);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_136;
    UnderlyingUnitOfMeasureQty_136.setString("14555897");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_136, UnderlyingInstrument_136);
    all_values.push_back(UnderlyingInstrument_136);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_282;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1042044488"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1598246891"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_282);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_283;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1391292781"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_625200523"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_283);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_277;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1425159456"}, UnderlyingStipulations_NoUnderlyingStips_277);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_2095318591"}, UnderlyingStipulations_NoUnderlyingStips_277);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_277);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_286;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_87628858"}, UndlyInstrumentParties_NoUndlyInstrumentParties_286);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_286);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{496390230}, UndlyInstrumentParties_NoUndlyInstrumentParties_286);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_286);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1623825948"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1223025590}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_574);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_387320830"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1711250309}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_575);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::SecurityStatusRequest::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_137;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1513881450"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{316278732}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1546207184"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{1845530644}, UnderlyingInstrument_137);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_137;
    UnderlyingAdjustedQuantity_137.setString("624342");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_137, UnderlyingInstrument_137);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_137;
    UnderlyingAllocationPercent_137.setString("35.020000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_137, UnderlyingInstrument_137);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_137;
    UnderlyingAttachmentPoint_137.setString("16.990000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1544261033"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_139795445"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_487754957"}, UnderlyingInstrument_137);
    FIX::UnderlyingCapValue UnderlyingCapValue_137;
    UnderlyingCapValue_137.setString("10478532");
set_field(noUnderlyings_0_2, UnderlyingCapValue_137, UnderlyingInstrument_137);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_137;
    UnderlyingCashAmount_137.setString("9590766");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_137);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_137;
    UnderlyingContractMultiplier_137.setString("3559593");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{1660159301}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1195798468"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1954206227"}, UnderlyingInstrument_137);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_137;
    UnderlyingCouponRate_137.setString("84.340000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_1820998991"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_137);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_137;
    UnderlyingCurrentValue_137.setString("17688339");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_137, UnderlyingInstrument_137);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_137;
    UnderlyingDetachmentPoint_137.setString("65.730000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_137, UnderlyingInstrument_137);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_137;
    UnderlyingDirtyPrice_137.setString("2692731");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_137, UnderlyingInstrument_137);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_137;
    UnderlyingEndPrice_137.setString("9665401");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_137, UnderlyingInstrument_137);
    FIX::UnderlyingEndValue UnderlyingEndValue_137;
    UnderlyingEndValue_137.setString("4915731");
set_field(noUnderlyings_0_2, UnderlyingEndValue_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{91239381}, UnderlyingInstrument_137);
    FIX::UnderlyingFXRate UnderlyingFXRate_137;
    UnderlyingFXRate_137.setString("4428824");
set_field(noUnderlyings_0_2, UnderlyingFXRate_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_137);
    FIX::UnderlyingFactor UnderlyingFactor_137;
    UnderlyingFactor_137.setString("4785602");
set_field(noUnderlyings_0_2, UnderlyingFactor_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{6649075}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_1080996548"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_794838943"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1552856260"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_779043544"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_857273229"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1407596114"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_954855243"}, UnderlyingInstrument_137);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_137;
    UnderlyingNotionalPercentageOutstanding_137.setString("6.140000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_137);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_137;
    UnderlyingOriginalNotionalPercentageOutstanding_137.setString("2.010000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1301903842"}, UnderlyingInstrument_137);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_137;
    UnderlyingPriceUnitOfMeasureQty_137.setString("3589845");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{1596364181}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1657863178}, UnderlyingInstrument_137);
    FIX::UnderlyingPx UnderlyingPx_137;
    UnderlyingPx_137.setString("20191438");
set_field(noUnderlyings_0_2, UnderlyingPx_137, UnderlyingInstrument_137);
    FIX::UnderlyingQty UnderlyingQty_137;
    UnderlyingQty_137.setString("6446790");
set_field(noUnderlyings_0_2, UnderlyingQty_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1464585757"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_775628675"}, UnderlyingInstrument_137);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_137;
    UnderlyingRepurchaseRate_137.setString("43.440000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{1989674425}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_957272917"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_2087028279"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1984857351"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_1226546018"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_906084745"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_328946858"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_1317785399"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1348967159"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_2043545604"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_137);
    FIX::UnderlyingStartValue UnderlyingStartValue_137;
    UnderlyingStartValue_137.setString("13556162");
set_field(noUnderlyings_0_2, UnderlyingStartValue_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_977058504"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_137);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_137;
    UnderlyingStrikePrice_137.setString("17561020");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_137, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_1300974135"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_21101313"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_563473643"}, UnderlyingInstrument_137);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_1555024749"}, UnderlyingInstrument_137);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_137;
    UnderlyingUnitOfMeasureQty_137.setString("15684928");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_137, UnderlyingInstrument_137);
    all_values.push_back(UnderlyingInstrument_137);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_284;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_709444943"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1927477461"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_285;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_1454964377"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_285);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_219824474"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_285);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_285);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_286;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_1799137701"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_286);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_2099643378"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_286);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_286);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_278;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_427282728"}, UnderlyingStipulations_NoUnderlyingStips_278);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_270354075"}, UnderlyingStipulations_NoUnderlyingStips_278);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_278);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_287;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1384555646"}, UndlyInstrumentParties_NoUndlyInstrumentParties_287);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_287);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{1363974712}, UndlyInstrumentParties_NoUndlyInstrumentParties_287);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_287);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1115983451"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1692921570}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1781403415"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{317466962}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::SecurityStatusRequest::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1588983526"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1430265377}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_2);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // header
  multiset<string> header_87;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_87);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_418558382"}, header_87);
  set_header_field(msg.getHeader(), FIX::BodyLength{1873966283}, header_87);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_286588396"}, header_87);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_27176782"}, header_87);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1027456770"}, header_87);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_307689710"}, header_87);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{590650426}, header_87);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_87);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1876182583}, header_87);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_449250622"}, header_87);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1144442815"}, header_87);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1656176396"}, header_87);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(9, 10, 50, 12, 11, 2005)}, header_87);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_87);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_87);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_189143863"}, header_87);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1644285945}, header_87);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1435803192"}, header_87);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1305127314"}, header_87);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1189723868"}, header_87);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(21, 46, 9, 10, 2, 2012)}, header_87);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1434782223"}, header_87);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1076958911"}, header_87);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1106444095"}, header_87);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1742471933"}, header_87);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1667609337}, header_87);
  all_values.push_back(header_87);
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
