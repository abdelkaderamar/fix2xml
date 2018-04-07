#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::IOI msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> IOI_0;
  set_field(msg, FIX::Currency{"CAN"}, IOI_0);
  set_field(msg, FIX::EncodedText{"DATA_1683736826"}, IOI_0);
  set_field(msg, FIX::EncodedTextLen{592762751}, IOI_0);
  set_field(msg, FIX::IOIID{"STRING_1404709071"}, IOI_0);
  set_field(msg, FIX::IOINaturalFlag{false}, IOI_0);
  set_field(msg, FIX::IOIQltyInd{'H'}, IOI_0);
  set_field(msg, FIX::IOIQty{"STRING_U"}, IOI_0);
  set_field(msg, FIX::IOIRefID{"STRING_29823694"}, IOI_0);
  set_field(msg, FIX::IOITransType{'C'}, IOI_0);
  FIX::Price Price_10;
  Price_10.setString("11572355");
set_field(msg, Price_10, IOI_0);
  set_field(msg, FIX::PriceType{4}, IOI_0);
  set_field(msg, FIX::QtyType{1}, IOI_0);
  set_field(msg, FIX::Side{'1'}, IOI_0);
  set_field(msg, FIX::Text{"STRING_144715528"}, IOI_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(6, 21, 16, 19, 2, 2010)}, IOI_0);
  set_field(msg, FIX::URLLink{"STRING_791775038"}, IOI_0);
  set_field(msg, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(19, 58, 43, 12, 8, 2004)}, IOI_0);
  all_values.push_back(IOI_0);

  all_compo_names.insert("IOI");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_5;
  set_field(msg, FIX::ApplID{"STRING_651873656"}, ApplicationSequenceControl_5);
  set_field(msg, FIX::ApplLastSeqNum{801904773}, ApplicationSequenceControl_5);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_5);
  set_field(msg, FIX::ApplSeqNum{188126834}, ApplicationSequenceControl_5);
  all_values.push_back(ApplicationSequenceControl_5);
  all_compo_names.insert(".");

  // FinancingDetails
  multiset<string> FinancingDetails_11;
  set_field(msg, FIX::AgreementCurrency{"GBP"}, FinancingDetails_11);
  set_field(msg, FIX::AgreementDate{"LOCALMKTDATE_489030907"}, FinancingDetails_11);
  set_field(msg, FIX::AgreementDesc{"STRING_1366054864"}, FinancingDetails_11);
  set_field(msg, FIX::AgreementID{"STRING_1454493021"}, FinancingDetails_11);
  set_field(msg, FIX::DeliveryType{1}, FinancingDetails_11);
  set_field(msg, FIX::EndDate{"LOCALMKTDATE_530605791"}, FinancingDetails_11);
  FIX::MarginRatio MarginRatio_11;
  MarginRatio_11.setString("48.890000");
set_field(msg, MarginRatio_11, FinancingDetails_11);
  set_field(msg, FIX::StartDate{"LOCALMKTDATE_1469672060"}, FinancingDetails_11);
  set_field(msg, FIX::TerminationType{3}, FinancingDetails_11);
  all_values.push_back(FinancingDetails_11);
  all_compo_names.insert(".");

  // IOIQualGrp
  // Group IOIQualGrp.NoIOIQualifiers
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_0;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_0;
    set_field(noIOIQualifiers_0_0, FIX::IOIQualifier{'O'}, IOIQualGrp_NoIOIQualifiers_0);
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_0);
    all_compo_names.insert("...NoIOIQualifiers");

    msg.addGroup(noIOIQualifiers_0_0);
  }
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_1;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_1;
    set_field(noIOIQualifiers_0_1, FIX::IOIQualifier{'Y'}, IOIQualGrp_NoIOIQualifiers_1);
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_1);
    all_compo_names.insert("...NoIOIQualifiers");

    msg.addGroup(noIOIQualifiers_0_1);
  }
  {
    FIX50SP2::IOI::NoIOIQualifiers noIOIQualifiers_0_2;
    // IOIQualGrp.NoIOIQualifiers
    multiset<string> IOIQualGrp_NoIOIQualifiers_2;
    set_field(noIOIQualifiers_0_2, FIX::IOIQualifier{'W'}, IOIQualGrp_NoIOIQualifiers_2);
    all_values.push_back(IOIQualGrp_NoIOIQualifiers_2);
    all_compo_names.insert("...NoIOIQualifiers");

    msg.addGroup(noIOIQualifiers_0_2);
  }
  // InstrmtLegIOIGrp
  // Group InstrmtLegIOIGrp.NoLegs
  {
    FIX50SP2::IOI::NoLegs noLegs_0_0;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_0;
    set_field(noLegs_0_0, FIX::LegIOIQty{"STRING_1861166156"}, InstrmtLegIOIGrp_NoLegs_0);
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_0);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_40;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1280113483"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1923634895}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_2099435083"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{2071888521}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1860332909"}, InstrumentLeg_40);
    FIX::LegContractMultiplier LegContractMultiplier_40;
    LegContractMultiplier_40.setString("5649812");
