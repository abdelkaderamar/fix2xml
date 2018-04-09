#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/IOI.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( IOI, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::IOI msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> IOI_0;
  set_field(msg, FIX::Currency{"USD"}, IOI_0);
  set_field(msg, FIX::EncodedText{"DATA_972581594"}, IOI_0);
  set_field(msg, FIX::EncodedTextLen{1921801135}, IOI_0);
  set_field(msg, FIX::IOIID{"STRING_468190336"}, IOI_0);
  set_field(msg, FIX::IOINaturalFlag{true}, IOI_0);
  set_field(msg, FIX::IOIQltyInd{'H'}, IOI_0);
  set_field(msg, FIX::IOIQty{"STRING_L"}, IOI_0);
  set_field(msg, FIX::IOIRefID{"STRING_2001939455"}, IOI_0);
  set_field(msg, FIX::IOITransType{'N'}, IOI_0);
  FIX::Price Price_10;
  Price_10.setString("14234508");
set_field(msg, Price_10, IOI_0);
  set_field(msg, FIX::PriceType{18}, IOI_0);
  set_field(msg, FIX::QtyType{0}, IOI_0);
  set_field(msg, FIX::Side{'C'}, IOI_0);
  set_field(msg, FIX::Text{"STRING_508542030"}, IOI_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(15, 49, 36, 1, 4, 2013)}, IOI_0);
  set_field(msg, FIX::URLLink{"STRING_899976340"}, IOI_0);
  set_field(msg, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(23, 52, 2, 2, 2, 2009)}, IOI_0);
  all_values.push_back(IOI_0);

  all_compo_names.insert("IOI");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_5;
  set_field(msg, FIX::ApplID{"STRING_441803508"}, ApplicationSequenceControl_5);
  set_field(msg, FIX::ApplLastSeqNum{2068868826}, ApplicationSequenceControl_5);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_5);
  set_field(msg, FIX::ApplSeqNum{1414385102}, ApplicationSequenceControl_5);
  all_values.push_back(ApplicationSequenceControl_5);
  all_compo_names.insert(".");

  // FinancingDetails
  multiset<string> FinancingDetails_11;
  set_field(msg, FIX::AgreementCurrency{"CAN"}, FinancingDetails_11);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_2104300106"}, FinancingDetails_11);
  set_field(msg, FIX::AgreementDesc{"STRING_176107965"}, FinancingDetails_11);
  set_field(msg, FIX::AgreementID{"STRING_1224637752"}, FinancingDetails_11);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_11);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_2125107555"}, FinancingDetails_11);
  FIX::MarginRatio MarginRatio_11;
  MarginRatio_11.setString("49.480000");
set_field(msg, MarginRatio_11, FinancingDetails_11);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_514359139"}, FinancingDetails_11);
  set_field(msg, FIX::TerminationType{2}, FinancingDetails_11);
  all_values.push_back(FinancingDetails_11);
  all_compo_names.insert(".");

  // IOIQualGrp
  // Group IOIQualGrp.NoIOIQualifiers
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_0;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_0;
    set_field(noIOIQualifiers_0_0, FIX::IOIQualifier{'W'}, IOIQualGrp_NoIOIQualifiers_0);
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_0);
    all_compo_names.insert("...NoIOIQualifiers");

    msg.addGroup(noIOIQualifiers_0_0);
  }
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_1;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_1;
    set_field(noIOIQualifiers_0_1, FIX::IOIQualifier{'Q'}, IOIQualGrp_NoIOIQualifiers_1);
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_1);
    all_compo_names.insert("...NoIOIQualifiers");

    msg.addGroup(noIOIQualifiers_0_1);
  }
  // InstrmtLegIOIGrp
  // Group InstrmtLegIOIGrp.NoLegs
  {
    FIX50SP2::IOI::NoLegs noLegs_0_0;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_0;
    set_field(noLegs_0_0, FIX::LegIOIQty{"STRING_1213137459"}, InstrmtLegIOIGrp_NoLegs_0);
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_42;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_2075835261"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{159937155}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1616599974"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1920779258}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1059913495"}, InstrumentLeg_42);
    FIX::LegContractMultiplier LegContractMultiplier_42;
    LegContractMultiplier_42.setString("12333393");
set_field(noLegs_0_0, LegContractMultiplier_42, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{2039039233}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_162322660"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1957559440"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1804082960"}, InstrumentLeg_42);
    FIX::LegCouponRate LegCouponRate_42;
    LegCouponRate_42.setString("39.530000");
set_field(noLegs_0_0, LegCouponRate_42, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_338761416"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_174290473"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1512787923}, InstrumentLeg_42);
    FIX::LegFactor LegFactor_42;
    LegFactor_42.setString("1464417");
set_field(noLegs_0_0, LegFactor_42, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{478009867}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1469604381"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_322549761"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1702647619"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1280876647"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_300173668"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_55768919"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1795235786"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_534393738"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_42);
    FIX::LegOptionRatio LegOptionRatio_42;
    LegOptionRatio_42.setString("6706533");
set_field(noLegs_0_0, LegOptionRatio_42, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_2107789983"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_884172396"}, InstrumentLeg_42);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_42;
    LegPriceUnitOfMeasureQty_42.setString("18837907");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_42, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegProduct{2036141597}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1044109552}, InstrumentLeg_42);
    FIX::LegRatioQty LegRatioQty_42;
    LegRatioQty_42.setString("13529070");
