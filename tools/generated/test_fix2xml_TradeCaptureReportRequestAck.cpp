#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::TradeCaptureReportRequestAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequestAck_0;
  set_field(msg, FIX::EncodedText{"DATA_1286216177"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::EncodedTextLen{759305087}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::FirmTradeID{"STRING_144595502"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::MessageEventSource{"STRING_401442077"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::MultiLegReportingType{'3'}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::ResponseDestination{"STRING_748291407"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::ResponseTransportType{0}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::SecondaryFirmTradeID{"STRING_420814028"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::SecondaryTradeID{"STRING_257362446"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::SubscriptionRequestType{'1'}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::Text{"STRING_497038081"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TotNumTradeReports{1091150304}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeID{"STRING_645278909"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeRequestID{"STRING_1746924301"}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeRequestResult{0}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeRequestStatus{0}, TradeCaptureReportRequestAck_0);
  set_field(msg, FIX::TradeRequestType{1}, TradeCaptureReportRequestAck_0);
  all_values.push_back(TradeCaptureReportRequestAck_0);

  all_compo_names.insert("TradeCaptureReportRequestAck");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_118;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1654478238"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1763910635}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_778738004"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1632029719}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1291681380"}, InstrumentLeg_118);
    FIX::LegContractMultiplier LegContractMultiplier_118;
    LegContractMultiplier_118.setString("10163908");
set_field(noLegs_0_0, LegContractMultiplier_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1674266109}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_603717064"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1483538997"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1798516967"}, InstrumentLeg_118);
    FIX::LegCouponRate LegCouponRate_118;
    LegCouponRate_118.setString("19.440000");
set_field(noLegs_0_0, LegCouponRate_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1946169632"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_557991071"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{681929710}, InstrumentLeg_118);
    FIX::LegFactor LegFactor_118;
    LegFactor_118.setString("11506865");
set_field(noLegs_0_0, LegFactor_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1483243288}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_1430221117"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_421044937"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1904057316"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1687583563"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1217606366"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_253611749"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_631250220"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1862885275"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_118);
    FIX::LegOptionRatio LegOptionRatio_118;
    LegOptionRatio_118.setString("16347367");
set_field(noLegs_0_0, LegOptionRatio_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_109937861"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_122877634"}, InstrumentLeg_118);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_118;
    LegPriceUnitOfMeasureQty_118.setString("20305646");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegProduct{1764416100}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1886788269}, InstrumentLeg_118);
    FIX::LegRatioQty LegRatioQty_118;
    LegRatioQty_118.setString("6618189");
set_field(noLegs_0_0, LegRatioQty_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1248962171"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1030986001"}, InstrumentLeg_118);
    FIX::LegRepurchaseRate LegRepurchaseRate_118;
    LegRepurchaseRate_118.setString("98.140000");
set_field(noLegs_0_0, LegRepurchaseRate_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{775744633}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1634703065"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1014265163"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_426777952"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1097731361"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_812951147"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_964112160"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1370942219"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_118);
    FIX::LegStrikePrice LegStrikePrice_118;
    LegStrikePrice_118.setString("7067018");
set_field(noLegs_0_0, LegStrikePrice_118, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_928779340"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1271223674"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_463275528"}, InstrumentLeg_118);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_468879255"}, InstrumentLeg_118);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_118;
    LegUnitOfMeasureQty_118.setString("3413463");
set_field(noLegs_0_0, LegUnitOfMeasureQty_118, InstrumentLeg_118);
    all_values.push_back(InstrumentLeg_118);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_245;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1100129475"}, LegSecAltIDGrp_NoLegSecurityAltID_245);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_56748019"}, LegSecAltIDGrp_NoLegSecurityAltID_245);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_245);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_246;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_569939680"}, LegSecAltIDGrp_NoLegSecurityAltID_246);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_587382556"}, LegSecAltIDGrp_NoLegSecurityAltID_246);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_246);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_247;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_166685881"}, LegSecAltIDGrp_NoLegSecurityAltID_247);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_692817314"}, LegSecAltIDGrp_NoLegSecurityAltID_247);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_247);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_119;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_470463519"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1931101981}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_432121936"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1132282487}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_1032580504"}, InstrumentLeg_119);
    FIX::LegContractMultiplier LegContractMultiplier_119;
    LegContractMultiplier_119.setString("14631079");
