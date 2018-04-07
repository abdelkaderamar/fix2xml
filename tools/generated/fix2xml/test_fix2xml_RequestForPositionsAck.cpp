#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositionsAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositionsAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RequestForPositionsAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositionsAck_0;
  set_field(msg, FIX::Account{"STRING_117672151"}, RequestForPositionsAck_0);
  set_field(msg, FIX::AccountType{6}, RequestForPositionsAck_0);
  set_field(msg, FIX::AcctIDSource{1}, RequestForPositionsAck_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_165717383"}, RequestForPositionsAck_0);
  set_field(msg, FIX::Currency{"CHF"}, RequestForPositionsAck_0);
  set_field(msg, FIX::EncodedText{"DATA_814559055"}, RequestForPositionsAck_0);
  set_field(msg, FIX::EncodedTextLen{1604458065}, RequestForPositionsAck_0);
  set_field(msg, FIX::MatchStatus{'1'}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosMaintRptID{"STRING_1606387748"}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosReqID{"STRING_868932245"}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosReqResult{3}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosReqStatus{1}, RequestForPositionsAck_0);
  set_field(msg, FIX::PosReqType{3}, RequestForPositionsAck_0);
  set_field(msg, FIX::ResponseDestination{"STRING_692135178"}, RequestForPositionsAck_0);
  set_field(msg, FIX::ResponseTransportType{1}, RequestForPositionsAck_0);
  set_field(msg, FIX::SettlCurrency{"USD"}, RequestForPositionsAck_0);
  set_field(msg, FIX::SettlSessID{"STRING_EOD"}, RequestForPositionsAck_0);
  set_field(msg, FIX::SettlSessSubID{"STRING_1609641692"}, RequestForPositionsAck_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, RequestForPositionsAck_0);
  set_field(msg, FIX::Text{"STRING_1371461845"}, RequestForPositionsAck_0);
  set_field(msg, FIX::TotalNumPosReports{60036687}, RequestForPositionsAck_0);
  set_field(msg, FIX::UnsolicitedIndicator{true}, RequestForPositionsAck_0);
  all_values.push_back(RequestForPositionsAck_0);

  all_compo_names.insert("RequestForPositionsAck");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_91;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_1732109923"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{462070973}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_2102481611"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1277531690}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1600960493"}, InstrumentLeg_91);
    FIX::LegContractMultiplier LegContractMultiplier_91;
    LegContractMultiplier_91.setString("10394501");
set_field(noLegs_0_0, LegContractMultiplier_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1395203841}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1566660117"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_1279277611"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1560921224"}, InstrumentLeg_91);
    FIX::LegCouponRate LegCouponRate_91;
    LegCouponRate_91.setString("49.570000");
set_field(noLegs_0_0, LegCouponRate_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1397441752"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_860215168"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1834384379}, InstrumentLeg_91);
    FIX::LegFactor LegFactor_91;
    LegFactor_91.setString("7712716");
set_field(noLegs_0_0, LegFactor_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{1965605179}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_762152320"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1717475476"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_510256709"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_606042881"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_592294704"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_1151194145"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2073777832"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_54452748"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_91);
    FIX::LegOptionRatio LegOptionRatio_91;
    LegOptionRatio_91.setString("12977560");
set_field(noLegs_0_0, LegOptionRatio_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_114489436"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_831814207"}, InstrumentLeg_91);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_91;
    LegPriceUnitOfMeasureQty_91.setString("13438962");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegProduct{1846599359}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegPutOrCall{1293885181}, InstrumentLeg_91);
    FIX::LegRatioQty LegRatioQty_91;
    LegRatioQty_91.setString("12988942");
set_field(noLegs_0_0, LegRatioQty_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_976647402"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_747362026"}, InstrumentLeg_91);
    FIX::LegRepurchaseRate LegRepurchaseRate_91;
    LegRepurchaseRate_91.setString("7.730000");
set_field(noLegs_0_0, LegRepurchaseRate_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{224367595}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_166538495"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1470138384"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_1785288820"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_611903452"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_720096489"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_2013285451"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSide{'5'}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1580311657"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_91);
    FIX::LegStrikePrice LegStrikePrice_91;
    LegStrikePrice_91.setString("13984331");
set_field(noLegs_0_0, LegStrikePrice_91, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_314854855"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_855506274"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1908689897"}, InstrumentLeg_91);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_920897737"}, InstrumentLeg_91);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_91;
    LegUnitOfMeasureQty_91.setString("14478009");