set_field(noLegs_0_0, LegContractMultiplier_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1067453111}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1631817364"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_2015088290"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_384054514"}, InstrumentLeg_40);
    FIX::LegCouponRate LegCouponRate_40;
    LegCouponRate_40.setString("76.440000");
set_field(noLegs_0_0, LegCouponRate_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_519478298"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_707605132"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{433143165}, InstrumentLeg_40);
    FIX::LegFactor LegFactor_40;
    LegFactor_40.setString("144899");
set_field(noLegs_0_0, LegFactor_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1196636039}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1799198029"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1468983014"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1715490640"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_182320173"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1933227903"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1037679053"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2107363031"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_202064505"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'5'}, InstrumentLeg_40);
    FIX::LegOptionRatio LegOptionRatio_40;
    LegOptionRatio_40.setString("10512213");
set_field(noLegs_0_0, LegOptionRatio_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_948668321"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_107165796"}, InstrumentLeg_40);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_40;
    LegPriceUnitOfMeasureQty_40.setString("7649038");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegProduct{81298156}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegPutOrCall{2030800691}, InstrumentLeg_40);
    FIX::LegRatioQty LegRatioQty_40;
    LegRatioQty_40.setString("7168552");
set_field(noLegs_0_0, LegRatioQty_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_5703029"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1743649952"}, InstrumentLeg_40);
    FIX::LegRepurchaseRate LegRepurchaseRate_40;
    LegRepurchaseRate_40.setString("65.560000");
set_field(noLegs_0_0, LegRepurchaseRate_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1073156141}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1227983668"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1149441198"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1457210655"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_612877664"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1668919496"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_495686295"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_229040980"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_40);
    FIX::LegStrikePrice LegStrikePrice_40;
    LegStrikePrice_40.setString("14256770");
set_field(noLegs_0_0, LegStrikePrice_40, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_580543842"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1093688130"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_993684012"}, InstrumentLeg_40);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_762864015"}, InstrumentLeg_40);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_40;
    LegUnitOfMeasureQty_40.setString("8794323");
set_field(noLegs_0_0, LegUnitOfMeasureQty_40, InstrumentLeg_40);
    all_values.push_back(InstrumentLeg_40);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_84;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_722743398"}, LegSecAltIDGrp_NoLegSecurityAltID_84);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1081496891"}, LegSecAltIDGrp_NoLegSecurityAltID_84);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_84);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_85;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_388462411"}, LegSecAltIDGrp_NoLegSecurityAltID_85);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_1773964741"}, LegSecAltIDGrp_NoLegSecurityAltID_85);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_85);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_86;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_2030165212"}, LegSecAltIDGrp_NoLegSecurityAltID_86);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_495628207"}, LegSecAltIDGrp_NoLegSecurityAltID_86);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_86);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_0_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_2;
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationType{"STRING_2111463369"}, LegStipulations_NoLegStipulations_2);
      set_field(noLegStipulations_0_1_0, FIX::LegStipulationValue{"STRING_378945250"}, LegStipulations_NoLegStipulations_2);
      all_values.push_back(LegStipulations_NoLegStipulations_2);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_0.addGroup(noLegStipulations_0_1_0);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::IOI::NoLegs noLegs_0_1;
    // InstrmtLegIOIGrp.NoLegs
    multiset<string> InstrmtLegIOIGrp_NoLegs_1;
    set_field(noLegs_0_1, FIX::LegIOIQty{"STRING_1108240231"}, InstrmtLegIOIGrp_NoLegs_1);
    all_values.push_back(InstrmtLegIOIGrp_NoLegs_1);
    all_compo_names.insert("...NoLegs");

    // InstrumentLeg
    multiset<string> InstrumentLeg_41;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_2117166398"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{2122595202}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_242593139"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1042838891}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1203095222"}, InstrumentLeg_41);
    FIX::LegContractMultiplier LegContractMultiplier_41;
    LegContractMultiplier_41.setString("13920343");
