#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityList, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::SecurityList msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityList_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_191378608"}, SecurityList_0);
  set_field(msg, FIX::EncodedSecurityListDesc{"DATA_1625204520"}, SecurityList_0);
  set_field(msg, FIX::EncodedSecurityListDescLen{303442578}, SecurityList_0);
  set_field(msg, FIX::LastFragment{true}, SecurityList_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1775290749"}, SecurityList_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1237291242"}, SecurityList_0);
  set_field(msg, FIX::SecurityListDesc{"STRING_1933657276"}, SecurityList_0);
  set_field(msg, FIX::SecurityListID{"STRING_1908893122"}, SecurityList_0);
  set_field(msg, FIX::SecurityListRefID{"STRING_523935151"}, SecurityList_0);
  set_field(msg, FIX::SecurityListType{3}, SecurityList_0);
  set_field(msg, FIX::SecurityListTypeSource{1}, SecurityList_0);
  set_field(msg, FIX::SecurityReportID{523732845}, SecurityList_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1372227170"}, SecurityList_0);
  set_field(msg, FIX::SecurityRequestResult{5}, SecurityList_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_2070032319"}, SecurityList_0);
  set_field(msg, FIX::TotNoRelatedSym{679385061}, SecurityList_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(8, 30, 11, 12, 1, 2003)}, SecurityList_0);
  all_values.push_back(SecurityList_0);

  all_compo_names.insert("SecurityList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_14;
  set_field(msg, FIX::ApplID{"STRING_758919929"}, ApplicationSequenceControl_14);
  set_field(msg, FIX::ApplLastSeqNum{1087192498}, ApplicationSequenceControl_14);
  set_field(msg, FIX::ApplResendFlag{false}, ApplicationSequenceControl_14);
  set_field(msg, FIX::ApplSeqNum{681469463}, ApplicationSequenceControl_14);
  all_values.push_back(ApplicationSequenceControl_14);
  all_compo_names.insert(".");

  // SecListGrp
  // Group SecListGrp.NoRelatedSym
  {
    FIX50SP2::SecurityList::NoRelatedSym noRelatedSym_0_0;
    // SecListGrp.NoRelatedSym
    multiset<string> SecListGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Currency{"JPY"}, SecListGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedText{"DATA_834583765"}, SecListGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedTextLen{819293070}, SecListGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(7, 6, 34, 10, 4, 2006)}, SecListGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Text{"STRING_751769089"}, SecListGrp_NoRelatedSym_0);
    all_values.push_back(SecListGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_25;
    set_field(noRelatedSym_0_0, FIX::AgreementCurrency{"CHF"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::AgreementDate{"LOCALMKTDATE_1275501934"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::AgreementDesc{"STRING_1722632643"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::AgreementID{"STRING_755691464"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::DeliveryType{2}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::EndDate{"LOCALMKTDATE_254534056"}, FinancingDetails_25);
    FIX::MarginRatio MarginRatio_25;
    MarginRatio_25.setString("84.160000");
set_field(noRelatedSym_0_0, MarginRatio_25, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::StartDate{"LOCALMKTDATE_1516697558"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::TerminationType{4}, FinancingDetails_25);
    all_values.push_back(FinancingDetails_25);
    all_compo_names.insert("...NoRelatedSym.");

    // InstrmtLegSecListGrp
    // Group InstrmtLegSecListGrp.NoLegs
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_0;
      set_field(noLegs_0_1_0, FIX::LegSettlType{'1'}, InstrmtLegSecListGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSwapType{5}, InstrmtLegSecListGrp_NoLegs_0);
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_0);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_123;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_769853412"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{266605471}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1658130061"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1414058060}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_948074934"}, InstrumentLeg_123);
      FIX::LegContractMultiplier LegContractMultiplier_123;
      LegContractMultiplier_123.setString("18357972");
set_field(noLegs_0_1_0, LegContractMultiplier_123, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{2041972522}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_248496327"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_522897321"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_713781944"}, InstrumentLeg_123);
      FIX::LegCouponRate LegCouponRate_123;
      LegCouponRate_123.setString("22.400000");
set_field(noLegs_0_1_0, LegCouponRate_123, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_1660923665"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1888757603"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{1531150737}, InstrumentLeg_123);
      FIX::LegFactor LegFactor_123;
      LegFactor_123.setString("20423977");
set_field(noLegs_0_1_0, LegFactor_123, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{493043044}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_1881556211"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_395867879"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1768544978"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_1456705206"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1151559343"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_819111936"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1711239263"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_541964111"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_123);
      FIX::LegOptionRatio LegOptionRatio_123;
      LegOptionRatio_123.setString("18338348");
set_field(noLegs_0_1_0, LegOptionRatio_123, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_2109758099"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1843495037"}, InstrumentLeg_123);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_123;
      LegPriceUnitOfMeasureQty_123.setString("2572887");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_123, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegProduct{732127863}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{2110100509}, InstrumentLeg_123);
      FIX::LegRatioQty LegRatioQty_123;
      LegRatioQty_123.setString("19154188");
set_field(noLegs_0_1_0, LegRatioQty_123, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_2146185923"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_910691795"}, InstrumentLeg_123);
      FIX::LegRepurchaseRate LegRepurchaseRate_123;
      LegRepurchaseRate_123.setString("23.750000");
set_field(noLegs_0_1_0, LegRepurchaseRate_123, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{2040674797}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_1159188122"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_2126629696"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_606973093"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_185826714"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_1640069713"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_762610796"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1381343668"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_123);
      FIX::LegStrikePrice LegStrikePrice_123;
      LegStrikePrice_123.setString("18743867");
set_field(noLegs_0_1_0, LegStrikePrice_123, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_2027834096"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_56680293"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_1495448043"}, InstrumentLeg_123);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_1337055655"}, InstrumentLeg_123);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_123;
      LegUnitOfMeasureQty_123.setString("12082396");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_123, InstrumentLeg_123);
      all_values.push_back(InstrumentLeg_123);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_244;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_900811270"}, LegSecAltIDGrp_NoLegSecurityAltID_244);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1750203748"}, LegSecAltIDGrp_NoLegSecurityAltID_244);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_244);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_245;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_355402178"}, LegSecAltIDGrp_NoLegSecurityAltID_245);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_587162464"}, LegSecAltIDGrp_NoLegSecurityAltID_245);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_245);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_13;
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_13);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveName{"STRING_844451221"}, LegBenchmarkCurveData_13);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurvePoint{"STRING_297122415"}, LegBenchmarkCurveData_13);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_13;
      LegBenchmarkPrice_13.setString("140304");