set_field(noLegs_0_0, LegUnitOfMeasureQty_91, InstrumentLeg_91);
    all_values.push_back(InstrumentLeg_91);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_190;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_847191921"}, LegSecAltIDGrp_NoLegSecurityAltID_190);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_1502253726"}, LegSecAltIDGrp_NoLegSecurityAltID_190);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_190);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_191;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_761510459"}, LegSecAltIDGrp_NoLegSecurityAltID_191);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_2144947951"}, LegSecAltIDGrp_NoLegSecurityAltID_191);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_191);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_192;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1616743162"}, LegSecAltIDGrp_NoLegSecurityAltID_192);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_1593324667"}, LegSecAltIDGrp_NoLegSecurityAltID_192);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_192);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_92;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1341360565"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{1315858874}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_739726200"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{492771142}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_145022628"}, InstrumentLeg_92);
    FIX::LegContractMultiplier LegContractMultiplier_92;
    LegContractMultiplier_92.setString("14870882");
set_field(noLegs_0_1, LegContractMultiplier_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{683631915}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_369390223"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1653626721"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_6286652"}, InstrumentLeg_92);
    FIX::LegCouponRate LegCouponRate_92;
    LegCouponRate_92.setString("53.950000");
set_field(noLegs_0_1, LegCouponRate_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_118046525"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegCurrency{"CAN"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_632289351"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{159211150}, InstrumentLeg_92);
    FIX::LegFactor LegFactor_92;
    LegFactor_92.setString("15731833");
set_field(noLegs_0_1, LegFactor_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{1917803797}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_1557644338"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1888038237"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_625826423"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1318850587"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_661452326"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_2073627401"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_83767333"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1508644248"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_92);
    FIX::LegOptionRatio LegOptionRatio_92;
    LegOptionRatio_92.setString("8452777");
set_field(noLegs_0_1, LegOptionRatio_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1506108551"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_897656994"}, InstrumentLeg_92);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_92;
    LegPriceUnitOfMeasureQty_92.setString("2911188");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegProduct{699985468}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegPutOrCall{66032220}, InstrumentLeg_92);
    FIX::LegRatioQty LegRatioQty_92;
    LegRatioQty_92.setString("10308450");
set_field(noLegs_0_1, LegRatioQty_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1192756610"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_211054848"}, InstrumentLeg_92);
    FIX::LegRepurchaseRate LegRepurchaseRate_92;
    LegRepurchaseRate_92.setString("95.890000");
set_field(noLegs_0_1, LegRepurchaseRate_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{1876388526}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_580445072"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_2024076310"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_1882675178"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_587640467"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_2142122835"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_461574671"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSide{'4'}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_626928539"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_92);
    FIX::LegStrikePrice LegStrikePrice_92;
    LegStrikePrice_92.setString("3972486");
set_field(noLegs_0_1, LegStrikePrice_92, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_30946511"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1774375638"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1023075112"}, InstrumentLeg_92);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_1349797098"}, InstrumentLeg_92);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_92;
    LegUnitOfMeasureQty_92.setString("2883443");
set_field(noLegs_0_1, LegUnitOfMeasureQty_92, InstrumentLeg_92);
    all_values.push_back(InstrumentLeg_92);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_193;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1433564431"}, LegSecAltIDGrp_NoLegSecurityAltID_193);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_1796988564"}, LegSecAltIDGrp_NoLegSecurityAltID_193);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_193);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_194;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_230132697"}, LegSecAltIDGrp_NoLegSecurityAltID_194);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_131358575"}, LegSecAltIDGrp_NoLegSecurityAltID_194);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_194);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_65;
  FIX::AttachmentPoint AttachmentPoint_65;
  AttachmentPoint_65.setString("34.670000");
set_field(msg, AttachmentPoint_65, Instrument_65);
  set_field(msg, FIX::CFICode{"STRING_1127789692"}, Instrument_65);
  set_field(msg, FIX::CPProgram{99}, Instrument_65);
  set_field(msg, FIX::CPRegType{"STRING_1855598935"}, Instrument_65);
  FIX::CapPrice CapPrice_65;
  CapPrice_65.setString("11938219");
set_field(msg, CapPrice_65, Instrument_65);
  FIX::ContractMultiplier ContractMultiplier_65;
  ContractMultiplier_65.setString("14533223");
set_field(msg, ContractMultiplier_65, Instrument_65);
  set_field(msg, FIX::ContractMultiplierUnit{2}, Instrument_65);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_1404876761"}, Instrument_65);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_1823771988"}, Instrument_65);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_629776776"}, Instrument_65);
  FIX::CouponRate CouponRate_65;
  CouponRate_65.setString("18.330000");