set_field(noLegs_0_1, LegContractMultiplier_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{352565899}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1815972886"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_913470186"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_848252194"}, InstrumentLeg_41);
    FIX::LegCouponRate LegCouponRate_41;
    LegCouponRate_41.setString("80.090000");
set_field(noLegs_0_1, LegCouponRate_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1142511167"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_420704538"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{210141849}, InstrumentLeg_41);
    FIX::LegFactor LegFactor_41;
    LegFactor_41.setString("21445812");
set_field(noLegs_0_1, LegFactor_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1414388550}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_973005864"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_876529992"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1298267967"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1695749262"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1958026883"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1686730378"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1322230355"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1840708448"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'3'}, InstrumentLeg_41);
    FIX::LegOptionRatio LegOptionRatio_41;
    LegOptionRatio_41.setString("17136152");
set_field(noLegs_0_1, LegOptionRatio_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1804688169"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_413820187"}, InstrumentLeg_41);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_41;
    LegPriceUnitOfMeasureQty_41.setString("6743718");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegProduct{1774370919}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegPutOrCall{388931741}, InstrumentLeg_41);
    FIX::LegRatioQty LegRatioQty_41;
    LegRatioQty_41.setString("9169650");
set_field(noLegs_0_1, LegRatioQty_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_669726163"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_1592026963"}, InstrumentLeg_41);
    FIX::LegRepurchaseRate LegRepurchaseRate_41;
    LegRepurchaseRate_41.setString("57.120000");
set_field(noLegs_0_1, LegRepurchaseRate_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1022292062}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1260516201"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1074985898"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1870544256"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_539220562"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_70013417"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1500142263"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_490717956"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_41);
    FIX::LegStrikePrice LegStrikePrice_41;
    LegStrikePrice_41.setString("19051065");
set_field(noLegs_0_1, LegStrikePrice_41, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_535806328"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_316257639"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1055890826"}, InstrumentLeg_41);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_84071942"}, InstrumentLeg_41);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_41;
    LegUnitOfMeasureQty_41.setString("1268008");
set_field(noLegs_0_1, LegUnitOfMeasureQty_41, InstrumentLeg_41);
    all_values.push_back(InstrumentLeg_41);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_87;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1406302297"}, LegSecAltIDGrp_NoLegSecurityAltID_87);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1967509322"}, LegSecAltIDGrp_NoLegSecurityAltID_87);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_87);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::IOI::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_88;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_630012494"}, LegSecAltIDGrp_NoLegSecurityAltID_88);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_972433949"}, LegSecAltIDGrp_NoLegSecurityAltID_88);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_88);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    // LegStipulations
    // Group LegStipulations.NoLegStipulations
    {
      FIX50SP2::IOI::NoLegs::NoLegStipulations noLegStipulations_1_1_0;
      // LegStipulations.NoLegStipulations
      multiset<string> LegStipulations_NoLegStipulations_3;
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationType{"STRING_1043832681"}, LegStipulations_NoLegStipulations_3);
      set_field(noLegStipulations_1_1_0, FIX::LegStipulationValue{"STRING_1646805831"}, LegStipulations_NoLegStipulations_3);
      all_values.push_back(LegStipulations_NoLegStipulations_3);
      all_compo_names.insert("...NoLegs...NoLegStipulations");

      noLegs_0_1.addGroup(noLegStipulations_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_26;
  FIX::AttachmentPoint AttachmentPoint_26;
  AttachmentPoint_26.setString("11.150000");
set_field(msg, AttachmentPoint_26, Instrument_26);
  set_field(msg, FIX::CFICode{"STRING_1432764423"}, Instrument_26);
  set_field(msg, FIX::CPProgram{99}, Instrument_26);
  set_field(msg, FIX::CPRegType{"STRING_1921327278"}, Instrument_26);
  FIX::CapPrice CapPrice_26;
  CapPrice_26.setString("8773077");
set_field(msg, CapPrice_26, Instrument_26);
  FIX::ContractMultiplier ContractMultiplier_26;
  ContractMultiplier_26.setString("5778029");
set_field(msg, ContractMultiplier_26, Instrument_26);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_26);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_2137823940"}, Instrument_26);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1652788816"}, Instrument_26);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_519196300"}, Instrument_26);
  FIX::CouponRate CouponRate_26;
  CouponRate_26.setString("8.540000");
