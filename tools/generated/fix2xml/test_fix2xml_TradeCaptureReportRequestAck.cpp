#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReportRequestAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportRequestAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::TradeCaptureReportRequestAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequestAck_0;
  set_field(msg, FIX::EncodedText{"DATA_1302775879"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::EncodedTextLen{1217444681}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::FirmTradeID{"STRING_1398265509"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::MessageEventSource{"STRING_1739028345"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::MultiLegReportingType{'1'}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::ResponseDestination{"STRING_2075426849"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::ResponseTransportType{1}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::SecondaryFirmTradeID{"STRING_1471393634"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::SecondaryTradeID{"STRING_687993141"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::Text{"STRING_911162201"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TotNumTradeReports{1821696444}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeID{"STRING_118968575"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeRequestID{"STRING_993570311"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeRequestResult{9}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeRequestStatus{2}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeRequestType{1}, TradeCaptureReportRequestAck_0);
  all_values.push_back(TradeCaptureReportRequestAck_0);

  all_compo_names.insert("TradeCaptureReportRequestAck");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_143;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_38021056"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1742909320}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_46074390"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1571823463}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_933997173"}, InstrumentLeg_143);
    FIX::LegContractMultiplier LegContractMultiplier_143;
    LegContractMultiplier_143.setString("13397895");
set_field(noLegs_0_0, LegContractMultiplier_143, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1217673109}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1175492213"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_203442562"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1996755412"}, InstrumentLeg_143);
    FIX::LegCouponRate LegCouponRate_143;
    LegCouponRate_143.setString("73.230000");
set_field(noLegs_0_0, LegCouponRate_143, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1356038282"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_425999315"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1869347679}, InstrumentLeg_143);
    FIX::LegFactor LegFactor_143;
    LegFactor_143.setString("10759478");
set_field(noLegs_0_0, LegFactor_143, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{92945295}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1797290881"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_508549602"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1564338930"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_337800374"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_283807879"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_328017483"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_12013171"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_402776454"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_143);
    FIX::LegOptionRatio LegOptionRatio_143;
    LegOptionRatio_143.setString("8819536");
set_field(noLegs_0_0, LegOptionRatio_143, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_577185851"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1393449721"}, InstrumentLeg_143);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_143;
    LegPriceUnitOfMeasureQty_143.setString("6360821");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_143, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegProduct{615206907}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegPutOrCall{988875393}, InstrumentLeg_143);
    FIX::LegRatioQty LegRatioQty_143;
    LegRatioQty_143.setString("6821565");
set_field(noLegs_0_0, LegRatioQty_143, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_39546722"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1922872566"}, InstrumentLeg_143);
    FIX::LegRepurchaseRate LegRepurchaseRate_143;
    LegRepurchaseRate_143.setString("60.290000");
set_field(noLegs_0_0, LegRepurchaseRate_143, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{1257219832}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_950881132"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_77904943"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1106491596"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1132508455"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_1433943225"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_1577573766"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegSide{'4'}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1859942540"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_143);
    FIX::LegStrikePrice LegStrikePrice_143;
    LegStrikePrice_143.setString("19528878");
set_field(noLegs_0_0, LegStrikePrice_143, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_949245030"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_2053925512"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1369743117"}, InstrumentLeg_143);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1287045405"}, InstrumentLeg_143);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_143;
    LegUnitOfMeasureQty_143.setString("1902497");
set_field(noLegs_0_0, LegUnitOfMeasureQty_143, InstrumentLeg_143);
    all_values.push_back(InstrumentLeg_143);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_287;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1299058576"}, LegSecAltIDGrp_NoLegSecurityAltID_287);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_593026197"}, LegSecAltIDGrp_NoLegSecurityAltID_287);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_287);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_288;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_871864747"}, LegSecAltIDGrp_NoLegSecurityAltID_288);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_33528592"}, LegSecAltIDGrp_NoLegSecurityAltID_288);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_288);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_144;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1170212048"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{117830820}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_669610713"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1785418955}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1106706214"}, InstrumentLeg_144);
    FIX::LegContractMultiplier LegContractMultiplier_144;
    LegContractMultiplier_144.setString("13517672");