set_field(noLegs_0_0, LegRatioQty_42, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1809437207"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_2104023047"}, InstrumentLeg_42);
    FIX::LegRepurchaseRate LegRepurchaseRate_42;
    LegRepurchaseRate_42.setString("27.830000");
set_field(noLegs_0_0, LegRepurchaseRate_42, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1700992793}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_118862059"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_248838576"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1357592105"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_648216013"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_587599992"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1455994925"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_761890465"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_42);
    FIX::LegStrikePrice LegStrikePrice_42;
    LegStrikePrice_42.setString("12399003");
set_field(noLegs_0_0, LegStrikePrice_42, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_143419934"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1567946702"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_795064303"}, InstrumentLeg_42);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1424296581"}, InstrumentLeg_42);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_42;
    LegUnitOfMeasureQty_42.setString("18681203");
set_field(noLegs_0_0, LegUnitOfMeasureQty_42, InstrumentLeg_42);
    all_values.push_back(InstrumentLeg_42);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_86;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1072048719"}, LegSecAltIDGrp_NoLegSecurityAltID_86);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_255030461"}, LegSecAltIDGrp_NoLegSecurityAltID_86);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_86);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_4;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_1742702028"}, LegStipulations_NoLegStipulations_4);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_215336796"}, LegStipulations_NoLegStipulations_4);
      all_values.push_back(LegStipulations_NoLegStipulations_4);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_1;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_5;
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationType{"STRING_1397592761"}, LegStipulations_NoLegStipulations_5);
      set_field(noLegStipulations_0_1_1, FIX::LegStipulationValue{"STRING_1479009147"}, LegStipulations_NoLegStipulations_5);
      all_values.push_back(LegStipulations_NoLegStipulations_5);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::IOI::NoLegs noLegs_0_1;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_1;
    set_field(noLegs_0_1, FIX::LegIOIQty{"STRING_103994745"}, InstrmtLegIOIGrp_NoLegs_1);
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_43;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_294218665"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{684432593}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_1913431953"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{250758064}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1123195376"}, InstrumentLeg_43);
    FIX::LegContractMultiplier LegContractMultiplier_43;
    LegContractMultiplier_43.setString("14669410");
set_field(noLegs_0_1, LegContractMultiplier_43, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{369620124}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1372033952"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_677049555"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1017836137"}, InstrumentLeg_43);
    FIX::LegCouponRate LegCouponRate_43;
    LegCouponRate_43.setString("39.440000");
set_field(noLegs_0_1, LegCouponRate_43, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_2133044480"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegCurrency{"GBP"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_806860033"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1214704574}, InstrumentLeg_43);
    FIX::LegFactor LegFactor_43;
    LegFactor_43.setString("18139410");
set_field(noLegs_0_1, LegFactor_43, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{950279967}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_635167629"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_461521750"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_227092900"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_355804352"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1312354972"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1299141619"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_610834813"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1825775337"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'8'}, InstrumentLeg_43);
    FIX::LegOptionRatio LegOptionRatio_43;
    LegOptionRatio_43.setString("8261716");
set_field(noLegs_0_1, LegOptionRatio_43, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1075884450"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_225885499"}, InstrumentLeg_43);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_43;
    LegPriceUnitOfMeasureQty_43.setString("9301663");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_43, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegProduct{1370103115}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegPutOrCall{910318092}, InstrumentLeg_43);
    FIX::LegRatioQty LegRatioQty_43;
    LegRatioQty_43.setString("6961146");
set_field(noLegs_0_1, LegRatioQty_43, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1620861179"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_2033513468"}, InstrumentLeg_43);
    FIX::LegRepurchaseRate LegRepurchaseRate_43;
    LegRepurchaseRate_43.setString("21.100000");
set_field(noLegs_0_1, LegRepurchaseRate_43, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1990481303}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1258063773"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_692621665"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_860833792"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1070214069"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_678182497"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_830141426"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_1485042530"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_43);
    FIX::LegStrikePrice LegStrikePrice_43;
    LegStrikePrice_43.setString("2878388");
set_field(noLegs_0_1, LegStrikePrice_43, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_532529981"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1772234028"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_514931749"}, InstrumentLeg_43);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_888334333"}, InstrumentLeg_43);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_43;
    LegUnitOfMeasureQty_43.setString("9371053");