set_field(msg, CouponRate_26, Instrument_26);
  set_field(msg, FIX::CreditRating{"STRING_1722802233"}, Instrument_26);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_2019338564"}, Instrument_26);
  FIX::DetachmentPoint DetachmentPoint_26;
  DetachmentPoint_26.setString("45.420000");
set_field(msg, DetachmentPoint_26, Instrument_26);
  set_field(msg, FIX::EncodedIssuer{"DATA_66036541"}, Instrument_26);
  set_field(msg, FIX::EncodedIssuerLen{1582139028}, Instrument_26);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1559402188"}, Instrument_26);
  set_field(msg, FIX::EncodedSecurityDescLen{1971143048}, Instrument_26);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_26);
  FIX::Factor Factor_26;
  Factor_26.setString("18756598");
set_field(msg, Factor_26, Instrument_26);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_26);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_26);
  FIX::FloorPrice FloorPrice_26;
  FloorPrice_26.setString("20024607");
set_field(msg, FloorPrice_26, Instrument_26);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_26);
  set_field(msg, FIX::InstrRegistry{"STRING_1460835949"}, Instrument_26);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_26);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2104700276"}, Instrument_26);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_285786250"}, Instrument_26);
  set_field(msg, FIX::Issuer{"STRING_1299716572"}, Instrument_26);
  set_field(msg, FIX::ListMethod{0}, Instrument_26);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1932592081"}, Instrument_26);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_403834039"}, Instrument_26);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_286330085"}, Instrument_26);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_201395639"}, Instrument_26);
  FIX::MinPriceIncrement MinPriceIncrement_26;
  MinPriceIncrement_26.setString("1776776");
set_field(msg, MinPriceIncrement_26, Instrument_26);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_26;
  MinPriceIncrementAmount_26.setString("11636378");
set_field(msg, MinPriceIncrementAmount_26, Instrument_26);
  set_field(msg, FIX::NTPositionLimit{779198556}, Instrument_26);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_26;
  NotionalPercentageOutstanding_26.setString("33.610000");
set_field(msg, NotionalPercentageOutstanding_26, Instrument_26);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_26);
  FIX::OptPayoutAmount OptPayoutAmount_26;
  OptPayoutAmount_26.setString("2845037");
set_field(msg, OptPayoutAmount_26, Instrument_26);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_26);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_26;
  OriginalNotionalPercentageOutstanding_26.setString("89.700000");
set_field(msg, OriginalNotionalPercentageOutstanding_26, Instrument_26);
  set_field(msg, FIX::Pool{"STRING_2007305958"}, Instrument_26);
  set_field(msg, FIX::PositionLimit{1364864577}, Instrument_26);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_26);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_2073342499"}, Instrument_26);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_26;
  PriceUnitOfMeasureQty_26.setString("7995199");
set_field(msg, PriceUnitOfMeasureQty_26, Instrument_26);
  set_field(msg, FIX::Product{5}, Instrument_26);
  set_field(msg, FIX::ProductComplex{"STRING_1897001899"}, Instrument_26);
  set_field(msg, FIX::PutOrCall{1}, Instrument_26);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_795824584"}, Instrument_26);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_629068477"}, Instrument_26);
  FIX::RepurchaseRate RepurchaseRate_26;
  RepurchaseRate_26.setString("53.180000");
