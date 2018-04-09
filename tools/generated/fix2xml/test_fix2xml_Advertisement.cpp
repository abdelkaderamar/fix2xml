#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::Advertisement msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Advertisement_0;
  set_field(msg, FIX::AdvId{"STRING_388398161"}, Advertisement_0);
  set_field(msg, FIX::AdvRefID{"STRING_2119221374"}, Advertisement_0);
  set_field(msg, FIX::AdvSide{'X'}, Advertisement_0);
  set_field(msg, FIX::AdvTransType{"STRING_N"}, Advertisement_0);
  set_field(msg, FIX::Currency{"USD"}, Advertisement_0);
  set_field(msg, FIX::EncodedText{"DATA_1640888637"}, Advertisement_0);
  set_field(msg, FIX::EncodedTextLen{656195263}, Advertisement_0);
  set_field(msg, FIX::LastMkt{"EXCHANGE_1001754367"}, Advertisement_0);
  FIX::Price Price_0;
  Price_0.setString("7604421");
set_field(msg, Price_0, Advertisement_0);
  set_field(msg, FIX::QtyType{1}, Advertisement_0);
  FIX::Quantity Quantity_0;
  Quantity_0.setString("12030391");
set_field(msg, Quantity_0, Advertisement_0);
  set_field(msg, FIX::Text{"STRING_1907376299"}, Advertisement_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_539738460"}, Advertisement_0);
  set_field(msg, FIX::TradingSessionID{"STRING_6"}, Advertisement_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, Advertisement_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(6, 41, 20, 20, 11, 2016)}, Advertisement_0);
  set_field(msg, FIX::URLLink{"STRING_1243568235"}, Advertisement_0);
  all_values.push_back(Advertisement_0);

  all_compo_names.insert("Advertisement");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::Advertisement::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_0;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1585879327"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1558065281}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_106835722"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1277732868}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_821557095"}, InstrumentLeg_0);
    FIX::LegContractMultiplier LegContractMultiplier_0;
    LegContractMultiplier_0.setString("18577070");
set_field(noLegs_0_0, LegContractMultiplier_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1666131030}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_793294821"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1998068189"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_802960552"}, InstrumentLeg_0);
    FIX::LegCouponRate LegCouponRate_0;
    LegCouponRate_0.setString("82.750000");
set_field(noLegs_0_0, LegCouponRate_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_83951271"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_1085705639"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1056807702}, InstrumentLeg_0);
    FIX::LegFactor LegFactor_0;
    LegFactor_0.setString("13307743");
set_field(noLegs_0_0, LegFactor_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{141261148}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_816700353"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1870512847"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_2027543541"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_231910206"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_563253279"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_540718459"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1802020187"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1363245540"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_0);
    FIX::LegOptionRatio LegOptionRatio_0;
    LegOptionRatio_0.setString("6733072");
set_field(noLegs_0_0, LegOptionRatio_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_1991169598"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1057514639"}, InstrumentLeg_0);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_0;
    LegPriceUnitOfMeasureQty_0.setString("2510079");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegProduct{1429565277}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegPutOrCall{468096273}, InstrumentLeg_0);
    FIX::LegRatioQty LegRatioQty_0;
    LegRatioQty_0.setString("3578436");
set_field(noLegs_0_0, LegRatioQty_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_559814498"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1289653368"}, InstrumentLeg_0);
    FIX::LegRepurchaseRate LegRepurchaseRate_0;
    LegRepurchaseRate_0.setString("70.680000");
set_field(noLegs_0_0, LegRepurchaseRate_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{78461880}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_2082948190"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_2066135257"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_881422432"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1851642817"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_2602881"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1177787973"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1088308520"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_0);
    FIX::LegStrikePrice LegStrikePrice_0;
    LegStrikePrice_0.setString("12295696");
set_field(noLegs_0_0, LegStrikePrice_0, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_903812381"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1182852646"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1109629562"}, InstrumentLeg_0);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1135722588"}, InstrumentLeg_0);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_0;
    LegUnitOfMeasureQty_0.setString("17461059");
set_field(noLegs_0_0, LegUnitOfMeasureQty_0, InstrumentLeg_0);
    all_values.push_back(InstrumentLeg_0);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_0;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_790259127"}, LegSecAltIDGrp_NoLegSecurityAltID_0);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_961867817"}, LegSecAltIDGrp_NoLegSecurityAltID_0);
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
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1464294425"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1463566337}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_805553767"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{374325417}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1714574305"}, InstrumentLeg_1);
    FIX::LegContractMultiplier LegContractMultiplier_1;
    LegContractMultiplier_1.setString("876353");