set_field(noLegs_0_1, LegContractMultiplier_119, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{663008653}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_1808325137"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_950327355"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1677273817"}, InstrumentLeg_119);
    FIX::LegCouponRate LegCouponRate_119;
    LegCouponRate_119.setString("94.410000");
set_field(noLegs_0_1, LegCouponRate_119, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_2048058716"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_1747550903"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{1713683535}, InstrumentLeg_119);
    FIX::LegFactor LegFactor_119;
    LegFactor_119.setString("5502898");
set_field(noLegs_0_1, LegFactor_119, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{450245992}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_272901747"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1479069164"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_1721469666"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_736177275"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1947948419"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_2062816058"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1453064552"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_900594247"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'2'}, InstrumentLeg_119);
    FIX::LegOptionRatio LegOptionRatio_119;
    LegOptionRatio_119.setString("20230042");
set_field(noLegs_0_1, LegOptionRatio_119, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1487976803"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_138766310"}, InstrumentLeg_119);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_119;
    LegPriceUnitOfMeasureQty_119.setString("5683378");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_119, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegProduct{1958440323}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegPutOrCall{2069868291}, InstrumentLeg_119);
    FIX::LegRatioQty LegRatioQty_119;
    LegRatioQty_119.setString("10004598");
set_field(noLegs_0_1, LegRatioQty_119, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_943239162"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_954965148"}, InstrumentLeg_119);
    FIX::LegRepurchaseRate LegRepurchaseRate_119;
    LegRepurchaseRate_119.setString("41.250000");
set_field(noLegs_0_1, LegRepurchaseRate_119, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1606247815}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_615806637"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1266411480"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1136037984"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_703426079"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_1166986548"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1478779301"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegSide{'1'}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_767053803"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_119);
    FIX::LegStrikePrice LegStrikePrice_119;
    LegStrikePrice_119.setString("12172997");
set_field(noLegs_0_1, LegStrikePrice_119, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1317880935"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1637033020"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_791285813"}, InstrumentLeg_119);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_2054058210"}, InstrumentLeg_119);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_119;
    LegUnitOfMeasureQty_119.setString("14374977");
set_field(noLegs_0_1, LegUnitOfMeasureQty_119, InstrumentLeg_119);
    all_values.push_back(InstrumentLeg_119);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_248;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1359639115"}, LegSecAltIDGrp_NoLegSecurityAltID_248);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_190608391"}, LegSecAltIDGrp_NoLegSecurityAltID_248);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_248);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_249;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_678698653"}, LegSecAltIDGrp_NoLegSecurityAltID_249);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1235159700"}, LegSecAltIDGrp_NoLegSecurityAltID_249);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_249);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_250;
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltID{"STRING_1678585194"}, LegSecAltIDGrp_NoLegSecurityAltID_250);
      set_field(noLegSecurityAltID_1_1_2, FIX::LegSecurityAltIDSource{"STRING_817464963"}, LegSecAltIDGrp_NoLegSecurityAltID_250);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_250);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_2);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_85;
  FIX::AttachmentPoint AttachmentPoint_85;
  AttachmentPoint_85.setString("75.990000");
set_field(msg, AttachmentPoint_85, Instrument_85);
  set_field(msg, FIX::CFICode{"STRING_1489541869"}, Instrument_85);
  set_field(msg, FIX::CPProgram{99}, Instrument_85);
  set_field(msg, FIX::CPRegType{"STRING_656473787"}, Instrument_85);
  FIX::CapPrice CapPrice_85;
  CapPrice_85.setString("2852973");