set_field(noLegs_0_1, LegContractMultiplier_144, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{1824965677}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_882095132"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1226229605"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_934701861"}, InstrumentLeg_144);
    FIX::LegCouponRate LegCouponRate_144;
    LegCouponRate_144.setString("62.640000");
set_field(noLegs_0_1, LegCouponRate_144, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_1304134548"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegCurrency{"USD"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_590594125"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1471283575}, InstrumentLeg_144);
    FIX::LegFactor LegFactor_144;
    LegFactor_144.setString("12874290");
set_field(noLegs_0_1, LegFactor_144, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{303053017}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_623237725"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_685321343"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_108457205"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1572482755"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_591763207"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_1478200322"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_712044512"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_782012950"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_144);
    FIX::LegOptionRatio LegOptionRatio_144;
    LegOptionRatio_144.setString("20111030");
set_field(noLegs_0_1, LegOptionRatio_144, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1375039147"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_1900342023"}, InstrumentLeg_144);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_144;
    LegPriceUnitOfMeasureQty_144.setString("20446316");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_144, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegProduct{397767547}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegPutOrCall{2018172843}, InstrumentLeg_144);
    FIX::LegRatioQty LegRatioQty_144;
    LegRatioQty_144.setString("5667587");
set_field(noLegs_0_1, LegRatioQty_144, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_35702854"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_977395409"}, InstrumentLeg_144);
    FIX::LegRepurchaseRate LegRepurchaseRate_144;
    LegRepurchaseRate_144.setString("59.710000");
set_field(noLegs_0_1, LegRepurchaseRate_144, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1860668532}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1859490542"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_997271928"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_647886745"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1544983158"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_153922829"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_541596555"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegSide{'2'}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_744516954"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_144);
    FIX::LegStrikePrice LegStrikePrice_144;
    LegStrikePrice_144.setString("10475699");
set_field(noLegs_0_1, LegStrikePrice_144, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_488634207"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_40767360"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1156027177"}, InstrumentLeg_144);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_2061116963"}, InstrumentLeg_144);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_144;
    LegUnitOfMeasureQty_144.setString("6325305");
set_field(noLegs_0_1, LegUnitOfMeasureQty_144, InstrumentLeg_144);
    all_values.push_back(InstrumentLeg_144);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_289;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_625677827"}, LegSecAltIDGrp_NoLegSecurityAltID_289);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1414543518"}, LegSecAltIDGrp_NoLegSecurityAltID_289);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_289);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_290;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_1515221127"}, LegSecAltIDGrp_NoLegSecurityAltID_290);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_489297268"}, LegSecAltIDGrp_NoLegSecurityAltID_290);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_290);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_100;
  FIX::AttachmentPoint AttachmentPoint_100;
  AttachmentPoint_100.setString("90.170000");
set_field(msg, AttachmentPoint_100, Instrument_100);
  set_field(msg, FIX::CFICode{"STRING_1268079502"}, Instrument_100);
  set_field(msg, FIX::CPProgram{2}, Instrument_100);
  set_field(msg, FIX::CPRegType{"STRING_1039866565"}, Instrument_100);
  FIX::CapPrice CapPrice_100;
  CapPrice_100.setString("11387686");
set_field(msg, CapPrice_100, Instrument_100);
  FIX::ContractMultiplier ContractMultiplier_100;
  ContractMultiplier_100.setString("9532040");
set_field(msg, ContractMultiplier_100, Instrument_100);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_100);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_2116164107"}, Instrument_100);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_724246370"}, Instrument_100);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_788754303"}, Instrument_100);
  FIX::CouponRate CouponRate_100;
  CouponRate_100.setString("10.010000");
set_field(msg, CouponRate_100, Instrument_100);
  set_field(msg, FIX::CreditRating{"STRING_1721518299"}, Instrument_100);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1436641049"}, Instrument_100);
  FIX::DetachmentPoint DetachmentPoint_100;
  DetachmentPoint_100.setString("5.110000");