set_field(noLegs_0_1_0, LegBenchmarkPrice_13, LegBenchmarkCurveData_13);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkPriceType{612386391}, LegBenchmarkCurveData_13);
      all_values.push_back(LegBenchmarkCurveData_13);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_46;
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationType{"STRING_924722224"}, LegStipulations_NoLegStipulations_46);
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationValue{"STRING_68635118"}, LegStipulations_NoLegStipulations_46);
        all_values.push_back(LegStipulations_NoLegStipulations_46);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_1;
      set_field(noLegs_0_1_1, FIX::LegSettlType{'1'}, InstrmtLegSecListGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegSwapType{5}, InstrmtLegSecListGrp_NoLegs_1);
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_1);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_124;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_47781167"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{795988933}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_122253413"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{1687850880}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1558599729"}, InstrumentLeg_124);
      FIX::LegContractMultiplier LegContractMultiplier_124;
      LegContractMultiplier_124.setString("20356353");
set_field(noLegs_0_1_1, LegContractMultiplier_124, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{921710901}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1704877615"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_1696447796"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_648613965"}, InstrumentLeg_124);
      FIX::LegCouponRate LegCouponRate_124;
      LegCouponRate_124.setString("80.630000");
set_field(noLegs_0_1_1, LegCouponRate_124, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_1753128090"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"USD"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_813884079"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{163654692}, InstrumentLeg_124);
      FIX::LegFactor LegFactor_124;
      LegFactor_124.setString("16756113");
set_field(noLegs_0_1_1, LegFactor_124, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{416604179}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_519056870"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_115290156"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_2129082379"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_570470438"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_959741377"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_278721146"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_584500867"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1572127769"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'5'}, InstrumentLeg_124);
      FIX::LegOptionRatio LegOptionRatio_124;
      LegOptionRatio_124.setString("15092230");
set_field(noLegs_0_1_1, LegOptionRatio_124, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_1640762887"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_763561676"}, InstrumentLeg_124);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_124;
      LegPriceUnitOfMeasureQty_124.setString("14456497");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_124, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegProduct{1688544054}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{1559550610}, InstrumentLeg_124);
      FIX::LegRatioQty LegRatioQty_124;
      LegRatioQty_124.setString("15679032");
set_field(noLegs_0_1_1, LegRatioQty_124, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1228911287"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_970666691"}, InstrumentLeg_124);
      FIX::LegRepurchaseRate LegRepurchaseRate_124;
      LegRepurchaseRate_124.setString("49.380000");
set_field(noLegs_0_1_1, LegRepurchaseRate_124, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{3138540}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_528060658"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_1005019087"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_651752505"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_2113288722"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_610663529"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_648330866"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegSide{'7'}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_1424547608"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_124);
      FIX::LegStrikePrice LegStrikePrice_124;
      LegStrikePrice_124.setString("18411517");
set_field(noLegs_0_1_1, LegStrikePrice_124, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_1331042428"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_384022993"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_1822750518"}, InstrumentLeg_124);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_1901512867"}, InstrumentLeg_124);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_124;
      LegUnitOfMeasureQty_124.setString("13437643");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_124, InstrumentLeg_124);
      all_values.push_back(InstrumentLeg_124);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_246;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_338530086"}, LegSecAltIDGrp_NoLegSecurityAltID_246);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_768408492"}, LegSecAltIDGrp_NoLegSecurityAltID_246);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_246);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_247;
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltID{"STRING_528533853"}, LegSecAltIDGrp_NoLegSecurityAltID_247);
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltIDSource{"STRING_1847753178"}, LegSecAltIDGrp_NoLegSecurityAltID_247);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_247);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_248;
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltID{"STRING_261687731"}, LegSecAltIDGrp_NoLegSecurityAltID_248);
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltIDSource{"STRING_1292095529"}, LegSecAltIDGrp_NoLegSecurityAltID_248);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_248);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_14;
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_14);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveName{"STRING_704162491"}, LegBenchmarkCurveData_14);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurvePoint{"STRING_566338878"}, LegBenchmarkCurveData_14);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_14;
      LegBenchmarkPrice_14.setString("10316594");
set_field(noLegs_0_1_1, LegBenchmarkPrice_14, LegBenchmarkCurveData_14);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkPriceType{1674829183}, LegBenchmarkCurveData_14);
      all_values.push_back(LegBenchmarkCurveData_14);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_47;
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationType{"STRING_1034797965"}, LegStipulations_NoLegStipulations_47);
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationValue{"STRING_55406193"}, LegStipulations_NoLegStipulations_47);
        all_values.push_back(LegStipulations_NoLegStipulations_47);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_2;
      set_field(noLegs_0_1_2, FIX::LegSettlType{'8'}, InstrmtLegSecListGrp_NoLegs_2);
      set_field(noLegs_0_1_2, FIX::LegSwapType{4}, InstrmtLegSecListGrp_NoLegs_2);
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_2);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_125;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_21211267"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{1490592784}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_187397688"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{761816412}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_767656744"}, InstrumentLeg_125);
      FIX::LegContractMultiplier LegContractMultiplier_125;
      LegContractMultiplier_125.setString("9993832");