set_field(noLegs_0_1, LegUnitOfMeasureQty_43, InstrumentLeg_43);
    all_values.push_back(InstrumentLeg_43);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_87;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1499169146"}, LegSecAltIDGrp_NoLegSecurityAltID_87);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_615397041"}, LegSecAltIDGrp_NoLegSecurityAltID_87);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_87);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_6;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_177857108"}, LegStipulations_NoLegStipulations_6);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1691281491"}, LegStipulations_NoLegStipulations_6);
      all_values.push_back(LegStipulations_NoLegStipulations_6);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  {
    FIX50SP2::IOI::NoLegs noLegs_0_2;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_2;
    set_field(noLegs_0_2, FIX::LegIOIQty{"STRING_786835219"}, InstrmtLegIOIGrp_NoLegs_2);
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_2);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_44;
    set_field(noLegs_0_2, FIX::EncodedLegIssuer{"DATA_1108023463"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::EncodedLegIssuerLen{913900958}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDesc{"DATA_1697153311"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::EncodedLegSecurityDescLen{1804138123}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegCFICode{"STRING_387278490"}, InstrumentLeg_44);
    FIX::LegContractMultiplier LegContractMultiplier_44;
    LegContractMultiplier_44.setString("15831831");
set_field(noLegs_0_2, LegContractMultiplier_44, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegContractMultiplierUnit{1819710233}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegContractSettlMonth{"MONTHYEAR_230276145"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegCountryOfIssue{"COUNTRY_693763257"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_364848250"}, InstrumentLeg_44);
    FIX::LegCouponRate LegCouponRate_44;
    LegCouponRate_44.setString("99.380000");
set_field(noLegs_0_2, LegCouponRate_44, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegCreditRating{"STRING_1763977326"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegCurrency{"JPY"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegDatedDate{"LOCALMKTDATE_1260748510"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegExerciseStyle{380589630}, InstrumentLeg_44);
    FIX::LegFactor LegFactor_44;
    LegFactor_44.setString("18186137");
set_field(noLegs_0_2, LegFactor_44, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegFlowScheduleType{423977140}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegInstrRegistry{"STRING_668428479"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_203660050"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegIssueDate{"LOCALMKTDATE_48727520"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegIssuer{"STRING_1183360229"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegLocaleOfIssue{"STRING_1091994383"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegMaturityDate{"LOCALMKTDATE_985832872"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegMaturityMonthYear{"MONTHYEAR_849949950"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegMaturityTime{"TZTIMEONLY_443679882"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_44);
    FIX::LegOptionRatio LegOptionRatio_44;
    LegOptionRatio_44.setString("14108996");
set_field(noLegs_0_2, LegOptionRatio_44, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegPool{"STRING_621536990"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegPriceUnitOfMeasure{"STRING_1145027757"}, InstrumentLeg_44);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_44;
    LegPriceUnitOfMeasureQty_44.setString("502512");
set_field(noLegs_0_2, LegPriceUnitOfMeasureQty_44, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegProduct{1729560453}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegPutOrCall{2058928716}, InstrumentLeg_44);
    FIX::LegRatioQty LegRatioQty_44;
    LegRatioQty_44.setString("17474045");
set_field(noLegs_0_2, LegRatioQty_44, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1386214928"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegRepoCollateralSecurityType{"STRING_298723558"}, InstrumentLeg_44);
    FIX::LegRepurchaseRate LegRepurchaseRate_44;
    LegRepurchaseRate_44.setString("40.370000");
set_field(noLegs_0_2, LegRepurchaseRate_44, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegRepurchaseTerm{1058441513}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegSecurityDesc{"STRING_528999703"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegSecurityExchange{"EXCHANGE_1876867294"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegSecurityID{"STRING_1423289763"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegSecurityIDSource{"STRING_1620109641"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegSecuritySubType{"STRING_1493360973"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegSecurityType{"STRING_318836862"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegSide{'1'}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegStateOrProvinceOfIssue{"STRING_606625835"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_44);
    FIX::LegStrikePrice LegStrikePrice_44;
    LegStrikePrice_44.setString("10306029");
set_field(noLegs_0_2, LegStrikePrice_44, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegSymbol{"STRING_1367854972"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegSymbolSfx{"STRING_1268667476"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegTimeUnit{"STRING_1079330495"}, InstrumentLeg_44);
    set_field(noLegs_0_2, FIX::LegUnitOfMeasure{"STRING_403731553"}, InstrumentLeg_44);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_44;
    LegUnitOfMeasureQty_44.setString("2131782");
set_field(noLegs_0_2, LegUnitOfMeasureQty_44, InstrumentLeg_44);
    all_values.push_back(InstrumentLeg_44);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_2_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_88;
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltID{"STRING_1253681503"}, LegSecAltIDGrp_NoLegSecurityAltID_88);
      set_field(noLegSecurityAltID_2_1_0, FIX::LegSecurityAltIDSource{"STRING_656858093"}, LegSecAltIDGrp_NoLegSecurityAltID_88);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_88);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_2.addGroup(noLegSecurityAltID_2_1_0);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_2_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_7;
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationType{"STRING_517097525"}, LegStipulations_NoLegStipulations_7);
      set_field(noLegStipulations_2_1_0, FIX::LegStipulationValue{"STRING_1278395083"}, LegStipulations_NoLegStipulations_7);
      all_values.push_back(LegStipulations_NoLegStipulations_7);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_2.addGroup(noLegStipulations_2_1_0);
    }
    msg.addGroup(noLegs_0_2);
  }
  // Instrument
  multiset<string> Instrument_27;
  FIX::AttachmentPoint AttachmentPoint_27;
  AttachmentPoint_27.setString("37.430000");
set_field(msg, AttachmentPoint_27, Instrument_27);
  set_field(msg, FIX::CFICode{"STRING_567348767"}, Instrument_27);
  set_field(msg, FIX::CPProgram{99}, Instrument_27);
  set_field(msg, FIX::CPRegType{"STRING_427898811"}, Instrument_27);
  FIX::CapPrice CapPrice_27;
  CapPrice_27.setString("1672696");
set_field(msg, CapPrice_27, Instrument_27);
  FIX::ContractMultiplier ContractMultiplier_27;
  ContractMultiplier_27.setString("992031");
set_field(msg, ContractMultiplier_27, Instrument_27);
  set_field(msg, FIX::ContractMultiplierUnit{1}, Instrument_27);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1350373710"}, Instrument_27);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1157644681"}, Instrument_27);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_1255622072"}, Instrument_27);
  FIX::CouponRate CouponRate_27;
  CouponRate_27.setString("73.570000");
set_field(msg, CouponRate_27, Instrument_27);
  set_field(msg, FIX::CreditRating{"STRING_433450796"}, Instrument_27);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_728248066"}, Instrument_27);
  FIX::DetachmentPoint DetachmentPoint_27;
  DetachmentPoint_27.setString("46.820000");
set_field(msg, DetachmentPoint_27, Instrument_27);
  set_field(msg, FIX::EncodedIssuer{"DATA_752287659"}, Instrument_27);
  set_field(msg, FIX::EncodedIssuerLen{2122125423}, Instrument_27);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1032260517"}, Instrument_27);
  set_field(msg, FIX::EncodedSecurityDescLen{1451714151}, Instrument_27);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_27);
  FIX::Factor Factor_27;
  Factor_27.setString("20628634");
set_field(msg, Factor_27, Instrument_27);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_27);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_27);
  FIX::FloorPrice FloorPrice_27;
  FloorPrice_27.setString("9947103");
set_field(msg, FloorPrice_27, Instrument_27);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_27);
  set_field(msg, FIX::InstrRegistry{"STRING_374011241"}, Instrument_27);
  set_field(msg, FIX::InstrmtAssignmentMethod{'9'}, Instrument_27);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_182014883"}, Instrument_27);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1030869334"}, Instrument_27);
  set_field(msg, FIX::Issuer{"STRING_283816044"}, Instrument_27);
  set_field(msg, FIX::ListMethod{1}, Instrument_27);
  set_field(msg, FIX::LocaleOfIssue{"STRING_161780770"}, Instrument_27);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_800269787"}, Instrument_27);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1266461176"}, Instrument_27);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1022252658"}, Instrument_27);
  FIX::MinPriceIncrement MinPriceIncrement_27;
  MinPriceIncrement_27.setString("12281685");
set_field(msg, MinPriceIncrement_27, Instrument_27);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_27;
  MinPriceIncrementAmount_27.setString("14337308");
set_field(msg, MinPriceIncrementAmount_27, Instrument_27);
  set_field(msg, FIX::NTPositionLimit{1121455827}, Instrument_27);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_27;
  NotionalPercentageOutstanding_27.setString("9.670000");
set_field(msg, NotionalPercentageOutstanding_27, Instrument_27);
  set_field(msg, FIX::OptAttribute{'6'}, Instrument_27);
  FIX::OptPayoutAmount OptPayoutAmount_27;
  OptPayoutAmount_27.setString("1316168");
set_field(msg, OptPayoutAmount_27, Instrument_27);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_27);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_27;
  OriginalNotionalPercentageOutstanding_27.setString("82.690000");
set_field(msg, OriginalNotionalPercentageOutstanding_27, Instrument_27);
  set_field(msg, FIX::Pool{"STRING_565067657"}, Instrument_27);
  set_field(msg, FIX::PositionLimit{1791177457}, Instrument_27);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_27);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1317355316"}, Instrument_27);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_27;
  PriceUnitOfMeasureQty_27.setString("17658192");
set_field(msg, PriceUnitOfMeasureQty_27, Instrument_27);
  set_field(msg, FIX::Product{5}, Instrument_27);
  set_field(msg, FIX::ProductComplex{"STRING_621585819"}, Instrument_27);
  set_field(msg, FIX::PutOrCall{0}, Instrument_27);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_942169664"}, Instrument_27);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1293671295"}, Instrument_27);
  FIX::RepurchaseRate RepurchaseRate_27;
  RepurchaseRate_27.setString("78.160000");
set_field(msg, RepurchaseRate_27, Instrument_27);
  set_field(msg, FIX::RepurchaseTerm{1936880003}, Instrument_27);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_27);
  set_field(msg, FIX::SecurityDesc{"STRING_1192829057"}, Instrument_27);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_701786413"}, Instrument_27);
  set_field(msg, FIX::SecurityGroup{"STRING_404019559"}, Instrument_27);
  set_field(msg, FIX::SecurityID{"STRING_76214743"}, Instrument_27);
  set_field(msg, FIX::SecurityIDSource{"STRING_G"}, Instrument_27);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_27);
  set_field(msg, FIX::SecuritySubType{"STRING_237995513"}, Instrument_27);
  set_field(msg, FIX::SecurityType{"STRING_CL"}, Instrument_27);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_27);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_27);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_866557194"}, Instrument_27);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1655840346"}, Instrument_27);
  set_field(msg, FIX::StrikeCurrency{"EUR"}, Instrument_27);
  FIX::StrikeMultiplier StrikeMultiplier_27;
  StrikeMultiplier_27.setString("1449776");