set_field(noLegs_0_1, LegContractMultiplier_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{842421690}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_2072417994"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_647449895"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2132075058"}, InstrumentLeg_1);
    FIX::LegCouponRate LegCouponRate_1;
    LegCouponRate_1.setString("50.620000");
set_field(noLegs_0_1, LegCouponRate_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_725911775"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegCurrency{"GBP"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1607334207"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1771698770}, InstrumentLeg_1);
    FIX::LegFactor LegFactor_1;
    LegFactor_1.setString("20617395");
set_field(noLegs_0_1, LegFactor_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{637638532}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1900747830"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1002564425"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_724750560"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1213087629"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_84650445"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1628562942"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_248456627"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1194280007"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'6'}, InstrumentLeg_1);
    FIX::LegOptionRatio LegOptionRatio_1;
    LegOptionRatio_1.setString("19945625");
set_field(noLegs_0_1, LegOptionRatio_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_697144381"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1407061009"}, InstrumentLeg_1);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_1;
    LegPriceUnitOfMeasureQty_1.setString("8089467");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegProduct{13955158}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegPutOrCall{723143699}, InstrumentLeg_1);
    FIX::LegRatioQty LegRatioQty_1;
    LegRatioQty_1.setString("16145004");
set_field(noLegs_0_1, LegRatioQty_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_388280575"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_290234356"}, InstrumentLeg_1);
    FIX::LegRepurchaseRate LegRepurchaseRate_1;
    LegRepurchaseRate_1.setString("58.870000");
set_field(noLegs_0_1, LegRepurchaseRate_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1230702265}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_215168702"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_202102134"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1215293676"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_208170117"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_928013909"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1135349628"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_387864468"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_1);
    FIX::LegStrikePrice LegStrikePrice_1;
    LegStrikePrice_1.setString("10255030");
set_field(noLegs_0_1, LegStrikePrice_1, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_512828933"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1036643471"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1750253561"}, InstrumentLeg_1);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1725916562"}, InstrumentLeg_1);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_1;
    LegUnitOfMeasureQty_1.setString("11212939");
set_field(noLegs_0_1, LegUnitOfMeasureQty_1, InstrumentLeg_1);
    all_values.push_back(InstrumentLeg_1);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::Advertisement::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_1;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1974373190"}, LegSecAltIDGrp_NoLegSecurityAltID_1);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_168090276"}, LegSecAltIDGrp_NoLegSecurityAltID_1);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_1);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_3;
  FIX::AttachmentPoint AttachmentPoint_3;
  AttachmentPoint_3.setString("47.370000");
set_field(msg, AttachmentPoint_3, Instrument_3);
  set_field(msg, FIX::CFICode{"STRING_1821452095"}, Instrument_3);
  set_field(msg, FIX::CPProgram{2}, Instrument_3);
  set_field(msg, FIX::CPRegType{"STRING_1107712098"}, Instrument_3);
  FIX::CapPrice CapPrice_3;
  CapPrice_3.setString("4829151");
set_field(msg, CapPrice_3, Instrument_3);
  FIX::ContractMultiplier ContractMultiplier_3;
  ContractMultiplier_3.setString("8791898");
set_field(msg, ContractMultiplier_3, Instrument_3);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_3);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_2097415659"}, Instrument_3);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1267470391"}, Instrument_3);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_2121090153"}, Instrument_3);
  FIX::CouponRate CouponRate_3;
  CouponRate_3.setString("78.980000");
set_field(msg, CouponRate_3, Instrument_3);
  set_field(msg, FIX::CreditRating{"STRING_350689008"}, Instrument_3);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_188775208"}, Instrument_3);
  FIX::DetachmentPoint DetachmentPoint_3;
  DetachmentPoint_3.setString("0.320000");
set_field(msg, DetachmentPoint_3, Instrument_3);
  set_field(msg, FIX::EncodedIssuer{"DATA_1565982684"}, Instrument_3);
  set_field(msg, FIX::EncodedIssuerLen{396945325}, Instrument_3);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_634700293"}, Instrument_3);
  set_field(msg, FIX::EncodedSecurityDescLen{553848665}, Instrument_3);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_3);
  FIX::Factor Factor_3;
  Factor_3.setString("10225647");
set_field(msg, Factor_3, Instrument_3);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_3);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_3);
  FIX::FloorPrice FloorPrice_3;
  FloorPrice_3.setString("20480677");