set_field(noLegs_0_1_2, LegContractMultiplier_125, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{1030549249}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_461324884"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_182942027"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1414572242"}, InstrumentLeg_125);
      FIX::LegCouponRate LegCouponRate_125;
      LegCouponRate_125.setString("17.540000");
set_field(noLegs_0_1_2, LegCouponRate_125, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_2084454894"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"CHF"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_275501332"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{1379261457}, InstrumentLeg_125);
      FIX::LegFactor LegFactor_125;
      LegFactor_125.setString("6191136");
set_field(noLegs_0_1_2, LegFactor_125, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{2123254511}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_1640949189"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1911209153"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_1121690184"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_1443697327"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_467887997"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_1688029062"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_327873104"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_2142717180"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_125);
      FIX::LegOptionRatio LegOptionRatio_125;
      LegOptionRatio_125.setString("13626710");
set_field(noLegs_0_1_2, LegOptionRatio_125, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_50639725"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_295384838"}, InstrumentLeg_125);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_125;
      LegPriceUnitOfMeasureQty_125.setString("9017378");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_125, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegProduct{71850993}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{1785977623}, InstrumentLeg_125);
      FIX::LegRatioQty LegRatioQty_125;
      LegRatioQty_125.setString("10891355");
set_field(noLegs_0_1_2, LegRatioQty_125, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_833667405"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_406150719"}, InstrumentLeg_125);
      FIX::LegRepurchaseRate LegRepurchaseRate_125;
      LegRepurchaseRate_125.setString("88.260000");
set_field(noLegs_0_1_2, LegRepurchaseRate_125, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{1864216654}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_867475603"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_123977205"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_1131305248"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_1004067358"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_60948451"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_1742158214"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegSide{'1'}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_336449784"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_125);
      FIX::LegStrikePrice LegStrikePrice_125;
      LegStrikePrice_125.setString("3122206");
set_field(noLegs_0_1_2, LegStrikePrice_125, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_467401564"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_1477486258"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_1433910831"}, InstrumentLeg_125);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_1911098891"}, InstrumentLeg_125);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_125;
      LegUnitOfMeasureQty_125.setString("19453742");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_125, InstrumentLeg_125);
      all_values.push_back(InstrumentLeg_125);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_249;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_91488347"}, LegSecAltIDGrp_NoLegSecurityAltID_249);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_1940607787"}, LegSecAltIDGrp_NoLegSecurityAltID_249);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_249);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_250;
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltID{"STRING_389911829"}, LegSecAltIDGrp_NoLegSecurityAltID_250);
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltIDSource{"STRING_1454159416"}, LegSecAltIDGrp_NoLegSecurityAltID_250);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_250);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_251;
        set_field(noLegSecurityAltID_0_2_2_2, FIX::LegSecurityAltID{"STRING_1991247513"}, LegSecAltIDGrp_NoLegSecurityAltID_251);
        set_field(noLegSecurityAltID_0_2_2_2, FIX::LegSecurityAltIDSource{"STRING_685296667"}, LegSecAltIDGrp_NoLegSecurityAltID_251);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_251);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_15;
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_15);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurveName{"STRING_323790642"}, LegBenchmarkCurveData_15);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurvePoint{"STRING_1297549240"}, LegBenchmarkCurveData_15);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_15;
      LegBenchmarkPrice_15.setString("7492822");
set_field(noLegs_0_1_2, LegBenchmarkPrice_15, LegBenchmarkCurveData_15);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkPriceType{729941362}, LegBenchmarkCurveData_15);
      all_values.push_back(LegBenchmarkCurveData_15);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_48;
        set_field(noLegStipulations_0_2_2_0, FIX::LegStipulationType{"STRING_466015269"}, LegStipulations_NoLegStipulations_48);
        set_field(noLegStipulations_0_2_2_0, FIX::LegStipulationValue{"STRING_1597416965"}, LegStipulations_NoLegStipulations_48);
        all_values.push_back(LegStipulations_NoLegStipulations_48);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_49;
        set_field(noLegStipulations_0_2_2_1, FIX::LegStipulationType{"STRING_1362561624"}, LegStipulations_NoLegStipulations_49);
        set_field(noLegStipulations_0_2_2_1, FIX::LegStipulationValue{"STRING_1597320517"}, LegStipulations_NoLegStipulations_49);
        all_values.push_back(LegStipulations_NoLegStipulations_49);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_50;
        set_field(noLegStipulations_0_2_2_2, FIX::LegStipulationType{"STRING_454000675"}, LegStipulations_NoLegStipulations_50);
        set_field(noLegStipulations_0_2_2_2, FIX::LegStipulationValue{"STRING_1423510075"}, LegStipulations_NoLegStipulations_50);
        all_values.push_back(LegStipulations_NoLegStipulations_50);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_82;
    FIX::AttachmentPoint AttachmentPoint_82;
    AttachmentPoint_82.setString("50.830000");
set_field(noRelatedSym_0_0, AttachmentPoint_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1548647804"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::CPProgram{2}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_18447459"}, Instrument_82);
    FIX::CapPrice CapPrice_82;
    CapPrice_82.setString("11149249");
set_field(noRelatedSym_0_0, CapPrice_82, Instrument_82);
    FIX::ContractMultiplier ContractMultiplier_82;
    ContractMultiplier_82.setString("20721805");
set_field(noRelatedSym_0_0, ContractMultiplier_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{1}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_444927520"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_1358607690"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_249464267"}, Instrument_82);
    FIX::CouponRate CouponRate_82;
    CouponRate_82.setString("81.270000");
set_field(noRelatedSym_0_0, CouponRate_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_185580288"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_340952614"}, Instrument_82);
    FIX::DetachmentPoint DetachmentPoint_82;
    DetachmentPoint_82.setString("22.670000");
set_field(noRelatedSym_0_0, DetachmentPoint_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_575492117"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1795112031}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_2027189780"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1260788784}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{0}, Instrument_82);
    FIX::Factor Factor_82;
    Factor_82.setString("19428046");
set_field(noRelatedSym_0_0, Factor_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_82);
    FIX::FloorPrice FloorPrice_82;
    FloorPrice_82.setString("5446032");
set_field(noRelatedSym_0_0, FloorPrice_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{1}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_244692053"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1764454106"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1607253677"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_460455391"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::ListMethod{0}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_883280105"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1652450475"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1619618938"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_495756316"}, Instrument_82);
    FIX::MinPriceIncrement MinPriceIncrement_82;
    MinPriceIncrement_82.setString("16708979");