set_field(msg, DetachmentPoint_100, Instrument_100);
  set_field(msg, FIX::EncodedIssuer{"DATA_1875441128"}, Instrument_100);
  set_field(msg, FIX::EncodedIssuerLen{1978237604}, Instrument_100);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1441171094"}, Instrument_100);
  set_field(msg, FIX::EncodedSecurityDescLen{472474434}, Instrument_100);
  set_field(msg, FIX::ExerciseStyle{1}, Instrument_100);
  FIX::Factor Factor_100;
  Factor_100.setString("7966171");
set_field(msg, Factor_100, Instrument_100);
  set_field(msg, FIX::FlexProductEligibilityIndicator{true}, Instrument_100);
  set_field(msg, FIX::FlexibleIndicator{true}, Instrument_100);
  FIX::FloorPrice FloorPrice_100;
  FloorPrice_100.setString("8373844");
set_field(msg, FloorPrice_100, Instrument_100);
  set_field(msg, FIX::FlowScheduleType{0}, Instrument_100);
  set_field(msg, FIX::InstrRegistry{"STRING_98417961"}, Instrument_100);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_100);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1015331787"}, Instrument_100);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_724095788"}, Instrument_100);
  set_field(msg, FIX::Issuer{"STRING_736974908"}, Instrument_100);
  set_field(msg, FIX::ListMethod{0}, Instrument_100);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1213393056"}, Instrument_100);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1379073925"}, Instrument_100);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1651148768"}, Instrument_100);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1599838357"}, Instrument_100);
  FIX::MinPriceIncrement MinPriceIncrement_100;
  MinPriceIncrement_100.setString("2714568");
set_field(msg, MinPriceIncrement_100, Instrument_100);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_100;
  MinPriceIncrementAmount_100.setString("6424338");
set_field(msg, MinPriceIncrementAmount_100, Instrument_100);
  set_field(msg, FIX::NTPositionLimit{405558757}, Instrument_100);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_100;
  NotionalPercentageOutstanding_100.setString("62.620000");
set_field(msg, NotionalPercentageOutstanding_100, Instrument_100);
  set_field(msg, FIX::OptAttribute{'6'}, Instrument_100);
  FIX::OptPayoutAmount OptPayoutAmount_100;
  OptPayoutAmount_100.setString("11298051");
set_field(msg, OptPayoutAmount_100, Instrument_100);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_100);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_100;
  OriginalNotionalPercentageOutstanding_100.setString("16.290000");
set_field(msg, OriginalNotionalPercentageOutstanding_100, Instrument_100);
  set_field(msg, FIX::Pool{"STRING_703839778"}, Instrument_100);
  set_field(msg, FIX::PositionLimit{1424937966}, Instrument_100);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_100);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_431797258"}, Instrument_100);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_100;
  PriceUnitOfMeasureQty_100.setString("12556919");
set_field(msg, PriceUnitOfMeasureQty_100, Instrument_100);
  set_field(msg, FIX::Product{5}, Instrument_100);
  set_field(msg, FIX::ProductComplex{"STRING_904271693"}, Instrument_100);
  set_field(msg, FIX::PutOrCall{1}, Instrument_100);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1607776697"}, Instrument_100);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_276832451"}, Instrument_100);
  FIX::RepurchaseRate RepurchaseRate_100;
  RepurchaseRate_100.setString("70.070000");
set_field(msg, RepurchaseRate_100, Instrument_100);
  set_field(msg, FIX::RepurchaseTerm{297677520}, Instrument_100);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_100);
  set_field(msg, FIX::SecurityDesc{"STRING_1235044968"}, Instrument_100);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1767592558"}, Instrument_100);
  set_field(msg, FIX::SecurityGroup{"STRING_1820752174"}, Instrument_100);
  set_field(msg, FIX::SecurityID{"STRING_1959140756"}, Instrument_100);
  set_field(msg, FIX::SecurityIDSource{"STRING_F"}, Instrument_100);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_100);
  set_field(msg, FIX::SecuritySubType{"STRING_1025050165"}, Instrument_100);
  set_field(msg, FIX::SecurityType{"STRING_CS"}, Instrument_100);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_100);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_100);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_2007614586"}, Instrument_100);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_202436729"}, Instrument_100);
  set_field(msg, FIX::StrikeCurrency{"JPY"}, Instrument_100);
  FIX::StrikeMultiplier StrikeMultiplier_100;
  StrikeMultiplier_100.setString("8135510");