set_field(msg, FloorPrice_3, Instrument_3);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_3);
  set_field(msg, FIX::InstrRegistry{"STRING_1587490983"}, Instrument_3);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_3);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1404675263"}, Instrument_3);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_561301251"}, Instrument_3);
  set_field(msg, FIX::Issuer{"STRING_734686882"}, Instrument_3);
  set_field(msg, FIX::ListMethod{1}, Instrument_3);
  set_field(msg, FIX::LocaleOfIssue{"STRING_729391527"}, Instrument_3);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_435337971"}, Instrument_3);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_905533252"}, Instrument_3);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1594626184"}, Instrument_3);
  FIX::MinPriceIncrement MinPriceIncrement_3;
  MinPriceIncrement_3.setString("15430500");
set_field(msg, MinPriceIncrement_3, Instrument_3);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_3;
  MinPriceIncrementAmount_3.setString("13884484");
set_field(msg, MinPriceIncrementAmount_3, Instrument_3);
  set_field(msg, FIX::NTPositionLimit{326332352}, Instrument_3);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_3;
  NotionalPercentageOutstanding_3.setString("22.190000");
set_field(msg, NotionalPercentageOutstanding_3, Instrument_3);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_3);
  FIX::OptPayoutAmount OptPayoutAmount_3;
  OptPayoutAmount_3.setString("15938027");
set_field(msg, OptPayoutAmount_3, Instrument_3);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_3);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_3;
  OriginalNotionalPercentageOutstanding_3.setString("46.830000");
set_field(msg, OriginalNotionalPercentageOutstanding_3, Instrument_3);
  set_field(msg, FIX::Pool{"STRING_1944491751"}, Instrument_3);
  set_field(msg, FIX::PositionLimit{1388803932}, Instrument_3);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_3);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1362990788"}, Instrument_3);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_3;
  PriceUnitOfMeasureQty_3.setString("17857492");
set_field(msg, PriceUnitOfMeasureQty_3, Instrument_3);
  set_field(msg, FIX::Product{12}, Instrument_3);
  set_field(msg, FIX::ProductComplex{"STRING_1916839453"}, Instrument_3);
  set_field(msg, FIX::PutOrCall{1}, Instrument_3);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_59432475"}, Instrument_3);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1082769220"}, Instrument_3);
  FIX::RepurchaseRate RepurchaseRate_3;
  RepurchaseRate_3.setString("15.870000");
set_field(msg, RepurchaseRate_3, Instrument_3);
  set_field(msg, FIX::RepurchaseTerm{2107500237}, Instrument_3);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_3);
  set_field(msg, FIX::SecurityDesc{"STRING_145888922"}, Instrument_3);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1610854264"}, Instrument_3);
  set_field(msg, FIX::SecurityGroup{"STRING_18719536"}, Instrument_3);
  set_field(msg, FIX::SecurityID{"STRING_707190174"}, Instrument_3);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_3);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_3);
  set_field(msg, FIX::SecuritySubType{"STRING_1436581701"}, Instrument_3);
  set_field(msg, FIX::SecurityType{"STRING_CS"}, Instrument_3);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_3);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_3);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_28961890"}, Instrument_3);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_1396782366"}, Instrument_3);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_3);
  FIX::StrikeMultiplier StrikeMultiplier_3;
  StrikeMultiplier_3.setString("5876791");
set_field(msg, StrikeMultiplier_3, Instrument_3);
  FIX::StrikePrice StrikePrice_3;
  StrikePrice_3.setString("6563756");
set_field(msg, StrikePrice_3, Instrument_3);
  set_field(msg, FIX::StrikePriceBoundaryMethod{2}, Instrument_3);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_3;
  StrikePriceBoundaryPrecision_3.setString("38.350000");
set_field(msg, StrikePriceBoundaryPrecision_3, Instrument_3);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_3);
  FIX::StrikeValue StrikeValue_3;
  StrikeValue_3.setString("16967331");
set_field(msg, StrikeValue_3, Instrument_3);
  set_field(msg, FIX::Symbol{"STRING_1980294903"}, Instrument_3);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_3);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_3);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_3);
  set_field(msg, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_3);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_3;
  UnitOfMeasureQty_3.setString("14900328");
set_field(msg, UnitOfMeasureQty_3, Instrument_3);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_3);
  all_values.push_back(Instrument_3);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_6;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_6);
    FIX::ComplexEventPrice ComplexEventPrice_6;
    ComplexEventPrice_6.setString("10366116");