set_field(msg, StrikeMultiplier_27, Instrument_27);
  FIX::StrikePrice StrikePrice_27;
  StrikePrice_27.setString("3658372");
set_field(msg, StrikePrice_27, Instrument_27);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_27);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_27;
  StrikePriceBoundaryPrecision_27.setString("58.790000");
set_field(msg, StrikePriceBoundaryPrecision_27, Instrument_27);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_27);
  FIX::StrikeValue StrikeValue_27;
  StrikeValue_27.setString("13804877");
set_field(msg, StrikeValue_27, Instrument_27);
  set_field(msg, FIX::Symbol{"STRING_1855885182"}, Instrument_27);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_27);
  set_field(msg, FIX::TimeUnit{"STRING_Mo"}, Instrument_27);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_27);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_27);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_27;
  UnitOfMeasureQty_27.setString("16568080");
set_field(msg, UnitOfMeasureQty_27, Instrument_27);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_27);
  all_values.push_back(Instrument_27);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_50;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_50);
    FIX::ComplexEventPrice ComplexEventPrice_50;
    ComplexEventPrice_50.setString("14667573");
set_field(noComplexEvents_0_0, ComplexEventPrice_50, ComplexEvents_NoComplexEvents_50);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_50);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_50;
    ComplexEventPriceBoundaryPrecision_50.setString("13.110000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_50, ComplexEvents_NoComplexEvents_50);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_50);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_50);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_50;
    ComplexOptPayoutAmount_50.setString("15971860");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_50, ComplexEvents_NoComplexEvents_50);
    all_values.push_back(ComplexEvents_NoComplexEvents_50);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_98;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 12, 42, 16, 8, 2010)}, ComplexEventDates_NoComplexEventDates_98);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 10, 54, 21, 2, 2001)}, ComplexEventDates_NoComplexEventDates_98);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_98);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_207;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 43, 49)}, ComplexEventTimes_NoComplexEventTimes_207);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 39, 10)}, ComplexEventTimes_NoComplexEventTimes_207);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_207);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_208;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 49, 58)}, ComplexEventTimes_NoComplexEventTimes_208);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 25, 58)}, ComplexEventTimes_NoComplexEventTimes_208);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_208);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_209;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 3, 58)}, ComplexEventTimes_NoComplexEventTimes_209);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 38, 12)}, ComplexEventTimes_NoComplexEventTimes_209);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_209);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_99;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 6, 32, 21, 6, 2014)}, ComplexEventDates_NoComplexEventDates_99);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 51, 49, 20, 2, 2010)}, ComplexEventDates_NoComplexEventDates_99);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_99);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_210;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 4, 23)}, ComplexEventTimes_NoComplexEventTimes_210);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 48, 57)}, ComplexEventTimes_NoComplexEventTimes_210);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_210);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_100;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 0, 56, 10, 11, 2002)}, ComplexEventDates_NoComplexEventDates_100);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 6, 52, 4, 8, 2016)}, ComplexEventDates_NoComplexEventDates_100);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_100);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_211;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 40, 20)}, ComplexEventTimes_NoComplexEventTimes_211);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 40, 50)}, ComplexEventTimes_NoComplexEventTimes_211);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_211);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_212;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 46, 52)}, ComplexEventTimes_NoComplexEventTimes_212);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 40, 48)}, ComplexEventTimes_NoComplexEventTimes_212);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_212);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_213;
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 48, 16)}, ComplexEventTimes_NoComplexEventTimes_213);
        set_field(noComplexEventTimes_0_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 42, 41)}, ComplexEventTimes_NoComplexEventTimes_213);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_213);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::IOI::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_59;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_828283361"}, EvntGrp_NoEvents_59);
    FIX::EventPx EventPx_59;
    EventPx_59.setString("20393499");