set_field(msg, CouponRate_65, Instrument_65);
  set_field(msg, FIX::CreditRating{"STRING_1700364650"}, Instrument_65);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_364968306"}, Instrument_65);
  FIX::DetachmentPoint DetachmentPoint_65;
  DetachmentPoint_65.setString("86.520000");
set_field(msg, DetachmentPoint_65, Instrument_65);
  set_field(msg, FIX::EncodedIssuer{"DATA_1695003838"}, Instrument_65);
  set_field(msg, FIX::EncodedIssuerLen{826542977}, Instrument_65);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_886116319"}, Instrument_65);
  set_field(msg, FIX::EncodedSecurityDescLen{174448729}, Instrument_65);
  set_field(msg, FIX::ExerciseStyle{2}, Instrument_65);
  FIX::Factor Factor_65;
  Factor_65.setString("7724537");
set_field(msg, Factor_65, Instrument_65);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_65);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_65);
  FIX::FloorPrice FloorPrice_65;
  FloorPrice_65.setString("3993457");
set_field(msg, FloorPrice_65, Instrument_65);
  set_field(msg, FIX::FlowScheduleType{4}, Instrument_65);
  set_field(msg, FIX::InstrRegistry{"STRING_680588759"}, Instrument_65);
  set_field(msg, FIX::InstrmtAssignmentMethod{'6'}, Instrument_65);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_396507747"}, Instrument_65);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_2114153190"}, Instrument_65);
  set_field(msg, FIX::Issuer{"STRING_337194942"}, Instrument_65);
  set_field(msg, FIX::ListMethod{0}, Instrument_65);
  set_field(msg, FIX::LocaleOfIssue{"STRING_98028117"}, Instrument_65);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_1492808410"}, Instrument_65);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1754430136"}, Instrument_65);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_520505504"}, Instrument_65);
  FIX::MinPriceIncrement MinPriceIncrement_65;
  MinPriceIncrement_65.setString("12009236");
set_field(msg, MinPriceIncrement_65, Instrument_65);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_65;
  MinPriceIncrementAmount_65.setString("8007684");
set_field(msg, MinPriceIncrementAmount_65, Instrument_65);
  set_field(msg, FIX::NTPositionLimit{1973827903}, Instrument_65);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_65;
  NotionalPercentageOutstanding_65.setString("55.950000");
set_field(msg, NotionalPercentageOutstanding_65, Instrument_65);
  set_field(msg, FIX::OptAttribute{'5'}, Instrument_65);
  FIX::OptPayoutAmount OptPayoutAmount_65;
  OptPayoutAmount_65.setString("16501162");
set_field(msg, OptPayoutAmount_65, Instrument_65);
  set_field(msg, FIX::OptPayoutType{1}, Instrument_65);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_65;
  OriginalNotionalPercentageOutstanding_65.setString("33.470000");
set_field(msg, OriginalNotionalPercentageOutstanding_65, Instrument_65);
  set_field(msg, FIX::Pool{"STRING_1202997245"}, Instrument_65);
  set_field(msg, FIX::PositionLimit{949057029}, Instrument_65);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_65);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_750517435"}, Instrument_65);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_65;
  PriceUnitOfMeasureQty_65.setString("17756000");
set_field(msg, PriceUnitOfMeasureQty_65, Instrument_65);
  set_field(msg, FIX::Product{10}, Instrument_65);
  set_field(msg, FIX::ProductComplex{"STRING_924966164"}, Instrument_65);
  set_field(msg, FIX::PutOrCall{0}, Instrument_65);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_1980048390"}, Instrument_65);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_1496663582"}, Instrument_65);
  FIX::RepurchaseRate RepurchaseRate_65;
  RepurchaseRate_65.setString("68.170000");
set_field(msg, RepurchaseRate_65, Instrument_65);
  set_field(msg, FIX::RepurchaseTerm{231910451}, Instrument_65);
  set_field(msg, FIX::RestructuringType{"STRING_XR"}, Instrument_65);
  set_field(msg, FIX::SecurityDesc{"STRING_1086825576"}, Instrument_65);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_919600477"}, Instrument_65);
  set_field(msg, FIX::SecurityGroup{"STRING_1340460210"}, Instrument_65);
  set_field(msg, FIX::SecurityID{"STRING_1053495118"}, Instrument_65);
  set_field(msg, FIX::SecurityIDSource{"STRING_D"}, Instrument_65);
  set_field(msg, FIX::SecurityStatus{"STRING_2"}, Instrument_65);
  set_field(msg, FIX::SecuritySubType{"STRING_1151523236"}, Instrument_65);
  set_field(msg, FIX::SecurityType{"STRING_BRIDGE"}, Instrument_65);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_65);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_65);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1803043879"}, Instrument_65);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_227331896"}, Instrument_65);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_65);
  FIX::StrikeMultiplier StrikeMultiplier_65;
  StrikeMultiplier_65.setString("2854934");