set_field(noComplexEvents_0_0, ComplexEventPrice_6, ComplexEvents_NoComplexEvents_6);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_6);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_6;
    ComplexEventPriceBoundaryPrecision_6.setString("96.650000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_6, ComplexEvents_NoComplexEvents_6);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_6);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_6);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_6;
    ComplexOptPayoutAmount_6.setString("9015098");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_6, ComplexEvents_NoComplexEvents_6);
    all_values.push_back(ComplexEvents_NoComplexEvents_6);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_12;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 43, 49, 19, 7, 2001)}, ComplexEventDates_NoComplexEventDates_12);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 19, 58, 21, 3, 2008)}, ComplexEventDates_NoComplexEventDates_12);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_12);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_32;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 20, 17)}, ComplexEventTimes_NoComplexEventTimes_32);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 49, 42)}, ComplexEventTimes_NoComplexEventTimes_32);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_32);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_33;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 49, 24)}, ComplexEventTimes_NoComplexEventTimes_33);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 23, 52)}, ComplexEventTimes_NoComplexEventTimes_33);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_33);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_34;
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 28, 53)}, ComplexEventTimes_NoComplexEventTimes_34);
        set_field(noComplexEventTimes_0_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 41, 12)}, ComplexEventTimes_NoComplexEventTimes_34);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_34);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_13;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 2, 51, 26, 6, 2017)}, ComplexEventDates_NoComplexEventDates_13);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 35, 24, 20, 3, 2017)}, ComplexEventDates_NoComplexEventDates_13);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_13);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_35;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 16, 17)}, ComplexEventTimes_NoComplexEventTimes_35);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 32, 9)}, ComplexEventTimes_NoComplexEventTimes_35);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_35);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_7;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_7);
    FIX::ComplexEventPrice ComplexEventPrice_7;
    ComplexEventPrice_7.setString("2216080");
set_field(noComplexEvents_0_1, ComplexEventPrice_7, ComplexEvents_NoComplexEvents_7);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_7);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_7;
    ComplexEventPriceBoundaryPrecision_7.setString("88.110000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_7, ComplexEvents_NoComplexEvents_7);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_7);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_7);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_7;
    ComplexOptPayoutAmount_7.setString("18014795");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_7, ComplexEvents_NoComplexEvents_7);
    all_values.push_back(ComplexEvents_NoComplexEvents_7);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_14;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 7, 4, 14, 1, 2013)}, ComplexEventDates_NoComplexEventDates_14);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 54, 5, 9, 1, 2011)}, ComplexEventDates_NoComplexEventDates_14);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_14);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_36;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 4, 46)}, ComplexEventTimes_NoComplexEventTimes_36);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 19, 36)}, ComplexEventTimes_NoComplexEventTimes_36);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_36);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_37;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 6, 10)}, ComplexEventTimes_NoComplexEventTimes_37);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 54, 17)}, ComplexEventTimes_NoComplexEventTimes_37);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_37);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_38;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 25, 58)}, ComplexEventTimes_NoComplexEventTimes_38);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 17, 53)}, ComplexEventTimes_NoComplexEventTimes_38);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_38);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_15;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 50, 7, 0, 6, 2007)}, ComplexEventDates_NoComplexEventDates_15);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 51, 48, 2, 2, 2013)}, ComplexEventDates_NoComplexEventDates_15);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_15);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_39;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 57, 26)}, ComplexEventTimes_NoComplexEventTimes_39);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 12, 49)}, ComplexEventTimes_NoComplexEventTimes_39);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_39);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_40;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 6, 39)}, ComplexEventTimes_NoComplexEventTimes_40);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 49, 31)}, ComplexEventTimes_NoComplexEventTimes_40);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_40);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_41;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 21, 28)}, ComplexEventTimes_NoComplexEventTimes_41);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 15, 26)}, ComplexEventTimes_NoComplexEventTimes_41);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_41);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_16;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 6, 41, 12, 6, 2002)}, ComplexEventDates_NoComplexEventDates_16);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 29, 58, 23, 4, 2016)}, ComplexEventDates_NoComplexEventDates_16);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_16);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_42;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 42, 28)}, ComplexEventTimes_NoComplexEventTimes_42);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 17, 53)}, ComplexEventTimes_NoComplexEventTimes_42);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_42);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_43;
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 14, 32)}, ComplexEventTimes_NoComplexEventTimes_43);
        set_field(noComplexEventTimes_1_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 39, 44)}, ComplexEventTimes_NoComplexEventTimes_43);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_43);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_44;
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 50, 5)}, ComplexEventTimes_NoComplexEventTimes_44);
        set_field(noComplexEventTimes_1_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 37, 50)}, ComplexEventTimes_NoComplexEventTimes_44);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_44);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::Advertisement::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_8;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_8);
    FIX::ComplexEventPrice ComplexEventPrice_8;
    ComplexEventPrice_8.setString("19308657");