set_field(msg, StrikeMultiplier_100, Instrument_100);
  FIX::StrikePrice StrikePrice_100;
  StrikePrice_100.setString("20127687");
set_field(msg, StrikePrice_100, Instrument_100);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_100);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_100;
  StrikePriceBoundaryPrecision_100.setString("26.350000");
set_field(msg, StrikePriceBoundaryPrecision_100, Instrument_100);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_100);
  FIX::StrikeValue StrikeValue_100;
  StrikeValue_100.setString("4729084");
set_field(msg, StrikeValue_100, Instrument_100);
  set_field(msg, FIX::Symbol{"STRING_475341128"}, Instrument_100);
  set_field(msg, FIX::SymbolSfx{"STRING_CD"}, Instrument_100);
  set_field(msg, FIX::TimeUnit{"STRING_S"}, Instrument_100);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_100);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_100);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_100;
  UnitOfMeasureQty_100.setString("5329590");
set_field(msg, UnitOfMeasureQty_100, Instrument_100);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_100);
  all_values.push_back(Instrument_100);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_205;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_205);
    FIX::ComplexEventPrice ComplexEventPrice_205;
    ComplexEventPrice_205.setString("10444712");
set_field(noComplexEvents_0_0, ComplexEventPrice_205, ComplexEvents_NoComplexEvents_205);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_205);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_205;
    ComplexEventPriceBoundaryPrecision_205.setString("73.980000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_205, ComplexEvents_NoComplexEvents_205);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_205);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_205);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_205;
    ComplexOptPayoutAmount_205.setString("5688045");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_205, ComplexEvents_NoComplexEvents_205);
    all_values.push_back(ComplexEvents_NoComplexEvents_205);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_415;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 48, 41, 6, 11, 2017)}, ComplexEventDates_NoComplexEventDates_415);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 37, 41, 12, 1, 2012)}, ComplexEventDates_NoComplexEventDates_415);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_415);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_834;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 42, 8)}, ComplexEventTimes_NoComplexEventTimes_834);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 45, 36)}, ComplexEventTimes_NoComplexEventTimes_834);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_834);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_835;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 19, 43)}, ComplexEventTimes_NoComplexEventTimes_835);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 42, 30)}, ComplexEventTimes_NoComplexEventTimes_835);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_835);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_206;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_206);
    FIX::ComplexEventPrice ComplexEventPrice_206;
    ComplexEventPrice_206.setString("16070062");
set_field(noComplexEvents_0_1, ComplexEventPrice_206, ComplexEvents_NoComplexEvents_206);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_206);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_206;
    ComplexEventPriceBoundaryPrecision_206.setString("70.680000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_206, ComplexEvents_NoComplexEvents_206);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_206);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_206);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_206;
    ComplexOptPayoutAmount_206.setString("1237024");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_206, ComplexEvents_NoComplexEvents_206);
    all_values.push_back(ComplexEvents_NoComplexEvents_206);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_416;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 55, 52, 16, 3, 2014)}, ComplexEventDates_NoComplexEventDates_416);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 18, 26, 16, 1, 2011)}, ComplexEventDates_NoComplexEventDates_416);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_416);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_836;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 59, 12)}, ComplexEventTimes_NoComplexEventTimes_836);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 54, 54)}, ComplexEventTimes_NoComplexEventTimes_836);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_836);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_417;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 13, 15, 0, 11, 2006)}, ComplexEventDates_NoComplexEventDates_417);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(2, 26, 34, 6, 7, 2004)}, ComplexEventDates_NoComplexEventDates_417);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_417);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_837;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 13, 54)}, ComplexEventTimes_NoComplexEventTimes_837);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 57, 13)}, ComplexEventTimes_NoComplexEventTimes_837);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_837);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_418;
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 12, 58, 19, 6, 2002)}, ComplexEventDates_NoComplexEventDates_418);
      set_field(noComplexEventDates_1_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 36, 46, 23, 2, 2012)}, ComplexEventDates_NoComplexEventDates_418);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_418);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_838;
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 47, 6)}, ComplexEventTimes_NoComplexEventTimes_838);
        set_field(noComplexEventTimes_1_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 51, 12)}, ComplexEventTimes_NoComplexEventTimes_838);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_838);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_2.addGroup(noComplexEventTimes_1_2_2_0);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_2);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_207;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_207);
    FIX::ComplexEventPrice ComplexEventPrice_207;
    ComplexEventPrice_207.setString("740789");