set_field(noRelatedSym_0_0, MinPriceIncrement_82, Instrument_82);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_82;
    MinPriceIncrementAmount_82.setString("5870602");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{420453175}, Instrument_82);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_82;
    NotionalPercentageOutstanding_82.setString("33.090000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_82);
    FIX::OptPayoutAmount OptPayoutAmount_82;
    OptPayoutAmount_82.setString("17790608");
set_field(noRelatedSym_0_0, OptPayoutAmount_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_82);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_82;
    OriginalNotionalPercentageOutstanding_82.setString("58.470000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1964641153"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{599680191}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_392649622"}, Instrument_82);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_82;
    PriceUnitOfMeasureQty_82.setString("2473085");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::Product{8}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1653438406"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_985775236"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1090534185"}, Instrument_82);
    FIX::RepurchaseRate RepurchaseRate_82;
    RepurchaseRate_82.setString("19.000000");
set_field(noRelatedSym_0_0, RepurchaseRate_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{1530378489}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_1501633953"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_393513363"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_874541785"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_961403983"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_E"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_1844684088"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_FXNDF"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SB"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_2029833516"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1004708409"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_82);
    FIX::StrikeMultiplier StrikeMultiplier_82;
    StrikeMultiplier_82.setString("20366961");
set_field(noRelatedSym_0_0, StrikeMultiplier_82, Instrument_82);
    FIX::StrikePrice StrikePrice_82;
    StrikePrice_82.setString("2449871");
set_field(noRelatedSym_0_0, StrikePrice_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_82);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_82;
    StrikePriceBoundaryPrecision_82.setString("83.290000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_82);
    FIX::StrikeValue StrikeValue_82;
    StrikeValue_82.setString("7500209");
set_field(noRelatedSym_0_0, StrikeValue_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_327282795"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Wk"}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_tn"}, Instrument_82);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_82;
    UnitOfMeasureQty_82.setString("11006801");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_82, Instrument_82);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_82);
    all_values.push_back(Instrument_82);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_168;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_168);
      FIX::ComplexEventPrice ComplexEventPrice_168;
      ComplexEventPrice_168.setString("18864071");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_168, ComplexEvents_NoComplexEvents_168);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_168);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_168;
      ComplexEventPriceBoundaryPrecision_168.setString("23.410000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_168, ComplexEvents_NoComplexEvents_168);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_168);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_168);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_168;
      ComplexOptPayoutAmount_168.setString("5256926");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_168, ComplexEvents_NoComplexEvents_168);
      all_values.push_back(ComplexEvents_NoComplexEvents_168);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_341;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 52, 23, 5, 9, 2003)}, ComplexEventDates_NoComplexEventDates_341);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 54, 13, 8, 4, 2002)}, ComplexEventDates_NoComplexEventDates_341);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_341);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_695;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 8, 53)}, ComplexEventTimes_NoComplexEventTimes_695);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 15, 7)}, ComplexEventTimes_NoComplexEventTimes_695);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_695);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_696;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 5, 25)}, ComplexEventTimes_NoComplexEventTimes_696);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 54, 33)}, ComplexEventTimes_NoComplexEventTimes_696);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_696);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_342;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 18, 46, 3, 3, 2011)}, ComplexEventDates_NoComplexEventDates_342);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 57, 33, 20, 2, 2015)}, ComplexEventDates_NoComplexEventDates_342);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_342);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_697;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 49, 29)}, ComplexEventTimes_NoComplexEventTimes_697);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 44, 1)}, ComplexEventTimes_NoComplexEventTimes_697);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_697);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_698;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 6, 35)}, ComplexEventTimes_NoComplexEventTimes_698);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 29, 28)}, ComplexEventTimes_NoComplexEventTimes_698);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_698);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_169;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_169);
      FIX::ComplexEventPrice ComplexEventPrice_169;
      ComplexEventPrice_169.setString("2558404");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_169, ComplexEvents_NoComplexEvents_169);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_169);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_169;
      ComplexEventPriceBoundaryPrecision_169.setString("64.470000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_169, ComplexEvents_NoComplexEvents_169);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_169);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_169);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_169;
      ComplexOptPayoutAmount_169.setString("9109379");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_169, ComplexEvents_NoComplexEvents_169);
      all_values.push_back(ComplexEvents_NoComplexEvents_169);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_343;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 48, 18, 5, 4, 2017)}, ComplexEventDates_NoComplexEventDates_343);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 49, 46, 26, 11, 2012)}, ComplexEventDates_NoComplexEventDates_343);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_343);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_699;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 26, 11)}, ComplexEventTimes_NoComplexEventTimes_699);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 32, 10)}, ComplexEventTimes_NoComplexEventTimes_699);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_699);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_700;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 48, 54)}, ComplexEventTimes_NoComplexEventTimes_700);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 16, 5)}, ComplexEventTimes_NoComplexEventTimes_700);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_700);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_170;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_170);
      FIX::ComplexEventPrice ComplexEventPrice_170;
      ComplexEventPrice_170.setString("18164939");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_170, ComplexEvents_NoComplexEvents_170);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_170);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_170;
      ComplexEventPriceBoundaryPrecision_170.setString("1.530000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_170, ComplexEvents_NoComplexEvents_170);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_170);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_170);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_170;
      ComplexOptPayoutAmount_170.setString("19900177");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_170, ComplexEvents_NoComplexEvents_170);
      all_values.push_back(ComplexEvents_NoComplexEvents_170);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_344;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 20, 52, 12, 4, 2000)}, ComplexEventDates_NoComplexEventDates_344);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 30, 7, 3, 4, 2001)}, ComplexEventDates_NoComplexEventDates_344);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_344);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_701;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 25, 27)}, ComplexEventTimes_NoComplexEventTimes_701);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 44, 14)}, ComplexEventTimes_NoComplexEventTimes_701);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_701);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_345;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 0, 39, 22, 6, 2007)}, ComplexEventDates_NoComplexEventDates_345);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 29, 25, 19, 2, 2014)}, ComplexEventDates_NoComplexEventDates_345);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_345);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_702;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 17, 44)}, ComplexEventTimes_NoComplexEventTimes_702);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 7, 57)}, ComplexEventTimes_NoComplexEventTimes_702);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_702);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_703;
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 15, 41)}, ComplexEventTimes_NoComplexEventTimes_703);
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 17, 5)}, ComplexEventTimes_NoComplexEventTimes_703);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_703);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_160;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_25541430"}, EvntGrp_NoEvents_160);
      FIX::EventPx EventPx_160;
      EventPx_160.setString("2869222");