set_field(msg, RepurchaseRate_26, Instrument_26);
  set_field(msg, FIX::RepurchaseTerm{650801638}, Instrument_26);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_26);
  set_field(msg, FIX::SecurityDesc{"STRING_137867619"}, Instrument_26);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_325804366"}, Instrument_26);
  set_field(msg, FIX::SecurityGroup{"STRING_2060972888"}, Instrument_26);
  set_field(msg, FIX::SecurityID{"STRING_423653869"}, Instrument_26);
  set_field(msg, FIX::SecurityIDSource{"STRING_9"}, Instrument_26);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_26);
  set_field(msg, FIX::SecuritySubType{"STRING_208762303"}, Instrument_26);
  set_field(msg, FIX::SecurityType{"STRING_CD"}, Instrument_26);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_26);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_26);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_59548998"}, Instrument_26);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_217022811"}, Instrument_26);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_26);
  FIX::StrikeMultiplier StrikeMultiplier_26;
  StrikeMultiplier_26.setString("13710009");
set_field(msg, StrikeMultiplier_26, Instrument_26);
  FIX::StrikePrice StrikePrice_26;
  StrikePrice_26.setString("14738602");
set_field(msg, StrikePrice_26, Instrument_26);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_26);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_26;
  StrikePriceBoundaryPrecision_26.setString("62.480000");
set_field(msg, StrikePriceBoundaryPrecision_26, Instrument_26);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_26);
  FIX::StrikeValue StrikeValue_26;
  StrikeValue_26.setString("17437529");
set_field(msg, StrikeValue_26, Instrument_26);
  set_field(msg, FIX::Symbol{"STRING_415302464"}, Instrument_26);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_26);
  set_field(msg, FIX::TimeUnit{"STRING_Yr"}, Instrument_26);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_26);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bcf"}, Instrument_26);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_26;
  UnitOfMeasureQty_26.setString("11657709");
set_field(msg, UnitOfMeasureQty_26, Instrument_26);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_26);
  all_values.push_back(Instrument_26);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_53;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_53);
    FIX::ComplexEventPrice ComplexEventPrice_53;
    ComplexEventPrice_53.setString("7820934");
set_field(noComplexEvents_0_0, ComplexEventPrice_53, ComplexEvents_NoComplexEvents_53);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_53);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_53;
    ComplexEventPriceBoundaryPrecision_53.setString("38.650000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_53, ComplexEvents_NoComplexEvents_53);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_53);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_53);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_53;
    ComplexOptPayoutAmount_53.setString("4043240");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_53, ComplexEvents_NoComplexEvents_53);
    all_values.push_back(ComplexEvents_NoComplexEvents_53);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_110;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 49, 44, 12, 9, 2017)}, ComplexEventDates_NoComplexEventDates_110);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 53, 25, 16, 3, 2012)}, ComplexEventDates_NoComplexEventDates_110);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_110);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_216;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 3, 27)}, ComplexEventTimes_NoComplexEventTimes_216);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 12, 28)}, ComplexEventTimes_NoComplexEventTimes_216);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_216);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_217;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 54, 38)}, ComplexEventTimes_NoComplexEventTimes_217);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 25, 17)}, ComplexEventTimes_NoComplexEventTimes_217);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_217);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_218;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 58, 16)}, ComplexEventTimes_NoComplexEventTimes_218);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 43, 22)}, ComplexEventTimes_NoComplexEventTimes_218);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_218);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::IOI::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_54;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_54);
    FIX::ComplexEventPrice ComplexEventPrice_54;
    ComplexEventPrice_54.setString("13567261");