set_field(noComplexEvents_0_2, ComplexEventPrice_207, ComplexEvents_NoComplexEvents_207);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_207);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_207;
    ComplexEventPriceBoundaryPrecision_207.setString("24.390000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_207, ComplexEvents_NoComplexEvents_207);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_207);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_207);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_207;
    ComplexOptPayoutAmount_207.setString("8258398");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_207, ComplexEvents_NoComplexEvents_207);
    all_values.push_back(ComplexEvents_NoComplexEvents_207);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_419;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 46, 11, 15, 4, 2014)}, ComplexEventDates_NoComplexEventDates_419);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 24, 46, 6, 2, 2017)}, ComplexEventDates_NoComplexEventDates_419);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_419);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_839;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 42, 56)}, ComplexEventTimes_NoComplexEventTimes_839);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 47, 11)}, ComplexEventTimes_NoComplexEventTimes_839);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_839);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_195;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1005433671"}, EvntGrp_NoEvents_195);
    FIX::EventPx EventPx_195;
    EventPx_195.setString("2267263");
set_field(noEvents_0_0, EventPx_195, EvntGrp_NoEvents_195);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1912232177"}, EvntGrp_NoEvents_195);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(11, 18, 2, 0, 3, 2000)}, EvntGrp_NoEvents_195);
    set_field(noEvents_0_0, FIX::EventType{16}, EvntGrp_NoEvents_195);
    all_values.push_back(EvntGrp_NoEvents_195);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_191;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_922329248"}, InstrumentParties_NoInstrumentParties_191);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_191);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{246920934}, InstrumentParties_NoInstrumentParties_191);
    all_values.push_back(InstrumentParties_NoInstrumentParties_191);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_294586908"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1924389161}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_384);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1058489778"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1746587053}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_385);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1584821948"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{2046306261}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_386);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_192;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_756763983"}, InstrumentParties_NoInstrumentParties_192);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_192);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{252507776}, InstrumentParties_NoInstrumentParties_192);
    all_values.push_back(InstrumentParties_NoInstrumentParties_192);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1381225721"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1800343836}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_387);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1971160066"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{128762205}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_388);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389;
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubID{"STRING_1879623573"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389);
      set_field(noInstrumentPartySubIDs_1_1_2, FIX::InstrumentPartySubIDType{829110089}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_389);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_193;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_355488553"}, InstrumentParties_NoInstrumentParties_193);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_193);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1237003129}, InstrumentParties_NoInstrumentParties_193);
    all_values.push_back(InstrumentParties_NoInstrumentParties_193);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_87476872"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{165191683}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_390);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_460760320"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{1992190843}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_391);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_200;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_780252136"}, SecAltIDGrp_NoSecurityAltID_200);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_778412077"}, SecAltIDGrp_NoSecurityAltID_200);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_200);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_201;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_317584411"}, SecAltIDGrp_NoSecurityAltID_201);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_770841699"}, SecAltIDGrp_NoSecurityAltID_201);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_201);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  // SecurityXML
  multiset<string> SecurityXML_200;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1025333011"}, SecurityXML_200);
  set_field(msg, FIX::SecurityXMLLen{1446019207}, SecurityXML_200);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1065428607"}, SecurityXML_200);
  all_values.push_back(SecurityXML_200);
  all_compo_names.insert("..");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_141;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_357025337"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{664532013}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_239576824"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{255847950}, UnderlyingInstrument_141);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_141;
    UnderlyingAdjustedQuantity_141.setString("14212959");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_141, UnderlyingInstrument_141);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_141;
    UnderlyingAllocationPercent_141.setString("83.460000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_141, UnderlyingInstrument_141);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_141;
    UnderlyingAttachmentPoint_141.setString("57.260000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_313617687"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_273980420"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_161215914"}, UnderlyingInstrument_141);
    FIX::UnderlyingCapValue UnderlyingCapValue_141;
    UnderlyingCapValue_141.setString("1372941");