set_field(noEvents_0_0, EventPx_59, EvntGrp_NoEvents_59);
    set_field(noEvents_0_0, FIX::EventText{"STRING_109121215"}, EvntGrp_NoEvents_59);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 51, 44, 7, 8, 2016)}, EvntGrp_NoEvents_59);
    set_field(noEvents_0_0, FIX::EventType{19}, EvntGrp_NoEvents_59);
    all_values.push_back(EvntGrp_NoEvents_59);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::IOI::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_60;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1815075816"}, EvntGrp_NoEvents_60);
    FIX::EventPx EventPx_60;
    EventPx_60.setString("10496413");
set_field(noEvents_0_1, EventPx_60, EvntGrp_NoEvents_60);
    set_field(noEvents_0_1, FIX::EventText{"STRING_826783741"}, EvntGrp_NoEvents_60);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(17, 47, 50, 12, 9, 2011)}, EvntGrp_NoEvents_60);
    set_field(noEvents_0_1, FIX::EventType{1}, EvntGrp_NoEvents_60);
    all_values.push_back(EvntGrp_NoEvents_60);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::IOI::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_61;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_404429548"}, EvntGrp_NoEvents_61);
    FIX::EventPx EventPx_61;
    EventPx_61.setString("6217068");
set_field(noEvents_0_2, EventPx_61, EvntGrp_NoEvents_61);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1245903400"}, EvntGrp_NoEvents_61);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(4, 22, 26, 9, 6, 2011)}, EvntGrp_NoEvents_61);
    set_field(noEvents_0_2, FIX::EventType{16}, EvntGrp_NoEvents_61);
    all_values.push_back(EvntGrp_NoEvents_61);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_51;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1437848172"}, InstrumentParties_NoInstrumentParties_51);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_51);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{519718395}, InstrumentParties_NoInstrumentParties_51);
    all_values.push_back(InstrumentParties_NoInstrumentParties_51);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_529509662"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{854135267}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_103);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_870774352"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{306897073}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_104);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_521727435"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{1920415717}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_105);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_56;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_636407533"}, SecAltIDGrp_NoSecurityAltID_56);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1229615639"}, SecAltIDGrp_NoSecurityAltID_56);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_56);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_57;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_360496313"}, SecAltIDGrp_NoSecurityAltID_57);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1382169424"}, SecAltIDGrp_NoSecurityAltID_57);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_57);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_58;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_1742189111"}, SecAltIDGrp_NoSecurityAltID_58);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1241188982"}, SecAltIDGrp_NoSecurityAltID_58);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_58);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_54;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1462790607"}, SecurityXML_54);
  set_field(msg, FIX::SecurityXMLLen{1466989144}, SecurityXML_54);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1645618530"}, SecurityXML_54);
  all_values.push_back(SecurityXML_54);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_9;
  FIX::CashOrderQty CashOrderQty_9;
  CashOrderQty_9.setString("20844974");