set_field(msg, StrikeMultiplier_65, Instrument_65);
  FIX::StrikePrice StrikePrice_65;
  StrikePrice_65.setString("10010055");
set_field(msg, StrikePrice_65, Instrument_65);
  set_field(msg, FIX::StrikePriceBoundaryMethod{3}, Instrument_65);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_65;
  StrikePriceBoundaryPrecision_65.setString("31.090000");
set_field(msg, StrikePriceBoundaryPrecision_65, Instrument_65);
  set_field(msg, FIX::StrikePriceDeterminationMethod{1}, Instrument_65);
  FIX::StrikeValue StrikeValue_65;
  StrikeValue_65.setString("11430179");
set_field(msg, StrikeValue_65, Instrument_65);
  set_field(msg, FIX::Symbol{"STRING_502971461"}, Instrument_65);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_65);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_65);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_65);
  set_field(msg, FIX::UnitOfMeasure{"STRING_t"}, Instrument_65);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_65;
  UnitOfMeasureQty_65.setString("18465794");
set_field(msg, UnitOfMeasureQty_65, Instrument_65);
  set_field(msg, FIX::ValuationMethod{"STRING_CDS"}, Instrument_65);
  all_values.push_back(Instrument_65);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_135;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_135);
    FIX::ComplexEventPrice ComplexEventPrice_135;
    ComplexEventPrice_135.setString("17750413");
set_field(noComplexEvents_0_0, ComplexEventPrice_135, ComplexEvents_NoComplexEvents_135);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_135);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_135;
    ComplexEventPriceBoundaryPrecision_135.setString("81.930000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_135, ComplexEvents_NoComplexEvents_135);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_135);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_135);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_135;
    ComplexOptPayoutAmount_135.setString("981696");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_135, ComplexEvents_NoComplexEvents_135);
    all_values.push_back(ComplexEvents_NoComplexEvents_135);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_282;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 8, 10, 24, 5, 2013)}, ComplexEventDates_NoComplexEventDates_282);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 37, 10, 25, 12, 2008)}, ComplexEventDates_NoComplexEventDates_282);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_282);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_569;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 44, 51)}, ComplexEventTimes_NoComplexEventTimes_569);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 37, 55)}, ComplexEventTimes_NoComplexEventTimes_569);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_569);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_136;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_136);
    FIX::ComplexEventPrice ComplexEventPrice_136;
    ComplexEventPrice_136.setString("2478695");
set_field(noComplexEvents_0_1, ComplexEventPrice_136, ComplexEvents_NoComplexEvents_136);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_136);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_136;
    ComplexEventPriceBoundaryPrecision_136.setString("86.040000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_136, ComplexEvents_NoComplexEvents_136);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_136);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_136);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_136;
    ComplexOptPayoutAmount_136.setString("5794082");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_136, ComplexEvents_NoComplexEvents_136);
    all_values.push_back(ComplexEvents_NoComplexEvents_136);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_283;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 3, 38, 27, 12, 2003)}, ComplexEventDates_NoComplexEventDates_283);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 15, 41, 0, 3, 2017)}, ComplexEventDates_NoComplexEventDates_283);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_283);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_570;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 13, 5)}, ComplexEventTimes_NoComplexEventTimes_570);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 42, 53)}, ComplexEventTimes_NoComplexEventTimes_570);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_570);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_571;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 46, 32)}, ComplexEventTimes_NoComplexEventTimes_571);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 0, 12)}, ComplexEventTimes_NoComplexEventTimes_571);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_571);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_284;
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 15, 6, 7, 4, 2001)}, ComplexEventDates_NoComplexEventDates_284);
      set_field(noComplexEventDates_1_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 58, 7, 13, 5, 2000)}, ComplexEventDates_NoComplexEventDates_284);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_284);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_572;
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 48, 12)}, ComplexEventTimes_NoComplexEventTimes_572);
        set_field(noComplexEventTimes_1_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 54, 14)}, ComplexEventTimes_NoComplexEventTimes_572);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_572);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_573;
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 53, 17)}, ComplexEventTimes_NoComplexEventTimes_573);
        set_field(noComplexEventTimes_1_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 10, 32)}, ComplexEventTimes_NoComplexEventTimes_573);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_573);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_574;
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 47, 18)}, ComplexEventTimes_NoComplexEventTimes_574);
        set_field(noComplexEventTimes_1_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 53, 0)}, ComplexEventTimes_NoComplexEventTimes_574);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_574);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_1.addGroup(noComplexEventTimes_1_1_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_1);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_137;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_137);
    FIX::ComplexEventPrice ComplexEventPrice_137;
    ComplexEventPrice_137.setString("3340867");