set_field(noUnderlyings_0_0, UnderlyingCapValue_141, UnderlyingInstrument_141);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_141;
    UnderlyingCashAmount_141.setString("4027426");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_141);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_141;
    UnderlyingContractMultiplier_141.setString("9664041");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{758231178}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1537727942"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_55923675"}, UnderlyingInstrument_141);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_141;
    UnderlyingCouponRate_141.setString("24.950000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_1625204815"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_141);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_141;
    UnderlyingCurrentValue_141.setString("14699120");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_141, UnderlyingInstrument_141);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_141;
    UnderlyingDetachmentPoint_141.setString("41.690000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_141, UnderlyingInstrument_141);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_141;
    UnderlyingDirtyPrice_141.setString("1630313");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_141, UnderlyingInstrument_141);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_141;
    UnderlyingEndPrice_141.setString("1008404");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_141, UnderlyingInstrument_141);
    FIX::UnderlyingEndValue UnderlyingEndValue_141;
    UnderlyingEndValue_141.setString("20814385");
set_field(noUnderlyings_0_0, UnderlyingEndValue_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{933873003}, UnderlyingInstrument_141);
    FIX::UnderlyingFXRate UnderlyingFXRate_141;
    UnderlyingFXRate_141.setString("11261734");
set_field(noUnderlyings_0_0, UnderlyingFXRate_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_141);
    FIX::UnderlyingFactor UnderlyingFactor_141;
    UnderlyingFactor_141.setString("19993016");
set_field(noUnderlyings_0_0, UnderlyingFactor_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1928411975}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1736999477"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_516349975"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_20505151"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1992847427"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1937645971"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1060743498"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_353719506"}, UnderlyingInstrument_141);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_141;
    UnderlyingNotionalPercentageOutstanding_141.setString("0.100000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_141);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_141;
    UnderlyingOriginalNotionalPercentageOutstanding_141.setString("54.200000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_241074115"}, UnderlyingInstrument_141);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_141;
    UnderlyingPriceUnitOfMeasureQty_141.setString("17374665");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{408291260}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1207478309}, UnderlyingInstrument_141);
    FIX::UnderlyingPx UnderlyingPx_141;
    UnderlyingPx_141.setString("3482140");
set_field(noUnderlyings_0_0, UnderlyingPx_141, UnderlyingInstrument_141);
    FIX::UnderlyingQty UnderlyingQty_141;
    UnderlyingQty_141.setString("19460192");
set_field(noUnderlyings_0_0, UnderlyingQty_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1263401984"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1417716568"}, UnderlyingInstrument_141);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_141;
    UnderlyingRepurchaseRate_141.setString("3.700000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1484517342}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_800495736"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_746168732"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1100887864"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_963527039"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_847009171"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1034842797"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1897400042"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1973182621"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_267333289"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_141);
    FIX::UnderlyingStartValue UnderlyingStartValue_141;
    UnderlyingStartValue_141.setString("17541109");