set_field(noComplexEvents_0_2, ComplexEventPrice_8, ComplexEvents_NoComplexEvents_8);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_8);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_8;
    ComplexEventPriceBoundaryPrecision_8.setString("96.060000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_8, ComplexEvents_NoComplexEvents_8);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_8);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_8);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_8;
    ComplexOptPayoutAmount_8.setString("11105791");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_8, ComplexEvents_NoComplexEvents_8);
    all_values.push_back(ComplexEvents_NoComplexEvents_8);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_17;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 22, 56, 27, 8, 2013)}, ComplexEventDates_NoComplexEventDates_17);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 56, 27, 6, 6, 2000)}, ComplexEventDates_NoComplexEventDates_17);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_17);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_45;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 24, 46)}, ComplexEventTimes_NoComplexEventTimes_45);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 23, 46)}, ComplexEventTimes_NoComplexEventTimes_45);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_45);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_46;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 26, 13)}, ComplexEventTimes_NoComplexEventTimes_46);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 56, 21)}, ComplexEventTimes_NoComplexEventTimes_46);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_46);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_18;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 43, 40, 17, 3, 2015)}, ComplexEventDates_NoComplexEventDates_18);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 17, 27, 9, 12, 2013)}, ComplexEventDates_NoComplexEventDates_18);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_18);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_47;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 28, 3)}, ComplexEventTimes_NoComplexEventTimes_47);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 18, 44)}, ComplexEventTimes_NoComplexEventTimes_47);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_47);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_48;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 2, 51)}, ComplexEventTimes_NoComplexEventTimes_48);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 47, 20)}, ComplexEventTimes_NoComplexEventTimes_48);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_48);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_49;
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 55, 27)}, ComplexEventTimes_NoComplexEventTimes_49);
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 40, 13)}, ComplexEventTimes_NoComplexEventTimes_49);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_49);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    {
      FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_19;
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 40, 8, 25, 7, 2012)}, ComplexEventDates_NoComplexEventDates_19);
      set_field(noComplexEventDates_2_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 40, 36, 10, 4, 2017)}, ComplexEventDates_NoComplexEventDates_19);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_19);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_50;
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 53, 32)}, ComplexEventTimes_NoComplexEventTimes_50);
        set_field(noComplexEventTimes_2_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 11, 30)}, ComplexEventTimes_NoComplexEventTimes_50);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_50);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_0);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_51;
        set_field(noComplexEventTimes_2_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 17, 18)}, ComplexEventTimes_NoComplexEventTimes_51);
        set_field(noComplexEventTimes_2_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 59, 23)}, ComplexEventTimes_NoComplexEventTimes_51);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_51);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_2.addGroup(noComplexEventTimes_2_2_2_1);
      }
      {
        FIX50SP2::Advertisement::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_2_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_52;
        set_field(noComplexEventTimes_2_2_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 55, 50)}, ComplexEventTimes_NoComplexEventTimes_52);
        set_field(noComplexEventTimes_2_2_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 2, 39)}, ComplexEventTimes_NoComplexEventTimes_52);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_52);
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
    FIX50SP2::Advertisement::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_7;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1954568022"}, EvntGrp_NoEvents_7);
    FIX::EventPx EventPx_7;
    EventPx_7.setString("3594866");
set_field(noEvents_0_0, EventPx_7, EvntGrp_NoEvents_7);
    set_field(noEvents_0_0, FIX::EventText{"STRING_717680708"}, EvntGrp_NoEvents_7);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 59, 19, 26, 9, 2013)}, EvntGrp_NoEvents_7);
    set_field(noEvents_0_0, FIX::EventType{17}, EvntGrp_NoEvents_7);
    all_values.push_back(EvntGrp_NoEvents_7);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::Advertisement::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_8;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_801000400"}, EvntGrp_NoEvents_8);
    FIX::EventPx EventPx_8;
    EventPx_8.setString("11819908");