set_field(noComplexEvents_0_2, ComplexEventPrice_137, ComplexEvents_NoComplexEvents_137);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_137);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_137;
    ComplexEventPriceBoundaryPrecision_137.setString("5.370000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_137, ComplexEvents_NoComplexEvents_137);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_137);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_137);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_137;
    ComplexOptPayoutAmount_137.setString("17531712");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_137, ComplexEvents_NoComplexEvents_137);
    all_values.push_back(ComplexEvents_NoComplexEvents_137);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_285;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 47, 54, 18, 6, 2006)}, ComplexEventDates_NoComplexEventDates_285);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 53, 12, 0, 11, 2008)}, ComplexEventDates_NoComplexEventDates_285);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_285);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_575;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 16, 8)}, ComplexEventTimes_NoComplexEventTimes_575);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 1, 46)}, ComplexEventTimes_NoComplexEventTimes_575);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_575);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_576;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 53, 56)}, ComplexEventTimes_NoComplexEventTimes_576);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 40, 49)}, ComplexEventTimes_NoComplexEventTimes_576);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_576);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_286;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 36, 38, 23, 10, 2001)}, ComplexEventDates_NoComplexEventDates_286);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 24, 23, 10, 3, 2011)}, ComplexEventDates_NoComplexEventDates_286);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_286);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_577;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 19, 0)}, ComplexEventTimes_NoComplexEventTimes_577);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 54, 30)}, ComplexEventTimes_NoComplexEventTimes_577);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_577);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_578;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 15, 20)}, ComplexEventTimes_NoComplexEventTimes_578);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 0, 26)}, ComplexEventTimes_NoComplexEventTimes_578);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_578);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_579;
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 54, 34)}, ComplexEventTimes_NoComplexEventTimes_579);
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 5, 40)}, ComplexEventTimes_NoComplexEventTimes_579);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_579);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_2);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_1);
    }
    msg.addGroup(noComplexEvents_0_2);
  }
  // EvntGrp
  // Group EvntGrp.NoEvents
  {
    FIX50SP2::RequestForPositionsAck::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_134;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_1127447481"}, EvntGrp_NoEvents_134);
    FIX::EventPx EventPx_134;
    EventPx_134.setString("11889044");
set_field(noEvents_0_0, EventPx_134, EvntGrp_NoEvents_134);
    set_field(noEvents_0_0, FIX::EventText{"STRING_1862569944"}, EvntGrp_NoEvents_134);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(8, 27, 8, 18, 11, 2009)}, EvntGrp_NoEvents_134);
    set_field(noEvents_0_0, FIX::EventType{7}, EvntGrp_NoEvents_134);
    all_values.push_back(EvntGrp_NoEvents_134);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_123;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_1017531775"}, InstrumentParties_NoInstrumentParties_123);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_123);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{238860176}, InstrumentParties_NoInstrumentParties_123);
    all_values.push_back(InstrumentParties_NoInstrumentParties_123);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_1766316352"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{1300356016}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_253);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_405118076"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{344675343}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_254);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255;
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubID{"STRING_1248945548"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);
      set_field(noInstrumentPartySubIDs_0_1_2, FIX::InstrumentPartySubIDType{28031894}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_255);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_2);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_124;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_306676438"}, InstrumentParties_NoInstrumentParties_124);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_124);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1237569429}, InstrumentParties_NoInstrumentParties_124);
    all_values.push_back(InstrumentParties_NoInstrumentParties_124);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_1606108776"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{1389399005}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_256);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoInstrumentParties noInstrumentParties_0_2;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_125;
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyID{"STRING_85541181"}, InstrumentParties_NoInstrumentParties_125);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_125);
    set_field(noInstrumentParties_0_2, FIX::InstrumentPartyRole{305835579}, InstrumentParties_NoInstrumentParties_125);
    all_values.push_back(InstrumentParties_NoInstrumentParties_125);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257;
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubID{"STRING_971963291"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);
      set_field(noInstrumentPartySubIDs_2_1_0, FIX::InstrumentPartySubIDType{20921875}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_257);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_2_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258;
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubID{"STRING_1168339619"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);
      set_field(noInstrumentPartySubIDs_2_1_1, FIX::InstrumentPartySubIDType{325391435}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_258);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_2.addGroup(noInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noInstrumentParties_0_2);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_128;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1630323307"}, SecAltIDGrp_NoSecurityAltID_128);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_489096058"}, SecAltIDGrp_NoSecurityAltID_128);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_128);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_1;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_129;
    set_field(noSecurityAltID_0_1, FIX::SecurityAltID{"STRING_1456576989"}, SecAltIDGrp_NoSecurityAltID_129);
    set_field(noSecurityAltID_0_1, FIX::SecurityAltIDSource{"STRING_1501616708"}, SecAltIDGrp_NoSecurityAltID_129);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_129);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoSecurityAltID noSecurityAltID_0_2;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_130;
    set_field(noSecurityAltID_0_2, FIX::SecurityAltID{"STRING_747440584"}, SecAltIDGrp_NoSecurityAltID_130);
    set_field(noSecurityAltID_0_2, FIX::SecurityAltIDSource{"STRING_2062831061"}, SecAltIDGrp_NoSecurityAltID_130);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_130);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_2);
  }
  // SecurityXML
  multiset<string> SecurityXML_130;
  set_field(msg, FIX::SecurityXML{"XMLDATA_371664835"}, SecurityXML_130);
  set_field(msg, FIX::SecurityXMLLen{1782194681}, SecurityXML_130);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_154207589"}, SecurityXML_130);
  all_values.push_back(SecurityXML_130);
  all_compo_names.insert("..");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_121;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1401027385"}, Parties_NoPartyIDs_121);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_121);
    set_field(noPartyIDs_0_0, FIX::PartyRole{72}, Parties_NoPartyIDs_121);
    all_values.push_back(Parties_NoPartyIDs_121);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_252;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_556025506"}, PtysSubGrp_NoPartySubIDs_252);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_252);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_252);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_253;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_2052379166"}, PtysSubGrp_NoPartySubIDs_253);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_253);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_253);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_122;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1982202453"}, Parties_NoPartyIDs_122);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_122);
    set_field(noPartyIDs_0_1, FIX::PartyRole{34}, Parties_NoPartyIDs_122);
    all_values.push_back(Parties_NoPartyIDs_122);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_254;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_98598364"}, PtysSubGrp_NoPartySubIDs_254);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{16}, PtysSubGrp_NoPartySubIDs_254);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_254);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_123;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1529953389"}, Parties_NoPartyIDs_123);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_123);
    set_field(noPartyIDs_0_2, FIX::PartyRole{16}, Parties_NoPartyIDs_123);
    all_values.push_back(Parties_NoPartyIDs_123);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_255;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_332442998"}, PtysSubGrp_NoPartySubIDs_255);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_255);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_255);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_256;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_85431440"}, PtysSubGrp_NoPartySubIDs_256);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{29}, PtysSubGrp_NoPartySubIDs_256);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_256);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_257;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_1611544693"}, PtysSubGrp_NoPartySubIDs_257);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_257);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_257);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_114;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_211501629"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1457355843}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1688564202"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{1993696310}, UnderlyingInstrument_114);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_114;
    UnderlyingAdjustedQuantity_114.setString("16115634");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_114, UnderlyingInstrument_114);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_114;
    UnderlyingAllocationPercent_114.setString("72.560000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_114, UnderlyingInstrument_114);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_114;
    UnderlyingAttachmentPoint_114.setString("0.470000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_918643390"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_569164738"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_845459127"}, UnderlyingInstrument_114);
    FIX::UnderlyingCapValue UnderlyingCapValue_114;
    UnderlyingCapValue_114.setString("14746688");