set_field(msg, CashOrderQty_9, OrderQtyData_9);
  FIX::OrderPercent OrderPercent_9;
  OrderPercent_9.setString("88.960000");
set_field(msg, OrderPercent_9, OrderQtyData_9);
  FIX::OrderQty OrderQty_18;
  OrderQty_18.setString("1744419");
set_field(msg, OrderQty_18, OrderQtyData_9);
  set_field(msg, FIX::RoundingDirection{'0'}, OrderQtyData_9);
  FIX::RoundingModulus RoundingModulus_9;
  RoundingModulus_9.setString("7155064");
set_field(msg, RoundingModulus_9, OrderQtyData_9);
  all_values.push_back(OrderQtyData_9);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_49;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_292927185"}, Parties_NoPartyIDs_49);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_49);
    set_field(noPartyIDs_0_0, FIX::PartyRole{70}, Parties_NoPartyIDs_49);
    all_values.push_back(Parties_NoPartyIDs_49);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_109;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1103668012"}, PtysSubGrp_NoPartySubIDs_109);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_109);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_109);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_50;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_285844700"}, Parties_NoPartyIDs_50);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_50);
    set_field(noPartyIDs_0_1, FIX::PartyRole{26}, Parties_NoPartyIDs_50);
    all_values.push_back(Parties_NoPartyIDs_50);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_110;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_330038026"}, PtysSubGrp_NoPartySubIDs_110);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_110);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_110);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_111;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1122251435"}, PtysSubGrp_NoPartySubIDs_111);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_111);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_111);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_51;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1937605486"}, Parties_NoPartyIDs_51);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'1'}, Parties_NoPartyIDs_51);
    set_field(noPartyIDs_0_2, FIX::PartyRole{16}, Parties_NoPartyIDs_51);
    all_values.push_back(Parties_NoPartyIDs_51);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_112;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_468944915"}, PtysSubGrp_NoPartySubIDs_112);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{9}, PtysSubGrp_NoPartySubIDs_112);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_112);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_113;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_614442940"}, PtysSubGrp_NoPartySubIDs_113);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{11}, PtysSubGrp_NoPartySubIDs_113);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_113);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::IOI::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_2;
    set_field(noRoutingIDs_0_0, FIX::RoutingID{"STRING_2081432084"}, RoutingGrp_NoRoutingIDs_2);
    set_field(noRoutingIDs_0_0, FIX::RoutingType{4}, RoutingGrp_NoRoutingIDs_2);
    all_values.push_back(RoutingGrp_NoRoutingIDs_2);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_11;
  set_field(msg, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_LIBOR"}, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_1436639781"}, SpreadOrBenchmarkCurveData_11);
  FIX::BenchmarkPrice BenchmarkPrice_11;
  BenchmarkPrice_11.setString("12148637");
set_field(msg, BenchmarkPrice_11, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkPriceType{1017480389}, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_1729566966"}, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_2069890360"}, SpreadOrBenchmarkCurveData_11);
  FIX::Spread Spread_11;
  Spread_11.setString("9408610");
set_field(msg, Spread_11, SpreadOrBenchmarkCurveData_11);
  all_values.push_back(SpreadOrBenchmarkCurveData_11);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_27;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_COUPON"}, Stipulations_NoStipulations_27);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_154606281"}, Stipulations_NoStipulations_27);
    all_values.push_back(Stipulations_NoStipulations_27);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_28;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_BROKERCREDIT"}, Stipulations_NoStipulations_28);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_501977483"}, Stipulations_NoStipulations_28);
    all_values.push_back(Stipulations_NoStipulations_28);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_2;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_29;
    set_field(noStipulations_0_2, FIX::StipulationType{"STRING_PRIMARY"}, Stipulations_NoStipulations_29);
    set_field(noStipulations_0_2, FIX::StipulationValue{"STRING_1847026421"}, Stipulations_NoStipulations_29);
    all_values.push_back(Stipulations_NoStipulations_29);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_36;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1465695114"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{821794209}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1683780972"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1255816952}, UnderlyingInstrument_36);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_36;
    UnderlyingAdjustedQuantity_36.setString("9302428");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_36, UnderlyingInstrument_36);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_36;
    UnderlyingAllocationPercent_36.setString("3.190000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_36, UnderlyingInstrument_36);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_36;
    UnderlyingAttachmentPoint_36.setString("7.810000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1399187725"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1747329091"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_742513721"}, UnderlyingInstrument_36);
    FIX::UnderlyingCapValue UnderlyingCapValue_36;
    UnderlyingCapValue_36.setString("9618379");