set_field(msg, CapPrice_85, Instrument_85);
  FIX::ContractMultiplier ContractMultiplier_85;
  ContractMultiplier_85.setString("16948147");
set_field(msg, ContractMultiplier_85, Instrument_85);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_85);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1891545199"}, Instrument_85);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_163137744"}, Instrument_85);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_91485744"}, Instrument_85);
  FIX::CouponRate CouponRate_85;
  CouponRate_85.setString("95.350000");
set_field(msg, CouponRate_85, Instrument_85);
  set_field(msg, FIX::CreditRating{"STRING_866563823"}, Instrument_85);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_1258472292"}, Instrument_85);
  FIX::DetachmentPoint DetachmentPoint_85;
  DetachmentPoint_85.setString("51.880000");
set_field(msg, DetachmentPoint_85, Instrument_85);
  set_field(msg, FIX::EncodedIssuer{"DATA_474237856"}, Instrument_85);
  set_field(msg, FIX::EncodedIssuerLen{2025526096}, Instrument_85);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_1256374377"}, Instrument_85);
  set_field(msg, FIX::EncodedSecurityDescLen{632201712}, Instrument_85);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_85);
  FIX::Factor Factor_85;
  Factor_85.setString("4267716");
set_field(msg, Factor_85, Instrument_85);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_85);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_85);
  FIX::FloorPrice FloorPrice_85;
  FloorPrice_85.setString("3333462");
set_field(msg, FloorPrice_85, Instrument_85);
  set_field(msg, FIX::FlowScheduleType{2}, Instrument_85);
  set_field(msg, FIX::InstrRegistry{"STRING_445762632"}, Instrument_85);
  set_field(msg, FIX::InstrmtAssignmentMethod{'1'}, Instrument_85);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_1749857268"}, Instrument_85);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1124461285"}, Instrument_85);
  set_field(msg, FIX::Issuer{"STRING_780661394"}, Instrument_85);
  set_field(msg, FIX::ListMethod{0}, Instrument_85);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1941926249"}, Instrument_85);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_436675345"}, Instrument_85);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_623017036"}, Instrument_85);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_534292208"}, Instrument_85);
  FIX::MinPriceIncrement MinPriceIncrement_85;
  MinPriceIncrement_85.setString("10931491");
set_field(msg, MinPriceIncrement_85, Instrument_85);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_85;
  MinPriceIncrementAmount_85.setString("9083144");
set_field(msg, MinPriceIncrementAmount_85, Instrument_85);
  set_field(msg, FIX::NTPositionLimit{81623315}, Instrument_85);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_85;
  NotionalPercentageOutstanding_85.setString("70.440000");
set_field(msg, NotionalPercentageOutstanding_85, Instrument_85);
  set_field(msg, FIX::OptAttribute{'6'}, Instrument_85);
  FIX::OptPayoutAmount OptPayoutAmount_85;
  OptPayoutAmount_85.setString("2447610");
set_field(msg, OptPayoutAmount_85, Instrument_85);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_85);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_85;
  OriginalNotionalPercentageOutstanding_85.setString("55.060000");
set_field(msg, OriginalNotionalPercentageOutstanding_85, Instrument_85);
  set_field(msg, FIX::Pool{"STRING_1111324883"}, Instrument_85);
  set_field(msg, FIX::PositionLimit{1268181433}, Instrument_85);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_85);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1585562739"}, Instrument_85);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_85;
  PriceUnitOfMeasureQty_85.setString("11462238");
set_field(msg, PriceUnitOfMeasureQty_85, Instrument_85);
  set_field(msg, FIX::Product{8}, Instrument_85);
  set_field(msg, FIX::ProductComplex{"STRING_70280803"}, Instrument_85);
  set_field(msg, FIX::PutOrCall{0}, Instrument_85);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1279533088"}, Instrument_85);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_192031888"}, Instrument_85);
  FIX::RepurchaseRate RepurchaseRate_85;
  RepurchaseRate_85.setString("5.330000");
