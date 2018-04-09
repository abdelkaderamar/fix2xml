#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataSnapshotFullRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataSnapshotFullRefresh, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::MarketDataSnapshotFullRefresh msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataSnapshotFullRefresh_0;
  set_field(msg, FIX::ApplQueueDepth{108258879}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::ApplQueueResolution{0}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_551637874"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::CorporateAction{"MULTIPLECHARVALUE_J"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::FinancialStatus{"MULTIPLECHARVALUE_1"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDBookType{1}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDFeedType{"STRING_1417850382"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDReportID{1905219605}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDReqID{"STRING_435907056"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDStreamID{"STRING_1078946731"}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MDSubBookType{572380972}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::MarketDepth{1505735858}, MarketDataSnapshotFullRefresh_0);
  FIX::NetChgPrevDay NetChgPrevDay_3;
  NetChgPrevDay_3.setString("5318060");
set_field(msg, NetChgPrevDay_3, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::RefreshIndicator{true}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::TotNumReports{668872726}, MarketDataSnapshotFullRefresh_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1738467267"}, MarketDataSnapshotFullRefresh_0);
  all_values.push_back(MarketDataSnapshotFullRefresh_0);

  all_compo_names.insert("MarketDataSnapshotFullRefresh");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_7;
  set_field(msg, FIX::ApplID{"STRING_1380843582"}, ApplicationSequenceControl_7);
  set_field(msg, FIX::ApplLastSeqNum{735775702}, ApplicationSequenceControl_7);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_7);
  set_field(msg, FIX::ApplSeqNum{2104811052}, ApplicationSequenceControl_7);
  all_values.push_back(ApplicationSequenceControl_7);
  all_compo_names.insert(".");

  // InstrmtLegGrp
  // Group InstrmtLegGrp.NoLegs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_0;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_53;
    set_field(noLegs_0_0, FIX::EncodedLegIssuer{"DATA_970314306"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::EncodedLegIssuerLen{1047147685}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDesc{"DATA_1454976718"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::EncodedLegSecurityDescLen{1852542371}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegCFICode{"STRING_1242576636"}, InstrumentLeg_53);
    FIX::LegContractMultiplier LegContractMultiplier_53;
    LegContractMultiplier_53.setString("9230791");
set_field(noLegs_0_0, LegContractMultiplier_53, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegContractMultiplierUnit{1496484751}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegContractSettlMonth{"MONTHYEAR_1922313649"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegCountryOfIssue{"COUNTRY_2094991347"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1709899022"}, InstrumentLeg_53);
    FIX::LegCouponRate LegCouponRate_53;
    LegCouponRate_53.setString("25.280000");
set_field(noLegs_0_0, LegCouponRate_53, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegCreditRating{"STRING_1553450844"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegDatedDate{"LOCALMKTDATE_792010285"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegExerciseStyle{1733131627}, InstrumentLeg_53);
    FIX::LegFactor LegFactor_53;
    LegFactor_53.setString("2965496");
set_field(noLegs_0_0, LegFactor_53, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegFlowScheduleType{549746242}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegInstrRegistry{"STRING_21555036"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1375496398"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegIssueDate{"LOCALMKTDATE_1122127214"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegIssuer{"STRING_1527290894"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegLocaleOfIssue{"STRING_1907302455"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegMaturityDate{"LOCALMKTDATE_137380896"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegMaturityMonthYear{"MONTHYEAR_48679972"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegMaturityTime{"TZTIMEONLY_1498286074"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_53);
    FIX::LegOptionRatio LegOptionRatio_53;
    LegOptionRatio_53.setString("7844556");
set_field(noLegs_0_0, LegOptionRatio_53, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegPool{"STRING_533467756"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegPriceUnitOfMeasure{"STRING_1475551883"}, InstrumentLeg_53);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_53;
    LegPriceUnitOfMeasureQty_53.setString("11516094");
set_field(noLegs_0_0, LegPriceUnitOfMeasureQty_53, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegProduct{1503782062}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegPutOrCall{375215920}, InstrumentLeg_53);
    FIX::LegRatioQty LegRatioQty_53;
    LegRatioQty_53.setString("4591025");
set_field(noLegs_0_0, LegRatioQty_53, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1208840785"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegRepoCollateralSecurityType{"STRING_1617792556"}, InstrumentLeg_53);
    FIX::LegRepurchaseRate LegRepurchaseRate_53;
    LegRepurchaseRate_53.setString("16.960000");
set_field(noLegs_0_0, LegRepurchaseRate_53, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegRepurchaseTerm{557841888}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegSecurityDesc{"STRING_1392622558"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegSecurityExchange{"EXCHANGE_1329689395"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegSecurityID{"STRING_120257262"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegSecurityIDSource{"STRING_1275711438"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegSecuritySubType{"STRING_735656591"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegSecurityType{"STRING_234310510"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegSide{'1'}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegStateOrProvinceOfIssue{"STRING_1527666876"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_53);
    FIX::LegStrikePrice LegStrikePrice_53;
    LegStrikePrice_53.setString("20774131");
set_field(noLegs_0_0, LegStrikePrice_53, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegSymbol{"STRING_1988997173"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegSymbolSfx{"STRING_1826456789"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegTimeUnit{"STRING_1052056685"}, InstrumentLeg_53);
    set_field(noLegs_0_0, FIX::LegUnitOfMeasure{"STRING_1368804419"}, InstrumentLeg_53);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_53;
    LegUnitOfMeasureQty_53.setString("15862755");
set_field(noLegs_0_0, LegUnitOfMeasureQty_53, InstrumentLeg_53);
    all_values.push_back(InstrumentLeg_53);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_104;
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltID{"STRING_1417484392"}, LegSecAltIDGrp_NoLegSecurityAltID_104);
      set_field(noLegSecurityAltID_0_1_0, FIX::LegSecurityAltIDSource{"STRING_937078023"}, LegSecAltIDGrp_NoLegSecurityAltID_104);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_104);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_105;
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltID{"STRING_560178412"}, LegSecAltIDGrp_NoLegSecurityAltID_105);
      set_field(noLegSecurityAltID_0_1_1, FIX::LegSecurityAltIDSource{"STRING_54456418"}, LegSecAltIDGrp_NoLegSecurityAltID_105);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_105);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_106;
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltID{"STRING_1470545779"}, LegSecAltIDGrp_NoLegSecurityAltID_106);
      set_field(noLegSecurityAltID_0_1_2, FIX::LegSecurityAltIDSource{"STRING_2035730295"}, LegSecAltIDGrp_NoLegSecurityAltID_106);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_106);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_0.addGroup(noLegSecurityAltID_0_1_2);
    }
    msg.addGroup(noLegs_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs noLegs_0_1;
    // InstrmtLegGrp.NoLegs
    // InstrumentLeg
    multiset<string> InstrumentLeg_54;
    set_field(noLegs_0_1, FIX::EncodedLegIssuer{"DATA_1206065882"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::EncodedLegIssuerLen{826844193}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDesc{"DATA_263462568"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::EncodedLegSecurityDescLen{1665168416}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegCFICode{"STRING_2035684978"}, InstrumentLeg_54);
    FIX::LegContractMultiplier LegContractMultiplier_54;
    LegContractMultiplier_54.setString("18812551");
set_field(noLegs_0_1, LegContractMultiplier_54, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegContractMultiplierUnit{899866464}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegContractSettlMonth{"MONTHYEAR_446043218"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegCountryOfIssue{"COUNTRY_1126394034"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_82072212"}, InstrumentLeg_54);
    FIX::LegCouponRate LegCouponRate_54;
    LegCouponRate_54.setString("4.800000");
set_field(noLegs_0_1, LegCouponRate_54, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegCreditRating{"STRING_254621825"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegCurrency{"USD"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegDatedDate{"LOCALMKTDATE_409032548"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegExerciseStyle{197912032}, InstrumentLeg_54);
    FIX::LegFactor LegFactor_54;
    LegFactor_54.setString("6205694");
set_field(noLegs_0_1, LegFactor_54, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegFlowScheduleType{859992939}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegInstrRegistry{"STRING_127841502"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_462083005"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegIssueDate{"LOCALMKTDATE_538966080"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegIssuer{"STRING_1179898187"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegLocaleOfIssue{"STRING_1830887424"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegMaturityDate{"LOCALMKTDATE_2125241676"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegMaturityMonthYear{"MONTHYEAR_221852121"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegMaturityTime{"TZTIMEONLY_1100888168"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegOptAttribute{'9'}, InstrumentLeg_54);
    FIX::LegOptionRatio LegOptionRatio_54;
    LegOptionRatio_54.setString("7820305");
set_field(noLegs_0_1, LegOptionRatio_54, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegPool{"STRING_1155344587"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegPriceUnitOfMeasure{"STRING_237898182"}, InstrumentLeg_54);
    FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_54;
    LegPriceUnitOfMeasureQty_54.setString("6702771");
set_field(noLegs_0_1, LegPriceUnitOfMeasureQty_54, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegProduct{213926821}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegPutOrCall{1064742375}, InstrumentLeg_54);
    FIX::LegRatioQty LegRatioQty_54;
    LegRatioQty_54.setString("9337397");
set_field(noLegs_0_1, LegRatioQty_54, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1879095238"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegRepoCollateralSecurityType{"STRING_952943705"}, InstrumentLeg_54);
    FIX::LegRepurchaseRate LegRepurchaseRate_54;
    LegRepurchaseRate_54.setString("12.250000");
set_field(noLegs_0_1, LegRepurchaseRate_54, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegRepurchaseTerm{631478054}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegSecurityDesc{"STRING_1398986923"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegSecurityExchange{"EXCHANGE_1793905260"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegSecurityID{"STRING_713550266"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegSecurityIDSource{"STRING_1965287403"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegSecuritySubType{"STRING_2048527085"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegSecurityType{"STRING_1531279070"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegSide{'6'}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegStateOrProvinceOfIssue{"STRING_310075985"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_54);
    FIX::LegStrikePrice LegStrikePrice_54;
    LegStrikePrice_54.setString("11700689");
set_field(noLegs_0_1, LegStrikePrice_54, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegSymbol{"STRING_1857032604"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegSymbolSfx{"STRING_1701067230"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegTimeUnit{"STRING_1709035004"}, InstrumentLeg_54);
    set_field(noLegs_0_1, FIX::LegUnitOfMeasure{"STRING_889447144"}, InstrumentLeg_54);
    FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_54;
    LegUnitOfMeasureQty_54.setString("13844710");
set_field(noLegs_0_1, LegUnitOfMeasureQty_54, InstrumentLeg_54);
    all_values.push_back(InstrumentLeg_54);
    all_compo_names.insert("...NoLegs.");

    // LegSecAltIDGrp
    // Group LegSecAltIDGrp.NoLegSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_0;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_107;
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltID{"STRING_1111299265"}, LegSecAltIDGrp_NoLegSecurityAltID_107);
      set_field(noLegSecurityAltID_1_1_0, FIX::LegSecurityAltIDSource{"STRING_337875527"}, LegSecAltIDGrp_NoLegSecurityAltID_107);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_107);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_1;
      // LegSecAltIDGrp.NoLegSecurityAltID
      multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_108;
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltID{"STRING_454145436"}, LegSecAltIDGrp_NoLegSecurityAltID_108);
      set_field(noLegSecurityAltID_1_1_1, FIX::LegSecurityAltIDSource{"STRING_1893329798"}, LegSecAltIDGrp_NoLegSecurityAltID_108);
      all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_108);
      all_compo_names.insert("...NoLegs....NoLegSecurityAltID");

      noLegs_0_1.addGroup(noLegSecurityAltID_1_1_1);
    }
    msg.addGroup(noLegs_0_1);
  }
  // Instrument
  multiset<string> Instrument_34;
  FIX::AttachmentPoint AttachmentPoint_34;
  AttachmentPoint_34.setString("1.140000");
set_field(msg, AttachmentPoint_34, Instrument_34);
  set_field(msg, FIX::CFICode{"STRING_692043619"}, Instrument_34);
  set_field(msg, FIX::CPProgram{1}, Instrument_34);
  set_field(msg, FIX::CPRegType{"STRING_1707146935"}, Instrument_34);
  FIX::CapPrice CapPrice_34;
  CapPrice_34.setString("17567859");
set_field(msg, CapPrice_34, Instrument_34);
  FIX::ContractMultiplier ContractMultiplier_34;
  ContractMultiplier_34.setString("13498630");
set_field(msg, ContractMultiplier_34, Instrument_34);
  set_field(msg, FIX::ContractMultiplierUnit{0}, Instrument_34);
  set_field(msg, FIX::ContractSettlMonth{"MONTHYEAR_562246052"}, Instrument_34);
  set_field(msg, FIX::CountryOfIssue{"COUNTRY_2017374306"}, Instrument_34);
  set_field(msg, FIX::CouponPaymentDate{"LOCALMKTDATE_2070236580"}, Instrument_34);
  FIX::CouponRate CouponRate_34;
  CouponRate_34.setString("29.750000");
set_field(msg, CouponRate_34, Instrument_34);
  set_field(msg, FIX::CreditRating{"STRING_1663795918"}, Instrument_34);
  set_field(msg, FIX::DatedDate{"LOCALMKTDATE_636303198"}, Instrument_34);
  FIX::DetachmentPoint DetachmentPoint_34;
  DetachmentPoint_34.setString("67.310000");
set_field(msg, DetachmentPoint_34, Instrument_34);
  set_field(msg, FIX::EncodedIssuer{"DATA_1564839355"}, Instrument_34);
  set_field(msg, FIX::EncodedIssuerLen{20098620}, Instrument_34);
  set_field(msg, FIX::EncodedSecurityDesc{"DATA_249967828"}, Instrument_34);
  set_field(msg, FIX::EncodedSecurityDescLen{1874915340}, Instrument_34);
  set_field(msg, FIX::ExerciseStyle{0}, Instrument_34);
  FIX::Factor Factor_34;
  Factor_34.setString("14889520");
set_field(msg, Factor_34, Instrument_34);
  set_field(msg, FIX::FlexProductEligibilityIndicator{false}, Instrument_34);
  set_field(msg, FIX::FlexibleIndicator{false}, Instrument_34);
  FIX::FloorPrice FloorPrice_34;
  FloorPrice_34.setString("10425356");
set_field(msg, FloorPrice_34, Instrument_34);
  set_field(msg, FIX::FlowScheduleType{3}, Instrument_34);
  set_field(msg, FIX::InstrRegistry{"STRING_200802175"}, Instrument_34);
  set_field(msg, FIX::InstrmtAssignmentMethod{'2'}, Instrument_34);
  set_field(msg, FIX::InterestAccrualDate{"LOCALMKTDATE_2145845006"}, Instrument_34);
  set_field(msg, FIX::IssueDate{"LOCALMKTDATE_1312101440"}, Instrument_34);
  set_field(msg, FIX::Issuer{"STRING_617398521"}, Instrument_34);
  set_field(msg, FIX::ListMethod{1}, Instrument_34);
  set_field(msg, FIX::LocaleOfIssue{"STRING_1057947590"}, Instrument_34);
  set_field(msg, FIX::MaturityDate{"LOCALMKTDATE_2110618635"}, Instrument_34);
  set_field(msg, FIX::MaturityMonthYear{"MONTHYEAR_1144550414"}, Instrument_34);
  set_field(msg, FIX::MaturityTime{"TZTIMEONLY_1474070922"}, Instrument_34);
  FIX::MinPriceIncrement MinPriceIncrement_34;
  MinPriceIncrement_34.setString("16702819");
set_field(msg, MinPriceIncrement_34, Instrument_34);
  FIX::MinPriceIncrementAmount MinPriceIncrementAmount_34;
  MinPriceIncrementAmount_34.setString("7538527");
set_field(msg, MinPriceIncrementAmount_34, Instrument_34);
  set_field(msg, FIX::NTPositionLimit{676450354}, Instrument_34);
  FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_34;
  NotionalPercentageOutstanding_34.setString("68.000000");
set_field(msg, NotionalPercentageOutstanding_34, Instrument_34);
  set_field(msg, FIX::OptAttribute{'1'}, Instrument_34);
  FIX::OptPayoutAmount OptPayoutAmount_34;
  OptPayoutAmount_34.setString("5463410");
set_field(msg, OptPayoutAmount_34, Instrument_34);
  set_field(msg, FIX::OptPayoutType{3}, Instrument_34);
  FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_34;
  OriginalNotionalPercentageOutstanding_34.setString("81.400000");
set_field(msg, OriginalNotionalPercentageOutstanding_34, Instrument_34);
  set_field(msg, FIX::Pool{"STRING_62653282"}, Instrument_34);
  set_field(msg, FIX::PositionLimit{1520612930}, Instrument_34);
  set_field(msg, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_34);
  set_field(msg, FIX::PriceUnitOfMeasure{"STRING_1627492637"}, Instrument_34);
  FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_34;
  PriceUnitOfMeasureQty_34.setString("15407115");
set_field(msg, PriceUnitOfMeasureQty_34, Instrument_34);
  set_field(msg, FIX::Product{5}, Instrument_34);
  set_field(msg, FIX::ProductComplex{"STRING_1354924330"}, Instrument_34);
  set_field(msg, FIX::PutOrCall{1}, Instrument_34);
  set_field(msg, FIX::RedemptionDate{"LOCALMKTDATE_352837457"}, Instrument_34);
  set_field(msg, FIX::RepoCollateralSecurityType{"STRING_104941299"}, Instrument_34);
  FIX::RepurchaseRate RepurchaseRate_34;
  RepurchaseRate_34.setString("26.560000");
set_field(msg, RepurchaseRate_34, Instrument_34);
  set_field(msg, FIX::RepurchaseTerm{1395373092}, Instrument_34);
  set_field(msg, FIX::RestructuringType{"STRING_FR"}, Instrument_34);
  set_field(msg, FIX::SecurityDesc{"STRING_654674831"}, Instrument_34);
  set_field(msg, FIX::SecurityExchange{"EXCHANGE_1674896086"}, Instrument_34);
  set_field(msg, FIX::SecurityGroup{"STRING_562354631"}, Instrument_34);
  set_field(msg, FIX::SecurityID{"STRING_1966776271"}, Instrument_34);
  set_field(msg, FIX::SecurityIDSource{"STRING_8"}, Instrument_34);
  set_field(msg, FIX::SecurityStatus{"STRING_1"}, Instrument_34);
  set_field(msg, FIX::SecuritySubType{"STRING_877240214"}, Instrument_34);
  set_field(msg, FIX::SecurityType{"STRING_CDS"}, Instrument_34);
  set_field(msg, FIX::Seniority{"STRING_SD"}, Instrument_34);
  set_field(msg, FIX::SettlMethod{'C'}, Instrument_34);
  set_field(msg, FIX::SettleOnOpenFlag{"STRING_1778227869"}, Instrument_34);
  set_field(msg, FIX::StateOrProvinceOfIssue{"STRING_765780952"}, Instrument_34);
  set_field(msg, FIX::StrikeCurrency{"CAN"}, Instrument_34);
  FIX::StrikeMultiplier StrikeMultiplier_34;
  StrikeMultiplier_34.setString("20818797");
set_field(msg, StrikeMultiplier_34, Instrument_34);
  FIX::StrikePrice StrikePrice_34;
  StrikePrice_34.setString("14266188");
set_field(msg, StrikePrice_34, Instrument_34);
  set_field(msg, FIX::StrikePriceBoundaryMethod{4}, Instrument_34);
  FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_34;
  StrikePriceBoundaryPrecision_34.setString("42.570000");
set_field(msg, StrikePriceBoundaryPrecision_34, Instrument_34);
  set_field(msg, FIX::StrikePriceDeterminationMethod{2}, Instrument_34);
  FIX::StrikeValue StrikeValue_34;
  StrikeValue_34.setString("8497400");
set_field(msg, StrikeValue_34, Instrument_34);
  set_field(msg, FIX::Symbol{"STRING_1825645480"}, Instrument_34);
  set_field(msg, FIX::SymbolSfx{"STRING_WI"}, Instrument_34);
  set_field(msg, FIX::TimeUnit{"STRING_D"}, Instrument_34);
  set_field(msg, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_34);
  set_field(msg, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_34);
  FIX::UnitOfMeasureQty UnitOfMeasureQty_34;
  UnitOfMeasureQty_34.setString("13854855");
set_field(msg, UnitOfMeasureQty_34, Instrument_34);
  set_field(msg, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_34);
  all_values.push_back(Instrument_34);
  all_compo_names.insert(".");

  // ComplexEvents
  // Group ComplexEvents.NoComplexEvents
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_0;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_66;
    set_field(noComplexEvents_0_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_66);
    FIX::ComplexEventPrice ComplexEventPrice_66;
    ComplexEventPrice_66.setString("2902577");
set_field(noComplexEvents_0_0, ComplexEventPrice_66, ComplexEvents_NoComplexEvents_66);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_66);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_66;
    ComplexEventPriceBoundaryPrecision_66.setString("94.040000");
set_field(noComplexEvents_0_0, ComplexEventPriceBoundaryPrecision_66, ComplexEvents_NoComplexEvents_66);
    set_field(noComplexEvents_0_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_66);
    set_field(noComplexEvents_0_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_66);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_66;
    ComplexOptPayoutAmount_66.setString("1658420");
set_field(noComplexEvents_0_0, ComplexOptPayoutAmount_66, ComplexEvents_NoComplexEvents_66);
    all_values.push_back(ComplexEvents_NoComplexEvents_66);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_135;
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 29, 21, 9, 3, 2014)}, ComplexEventDates_NoComplexEventDates_135);
      set_field(noComplexEventDates_0_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 11, 59, 12, 5, 2002)}, ComplexEventDates_NoComplexEventDates_135);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_135);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_274;
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 50, 15)}, ComplexEventTimes_NoComplexEventTimes_274);
        set_field(noComplexEventTimes_0_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 56, 4)}, ComplexEventTimes_NoComplexEventTimes_274);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_274);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_0.addGroup(noComplexEventTimes_0_0_2_0);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_136;
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 5, 31, 20, 9, 2004)}, ComplexEventDates_NoComplexEventDates_136);
      set_field(noComplexEventDates_0_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 12, 57, 7, 6, 2003)}, ComplexEventDates_NoComplexEventDates_136);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_136);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_275;
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 56, 56)}, ComplexEventTimes_NoComplexEventTimes_275);
        set_field(noComplexEventTimes_0_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 57, 7)}, ComplexEventTimes_NoComplexEventTimes_275);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_275);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_276;
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 50, 24)}, ComplexEventTimes_NoComplexEventTimes_276);
        set_field(noComplexEventTimes_0_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 20, 33)}, ComplexEventTimes_NoComplexEventTimes_276);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_276);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_277;
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 30, 6)}, ComplexEventTimes_NoComplexEventTimes_277);
        set_field(noComplexEventTimes_0_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 17, 17)}, ComplexEventTimes_NoComplexEventTimes_277);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_277);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_0_1_1.addGroup(noComplexEventTimes_0_1_2_2);
      }
      noComplexEvents_0_0.addGroup(noComplexEventDates_0_1_1);
    }
    msg.addGroup(noComplexEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_1;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_67;
    set_field(noComplexEvents_0_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_67);
    FIX::ComplexEventPrice ComplexEventPrice_67;
    ComplexEventPrice_67.setString("10610181");
set_field(noComplexEvents_0_1, ComplexEventPrice_67, ComplexEvents_NoComplexEvents_67);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_67);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_67;
    ComplexEventPriceBoundaryPrecision_67.setString("78.160000");