set_field(noEvents_0_1_0, EventPx_160, EvntGrp_NoEvents_160);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_866964995"}, EvntGrp_NoEvents_160);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(2, 10, 4, 21, 4, 2017)}, EvntGrp_NoEvents_160);
      set_field(noEvents_0_1_0, FIX::EventType{9}, EvntGrp_NoEvents_160);
      all_values.push_back(EvntGrp_NoEvents_160);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_161;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_1265290880"}, EvntGrp_NoEvents_161);
      FIX::EventPx EventPx_161;
      EventPx_161.setString("251521");
set_field(noEvents_0_1_1, EventPx_161, EvntGrp_NoEvents_161);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_1600295856"}, EvntGrp_NoEvents_161);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(15, 53, 33, 7, 7, 2004)}, EvntGrp_NoEvents_161);
      set_field(noEvents_0_1_1, FIX::EventType{18}, EvntGrp_NoEvents_161);
      all_values.push_back(EvntGrp_NoEvents_161);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_151;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_934417754"}, InstrumentParties_NoInstrumentParties_151);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'7'}, InstrumentParties_NoInstrumentParties_151);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{870802385}, InstrumentParties_NoInstrumentParties_151);
      all_values.push_back(InstrumentParties_NoInstrumentParties_151);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1902815358"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1936614923}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_308);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_12539033"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{625848494}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_309);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310;
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubID{"STRING_1962156353"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubIDType{299461310}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_310);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_152;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1492813489"}, InstrumentParties_NoInstrumentParties_152);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_152);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{1469169784}, InstrumentParties_NoInstrumentParties_152);
      all_values.push_back(InstrumentParties_NoInstrumentParties_152);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_1936593777"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{834258001}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_311);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_153;
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyID{"STRING_1811599651"}, InstrumentParties_NoInstrumentParties_153);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_153);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyRole{792001602}, InstrumentParties_NoInstrumentParties_153);
      all_values.push_back(InstrumentParties_NoInstrumentParties_153);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312;
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubID{"STRING_1124220468"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubIDType{244813810}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_312);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313;
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubID{"STRING_1870583261"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubIDType{1341527163}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_313);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_165;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_2018693594"}, SecAltIDGrp_NoSecurityAltID_165);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1514298931"}, SecAltIDGrp_NoSecurityAltID_165);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_165);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_164;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_1916328561"}, SecurityXML_164);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{175037027}, SecurityXML_164);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1579036848"}, SecurityXML_164);
    all_values.push_back(SecurityXML_164);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_11;
    set_field(noRelatedSym_0_0, FIX::DeliveryForm{2}, InstrumentExtension_11);
    FIX::PctAtRisk PctAtRisk_11;
    PctAtRisk_11.setString("47.810000");
set_field(noRelatedSym_0_0, PctAtRisk_11, InstrumentExtension_11);
    all_values.push_back(InstrumentExtension_11);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_20;
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribType{22}, AttrbGrp_NoInstrAttrib_20);
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribValue{"STRING_1545356097"}, AttrbGrp_NoInstrAttrib_20);
      all_values.push_back(AttrbGrp_NoInstrAttrib_20);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_21;
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribType{1}, AttrbGrp_NoInstrAttrib_21);
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribValue{"STRING_1671970626"}, AttrbGrp_NoInstrAttrib_21);
      all_values.push_back(AttrbGrp_NoInstrAttrib_21);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_22;
      set_field(noInstrAttrib_0_1_2, FIX::InstrAttribType{22}, AttrbGrp_NoInstrAttrib_22);
      set_field(noInstrAttrib_0_1_2, FIX::InstrAttribValue{"STRING_2037203684"}, AttrbGrp_NoInstrAttrib_22);
      all_values.push_back(AttrbGrp_NoInstrAttrib_22);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_11;
    set_field(noRelatedSym_0_0, FIX::ExpirationCycle{0}, BaseTradingRules_11);
    set_field(noRelatedSym_0_0, FIX::ImpliedMarketIndicator{1}, BaseTradingRules_11);
    FIX::MaxPriceVariation MaxPriceVariation_11;
    MaxPriceVariation_11.setString("13825335");
set_field(noRelatedSym_0_0, MaxPriceVariation_11, BaseTradingRules_11);
    FIX::MaxTradeVol MaxTradeVol_11;
    MaxTradeVol_11.setString("11193653");
set_field(noRelatedSym_0_0, MaxTradeVol_11, BaseTradingRules_11);
    FIX::MinTradeVol MinTradeVol_11;
    MinTradeVol_11.setString("11790425");
set_field(noRelatedSym_0_0, MinTradeVol_11, BaseTradingRules_11);
    set_field(noRelatedSym_0_0, FIX::MultilegModel{1}, BaseTradingRules_11);
    set_field(noRelatedSym_0_0, FIX::MultilegPriceMethod{1}, BaseTradingRules_11);
    set_field(noRelatedSym_0_0, FIX::PriceType{4}, BaseTradingRules_11);
    FIX::RoundLot RoundLot_11;
    RoundLot_11.setString("10979267");