set_field(msg, RepurchaseRate_85, Instrument_85);
  set_field(msg, FIX::RepurchaseTerm{1612879315}, Instrument_85);
  set_field(msg, FIX::RestructuringType{"STRING_MR"}, Instrument_85);
  set_field(msg, FIX::SecurityDesc{"STRING_278989518"}, Instrument_85);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1158381009"}, Instrument_85);
  set_field(msg, FIX::SecurityGroup{"STRING_1353654385"}, Instrument_85);
  set_field(msg, FIX::SecurityID{"STRING_1403450803"}, Instrument_85);
  set_field(msg, FIX::SecurityIDSource{"STRING_2"}, Instrument_85);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_85);
  set_field(msg, FIX::SecuritySubType{"STRING_1197893404"}, Instrument_85);
  set_field(msg, FIX::SecurityType{"STRING_CTB"}, Instrument_85);
  set_field(msg, FIX::Seniority{"STRING_SB"}, Instrument_85);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_85);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1321383233"}, Instrument_85);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_2018461007"}, Instrument_85);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_85);
  FIX::StrikeMultiplier StrikeMultiplier_85;
  StrikeMultiplier_85.setString("5233533");
set_field(msg, StrikeMultiplier_85, Instrument_85);
  FIX::StrikePrice StrikePrice_85;
  StrikePrice_85.setString("20585699");
set_field(msg, StrikePrice_85, Instrument_85);
  set_field(msg, FIX::StrikePriceBoundaryMethod{1}, Instrument_85);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_85;
  StrikePriceBoundaryPrecision_85.setString("88.360000");
set_field(msg, StrikePriceBoundaryPrecision_85, Instrument_85);
  set_field(msg, FIX::StrikePriceDeterminationMethod{3}, Instrument_85);
  FIX::StrikeValue StrikeValue_85;
  StrikeValue_85.setString("3700135");
set_field(msg, StrikeValue_85, Instrument_85);
  set_field(msg, FIX::Symbol{"STRING_1652215882"}, Instrument_85);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_85);
  set_field(msg, FIX::TimeUnit{"STRING_H"}, Instrument_85);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_85);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_85);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_85;
  UnitOfMeasureQty_85.setString("16103199");
set_field(msg, UnitOfMeasureQty_85, Instrument_85);
  set_field(msg, FIX::ValuationMethod{"STRING_FUT"}, Instrument_85);
  all_values.push_back(Instrument_85);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_171;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_171);
    FIX::ComplexEventPrice ComplexEventPrice_171;
    ComplexEventPrice_171.setString("11024224");