set_field(noComplexEvents_0_1, ComplexEventPriceBoundaryPrecision_67, ComplexEvents_NoComplexEvents_67);
    set_field(noComplexEvents_0_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_67);
    set_field(noComplexEvents_0_1, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_67);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_67;
    ComplexOptPayoutAmount_67.setString("13498452");
set_field(noComplexEvents_0_1, ComplexOptPayoutAmount_67, ComplexEvents_NoComplexEvents_67);
    all_values.push_back(ComplexEvents_NoComplexEvents_67);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_137;
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 0, 52, 23, 10, 2011)}, ComplexEventDates_NoComplexEventDates_137);
      set_field(noComplexEventDates_1_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 49, 59, 27, 7, 2005)}, ComplexEventDates_NoComplexEventDates_137);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_137);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_278;
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 39, 0)}, ComplexEventTimes_NoComplexEventTimes_278);
        set_field(noComplexEventTimes_1_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 9, 3)}, ComplexEventTimes_NoComplexEventTimes_278);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_278);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_279;
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 1, 35)}, ComplexEventTimes_NoComplexEventTimes_279);
        set_field(noComplexEventTimes_1_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 57, 40)}, ComplexEventTimes_NoComplexEventTimes_279);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_279);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_280;
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 33, 15)}, ComplexEventTimes_NoComplexEventTimes_280);
        set_field(noComplexEventTimes_1_0_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 6, 10)}, ComplexEventTimes_NoComplexEventTimes_280);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_280);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_1_1_0.addGroup(noComplexEventTimes_1_0_2_2);
      }
      noComplexEvents_0_1.addGroup(noComplexEventDates_1_1_0);
    }
    msg.addGroup(noComplexEvents_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents noComplexEvents_0_2;
    // ComplexEvents.NoComplexEvents
    multiset<string> ComplexEvents_NoComplexEvents_68;
    set_field(noComplexEvents_0_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_68);
    FIX::ComplexEventPrice ComplexEventPrice_68;
    ComplexEventPrice_68.setString("1315462");
set_field(noComplexEvents_0_2, ComplexEventPrice_68, ComplexEvents_NoComplexEvents_68);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_68);
    FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_68;
    ComplexEventPriceBoundaryPrecision_68.setString("97.270000");