set_field(noEvents_0_1, EventPx_8, EvntGrp_NoEvents_8);
    set_field(noEvents_0_1, FIX::EventText{"STRING_631401098"}, EvntGrp_NoEvents_8);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(23, 55, 42, 24, 10, 2015)}, EvntGrp_NoEvents_8);
    set_field(noEvents_0_1, FIX::EventType{4}, EvntGrp_NoEvents_8);
    all_values.push_back(EvntGrp_NoEvents_8);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::Advertisement::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_9;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_111789698"}, EvntGrp_NoEvents_9);
    FIX::EventPx EventPx_9;
    EventPx_9.setString("1890444");
set_field(noEvents_0_2, EventPx_9, EvntGrp_NoEvents_9);
    set_field(noEvents_0_2, FIX::EventText{"STRING_903062539"}, EvntGrp_NoEvents_9);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(20, 12, 30, 20, 7, 2016)}, EvntGrp_NoEvents_9);
    set_field(noEvents_0_2, FIX::EventType{9}, EvntGrp_NoEvents_9);
    all_values.push_back(EvntGrp_NoEvents_9);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::Advertisement::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_5;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1393560462"}, InstrumentParties_NoInstrumentParties_5);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_5);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{617786046}, InstrumentParties_NoInstrumentParties_5);
    all_values.push_back(InstrumentParties_NoInstrumentParties_5);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_755444161"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1896964850}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_10);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1838658696"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1493836577}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_11);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_550481602"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{873165923}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_12);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_7;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_2098772274"}, SecAltIDGrp_NoSecurityAltID_7);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1752431482"}, SecAltIDGrp_NoSecurityAltID_7);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_7);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::Advertisement::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_8;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1976404242"}, SecAltIDGrp_NoSecurityAltID_8);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1285528109"}, SecAltIDGrp_NoSecurityAltID_8);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_8);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_6;
  set_field(msg, FIX::SecurityXML{"XMLDATA_570168563"}, SecurityXML_6);
  set_field(msg, FIX::SecurityXMLLen{212625811}, SecurityXML_6);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_338158314"}, SecurityXML_6);
  all_values.push_back(SecurityXML_6);
  all_compo_names.insert("..");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::Advertisement::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_0;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_324415509"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{527202729}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1584490085"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{772750418}, UnderlyingInstrument_0);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_0;
    UnderlyingAdjustedQuantity_0.setString("7429611");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_0, UnderlyingInstrument_0);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_0;
    UnderlyingAllocationPercent_0.setString("38.300000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_0, UnderlyingInstrument_0);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_0;
    UnderlyingAttachmentPoint_0.setString("99.280000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_1358256449"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1029517456"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_119090165"}, UnderlyingInstrument_0);
    FIX::UnderlyingCapValue UnderlyingCapValue_0;
    UnderlyingCapValue_0.setString("1855547");
set_field(noUnderlyings_0_0, UnderlyingCapValue_0, UnderlyingInstrument_0);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_0;
    UnderlyingCashAmount_0.setString("19209417");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_0);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_0;
    UnderlyingContractMultiplier_0.setString("4178965");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{391244189}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_387166292"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1173340705"}, UnderlyingInstrument_0);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_0;
    UnderlyingCouponRate_0.setString("53.910000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_78341340"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_0);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_0;
    UnderlyingCurrentValue_0.setString("9515072");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_0, UnderlyingInstrument_0);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_0;
    UnderlyingDetachmentPoint_0.setString("76.610000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_0, UnderlyingInstrument_0);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_0;
    UnderlyingDirtyPrice_0.setString("6424956");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_0, UnderlyingInstrument_0);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_0;
    UnderlyingEndPrice_0.setString("5564550");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_0, UnderlyingInstrument_0);
    FIX::UnderlyingEndValue UnderlyingEndValue_0;
    UnderlyingEndValue_0.setString("3263682");
set_field(noUnderlyings_0_0, UnderlyingEndValue_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1928023729}, UnderlyingInstrument_0);
    FIX::UnderlyingFXRate UnderlyingFXRate_0;
    UnderlyingFXRate_0.setString("11266236");
set_field(noUnderlyings_0_0, UnderlyingFXRate_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_0);
    FIX::UnderlyingFactor UnderlyingFactor_0;
    UnderlyingFactor_0.setString("1186983");
set_field(noUnderlyings_0_0, UnderlyingFactor_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1808051208}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_863409576"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_645901125"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1245057645"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1636159994"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1388862314"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2100831475"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1104796274"}, UnderlyingInstrument_0);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_0;
    UnderlyingNotionalPercentageOutstanding_0.setString("51.160000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_0);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_0;
    UnderlyingOriginalNotionalPercentageOutstanding_0.setString("64.390000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_785189825"}, UnderlyingInstrument_0);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_0;
    UnderlyingPriceUnitOfMeasureQty_0.setString("7563234");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{589053418}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1203086370}, UnderlyingInstrument_0);
    FIX::UnderlyingPx UnderlyingPx_0;
    UnderlyingPx_0.setString("11475676");