set_field(noComplexEvents_0_1, ComplexEventPrice_54, ComplexEvents_NoComplexEvents_54);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_54);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_54;
    ComplexEventPriceBoundaryPrecision_54.setString("88.980000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_54, ComplexEvents_NoComplexEvents_54);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_54);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_54);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_54;
    ComplexOptPayoutAmount_54.setString("16228243");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_54, ComplexEvents_NoComplexEvents_54);
    all_values.push_back(ComplexEvents_NoComplexEvents_54);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_111;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 29, 20, 24, 10, 2000)}, ComplexEventDates_NoComplexEventDates_111);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 34, 11, 6, 3, 2005)}, ComplexEventDates_NoComplexEventDates_111);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_111);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_219;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 45, 27)}, ComplexEventTimes_NoComplexEventTimes_219);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 11, 38)}, ComplexEventTimes_NoComplexEventTimes_219);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_219);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_220;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 17, 8)}, ComplexEventTimes_NoComplexEventTimes_220);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 42, 12)}, ComplexEventTimes_NoComplexEventTimes_220);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_220);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::IOI::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_221;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 41, 28)}, ComplexEventTimes_NoComplexEventTimes_221);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 9, 36)}, ComplexEventTimes_NoComplexEventTimes_221);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_221);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::IOI::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_57;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_2115799843"}, EvntGrp_NoEvents_57);
    FIX::EventPx EventPx_57;
    EventPx_57.setString("8279099");
set_field(noEvents_0_0, EventPx_57, EvntGrp_NoEvents_57);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1626784986"}, EvntGrp_NoEvents_57);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(8, 45, 25, 9, 11, 2010)}, EvntGrp_NoEvents_57);
    set_field(noEvents_0_0, FIX::EventType{14}, EvntGrp_NoEvents_57);
    all_values.push_back(EvntGrp_NoEvents_57);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::IOI::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_49;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1496727115"}, InstrumentParties_NoInstrumentParties_49);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_49);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1142308188}, InstrumentParties_NoInstrumentParties_49);
    all_values.push_back(InstrumentParties_NoInstrumentParties_49);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::IOI::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_574879152"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{248000269}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_99);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_50;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1246564892"}, SecAltIDGrp_NoSecurityAltID_50);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_976516711"}, SecAltIDGrp_NoSecurityAltID_50);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_50);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_51;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_525883243"}, SecAltIDGrp_NoSecurityAltID_51);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_456384220"}, SecAltIDGrp_NoSecurityAltID_51);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_51);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::IOI::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_52;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_964554942"}, SecAltIDGrp_NoSecurityAltID_52);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_1846316964"}, SecAltIDGrp_NoSecurityAltID_52);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_52);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_52;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1198114449"}, SecurityXML_52);
  set_field(msg, FIX::SecurityXMLLen{1162066965}, SecurityXML_52);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1127831611"}, SecurityXML_52);
  all_values.push_back(SecurityXML_52);
  all_compo_names.insert("..");

  // OrderQtyData
  multiset<string> OrderQtyData_6;
  FIX::CashOrderQty CashOrderQty_6;
  CashOrderQty_6.setString("16612100");
set_field(msg, CashOrderQty_6, OrderQtyData_6);
  FIX::OrderPercent OrderPercent_6;
  OrderPercent_6.setString("37.330000");
set_field(msg, OrderPercent_6, OrderQtyData_6);
  FIX::OrderQty OrderQty_14;
  OrderQty_14.setString("8579919");
set_field(msg, OrderQty_14, OrderQtyData_6);
  set_field(msg, FIX::RoundingDirection{'2'}, OrderQtyData_6);
  FIX::RoundingModulus RoundingModulus_6;
  RoundingModulus_6.setString("10422337");
set_field(msg, RoundingModulus_6, OrderQtyData_6);
  all_values.push_back(OrderQtyData_6);
  all_compo_names.insert(".");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::IOI::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_48;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_247324559"}, Parties_NoPartyIDs_48);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_48);
    set_field(noPartyIDs_0_0, FIX::PartyRole{32}, Parties_NoPartyIDs_48);
    all_values.push_back(Parties_NoPartyIDs_48);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::IOI::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_101;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_464193430"}, PtysSubGrp_NoPartySubIDs_101);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_101);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_101);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::IOI::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_1;
    set_field(noRoutingIDs_0_0, FIX::RoutingID{"STRING_1515674443"}, RoutingGrp_NoRoutingIDs_1);
    set_field(noRoutingIDs_0_0, FIX::RoutingType{4}, RoutingGrp_NoRoutingIDs_1);
    all_values.push_back(RoutingGrp_NoRoutingIDs_1);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  // SpreadOrBenchmarkCurveData
  multiset<string> SpreadOrBenchmarkCurveData_11;
  set_field(msg, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkCurveName{"STRING_Pfandbriefe"}, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkCurvePoint{"STRING_633235224"}, SpreadOrBenchmarkCurveData_11);
  FIX::BenchmarkPrice BenchmarkPrice_11;
  BenchmarkPrice_11.setString("6946465");