set_field(noComplexEvents_0_2, ComplexEventPriceBoundaryPrecision_68, ComplexEvents_NoComplexEvents_68);
    set_field(noComplexEvents_0_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_68);
    set_field(noComplexEvents_0_2, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_68);
    FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_68;
    ComplexOptPayoutAmount_68.setString("2465654");
set_field(noComplexEvents_0_2, ComplexOptPayoutAmount_68, ComplexEvents_NoComplexEvents_68);
    all_values.push_back(ComplexEvents_NoComplexEvents_68);
    all_compo_names.insert("....NoComplexEvents");

    // ComplexEventDates
    // Group ComplexEventDates.NoComplexEventDates
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_0;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_138;
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 59, 4, 21, 1, 2005)}, ComplexEventDates_NoComplexEventDates_138);
      set_field(noComplexEventDates_2_1_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 0, 59, 23, 3, 2007)}, ComplexEventDates_NoComplexEventDates_138);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_138);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_281;
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 56, 4)}, ComplexEventTimes_NoComplexEventTimes_281);
        set_field(noComplexEventTimes_2_0_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 11, 26)}, ComplexEventTimes_NoComplexEventTimes_281);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_281);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_0_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_282;
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 20, 23)}, ComplexEventTimes_NoComplexEventTimes_282);
        set_field(noComplexEventTimes_2_0_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 51, 56)}, ComplexEventTimes_NoComplexEventTimes_282);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_282);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_0.addGroup(noComplexEventTimes_2_0_2_1);
      }
      noComplexEvents_0_2.addGroup(noComplexEventDates_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates noComplexEventDates_2_1_1;
      // ComplexEventDates.NoComplexEventDates
      multiset<string> ComplexEventDates_NoComplexEventDates_139;
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 56, 40, 11, 1, 2015)}, ComplexEventDates_NoComplexEventDates_139);
      set_field(noComplexEventDates_2_1_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 31, 22, 18, 2, 2015)}, ComplexEventDates_NoComplexEventDates_139);
      all_values.push_back(ComplexEventDates_NoComplexEventDates_139);
      all_compo_names.insert("....NoComplexEvents...NoComplexEventDates");

      // ComplexEventTimes
      // Group ComplexEventTimes.NoComplexEventTimes
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_0;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_283;
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 14, 35)}, ComplexEventTimes_NoComplexEventTimes_283);
        set_field(noComplexEventTimes_2_1_2_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 38, 27)}, ComplexEventTimes_NoComplexEventTimes_283);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_283);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_1;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_284;
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 47, 59)}, ComplexEventTimes_NoComplexEventTimes_284);
        set_field(noComplexEventTimes_2_1_2_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 50, 23)}, ComplexEventTimes_NoComplexEventTimes_284);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_284);
        all_compo_names.insert("....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

        noComplexEventDates_2_1_1.addGroup(noComplexEventTimes_2_1_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_2_1_2_2;
        // ComplexEventTimes.NoComplexEventTimes
        multiset<string> ComplexEventTimes_NoComplexEventTimes_285;
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 11, 37)}, ComplexEventTimes_NoComplexEventTimes_285);
        set_field(noComplexEventTimes_2_1_2_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 8, 2)}, ComplexEventTimes_NoComplexEventTimes_285);
        all_values.push_back(ComplexEventTimes_NoComplexEventTimes_285);
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
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_0;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_73;
    set_field(noEvents_0_0, FIX::EventDate{"LOCALMKTDATE_906944259"}, EvntGrp_NoEvents_73);
    FIX::EventPx EventPx_73;
    EventPx_73.setString("18294884");
set_field(noEvents_0_0, EventPx_73, EvntGrp_NoEvents_73);
    set_field(noEvents_0_0, FIX::EventText{"STRING_628038596"}, EvntGrp_NoEvents_73);
    set_field(noEvents_0_0, FIX::EventTime{FIX::UTCTIMESTAMP(8, 14, 0, 13, 5, 2011)}, EvntGrp_NoEvents_73);
    set_field(noEvents_0_0, FIX::EventType{2}, EvntGrp_NoEvents_73);
    all_values.push_back(EvntGrp_NoEvents_73);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_1;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_74;
    set_field(noEvents_0_1, FIX::EventDate{"LOCALMKTDATE_1339103761"}, EvntGrp_NoEvents_74);
    FIX::EventPx EventPx_74;
    EventPx_74.setString("11198808");
set_field(noEvents_0_1, EventPx_74, EvntGrp_NoEvents_74);
    set_field(noEvents_0_1, FIX::EventText{"STRING_2090636808"}, EvntGrp_NoEvents_74);
    set_field(noEvents_0_1, FIX::EventTime{FIX::UTCTIMESTAMP(15, 28, 29, 26, 2, 2005)}, EvntGrp_NoEvents_74);
    set_field(noEvents_0_1, FIX::EventType{10}, EvntGrp_NoEvents_74);
    all_values.push_back(EvntGrp_NoEvents_74);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoEvents noEvents_0_2;
    // EvntGrp.NoEvents
    multiset<string> EvntGrp_NoEvents_75;
    set_field(noEvents_0_2, FIX::EventDate{"LOCALMKTDATE_2128743347"}, EvntGrp_NoEvents_75);
    FIX::EventPx EventPx_75;
    EventPx_75.setString("5483155");