set_field(noUnderlyings_0_0, UnderlyingPx_0, UnderlyingInstrument_0);
    FIX::UnderlyingQty UnderlyingQty_0;
    UnderlyingQty_0.setString("9762197");
set_field(noUnderlyings_0_0, UnderlyingQty_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_228943427"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1288293008"}, UnderlyingInstrument_0);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_0;
    UnderlyingRepurchaseRate_0.setString("10.510000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{748637062}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1979500002"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2006068315"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1246084723"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_474511975"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_415039765"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1572452979"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_255052056"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1541663427"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_2111447045"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_0);
    FIX::UnderlyingStartValue UnderlyingStartValue_0;
    UnderlyingStartValue_0.setString("12022309");
set_field(noUnderlyings_0_0, UnderlyingStartValue_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_827372973"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_0);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_0;
    UnderlyingStrikePrice_0.setString("3160493");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_0, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_261030244"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_253152812"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1420845594"}, UnderlyingInstrument_0);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_860665360"}, UnderlyingInstrument_0);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_0;
    UnderlyingUnitOfMeasureQty_0.setString("12360180");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_0, UnderlyingInstrument_0);
    all_values.push_back(UnderlyingInstrument_0);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_0;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1645855185"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1992341523"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_0);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_1;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_1086301804"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_701457907"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_1);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_2;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_992425492"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_2);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_2062521514"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_2);
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
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_133234853"}, UnderlyingStipulations_NoUnderlyingStips_0);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_969598917"}, UnderlyingStipulations_NoUnderlyingStips_0);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_0);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_1;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_1679038397"}, UnderlyingStipulations_NoUnderlyingStips_1);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_2112734855"}, UnderlyingStipulations_NoUnderlyingStips_1);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_1);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_0;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_777639472"}, UndlyInstrumentParties_NoUndlyInstrumentParties_0);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_0);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1243223350}, UndlyInstrumentParties_NoUndlyInstrumentParties_0);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_0);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_694815239"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{637403129}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_0);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_166572201"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1068565691}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_1);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1839634116"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{993945174}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_2);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_1;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2088217269"}, UndlyInstrumentParties_NoUndlyInstrumentParties_1);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_1);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1309994494}, UndlyInstrumentParties_NoUndlyInstrumentParties_1);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_1);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_245108264"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{583356440}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_3);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1062429225"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1481126360}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_4);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1080604825"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{560800762}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_5);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_2;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1325984236"}, UndlyInstrumentParties_NoUndlyInstrumentParties_2);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_2);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1262258670}, UndlyInstrumentParties_NoUndlyInstrumentParties_2);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_2);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2081944496"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{45176357}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_6);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::Advertisement::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_1;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_304160933"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{904059765}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1724214754"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{269412141}, UnderlyingInstrument_1);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_1;
    UnderlyingAdjustedQuantity_1.setString("17322433");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_1, UnderlyingInstrument_1);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_1;
    UnderlyingAllocationPercent_1.setString("5.780000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_1, UnderlyingInstrument_1);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_1;
    UnderlyingAttachmentPoint_1.setString("53.230000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_827983052"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_556979382"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1403990562"}, UnderlyingInstrument_1);
    FIX::UnderlyingCapValue UnderlyingCapValue_1;
    UnderlyingCapValue_1.setString("14653861");
set_field(noUnderlyings_0_1, UnderlyingCapValue_1, UnderlyingInstrument_1);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_1;
    UnderlyingCashAmount_1.setString("7235515");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_1);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_1;
    UnderlyingContractMultiplier_1.setString("11575366");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1717496757}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_265806227"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1149492101"}, UnderlyingInstrument_1);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_1;
    UnderlyingCouponRate_1.setString("76.030000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_467570092"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_1);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_1;
    UnderlyingCurrentValue_1.setString("15299993");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_1, UnderlyingInstrument_1);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_1;
    UnderlyingDetachmentPoint_1.setString("30.780000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_1, UnderlyingInstrument_1);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_1;
    UnderlyingDirtyPrice_1.setString("3964852");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_1, UnderlyingInstrument_1);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_1;
    UnderlyingEndPrice_1.setString("20908000");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_1, UnderlyingInstrument_1);
    FIX::UnderlyingEndValue UnderlyingEndValue_1;
    UnderlyingEndValue_1.setString("20542273");