set_field(noComplexEvents_0_0, ComplexEventPrice_171, ComplexEvents_NoComplexEvents_171);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_171);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_171;
    ComplexEventPriceBoundaryPrecision_171.setString("63.160000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_171, ComplexEvents_NoComplexEvents_171);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_171);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_171);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_171;
    ComplexOptPayoutAmount_171.setString("9785034");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_171, ComplexEvents_NoComplexEvents_171);
    all_values.push_back(ComplexEvents_NoComplexEvents_171);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_354;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 49, 40, 4, 7, 2007)}, ComplexEventDates_NoComplexEventDates_354);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 49, 39, 26, 2, 2009)}, ComplexEventDates_NoComplexEventDates_354);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_354);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_721;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 57, 30)}, ComplexEventTimes_NoComplexEventTimes_721);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 28, 7)}, ComplexEventTimes_NoComplexEventTimes_721);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_721);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_722;
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 22, 47)}, ComplexEventTimes_NoComplexEventTimes_722);
        set_field(noComplexEventTimes_0_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 51, 24)}, ComplexEventTimes_NoComplexEventTimes_722);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_722);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_355;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 13, 14, 7, 1, 2015)}, ComplexEventDates_NoComplexEventDates_355);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 15, 42, 22, 9, 2009)}, ComplexEventDates_NoComplexEventDates_355);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_355);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_723;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 8, 58)}, ComplexEventTimes_NoComplexEventTimes_723);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 26, 35)}, ComplexEventTimes_NoComplexEventTimes_723);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_723);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_724;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 57, 0)}, ComplexEventTimes_NoComplexEventTimes_724);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 43, 2)}, ComplexEventTimes_NoComplexEventTimes_724);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_724);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_356;
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 8, 47, 26, 9, 2013)}, ComplexEventDates_NoComplexEventDates_356);
      set_field(noComplexEventDates_0_1_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 28, 32, 2, 5, 2003)}, ComplexEventDates_NoComplexEventDates_356);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_356);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_725;
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 9, 39)}, ComplexEventTimes_NoComplexEventTimes_725);
        set_field(noComplexEventTimes_0_2_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 58, 4)}, ComplexEventTimes_NoComplexEventTimes_725);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_725);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_726;
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 54, 16)}, ComplexEventTimes_NoComplexEventTimes_726);
        set_field(noComplexEventTimes_0_2_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 59, 18)}, ComplexEventTimes_NoComplexEventTimes_726);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_726);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_2.addGroup(noComplexEventTimes_0_2_2_1);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_2);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_176;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1585663234"}, EvntGrp_NoEvents_176);
    FIX::EventPx EventPx_176;
    EventPx_176.setString("1589407");
set_field(noEvents_0_0, EventPx_176, EvntGrp_NoEvents_176);
    set_field(noEvents_0_0, FIX::EventText{"STRING_297608646"}, EvntGrp_NoEvents_176);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(2, 19, 9, 10, 4, 2003)}, EvntGrp_NoEvents_176);
    set_field(noEvents_0_0, FIX::EventType{9}, EvntGrp_NoEvents_176);
    all_values.push_back(EvntGrp_NoEvents_176);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_166;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_232346113"}, InstrumentParties_NoInstrumentParties_166);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_166);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{185388437}, InstrumentParties_NoInstrumentParties_166);
    all_values.push_back(InstrumentParties_NoInstrumentParties_166);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_179496990"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{107788608}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_342);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_167;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_1132274555"}, InstrumentParties_NoInstrumentParties_167);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_167);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1352095726}, InstrumentParties_NoInstrumentParties_167);
    all_values.push_back(InstrumentParties_NoInstrumentParties_167);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_518089256"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1510256776}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_343);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344;
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubID{"STRING_1394787325"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);
      set_field(noInstrumentPartySubIDs_1_1_1, FIX::InstrumentPartySubIDType{1764250272}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_344);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_168;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_435022164"}, InstrumentParties_NoInstrumentParties_168);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_168);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{1668385204}, InstrumentParties_NoInstrumentParties_168);
    all_values.push_back(InstrumentParties_NoInstrumentParties_168);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_1844703338"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{1106564790}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_345);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_190445273"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{2142311984}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_346);
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
    multiset<string> SecAltIDGrp_NoSecurityAltID_170;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_109598339"}, SecAltIDGrp_NoSecurityAltID_170);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_962688956"}, SecAltIDGrp_NoSecurityAltID_170);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_170);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_170;
  set_field(msg, FIX::SecurityXML{"XMLDATA_1971225771"}, SecurityXML_170);
  set_field(msg, FIX::SecurityXMLLen{1680819946}, SecurityXML_170);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1620573515"}, SecurityXML_170);
  all_values.push_back(SecurityXML_170);
  all_compo_names.insert("..");

  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_138;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_1966386"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{273493211}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_212849250"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{926776716}, UnderlyingInstrument_138);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_138;
    UnderlyingAdjustedQuantity_138.setString("4588816");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_138, UnderlyingInstrument_138);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_138;
    UnderlyingAllocationPercent_138.setString("0.560000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_138, UnderlyingInstrument_138);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_138;
    UnderlyingAttachmentPoint_138.setString("37.060000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_566670257"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1501074611"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_336501999"}, UnderlyingInstrument_138);
    FIX::UnderlyingCapValue UnderlyingCapValue_138;
    UnderlyingCapValue_138.setString("19187659");