set_field(noUnderlyings_0_0, UnderlyingCapValue_36, UnderlyingInstrument_36);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_36;
    UnderlyingCashAmount_36.setString("17854948");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_36);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_36;
    UnderlyingContractMultiplier_36.setString("226231");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1760674339}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1175819491"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1405333850"}, UnderlyingInstrument_36);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_36;
    UnderlyingCouponRate_36.setString("4.730000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_243199595"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_36);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_36;
    UnderlyingCurrentValue_36.setString("1656063");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_36, UnderlyingInstrument_36);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_36;
    UnderlyingDetachmentPoint_36.setString("16.650000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_36, UnderlyingInstrument_36);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_36;
    UnderlyingDirtyPrice_36.setString("13777411");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_36, UnderlyingInstrument_36);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_36;
    UnderlyingEndPrice_36.setString("11916810");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_36, UnderlyingInstrument_36);
    FIX::UnderlyingEndValue UnderlyingEndValue_36;
    UnderlyingEndValue_36.setString("13707979");
set_field(noUnderlyings_0_0, UnderlyingEndValue_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{261929561}, UnderlyingInstrument_36);
    FIX::UnderlyingFXRate UnderlyingFXRate_36;
    UnderlyingFXRate_36.setString("16936585");
set_field(noUnderlyings_0_0, UnderlyingFXRate_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_36);
    FIX::UnderlyingFactor UnderlyingFactor_36;
    UnderlyingFactor_36.setString("21089559");
set_field(noUnderlyings_0_0, UnderlyingFactor_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{378190376}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_2137514758"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_783266544"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_2061971348"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1245848062"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1713509354"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_938958020"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1373918843"}, UnderlyingInstrument_36);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_36;
    UnderlyingNotionalPercentageOutstanding_36.setString("34.320000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_36);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_36;
    UnderlyingOriginalNotionalPercentageOutstanding_36.setString("25.650000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1927051406"}, UnderlyingInstrument_36);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_36;
    UnderlyingPriceUnitOfMeasureQty_36.setString("1768146");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{645411075}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1949674512}, UnderlyingInstrument_36);
    FIX::UnderlyingPx UnderlyingPx_36;
    UnderlyingPx_36.setString("19374889");
set_field(noUnderlyings_0_0, UnderlyingPx_36, UnderlyingInstrument_36);
    FIX::UnderlyingQty UnderlyingQty_36;
    UnderlyingQty_36.setString("18212305");
set_field(noUnderlyings_0_0, UnderlyingQty_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1207524714"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_839835801"}, UnderlyingInstrument_36);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_36;
    UnderlyingRepurchaseRate_36.setString("1.610000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1482855306}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1471749592"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_82552820"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_551563324"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_702007095"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1274233851"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1922361271"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_963936656"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_820408717"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_446697267"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_36);
    FIX::UnderlyingStartValue UnderlyingStartValue_36;
    UnderlyingStartValue_36.setString("11985990");
set_field(noUnderlyings_0_0, UnderlyingStartValue_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_436728378"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_36);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_36;
    UnderlyingStrikePrice_36.setString("16825764");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_36, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1274701242"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_2052044814"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_909011636"}, UnderlyingInstrument_36);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_92431026"}, UnderlyingInstrument_36);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_36;
    UnderlyingUnitOfMeasureQty_36.setString("4433646");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_36, UnderlyingInstrument_36);
    all_values.push_back(UnderlyingInstrument_36);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_72;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_2019482432"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_620179266"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_73;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1523371628"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1821673296"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_74;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_410184594"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1197118546"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_74);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_66;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1250020395"}, UnderlyingStipulations_NoUnderlyingStips_66);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1114065059"}, UnderlyingStipulations_NoUnderlyingStips_66);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_66);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_67;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_217086021"}, UnderlyingStipulations_NoUnderlyingStips_67);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_574286339"}, UnderlyingStipulations_NoUnderlyingStips_67);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_67);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_68;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_1196617879"}, UnderlyingStipulations_NoUnderlyingStips_68);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_768649345"}, UnderlyingStipulations_NoUnderlyingStips_68);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_68);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_78;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_323368082"}, UndlyInstrumentParties_NoUndlyInstrumentParties_78);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_78);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{92746443}, UndlyInstrumentParties_NoUndlyInstrumentParties_78);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_78);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_990224236"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1018155434}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_147);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_79;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_194892245"}, UndlyInstrumentParties_NoUndlyInstrumentParties_79);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_79);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{579347322}, UndlyInstrumentParties_NoUndlyInstrumentParties_79);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_79);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_962045406"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1854048564}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_148);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1212540206"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1871057042}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_149);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_80;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1946479590"}, UndlyInstrumentParties_NoUndlyInstrumentParties_80);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_80);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{601533947}, UndlyInstrumentParties_NoUndlyInstrumentParties_80);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_80);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_128600454"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{2124905575}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_150);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_37;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1492668023"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{538785048}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1174540473"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{226898738}, UnderlyingInstrument_37);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_37;
    UnderlyingAdjustedQuantity_37.setString("17888054");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_37, UnderlyingInstrument_37);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_37;
    UnderlyingAllocationPercent_37.setString("18.840000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_37, UnderlyingInstrument_37);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_37;
    UnderlyingAttachmentPoint_37.setString("47.590000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_215608134"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_1337739763"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1212634105"}, UnderlyingInstrument_37);
    FIX::UnderlyingCapValue UnderlyingCapValue_37;
    UnderlyingCapValue_37.setString("14919015");