set_field(noEvents_0_2, EventPx_75, EvntGrp_NoEvents_75);
    set_field(noEvents_0_2, FIX::EventText{"STRING_1052154320"}, EvntGrp_NoEvents_75);
    set_field(noEvents_0_2, FIX::EventTime{FIX::UTCTIMESTAMP(23, 19, 25, 10, 3, 2004)}, EvntGrp_NoEvents_75);
    set_field(noEvents_0_2, FIX::EventType{4}, EvntGrp_NoEvents_75);
    all_values.push_back(EvntGrp_NoEvents_75);
    all_compo_names.insert("....NoEvents");

    msg.addGroup(noEvents_0_2);
  }
  // InstrumentParties
  // Group InstrumentParties.NoInstrumentParties
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_0;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_63;
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyID{"STRING_948296005"}, InstrumentParties_NoInstrumentParties_63);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_63);
    set_field(noInstrumentParties_0_0, FIX::InstrumentPartyRole{1703130924}, InstrumentParties_NoInstrumentParties_63);
    all_values.push_back(InstrumentParties_NoInstrumentParties_63);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126;
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubID{"STRING_2023810096"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126);
      set_field(noInstrumentPartySubIDs_0_1_0, FIX::InstrumentPartySubIDType{733204364}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127;
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubID{"STRING_1613097713"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127);
      set_field(noInstrumentPartySubIDs_0_1_1, FIX::InstrumentPartySubIDType{1690394130}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_0.addGroup(noInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noInstrumentParties_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties noInstrumentParties_0_1;
    // InstrumentParties.NoInstrumentParties
    multiset<string> InstrumentParties_NoInstrumentParties_64;
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyID{"STRING_2072308125"}, InstrumentParties_NoInstrumentParties_64);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_64);
    set_field(noInstrumentParties_0_1, FIX::InstrumentPartyRole{1633547290}, InstrumentParties_NoInstrumentParties_64);
    all_values.push_back(InstrumentParties_NoInstrumentParties_64);
    all_compo_names.insert("....NoInstrumentParties");

    // InstrumentPtysSubGrp
    // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_0;
      // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128;
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubID{"STRING_656677458"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128);
      set_field(noInstrumentPartySubIDs_1_1_0, FIX::InstrumentPartySubIDType{2041238798}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128);
      all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128);
      all_compo_names.insert("....NoInstrumentParties...NoInstrumentPartySubIDs");

      noInstrumentParties_0_1.addGroup(noInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noInstrumentParties_0_1);
  }
  // SecAltIDGrp
  // Group SecAltIDGrp.NoSecurityAltID
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoSecurityAltID noSecurityAltID_0_0;
    // SecAltIDGrp.NoSecurityAltID
    multiset<string> SecAltIDGrp_NoSecurityAltID_70;
    set_field(noSecurityAltID_0_0, FIX::SecurityAltID{"STRING_1931249832"}, SecAltIDGrp_NoSecurityAltID_70);
    set_field(noSecurityAltID_0_0, FIX::SecurityAltIDSource{"STRING_1747430480"}, SecAltIDGrp_NoSecurityAltID_70);
    all_values.push_back(SecAltIDGrp_NoSecurityAltID_70);
    all_compo_names.insert("....NoSecurityAltID");

    msg.addGroup(noSecurityAltID_0_0);
  }
  // SecurityXML
  multiset<string> SecurityXML_68;
  set_field(msg, FIX::SecurityXML{"XMLDATA_146358519"}, SecurityXML_68);
  set_field(msg, FIX::SecurityXMLLen{154834693}, SecurityXML_68);
  set_field(msg, FIX::SecurityXMLSchema{"STRING_1728690179"}, SecurityXML_68);
  all_values.push_back(SecurityXML_68);
  all_compo_names.insert("..");

  // MDFullGrp
  // Group MDFullGrp.NoMDEntries
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_0;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_0;
    set_field(noMDEntries_0_0, FIX::Currency{"EUR"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::DealingCapacity{'R'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::DeskID{"STRING_1094742525"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::EncodedText{"DATA_1463460992"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::EncodedTextLen{181859285}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::ExecInst{"MULTIPLECHARVALUE_B"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::ExpireDate{"LOCALMKTDATE_1280436329"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::ExpireTime{FIX::UTCTIMESTAMP(13, 46, 51, 6, 1, 2012)}, MDFullGrp_NoMDEntries_0);
    FIX::FirstPx FirstPx_3;
    FirstPx_3.setString("4084494");
set_field(noMDEntries_0_0, FirstPx_3, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::HaltReasonInt{3}, MDFullGrp_NoMDEntries_0);
    FIX::HighPx HighPx_3;
    HighPx_3.setString("10478443");
set_field(noMDEntries_0_0, HighPx_3, MDFullGrp_NoMDEntries_0);
    FIX::LastPx LastPx_13;
    LastPx_13.setString("3332739");
set_field(noMDEntries_0_0, LastPx_13, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::LocationID{"STRING_1797995208"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::LotType{'1'}, MDFullGrp_NoMDEntries_0);
    FIX::LowPx LowPx_3;
    LowPx_3.setString("3083183");
set_field(noMDEntries_0_0, LowPx_3, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryBuyer{"STRING_307189018"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryDate{FIX::UTCDATEONLY(15, 4, 2001)}, MDFullGrp_NoMDEntries_0);
    FIX::MDEntryForwardPoints MDEntryForwardPoints_3;
    MDEntryForwardPoints_3.setString("17244101");
set_field(noMDEntries_0_0, MDEntryForwardPoints_3, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryID{"STRING_245789896"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryOriginator{"STRING_1756300146"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryPositionNo{271600578}, MDFullGrp_NoMDEntries_0);
    FIX::MDEntryPx MDEntryPx_3;
    MDEntryPx_3.setString("14527789");
set_field(noMDEntries_0_0, MDEntryPx_3, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntrySeller{"STRING_14762765"}, MDFullGrp_NoMDEntries_0);
    FIX::MDEntrySize MDEntrySize_5;
    MDEntrySize_5.setString("16992045");
set_field(noMDEntries_0_0, MDEntrySize_5, MDFullGrp_NoMDEntries_0);
    FIX::MDEntrySpotRate MDEntrySpotRate_3;
    MDEntrySpotRate_3.setString("4000377");
set_field(noMDEntries_0_0, MDEntrySpotRate_3, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryTime{FIX::UTCTIMEONLY(10, 26, 59)}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDEntryType{'S'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDMkt{"EXCHANGE_1886528307"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDOriginType{0}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDPriceLevel{2127790601}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::MDQuoteType{0}, MDFullGrp_NoMDEntries_0);
    FIX::MinQty MinQty_5;
    MinQty_5.setString("2918276");
set_field(noMDEntries_0_0, MinQty_5, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::NumberOfOrders{1485240813}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OpenCloseSettlFlag{"MULTIPLECHARVALUE_0"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OrdType{'P'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OrderCapacity{'W'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::OrderID{"STRING_156013160"}, MDFullGrp_NoMDEntries_0);
    FIX::PriceDelta PriceDelta_4;
    PriceDelta_4.setString("11548395");
set_field(noMDEntries_0_0, PriceDelta_4, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::PriceType{14}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::QuoteCondition{"MULTIPLESTRINGVALUE_H"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::QuoteEntryID{"STRING_1462028545"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::RptSeq{1347172627}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::Scope{"MULTIPLECHARVALUE_1"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SecondaryOrderID{"STRING_1552983748"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SecurityTradingStatus{21}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SellerDays{1619309604}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SettlCurrency{"USD"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SettlDate{"LOCALMKTDATE_1890910182"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::SettlType{"STRING_2"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::Text{"STRING_998361857"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TickDirection{'3'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TimeInForce{'3'}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradeCondition{"MULTIPLESTRINGVALUE_p"}, MDFullGrp_NoMDEntries_0);
    FIX::TradeVolume TradeVolume_3;
    TradeVolume_3.setString("11762113");
set_field(noMDEntries_0_0, TradeVolume_3, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradingSessionID{"STRING_6"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TradingSessionSubID{"STRING_5"}, MDFullGrp_NoMDEntries_0);
    set_field(noMDEntries_0_0, FIX::TrdType{1}, MDFullGrp_NoMDEntries_0);
    all_values.push_back(MDFullGrp_NoMDEntries_0);
    all_compo_names.insert("...NoMDEntries");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_63;
      set_field(noPartyIDs_0_1_0, FIX::PartyID{"STRING_1632703532"}, Parties_NoPartyIDs_63);
      set_field(noPartyIDs_0_1_0, FIX::PartyIDSource{'B'}, Parties_NoPartyIDs_63);
      set_field(noPartyIDs_0_1_0, FIX::PartyRole{9}, Parties_NoPartyIDs_63);
      all_values.push_back(Parties_NoPartyIDs_63);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_131;
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubID{"STRING_993458610"}, PtysSubGrp_NoPartySubIDs_131);
        set_field(noPartySubIDs_0_0_2_0, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_131);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_131);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_0.addGroup(noPartySubIDs_0_0_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_0_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_64;
      set_field(noPartyIDs_0_1_1, FIX::PartyID{"STRING_1281375540"}, Parties_NoPartyIDs_64);
      set_field(noPartyIDs_0_1_1, FIX::PartyIDSource{'6'}, Parties_NoPartyIDs_64);
      set_field(noPartyIDs_0_1_1, FIX::PartyRole{21}, Parties_NoPartyIDs_64);
      all_values.push_back(Parties_NoPartyIDs_64);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_132;
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubID{"STRING_151085962"}, PtysSubGrp_NoPartySubIDs_132);
        set_field(noPartySubIDs_0_1_2_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_132);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_132);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_0_1_1.addGroup(noPartySubIDs_0_1_2_0);
      }
      noMDEntries_0_0.addGroup(noPartyIDs_0_1_1);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_14;
      set_field(noRateSources_0_1_0, FIX::RateSource{1}, RateSource_NoRateSources_14);
      set_field(noRateSources_0_1_0, FIX::RateSourceType{1}, RateSource_NoRateSources_14);
      set_field(noRateSources_0_1_0, FIX::ReferencePage{"STRING_1156260063"}, RateSource_NoRateSources_14);
      all_values.push_back(RateSource_NoRateSources_14);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_0_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_15;
      set_field(noRateSources_0_1_1, FIX::RateSource{99}, RateSource_NoRateSources_15);
      set_field(noRateSources_0_1_1, FIX::RateSourceType{0}, RateSource_NoRateSources_15);
      set_field(noRateSources_0_1_1, FIX::ReferencePage{"STRING_807550060"}, RateSource_NoRateSources_15);
      all_values.push_back(RateSource_NoRateSources_15);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_0.addGroup(noRateSources_0_1_1);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_5;
      FIX::MDSecSize MDSecSize_5;
      MDSecSize_5.setString("19776074");
set_field(noOfSecSizes_0_1_0, MDSecSize_5, SecSizesGrp_NoOfSecSizes_5);
      set_field(noOfSecSizes_0_1_0, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_5);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_5);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_1;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_6;
      FIX::MDSecSize MDSecSize_6;
      MDSecSize_6.setString("5600348");
set_field(noOfSecSizes_0_1_1, MDSecSize_6, SecSizesGrp_NoOfSecSizes_6);
      set_field(noOfSecSizes_0_1_1, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_6);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_6);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_0_1_2;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_7;
      FIX::MDSecSize MDSecSize_7;
      MDSecSize_7.setString("12682420");
set_field(noOfSecSizes_0_1_2, MDSecSize_7, SecSizesGrp_NoOfSecSizes_7);
      set_field(noOfSecSizes_0_1_2, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_7);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_7);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_0.addGroup(noOfSecSizes_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_15;
    set_field(noMDEntries_0_0, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_0, FIX::BenchmarkCurveName{"STRING_MuniAAA"}, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_0, FIX::BenchmarkCurvePoint{"STRING_1976877013"}, SpreadOrBenchmarkCurveData_15);
    FIX::BenchmarkPrice BenchmarkPrice_15;
    BenchmarkPrice_15.setString("11069100");
set_field(noMDEntries_0_0, BenchmarkPrice_15, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_0, FIX::BenchmarkPriceType{1314635094}, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_0, FIX::BenchmarkSecurityID{"STRING_1485094810"}, SpreadOrBenchmarkCurveData_15);
    set_field(noMDEntries_0_0, FIX::BenchmarkSecurityIDSource{"STRING_1383798035"}, SpreadOrBenchmarkCurveData_15);
    FIX::Spread Spread_15;
    Spread_15.setString("10916826");
set_field(noMDEntries_0_0, Spread_15, SpreadOrBenchmarkCurveData_15);
    all_values.push_back(SpreadOrBenchmarkCurveData_15);
    all_compo_names.insert("...NoMDEntries.");

    // YieldData
    multiset<string> YieldData_10;
    FIX::Yield Yield_10;
    Yield_10.setString("97.720000");
set_field(noMDEntries_0_0, Yield_10, YieldData_10);
    set_field(noMDEntries_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_1483425203"}, YieldData_10);
    set_field(noMDEntries_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_225574560"}, YieldData_10);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_10;
    YieldRedemptionPrice_10.setString("17101298");
set_field(noMDEntries_0_0, YieldRedemptionPrice_10, YieldData_10);
    set_field(noMDEntries_0_0, FIX::YieldRedemptionPriceType{1739065532}, YieldData_10);
    set_field(noMDEntries_0_0, FIX::YieldType{"STRING_LASTCLOSE"}, YieldData_10);
    all_values.push_back(YieldData_10);
    all_compo_names.insert("...NoMDEntries.");

    msg.addGroup(noMDEntries_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_1;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_1;
    set_field(noMDEntries_0_1, FIX::Currency{"CHF"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::DealingCapacity{'A'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::DeskID{"STRING_1211990793"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::EncodedText{"DATA_926424977"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::EncodedTextLen{1273842357}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::ExecInst{"MULTIPLECHARVALUE_G"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::ExpireDate{"LOCALMKTDATE_1013122211"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::ExpireTime{FIX::UTCTIMESTAMP(11, 39, 36, 8, 12, 2002)}, MDFullGrp_NoMDEntries_1);
    FIX::FirstPx FirstPx_4;
    FirstPx_4.setString("8009093");
set_field(noMDEntries_0_1, FirstPx_4, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::HaltReasonInt{3}, MDFullGrp_NoMDEntries_1);
    FIX::HighPx HighPx_4;
    HighPx_4.setString("12105979");
set_field(noMDEntries_0_1, HighPx_4, MDFullGrp_NoMDEntries_1);
    FIX::LastPx LastPx_14;
    LastPx_14.setString("4828408");
set_field(noMDEntries_0_1, LastPx_14, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::LocationID{"STRING_99393086"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::LotType{'3'}, MDFullGrp_NoMDEntries_1);
    FIX::LowPx LowPx_4;
    LowPx_4.setString("17974759");
set_field(noMDEntries_0_1, LowPx_4, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryBuyer{"STRING_1584487896"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryDate{FIX::UTCDATEONLY(1, 9, 2012)}, MDFullGrp_NoMDEntries_1);
    FIX::MDEntryForwardPoints MDEntryForwardPoints_4;
    MDEntryForwardPoints_4.setString("9672495");
set_field(noMDEntries_0_1, MDEntryForwardPoints_4, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryID{"STRING_1478203911"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryOriginator{"STRING_481345908"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryPositionNo{1481555515}, MDFullGrp_NoMDEntries_1);
    FIX::MDEntryPx MDEntryPx_4;
    MDEntryPx_4.setString("11919361");
set_field(noMDEntries_0_1, MDEntryPx_4, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntrySeller{"STRING_792899608"}, MDFullGrp_NoMDEntries_1);
    FIX::MDEntrySize MDEntrySize_6;
    MDEntrySize_6.setString("15991378");
set_field(noMDEntries_0_1, MDEntrySize_6, MDFullGrp_NoMDEntries_1);
    FIX::MDEntrySpotRate MDEntrySpotRate_4;
    MDEntrySpotRate_4.setString("2564432");
set_field(noMDEntries_0_1, MDEntrySpotRate_4, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryTime{FIX::UTCTIMEONLY(15, 21, 48)}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDEntryType{'L'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDMkt{"EXCHANGE_1545729249"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDOriginType{0}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDPriceLevel{357449376}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::MDQuoteType{0}, MDFullGrp_NoMDEntries_1);
    FIX::MinQty MinQty_6;
    MinQty_6.setString("13967263");
set_field(noMDEntries_0_1, MinQty_6, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::NumberOfOrders{1323735476}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::OpenCloseSettlFlag{"MULTIPLECHARVALUE_3"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::OrdType{'H'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::OrderCapacity{'R'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::OrderID{"STRING_593768259"}, MDFullGrp_NoMDEntries_1);
    FIX::PriceDelta PriceDelta_5;
    PriceDelta_5.setString("17661191");
set_field(noMDEntries_0_1, PriceDelta_5, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::PriceType{16}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::QuoteCondition{"MULTIPLESTRINGVALUE_I"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::QuoteEntryID{"STRING_1203123382"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::RptSeq{2110696727}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::Scope{"MULTIPLECHARVALUE_1"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SecondaryOrderID{"STRING_971197402"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SecurityTradingStatus{4}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SellerDays{1952685082}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SettlCurrency{"JPY"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SettlDate{"LOCALMKTDATE_1286756950"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::SettlType{"STRING_1"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::Text{"STRING_2127222620"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TickDirection{'3'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TimeInForce{'2'}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TradeCondition{"MULTIPLESTRINGVALUE_m"}, MDFullGrp_NoMDEntries_1);
    FIX::TradeVolume TradeVolume_4;
    TradeVolume_4.setString("14639076");
set_field(noMDEntries_0_1, TradeVolume_4, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TradingSessionID{"STRING_2"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TradingSessionSubID{"STRING_1"}, MDFullGrp_NoMDEntries_1);
    set_field(noMDEntries_0_1, FIX::TrdType{49}, MDFullGrp_NoMDEntries_1);
    all_values.push_back(MDFullGrp_NoMDEntries_1);
    all_compo_names.insert("...NoMDEntries");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_1_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_65;
      set_field(noPartyIDs_1_1_0, FIX::PartyID{"STRING_1564752184"}, Parties_NoPartyIDs_65);
      set_field(noPartyIDs_1_1_0, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_65);
      set_field(noPartyIDs_1_1_0, FIX::PartyRole{35}, Parties_NoPartyIDs_65);
      all_values.push_back(Parties_NoPartyIDs_65);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_133;
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubID{"STRING_1657014124"}, PtysSubGrp_NoPartySubIDs_133);
        set_field(noPartySubIDs_1_0_2_0, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_133);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_133);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_0.addGroup(noPartySubIDs_1_0_2_0);
      }
      noMDEntries_0_1.addGroup(noPartyIDs_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_1_1_1;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_66;
      set_field(noPartyIDs_1_1_1, FIX::PartyID{"STRING_333237263"}, Parties_NoPartyIDs_66);
      set_field(noPartyIDs_1_1_1, FIX::PartyIDSource{'8'}, Parties_NoPartyIDs_66);
      set_field(noPartyIDs_1_1_1, FIX::PartyRole{36}, Parties_NoPartyIDs_66);
      all_values.push_back(Parties_NoPartyIDs_66);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_134;
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubID{"STRING_453254558"}, PtysSubGrp_NoPartySubIDs_134);
        set_field(noPartySubIDs_1_1_2_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_134);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_134);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_135;
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubID{"STRING_1154996131"}, PtysSubGrp_NoPartySubIDs_135);
        set_field(noPartySubIDs_1_1_2_1, FIX::PartySubIDType{15}, PtysSubGrp_NoPartySubIDs_135);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_135);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2_2;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_136;
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubID{"STRING_291476804"}, PtysSubGrp_NoPartySubIDs_136);
        set_field(noPartySubIDs_1_1_2_2, FIX::PartySubIDType{4}, PtysSubGrp_NoPartySubIDs_136);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_136);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_1.addGroup(noPartySubIDs_1_1_2_2);
      }
      noMDEntries_0_1.addGroup(noPartyIDs_1_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_1_1_2;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_67;
      set_field(noPartyIDs_1_1_2, FIX::PartyID{"STRING_1269444740"}, Parties_NoPartyIDs_67);
      set_field(noPartyIDs_1_1_2, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_67);
      set_field(noPartyIDs_1_1_2, FIX::PartyRole{16}, Parties_NoPartyIDs_67);
      all_values.push_back(Parties_NoPartyIDs_67);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_137;
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubID{"STRING_1383435188"}, PtysSubGrp_NoPartySubIDs_137);
        set_field(noPartySubIDs_1_2_2_0, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_137);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_137);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_2_2_1;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_138;
        set_field(noPartySubIDs_1_2_2_1, FIX::PartySubID{"STRING_436023076"}, PtysSubGrp_NoPartySubIDs_138);
        set_field(noPartySubIDs_1_2_2_1, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_138);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_138);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_1_1_2.addGroup(noPartySubIDs_1_2_2_1);
      }
      noMDEntries_0_1.addGroup(noPartyIDs_1_1_2);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_1_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_16;
      set_field(noRateSources_1_1_0, FIX::RateSource{1}, RateSource_NoRateSources_16);
      set_field(noRateSources_1_1_0, FIX::RateSourceType{0}, RateSource_NoRateSources_16);
      set_field(noRateSources_1_1_0, FIX::ReferencePage{"STRING_1026616062"}, RateSource_NoRateSources_16);
      all_values.push_back(RateSource_NoRateSources_16);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_1.addGroup(noRateSources_1_1_0);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_1_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_8;
      FIX::MDSecSize MDSecSize_8;
      MDSecSize_8.setString("14140995");
set_field(noOfSecSizes_1_1_0, MDSecSize_8, SecSizesGrp_NoOfSecSizes_8);
      set_field(noOfSecSizes_1_1_0, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_8);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_8);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_1.addGroup(noOfSecSizes_1_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_16;
    set_field(noMDEntries_0_1, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_16);
    set_field(noMDEntries_0_1, FIX::BenchmarkCurveName{"STRING_LIBID"}, SpreadOrBenchmarkCurveData_16);
    set_field(noMDEntries_0_1, FIX::BenchmarkCurvePoint{"STRING_355409442"}, SpreadOrBenchmarkCurveData_16);
    FIX::BenchmarkPrice BenchmarkPrice_16;
    BenchmarkPrice_16.setString("12569086");
set_field(noMDEntries_0_1, BenchmarkPrice_16, SpreadOrBenchmarkCurveData_16);
    set_field(noMDEntries_0_1, FIX::BenchmarkPriceType{1195247758}, SpreadOrBenchmarkCurveData_16);
    set_field(noMDEntries_0_1, FIX::BenchmarkSecurityID{"STRING_688646706"}, SpreadOrBenchmarkCurveData_16);
    set_field(noMDEntries_0_1, FIX::BenchmarkSecurityIDSource{"STRING_1153288977"}, SpreadOrBenchmarkCurveData_16);
    FIX::Spread Spread_16;
    Spread_16.setString("2575284");
set_field(noMDEntries_0_1, Spread_16, SpreadOrBenchmarkCurveData_16);
    all_values.push_back(SpreadOrBenchmarkCurveData_16);
    all_compo_names.insert("...NoMDEntries.");

    // YieldData
    multiset<string> YieldData_11;
    FIX::Yield Yield_11;
    Yield_11.setString("94.550000");
set_field(noMDEntries_0_1, Yield_11, YieldData_11);
    set_field(noMDEntries_0_1, FIX::YieldCalcDate{"LOCALMKTDATE_1606543535"}, YieldData_11);
    set_field(noMDEntries_0_1, FIX::YieldRedemptionDate{"LOCALMKTDATE_1711053355"}, YieldData_11);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_11;
    YieldRedemptionPrice_11.setString("17955155");
set_field(noMDEntries_0_1, YieldRedemptionPrice_11, YieldData_11);
    set_field(noMDEntries_0_1, FIX::YieldRedemptionPriceType{2023011172}, YieldData_11);
    set_field(noMDEntries_0_1, FIX::YieldType{"STRING_TAXEQUIV"}, YieldData_11);
    all_values.push_back(YieldData_11);
    all_compo_names.insert("...NoMDEntries.");

    msg.addGroup(noMDEntries_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries noMDEntries_0_2;
    // MDFullGrp.NoMDEntries
    multiset<string> MDFullGrp_NoMDEntries_2;
    set_field(noMDEntries_0_2, FIX::Currency{"JPY"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::DealingCapacity{'P'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::DeskID{"STRING_2054853024"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::EncodedText{"DATA_1601256369"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::EncodedTextLen{1335159938}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::ExecInst{"MULTIPLECHARVALUE_L"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::ExpireDate{"LOCALMKTDATE_2037279445"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::ExpireTime{FIX::UTCTIMESTAMP(19, 31, 44, 25, 6, 2014)}, MDFullGrp_NoMDEntries_2);
    FIX::FirstPx FirstPx_5;
    FirstPx_5.setString("20124608");
set_field(noMDEntries_0_2, FirstPx_5, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::HaltReasonInt{4}, MDFullGrp_NoMDEntries_2);
    FIX::HighPx HighPx_5;
    HighPx_5.setString("16143033");
set_field(noMDEntries_0_2, HighPx_5, MDFullGrp_NoMDEntries_2);
    FIX::LastPx LastPx_15;
    LastPx_15.setString("4442288");
set_field(noMDEntries_0_2, LastPx_15, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::LocationID{"STRING_2045852495"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::LotType{'1'}, MDFullGrp_NoMDEntries_2);
    FIX::LowPx LowPx_5;
    LowPx_5.setString("16394766");
set_field(noMDEntries_0_2, LowPx_5, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryBuyer{"STRING_587015553"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryDate{FIX::UTCDATEONLY(19, 1, 2008)}, MDFullGrp_NoMDEntries_2);
    FIX::MDEntryForwardPoints MDEntryForwardPoints_5;
    MDEntryForwardPoints_5.setString("14605747");
set_field(noMDEntries_0_2, MDEntryForwardPoints_5, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryID{"STRING_875566947"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryOriginator{"STRING_1211604748"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryPositionNo{1315621305}, MDFullGrp_NoMDEntries_2);
    FIX::MDEntryPx MDEntryPx_5;
    MDEntryPx_5.setString("5023087");
set_field(noMDEntries_0_2, MDEntryPx_5, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntrySeller{"STRING_209093364"}, MDFullGrp_NoMDEntries_2);
    FIX::MDEntrySize MDEntrySize_7;
    MDEntrySize_7.setString("12673460");
set_field(noMDEntries_0_2, MDEntrySize_7, MDFullGrp_NoMDEntries_2);
    FIX::MDEntrySpotRate MDEntrySpotRate_5;
    MDEntrySpotRate_5.setString("4096781");
set_field(noMDEntries_0_2, MDEntrySpotRate_5, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryTime{FIX::UTCTIMEONLY(8, 18, 51)}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDEntryType{'2'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDMkt{"EXCHANGE_855706997"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDOriginType{2}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDPriceLevel{217370511}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::MDQuoteType{4}, MDFullGrp_NoMDEntries_2);
    FIX::MinQty MinQty_7;
    MinQty_7.setString("15790891");
set_field(noMDEntries_0_2, MinQty_7, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::NumberOfOrders{84295641}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::OpenCloseSettlFlag{"MULTIPLECHARVALUE_5"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::OrdType{'H'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::OrderCapacity{'R'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::OrderID{"STRING_955707279"}, MDFullGrp_NoMDEntries_2);
    FIX::PriceDelta PriceDelta_6;
    PriceDelta_6.setString("10204173");
set_field(noMDEntries_0_2, PriceDelta_6, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::PriceType{11}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::QuoteCondition{"MULTIPLESTRINGVALUE_L"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::QuoteEntryID{"STRING_1607432944"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::RptSeq{4377373}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::Scope{"MULTIPLECHARVALUE_2"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SecondaryOrderID{"STRING_687484304"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SecurityTradingStatus{24}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SellerDays{1657796502}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SettlCurrency{"CAN"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SettlDate{"LOCALMKTDATE_825934159"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::SettlType{"STRING_4"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::Text{"STRING_613669061"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TickDirection{'2'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TimeInForce{'5'}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TradeCondition{"MULTIPLESTRINGVALUE_r"}, MDFullGrp_NoMDEntries_2);
    FIX::TradeVolume TradeVolume_5;
    TradeVolume_5.setString("4008189");
set_field(noMDEntries_0_2, TradeVolume_5, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TradingSessionID{"STRING_4"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TradingSessionSubID{"STRING_1"}, MDFullGrp_NoMDEntries_2);
    set_field(noMDEntries_0_2, FIX::TrdType{52}, MDFullGrp_NoMDEntries_2);
    all_values.push_back(MDFullGrp_NoMDEntries_2);
    all_compo_names.insert("...NoMDEntries");

    // Parties
    // Group Parties.NoPartyIDs
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs noPartyIDs_2_1_0;
      // Parties.NoPartyIDs
      multiset<string> Parties_NoPartyIDs_68;
      set_field(noPartyIDs_2_1_0, FIX::PartyID{"STRING_1406741344"}, Parties_NoPartyIDs_68);
      set_field(noPartyIDs_2_1_0, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_68);
      set_field(noPartyIDs_2_1_0, FIX::PartyRole{9}, Parties_NoPartyIDs_68);
      all_values.push_back(Parties_NoPartyIDs_68);
      all_compo_names.insert("...NoMDEntries...NoPartyIDs");

      // PtysSubGrp
      // Group PtysSubGrp.NoPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_0_2_0;
        // PtysSubGrp.NoPartySubIDs
        multiset<string> PtysSubGrp_NoPartySubIDs_139;
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubID{"STRING_319546349"}, PtysSubGrp_NoPartySubIDs_139);
        set_field(noPartySubIDs_2_0_2_0, FIX::PartySubIDType{30}, PtysSubGrp_NoPartySubIDs_139);
        all_values.push_back(PtysSubGrp_NoPartySubIDs_139);
        all_compo_names.insert("...NoMDEntries...NoPartyIDs...NoPartySubIDs");

        noPartyIDs_2_1_0.addGroup(noPartySubIDs_2_0_2_0);
      }
      noMDEntries_0_2.addGroup(noPartyIDs_2_1_0);
    }
    // RateSource
    // Group RateSource.NoRateSources
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_2_1_0;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_17;
      set_field(noRateSources_2_1_0, FIX::RateSource{1}, RateSource_NoRateSources_17);
      set_field(noRateSources_2_1_0, FIX::RateSourceType{0}, RateSource_NoRateSources_17);
      set_field(noRateSources_2_1_0, FIX::ReferencePage{"STRING_833329122"}, RateSource_NoRateSources_17);
      all_values.push_back(RateSource_NoRateSources_17);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_2.addGroup(noRateSources_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoRateSources noRateSources_2_1_1;
      // RateSource.NoRateSources
      multiset<string> RateSource_NoRateSources_18;
      set_field(noRateSources_2_1_1, FIX::RateSource{1}, RateSource_NoRateSources_18);
      set_field(noRateSources_2_1_1, FIX::RateSourceType{1}, RateSource_NoRateSources_18);
      set_field(noRateSources_2_1_1, FIX::ReferencePage{"STRING_293278418"}, RateSource_NoRateSources_18);
      all_values.push_back(RateSource_NoRateSources_18);
      all_compo_names.insert("...NoMDEntries...NoRateSources");

      noMDEntries_0_2.addGroup(noRateSources_2_1_1);
    }
    // SecSizesGrp
    // Group SecSizesGrp.NoOfSecSizes
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoMDEntries::NoOfSecSizes noOfSecSizes_2_1_0;
      // SecSizesGrp.NoOfSecSizes
      multiset<string> SecSizesGrp_NoOfSecSizes_9;
      FIX::MDSecSize MDSecSize_9;
      MDSecSize_9.setString("17384319");
set_field(noOfSecSizes_2_1_0, MDSecSize_9, SecSizesGrp_NoOfSecSizes_9);
      set_field(noOfSecSizes_2_1_0, FIX::MDSecSizeType{1}, SecSizesGrp_NoOfSecSizes_9);
      all_values.push_back(SecSizesGrp_NoOfSecSizes_9);
      all_compo_names.insert("...NoMDEntries...NoOfSecSizes");

      noMDEntries_0_2.addGroup(noOfSecSizes_2_1_0);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_17;
    set_field(noMDEntries_0_2, FIX::BenchmarkCurveCurrency{"GBP"}, SpreadOrBenchmarkCurveData_17);
    set_field(noMDEntries_0_2, FIX::BenchmarkCurveName{"STRING_FutureSWAP"}, SpreadOrBenchmarkCurveData_17);
    set_field(noMDEntries_0_2, FIX::BenchmarkCurvePoint{"STRING_1894913024"}, SpreadOrBenchmarkCurveData_17);
    FIX::BenchmarkPrice BenchmarkPrice_17;
    BenchmarkPrice_17.setString("20746789");
set_field(noMDEntries_0_2, BenchmarkPrice_17, SpreadOrBenchmarkCurveData_17);
    set_field(noMDEntries_0_2, FIX::BenchmarkPriceType{314206703}, SpreadOrBenchmarkCurveData_17);
    set_field(noMDEntries_0_2, FIX::BenchmarkSecurityID{"STRING_361098437"}, SpreadOrBenchmarkCurveData_17);
    set_field(noMDEntries_0_2, FIX::BenchmarkSecurityIDSource{"STRING_2020475520"}, SpreadOrBenchmarkCurveData_17);
    FIX::Spread Spread_17;
    Spread_17.setString("6417612");
set_field(noMDEntries_0_2, Spread_17, SpreadOrBenchmarkCurveData_17);
    all_values.push_back(SpreadOrBenchmarkCurveData_17);
    all_compo_names.insert("...NoMDEntries.");

    // YieldData
    multiset<string> YieldData_12;
    FIX::Yield Yield_12;
    Yield_12.setString("35.840000");
set_field(noMDEntries_0_2, Yield_12, YieldData_12);
    set_field(noMDEntries_0_2, FIX::YieldCalcDate{"LOCALMKTDATE_273810782"}, YieldData_12);
    set_field(noMDEntries_0_2, FIX::YieldRedemptionDate{"LOCALMKTDATE_913360964"}, YieldData_12);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_12;
    YieldRedemptionPrice_12.setString("4668306");
set_field(noMDEntries_0_2, YieldRedemptionPrice_12, YieldData_12);
    set_field(noMDEntries_0_2, FIX::YieldRedemptionPriceType{291690979}, YieldData_12);
    set_field(noMDEntries_0_2, FIX::YieldType{"STRING_CALL"}, YieldData_12);
    all_values.push_back(YieldData_12);
    all_compo_names.insert("...NoMDEntries.");

    msg.addGroup(noMDEntries_0_2);
  }
  // RoutingGrp
  // Group RoutingGrp.NoRoutingIDs
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoRoutingIDs noRoutingIDs_0_0;
    // RoutingGrp.NoRoutingIDs
    multiset<string> RoutingGrp_NoRoutingIDs_5;
    set_field(noRoutingIDs_0_0, FIX::RoutingID{"STRING_526941687"}, RoutingGrp_NoRoutingIDs_5);
    set_field(noRoutingIDs_0_0, FIX::RoutingType{2}, RoutingGrp_NoRoutingIDs_5);
    all_values.push_back(RoutingGrp_NoRoutingIDs_5);
    all_compo_names.insert("...NoRoutingIDs");

    msg.addGroup(noRoutingIDs_0_0);
  }
  // UndInstrmtGrp
  // Group UndInstrmtGrp.NoUnderlyings
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_0;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_53;
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuer{"DATA_846488036"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingIssuerLen{1804794664}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_377346877"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::EncodedUnderlyingSecurityDescLen{717149709}, UnderlyingInstrument_53);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_53;
    UnderlyingAdjustedQuantity_53.setString("7508209");
set_field(noUnderlyings_0_0, UnderlyingAdjustedQuantity_53, UnderlyingInstrument_53);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_53;
    UnderlyingAllocationPercent_53.setString("60.000000");
set_field(noUnderlyings_0_0, UnderlyingAllocationPercent_53, UnderlyingInstrument_53);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_53;
    UnderlyingAttachmentPoint_53.setString("50.660000");
set_field(noUnderlyings_0_0, UnderlyingAttachmentPoint_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCFICode{"STRING_144547562"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPProgram{"STRING_1503954418"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCPRegType{"STRING_1012537796"}, UnderlyingInstrument_53);
    FIX::UnderlyingCapValue UnderlyingCapValue_53;
    UnderlyingCapValue_53.setString("18829795");
set_field(noUnderlyings_0_0, UnderlyingCapValue_53, UnderlyingInstrument_53);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_53;
    UnderlyingCashAmount_53.setString("3372334");
set_field(noUnderlyings_0_0, UnderlyingCashAmount_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_53);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_53;
    UnderlyingContractMultiplier_53.setString("9842406");
set_field(noUnderlyings_0_0, UnderlyingContractMultiplier_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingContractMultiplierUnit{733563820}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_102820851"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_911435954"}, UnderlyingInstrument_53);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_53;
    UnderlyingCouponRate_53.setString("5.240000");
set_field(noUnderlyings_0_0, UnderlyingCouponRate_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCreditRating{"STRING_463919289"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_53);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_53;
    UnderlyingCurrentValue_53.setString("11015528");
set_field(noUnderlyings_0_0, UnderlyingCurrentValue_53, UnderlyingInstrument_53);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_53;
    UnderlyingDetachmentPoint_53.setString("86.090000");
set_field(noUnderlyings_0_0, UnderlyingDetachmentPoint_53, UnderlyingInstrument_53);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_53;
    UnderlyingDirtyPrice_53.setString("4554090");
set_field(noUnderlyings_0_0, UnderlyingDirtyPrice_53, UnderlyingInstrument_53);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_53;
    UnderlyingEndPrice_53.setString("15683834");
set_field(noUnderlyings_0_0, UnderlyingEndPrice_53, UnderlyingInstrument_53);
    FIX::UnderlyingEndValue UnderlyingEndValue_53;
    UnderlyingEndValue_53.setString("13499295");
set_field(noUnderlyings_0_0, UnderlyingEndValue_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingExerciseStyle{348593119}, UnderlyingInstrument_53);
    FIX::UnderlyingFXRate UnderlyingFXRate_53;
    UnderlyingFXRate_53.setString("12944717");
set_field(noUnderlyings_0_0, UnderlyingFXRate_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_53);
    FIX::UnderlyingFactor UnderlyingFactor_53;
    UnderlyingFactor_53.setString("20155851");
set_field(noUnderlyings_0_0, UnderlyingFactor_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingFlowScheduleType{1858906944}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingInstrRegistry{"STRING_575875664"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1672896117"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingIssuer{"STRING_88770174"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_1293025374"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_276233447"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1299446174"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_8196792"}, UnderlyingInstrument_53);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_53;
    UnderlyingNotionalPercentageOutstanding_53.setString("10.090000");
set_field(noUnderlyings_0_0, UnderlyingNotionalPercentageOutstanding_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingOptAttribute{'6'}, UnderlyingInstrument_53);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_53;
    UnderlyingOriginalNotionalPercentageOutstanding_53.setString("45.890000");
set_field(noUnderlyings_0_0, UnderlyingOriginalNotionalPercentageOutstanding_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_156276863"}, UnderlyingInstrument_53);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_53;
    UnderlyingPriceUnitOfMeasureQty_53.setString("9931504");
set_field(noUnderlyings_0_0, UnderlyingPriceUnitOfMeasureQty_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingProduct{1376126064}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingPutOrCall{1140517512}, UnderlyingInstrument_53);
    FIX::UnderlyingPx UnderlyingPx_53;
    UnderlyingPx_53.setString("17267142");
set_field(noUnderlyings_0_0, UnderlyingPx_53, UnderlyingInstrument_53);
    FIX::UnderlyingQty UnderlyingQty_53;
    UnderlyingQty_53.setString("14789469");
set_field(noUnderlyings_0_0, UnderlyingQty_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2051953466"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_627001134"}, UnderlyingInstrument_53);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_53;
    UnderlyingRepurchaseRate_53.setString("62.050000");
set_field(noUnderlyings_0_0, UnderlyingRepurchaseRate_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRepurchaseTerm{688897645}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingRestructuringType{"STRING_169049239"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityDesc{"STRING_896935430"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1747136254"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityID{"STRING_624458309"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityIDSource{"STRING_317835270"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecuritySubType{"STRING_949582194"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSecurityType{"STRING_973051428"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSeniority{"STRING_1612307069"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlMethod{"STRING_678969822"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_53);
    FIX::UnderlyingStartValue UnderlyingStartValue_53;
    UnderlyingStartValue_53.setString("13237303");
set_field(noUnderlyings_0_0, UnderlyingStartValue_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1254845487"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_53);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_53;
    UnderlyingStrikePrice_53.setString("4003872");
set_field(noUnderlyings_0_0, UnderlyingStrikePrice_53, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbol{"STRING_642798797"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingSymbolSfx{"STRING_564463065"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingTimeUnit{"STRING_408584005"}, UnderlyingInstrument_53);
    set_field(noUnderlyings_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1063579806"}, UnderlyingInstrument_53);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_53;
    UnderlyingUnitOfMeasureQty_53.setString("12203800");
set_field(noUnderlyings_0_0, UnderlyingUnitOfMeasureQty_53, UnderlyingInstrument_53);
    all_values.push_back(UnderlyingInstrument_53);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_110;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_1219856670"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_66046800"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_111;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_657961011"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_212890534"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_105;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_2136907927"}, UnderlyingStipulations_NoUnderlyingStips_105);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_117360352"}, UnderlyingStipulations_NoUnderlyingStips_105);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_105);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_106;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_272278545"}, UnderlyingStipulations_NoUnderlyingStips_106);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1932290484"}, UnderlyingStipulations_NoUnderlyingStips_106);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_106);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_113;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_441327784"}, UndlyInstrumentParties_NoUndlyInstrumentParties_113);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_113);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{405910603}, UndlyInstrumentParties_NoUndlyInstrumentParties_113);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_113);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_999577537"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1355492798}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_114;
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_2038837521"}, UndlyInstrumentParties_NoUndlyInstrumentParties_114);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyIDSource{'4'}, UndlyInstrumentParties_NoUndlyInstrumentParties_114);
      set_field(noUndlyInstrumentParties_0_1_1, FIX::UnderlyingInstrumentPartyRole{2034462620}, UndlyInstrumentParties_NoUndlyInstrumentParties_114);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_114);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226;
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1788131323"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);
        set_field(noUndlyInstrumentPartySubIDs_0_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{1141824459}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_0);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_115;
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1099072103"}, UndlyInstrumentParties_NoUndlyInstrumentParties_115);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_115);
      set_field(noUndlyInstrumentParties_0_1_2, FIX::UnderlyingInstrumentPartyRole{1542211672}, UndlyInstrumentParties_NoUndlyInstrumentParties_115);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_115);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1617611280"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{1950795678}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228;
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_657967059"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);
        set_field(noUndlyInstrumentPartySubIDs_0_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{690507642}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_1);
      }
      noUnderlyings_0_0.addGroup(noUndlyInstrumentParties_0_1_2);
    }
    msg.addGroup(noUnderlyings_0_0);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_1;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_54;
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuer{"DATA_1232630624"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingIssuerLen{1877823729}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_756554442"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::EncodedUnderlyingSecurityDescLen{1890591635}, UnderlyingInstrument_54);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_54;
    UnderlyingAdjustedQuantity_54.setString("20907142");
set_field(noUnderlyings_0_1, UnderlyingAdjustedQuantity_54, UnderlyingInstrument_54);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_54;
    UnderlyingAllocationPercent_54.setString("18.530000");
set_field(noUnderlyings_0_1, UnderlyingAllocationPercent_54, UnderlyingInstrument_54);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_54;
    UnderlyingAttachmentPoint_54.setString("59.140000");
set_field(noUnderlyings_0_1, UnderlyingAttachmentPoint_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCFICode{"STRING_60590967"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPProgram{"STRING_674110398"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCPRegType{"STRING_1664822750"}, UnderlyingInstrument_54);
    FIX::UnderlyingCapValue UnderlyingCapValue_54;
    UnderlyingCapValue_54.setString("8668489");
set_field(noUnderlyings_0_1, UnderlyingCapValue_54, UnderlyingInstrument_54);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_54;
    UnderlyingCashAmount_54.setString("11154381");
set_field(noUnderlyings_0_1, UnderlyingCashAmount_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_54);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_54;
    UnderlyingContractMultiplier_54.setString("12727595");
set_field(noUnderlyings_0_1, UnderlyingContractMultiplier_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingContractMultiplierUnit{33740628}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1198658906"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_480768718"}, UnderlyingInstrument_54);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_54;
    UnderlyingCouponRate_54.setString("81.490000");
set_field(noUnderlyings_0_1, UnderlyingCouponRate_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCreditRating{"STRING_1663059864"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_54);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_54;
    UnderlyingCurrentValue_54.setString("13037075");
set_field(noUnderlyings_0_1, UnderlyingCurrentValue_54, UnderlyingInstrument_54);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_54;
    UnderlyingDetachmentPoint_54.setString("21.500000");
set_field(noUnderlyings_0_1, UnderlyingDetachmentPoint_54, UnderlyingInstrument_54);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_54;
    UnderlyingDirtyPrice_54.setString("17566733");
set_field(noUnderlyings_0_1, UnderlyingDirtyPrice_54, UnderlyingInstrument_54);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_54;
    UnderlyingEndPrice_54.setString("2093721");
set_field(noUnderlyings_0_1, UnderlyingEndPrice_54, UnderlyingInstrument_54);
    FIX::UnderlyingEndValue UnderlyingEndValue_54;
    UnderlyingEndValue_54.setString("9043001");
set_field(noUnderlyings_0_1, UnderlyingEndValue_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingExerciseStyle{1351060611}, UnderlyingInstrument_54);
    FIX::UnderlyingFXRate UnderlyingFXRate_54;
    UnderlyingFXRate_54.setString("18269833");
set_field(noUnderlyings_0_1, UnderlyingFXRate_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_54);
    FIX::UnderlyingFactor UnderlyingFactor_54;
    UnderlyingFactor_54.setString("20090276");
set_field(noUnderlyings_0_1, UnderlyingFactor_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingFlowScheduleType{370007381}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingInstrRegistry{"STRING_1940242829"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1739367751"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingIssuer{"STRING_1126561824"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingLocaleOfIssue{"STRING_1683350817"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1682598366"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1528393677"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1415883083"}, UnderlyingInstrument_54);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_54;
    UnderlyingNotionalPercentageOutstanding_54.setString("93.340000");
set_field(noUnderlyings_0_1, UnderlyingNotionalPercentageOutstanding_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_54);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_54;
    UnderlyingOriginalNotionalPercentageOutstanding_54.setString("21.860000");
set_field(noUnderlyings_0_1, UnderlyingOriginalNotionalPercentageOutstanding_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_462554651"}, UnderlyingInstrument_54);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_54;
    UnderlyingPriceUnitOfMeasureQty_54.setString("11704586");
set_field(noUnderlyings_0_1, UnderlyingPriceUnitOfMeasureQty_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingProduct{1132303555}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingPutOrCall{1735314219}, UnderlyingInstrument_54);
    FIX::UnderlyingPx UnderlyingPx_54;
    UnderlyingPx_54.setString("12041992");
set_field(noUnderlyings_0_1, UnderlyingPx_54, UnderlyingInstrument_54);
    FIX::UnderlyingQty UnderlyingQty_54;
    UnderlyingQty_54.setString("1834788");
set_field(noUnderlyings_0_1, UnderlyingQty_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_68599290"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1129293739"}, UnderlyingInstrument_54);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_54;
    UnderlyingRepurchaseRate_54.setString("86.770000");
set_field(noUnderlyings_0_1, UnderlyingRepurchaseRate_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRepurchaseTerm{436346981}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingRestructuringType{"STRING_1786894994"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityDesc{"STRING_1002762568"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1945919131"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityID{"STRING_1396084705"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityIDSource{"STRING_1212134675"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecuritySubType{"STRING_702735658"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSecurityType{"STRING_599661669"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSeniority{"STRING_891634414"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlMethod{"STRING_1410347863"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_54);
    FIX::UnderlyingStartValue UnderlyingStartValue_54;
    UnderlyingStartValue_54.setString("12616417");
set_field(noUnderlyings_0_1, UnderlyingStartValue_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1203107045"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_54);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_54;
    UnderlyingStrikePrice_54.setString("7389742");
set_field(noUnderlyings_0_1, UnderlyingStrikePrice_54, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbol{"STRING_1735688161"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingSymbolSfx{"STRING_1769113648"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingTimeUnit{"STRING_7373649"}, UnderlyingInstrument_54);
    set_field(noUnderlyings_0_1, FIX::UnderlyingUnitOfMeasure{"STRING_1331393847"}, UnderlyingInstrument_54);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_54;
    UnderlyingUnitOfMeasureQty_54.setString("18241340");
set_field(noUnderlyings_0_1, UnderlyingUnitOfMeasureQty_54, UnderlyingInstrument_54);
    all_values.push_back(UnderlyingInstrument_54);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_112;
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltID{"STRING_1793948498"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);
      set_field(noUnderlyingSecurityAltID_1_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_847109037"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_1.addGroup(noUnderlyingSecurityAltID_1_1_0);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_107;
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipType{"STRING_1381779070"}, UnderlyingStipulations_NoUnderlyingStips_107);
      set_field(noUnderlyingStips_1_1_0, FIX::UnderlyingStipValue{"STRING_2051308274"}, UnderlyingStipulations_NoUnderlyingStips_107);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_107);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_108;
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipType{"STRING_108894555"}, UnderlyingStipulations_NoUnderlyingStips_108);
      set_field(noUnderlyingStips_1_1_1, FIX::UnderlyingStipValue{"STRING_1450378360"}, UnderlyingStipulations_NoUnderlyingStips_108);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_108);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_1.addGroup(noUnderlyingStips_1_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_116;
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1955433232"}, UndlyInstrumentParties_NoUndlyInstrumentParties_116);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_116);
      set_field(noUndlyInstrumentParties_1_1_0, FIX::UnderlyingInstrumentPartyRole{672529712}, UndlyInstrumentParties_NoUndlyInstrumentParties_116);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_116);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1685160824"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{2068614417}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230;
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2022846828"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);
        set_field(noUndlyInstrumentPartySubIDs_1_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{240412835}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_1);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_117;
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_520792438"}, UndlyInstrumentParties_NoUndlyInstrumentParties_117);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_117);
      set_field(noUndlyInstrumentParties_1_1_1, FIX::UnderlyingInstrumentPartyRole{1650760698}, UndlyInstrumentParties_NoUndlyInstrumentParties_117);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_117);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231;
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2028639389"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);
        set_field(noUndlyInstrumentPartySubIDs_1_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{706384095}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_1_1_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_0);
      }
      noUnderlyings_0_1.addGroup(noUndlyInstrumentParties_1_1_1);
    }
    msg.addGroup(noUnderlyings_0_1);
  }
  {
    FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings noUnderlyings_0_2;
    // UndInstrmtGrp.NoUnderlyings
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_55;
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuer{"DATA_1035087925"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingIssuerLen{121875713}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1445358309"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::EncodedUnderlyingSecurityDescLen{623292438}, UnderlyingInstrument_55);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_55;
    UnderlyingAdjustedQuantity_55.setString("18909893");
set_field(noUnderlyings_0_2, UnderlyingAdjustedQuantity_55, UnderlyingInstrument_55);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_55;
    UnderlyingAllocationPercent_55.setString("19.590000");
set_field(noUnderlyings_0_2, UnderlyingAllocationPercent_55, UnderlyingInstrument_55);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_55;
    UnderlyingAttachmentPoint_55.setString("62.860000");
set_field(noUnderlyings_0_2, UnderlyingAttachmentPoint_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCFICode{"STRING_1567639789"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPProgram{"STRING_245844146"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCPRegType{"STRING_1601151136"}, UnderlyingInstrument_55);
    FIX::UnderlyingCapValue UnderlyingCapValue_55;
    UnderlyingCapValue_55.setString("2672651");
set_field(noUnderlyings_0_2, UnderlyingCapValue_55, UnderlyingInstrument_55);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_55;
    UnderlyingCashAmount_55.setString("1712598");
set_field(noUnderlyings_0_2, UnderlyingCashAmount_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_55);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_55;
    UnderlyingContractMultiplier_55.setString("1710898");
set_field(noUnderlyings_0_2, UnderlyingContractMultiplier_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingContractMultiplierUnit{280154444}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_138341270"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1204208170"}, UnderlyingInstrument_55);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_55;
    UnderlyingCouponRate_55.setString("40.290000");
set_field(noUnderlyings_0_2, UnderlyingCouponRate_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCreditRating{"STRING_2025066611"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_55);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_55;
    UnderlyingCurrentValue_55.setString("15627437");
set_field(noUnderlyings_0_2, UnderlyingCurrentValue_55, UnderlyingInstrument_55);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_55;
    UnderlyingDetachmentPoint_55.setString("86.510000");
set_field(noUnderlyings_0_2, UnderlyingDetachmentPoint_55, UnderlyingInstrument_55);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_55;
    UnderlyingDirtyPrice_55.setString("7741793");
set_field(noUnderlyings_0_2, UnderlyingDirtyPrice_55, UnderlyingInstrument_55);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_55;
    UnderlyingEndPrice_55.setString("18031566");
set_field(noUnderlyings_0_2, UnderlyingEndPrice_55, UnderlyingInstrument_55);
    FIX::UnderlyingEndValue UnderlyingEndValue_55;
    UnderlyingEndValue_55.setString("1711774");
set_field(noUnderlyings_0_2, UnderlyingEndValue_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingExerciseStyle{1541176956}, UnderlyingInstrument_55);
    FIX::UnderlyingFXRate UnderlyingFXRate_55;
    UnderlyingFXRate_55.setString("13064336");
set_field(noUnderlyings_0_2, UnderlyingFXRate_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_55);
    FIX::UnderlyingFactor UnderlyingFactor_55;
    UnderlyingFactor_55.setString("14223326");
set_field(noUnderlyings_0_2, UnderlyingFactor_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingFlowScheduleType{2012817769}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingInstrRegistry{"STRING_40779849"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1544208410"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingIssuer{"STRING_1310692430"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingLocaleOfIssue{"STRING_664072287"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1287714124"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_615940741"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_471274925"}, UnderlyingInstrument_55);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_55;
    UnderlyingNotionalPercentageOutstanding_55.setString("2.650000");
set_field(noUnderlyings_0_2, UnderlyingNotionalPercentageOutstanding_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_55);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_55;
    UnderlyingOriginalNotionalPercentageOutstanding_55.setString("60.620000");
set_field(noUnderlyings_0_2, UnderlyingOriginalNotionalPercentageOutstanding_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_975135443"}, UnderlyingInstrument_55);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_55;
    UnderlyingPriceUnitOfMeasureQty_55.setString("10330447");
set_field(noUnderlyings_0_2, UnderlyingPriceUnitOfMeasureQty_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingProduct{760388972}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingPutOrCall{1146225247}, UnderlyingInstrument_55);
    FIX::UnderlyingPx UnderlyingPx_55;
    UnderlyingPx_55.setString("13131992");
set_field(noUnderlyings_0_2, UnderlyingPx_55, UnderlyingInstrument_55);
    FIX::UnderlyingQty UnderlyingQty_55;
    UnderlyingQty_55.setString("8987302");
set_field(noUnderlyings_0_2, UnderlyingQty_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_202949769"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1401303250"}, UnderlyingInstrument_55);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_55;
    UnderlyingRepurchaseRate_55.setString("32.060000");
set_field(noUnderlyings_0_2, UnderlyingRepurchaseRate_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRepurchaseTerm{2079687651}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingRestructuringType{"STRING_152635784"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityDesc{"STRING_191573346"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1730072655"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityID{"STRING_926815146"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityIDSource{"STRING_1994729969"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecuritySubType{"STRING_1901250097"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSecurityType{"STRING_320508454"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSeniority{"STRING_1153679995"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlMethod{"STRING_906942021"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_55);
    FIX::UnderlyingStartValue UnderlyingStartValue_55;
    UnderlyingStartValue_55.setString("10190141");
set_field(noUnderlyings_0_2, UnderlyingStartValue_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_947721870"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_55);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_55;
    UnderlyingStrikePrice_55.setString("16117941");
set_field(noUnderlyings_0_2, UnderlyingStrikePrice_55, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbol{"STRING_279796390"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingSymbolSfx{"STRING_798163640"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingTimeUnit{"STRING_2083069083"}, UnderlyingInstrument_55);
    set_field(noUnderlyings_0_2, FIX::UnderlyingUnitOfMeasure{"STRING_987666655"}, UnderlyingInstrument_55);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_55;
    UnderlyingUnitOfMeasureQty_55.setString("16599485");
set_field(noUnderlyings_0_2, UnderlyingUnitOfMeasureQty_55, UnderlyingInstrument_55);
    all_values.push_back(UnderlyingInstrument_55);
    all_compo_names.insert("...NoUnderlyings.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_113;
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltID{"STRING_1962802098"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);
      set_field(noUnderlyingSecurityAltID_2_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_545509657"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_114;
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltID{"STRING_620916821"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);
      set_field(noUnderlyingSecurityAltID_2_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_961543698"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_2_1_2;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_115;
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltID{"STRING_1858708878"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);
      set_field(noUnderlyingSecurityAltID_2_1_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1519647064"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingSecurityAltID");

      noUnderlyings_0_2.addGroup(noUnderlyingSecurityAltID_2_1_2);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_2_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_109;
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipType{"STRING_1112528481"}, UnderlyingStipulations_NoUnderlyingStips_109);
      set_field(noUnderlyingStips_2_1_0, FIX::UnderlyingStipValue{"STRING_148476623"}, UnderlyingStipulations_NoUnderlyingStips_109);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_109);
      all_compo_names.insert("...NoUnderlyings....NoUnderlyingStips");

      noUnderlyings_0_2.addGroup(noUnderlyingStips_2_1_0);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_118;
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_1265164265"}, UndlyInstrumentParties_NoUndlyInstrumentParties_118);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_118);
      set_field(noUndlyInstrumentParties_2_1_0, FIX::UnderlyingInstrumentPartyRole{679286478}, UndlyInstrumentParties_NoUndlyInstrumentParties_118);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_118);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_187296291"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{433052927}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_0_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233;
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_365004218"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);
        set_field(noUndlyInstrumentPartySubIDs_2_0_2_1, FIX::UnderlyingInstrumentPartySubIDType{1340976286}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_0.addGroup(noUndlyInstrumentPartySubIDs_2_0_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_0);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_1;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_119;
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyID{"STRING_1339994948"}, UndlyInstrumentParties_NoUndlyInstrumentParties_119);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_119);
      set_field(noUndlyInstrumentParties_2_1_1, FIX::UnderlyingInstrumentPartyRole{212506754}, UndlyInstrumentParties_NoUndlyInstrumentParties_119);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_119);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234;
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1099927637"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);
        set_field(noUndlyInstrumentPartySubIDs_2_1_2_0, FIX::UnderlyingInstrumentPartySubIDType{394729652}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_1.addGroup(noUndlyInstrumentPartySubIDs_2_1_2_0);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_1);
    }
    {
      FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_2_1_2;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_120;
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyID{"STRING_1752027327"}, UndlyInstrumentParties_NoUndlyInstrumentParties_120);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_120);
      set_field(noUndlyInstrumentParties_2_1_2, FIX::UnderlyingInstrumentPartyRole{1192893292}, UndlyInstrumentParties_NoUndlyInstrumentParties_120);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_120);
      all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_219907035"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_0, FIX::UnderlyingInstrumentPartySubIDType{705358172}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::MarketDataSnapshotFullRefresh::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_2_2_1;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236;
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1548140611"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);
        set_field(noUndlyInstrumentPartySubIDs_2_2_2_1, FIX::UnderlyingInstrumentPartySubIDType{35225485}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);
        all_compo_names.insert("...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_2_1_2.addGroup(noUndlyInstrumentPartySubIDs_2_2_2_1);
      }
      noUnderlyings_0_2.addGroup(noUndlyInstrumentParties_2_1_2);
    }
    msg.addGroup(noUnderlyings_0_2);
  }
  // header
  multiset<string> header_42;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_9"}, header_42);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_21573785"}, header_42);
  set_header_field(msg.getHeader(), FIX::BodyLength{996769183}, header_42);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_962093060"}, header_42);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1541220849"}, header_42);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_13779003"}, header_42);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_2074621541"}, header_42);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1689697472}, header_42);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_42);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1192302158}, header_42);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_2029747442"}, header_42);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1789762952"}, header_42);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1236797922"}, header_42);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(23, 21, 31, 7, 12, 2009)}, header_42);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_42);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_42);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_2017772777"}, header_42);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1160104028}, header_42);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1894331880"}, header_42);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1063182422"}, header_42);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_700233143"}, header_42);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(10, 46, 32, 16, 4, 2010)}, header_42);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1834017836"}, header_42);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1663684741"}, header_42);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1012528939"}, header_42);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1761155729"}, header_42);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1205898565}, header_42);
  all_values.push_back(header_42);
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