set_field(msg, BenchmarkPrice_11, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkPriceType{2070720393}, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkSecurityID{"STRING_389261634"}, SpreadOrBenchmarkCurveData_11);
  set_field(msg, FIX::BenchmarkSecurityIDSource{"STRING_1941211462"}, SpreadOrBenchmarkCurveData_11);
  FIX::Spread Spread_11;
  Spread_11.setString("8997534");
set_field(msg, Spread_11, SpreadOrBenchmarkCurveData_11);
  all_values.push_back(SpreadOrBenchmarkCurveData_11);
  all_compo_names.insert(".");

  // Stipulations
  // Group Stipulations.NoStipulations
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_0;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_23;
    set_field(noStipulations_0_0, FIX::StipulationType{"STRING_REDEMPTION"}, Stipulations_NoStipulations_23);
    set_field(noStipulations_0_0, FIX::StipulationValue{"STRING_1864308398"}, Stipulations_NoStipulations_23);
    all_values.push_back(Stipulations_NoStipulations_23);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_0);
  }
  {
    FIX50SP2::IOI::NoStipulations noStipulations_0_1;
    // Stipulations.NoStipulations
    multiset<string> Stipulations_NoStipulations_24;
    set_field(noStipulations_0_1, FIX::StipulationType{"STRING_RATING"}, Stipulations_NoStipulations_24);
    set_field(noStipulations_0_1, FIX::StipulationValue{"STRING_1448226484"}, Stipulations_NoStipulations_24);
    all_values.push_back(Stipulations_NoStipulations_24);
    all_compo_names.insert("...NoStipulations");

    msg.addGroup(noStipulations_0_1);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::IOI::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_46;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1741809805"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{961952894}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1093215448"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{452318117}, UnderlyingInstrument_46);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_46;
    UnderlyingAdjustedQuantity_46.setString("4439954");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_46, UnderlyingInstrument_46);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_46;
    UnderlyingAllocationPercent_46.setString("91.600000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_46, UnderlyingInstrument_46);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_46;
    UnderlyingAttachmentPoint_46.setString("14.140000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_691320059"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_516544025"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_241777429"}, UnderlyingInstrument_46);
    FIX::UnderlyingCapValue UnderlyingCapValue_46;
    UnderlyingCapValue_46.setString("19200987");
set_field(noUnderlyings_0_0, UnderlyingCapValue_46, UnderlyingInstrument_46);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_46;
    UnderlyingCashAmount_46.setString("9807374");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_46);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_46;
    UnderlyingContractMultiplier_46.setString("9465562");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{348928250}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1626519941"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1469740881"}, UnderlyingInstrument_46);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_46;
    UnderlyingCouponRate_46.setString("56.680000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1301756417"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_46);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_46;
    UnderlyingCurrentValue_46.setString("12249931");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_46, UnderlyingInstrument_46);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_46;
    UnderlyingDetachmentPoint_46.setString("40.910000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_46, UnderlyingInstrument_46);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_46;
    UnderlyingDirtyPrice_46.setString("9570700");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_46, UnderlyingInstrument_46);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_46;
    UnderlyingEndPrice_46.setString("21247466");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_46, UnderlyingInstrument_46);
    FIX::UnderlyingEndValue UnderlyingEndValue_46;
    UnderlyingEndValue_46.setString("12598989");
set_field(noUnderlyings_0_0, UnderlyingEndValue_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1207182088}, UnderlyingInstrument_46);
    FIX::UnderlyingFXRate UnderlyingFXRate_46;
    UnderlyingFXRate_46.setString("18415713");
set_field(noUnderlyings_0_0, UnderlyingFXRate_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_46);
    FIX::UnderlyingFactor UnderlyingFactor_46;
    UnderlyingFactor_46.setString("5079249");