set_field(noUnderlyings_0_0, UnderlyingCapValue_138, UnderlyingInstrument_138);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_138;
    UnderlyingCashAmount_138.setString("1474434");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_138);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_138;
    UnderlyingContractMultiplier_138.setString("12815391");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1542230820}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_471357880"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1716561275"}, UnderlyingInstrument_138);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_138;
    UnderlyingCouponRate_138.setString("59.110000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_2139743084"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_138);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_138;
    UnderlyingCurrentValue_138.setString("10988242");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_138, UnderlyingInstrument_138);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_138;
    UnderlyingDetachmentPoint_138.setString("10.230000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_138, UnderlyingInstrument_138);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_138;
    UnderlyingDirtyPrice_138.setString("16612639");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_138, UnderlyingInstrument_138);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_138;
    UnderlyingEndPrice_138.setString("16672991");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_138, UnderlyingInstrument_138);
    FIX::UnderlyingEndValue UnderlyingEndValue_138;
    UnderlyingEndValue_138.setString("20481093");
set_field(noUnderlyings_0_0, UnderlyingEndValue_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{476469245}, UnderlyingInstrument_138);
    FIX::UnderlyingFXRate UnderlyingFXRate_138;
    UnderlyingFXRate_138.setString("14910413");
set_field(noUnderlyings_0_0, UnderlyingFXRate_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_138);
    FIX::UnderlyingFactor UnderlyingFactor_138;
    UnderlyingFactor_138.setString("20970427");
set_field(noUnderlyings_0_0, UnderlyingFactor_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1471544449}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1583412047"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_223052324"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1684393699"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_362705115"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_681933973"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2053193755"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1468978821"}, UnderlyingInstrument_138);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_138;
    UnderlyingNotionalPercentageOutstanding_138.setString("42.300000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_138);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_138;
    UnderlyingOriginalNotionalPercentageOutstanding_138.setString("8.210000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1019886565"}, UnderlyingInstrument_138);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_138;
    UnderlyingPriceUnitOfMeasureQty_138.setString("15542282");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{512588429}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{153942029}, UnderlyingInstrument_138);
    FIX::UnderlyingPx UnderlyingPx_138;
    UnderlyingPx_138.setString("9489753");
set_field(noUnderlyings_0_0, UnderlyingPx_138, UnderlyingInstrument_138);
    FIX::UnderlyingQty UnderlyingQty_138;
    UnderlyingQty_138.setString("9839463");
set_field(noUnderlyings_0_0, UnderlyingQty_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1870503304"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_770707647"}, UnderlyingInstrument_138);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_138;
    UnderlyingRepurchaseRate_138.setString("57.460000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1471085406}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_289659600"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_2075029972"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1262112781"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_1950923538"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1594845513"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1162738496"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_279909135"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_938403177"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_596700508"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_138);
    FIX::UnderlyingStartValue UnderlyingStartValue_138;
    UnderlyingStartValue_138.setString("2624639");