set_field(noRelatedSym_0_0, RoundLot_11, BaseTradingRules_11);
    set_field(noRelatedSym_0_0, FIX::TradingCurrency{"EUR"}, BaseTradingRules_11);
    all_values.push_back(BaseTradingRules_11);
    all_compo_names.insert("...NoRelatedSym..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_23;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'2'}, LotTypeRules_NoLotTypeRules_23);
      FIX::MinLotSize MinLotSize_23;
      MinLotSize_23.setString("9026323");
set_field(noLotTypeRules_0_1_0, MinLotSize_23, LotTypeRules_NoLotTypeRules_23);
      all_values.push_back(LotTypeRules_NoLotTypeRules_23);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_24;
      set_field(noLotTypeRules_0_1_1, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_24);
      FIX::MinLotSize MinLotSize_24;
      MinLotSize_24.setString("1783241");
set_field(noLotTypeRules_0_1_1, MinLotSize_24, LotTypeRules_NoLotTypeRules_24);
      all_values.push_back(LotTypeRules_NoLotTypeRules_24);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_25;
      set_field(noLotTypeRules_0_1_2, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_25);
      FIX::MinLotSize MinLotSize_25;
      MinLotSize_25.setString("16216431");
set_field(noLotTypeRules_0_1_2, MinLotSize_25, LotTypeRules_NoLotTypeRules_25);
      all_values.push_back(LotTypeRules_NoLotTypeRules_25);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_11;
    FIX::HighLimitPrice HighLimitPrice_11;
    HighLimitPrice_11.setString("16926230");
set_field(noRelatedSym_0_0, HighLimitPrice_11, PriceLimits_11);
    FIX::LowLimitPrice LowLimitPrice_11;
    LowLimitPrice_11.setString("3941854");
set_field(noRelatedSym_0_0, LowLimitPrice_11, PriceLimits_11);
    set_field(noRelatedSym_0_0, FIX::PriceLimitType{1}, PriceLimits_11);
    FIX::TradingReferencePrice TradingReferencePrice_11;
    TradingReferencePrice_11.setString("11241762");
set_field(noRelatedSym_0_0, TradingReferencePrice_11, PriceLimits_11);
    all_values.push_back(PriceLimits_11);
    all_compo_names.insert("...NoRelatedSym...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_20;
      FIX::EndTickPriceRange EndTickPriceRange_20;
      EndTickPriceRange_20.setString("7586513");
set_field(noTickRules_0_1_0, EndTickPriceRange_20, TickRules_NoTickRules_20);
      FIX::StartTickPriceRange StartTickPriceRange_20;
      StartTickPriceRange_20.setString("6327161");
set_field(noTickRules_0_1_0, StartTickPriceRange_20, TickRules_NoTickRules_20);
      FIX::TickIncrement TickIncrement_20;
      TickIncrement_20.setString("11415781");
set_field(noTickRules_0_1_0, TickIncrement_20, TickRules_NoTickRules_20);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{2}, TickRules_NoTickRules_20);
      all_values.push_back(TickRules_NoTickRules_20);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_22;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{666065099}, NestedInstrumentAttribute_NoNestedInstrAttrib_22);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_1714418903"}, NestedInstrumentAttribute_NoNestedInstrAttrib_22);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_22);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_23;
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribType{1933791349}, NestedInstrumentAttribute_NoNestedInstrAttrib_23);
      set_field(noNestedInstrAttrib_0_1_1, FIX::NestedInstrAttribValue{"STRING_5224782"}, NestedInstrumentAttribute_NoNestedInstrAttrib_23);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_23);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_19;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_1"}, TradingSessionRulesGrp_NoTradingSessionRules_19);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_7"}, TradingSessionRulesGrp_NoTradingSessionRules_19);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_19);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_38;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_38);
        all_values.push_back(ExecInstRules_NoExecInstRules_38);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_39;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_39);
        all_values.push_back(ExecInstRules_NoExecInstRules_39);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_2;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_40;
        set_field(noExecInstRules_0_0_2_2, FIX::ExecInstValue{'3'}, ExecInstRules_NoExecInstRules_40);
        all_values.push_back(ExecInstRules_NoExecInstRules_40);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_2);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_44;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_44);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_979486091"}, MarketDataFeedTypes_NoMDFeedTypes_44);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{1432944969}, MarketDataFeedTypes_NoMDFeedTypes_44);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_44);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_43;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_1882118435"}, MatchRules_NoMatchRules_43);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_A4"}, MatchRules_NoMatchRules_43);
        all_values.push_back(MatchRules_NoMatchRules_43);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_44;
        set_field(noMatchRules_0_0_2_1, FIX::MatchAlgorithm{"STRING_908246997"}, MatchRules_NoMatchRules_44);
        set_field(noMatchRules_0_0_2_1, FIX::MatchType{"STRING_S5"}, MatchRules_NoMatchRules_44);
        all_values.push_back(MatchRules_NoMatchRules_44);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_41;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'I'}, OrdTypeRules_NoOrdTypeRules_41);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_41);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_42;
        set_field(noOrdTypeRules_0_0_2_1, FIX::OrdType{'J'}, OrdTypeRules_NoOrdTypeRules_42);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_42);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_37;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'2'}, TimeInForceRules_NoTimeInForceRules_37);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_37);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_20;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_20);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_2"}, TradingSessionRulesGrp_NoTradingSessionRules_20);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_20);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_41;
        set_field(noExecInstRules_0_1_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_41);
        all_values.push_back(ExecInstRules_NoExecInstRules_41);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_45;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_45);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_1820542768"}, MarketDataFeedTypes_NoMDFeedTypes_45);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{641360943}, MarketDataFeedTypes_NoMDFeedTypes_45);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_45);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_45;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_1825767550"}, MatchRules_NoMatchRules_45);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_M6"}, MatchRules_NoMatchRules_45);
        all_values.push_back(MatchRules_NoMatchRules_45);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_46;
        set_field(noMatchRules_0_1_2_1, FIX::MatchAlgorithm{"STRING_914531801"}, MatchRules_NoMatchRules_46);
        set_field(noMatchRules_0_1_2_1, FIX::MatchType{"STRING_A3"}, MatchRules_NoMatchRules_46);
        all_values.push_back(MatchRules_NoMatchRules_46);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_43;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'9'}, OrdTypeRules_NoOrdTypeRules_43);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_43);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_38;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_38);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_38);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_39;
        set_field(noTimeInForceRules_0_1_2_1, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_39);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_39);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_40;
        set_field(noTimeInForceRules_0_1_2_2, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_40);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_40);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_2;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_21;
      set_field(noTradingSessionRules_0_1_2, FIX::TradingSessionID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_21);
      set_field(noTradingSessionRules_0_1_2, FIX::TradingSessionSubID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_21);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_21);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_2_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_42;
        set_field(noExecInstRules_0_2_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_42);
        all_values.push_back(ExecInstRules_NoExecInstRules_42);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_2.addGroup(noExecInstRules_0_2_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_2_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_46;
        set_field(noMDFeedTypes_0_2_2_0, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_46);
        set_field(noMDFeedTypes_0_2_2_0, FIX::MDFeedType{"STRING_1769783380"}, MarketDataFeedTypes_NoMDFeedTypes_46);
        set_field(noMDFeedTypes_0_2_2_0, FIX::MarketDepth{1606721374}, MarketDataFeedTypes_NoMDFeedTypes_46);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_46);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_2.addGroup(noMDFeedTypes_0_2_2_0);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_2_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_47;
        set_field(noMatchRules_0_2_2_0, FIX::MatchAlgorithm{"STRING_376460511"}, MatchRules_NoMatchRules_47);
        set_field(noMatchRules_0_2_2_0, FIX::MatchType{"STRING_S2"}, MatchRules_NoMatchRules_47);
        all_values.push_back(MatchRules_NoMatchRules_47);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_2.addGroup(noMatchRules_0_2_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_44;
        set_field(noOrdTypeRules_0_2_2_0, FIX::OrdType{'K'}, OrdTypeRules_NoOrdTypeRules_44);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_44);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_2_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_45;
        set_field(noOrdTypeRules_0_2_2_1, FIX::OrdType{'4'}, OrdTypeRules_NoOrdTypeRules_45);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_45);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_2.addGroup(noOrdTypeRules_0_2_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_41;
        set_field(noTimeInForceRules_0_2_2_0, FIX::TimeInForce{'9'}, TimeInForceRules_NoTimeInForceRules_41);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_41);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_2_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_42;
        set_field(noTimeInForceRules_0_2_2_1, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_42);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_42);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_2.addGroup(noTimeInForceRules_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_2);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_33;
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveCurrency{"CHF"}, SpreadOrBenchmarkCurveData_33);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveName{"STRING_SWAP"}, SpreadOrBenchmarkCurveData_33);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurvePoint{"STRING_1723602284"}, SpreadOrBenchmarkCurveData_33);
    FIX::BenchmarkPrice BenchmarkPrice_33;
    BenchmarkPrice_33.setString("8951807");