set_field(noUnderlyings_0_1, UnderlyingEndValue_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{415908202}, UnderlyingInstrument_1);
    FIX::UnderlyingFXRate UnderlyingFXRate_1;
    UnderlyingFXRate_1.setString("12055751");
set_field(noUnderlyings_0_1, UnderlyingFXRate_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_1);
    FIX::UnderlyingFactor UnderlyingFactor_1;
    UnderlyingFactor_1.setString("3503690");
set_field(noUnderlyings_0_1, UnderlyingFactor_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{1250751458}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_381830680"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1254428816"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_827482564"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_651242821"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_839188518"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1181853143"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1360418145"}, UnderlyingInstrument_1);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_1;
    UnderlyingNotionalPercentageOutstanding_1.setString("15.700000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_1);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_1;
    UnderlyingOriginalNotionalPercentageOutstanding_1.setString("50.590000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_985074103"}, UnderlyingInstrument_1);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_1;
    UnderlyingPriceUnitOfMeasureQty_1.setString("3149004");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{941997665}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{2142610752}, UnderlyingInstrument_1);
    FIX::UnderlyingPx UnderlyingPx_1;
    UnderlyingPx_1.setString("20323972");
set_field(noUnderlyings_0_1, UnderlyingPx_1, UnderlyingInstrument_1);
    FIX::UnderlyingQty UnderlyingQty_1;
    UnderlyingQty_1.setString("12078038");
set_field(noUnderlyings_0_1, UnderlyingQty_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1144619205"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_764921173"}, UnderlyingInstrument_1);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_1;
    UnderlyingRepurchaseRate_1.setString("39.840000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{391735923}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_80801568"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1057889653"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1119979002"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_477286789"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1001206085"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1026722668"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_893194992"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_59297538"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1104392415"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_1);
    FIX::UnderlyingStartValue UnderlyingStartValue_1;
    UnderlyingStartValue_1.setString("13100489");
set_field(noUnderlyings_0_1, UnderlyingStartValue_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1486223096"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_1);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_1;
    UnderlyingStrikePrice_1.setString("21374659");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_1, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1189697728"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1171901056"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1350400414"}, UnderlyingInstrument_1);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_709385650"}, UnderlyingInstrument_1);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_1;
    UnderlyingUnitOfMeasureQty_1.setString("7632499");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_1, UnderlyingInstrument_1);
    all_values.push_back(UnderlyingInstrument_1);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_3;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1694459753"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1078150393"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_3);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_2;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1689586857"}, UnderlyingStipulations_NoUnderlyingStips_2);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_963063963"}, UnderlyingStipulations_NoUnderlyingStips_2);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_2);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_3;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_686722415"}, UndlyInstrumentParties_NoUndlyInstrumentParties_3);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_3);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1497533720}, UndlyInstrumentParties_NoUndlyInstrumentParties_3);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_3);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1808786704"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{407939726}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_7);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_50953692"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{138589846}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_8);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1409145811"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1077676361}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_9);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_4;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1031784838"}, UndlyInstrumentParties_NoUndlyInstrumentParties_4);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_4);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{34585128}, UndlyInstrumentParties_NoUndlyInstrumentParties_4);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_4);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_631008698"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1520808224}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_10);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_5;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_478374443"}, UndlyInstrumentParties_NoUndlyInstrumentParties_5);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_5);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{1510790494}, UndlyInstrumentParties_NoUndlyInstrumentParties_5);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_5);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::Advertisement::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1792957668"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{713707260}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_11);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_2);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_1;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_4"}, header_1);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_408723954"}, header_1);
  set_header_field(msg.getHeader(), FIX::BodyLength{533549086}, header_1);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1924433927"}, header_1);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1486874347"}, header_1);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1295388578"}, header_1);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1466537137"}, header_1);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{302454662}, header_1);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_1);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{5775904}, header_1);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_2030439798"}, header_1);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_467598386"}, header_1);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1084234242"}, header_1);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(16, 55, 1, 23, 5, 2015)}, header_1);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_1);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_1);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_842499123"}, header_1);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{89168675}, header_1);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1620774001"}, header_1);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1320873566"}, header_1);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_710225287"}, header_1);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(10, 48, 27, 24, 7, 2006)}, header_1);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_848386543"}, header_1);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_103813961"}, header_1);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1379242124"}, header_1);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_167440032"}, header_1);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{406268624}, header_1);
  all_values.push_back(header_1);
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