set_field(noUnderlyings_0_0, UnderlyingCapValue_114, UnderlyingInstrument_114);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_114;
    UnderlyingCashAmount_114.setString("13137977");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_114);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_114;
    UnderlyingContractMultiplier_114.setString("20580788");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{1148516568}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_763411829"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_2100113889"}, UnderlyingInstrument_114);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_114;
    UnderlyingCouponRate_114.setString("7.300000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_862010193"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_114);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_114;
    UnderlyingCurrentValue_114.setString("261135");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_114, UnderlyingInstrument_114);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_114;
    UnderlyingDetachmentPoint_114.setString("13.490000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_114, UnderlyingInstrument_114);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_114;
    UnderlyingDirtyPrice_114.setString("11584957");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_114, UnderlyingInstrument_114);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_114;
    UnderlyingEndPrice_114.setString("3585565");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_114, UnderlyingInstrument_114);
    FIX::UnderlyingEndValue UnderlyingEndValue_114;
    UnderlyingEndValue_114.setString("16972299");
set_field(noUnderlyings_0_0, UnderlyingEndValue_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{1243927177}, UnderlyingInstrument_114);
    FIX::UnderlyingFXRate UnderlyingFXRate_114;
    UnderlyingFXRate_114.setString("1738392");
set_field(noUnderlyings_0_0, UnderlyingFXRate_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_114);
    FIX::UnderlyingFactor UnderlyingFactor_114;
    UnderlyingFactor_114.setString("6384519");