set_field(noRelatedSym_0_0, BenchmarkPrice_33, SpreadOrBenchmarkCurveData_33);
    set_field(noRelatedSym_0_0, FIX::BenchmarkPriceType{22862210}, SpreadOrBenchmarkCurveData_33);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityID{"STRING_490650438"}, SpreadOrBenchmarkCurveData_33);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityIDSource{"STRING_1698054812"}, SpreadOrBenchmarkCurveData_33);
    FIX::Spread Spread_33;
    Spread_33.setString("3968818");
set_field(noRelatedSym_0_0, Spread_33, SpreadOrBenchmarkCurveData_33);
    all_values.push_back(SpreadOrBenchmarkCurveData_33);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_58;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_SUBSFREQ"}, Stipulations_NoStipulations_58);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_1092569004"}, Stipulations_NoStipulations_58);
      all_values.push_back(Stipulations_NoStipulations_58);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_59;
      set_field(noStipulations_0_1_1, FIX::StipulationType{"STRING_PRICEFREQ"}, Stipulations_NoStipulations_59);
      set_field(noStipulations_0_1_1, FIX::StipulationValue{"STRING_673125508"}, Stipulations_NoStipulations_59);
      all_values.push_back(Stipulations_NoStipulations_59);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_60;
      set_field(noStipulations_0_1_2, FIX::StipulationType{"STRING_MAXORDQTY"}, Stipulations_NoStipulations_60);
      set_field(noStipulations_0_1_2, FIX::StipulationValue{"STRING_548951134"}, Stipulations_NoStipulations_60);
      all_values.push_back(Stipulations_NoStipulations_60);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_20;
      FIX::EndStrikePxRange EndStrikePxRange_20;
      EndStrikePxRange_20.setString("20300666");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_20, StrikeRules_NoStrikeRules_20);
      FIX::StartStrikePxRange StartStrikePxRange_20;
      StartStrikePxRange_20.setString("16456184");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_20, StrikeRules_NoStrikeRules_20);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{1761931068}, StrikeRules_NoStrikeRules_20);
      FIX::StrikeIncrement StrikeIncrement_20;
      StrikeIncrement_20.setString("16523664");
set_field(noStrikeRules_0_1_0, StrikeIncrement_20, StrikeRules_NoStrikeRules_20);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_1104856182"}, StrikeRules_NoStrikeRules_20);
      all_values.push_back(StrikeRules_NoStrikeRules_20);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_46;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_2028826921"}, MaturityRules_NoMaturityRules_46);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_46);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{1948351943}, MaturityRules_NoMaturityRules_46);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_46);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_1259734737"}, MaturityRules_NoMaturityRules_46);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1819397131"}, MaturityRules_NoMaturityRules_46);
        all_values.push_back(MaturityRules_NoMaturityRules_46);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_21;
      FIX::EndStrikePxRange EndStrikePxRange_21;
      EndStrikePxRange_21.setString("18145410");
set_field(noStrikeRules_0_1_1, EndStrikePxRange_21, StrikeRules_NoStrikeRules_21);
      FIX::StartStrikePxRange StartStrikePxRange_21;
      StartStrikePxRange_21.setString("7230670");
set_field(noStrikeRules_0_1_1, StartStrikePxRange_21, StrikeRules_NoStrikeRules_21);
      set_field(noStrikeRules_0_1_1, FIX::StrikeExerciseStyle{1649825193}, StrikeRules_NoStrikeRules_21);
      FIX::StrikeIncrement StrikeIncrement_21;
      StrikeIncrement_21.setString("8839542");