set_field(noUnderlyings_0_0, UnderlyingStartValue_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2004332766"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_141);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_141;
    UnderlyingStrikePrice_141.setString("18496965");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_141, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_2055730304"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_687875950"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_55932403"}, UnderlyingInstrument_141);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_12026666"}, UnderlyingInstrument_141);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_141;
    UnderlyingUnitOfMeasureQty_141.setString("20225998");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_141, UnderlyingInstrument_141);
    all_values.push_back(UnderlyingInstrument_141);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_292;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_253100782"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_292);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1612582763"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_292);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_292);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_293;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_979159084"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_293);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1460579091"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_293);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_293);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_294;
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltID{"STRING_1960796836"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_294);
      set_field(noUnderlyingSecurityAltID_0_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_777694639"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_294);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_294);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_287;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1231029757"}, UnderlyingStipulations_NoUnderlyingStips_287);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_53951361"}, UnderlyingStipulations_NoUnderlyingStips_287);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_287);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_288;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_2061014770"}, UnderlyingStipulations_NoUnderlyingStips_288);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_2031525493"}, UnderlyingStipulations_NoUnderlyingStips_288);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_288);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_297;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1014418986"}, UndlyInstrumentParties_NoUndlyInstrumentParties_297);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_297);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1647129264}, UndlyInstrumentParties_NoUndlyInstrumentParties_297);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_297);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_599;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_597485279"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_599);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1472828238}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_599);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_599);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_298;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_169111424"}, UndlyInstrumentParties_NoUndlyInstrumentParties_298);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_298);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1079455538}, UndlyInstrumentParties_NoUndlyInstrumentParties_298);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_298);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_600;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_317303968"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_600);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{706587990}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_600);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_600);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_299;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1875657088"}, UndlyInstrumentParties_NoUndlyInstrumentParties_299);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_299);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1394463940}, UndlyInstrumentParties_NoUndlyInstrumentParties_299);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_299);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_601;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_237577291"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_601);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1269580160}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_601);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_601);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_602;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_354973667"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_602);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{490678073}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_602);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_602);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_603;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_734679275"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_603);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_2, FIX::UnderlyingInstrumentPartySubIDType{1334132752}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_603);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_603);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_142;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1951257164"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{547992464}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_2111827391"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{380270944}, UnderlyingInstrument_142);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_142;
    UnderlyingAdjustedQuantity_142.setString("17790222");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_142, UnderlyingInstrument_142);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_142;
    UnderlyingAllocationPercent_142.setString("51.050000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_142, UnderlyingInstrument_142);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_142;
    UnderlyingAttachmentPoint_142.setString("20.670000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1663064066"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_818415198"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1308221053"}, UnderlyingInstrument_142);
    FIX::UnderlyingCapValue UnderlyingCapValue_142;
    UnderlyingCapValue_142.setString("3631493");
set_field(noUnderlyings_0_1, UnderlyingCapValue_142, UnderlyingInstrument_142);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_142;
    UnderlyingCashAmount_142.setString("3180608");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_142);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_142;
    UnderlyingContractMultiplier_142.setString("9606345");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1790889053}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1379110613"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1159854217"}, UnderlyingInstrument_142);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_142;
    UnderlyingCouponRate_142.setString("9.430000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1405071156"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_142);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_142;
    UnderlyingCurrentValue_142.setString("11332445");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_142, UnderlyingInstrument_142);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_142;
    UnderlyingDetachmentPoint_142.setString("88.100000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_142, UnderlyingInstrument_142);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_142;
    UnderlyingDirtyPrice_142.setString("6764292");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_142, UnderlyingInstrument_142);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_142;
    UnderlyingEndPrice_142.setString("9173504");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_142, UnderlyingInstrument_142);
    FIX::UnderlyingEndValue UnderlyingEndValue_142;
    UnderlyingEndValue_142.setString("19402861");
set_field(noUnderlyings_0_1, UnderlyingEndValue_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1946009387}, UnderlyingInstrument_142);
    FIX::UnderlyingFXRate UnderlyingFXRate_142;
    UnderlyingFXRate_142.setString("12723241");
set_field(noUnderlyings_0_1, UnderlyingFXRate_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_142);
    FIX::UnderlyingFactor UnderlyingFactor_142;
    UnderlyingFactor_142.setString("5332050");