set_field(noUnderlyings_0_0, UnderlyingFactor_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1490738596}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_1372792658"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2095807801"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_1031819150"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1219005321"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1559887586"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_884382758"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_318761720"}, UnderlyingInstrument_114);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_114;
    UnderlyingNotionalPercentageOutstanding_114.setString("73.280000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_114);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_114;
    UnderlyingOriginalNotionalPercentageOutstanding_114.setString("8.480000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1805716224"}, UnderlyingInstrument_114);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_114;
    UnderlyingPriceUnitOfMeasureQty_114.setString("6198616");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1914575494}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1716311404}, UnderlyingInstrument_114);
    FIX::UnderlyingPx UnderlyingPx_114;
    UnderlyingPx_114.setString("17683781");
set_field(noUnderlyings_0_0, UnderlyingPx_114, UnderlyingInstrument_114);
    FIX::UnderlyingQty UnderlyingQty_114;
    UnderlyingQty_114.setString("5305036");
set_field(noUnderlyings_0_0, UnderlyingQty_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1668941645"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1993528909"}, UnderlyingInstrument_114);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_114;
    UnderlyingRepurchaseRate_114.setString("38.680000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{1446665795}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_1601149381"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_1418627441"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_2021447144"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_612161470"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1777184013"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_1571193480"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_1856088647"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1951023242"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_585000861"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_114);
    FIX::UnderlyingStartValue UnderlyingStartValue_114;
    UnderlyingStartValue_114.setString("12942781");
set_field(noUnderlyings_0_0, UnderlyingStartValue_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1957793519"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_114);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_114;
    UnderlyingStrikePrice_114.setString("10293151");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_114, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_1855268697"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_1062996450"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_1348076913"}, UnderlyingInstrument_114);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_38832377"}, UnderlyingInstrument_114);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_114;
    UnderlyingUnitOfMeasureQty_114.setString("3690602");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_114, UnderlyingInstrument_114);
    all_values.push_back(UnderlyingInstrument_114);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_241;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1844548601"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_988921909"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_241);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_242;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_131905959"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1413376357"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_242);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_231;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_662409634"}, UnderlyingStipulations_NoUnderlyingStips_231);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_934834355"}, UnderlyingStipulations_NoUnderlyingStips_231);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_231);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_232;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_455861700"}, UnderlyingStipulations_NoUnderlyingStips_232);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_2054923502"}, UnderlyingStipulations_NoUnderlyingStips_232);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_232);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_233;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_2057011081"}, UndlyInstrumentParties_NoUndlyInstrumentParties_233);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_233);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{107979998}, UndlyInstrumentParties_NoUndlyInstrumentParties_233);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_233);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_955767661"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1679173478}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_462);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_234;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_230293902"}, UndlyInstrumentParties_NoUndlyInstrumentParties_234);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_234);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{116690691}, UndlyInstrumentParties_NoUndlyInstrumentParties_234);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_234);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2053585446"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{2074484210}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_463);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_872731971"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_1, FIX::UnderlyingInstrumentPartySubIDType{84715490}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_464);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_956315755"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_2, FIX::UnderlyingInstrumentPartySubIDType{580517020}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_465);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_2);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_235;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1147711941"}, UndlyInstrumentParties_NoUndlyInstrumentParties_235);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_235);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{619349397}, UndlyInstrumentParties_NoUndlyInstrumentParties_235);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_235);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_521723133"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{316414350}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_466);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_358210500"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{653629092}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_467);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::RequestForPositionsAck::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_115;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1729790707"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{968026940}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1316038726"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{517141414}, UnderlyingInstrument_115);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_115;
    UnderlyingAdjustedQuantity_115.setString("14238886");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_115, UnderlyingInstrument_115);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_115;
    UnderlyingAllocationPercent_115.setString("85.800000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_115, UnderlyingInstrument_115);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_115;
    UnderlyingAttachmentPoint_115.setString("79.160000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_1333416074"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_402062228"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_859137914"}, UnderlyingInstrument_115);
    FIX::UnderlyingCapValue UnderlyingCapValue_115;
    UnderlyingCapValue_115.setString("18551049");