set_field(noStrikeRules_0_1_1, StrikeIncrement_21, StrikeRules_NoStrikeRules_21);
      set_field(noStrikeRules_0_1_1, FIX::StrikeRuleID{"STRING_827760231"}, StrikeRules_NoStrikeRules_21);
      all_values.push_back(StrikeRules_NoStrikeRules_21);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_47;
        set_field(noMaturityRules_0_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1779135015"}, MaturityRules_NoMaturityRules_47);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_47);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrement{1716594267}, MaturityRules_NoMaturityRules_47);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrementUnits{0}, MaturityRules_NoMaturityRules_47);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityRuleID{"STRING_1247504269"}, MaturityRules_NoMaturityRules_47);
        set_field(noMaturityRules_0_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1429461154"}, MaturityRules_NoMaturityRules_47);
        all_values.push_back(MaturityRules_NoMaturityRules_47);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_125;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_192589625"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1917639503}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_94375281"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{812848248}, UnderlyingInstrument_125);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_125;
      UnderlyingAdjustedQuantity_125.setString("3191069");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_125, UnderlyingInstrument_125);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_125;
      UnderlyingAllocationPercent_125.setString("18.940000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_125, UnderlyingInstrument_125);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_125;
      UnderlyingAttachmentPoint_125.setString("12.780000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_1964725445"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_1545969314"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_200314041"}, UnderlyingInstrument_125);
      FIX::UnderlyingCapValue UnderlyingCapValue_125;
      UnderlyingCapValue_125.setString("9220979");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_125, UnderlyingInstrument_125);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_125;
      UnderlyingCashAmount_125.setString("15385876");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_125);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_125;
      UnderlyingContractMultiplier_125.setString("16454424");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{1339455925}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_352360647"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_757693570"}, UnderlyingInstrument_125);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_125;
      UnderlyingCouponRate_125.setString("94.090000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_19418061"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_125);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_125;
      UnderlyingCurrentValue_125.setString("9033723");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_125, UnderlyingInstrument_125);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_125;
      UnderlyingDetachmentPoint_125.setString("71.650000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_125, UnderlyingInstrument_125);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_125;
      UnderlyingDirtyPrice_125.setString("17396547");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_125, UnderlyingInstrument_125);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_125;
      UnderlyingEndPrice_125.setString("5350236");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_125, UnderlyingInstrument_125);
      FIX::UnderlyingEndValue UnderlyingEndValue_125;
      UnderlyingEndValue_125.setString("10116596");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1308765403}, UnderlyingInstrument_125);
      FIX::UnderlyingFXRate UnderlyingFXRate_125;
      UnderlyingFXRate_125.setString("18647298");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_125);
      FIX::UnderlyingFactor UnderlyingFactor_125;
      UnderlyingFactor_125.setString("5907429");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1285979645}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_304269852"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_360898764"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1380354926"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1117118101"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_680005754"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1164393172"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1812549379"}, UnderlyingInstrument_125);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_125;
      UnderlyingNotionalPercentageOutstanding_125.setString("75.510000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_125);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_125;
      UnderlyingOriginalNotionalPercentageOutstanding_125.setString("34.200000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1419345531"}, UnderlyingInstrument_125);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_125;
      UnderlyingPriceUnitOfMeasureQty_125.setString("21014664");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{2094520735}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{917304364}, UnderlyingInstrument_125);
      FIX::UnderlyingPx UnderlyingPx_125;
      UnderlyingPx_125.setString("12934387");
set_field(noUnderlyings_0_1_0, UnderlyingPx_125, UnderlyingInstrument_125);
      FIX::UnderlyingQty UnderlyingQty_125;
      UnderlyingQty_125.setString("2993977");
set_field(noUnderlyings_0_1_0, UnderlyingQty_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1674997934"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_157324507"}, UnderlyingInstrument_125);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_125;
      UnderlyingRepurchaseRate_125.setString("57.960000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1008274868}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_671035461"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_1222188121"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1169312034"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_263206597"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1757211813"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_33487992"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1571972000"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_1474458038"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_145168220"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_125);
      FIX::UnderlyingStartValue UnderlyingStartValue_125;
      UnderlyingStartValue_125.setString("6129540");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_449438072"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_125);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_125;
      UnderlyingStrikePrice_125.setString("15665561");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1056135779"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_1010218485"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_1231621905"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1553383331"}, UnderlyingInstrument_125);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_125;
      UnderlyingUnitOfMeasureQty_125.setString("15730973");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_125, UnderlyingInstrument_125);
      all_values.push_back(UnderlyingInstrument_125);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_258;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_825245214"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1527080145"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_258);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_259;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1044038764"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1742549578"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_260;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_673035244"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1343436499"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_251;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_830359751"}, UnderlyingStipulations_NoUnderlyingStips_251);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1662252295"}, UnderlyingStipulations_NoUnderlyingStips_251);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_251);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_252;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_130855084"}, UnderlyingStipulations_NoUnderlyingStips_252);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_1501395213"}, UnderlyingStipulations_NoUnderlyingStips_252);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_252);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_266;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1300167118"}, UndlyInstrumentParties_NoUndlyInstrumentParties_266);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_266);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{346684933}, UndlyInstrumentParties_NoUndlyInstrumentParties_266);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_266);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1189090162"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1821142971}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1478823331"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1204321423}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_286613358"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{1928261403}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_532);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    // YieldData
    multiset<string> YieldData_28;
    FIX::Yield Yield_28;
    Yield_28.setString("14.480000");
set_field(noRelatedSym_0_0, Yield_28, YieldData_28);
    set_field(noRelatedSym_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_132438671"}, YieldData_28);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_1347333929"}, YieldData_28);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_28;
    YieldRedemptionPrice_28.setString("4891035");
set_field(noRelatedSym_0_0, YieldRedemptionPrice_28, YieldData_28);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionPriceType{1142657157}, YieldData_28);
    set_field(noRelatedSym_0_0, FIX::YieldType{"STRING_LASTCLOSE"}, YieldData_28);
    all_values.push_back(YieldData_28);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  // header
  multiset<string> header_83;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_83);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_568270833"}, header_83);
  set_header_field(msg.getHeader(), FIX::BodyLength{1528473863}, header_83);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_720248477"}, header_83);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_2095350979"}, header_83);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_425028980"}, header_83);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_315314407"}, header_83);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{620902575}, header_83);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_83);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1585378271}, header_83);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1451262326"}, header_83);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1283234126"}, header_83);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1716233355"}, header_83);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(14, 6, 53, 27, 10, 2003)}, header_83);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_83);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_83);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_668219990"}, header_83);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{179664861}, header_83);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1314689375"}, header_83);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_101187791"}, header_83);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_312103533"}, header_83);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(19, 30, 2, 6, 4, 2000)}, header_83);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1205543111"}, header_83);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1970898854"}, header_83);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_752031038"}, header_83);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1520857518"}, header_83);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{444317781}, header_83);
  all_values.push_back(header_83);
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