set_field(noUnderlyings_0_0, UnderlyingFactor_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{572979435}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1468203320"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1469877818"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1666194883"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1920521437"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1913873318"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1654160396"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_562649204"}, UnderlyingInstrument_46);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_46;
    UnderlyingNotionalPercentageOutstanding_46.setString("97.290000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_46);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_46;
    UnderlyingOriginalNotionalPercentageOutstanding_46.setString("66.330000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_230324804"}, UnderlyingInstrument_46);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_46;
    UnderlyingPriceUnitOfMeasureQty_46.setString("10039582");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1750534639}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1176881049}, UnderlyingInstrument_46);
    FIX::UnderlyingPx UnderlyingPx_46;
    UnderlyingPx_46.setString("13528864");
set_field(noUnderlyings_0_0, UnderlyingPx_46, UnderlyingInstrument_46);
    FIX::UnderlyingQty UnderlyingQty_46;
    UnderlyingQty_46.setString("12295709");
set_field(noUnderlyings_0_0, UnderlyingQty_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_499138282"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1821582148"}, UnderlyingInstrument_46);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_46;
    UnderlyingRepurchaseRate_46.setString("37.020000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{454630739}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_837440739"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1608836864"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_799384830"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1794510792"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1586099835"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_2059283799"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_854209233"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1280187555"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_1785677314"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_46);
    FIX::UnderlyingStartValue UnderlyingStartValue_46;
    UnderlyingStartValue_46.setString("18531669");
set_field(noUnderlyings_0_0, UnderlyingStartValue_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1106396987"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_46);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_46;
    UnderlyingStrikePrice_46.setString("8794347");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_46, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_450917998"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_878554974"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1442083980"}, UnderlyingInstrument_46);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_908627727"}, UnderlyingInstrument_46);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_46;
    UnderlyingUnitOfMeasureQty_46.setString("9017757");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_46, UnderlyingInstrument_46);
    all_values.push_back(UnderlyingInstrument_46);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_96;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1138952531"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_96);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1905733977"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_96);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_96);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_97;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1849561604"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_97);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_168349932"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_97);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_97);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::IOI::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_96;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_931648889"}, UnderlyingStipulations_NoUnderlyingStips_96);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_667488214"}, UnderlyingStipulations_NoUnderlyingStips_96);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_96);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_94;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1315492591"}, UndlyInstrumentParties_NoUndlyInstrumentParties_94);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_94);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1622676047}, UndlyInstrumentParties_NoUndlyInstrumentParties_94);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_94);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1921503784"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1269703192}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_180);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_215461994"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1833303935}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_181);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_95;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2123912425"}, UndlyInstrumentParties_NoUndlyInstrumentParties_95);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_95);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1471497602}, UndlyInstrumentParties_NoUndlyInstrumentParties_95);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_95);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1201332893"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{430410941}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_182);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2023091262"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{425727471}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_183);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1309845717"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{326525612}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_184);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_96;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1304282446"}, UndlyInstrumentParties_NoUndlyInstrumentParties_96);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_96);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1235153339}, UndlyInstrumentParties_NoUndlyInstrumentParties_96);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_96);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_703473015"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{226622223}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_185);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1964308523"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{405550972}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_186);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::IOI::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_394972155"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{927961683}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_187);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  // YieldData
  multiset<string> YieldData_6;
  FIX::Yield Yield_6;
  Yield_6.setString("98.610000");
set_field(msg, Yield_6, YieldData_6);
  set_field(msg, FIX::YieldCalcDate{"LOCALMKTDATE_1062460370"}, YieldData_6);
  set_field(msg, FIX::YieldRedemptionDate{"LOCALMKTDATE_1713196992"}, YieldData_6);
  FIX::YieldRedemptionPrice YieldRedemptionPrice_6;
  YieldRedemptionPrice_6.setString("5052088");
set_field(msg, YieldRedemptionPrice_6, YieldData_6);
  set_field(msg, FIX::YieldRedemptionPriceType{37095675}, YieldData_6);
  set_field(msg, FIX::YieldType{"STRING_CALL"}, YieldData_6);
  all_values.push_back(YieldData_6);
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