set_field(noUnderlyings_0_1, UnderlyingCapValue_115, UnderlyingInstrument_115);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_115;
    UnderlyingCashAmount_115.setString("13578298");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_115);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_115;
    UnderlyingContractMultiplier_115.setString("20853988");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{2117137145}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_507518435"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_515266092"}, UnderlyingInstrument_115);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_115;
    UnderlyingCouponRate_115.setString("89.430000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_434518998"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_115);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_115;
    UnderlyingCurrentValue_115.setString("13908347");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_115, UnderlyingInstrument_115);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_115;
    UnderlyingDetachmentPoint_115.setString("50.830000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_115, UnderlyingInstrument_115);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_115;
    UnderlyingDirtyPrice_115.setString("11081827");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_115, UnderlyingInstrument_115);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_115;
    UnderlyingEndPrice_115.setString("15477437");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_115, UnderlyingInstrument_115);
    FIX::UnderlyingEndValue UnderlyingEndValue_115;
    UnderlyingEndValue_115.setString("4403808");
set_field(noUnderlyings_0_1, UnderlyingEndValue_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{477471318}, UnderlyingInstrument_115);
    FIX::UnderlyingFXRate UnderlyingFXRate_115;
    UnderlyingFXRate_115.setString("20694669");
set_field(noUnderlyings_0_1, UnderlyingFXRate_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_115);
    FIX::UnderlyingFactor UnderlyingFactor_115;
    UnderlyingFactor_115.setString("8356818");
set_field(noUnderlyings_0_1, UnderlyingFactor_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{575612350}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_339102241"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1803708758"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1891651076"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_856243656"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1080113751"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_967646008"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1607401572"}, UnderlyingInstrument_115);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_115;
    UnderlyingNotionalPercentageOutstanding_115.setString("61.770000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_115);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_115;
    UnderlyingOriginalNotionalPercentageOutstanding_115.setString("58.390000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2121151154"}, UnderlyingInstrument_115);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_115;
    UnderlyingPriceUnitOfMeasureQty_115.setString("5800544");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{709883583}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{2059066386}, UnderlyingInstrument_115);
    FIX::UnderlyingPx UnderlyingPx_115;
    UnderlyingPx_115.setString("5497079");
set_field(noUnderlyings_0_1, UnderlyingPx_115, UnderlyingInstrument_115);
    FIX::UnderlyingQty UnderlyingQty_115;
    UnderlyingQty_115.setString("12174020");
set_field(noUnderlyings_0_1, UnderlyingQty_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_426848830"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_425463270"}, UnderlyingInstrument_115);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_115;
    UnderlyingRepurchaseRate_115.setString("10.170000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{1814846893}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_385934056"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_895272122"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1635878328"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1494116782"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_295532247"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_2076259160"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_1971588100"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_217515505"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_685570694"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_115);
    FIX::UnderlyingStartValue UnderlyingStartValue_115;
    UnderlyingStartValue_115.setString("7931278");
set_field(noUnderlyings_0_1, UnderlyingStartValue_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1024672936"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_115);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_115;
    UnderlyingStrikePrice_115.setString("18809165");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_115, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1396125132"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1504941291"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_1340834516"}, UnderlyingInstrument_115);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1662171309"}, UnderlyingInstrument_115);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_115;
    UnderlyingUnitOfMeasureQty_115.setString("7271658");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_115, UnderlyingInstrument_115);
    all_values.push_back(UnderlyingInstrument_115);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_243;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1635838816"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1307220359"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_243);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_233;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1547421554"}, UnderlyingStipulations_NoUnderlyingStips_233);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_1856928334"}, UnderlyingStipulations_NoUnderlyingStips_233);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_233);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_234;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_1439692310"}, UnderlyingStipulations_NoUnderlyingStips_234);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1974270385"}, UnderlyingStipulations_NoUnderlyingStips_234);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_234);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_235;
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipType{"STRING_134907957"}, UnderlyingStipulations_NoUnderlyingStips_235);
      set_field(noUnderlyingStips_1_1_2, FIX::UnderlyingStipValue{"STRING_944129679"}, UnderlyingStipulations_NoUnderlyingStips_235);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_235);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_2);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_236;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_520842013"}, UndlyInstrumentParties_NoUndlyInstrumentParties_236);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_236);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{1130028311}, UndlyInstrumentParties_NoUndlyInstrumentParties_236);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_236);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2134934048"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1058803823}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_468);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1839063248"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{204965905}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_469);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::RequestForPositionsAck::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_2;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1744374518"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_2, FIX::UnderlyingInstrumentPartySubIDType{351365871}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_470);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_2);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
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