set_field(noUnderlyings_0_1, UnderlyingCapValue_37, UnderlyingInstrument_37);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_37;
    UnderlyingCashAmount_37.setString("16611078");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_37);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_37;
    UnderlyingContractMultiplier_37.setString("15846480");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{657400997}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_598901661"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_455319798"}, UnderlyingInstrument_37);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_37;
    UnderlyingCouponRate_37.setString("32.420000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_2025854275"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_37);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_37;
    UnderlyingCurrentValue_37.setString("8404160");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_37, UnderlyingInstrument_37);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_37;
    UnderlyingDetachmentPoint_37.setString("20.360000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_37, UnderlyingInstrument_37);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_37;
    UnderlyingDirtyPrice_37.setString("12253288");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_37, UnderlyingInstrument_37);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_37;
    UnderlyingEndPrice_37.setString("5639894");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_37, UnderlyingInstrument_37);
    FIX::UnderlyingEndValue UnderlyingEndValue_37;
    UnderlyingEndValue_37.setString("5402279");
set_field(noUnderlyings_0_1, UnderlyingEndValue_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{733750029}, UnderlyingInstrument_37);
    FIX::UnderlyingFXRate UnderlyingFXRate_37;
    UnderlyingFXRate_37.setString("11655233");
set_field(noUnderlyings_0_1, UnderlyingFXRate_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_37);
    FIX::UnderlyingFactor UnderlyingFactor_37;
    UnderlyingFactor_37.setString("8623504");
set_field(noUnderlyings_0_1, UnderlyingFactor_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1142945303}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1703890728"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1401135531"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_170002129"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1930789466"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1042457326"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_311124013"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_227290577"}, UnderlyingInstrument_37);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_37;
    UnderlyingNotionalPercentageOutstanding_37.setString("54.600000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_37);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_37;
    UnderlyingOriginalNotionalPercentageOutstanding_37.setString("46.820000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_602483381"}, UnderlyingInstrument_37);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_37;
    UnderlyingPriceUnitOfMeasureQty_37.setString("11624879");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1048602108}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{39647745}, UnderlyingInstrument_37);
    FIX::UnderlyingPx UnderlyingPx_37;
    UnderlyingPx_37.setString("18198889");
set_field(noUnderlyings_0_1, UnderlyingPx_37, UnderlyingInstrument_37);
    FIX::UnderlyingQty UnderlyingQty_37;
    UnderlyingQty_37.setString("16475037");
set_field(noUnderlyings_0_1, UnderlyingQty_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_494967544"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_524698566"}, UnderlyingInstrument_37);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_37;
    UnderlyingRepurchaseRate_37.setString("43.970000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1529634664}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_537487200"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_218806783"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_123383053"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1762816041"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_782796211"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_663611031"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_349082422"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_1948319587"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_874833736"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_37);
    FIX::UnderlyingStartValue UnderlyingStartValue_37;
    UnderlyingStartValue_37.setString("9437812");
set_field(noUnderlyings_0_1, UnderlyingStartValue_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_431240816"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_37);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_37;
    UnderlyingStrikePrice_37.setString("2145466");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_37, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1507542114"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1424907385"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_441837212"}, UnderlyingInstrument_37);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_618123927"}, UnderlyingInstrument_37);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_37;
    UnderlyingUnitOfMeasureQty_37.setString("9262875");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_37, UnderlyingInstrument_37);
    all_values.push_back(UnderlyingInstrument_37);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_75;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1220607308"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2088775489"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_75);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_76;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_782880354"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1260255054"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_76);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_77;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1761180812"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_282900476"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_77);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_69;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_138395730"}, UnderlyingStipulations_NoUnderlyingStips_69);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1808774873"}, UnderlyingStipulations_NoUnderlyingStips_69);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_69);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_70;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1137373614"}, UnderlyingStipulations_NoUnderlyingStips_70);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_675882931"}, UnderlyingStipulations_NoUnderlyingStips_70);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_70);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_81;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1260756667"}, UndlyInstrumentParties_NoUndlyInstrumentParties_81);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_81);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{662894219}, UndlyInstrumentParties_NoUndlyInstrumentParties_81);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_81);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_640297747"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{463730159}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_151);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_651717787"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1851730652}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_152);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1407511402"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1082958604}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_153);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // YieldData
  multiset<string> YieldData_6;
  FIX::Yield Yield_6;
  Yield_6.setString("17.930000");
set_field(msg, Yield_6, YieldData_6);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_373811126"}, YieldData_6);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1297505238"}, YieldData_6);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_6;
  YieldRedemptionPrice_6.setString("16768739");
set_field(msg, YieldRedemptionPrice_6, YieldData_6);
  set_field(msg, FIX::YieldRedemptionPriceType{1798718511}, YieldData_6);
  set_field(msg, FIX::YieldType{"STRING_TENDER"}, YieldData_6);
  all_values.push_back(YieldData_6);
  all_compo_names.insert(".");

  // header
  multiset<string> header_33;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_6"}, header_33);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_577522378"}, header_33);
  set_header_field(msg.getHeader(), FIX::BodyLength{1473620697}, header_33);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1368121495"}, header_33);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_518814219"}, header_33);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_109017403"}, header_33);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_480892901"}, header_33);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{132511383}, header_33);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_33);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{88631851}, header_33);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_270907114"}, header_33);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_53209104"}, header_33);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1226005465"}, header_33);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(0, 25, 49, 20, 5, 2002)}, header_33);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_33);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_33);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1582550121"}, header_33);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{319959245}, header_33);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1850838927"}, header_33);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1751881914"}, header_33);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_693770371"}, header_33);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(13, 14, 20, 8, 1, 2011)}, header_33);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_649424207"}, header_33);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1441341831"}, header_33);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_27873773"}, header_33);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1130317108"}, header_33);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1573853215}, header_33);
  all_values.push_back(header_33);
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