set_field(noUnderlyings_0_0, UnderlyingStartValue_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_32628907"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_138);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_138;
    UnderlyingStrikePrice_138.setString("3953340");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_138, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1134454546"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1852567784"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1864312844"}, UnderlyingInstrument_138);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_235575128"}, UnderlyingInstrument_138);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_138;
    UnderlyingUnitOfMeasureQty_138.setString("11118688");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_138, UnderlyingInstrument_138);
    all_values.push_back(UnderlyingInstrument_138);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_284;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1255461693"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_518613418"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_284);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_285;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_2034898446"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_285);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1409403722"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_285);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_285);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_281;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_871361107"}, UnderlyingStipulations_NoUnderlyingStips_281);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_1132423379"}, UnderlyingStipulations_NoUnderlyingStips_281);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_281);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_282;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_90812802"}, UnderlyingStipulations_NoUnderlyingStips_282);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1847566853"}, UnderlyingStipulations_NoUnderlyingStips_282);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_282);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_283;
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipType{"STRING_456025137"}, UnderlyingStipulations_NoUnderlyingStips_283);
      set_field(noUnderlyingStips_0_1_2, FIX::UnderlyingStipValue{"STRING_380472403"}, UnderlyingStipulations_NoUnderlyingStips_283);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_283);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_286;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1718137919"}, UndlyInstrumentParties_NoUndlyInstrumentParties_286);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_286);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{1222475043}, UndlyInstrumentParties_NoUndlyInstrumentParties_286);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_286);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_463821428"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{13394572}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_576);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1330093275"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{693289677}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_577);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_275858550"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{1362722183}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_578);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_287;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1145810250"}, UndlyInstrumentParties_NoUndlyInstrumentParties_287);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_287);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{1758056205}, UndlyInstrumentParties_NoUndlyInstrumentParties_287);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_287);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1927800363"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1474885401}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_579);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_368356276"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{892185569}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_580);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_849711770"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{1623817969}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_581);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_288;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1410798987"}, UndlyInstrumentParties_NoUndlyInstrumentParties_288);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_288);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{885738044}, UndlyInstrumentParties_NoUndlyInstrumentParties_288);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_288);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1608487676"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{2018161423}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_582);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_139;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_821716945"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1308570881}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_326702912"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1202189348}, UnderlyingInstrument_139);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_139;
    UnderlyingAdjustedQuantity_139.setString("9362004");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_139, UnderlyingInstrument_139);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_139;
    UnderlyingAllocationPercent_139.setString("8.310000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_139, UnderlyingInstrument_139);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_139;
    UnderlyingAttachmentPoint_139.setString("16.410000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_11191806"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_630749950"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1849923069"}, UnderlyingInstrument_139);
    FIX::UnderlyingCapValue UnderlyingCapValue_139;
    UnderlyingCapValue_139.setString("245863");
set_field(noUnderlyings_0_1, UnderlyingCapValue_139, UnderlyingInstrument_139);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_139;
    UnderlyingCashAmount_139.setString("19608432");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_139);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_139;
    UnderlyingContractMultiplier_139.setString("3004449");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{1176081761}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1541539348"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_375677507"}, UnderlyingInstrument_139);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_139;
    UnderlyingCouponRate_139.setString("43.180000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1674320496"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_139);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_139;
    UnderlyingCurrentValue_139.setString("20426767");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_139, UnderlyingInstrument_139);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_139;
    UnderlyingDetachmentPoint_139.setString("97.910000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_139, UnderlyingInstrument_139);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_139;
    UnderlyingDirtyPrice_139.setString("9637678");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_139, UnderlyingInstrument_139);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_139;
    UnderlyingEndPrice_139.setString("15190110");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_139, UnderlyingInstrument_139);
    FIX::UnderlyingEndValue UnderlyingEndValue_139;
    UnderlyingEndValue_139.setString("3114951");
set_field(noUnderlyings_0_1, UnderlyingEndValue_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1700894411}, UnderlyingInstrument_139);
    FIX::UnderlyingFXRate UnderlyingFXRate_139;
    UnderlyingFXRate_139.setString("2572654");
set_field(noUnderlyings_0_1, UnderlyingFXRate_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_139);
    FIX::UnderlyingFactor UnderlyingFactor_139;
    UnderlyingFactor_139.setString("11618984");