set_field(noUnderlyings_0_1, UnderlyingFactor_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{458973211}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_87254043"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1081197478"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_423316954"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_467524987"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_712736051"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_441612059"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_761327054"}, UnderlyingInstrument_142);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_142;
    UnderlyingNotionalPercentageOutstanding_142.setString("64.690000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_142);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_142;
    UnderlyingOriginalNotionalPercentageOutstanding_142.setString("81.080000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_591465772"}, UnderlyingInstrument_142);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_142;
    UnderlyingPriceUnitOfMeasureQty_142.setString("15780880");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1132063649}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1552100353}, UnderlyingInstrument_142);
    FIX::UnderlyingPx UnderlyingPx_142;
    UnderlyingPx_142.setString("12214934");
set_field(noUnderlyings_0_1, UnderlyingPx_142, UnderlyingInstrument_142);
    FIX::UnderlyingQty UnderlyingQty_142;
    UnderlyingQty_142.setString("3636906");
set_field(noUnderlyings_0_1, UnderlyingQty_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_564470923"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1944354421"}, UnderlyingInstrument_142);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_142;
    UnderlyingRepurchaseRate_142.setString("17.700000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{2041629109}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1226319707"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_754522718"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1596854271"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1902748934"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1671873158"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1389656725"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1701274673"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_796713617"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1673137251"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_142);
    FIX::UnderlyingStartValue UnderlyingStartValue_142;
    UnderlyingStartValue_142.setString("12556868");
set_field(noUnderlyings_0_1, UnderlyingStartValue_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1760391294"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_142);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_142;
    UnderlyingStrikePrice_142.setString("804326");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_142, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1880929569"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_2120615842"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_841759688"}, UnderlyingInstrument_142);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_2109246039"}, UnderlyingInstrument_142);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_142;
    UnderlyingUnitOfMeasureQty_142.setString("12331594");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_142, UnderlyingInstrument_142);
    all_values.push_back(UnderlyingInstrument_142);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_295;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_553228163"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_295);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_663763877"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_295);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_295);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_296;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1895887797"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_296);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2105328516"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_296);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_296);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_289;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_112094764"}, UnderlyingStipulations_NoUnderlyingStips_289);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_522315791"}, UnderlyingStipulations_NoUnderlyingStips_289);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_289);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_290;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1682128128"}, UnderlyingStipulations_NoUnderlyingStips_290);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1880856534"}, UnderlyingStipulations_NoUnderlyingStips_290);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_290);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_300;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_760964188"}, UndlyInstrumentParties_NoUndlyInstrumentParties_300);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_300);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{2013315524}, UndlyInstrumentParties_NoUndlyInstrumentParties_300);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_300);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_604;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_12285115"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_604);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1255488601}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_604);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_604);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_605;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_70020499"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_605);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{808998732}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_605);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_605);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_301;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_781142204"}, UndlyInstrumentParties_NoUndlyInstrumentParties_301);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_301);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{2064685560}, UndlyInstrumentParties_NoUndlyInstrumentParties_301);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_301);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_606;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1325210056"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_606);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1596205694}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_606);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_606);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_607;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_474482485"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_607);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{1058655978}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_607);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_607);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  // header
  multiset<string> header_99;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_8"}, header_99);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1316242173"}, header_99);
  set_header_field(msg.getHeader(), FIX::BodyLength{1020418369}, header_99);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_655013692"}, header_99);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_2080066322"}, header_99);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1573646532"}, header_99);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1318777569"}, header_99);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1828470471}, header_99);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_99);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1056551276}, header_99);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1940565235"}, header_99);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2053807192"}, header_99);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_591195757"}, header_99);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(12, 5, 59, 20, 4, 2000)}, header_99);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_99);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_99);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_835633926"}, header_99);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{77763830}, header_99);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_2095426456"}, header_99);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_752835838"}, header_99);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_471813681"}, header_99);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(4, 46, 35, 17, 12, 2000)}, header_99);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_278425817"}, header_99);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_47637365"}, header_99);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_630906448"}, header_99);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1597203387"}, header_99);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1876107837}, header_99);
  all_values.push_back(header_99);
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