set_field(noUnderlyings_0_1, UnderlyingFactor_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{127943265}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1864116218"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_322985672"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_454646177"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_918821918"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1259186084"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_352003361"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_157439911"}, UnderlyingInstrument_139);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_139;
    UnderlyingNotionalPercentageOutstanding_139.setString("78.900000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_139);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_139;
    UnderlyingOriginalNotionalPercentageOutstanding_139.setString("29.810000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1294964269"}, UnderlyingInstrument_139);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_139;
    UnderlyingPriceUnitOfMeasureQty_139.setString("7961128");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{255608431}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1595409197}, UnderlyingInstrument_139);
    FIX::UnderlyingPx UnderlyingPx_139;
    UnderlyingPx_139.setString("19721946");
set_field(noUnderlyings_0_1, UnderlyingPx_139, UnderlyingInstrument_139);
    FIX::UnderlyingQty UnderlyingQty_139;
    UnderlyingQty_139.setString("17971477");
set_field(noUnderlyings_0_1, UnderlyingQty_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1971086705"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_611365321"}, UnderlyingInstrument_139);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_139;
    UnderlyingRepurchaseRate_139.setString("46.280000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{2127080927}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_725421393"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1219177753"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1027777071"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1689189235"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_590705199"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_1339272202"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1242599998"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_847970689"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_234187827"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_139);
    FIX::UnderlyingStartValue UnderlyingStartValue_139;
    UnderlyingStartValue_139.setString("9759139");
set_field(noUnderlyings_0_1, UnderlyingStartValue_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2098304046"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_139);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_139;
    UnderlyingStrikePrice_139.setString("8696423");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_139, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1839186546"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1782563492"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1027082228"}, UnderlyingInstrument_139);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_962080788"}, UnderlyingInstrument_139);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_139;
    UnderlyingUnitOfMeasureQty_139.setString("6178331");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_139, UnderlyingInstrument_139);
    all_values.push_back(UnderlyingInstrument_139);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_286;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_109561409"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_286);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1413946045"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_286);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_286);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_287;
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltID{"STRING_1142569992"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_287);
      set_field(noUnderlyingSecurityAltID_1_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1704970607"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_287);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_287);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_288;
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltID{"STRING_1238657048"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_288);
      set_field(noUnderlyingSecurityAltID_1_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_792234124"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_288);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_288);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_284;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1850022369"}, UnderlyingStipulations_NoUnderlyingStips_284);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_2116218753"}, UnderlyingStipulations_NoUnderlyingStips_284);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_284);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_285;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1508170943"}, UnderlyingStipulations_NoUnderlyingStips_285);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_427960114"}, UnderlyingStipulations_NoUnderlyingStips_285);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_285);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_286;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_1187912858"}, UnderlyingStipulations_NoUnderlyingStips_286);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_388464366"}, UnderlyingStipulations_NoUnderlyingStips_286);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_286);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_289;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1778618057"}, UndlyInstrumentParties_NoUndlyInstrumentParties_289);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_289);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1212265700}, UndlyInstrumentParties_NoUndlyInstrumentParties_289);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_289);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1961924396"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1469280489}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_583);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1455019052"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1912744794}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_584);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_290;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2049280951"}, UndlyInstrumentParties_NoUndlyInstrumentParties_290);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_290);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{634903462}, UndlyInstrumentParties_NoUndlyInstrumentParties_290);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_290);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_373175380"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1661985690}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_585);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_555580990"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{991008536}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_586);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_401463603"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{665142399}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_587);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_291;
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_257470933"}, UndlyInstrumentParties_NoUndlyInstrumentParties_291);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_291);
      set_field(noUndlyInstrumentParties_1_1_2, FIX::UnderlyingInstrumentPartyRole{222629358}, UndlyInstrumentParties_NoUndlyInstrumentParties_291);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_291);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::TradeCaptureReportRequestAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_588;
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_188784072"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_588);
        set_field(noUndlyInstrumentPartySubIDs_1_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1751203022}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_588);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_588);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_0);
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
