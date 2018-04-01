#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::SecurityList msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityList_0;
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1816879869"}, SecurityList_0);
  set_field(msg, FIX::EncodedSecurityListDesc{"DATA_2001629871"}, SecurityList_0);
  set_field(msg, FIX::EncodedSecurityListDescLen{1721803468}, SecurityList_0);
  set_field(msg, FIX::LastFragment{true}, SecurityList_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_773494443"}, SecurityList_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1707526302"}, SecurityList_0);
  set_field(msg, FIX::SecurityListDesc{"STRING_935108435"}, SecurityList_0);
  set_field(msg, FIX::SecurityListID{"STRING_161187154"}, SecurityList_0);
  set_field(msg, FIX::SecurityListRefID{"STRING_568331940"}, SecurityList_0);
  set_field(msg, FIX::SecurityListType{3}, SecurityList_0);
  set_field(msg, FIX::SecurityListTypeSource{2}, SecurityList_0);
  set_field(msg, FIX::SecurityReportID{1275637263}, SecurityList_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1703139746"}, SecurityList_0);
  set_field(msg, FIX::SecurityRequestResult{4}, SecurityList_0);
  set_field(msg, FIX::SecurityResponseID{"STRING_1853075476"}, SecurityList_0);
  set_field(msg, FIX::TotNoRelatedSym{80929840}, SecurityList_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(6, 27, 43, 14, 3, 2014)}, SecurityList_0);
  all_values.push_back(SecurityList_0);

  all_compo_names.insert("SecurityList");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_14;
  set_field(msg, FIX::ApplID{"STRING_1098914135"}, ApplicationSequenceControl_14);
  set_field(msg, FIX::ApplLastSeqNum{1255090577}, ApplicationSequenceControl_14);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_14);
  set_field(msg, FIX::ApplSeqNum{1786513056}, ApplicationSequenceControl_14);
  all_values.push_back(ApplicationSequenceControl_14);
  all_compo_names.insert(".");

  // SecListGrp
  // Group SecListGrp.NoRelatedSym
  {
    FIX50SP2::SecurityList::NoRelatedSym noRelatedSym_0_0;
    // SecListGrp.NoRelatedSym
    multiset<string> SecListGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Currency{"CHF"}, SecListGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedText{"DATA_1321561343"}, SecListGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::EncodedTextLen{1875870675}, SecListGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(19, 19, 8, 13, 7, 2006)}, SecListGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::Text{"STRING_1024255758"}, SecListGrp_NoRelatedSym_0);
    all_values.push_back(SecListGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_25;
    set_field(noRelatedSym_0_0, FIX::AgreementCurrency{"CHF"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::AgreementDate{"LOCALMKTDATE_152409373"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::AgreementDesc{"STRING_1220184811"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::AgreementID{"STRING_1035351455"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::DeliveryType{1}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::EndDate{"LOCALMKTDATE_1301114651"}, FinancingDetails_25);
    FIX::MarginRatio MarginRatio_25;
    MarginRatio_25.setString("64.820000");
set_field(noRelatedSym_0_0, MarginRatio_25, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::StartDate{"LOCALMKTDATE_209750896"}, FinancingDetails_25);
    set_field(noRelatedSym_0_0, FIX::TerminationType{3}, FinancingDetails_25);
    all_values.push_back(FinancingDetails_25);
    all_compo_names.insert("...NoRelatedSym.");

    // InstrmtLegSecListGrp
    // Group InstrmtLegSecListGrp.NoLegs
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_0;
      set_field(noLegs_0_1_0, FIX::LegSettlType{'5'}, InstrmtLegSecListGrp_NoLegs_0);
      set_field(noLegs_0_1_0, FIX::LegSwapType{1}, InstrmtLegSecListGrp_NoLegs_0);
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_0);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_99;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_944167610"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{1654616665}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1559553769"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{1545195560}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_1293646073"}, InstrumentLeg_99);
      FIX::LegContractMultiplier LegContractMultiplier_99;
      LegContractMultiplier_99.setString("695723");
set_field(noLegs_0_1_0, LegContractMultiplier_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1604186365}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_466537207"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1391133732"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1332573392"}, InstrumentLeg_99);
      FIX::LegCouponRate LegCouponRate_99;
      LegCouponRate_99.setString("82.120000");
set_field(noLegs_0_1_0, LegCouponRate_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_139531247"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"USD"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_595455065"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{1855771177}, InstrumentLeg_99);
      FIX::LegFactor LegFactor_99;
      LegFactor_99.setString("14033089");
set_field(noLegs_0_1_0, LegFactor_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{1619710823}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_1372816242"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1052567039"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1772120196"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_445517405"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_2087918495"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1630121398"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1746632056"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1860001329"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_99);
      FIX::LegOptionRatio LegOptionRatio_99;
      LegOptionRatio_99.setString("11503337");
set_field(noLegs_0_1_0, LegOptionRatio_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_209620519"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_248091176"}, InstrumentLeg_99);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_99;
      LegPriceUnitOfMeasureQty_99.setString("14547969");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegProduct{1153788129}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1902707842}, InstrumentLeg_99);
      FIX::LegRatioQty LegRatioQty_99;
      LegRatioQty_99.setString("8668670");
set_field(noLegs_0_1_0, LegRatioQty_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_551500041"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1048870267"}, InstrumentLeg_99);
      FIX::LegRepurchaseRate LegRepurchaseRate_99;
      LegRepurchaseRate_99.setString("94.290000");
set_field(noLegs_0_1_0, LegRepurchaseRate_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{8202758}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_1515407474"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_180089513"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1340776151"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_1008982038"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_319620761"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1393652394"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSide{'3'}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_915075826"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_99);
      FIX::LegStrikePrice LegStrikePrice_99;
      LegStrikePrice_99.setString("3873030");
set_field(noLegs_0_1_0, LegStrikePrice_99, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_327272518"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_611480760"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_11939549"}, InstrumentLeg_99);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_772789923"}, InstrumentLeg_99);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_99;
      LegUnitOfMeasureQty_99.setString("5519156");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_99, InstrumentLeg_99);
      all_values.push_back(InstrumentLeg_99);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_205;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_371938331"}, LegSecAltIDGrp_NoLegSecurityAltID_205);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_264433289"}, LegSecAltIDGrp_NoLegSecurityAltID_205);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_205);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_9;
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveCurrency{"CHF"}, LegBenchmarkCurveData_9);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurveName{"STRING_474053808"}, LegBenchmarkCurveData_9);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkCurvePoint{"STRING_1582540770"}, LegBenchmarkCurveData_9);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_9;
      LegBenchmarkPrice_9.setString("8295853");
set_field(noLegs_0_1_0, LegBenchmarkPrice_9, LegBenchmarkCurveData_9);
      set_field(noLegs_0_1_0, FIX::LegBenchmarkPriceType{1627841937}, LegBenchmarkCurveData_9);
      all_values.push_back(LegBenchmarkCurveData_9);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_31;
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationType{"STRING_1696452369"}, LegStipulations_NoLegStipulations_31);
        set_field(noLegStipulations_0_0_2_0, FIX::LegStipulationValue{"STRING_31858330"}, LegStipulations_NoLegStipulations_31);
        all_values.push_back(LegStipulations_NoLegStipulations_31);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_32;
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationType{"STRING_239151583"}, LegStipulations_NoLegStipulations_32);
        set_field(noLegStipulations_0_0_2_1, FIX::LegStipulationValue{"STRING_485408150"}, LegStipulations_NoLegStipulations_32);
        all_values.push_back(LegStipulations_NoLegStipulations_32);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_0_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_33;
        set_field(noLegStipulations_0_0_2_2, FIX::LegStipulationType{"STRING_40061088"}, LegStipulations_NoLegStipulations_33);
        set_field(noLegStipulations_0_0_2_2, FIX::LegStipulationValue{"STRING_1754559058"}, LegStipulations_NoLegStipulations_33);
        all_values.push_back(LegStipulations_NoLegStipulations_33);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_0.addGroup(noLegStipulations_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_1;
      set_field(noLegs_0_1_1, FIX::LegSettlType{'6'}, InstrmtLegSecListGrp_NoLegs_1);
      set_field(noLegs_0_1_1, FIX::LegSwapType{5}, InstrmtLegSecListGrp_NoLegs_1);
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_1);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_100;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_616057448"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{985118425}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_627005986"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{919145851}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1900194251"}, InstrumentLeg_100);
      FIX::LegContractMultiplier LegContractMultiplier_100;
      LegContractMultiplier_100.setString("17289459");
set_field(noLegs_0_1_1, LegContractMultiplier_100, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{478059572}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_140013604"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_2056218428"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1089540332"}, InstrumentLeg_100);
      FIX::LegCouponRate LegCouponRate_100;
      LegCouponRate_100.setString("31.530000");
set_field(noLegs_0_1_1, LegCouponRate_100, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_681524703"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_1053463034"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{1905889229}, InstrumentLeg_100);
      FIX::LegFactor LegFactor_100;
      LegFactor_100.setString("9809800");
set_field(noLegs_0_1_1, LegFactor_100, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{428251443}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_232459389"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_416037168"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_1257836772"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_1860301326"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_1753802132"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_806805493"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1892159656"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1992953716"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_100);
      FIX::LegOptionRatio LegOptionRatio_100;
      LegOptionRatio_100.setString("19322207");
set_field(noLegs_0_1_1, LegOptionRatio_100, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_1600029126"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1957711307"}, InstrumentLeg_100);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_100;
      LegPriceUnitOfMeasureQty_100.setString("11655743");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_100, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegProduct{68602926}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{795346084}, InstrumentLeg_100);
      FIX::LegRatioQty LegRatioQty_100;
      LegRatioQty_100.setString("17925803");
set_field(noLegs_0_1_1, LegRatioQty_100, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_987748777"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_548056687"}, InstrumentLeg_100);
      FIX::LegRepurchaseRate LegRepurchaseRate_100;
      LegRepurchaseRate_100.setString("25.840000");
set_field(noLegs_0_1_1, LegRepurchaseRate_100, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{1465808349}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_688070291"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_1282777364"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_407865034"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_840023445"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_1964302067"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_2049320974"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegSide{'4'}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_870281453"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_100);
      FIX::LegStrikePrice LegStrikePrice_100;
      LegStrikePrice_100.setString("12985328");
set_field(noLegs_0_1_1, LegStrikePrice_100, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_2040185944"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_1883571113"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_408886020"}, InstrumentLeg_100);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_1753003622"}, InstrumentLeg_100);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_100;
      LegUnitOfMeasureQty_100.setString("14898895");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_100, InstrumentLeg_100);
      all_values.push_back(InstrumentLeg_100);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_206;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1497679630"}, LegSecAltIDGrp_NoLegSecurityAltID_206);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1335359665"}, LegSecAltIDGrp_NoLegSecurityAltID_206);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_206);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_207;
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltID{"STRING_360421509"}, LegSecAltIDGrp_NoLegSecurityAltID_207);
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltIDSource{"STRING_1282416726"}, LegSecAltIDGrp_NoLegSecurityAltID_207);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_207);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_10;
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_10);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurveName{"STRING_300507414"}, LegBenchmarkCurveData_10);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkCurvePoint{"STRING_856508070"}, LegBenchmarkCurveData_10);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_10;
      LegBenchmarkPrice_10.setString("9659952");
set_field(noLegs_0_1_1, LegBenchmarkPrice_10, LegBenchmarkCurveData_10);
      set_field(noLegs_0_1_1, FIX::LegBenchmarkPriceType{2093087736}, LegBenchmarkCurveData_10);
      all_values.push_back(LegBenchmarkCurveData_10);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_34;
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationType{"STRING_1514051940"}, LegStipulations_NoLegStipulations_34);
        set_field(noLegStipulations_0_1_2_0, FIX::LegStipulationValue{"STRING_1319646672"}, LegStipulations_NoLegStipulations_34);
        all_values.push_back(LegStipulations_NoLegStipulations_34);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_35;
        set_field(noLegStipulations_0_1_2_1, FIX::LegStipulationType{"STRING_1162581549"}, LegStipulations_NoLegStipulations_35);
        set_field(noLegStipulations_0_1_2_1, FIX::LegStipulationValue{"STRING_54638584"}, LegStipulations_NoLegStipulations_35);
        all_values.push_back(LegStipulations_NoLegStipulations_35);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_1.addGroup(noLegStipulations_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_2;
      set_field(noLegs_0_1_2, FIX::LegSettlType{'4'}, InstrmtLegSecListGrp_NoLegs_2);
      set_field(noLegs_0_1_2, FIX::LegSwapType{5}, InstrmtLegSecListGrp_NoLegs_2);
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_2);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_101;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_894662029"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{271758807}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_1472283909"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{1381215927}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_1142040260"}, InstrumentLeg_101);
      FIX::LegContractMultiplier LegContractMultiplier_101;
      LegContractMultiplier_101.setString("11325268");
set_field(noLegs_0_1_2, LegContractMultiplier_101, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{701266223}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_293089509"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_1025229112"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_437353688"}, InstrumentLeg_101);
      FIX::LegCouponRate LegCouponRate_101;
      LegCouponRate_101.setString("55.290000");
set_field(noLegs_0_1_2, LegCouponRate_101, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_630749086"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"CAN"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_2128428716"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{1115119303}, InstrumentLeg_101);
      FIX::LegFactor LegFactor_101;
      LegFactor_101.setString("1306049");
set_field(noLegs_0_1_2, LegFactor_101, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{1263361794}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_1903024447"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_301254072"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_1563869209"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_612048869"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_1267249325"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_1509473297"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_308822068"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_633817618"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'6'}, InstrumentLeg_101);
      FIX::LegOptionRatio LegOptionRatio_101;
      LegOptionRatio_101.setString("14714036");
set_field(noLegs_0_1_2, LegOptionRatio_101, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_688456202"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_1136576710"}, InstrumentLeg_101);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_101;
      LegPriceUnitOfMeasureQty_101.setString("8943665");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_101, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegProduct{1583118231}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{1408335518}, InstrumentLeg_101);
      FIX::LegRatioQty LegRatioQty_101;
      LegRatioQty_101.setString("2191668");
set_field(noLegs_0_1_2, LegRatioQty_101, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_816850510"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_402892130"}, InstrumentLeg_101);
      FIX::LegRepurchaseRate LegRepurchaseRate_101;
      LegRepurchaseRate_101.setString("36.290000");
set_field(noLegs_0_1_2, LegRepurchaseRate_101, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{1518116733}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_695981639"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_229439093"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_1955470422"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_1397957169"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_860188179"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_1735230060"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegSide{'1'}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_841133247"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_101);
      FIX::LegStrikePrice LegStrikePrice_101;
      LegStrikePrice_101.setString("21044950");
set_field(noLegs_0_1_2, LegStrikePrice_101, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_458406514"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_1599999540"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_1520880603"}, InstrumentLeg_101);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_1070455383"}, InstrumentLeg_101);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_101;
      LegUnitOfMeasureQty_101.setString("7197652");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_101, InstrumentLeg_101);
      all_values.push_back(InstrumentLeg_101);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_208;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_1379277452"}, LegSecAltIDGrp_NoLegSecurityAltID_208);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_1353582836"}, LegSecAltIDGrp_NoLegSecurityAltID_208);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_208);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_11;
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurveCurrency{"EUR"}, LegBenchmarkCurveData_11);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurveName{"STRING_2042039038"}, LegBenchmarkCurveData_11);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkCurvePoint{"STRING_553599637"}, LegBenchmarkCurveData_11);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_11;
      LegBenchmarkPrice_11.setString("15975639");
set_field(noLegs_0_1_2, LegBenchmarkPrice_11, LegBenchmarkCurveData_11);
      set_field(noLegs_0_1_2, FIX::LegBenchmarkPriceType{1477673621}, LegBenchmarkCurveData_11);
      all_values.push_back(LegBenchmarkCurveData_11);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_0_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_36;
        set_field(noLegStipulations_0_2_2_0, FIX::LegStipulationType{"STRING_1816730787"}, LegStipulations_NoLegStipulations_36);
        set_field(noLegStipulations_0_2_2_0, FIX::LegStipulationValue{"STRING_147040483"}, LegStipulations_NoLegStipulations_36);
        all_values.push_back(LegStipulations_NoLegStipulations_36);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_0_1_2.addGroup(noLegStipulations_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_69;
    FIX::AttachmentPoint AttachmentPoint_69;
    AttachmentPoint_69.setString("36.370000");
set_field(noRelatedSym_0_0, AttachmentPoint_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1020940769"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CPProgram{2}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_913325277"}, Instrument_69);
    FIX::CapPrice CapPrice_69;
    CapPrice_69.setString("12503798");
set_field(noRelatedSym_0_0, CapPrice_69, Instrument_69);
    FIX::ContractMultiplier ContractMultiplier_69;
    ContractMultiplier_69.setString("14731439");
set_field(noRelatedSym_0_0, ContractMultiplier_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{1}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_2110568042"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_1060890402"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1331939362"}, Instrument_69);
    FIX::CouponRate CouponRate_69;
    CouponRate_69.setString("76.410000");
set_field(noRelatedSym_0_0, CouponRate_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_1763756118"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_483201182"}, Instrument_69);
    FIX::DetachmentPoint DetachmentPoint_69;
    DetachmentPoint_69.setString("90.350000");
set_field(noRelatedSym_0_0, DetachmentPoint_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_74678984"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{2083200722}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_134625990"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1145134368}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{1}, Instrument_69);
    FIX::Factor Factor_69;
    Factor_69.setString("10174962");
set_field(noRelatedSym_0_0, Factor_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_69);
    FIX::FloorPrice FloorPrice_69;
    FloorPrice_69.setString("4345191");
set_field(noRelatedSym_0_0, FloorPrice_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{3}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_1903620518"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'9'}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_530205919"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1233810491"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_802570313"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1380850974"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1019913951"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1220393828"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_898524543"}, Instrument_69);
    FIX::MinPriceIncrement MinPriceIncrement_69;
    MinPriceIncrement_69.setString("19332392");
set_field(noRelatedSym_0_0, MinPriceIncrement_69, Instrument_69);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_69;
    MinPriceIncrementAmount_69.setString("3232900");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{224184885}, Instrument_69);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_69;
    NotionalPercentageOutstanding_69.setString("80.260000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'2'}, Instrument_69);
    FIX::OptPayoutAmount OptPayoutAmount_69;
    OptPayoutAmount_69.setString("12850752");
set_field(noRelatedSym_0_0, OptPayoutAmount_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{1}, Instrument_69);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_69;
    OriginalNotionalPercentageOutstanding_69.setString("20.780000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_901347758"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1764694922}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_976026742"}, Instrument_69);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_69;
    PriceUnitOfMeasureQty_69.setString("17004119");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Product{6}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_2121161110"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_856459699"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_350605634"}, Instrument_69);
    FIX::RepurchaseRate RepurchaseRate_69;
    RepurchaseRate_69.setString("21.210000");
set_field(noRelatedSym_0_0, RepurchaseRate_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{1290978868}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_FR"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_1973612640"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_131614027"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1960937147"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1059939483"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_D"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_293306810"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_USTB"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SB"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1739853871"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1556590429"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CHF"}, Instrument_69);
    FIX::StrikeMultiplier StrikeMultiplier_69;
    StrikeMultiplier_69.setString("18429648");
set_field(noRelatedSym_0_0, StrikeMultiplier_69, Instrument_69);
    FIX::StrikePrice StrikePrice_69;
    StrikePrice_69.setString("5536078");
set_field(noRelatedSym_0_0, StrikePrice_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{2}, Instrument_69);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_69;
    StrikePriceBoundaryPrecision_69.setString("32.950000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{1}, Instrument_69);
    FIX::StrikeValue StrikeValue_69;
    StrikeValue_69.setString("4406296");
set_field(noRelatedSym_0_0, StrikeValue_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_490410761"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_D"}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_69);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_69;
    UnitOfMeasureQty_69.setString("2019686");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_69, Instrument_69);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_69);
    all_values.push_back(Instrument_69);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_143;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_143);
      FIX::ComplexEventPrice ComplexEventPrice_143;
      ComplexEventPrice_143.setString("3293291");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_143, ComplexEvents_NoComplexEvents_143);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_143);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_143;
      ComplexEventPriceBoundaryPrecision_143.setString("97.180000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_143, ComplexEvents_NoComplexEvents_143);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_143);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_143);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_143;
      ComplexOptPayoutAmount_143.setString("11580292");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_143, ComplexEvents_NoComplexEvents_143);
      all_values.push_back(ComplexEvents_NoComplexEvents_143);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_298;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 47, 52, 25, 12, 2015)}, ComplexEventDates_NoComplexEventDates_298);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 31, 46, 10, 7, 2016)}, ComplexEventDates_NoComplexEventDates_298);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_298);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_603;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 53, 4)}, ComplexEventTimes_NoComplexEventTimes_603);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 32, 7)}, ComplexEventTimes_NoComplexEventTimes_603);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_603);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_299;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 35, 35, 16, 7, 2017)}, ComplexEventDates_NoComplexEventDates_299);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 41, 16, 1, 11, 2013)}, ComplexEventDates_NoComplexEventDates_299);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_299);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_604;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 5, 32)}, ComplexEventTimes_NoComplexEventTimes_604);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 46, 47)}, ComplexEventTimes_NoComplexEventTimes_604);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_604);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_605;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 32, 48)}, ComplexEventTimes_NoComplexEventTimes_605);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 20, 58)}, ComplexEventTimes_NoComplexEventTimes_605);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_605);
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
      multiset<string> ComplexEvents_NoComplexEvents_144;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_144);
      FIX::ComplexEventPrice ComplexEventPrice_144;
      ComplexEventPrice_144.setString("5725192");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_144, ComplexEvents_NoComplexEvents_144);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_144);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_144;
      ComplexEventPriceBoundaryPrecision_144.setString("9.550000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_144, ComplexEvents_NoComplexEvents_144);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_144);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_144);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_144;
      ComplexOptPayoutAmount_144.setString("17426284");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_144, ComplexEvents_NoComplexEvents_144);
      all_values.push_back(ComplexEvents_NoComplexEvents_144);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_300;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 42, 17, 25, 2, 2013)}, ComplexEventDates_NoComplexEventDates_300);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 41, 15, 6, 10, 2007)}, ComplexEventDates_NoComplexEventDates_300);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_300);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_606;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 14, 16)}, ComplexEventTimes_NoComplexEventTimes_606);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 29, 34)}, ComplexEventTimes_NoComplexEventTimes_606);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_606);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_607;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 51, 52)}, ComplexEventTimes_NoComplexEventTimes_607);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 17, 51)}, ComplexEventTimes_NoComplexEventTimes_607);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_607);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_301;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 33, 24, 5, 4, 2001)}, ComplexEventDates_NoComplexEventDates_301);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 48, 19, 2, 10, 2012)}, ComplexEventDates_NoComplexEventDates_301);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_301);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_608;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 58, 18)}, ComplexEventTimes_NoComplexEventTimes_608);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 47, 1)}, ComplexEventTimes_NoComplexEventTimes_608);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_608);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_609;
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 52, 8)}, ComplexEventTimes_NoComplexEventTimes_609);
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 18, 57)}, ComplexEventTimes_NoComplexEventTimes_609);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_609);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_610;
          set_field(noComplexEventTimes_0_1_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 23, 30)}, ComplexEventTimes_NoComplexEventTimes_610);
          set_field(noComplexEventTimes_0_1_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 30, 59)}, ComplexEventTimes_NoComplexEventTimes_610);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_610);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_145;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_145);
      FIX::ComplexEventPrice ComplexEventPrice_145;
      ComplexEventPrice_145.setString("1848591");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_145, ComplexEvents_NoComplexEvents_145);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_145);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_145;
      ComplexEventPriceBoundaryPrecision_145.setString("43.280000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_145, ComplexEvents_NoComplexEvents_145);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_145);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_145);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_145;
      ComplexOptPayoutAmount_145.setString("19501164");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_145, ComplexEvents_NoComplexEvents_145);
      all_values.push_back(ComplexEvents_NoComplexEvents_145);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_302;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 48, 3, 13, 1, 2004)}, ComplexEventDates_NoComplexEventDates_302);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 56, 14, 16, 5, 2014)}, ComplexEventDates_NoComplexEventDates_302);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_302);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_611;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 29, 1)}, ComplexEventTimes_NoComplexEventTimes_611);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 31, 0)}, ComplexEventTimes_NoComplexEventTimes_611);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_611);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_612;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 10, 13)}, ComplexEventTimes_NoComplexEventTimes_612);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 18, 55)}, ComplexEventTimes_NoComplexEventTimes_612);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_612);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_613;
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 44, 4)}, ComplexEventTimes_NoComplexEventTimes_613);
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 0, 7)}, ComplexEventTimes_NoComplexEventTimes_613);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_613);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_303;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 13, 54, 4, 2, 2000)}, ComplexEventDates_NoComplexEventDates_303);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 29, 0, 16, 5, 2013)}, ComplexEventDates_NoComplexEventDates_303);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_303);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_614;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 30, 31)}, ComplexEventTimes_NoComplexEventTimes_614);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 49, 9)}, ComplexEventTimes_NoComplexEventTimes_614);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_614);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_615;
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 45, 0)}, ComplexEventTimes_NoComplexEventTimes_615);
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 52, 55)}, ComplexEventTimes_NoComplexEventTimes_615);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_615);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_616;
          set_field(noComplexEventTimes_0_2_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 0, 6)}, ComplexEventTimes_NoComplexEventTimes_616);
          set_field(noComplexEventTimes_0_2_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 6, 0)}, ComplexEventTimes_NoComplexEventTimes_616);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_616);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_304;
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 0, 34, 16, 12, 2006)}, ComplexEventDates_NoComplexEventDates_304);
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 17, 5, 13, 1, 2016)}, ComplexEventDates_NoComplexEventDates_304);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_304);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_617;
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 20, 8)}, ComplexEventTimes_NoComplexEventTimes_617);
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 0, 30)}, ComplexEventTimes_NoComplexEventTimes_617);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_617);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_618;
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 30, 19)}, ComplexEventTimes_NoComplexEventTimes_618);
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 18, 25)}, ComplexEventTimes_NoComplexEventTimes_618);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_618);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_619;
          set_field(noComplexEventTimes_0_2_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 25, 32)}, ComplexEventTimes_NoComplexEventTimes_619);
          set_field(noComplexEventTimes_0_2_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 26, 28)}, ComplexEventTimes_NoComplexEventTimes_619);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_619);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_142;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_869321975"}, EvntGrp_NoEvents_142);
      FIX::EventPx EventPx_142;
      EventPx_142.setString("12973308");
set_field(noEvents_0_1_0, EventPx_142, EvntGrp_NoEvents_142);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1296282093"}, EvntGrp_NoEvents_142);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(23, 8, 55, 27, 10, 2009)}, EvntGrp_NoEvents_142);
      set_field(noEvents_0_1_0, FIX::EventType{19}, EvntGrp_NoEvents_142);
      all_values.push_back(EvntGrp_NoEvents_142);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_131;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_791509015"}, InstrumentParties_NoInstrumentParties_131);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_131);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{270581616}, InstrumentParties_NoInstrumentParties_131);
      all_values.push_back(InstrumentParties_NoInstrumentParties_131);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1510085410"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1054425896}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_270);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_937492313"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{304972743}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_271);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_132;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1229635334"}, InstrumentParties_NoInstrumentParties_132);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_132);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{1639290729}, InstrumentParties_NoInstrumentParties_132);
      all_values.push_back(InstrumentParties_NoInstrumentParties_132);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_1369117656"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{1915232861}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_272);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_133;
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyID{"STRING_1401799314"}, InstrumentParties_NoInstrumentParties_133);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_133);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyRole{1741698419}, InstrumentParties_NoInstrumentParties_133);
      all_values.push_back(InstrumentParties_NoInstrumentParties_133);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273;
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubID{"STRING_1026694029"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubIDType{463536747}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_273);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_136;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_175492474"}, SecAltIDGrp_NoSecurityAltID_136);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1430429354"}, SecAltIDGrp_NoSecurityAltID_136);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_136);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_137;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_74140356"}, SecAltIDGrp_NoSecurityAltID_137);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_1573015063"}, SecAltIDGrp_NoSecurityAltID_137);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_137);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_138;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_2064286390"}, SecAltIDGrp_NoSecurityAltID_138);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_24802939"}, SecAltIDGrp_NoSecurityAltID_138);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_138);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_138;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_227704676"}, SecurityXML_138);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1523938745}, SecurityXML_138);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_717525217"}, SecurityXML_138);
    all_values.push_back(SecurityXML_138);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_10;
    set_field(noRelatedSym_0_0, FIX::DeliveryForm{2}, InstrumentExtension_10);
    FIX::PctAtRisk PctAtRisk_10;
    PctAtRisk_10.setString("41.130000");
set_field(noRelatedSym_0_0, PctAtRisk_10, InstrumentExtension_10);
    all_values.push_back(InstrumentExtension_10);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_17;
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribType{26}, AttrbGrp_NoInstrAttrib_17);
      set_field(noInstrAttrib_0_1_0, FIX::InstrAttribValue{"STRING_1572605181"}, AttrbGrp_NoInstrAttrib_17);
      all_values.push_back(AttrbGrp_NoInstrAttrib_17);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_1;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_18;
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribType{20}, AttrbGrp_NoInstrAttrib_18);
      set_field(noInstrAttrib_0_1_1, FIX::InstrAttribValue{"STRING_182325043"}, AttrbGrp_NoInstrAttrib_18);
      all_values.push_back(AttrbGrp_NoInstrAttrib_18);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_0_1_2;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_19;
      set_field(noInstrAttrib_0_1_2, FIX::InstrAttribType{7}, AttrbGrp_NoInstrAttrib_19);
      set_field(noInstrAttrib_0_1_2, FIX::InstrAttribValue{"STRING_353058082"}, AttrbGrp_NoInstrAttrib_19);
      all_values.push_back(AttrbGrp_NoInstrAttrib_19);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_0.addGroup(noInstrAttrib_0_1_2);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_7;
    set_field(noRelatedSym_0_0, FIX::ExpirationCycle{0}, BaseTradingRules_7);
    set_field(noRelatedSym_0_0, FIX::ImpliedMarketIndicator{1}, BaseTradingRules_7);
    FIX::MaxPriceVariation MaxPriceVariation_7;
    MaxPriceVariation_7.setString("19923488");
set_field(noRelatedSym_0_0, MaxPriceVariation_7, BaseTradingRules_7);
    FIX::MaxTradeVol MaxTradeVol_7;
    MaxTradeVol_7.setString("4263996");
set_field(noRelatedSym_0_0, MaxTradeVol_7, BaseTradingRules_7);
    FIX::MinTradeVol MinTradeVol_7;
    MinTradeVol_7.setString("11163329");
set_field(noRelatedSym_0_0, MinTradeVol_7, BaseTradingRules_7);
    set_field(noRelatedSym_0_0, FIX::MultilegModel{1}, BaseTradingRules_7);
    set_field(noRelatedSym_0_0, FIX::MultilegPriceMethod{2}, BaseTradingRules_7);
    set_field(noRelatedSym_0_0, FIX::PriceType{4}, BaseTradingRules_7);
    FIX::RoundLot RoundLot_7;
    RoundLot_7.setString("13543127");
set_field(noRelatedSym_0_0, RoundLot_7, BaseTradingRules_7);
    set_field(noRelatedSym_0_0, FIX::TradingCurrency{"JPY"}, BaseTradingRules_7);
    all_values.push_back(BaseTradingRules_7);
    all_compo_names.insert("...NoRelatedSym..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_14;
      set_field(noLotTypeRules_0_1_0, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_14);
      FIX::MinLotSize MinLotSize_14;
      MinLotSize_14.setString("2405352");
set_field(noLotTypeRules_0_1_0, MinLotSize_14, LotTypeRules_NoLotTypeRules_14);
      all_values.push_back(LotTypeRules_NoLotTypeRules_14);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_15;
      set_field(noLotTypeRules_0_1_1, FIX::LotType{'2'}, LotTypeRules_NoLotTypeRules_15);
      FIX::MinLotSize MinLotSize_15;
      MinLotSize_15.setString("8709998");
set_field(noLotTypeRules_0_1_1, MinLotSize_15, LotTypeRules_NoLotTypeRules_15);
      all_values.push_back(LotTypeRules_NoLotTypeRules_15);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_0_1_2;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_16;
      set_field(noLotTypeRules_0_1_2, FIX::LotType{'2'}, LotTypeRules_NoLotTypeRules_16);
      FIX::MinLotSize MinLotSize_16;
      MinLotSize_16.setString("10175979");
set_field(noLotTypeRules_0_1_2, MinLotSize_16, LotTypeRules_NoLotTypeRules_16);
      all_values.push_back(LotTypeRules_NoLotTypeRules_16);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_0.addGroup(noLotTypeRules_0_1_2);
    }
    // PriceLimits
    multiset<string> PriceLimits_7;
    FIX::HighLimitPrice HighLimitPrice_7;
    HighLimitPrice_7.setString("8958028");
set_field(noRelatedSym_0_0, HighLimitPrice_7, PriceLimits_7);
    FIX::LowLimitPrice LowLimitPrice_7;
    LowLimitPrice_7.setString("20412550");
set_field(noRelatedSym_0_0, LowLimitPrice_7, PriceLimits_7);
    set_field(noRelatedSym_0_0, FIX::PriceLimitType{2}, PriceLimits_7);
    FIX::TradingReferencePrice TradingReferencePrice_7;
    TradingReferencePrice_7.setString("16133280");
set_field(noRelatedSym_0_0, TradingReferencePrice_7, PriceLimits_7);
    all_values.push_back(PriceLimits_7);
    all_compo_names.insert("...NoRelatedSym...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_12;
      FIX::EndTickPriceRange EndTickPriceRange_12;
      EndTickPriceRange_12.setString("5620172");
set_field(noTickRules_0_1_0, EndTickPriceRange_12, TickRules_NoTickRules_12);
      FIX::StartTickPriceRange StartTickPriceRange_12;
      StartTickPriceRange_12.setString("1513279");
set_field(noTickRules_0_1_0, StartTickPriceRange_12, TickRules_NoTickRules_12);
      FIX::TickIncrement TickIncrement_12;
      TickIncrement_12.setString("264717");
set_field(noTickRules_0_1_0, TickIncrement_12, TickRules_NoTickRules_12);
      set_field(noTickRules_0_1_0, FIX::TickRuleType{3}, TickRules_NoTickRules_12);
      all_values.push_back(TickRules_NoTickRules_12);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_0_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_13;
      FIX::EndTickPriceRange EndTickPriceRange_13;
      EndTickPriceRange_13.setString("1994133");
set_field(noTickRules_0_1_1, EndTickPriceRange_13, TickRules_NoTickRules_13);
      FIX::StartTickPriceRange StartTickPriceRange_13;
      StartTickPriceRange_13.setString("2087967");
set_field(noTickRules_0_1_1, StartTickPriceRange_13, TickRules_NoTickRules_13);
      FIX::TickIncrement TickIncrement_13;
      TickIncrement_13.setString("3497525");
set_field(noTickRules_0_1_1, TickIncrement_13, TickRules_NoTickRules_13);
      set_field(noTickRules_0_1_1, FIX::TickRuleType{1}, TickRules_NoTickRules_13);
      all_values.push_back(TickRules_NoTickRules_13);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_0.addGroup(noTickRules_0_1_1);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_0_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_11;
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribType{96967859}, NestedInstrumentAttribute_NoNestedInstrAttrib_11);
      set_field(noNestedInstrAttrib_0_1_0, FIX::NestedInstrAttribValue{"STRING_397336570"}, NestedInstrumentAttribute_NoNestedInstrAttrib_11);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_11);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_0.addGroup(noNestedInstrAttrib_0_1_0);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_11;
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_11);
      set_field(noTradingSessionRules_0_1_0, FIX::TradingSessionSubID{"STRING_6"}, TradingSessionRulesGrp_NoTradingSessionRules_11);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_11);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_26;
        set_field(noExecInstRules_0_0_2_0, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_26);
        all_values.push_back(ExecInstRules_NoExecInstRules_26);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_27;
        set_field(noExecInstRules_0_0_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_27);
        all_values.push_back(ExecInstRules_NoExecInstRules_27);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_0.addGroup(noExecInstRules_0_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_22;
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_22);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MDFeedType{"STRING_1034629637"}, MarketDataFeedTypes_NoMDFeedTypes_22);
        set_field(noMDFeedTypes_0_0_2_0, FIX::MarketDepth{1041111809}, MarketDataFeedTypes_NoMDFeedTypes_22);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_22);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_23;
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_23);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MDFeedType{"STRING_2135424887"}, MarketDataFeedTypes_NoMDFeedTypes_23);
        set_field(noMDFeedTypes_0_0_2_1, FIX::MarketDepth{1912111708}, MarketDataFeedTypes_NoMDFeedTypes_23);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_23);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_24;
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_24);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MDFeedType{"STRING_1005539230"}, MarketDataFeedTypes_NoMDFeedTypes_24);
        set_field(noMDFeedTypes_0_0_2_2, FIX::MarketDepth{660430899}, MarketDataFeedTypes_NoMDFeedTypes_24);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_24);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_0.addGroup(noMDFeedTypes_0_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_25;
        set_field(noMatchRules_0_0_2_0, FIX::MatchAlgorithm{"STRING_1399592319"}, MatchRules_NoMatchRules_25);
        set_field(noMatchRules_0_0_2_0, FIX::MatchType{"STRING_A3"}, MatchRules_NoMatchRules_25);
        all_values.push_back(MatchRules_NoMatchRules_25);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_26;
        set_field(noMatchRules_0_0_2_1, FIX::MatchAlgorithm{"STRING_1015638382"}, MatchRules_NoMatchRules_26);
        set_field(noMatchRules_0_0_2_1, FIX::MatchType{"STRING_2"}, MatchRules_NoMatchRules_26);
        all_values.push_back(MatchRules_NoMatchRules_26);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_27;
        set_field(noMatchRules_0_0_2_2, FIX::MatchAlgorithm{"STRING_277603291"}, MatchRules_NoMatchRules_27);
        set_field(noMatchRules_0_0_2_2, FIX::MatchType{"STRING_A5"}, MatchRules_NoMatchRules_27);
        all_values.push_back(MatchRules_NoMatchRules_27);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_0.addGroup(noMatchRules_0_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_25;
        set_field(noOrdTypeRules_0_0_2_0, FIX::OrdType{'8'}, OrdTypeRules_NoOrdTypeRules_25);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_25);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_0.addGroup(noOrdTypeRules_0_0_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_27;
        set_field(noTimeInForceRules_0_0_2_0, FIX::TimeInForce{'0'}, TimeInForceRules_NoTimeInForceRules_27);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_27);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_28;
        set_field(noTimeInForceRules_0_0_2_1, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_28);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_28);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_0.addGroup(noTimeInForceRules_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_0_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_12;
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_12);
      set_field(noTradingSessionRules_0_1_1, FIX::TradingSessionSubID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_12);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_12);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_0_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_28;
        set_field(noExecInstRules_0_1_2_0, FIX::ExecInstValue{'6'}, ExecInstRules_NoExecInstRules_28);
        all_values.push_back(ExecInstRules_NoExecInstRules_28);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_0_1_1.addGroup(noExecInstRules_0_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_25;
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_25);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MDFeedType{"STRING_204241939"}, MarketDataFeedTypes_NoMDFeedTypes_25);
        set_field(noMDFeedTypes_0_1_2_0, FIX::MarketDepth{1712935430}, MarketDataFeedTypes_NoMDFeedTypes_25);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_25);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_26;
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_26);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MDFeedType{"STRING_448494205"}, MarketDataFeedTypes_NoMDFeedTypes_26);
        set_field(noMDFeedTypes_0_1_2_1, FIX::MarketDepth{2029627842}, MarketDataFeedTypes_NoMDFeedTypes_26);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_26);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_0_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_27;
        set_field(noMDFeedTypes_0_1_2_2, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_27);
        set_field(noMDFeedTypes_0_1_2_2, FIX::MDFeedType{"STRING_1489606014"}, MarketDataFeedTypes_NoMDFeedTypes_27);
        set_field(noMDFeedTypes_0_1_2_2, FIX::MarketDepth{439371904}, MarketDataFeedTypes_NoMDFeedTypes_27);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_27);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_0_1_1.addGroup(noMDFeedTypes_0_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_28;
        set_field(noMatchRules_0_1_2_0, FIX::MatchAlgorithm{"STRING_1254234074"}, MatchRules_NoMatchRules_28);
        set_field(noMatchRules_0_1_2_0, FIX::MatchType{"STRING_A1"}, MatchRules_NoMatchRules_28);
        all_values.push_back(MatchRules_NoMatchRules_28);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_0_1_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_29;
        set_field(noMatchRules_0_1_2_1, FIX::MatchAlgorithm{"STRING_534182091"}, MatchRules_NoMatchRules_29);
        set_field(noMatchRules_0_1_2_1, FIX::MatchType{"STRING_A2"}, MatchRules_NoMatchRules_29);
        all_values.push_back(MatchRules_NoMatchRules_29);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_0_1_1.addGroup(noMatchRules_0_1_2_1);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_0_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_26;
        set_field(noOrdTypeRules_0_1_2_0, FIX::OrdType{'K'}, OrdTypeRules_NoOrdTypeRules_26);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_26);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_0_1_1.addGroup(noOrdTypeRules_0_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_29;
        set_field(noTimeInForceRules_0_1_2_0, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_29);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_29);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_30;
        set_field(noTimeInForceRules_0_1_2_1, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_30);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_30);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_0_1_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_31;
        set_field(noTimeInForceRules_0_1_2_2, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_31);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_31);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_0_1_1.addGroup(noTimeInForceRules_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noTradingSessionRules_0_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_29;
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveCurrency{"CAN"}, SpreadOrBenchmarkCurveData_29);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurveName{"STRING_Euribor"}, SpreadOrBenchmarkCurveData_29);
    set_field(noRelatedSym_0_0, FIX::BenchmarkCurvePoint{"STRING_1940903831"}, SpreadOrBenchmarkCurveData_29);
    FIX::BenchmarkPrice BenchmarkPrice_29;
    BenchmarkPrice_29.setString("17001820");
set_field(noRelatedSym_0_0, BenchmarkPrice_29, SpreadOrBenchmarkCurveData_29);
    set_field(noRelatedSym_0_0, FIX::BenchmarkPriceType{1677564559}, SpreadOrBenchmarkCurveData_29);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityID{"STRING_517600530"}, SpreadOrBenchmarkCurveData_29);
    set_field(noRelatedSym_0_0, FIX::BenchmarkSecurityIDSource{"STRING_1948167132"}, SpreadOrBenchmarkCurveData_29);
    FIX::Spread Spread_29;
    Spread_29.setString("9569055");
set_field(noRelatedSym_0_0, Spread_29, SpreadOrBenchmarkCurveData_29);
    all_values.push_back(SpreadOrBenchmarkCurveData_29);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_46;
      set_field(noStipulations_0_1_0, FIX::StipulationType{"STRING_WALA"}, Stipulations_NoStipulations_46);
      set_field(noStipulations_0_1_0, FIX::StipulationValue{"STRING_246197393"}, Stipulations_NoStipulations_46);
      all_values.push_back(Stipulations_NoStipulations_46);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_1;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_47;
      set_field(noStipulations_0_1_1, FIX::StipulationType{"STRING_RATING"}, Stipulations_NoStipulations_47);
      set_field(noStipulations_0_1_1, FIX::StipulationValue{"STRING_827421108"}, Stipulations_NoStipulations_47);
      all_values.push_back(Stipulations_NoStipulations_47);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_0_1_2;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_48;
      set_field(noStipulations_0_1_2, FIX::StipulationType{"STRING_PRIMARY"}, Stipulations_NoStipulations_48);
      set_field(noStipulations_0_1_2, FIX::StipulationValue{"STRING_1794190159"}, Stipulations_NoStipulations_48);
      all_values.push_back(Stipulations_NoStipulations_48);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_0.addGroup(noStipulations_0_1_2);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_10;
      FIX::EndStrikePxRange EndStrikePxRange_10;
      EndStrikePxRange_10.setString("4404546");
set_field(noStrikeRules_0_1_0, EndStrikePxRange_10, StrikeRules_NoStrikeRules_10);
      FIX::StartStrikePxRange StartStrikePxRange_10;
      StartStrikePxRange_10.setString("11363125");
set_field(noStrikeRules_0_1_0, StartStrikePxRange_10, StrikeRules_NoStrikeRules_10);
      set_field(noStrikeRules_0_1_0, FIX::StrikeExerciseStyle{1148937206}, StrikeRules_NoStrikeRules_10);
      FIX::StrikeIncrement StrikeIncrement_10;
      StrikeIncrement_10.setString("21165811");
set_field(noStrikeRules_0_1_0, StrikeIncrement_10, StrikeRules_NoStrikeRules_10);
      set_field(noStrikeRules_0_1_0, FIX::StrikeRuleID{"STRING_243062952"}, StrikeRules_NoStrikeRules_10);
      all_values.push_back(StrikeRules_NoStrikeRules_10);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_16;
        set_field(noMaturityRules_0_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_503279600"}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrement{443852029}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_0_2_0, FIX::MaturityRuleID{"STRING_2051184557"}, MaturityRules_NoMaturityRules_16);
        set_field(noMaturityRules_0_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_91738905"}, MaturityRules_NoMaturityRules_16);
        all_values.push_back(MaturityRules_NoMaturityRules_16);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_0.addGroup(noMaturityRules_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_0_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_11;
      FIX::EndStrikePxRange EndStrikePxRange_11;
      EndStrikePxRange_11.setString("20374706");
set_field(noStrikeRules_0_1_1, EndStrikePxRange_11, StrikeRules_NoStrikeRules_11);
      FIX::StartStrikePxRange StartStrikePxRange_11;
      StartStrikePxRange_11.setString("747608");
set_field(noStrikeRules_0_1_1, StartStrikePxRange_11, StrikeRules_NoStrikeRules_11);
      set_field(noStrikeRules_0_1_1, FIX::StrikeExerciseStyle{781735879}, StrikeRules_NoStrikeRules_11);
      FIX::StrikeIncrement StrikeIncrement_11;
      StrikeIncrement_11.setString("14391518");
set_field(noStrikeRules_0_1_1, StrikeIncrement_11, StrikeRules_NoStrikeRules_11);
      set_field(noStrikeRules_0_1_1, FIX::StrikeRuleID{"STRING_722837370"}, StrikeRules_NoStrikeRules_11);
      all_values.push_back(StrikeRules_NoStrikeRules_11);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_17;
        set_field(noMaturityRules_0_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_991850327"}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrement{1092756592}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_1_2_0, FIX::MaturityRuleID{"STRING_1209823785"}, MaturityRules_NoMaturityRules_17);
        set_field(noMaturityRules_0_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_86726959"}, MaturityRules_NoMaturityRules_17);
        all_values.push_back(MaturityRules_NoMaturityRules_17);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_0_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_18;
        set_field(noMaturityRules_0_1_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_2054503137"}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityMonthYearIncrement{1432422914}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_1_2_1, FIX::MaturityRuleID{"STRING_208290555"}, MaturityRules_NoMaturityRules_18);
        set_field(noMaturityRules_0_1_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1079129425"}, MaturityRules_NoMaturityRules_18);
        all_values.push_back(MaturityRules_NoMaturityRules_18);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_0_1_1.addGroup(noMaturityRules_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noStrikeRules_0_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_123;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_648745203"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{67958303}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_445459458"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{617842711}, UnderlyingInstrument_123);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_123;
      UnderlyingAdjustedQuantity_123.setString("3110212");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_123, UnderlyingInstrument_123);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_123;
      UnderlyingAllocationPercent_123.setString("93.450000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_123, UnderlyingInstrument_123);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_123;
      UnderlyingAttachmentPoint_123.setString("23.110000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_321265532"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_553431374"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1410692674"}, UnderlyingInstrument_123);
      FIX::UnderlyingCapValue UnderlyingCapValue_123;
      UnderlyingCapValue_123.setString("2249664");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_123, UnderlyingInstrument_123);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_123;
      UnderlyingCashAmount_123.setString("6451702");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_123);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_123;
      UnderlyingContractMultiplier_123.setString("2997272");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{1426906158}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_592347918"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1022564645"}, UnderlyingInstrument_123);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_123;
      UnderlyingCouponRate_123.setString("22.200000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_1584198246"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_123);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_123;
      UnderlyingCurrentValue_123.setString("2292484");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_123, UnderlyingInstrument_123);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_123;
      UnderlyingDetachmentPoint_123.setString("30.640000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_123, UnderlyingInstrument_123);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_123;
      UnderlyingDirtyPrice_123.setString("10340621");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_123, UnderlyingInstrument_123);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_123;
      UnderlyingEndPrice_123.setString("1362678");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_123, UnderlyingInstrument_123);
      FIX::UnderlyingEndValue UnderlyingEndValue_123;
      UnderlyingEndValue_123.setString("17938442");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{319001390}, UnderlyingInstrument_123);
      FIX::UnderlyingFXRate UnderlyingFXRate_123;
      UnderlyingFXRate_123.setString("8707084");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_123);
      FIX::UnderlyingFactor UnderlyingFactor_123;
      UnderlyingFactor_123.setString("13981308");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{167230748}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_503396352"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1466089119"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_612690206"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1121239064"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1777110374"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_722269551"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_94877727"}, UnderlyingInstrument_123);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_123;
      UnderlyingNotionalPercentageOutstanding_123.setString("59.060000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_123);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_123;
      UnderlyingOriginalNotionalPercentageOutstanding_123.setString("4.020000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_175858700"}, UnderlyingInstrument_123);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_123;
      UnderlyingPriceUnitOfMeasureQty_123.setString("19208712");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{658766428}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{475585975}, UnderlyingInstrument_123);
      FIX::UnderlyingPx UnderlyingPx_123;
      UnderlyingPx_123.setString("12002937");
set_field(noUnderlyings_0_1_0, UnderlyingPx_123, UnderlyingInstrument_123);
      FIX::UnderlyingQty UnderlyingQty_123;
      UnderlyingQty_123.setString("12511143");
set_field(noUnderlyings_0_1_0, UnderlyingQty_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1498150620"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1054872286"}, UnderlyingInstrument_123);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_123;
      UnderlyingRepurchaseRate_123.setString("89.440000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{626149899}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_2002207451"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_917077354"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_963972963"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_888785928"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1053345253"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_610333557"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1207787318"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_1924053749"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_464984706"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_123);
      FIX::UnderlyingStartValue UnderlyingStartValue_123;
      UnderlyingStartValue_123.setString("20912844");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_968381059"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_123);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_123;
      UnderlyingStrikePrice_123.setString("20896201");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_123, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1554150331"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_1278760606"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_37014202"}, UnderlyingInstrument_123);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1505042590"}, UnderlyingInstrument_123);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_123;
      UnderlyingUnitOfMeasureQty_123.setString("4069778");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_123, UnderlyingInstrument_123);
      all_values.push_back(UnderlyingInstrument_123);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_259;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1680901290"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_180365439"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_259);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_248;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_9003617"}, UnderlyingStipulations_NoUnderlyingStips_248);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1380659153"}, UnderlyingStipulations_NoUnderlyingStips_248);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_248);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_249;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_1304981731"}, UnderlyingStipulations_NoUnderlyingStips_249);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_1507154237"}, UnderlyingStipulations_NoUnderlyingStips_249);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_249);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_250;
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipType{"STRING_288047792"}, UnderlyingStipulations_NoUnderlyingStips_250);
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipValue{"STRING_1992810675"}, UnderlyingStipulations_NoUnderlyingStips_250);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_250);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_252;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_142771595"}, UndlyInstrumentParties_NoUndlyInstrumentParties_252);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_252);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{949793451}, UndlyInstrumentParties_NoUndlyInstrumentParties_252);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_252);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1815749634"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1560127008}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_503);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_91861194"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1592319736}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_504);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_2025111715"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{550295680}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_505);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_253;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1536120585"}, UndlyInstrumentParties_NoUndlyInstrumentParties_253);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_253);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{327335638}, UndlyInstrumentParties_NoUndlyInstrumentParties_253);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_253);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_788145601"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1881485969}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_506);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1223888599"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{825159803}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_507);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1239044911"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1630866483}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_508);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_254;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_220260760"}, UndlyInstrumentParties_NoUndlyInstrumentParties_254);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_254);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{1811231922}, UndlyInstrumentParties_NoUndlyInstrumentParties_254);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_254);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_781466171"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1044407428}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_509);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_124;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1579109875"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{141136761}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1332455220"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{1424436903}, UnderlyingInstrument_124);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_124;
      UnderlyingAdjustedQuantity_124.setString("1269572");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_124, UnderlyingInstrument_124);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_124;
      UnderlyingAllocationPercent_124.setString("68.150000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_124, UnderlyingInstrument_124);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_124;
      UnderlyingAttachmentPoint_124.setString("76.360000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_1076750701"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_359300691"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_1855107271"}, UnderlyingInstrument_124);
      FIX::UnderlyingCapValue UnderlyingCapValue_124;
      UnderlyingCapValue_124.setString("4893940");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_124, UnderlyingInstrument_124);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_124;
      UnderlyingCashAmount_124.setString("4511618");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_124);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_124;
      UnderlyingContractMultiplier_124.setString("3670221");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{1001457565}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_688580296"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1213031254"}, UnderlyingInstrument_124);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_124;
      UnderlyingCouponRate_124.setString("32.030000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_633708289"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_124);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_124;
      UnderlyingCurrentValue_124.setString("18575968");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_124, UnderlyingInstrument_124);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_124;
      UnderlyingDetachmentPoint_124.setString("30.110000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_124, UnderlyingInstrument_124);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_124;
      UnderlyingDirtyPrice_124.setString("1543567");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_124, UnderlyingInstrument_124);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_124;
      UnderlyingEndPrice_124.setString("13409797");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_124, UnderlyingInstrument_124);
      FIX::UnderlyingEndValue UnderlyingEndValue_124;
      UnderlyingEndValue_124.setString("8991137");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{926819342}, UnderlyingInstrument_124);
      FIX::UnderlyingFXRate UnderlyingFXRate_124;
      UnderlyingFXRate_124.setString("10047279");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_124);
      FIX::UnderlyingFactor UnderlyingFactor_124;
      UnderlyingFactor_124.setString("17082855");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{2049135426}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_604868143"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1849422275"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_1234106998"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_2029305046"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1976379524"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_561850166"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2068662682"}, UnderlyingInstrument_124);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_124;
      UnderlyingNotionalPercentageOutstanding_124.setString("65.770000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_124);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_124;
      UnderlyingOriginalNotionalPercentageOutstanding_124.setString("63.050000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1395040639"}, UnderlyingInstrument_124);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_124;
      UnderlyingPriceUnitOfMeasureQty_124.setString("13723127");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{928746016}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{1762062767}, UnderlyingInstrument_124);
      FIX::UnderlyingPx UnderlyingPx_124;
      UnderlyingPx_124.setString("2262866");
set_field(noUnderlyings_0_1_1, UnderlyingPx_124, UnderlyingInstrument_124);
      FIX::UnderlyingQty UnderlyingQty_124;
      UnderlyingQty_124.setString("16173263");
set_field(noUnderlyings_0_1_1, UnderlyingQty_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_827610374"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1555079863"}, UnderlyingInstrument_124);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_124;
      UnderlyingRepurchaseRate_124.setString("9.540000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{681303581}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_470391740"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_1961147843"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1360156592"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_624748528"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1154643919"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_111786715"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_1551567871"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_11888270"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_1285028631"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_124);
      FIX::UnderlyingStartValue UnderlyingStartValue_124;
      UnderlyingStartValue_124.setString("20610236");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1889896774"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_124);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_124;
      UnderlyingStrikePrice_124.setString("17717181");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_124, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_643204240"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_1709497213"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_1692897206"}, UnderlyingInstrument_124);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1548850818"}, UnderlyingInstrument_124);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_124;
      UnderlyingUnitOfMeasureQty_124.setString("4831644");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_124, UnderlyingInstrument_124);
      all_values.push_back(UnderlyingInstrument_124);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_260;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_796407809"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1855477164"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_260);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_261;
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_102962232"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_410986928"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_261);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_251;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_1720288545"}, UnderlyingStipulations_NoUnderlyingStips_251);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_1238597302"}, UnderlyingStipulations_NoUnderlyingStips_251);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_251);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_252;
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipType{"STRING_1489360038"}, UnderlyingStipulations_NoUnderlyingStips_252);
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipValue{"STRING_1823839500"}, UnderlyingStipulations_NoUnderlyingStips_252);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_252);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_255;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1959751778"}, UndlyInstrumentParties_NoUndlyInstrumentParties_255);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_255);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{1132573828}, UndlyInstrumentParties_NoUndlyInstrumentParties_255);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_255);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_644663967"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1244360544}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_510);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1988584530"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{656552237}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_511);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_381905527"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{953470619}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_512);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_256;
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_570092285"}, UndlyInstrumentParties_NoUndlyInstrumentParties_256);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_256);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyRole{1767778983}, UndlyInstrumentParties_NoUndlyInstrumentParties_256);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_256);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1896036825"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{263499575}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_513);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1279752897"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1441450383}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_514);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_125;
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuer{"DATA_1812350393"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuerLen{1762917319}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_615666599"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDescLen{461274554}, UnderlyingInstrument_125);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_125;
      UnderlyingAdjustedQuantity_125.setString("14709108");
set_field(noUnderlyings_0_1_2, UnderlyingAdjustedQuantity_125, UnderlyingInstrument_125);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_125;
      UnderlyingAllocationPercent_125.setString("88.320000");
set_field(noUnderlyings_0_1_2, UnderlyingAllocationPercent_125, UnderlyingInstrument_125);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_125;
      UnderlyingAttachmentPoint_125.setString("14.830000");
set_field(noUnderlyings_0_1_2, UnderlyingAttachmentPoint_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCFICode{"STRING_1405191011"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPProgram{"STRING_291433729"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPRegType{"STRING_2110858785"}, UnderlyingInstrument_125);
      FIX::UnderlyingCapValue UnderlyingCapValue_125;
      UnderlyingCapValue_125.setString("7470674");
set_field(noUnderlyings_0_1_2, UnderlyingCapValue_125, UnderlyingInstrument_125);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_125;
      UnderlyingCashAmount_125.setString("21152732");
set_field(noUnderlyings_0_1_2, UnderlyingCashAmount_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_125);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_125;
      UnderlyingContractMultiplier_125.setString("5593355");
set_field(noUnderlyings_0_1_2, UnderlyingContractMultiplier_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingContractMultiplierUnit{1605293277}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_868366202"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_996352191"}, UnderlyingInstrument_125);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_125;
      UnderlyingCouponRate_125.setString("35.960000");
set_field(noUnderlyings_0_1_2, UnderlyingCouponRate_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCreditRating{"STRING_2112726746"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_125);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_125;
      UnderlyingCurrentValue_125.setString("3471486");
set_field(noUnderlyings_0_1_2, UnderlyingCurrentValue_125, UnderlyingInstrument_125);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_125;
      UnderlyingDetachmentPoint_125.setString("36.920000");
set_field(noUnderlyings_0_1_2, UnderlyingDetachmentPoint_125, UnderlyingInstrument_125);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_125;
      UnderlyingDirtyPrice_125.setString("13291181");
set_field(noUnderlyings_0_1_2, UnderlyingDirtyPrice_125, UnderlyingInstrument_125);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_125;
      UnderlyingEndPrice_125.setString("4714672");
set_field(noUnderlyings_0_1_2, UnderlyingEndPrice_125, UnderlyingInstrument_125);
      FIX::UnderlyingEndValue UnderlyingEndValue_125;
      UnderlyingEndValue_125.setString("14112190");
set_field(noUnderlyings_0_1_2, UnderlyingEndValue_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingExerciseStyle{899373803}, UnderlyingInstrument_125);
      FIX::UnderlyingFXRate UnderlyingFXRate_125;
      UnderlyingFXRate_125.setString("2200204");
set_field(noUnderlyings_0_1_2, UnderlyingFXRate_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_125);
      FIX::UnderlyingFactor UnderlyingFactor_125;
      UnderlyingFactor_125.setString("316430");
set_field(noUnderlyings_0_1_2, UnderlyingFactor_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFlowScheduleType{1661470838}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingInstrRegistry{"STRING_1339585348"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1794560372"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssuer{"STRING_129653790"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1800859902"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1117987559"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_848282622"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_525637737"}, UnderlyingInstrument_125);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_125;
      UnderlyingNotionalPercentageOutstanding_125.setString("49.220000");
set_field(noUnderlyings_0_1_2, UnderlyingNotionalPercentageOutstanding_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_125);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_125;
      UnderlyingOriginalNotionalPercentageOutstanding_125.setString("28.750000");
set_field(noUnderlyings_0_1_2, UnderlyingOriginalNotionalPercentageOutstanding_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1122762324"}, UnderlyingInstrument_125);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_125;
      UnderlyingPriceUnitOfMeasureQty_125.setString("11075059");
set_field(noUnderlyings_0_1_2, UnderlyingPriceUnitOfMeasureQty_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingProduct{224805248}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPutOrCall{1682097856}, UnderlyingInstrument_125);
      FIX::UnderlyingPx UnderlyingPx_125;
      UnderlyingPx_125.setString("5653155");
set_field(noUnderlyings_0_1_2, UnderlyingPx_125, UnderlyingInstrument_125);
      FIX::UnderlyingQty UnderlyingQty_125;
      UnderlyingQty_125.setString("10931714");
set_field(noUnderlyings_0_1_2, UnderlyingQty_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_530966399"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_667789158"}, UnderlyingInstrument_125);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_125;
      UnderlyingRepurchaseRate_125.setString("45.480000");
set_field(noUnderlyings_0_1_2, UnderlyingRepurchaseRate_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepurchaseTerm{1368419472}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRestructuringType{"STRING_1426814991"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityDesc{"STRING_1405563173"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1011859516"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityID{"STRING_608449461"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityIDSource{"STRING_1877030451"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecuritySubType{"STRING_275594895"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityType{"STRING_1507823264"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSeniority{"STRING_2097050906"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlMethod{"STRING_1950313497"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_125);
      FIX::UnderlyingStartValue UnderlyingStartValue_125;
      UnderlyingStartValue_125.setString("16110380");
set_field(noUnderlyings_0_1_2, UnderlyingStartValue_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1142415197"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_125);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_125;
      UnderlyingStrikePrice_125.setString("7957914");
set_field(noUnderlyings_0_1_2, UnderlyingStrikePrice_125, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbol{"STRING_157046952"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbolSfx{"STRING_441490861"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingTimeUnit{"STRING_1321429189"}, UnderlyingInstrument_125);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_532741875"}, UnderlyingInstrument_125);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_125;
      UnderlyingUnitOfMeasureQty_125.setString("15812072");
set_field(noUnderlyings_0_1_2, UnderlyingUnitOfMeasureQty_125, UnderlyingInstrument_125);
      all_values.push_back(UnderlyingInstrument_125);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_262;
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_1655504199"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_541229497"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_262);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_253;
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipType{"STRING_1190118407"}, UnderlyingStipulations_NoUnderlyingStips_253);
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipValue{"STRING_1106545059"}, UnderlyingStipulations_NoUnderlyingStips_253);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_253);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_257;
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1721084806"}, UndlyInstrumentParties_NoUndlyInstrumentParties_257);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_257);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyRole{2039349664}, UndlyInstrumentParties_NoUndlyInstrumentParties_257);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_257);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1053665560"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1297429189}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_515);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1953880146"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1662115022}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_516);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1026975993"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{81991393}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_517);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_2);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_258;
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1022454638"}, UndlyInstrumentParties_NoUndlyInstrumentParties_258);
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_258);
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyRole{2032304890}, UndlyInstrumentParties_NoUndlyInstrumentParties_258);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_258);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518;
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_440097700"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1027236440}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_518);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_259;
        set_field(noUndlyInstrumentParties_0_2_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1600980348"}, UndlyInstrumentParties_NoUndlyInstrumentParties_259);
        set_field(noUndlyInstrumentParties_0_2_2_2, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_259);
        set_field(noUndlyInstrumentParties_0_2_2_2, FIX::UnderlyingInstrumentPartyRole{1823027892}, UndlyInstrumentParties_NoUndlyInstrumentParties_259);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_259);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519;
          set_field(noUndlyInstrumentPartySubIDs_0_2_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_474796800"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);
          set_field(noUndlyInstrumentPartySubIDs_0_2_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{996973433}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_519);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520;
          set_field(noUndlyInstrumentPartySubIDs_0_2_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_143285528"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);
          set_field(noUndlyInstrumentPartySubIDs_0_2_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{2056004013}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_520);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    // YieldData
    multiset<string> YieldData_24;
    FIX::Yield Yield_24;
    Yield_24.setString("18.500000");
set_field(noRelatedSym_0_0, Yield_24, YieldData_24);
    set_field(noRelatedSym_0_0, FIX::YieldCalcDate{"LOCALMKTDATE_1798789727"}, YieldData_24);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionDate{"LOCALMKTDATE_449749862"}, YieldData_24);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_24;
    YieldRedemptionPrice_24.setString("5476955");
set_field(noRelatedSym_0_0, YieldRedemptionPrice_24, YieldData_24);
    set_field(noRelatedSym_0_0, FIX::YieldRedemptionPriceType{841424486}, YieldData_24);
    set_field(noRelatedSym_0_0, FIX::YieldType{"STRING_ATISSUE"}, YieldData_24);
    all_values.push_back(YieldData_24);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::SecurityList::NoRelatedSym noRelatedSym_0_1;
    // SecListGrp.NoRelatedSym
    multiset<string> SecListGrp_NoRelatedSym_1;
    set_field(noRelatedSym_0_1, FIX::Currency{"JPY"}, SecListGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::EncodedText{"DATA_1183145491"}, SecListGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::EncodedTextLen{1420496646}, SecListGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::RelSymTransactTime{FIX::UTCTIMESTAMP(4, 48, 52, 6, 10, 2017)}, SecListGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::Text{"STRING_626413416"}, SecListGrp_NoRelatedSym_1);
    all_values.push_back(SecListGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // FinancingDetails
    multiset<string> FinancingDetails_26;
    set_field(noRelatedSym_0_1, FIX::AgreementCurrency{"EUR"}, FinancingDetails_26);
    set_field(noRelatedSym_0_1, FIX::AgreementDate{"LOCALMKTDATE_1040850724"}, FinancingDetails_26);
    set_field(noRelatedSym_0_1, FIX::AgreementDesc{"STRING_866575485"}, FinancingDetails_26);
    set_field(noRelatedSym_0_1, FIX::AgreementID{"STRING_10008199"}, FinancingDetails_26);
    set_field(noRelatedSym_0_1, FIX::DeliveryType{0}, FinancingDetails_26);
    set_field(noRelatedSym_0_1, FIX::EndDate{"LOCALMKTDATE_899881424"}, FinancingDetails_26);
    FIX::MarginRatio MarginRatio_26;
    MarginRatio_26.setString("60.910000");
set_field(noRelatedSym_0_1, MarginRatio_26, FinancingDetails_26);
    set_field(noRelatedSym_0_1, FIX::StartDate{"LOCALMKTDATE_104891077"}, FinancingDetails_26);
    set_field(noRelatedSym_0_1, FIX::TerminationType{2}, FinancingDetails_26);
    all_values.push_back(FinancingDetails_26);
    all_compo_names.insert("...NoRelatedSym.");

    // InstrmtLegSecListGrp
    // Group InstrmtLegSecListGrp.NoLegs
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_3;
      set_field(noLegs_1_1_0, FIX::LegSettlType{'2'}, InstrmtLegSecListGrp_NoLegs_3);
      set_field(noLegs_1_1_0, FIX::LegSwapType{4}, InstrmtLegSecListGrp_NoLegs_3);
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_3);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_102;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_1342457727"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{2046966332}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_1732948452"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{1890153242}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_740907170"}, InstrumentLeg_102);
      FIX::LegContractMultiplier LegContractMultiplier_102;
      LegContractMultiplier_102.setString("11417597");
set_field(noLegs_1_1_0, LegContractMultiplier_102, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{1271300224}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1155932814"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_177421570"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_544313223"}, InstrumentLeg_102);
      FIX::LegCouponRate LegCouponRate_102;
      LegCouponRate_102.setString("54.400000");
set_field(noLegs_1_1_0, LegCouponRate_102, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_266748974"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"GBP"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_2018191400"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{564689944}, InstrumentLeg_102);
      FIX::LegFactor LegFactor_102;
      LegFactor_102.setString("6268887");
set_field(noLegs_1_1_0, LegFactor_102, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{497121168}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_991167728"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1757144137"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1537971892"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_1857743213"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_1767152336"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_2032319317"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_610140990"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1452704780"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_102);
      FIX::LegOptionRatio LegOptionRatio_102;
      LegOptionRatio_102.setString("19848192");
set_field(noLegs_1_1_0, LegOptionRatio_102, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_2135230657"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_237903352"}, InstrumentLeg_102);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_102;
      LegPriceUnitOfMeasureQty_102.setString("11205341");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_102, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegProduct{1330204736}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{137386036}, InstrumentLeg_102);
      FIX::LegRatioQty LegRatioQty_102;
      LegRatioQty_102.setString("7059989");
set_field(noLegs_1_1_0, LegRatioQty_102, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1072874330"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_878293207"}, InstrumentLeg_102);
      FIX::LegRepurchaseRate LegRepurchaseRate_102;
      LegRepurchaseRate_102.setString("86.880000");
set_field(noLegs_1_1_0, LegRepurchaseRate_102, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{196690906}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_2034226021"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_2025180258"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_741004129"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_252237814"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_144445584"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_1855759540"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegSide{'1'}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_15153336"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_102);
      FIX::LegStrikePrice LegStrikePrice_102;
      LegStrikePrice_102.setString("5122745");
set_field(noLegs_1_1_0, LegStrikePrice_102, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_1264133565"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_2017725245"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_2050246397"}, InstrumentLeg_102);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_974393130"}, InstrumentLeg_102);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_102;
      LegUnitOfMeasureQty_102.setString("16373939");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_102, InstrumentLeg_102);
      all_values.push_back(InstrumentLeg_102);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_209;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_1584534120"}, LegSecAltIDGrp_NoLegSecurityAltID_209);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_942615065"}, LegSecAltIDGrp_NoLegSecurityAltID_209);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_209);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_210;
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltID{"STRING_1924808812"}, LegSecAltIDGrp_NoLegSecurityAltID_210);
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltIDSource{"STRING_1421869687"}, LegSecAltIDGrp_NoLegSecurityAltID_210);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_210);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_12;
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurveCurrency{"USD"}, LegBenchmarkCurveData_12);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurveName{"STRING_394920196"}, LegBenchmarkCurveData_12);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkCurvePoint{"STRING_113083162"}, LegBenchmarkCurveData_12);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_12;
      LegBenchmarkPrice_12.setString("1526145");
set_field(noLegs_1_1_0, LegBenchmarkPrice_12, LegBenchmarkCurveData_12);
      set_field(noLegs_1_1_0, FIX::LegBenchmarkPriceType{1100919158}, LegBenchmarkCurveData_12);
      all_values.push_back(LegBenchmarkCurveData_12);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_0_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_37;
        set_field(noLegStipulations_1_0_2_0, FIX::LegStipulationType{"STRING_1030907760"}, LegStipulations_NoLegStipulations_37);
        set_field(noLegStipulations_1_0_2_0, FIX::LegStipulationValue{"STRING_801194198"}, LegStipulations_NoLegStipulations_37);
        all_values.push_back(LegStipulations_NoLegStipulations_37);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_0.addGroup(noLegStipulations_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_4;
      set_field(noLegs_1_1_1, FIX::LegSettlType{'1'}, InstrmtLegSecListGrp_NoLegs_4);
      set_field(noLegs_1_1_1, FIX::LegSwapType{2}, InstrmtLegSecListGrp_NoLegs_4);
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_4);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_103;
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuer{"DATA_678890808"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuerLen{2123652528}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDesc{"DATA_1169887947"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDescLen{823336392}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegCFICode{"STRING_1831928421"}, InstrumentLeg_103);
      FIX::LegContractMultiplier LegContractMultiplier_103;
      LegContractMultiplier_103.setString("8035803");
set_field(noLegs_1_1_1, LegContractMultiplier_103, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegContractMultiplierUnit{838489728}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_2104894257"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegCountryOfIssue{"COUNTRY_1064161434"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1350764232"}, InstrumentLeg_103);
      FIX::LegCouponRate LegCouponRate_103;
      LegCouponRate_103.setString("41.740000");
set_field(noLegs_1_1_1, LegCouponRate_103, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegCreditRating{"STRING_934403031"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegDatedDate{"LOCALMKTDATE_424313316"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegExerciseStyle{1041125399}, InstrumentLeg_103);
      FIX::LegFactor LegFactor_103;
      LegFactor_103.setString("16329877");
set_field(noLegs_1_1_1, LegFactor_103, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegFlowScheduleType{1366928382}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegInstrRegistry{"STRING_818450564"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_907373817"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegIssueDate{"LOCALMKTDATE_149806808"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegIssuer{"STRING_833679080"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegLocaleOfIssue{"STRING_1302294013"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_262889971"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_986293633"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegMaturityTime{"TZTIMEONLY_255729523"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_103);
      FIX::LegOptionRatio LegOptionRatio_103;
      LegOptionRatio_103.setString("20172013");
set_field(noLegs_1_1_1, LegOptionRatio_103, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegPool{"STRING_1056923721"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegPriceUnitOfMeasure{"STRING_684012214"}, InstrumentLeg_103);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_103;
      LegPriceUnitOfMeasureQty_103.setString("7873678");
set_field(noLegs_1_1_1, LegPriceUnitOfMeasureQty_103, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegProduct{1735814529}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegPutOrCall{660181095}, InstrumentLeg_103);
      FIX::LegRatioQty LegRatioQty_103;
      LegRatioQty_103.setString("19572558");
set_field(noLegs_1_1_1, LegRatioQty_103, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_411667273"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegRepoCollateralSecurityType{"STRING_344625868"}, InstrumentLeg_103);
      FIX::LegRepurchaseRate LegRepurchaseRate_103;
      LegRepurchaseRate_103.setString("25.040000");
set_field(noLegs_1_1_1, LegRepurchaseRate_103, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegRepurchaseTerm{1250157001}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegSecurityDesc{"STRING_302036477"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegSecurityExchange{"EXCHANGE_1677513938"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegSecurityID{"STRING_453437586"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegSecurityIDSource{"STRING_1523580652"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegSecuritySubType{"STRING_464433321"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegSecurityType{"STRING_1706964567"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegSide{'1'}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_888746638"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_103);
      FIX::LegStrikePrice LegStrikePrice_103;
      LegStrikePrice_103.setString("1081913");
set_field(noLegs_1_1_1, LegStrikePrice_103, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegSymbol{"STRING_1419056883"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegSymbolSfx{"STRING_1964912255"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegTimeUnit{"STRING_257998180"}, InstrumentLeg_103);
      set_field(noLegs_1_1_1, FIX::LegUnitOfMeasure{"STRING_105252315"}, InstrumentLeg_103);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_103;
      LegUnitOfMeasureQty_103.setString("11197226");
set_field(noLegs_1_1_1, LegUnitOfMeasureQty_103, InstrumentLeg_103);
      all_values.push_back(InstrumentLeg_103);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_211;
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltID{"STRING_1091545949"}, LegSecAltIDGrp_NoLegSecurityAltID_211);
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1375452144"}, LegSecAltIDGrp_NoLegSecurityAltID_211);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_211);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_212;
        set_field(noLegSecurityAltID_1_1_2_1, FIX::LegSecurityAltID{"STRING_1969735615"}, LegSecAltIDGrp_NoLegSecurityAltID_212);
        set_field(noLegSecurityAltID_1_1_2_1, FIX::LegSecurityAltIDSource{"STRING_961263694"}, LegSecAltIDGrp_NoLegSecurityAltID_212);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_212);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_213;
        set_field(noLegSecurityAltID_1_1_2_2, FIX::LegSecurityAltID{"STRING_284892218"}, LegSecAltIDGrp_NoLegSecurityAltID_213);
        set_field(noLegSecurityAltID_1_1_2_2, FIX::LegSecurityAltIDSource{"STRING_506264181"}, LegSecAltIDGrp_NoLegSecurityAltID_213);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_213);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_13;
      set_field(noLegs_1_1_1, FIX::LegBenchmarkCurveCurrency{"CAN"}, LegBenchmarkCurveData_13);
      set_field(noLegs_1_1_1, FIX::LegBenchmarkCurveName{"STRING_1166445276"}, LegBenchmarkCurveData_13);
      set_field(noLegs_1_1_1, FIX::LegBenchmarkCurvePoint{"STRING_1558403752"}, LegBenchmarkCurveData_13);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_13;
      LegBenchmarkPrice_13.setString("2848903");
set_field(noLegs_1_1_1, LegBenchmarkPrice_13, LegBenchmarkCurveData_13);
      set_field(noLegs_1_1_1, FIX::LegBenchmarkPriceType{1511071144}, LegBenchmarkCurveData_13);
      all_values.push_back(LegBenchmarkCurveData_13);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_38;
        set_field(noLegStipulations_1_1_2_0, FIX::LegStipulationType{"STRING_1535047374"}, LegStipulations_NoLegStipulations_38);
        set_field(noLegStipulations_1_1_2_0, FIX::LegStipulationValue{"STRING_1813107622"}, LegStipulations_NoLegStipulations_38);
        all_values.push_back(LegStipulations_NoLegStipulations_38);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_1_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_39;
        set_field(noLegStipulations_1_1_2_1, FIX::LegStipulationType{"STRING_1701786547"}, LegStipulations_NoLegStipulations_39);
        set_field(noLegStipulations_1_1_2_1, FIX::LegStipulationValue{"STRING_1988484960"}, LegStipulations_NoLegStipulations_39);
        all_values.push_back(LegStipulations_NoLegStipulations_39);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_1.addGroup(noLegStipulations_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLegs noLegs_1_1_2;
      // InstrmtLegSecListGrp.NoLegs
      multiset<string> InstrmtLegSecListGrp_NoLegs_5;
      set_field(noLegs_1_1_2, FIX::LegSettlType{'1'}, InstrmtLegSecListGrp_NoLegs_5);
      set_field(noLegs_1_1_2, FIX::LegSwapType{1}, InstrmtLegSecListGrp_NoLegs_5);
      all_values.push_back(InstrmtLegSecListGrp_NoLegs_5);
      all_compo_names.insert("...NoRelatedSym...NoLegs");

      // InstrumentLeg
      multiset<string> InstrumentLeg_104;
      set_field(noLegs_1_1_2, FIX::EncodedLegIssuer{"DATA_1547965880"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::EncodedLegIssuerLen{613755287}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::EncodedLegSecurityDesc{"DATA_907482858"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::EncodedLegSecurityDescLen{1088551}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegCFICode{"STRING_1671293725"}, InstrumentLeg_104);
      FIX::LegContractMultiplier LegContractMultiplier_104;
      LegContractMultiplier_104.setString("10156742");
set_field(noLegs_1_1_2, LegContractMultiplier_104, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegContractMultiplierUnit{1420145434}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_1488722333"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegCountryOfIssue{"COUNTRY_1273672411"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1525397749"}, InstrumentLeg_104);
      FIX::LegCouponRate LegCouponRate_104;
      LegCouponRate_104.setString("13.060000");
set_field(noLegs_1_1_2, LegCouponRate_104, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegCreditRating{"STRING_1794560562"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegCurrency{"GBP"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegDatedDate{"LOCALMKTDATE_1616812529"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegExerciseStyle{1430723745}, InstrumentLeg_104);
      FIX::LegFactor LegFactor_104;
      LegFactor_104.setString("21213056");
set_field(noLegs_1_1_2, LegFactor_104, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegFlowScheduleType{2123076711}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegInstrRegistry{"STRING_1031871670"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1994528768"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegIssueDate{"LOCALMKTDATE_1142038339"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegIssuer{"STRING_442791774"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegLocaleOfIssue{"STRING_131935493"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_505625836"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_467064383"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegMaturityTime{"TZTIMEONLY_1666982867"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_104);
      FIX::LegOptionRatio LegOptionRatio_104;
      LegOptionRatio_104.setString("213672");
set_field(noLegs_1_1_2, LegOptionRatio_104, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegPool{"STRING_1507984180"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegPriceUnitOfMeasure{"STRING_1360454436"}, InstrumentLeg_104);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_104;
      LegPriceUnitOfMeasureQty_104.setString("401035");
set_field(noLegs_1_1_2, LegPriceUnitOfMeasureQty_104, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegProduct{908466412}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegPutOrCall{1974209723}, InstrumentLeg_104);
      FIX::LegRatioQty LegRatioQty_104;
      LegRatioQty_104.setString("9475863");
set_field(noLegs_1_1_2, LegRatioQty_104, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_909554963"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegRepoCollateralSecurityType{"STRING_1498019800"}, InstrumentLeg_104);
      FIX::LegRepurchaseRate LegRepurchaseRate_104;
      LegRepurchaseRate_104.setString("5.910000");
set_field(noLegs_1_1_2, LegRepurchaseRate_104, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegRepurchaseTerm{182216749}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegSecurityDesc{"STRING_839258485"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegSecurityExchange{"EXCHANGE_1089449354"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegSecurityID{"STRING_1707614498"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegSecurityIDSource{"STRING_1300219791"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegSecuritySubType{"STRING_736526269"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegSecurityType{"STRING_29590901"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegSide{'9'}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_205855150"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_104);
      FIX::LegStrikePrice LegStrikePrice_104;
      LegStrikePrice_104.setString("1814482");
set_field(noLegs_1_1_2, LegStrikePrice_104, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegSymbol{"STRING_344702668"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegSymbolSfx{"STRING_810016734"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegTimeUnit{"STRING_1323486553"}, InstrumentLeg_104);
      set_field(noLegs_1_1_2, FIX::LegUnitOfMeasure{"STRING_787494443"}, InstrumentLeg_104);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_104;
      LegUnitOfMeasureQty_104.setString("9419522");
set_field(noLegs_1_1_2, LegUnitOfMeasureQty_104, InstrumentLeg_104);
      all_values.push_back(InstrumentLeg_104);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_214;
        set_field(noLegSecurityAltID_1_2_2_0, FIX::LegSecurityAltID{"STRING_1254558826"}, LegSecAltIDGrp_NoLegSecurityAltID_214);
        set_field(noLegSecurityAltID_1_2_2_0, FIX::LegSecurityAltIDSource{"STRING_461451447"}, LegSecAltIDGrp_NoLegSecurityAltID_214);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_214);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_215;
        set_field(noLegSecurityAltID_1_2_2_1, FIX::LegSecurityAltID{"STRING_2000362199"}, LegSecAltIDGrp_NoLegSecurityAltID_215);
        set_field(noLegSecurityAltID_1_2_2_1, FIX::LegSecurityAltIDSource{"STRING_1275926108"}, LegSecAltIDGrp_NoLegSecurityAltID_215);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_215);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_216;
        set_field(noLegSecurityAltID_1_2_2_2, FIX::LegSecurityAltID{"STRING_1969435627"}, LegSecAltIDGrp_NoLegSecurityAltID_216);
        set_field(noLegSecurityAltID_1_2_2_2, FIX::LegSecurityAltIDSource{"STRING_1213332987"}, LegSecAltIDGrp_NoLegSecurityAltID_216);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_216);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_2.addGroup(noLegSecurityAltID_1_2_2_2);
      }
      // LegBenchmarkCurveData
      multiset<string> LegBenchmarkCurveData_14;
      set_field(noLegs_1_1_2, FIX::LegBenchmarkCurveCurrency{"CHF"}, LegBenchmarkCurveData_14);
      set_field(noLegs_1_1_2, FIX::LegBenchmarkCurveName{"STRING_1040059062"}, LegBenchmarkCurveData_14);
      set_field(noLegs_1_1_2, FIX::LegBenchmarkCurvePoint{"STRING_116132323"}, LegBenchmarkCurveData_14);
      FIX::LegBenchmarkPrice LegBenchmarkPrice_14;
      LegBenchmarkPrice_14.setString("16399733");
set_field(noLegs_1_1_2, LegBenchmarkPrice_14, LegBenchmarkCurveData_14);
      set_field(noLegs_1_1_2, FIX::LegBenchmarkPriceType{390595214}, LegBenchmarkCurveData_14);
      all_values.push_back(LegBenchmarkCurveData_14);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegStipulations
      // Group LegStipulations.NoLegStipulations
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_0;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_40;
        set_field(noLegStipulations_1_2_2_0, FIX::LegStipulationType{"STRING_1822190103"}, LegStipulations_NoLegStipulations_40);
        set_field(noLegStipulations_1_2_2_0, FIX::LegStipulationValue{"STRING_1229853700"}, LegStipulations_NoLegStipulations_40);
        all_values.push_back(LegStipulations_NoLegStipulations_40);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_1;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_41;
        set_field(noLegStipulations_1_2_2_1, FIX::LegStipulationType{"STRING_1021358621"}, LegStipulations_NoLegStipulations_41);
        set_field(noLegStipulations_1_2_2_1, FIX::LegStipulationValue{"STRING_1382320953"}, LegStipulations_NoLegStipulations_41);
        all_values.push_back(LegStipulations_NoLegStipulations_41);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoLegs::NoLegStipulations noLegStipulations_1_2_2_2;
        // LegStipulations.NoLegStipulations
        multiset<string> LegStipulations_NoLegStipulations_42;
        set_field(noLegStipulations_1_2_2_2, FIX::LegStipulationType{"STRING_382589843"}, LegStipulations_NoLegStipulations_42);
        set_field(noLegStipulations_1_2_2_2, FIX::LegStipulationValue{"STRING_1757884890"}, LegStipulations_NoLegStipulations_42);
        all_values.push_back(LegStipulations_NoLegStipulations_42);
        all_compo_names.insert("...NoRelatedSym...NoLegs...NoLegStipulations");

        noLegs_1_1_2.addGroup(noLegStipulations_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_2);
    }
    // Instrument
    multiset<string> Instrument_70;
    FIX::AttachmentPoint AttachmentPoint_70;
    AttachmentPoint_70.setString("18.540000");
set_field(noRelatedSym_0_1, AttachmentPoint_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1371739437"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CPProgram{99}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_724742852"}, Instrument_70);
    FIX::CapPrice CapPrice_70;
    CapPrice_70.setString("1872274");
set_field(noRelatedSym_0_1, CapPrice_70, Instrument_70);
    FIX::ContractMultiplier ContractMultiplier_70;
    ContractMultiplier_70.setString("21451882");
set_field(noRelatedSym_0_1, ContractMultiplier_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{1}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_997244138"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_1321191159"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1856939964"}, Instrument_70);
    FIX::CouponRate CouponRate_70;
    CouponRate_70.setString("63.660000");
set_field(noRelatedSym_0_1, CouponRate_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_1002819900"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_964015142"}, Instrument_70);
    FIX::DetachmentPoint DetachmentPoint_70;
    DetachmentPoint_70.setString("41.650000");
set_field(noRelatedSym_0_1, DetachmentPoint_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_855698451"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{92457602}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_75116144"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{2069031438}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{1}, Instrument_70);
    FIX::Factor Factor_70;
    Factor_70.setString("8055345");
set_field(noRelatedSym_0_1, Factor_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{true}, Instrument_70);
    FIX::FloorPrice FloorPrice_70;
    FloorPrice_70.setString("2980242");
set_field(noRelatedSym_0_1, FloorPrice_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{2}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_1456528803"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'2'}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_434572119"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_330403776"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1355051649"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ListMethod{0}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_2088288667"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_619479856"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_41417752"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_1904545060"}, Instrument_70);
    FIX::MinPriceIncrement MinPriceIncrement_70;
    MinPriceIncrement_70.setString("13442227");
set_field(noRelatedSym_0_1, MinPriceIncrement_70, Instrument_70);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_70;
    MinPriceIncrementAmount_70.setString("2286451");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{1902249666}, Instrument_70);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_70;
    NotionalPercentageOutstanding_70.setString("45.810000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'1'}, Instrument_70);
    FIX::OptPayoutAmount OptPayoutAmount_70;
    OptPayoutAmount_70.setString("10759571");
set_field(noRelatedSym_0_1, OptPayoutAmount_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{3}, Instrument_70);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_70;
    OriginalNotionalPercentageOutstanding_70.setString("20.120000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_2078777078"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{939656039}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_786991882"}, Instrument_70);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_70;
    PriceUnitOfMeasureQty_70.setString("10321136");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Product{5}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_708539672"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{0}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_3933208"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_1670146525"}, Instrument_70);
    FIX::RepurchaseRate RepurchaseRate_70;
    RepurchaseRate_70.setString("67.420000");
set_field(noRelatedSym_0_1, RepurchaseRate_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{301957449}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_FR"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_1126781897"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_274688145"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_1309437063"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_1457185673"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_E"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_1397990692"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_BOX"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SR"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'C'}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_1445958711"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_249178285"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"CHF"}, Instrument_70);
    FIX::StrikeMultiplier StrikeMultiplier_70;
    StrikeMultiplier_70.setString("14750675");
set_field(noRelatedSym_0_1, StrikeMultiplier_70, Instrument_70);
    FIX::StrikePrice StrikePrice_70;
    StrikePrice_70.setString("19857753");
set_field(noRelatedSym_0_1, StrikePrice_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{1}, Instrument_70);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_70;
    StrikePriceBoundaryPrecision_70.setString("59.440000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{4}, Instrument_70);
    FIX::StrikeValue StrikeValue_70;
    StrikeValue_70.setString("4799565");
set_field(noRelatedSym_0_1, StrikeValue_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_1615952122"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_WI"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_Yr"}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{4}, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_lbs"}, Instrument_70);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_70;
    UnitOfMeasureQty_70.setString("18051874");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_70, Instrument_70);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_70);
    all_values.push_back(Instrument_70);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_146;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_146);
      FIX::ComplexEventPrice ComplexEventPrice_146;
      ComplexEventPrice_146.setString("11202414");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_146, ComplexEvents_NoComplexEvents_146);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_146);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_146;
      ComplexEventPriceBoundaryPrecision_146.setString("87.720000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_146, ComplexEvents_NoComplexEvents_146);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_146);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_146);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_146;
      ComplexOptPayoutAmount_146.setString("19119244");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_146, ComplexEvents_NoComplexEvents_146);
      all_values.push_back(ComplexEvents_NoComplexEvents_146);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_305;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(10, 29, 41, 19, 1, 2012)}, ComplexEventDates_NoComplexEventDates_305);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 38, 43, 0, 8, 2000)}, ComplexEventDates_NoComplexEventDates_305);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_305);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_620;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 45, 12)}, ComplexEventTimes_NoComplexEventTimes_620);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 56, 37)}, ComplexEventTimes_NoComplexEventTimes_620);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_620);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_306;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 28, 35, 13, 11, 2017)}, ComplexEventDates_NoComplexEventDates_306);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 3, 8, 10, 7, 2006)}, ComplexEventDates_NoComplexEventDates_306);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_306);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_621;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 23, 55)}, ComplexEventTimes_NoComplexEventTimes_621);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 54, 20)}, ComplexEventTimes_NoComplexEventTimes_621);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_621);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_622;
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 57, 8)}, ComplexEventTimes_NoComplexEventTimes_622);
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 4, 17)}, ComplexEventTimes_NoComplexEventTimes_622);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_622);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_623;
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 45, 14)}, ComplexEventTimes_NoComplexEventTimes_623);
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 7, 30)}, ComplexEventTimes_NoComplexEventTimes_623);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_623);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_307;
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 30, 51, 9, 8, 2006)}, ComplexEventDates_NoComplexEventDates_307);
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 51, 25, 11, 11, 2001)}, ComplexEventDates_NoComplexEventDates_307);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_307);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_624;
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 32, 1)}, ComplexEventTimes_NoComplexEventTimes_624);
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 58, 54)}, ComplexEventTimes_NoComplexEventTimes_624);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_624);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_625;
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 31, 2)}, ComplexEventTimes_NoComplexEventTimes_625);
          set_field(noComplexEventTimes_1_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 9, 50)}, ComplexEventTimes_NoComplexEventTimes_625);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_625);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_1);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_147;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_147);
      FIX::ComplexEventPrice ComplexEventPrice_147;
      ComplexEventPrice_147.setString("19626919");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_147, ComplexEvents_NoComplexEvents_147);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_147);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_147;
      ComplexEventPriceBoundaryPrecision_147.setString("27.490000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_147, ComplexEvents_NoComplexEvents_147);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_147);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_147);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_147;
      ComplexOptPayoutAmount_147.setString("2716229");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_147, ComplexEvents_NoComplexEvents_147);
      all_values.push_back(ComplexEvents_NoComplexEvents_147);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_308;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 23, 44, 19, 7, 2013)}, ComplexEventDates_NoComplexEventDates_308);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 51, 22, 24, 1, 2006)}, ComplexEventDates_NoComplexEventDates_308);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_308);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_626;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 25, 50)}, ComplexEventTimes_NoComplexEventTimes_626);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 51, 59)}, ComplexEventTimes_NoComplexEventTimes_626);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_626);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_627;
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 12, 23)}, ComplexEventTimes_NoComplexEventTimes_627);
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 0, 21)}, ComplexEventTimes_NoComplexEventTimes_627);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_627);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_628;
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 44, 49)}, ComplexEventTimes_NoComplexEventTimes_628);
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 8, 1)}, ComplexEventTimes_NoComplexEventTimes_628);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_628);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_148;
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_148);
      FIX::ComplexEventPrice ComplexEventPrice_148;
      ComplexEventPrice_148.setString("19835794");
set_field(noComplexEvents_1_1_2, ComplexEventPrice_148, ComplexEvents_NoComplexEvents_148);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_148);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_148;
      ComplexEventPriceBoundaryPrecision_148.setString("34.170000");
set_field(noComplexEvents_1_1_2, ComplexEventPriceBoundaryPrecision_148, ComplexEvents_NoComplexEvents_148);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_148);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_148);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_148;
      ComplexOptPayoutAmount_148.setString("11137321");
set_field(noComplexEvents_1_1_2, ComplexOptPayoutAmount_148, ComplexEvents_NoComplexEvents_148);
      all_values.push_back(ComplexEvents_NoComplexEvents_148);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_309;
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 15, 16, 7, 11, 2003)}, ComplexEventDates_NoComplexEventDates_309);
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 19, 32, 17, 12, 2012)}, ComplexEventDates_NoComplexEventDates_309);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_309);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_629;
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 23, 5)}, ComplexEventTimes_NoComplexEventTimes_629);
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 5, 27)}, ComplexEventTimes_NoComplexEventTimes_629);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_629);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_630;
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 42, 20)}, ComplexEventTimes_NoComplexEventTimes_630);
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 12, 49)}, ComplexEventTimes_NoComplexEventTimes_630);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_630);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_631;
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 4, 25)}, ComplexEventTimes_NoComplexEventTimes_631);
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 32, 17)}, ComplexEventTimes_NoComplexEventTimes_631);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_631);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_143;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_2108736051"}, EvntGrp_NoEvents_143);
      FIX::EventPx EventPx_143;
      EventPx_143.setString("1022273");
set_field(noEvents_1_1_0, EventPx_143, EvntGrp_NoEvents_143);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_914572865"}, EvntGrp_NoEvents_143);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(5, 43, 10, 11, 11, 2015)}, EvntGrp_NoEvents_143);
      set_field(noEvents_1_1_0, FIX::EventType{11}, EvntGrp_NoEvents_143);
      all_values.push_back(EvntGrp_NoEvents_143);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_134;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_1845495680"}, InstrumentParties_NoInstrumentParties_134);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_134);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{1712003223}, InstrumentParties_NoInstrumentParties_134);
      all_values.push_back(InstrumentParties_NoInstrumentParties_134);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_554316964"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{412475595}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_274);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_1662719793"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{1419658565}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_275);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_226680079"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{1883833222}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_276);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_135;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_2044559174"}, InstrumentParties_NoInstrumentParties_135);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_135);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{1833819798}, InstrumentParties_NoInstrumentParties_135);
      all_values.push_back(InstrumentParties_NoInstrumentParties_135);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_1250026308"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{1846929732}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_277);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278;
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubID{"STRING_1212272583"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubIDType{1402697525}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_278);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_139;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_1173524986"}, SecAltIDGrp_NoSecurityAltID_139);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_1504924906"}, SecAltIDGrp_NoSecurityAltID_139);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_139);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_140;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_839710737"}, SecurityXML_140);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{237167672}, SecurityXML_140);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_1018798303"}, SecurityXML_140);
    all_values.push_back(SecurityXML_140);
    all_compo_names.insert("...NoRelatedSym..");

    // InstrumentExtension
    multiset<string> InstrumentExtension_11;
    set_field(noRelatedSym_0_1, FIX::DeliveryForm{2}, InstrumentExtension_11);
    FIX::PctAtRisk PctAtRisk_11;
    PctAtRisk_11.setString("86.620000");
set_field(noRelatedSym_0_1, PctAtRisk_11, InstrumentExtension_11);
    all_values.push_back(InstrumentExtension_11);
    all_compo_names.insert("...NoRelatedSym.");

    // AttrbGrp
    // Group AttrbGrp.NoInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoInstrAttrib noInstrAttrib_1_1_0;
      // AttrbGrp.NoInstrAttrib
      multiset<string> AttrbGrp_NoInstrAttrib_20;
      set_field(noInstrAttrib_1_1_0, FIX::InstrAttribType{2}, AttrbGrp_NoInstrAttrib_20);
      set_field(noInstrAttrib_1_1_0, FIX::InstrAttribValue{"STRING_666561529"}, AttrbGrp_NoInstrAttrib_20);
      all_values.push_back(AttrbGrp_NoInstrAttrib_20);
      all_compo_names.insert("...NoRelatedSym....NoInstrAttrib");

      noRelatedSym_0_1.addGroup(noInstrAttrib_1_1_0);
    }
    // SecurityTradingRules
    // BaseTradingRules
    multiset<string> BaseTradingRules_8;
    set_field(noRelatedSym_0_1, FIX::ExpirationCycle{2}, BaseTradingRules_8);
    set_field(noRelatedSym_0_1, FIX::ImpliedMarketIndicator{3}, BaseTradingRules_8);
    FIX::MaxPriceVariation MaxPriceVariation_8;
    MaxPriceVariation_8.setString("3645735");
set_field(noRelatedSym_0_1, MaxPriceVariation_8, BaseTradingRules_8);
    FIX::MaxTradeVol MaxTradeVol_8;
    MaxTradeVol_8.setString("17390613");
set_field(noRelatedSym_0_1, MaxTradeVol_8, BaseTradingRules_8);
    FIX::MinTradeVol MinTradeVol_8;
    MinTradeVol_8.setString("4552412");
set_field(noRelatedSym_0_1, MinTradeVol_8, BaseTradingRules_8);
    set_field(noRelatedSym_0_1, FIX::MultilegModel{2}, BaseTradingRules_8);
    set_field(noRelatedSym_0_1, FIX::MultilegPriceMethod{0}, BaseTradingRules_8);
    set_field(noRelatedSym_0_1, FIX::PriceType{16}, BaseTradingRules_8);
    FIX::RoundLot RoundLot_8;
    RoundLot_8.setString("19312703");
set_field(noRelatedSym_0_1, RoundLot_8, BaseTradingRules_8);
    set_field(noRelatedSym_0_1, FIX::TradingCurrency{"CHF"}, BaseTradingRules_8);
    all_values.push_back(BaseTradingRules_8);
    all_compo_names.insert("...NoRelatedSym..");

    // LotTypeRules
    // Group LotTypeRules.NoLotTypeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_1_1_0;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_17;
      set_field(noLotTypeRules_1_1_0, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_17);
      FIX::MinLotSize MinLotSize_17;
      MinLotSize_17.setString("8033575");
set_field(noLotTypeRules_1_1_0, MinLotSize_17, LotTypeRules_NoLotTypeRules_17);
      all_values.push_back(LotTypeRules_NoLotTypeRules_17);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_1.addGroup(noLotTypeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoLotTypeRules noLotTypeRules_1_1_1;
      // LotTypeRules.NoLotTypeRules
      multiset<string> LotTypeRules_NoLotTypeRules_18;
      set_field(noLotTypeRules_1_1_1, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_18);
      FIX::MinLotSize MinLotSize_18;
      MinLotSize_18.setString("503443");
set_field(noLotTypeRules_1_1_1, MinLotSize_18, LotTypeRules_NoLotTypeRules_18);
      all_values.push_back(LotTypeRules_NoLotTypeRules_18);
      all_compo_names.insert("...NoRelatedSym.....NoLotTypeRules");

      noRelatedSym_0_1.addGroup(noLotTypeRules_1_1_1);
    }
    // PriceLimits
    multiset<string> PriceLimits_8;
    FIX::HighLimitPrice HighLimitPrice_8;
    HighLimitPrice_8.setString("20533838");
set_field(noRelatedSym_0_1, HighLimitPrice_8, PriceLimits_8);
    FIX::LowLimitPrice LowLimitPrice_8;
    LowLimitPrice_8.setString("10534021");
set_field(noRelatedSym_0_1, LowLimitPrice_8, PriceLimits_8);
    set_field(noRelatedSym_0_1, FIX::PriceLimitType{0}, PriceLimits_8);
    FIX::TradingReferencePrice TradingReferencePrice_8;
    TradingReferencePrice_8.setString("13085977");
set_field(noRelatedSym_0_1, TradingReferencePrice_8, PriceLimits_8);
    all_values.push_back(PriceLimits_8);
    all_compo_names.insert("...NoRelatedSym...");

    // TickRules
    // Group TickRules.NoTickRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_1_1_0;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_14;
      FIX::EndTickPriceRange EndTickPriceRange_14;
      EndTickPriceRange_14.setString("2886582");
set_field(noTickRules_1_1_0, EndTickPriceRange_14, TickRules_NoTickRules_14);
      FIX::StartTickPriceRange StartTickPriceRange_14;
      StartTickPriceRange_14.setString("6660390");
set_field(noTickRules_1_1_0, StartTickPriceRange_14, TickRules_NoTickRules_14);
      FIX::TickIncrement TickIncrement_14;
      TickIncrement_14.setString("18182507");
set_field(noTickRules_1_1_0, TickIncrement_14, TickRules_NoTickRules_14);
      set_field(noTickRules_1_1_0, FIX::TickRuleType{4}, TickRules_NoTickRules_14);
      all_values.push_back(TickRules_NoTickRules_14);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_1.addGroup(noTickRules_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_1_1_1;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_15;
      FIX::EndTickPriceRange EndTickPriceRange_15;
      EndTickPriceRange_15.setString("16848373");
set_field(noTickRules_1_1_1, EndTickPriceRange_15, TickRules_NoTickRules_15);
      FIX::StartTickPriceRange StartTickPriceRange_15;
      StartTickPriceRange_15.setString("21252104");
set_field(noTickRules_1_1_1, StartTickPriceRange_15, TickRules_NoTickRules_15);
      FIX::TickIncrement TickIncrement_15;
      TickIncrement_15.setString("18642446");
set_field(noTickRules_1_1_1, TickIncrement_15, TickRules_NoTickRules_15);
      set_field(noTickRules_1_1_1, FIX::TickRuleType{1}, TickRules_NoTickRules_15);
      all_values.push_back(TickRules_NoTickRules_15);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_1.addGroup(noTickRules_1_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTickRules noTickRules_1_1_2;
      // TickRules.NoTickRules
      multiset<string> TickRules_NoTickRules_16;
      FIX::EndTickPriceRange EndTickPriceRange_16;
      EndTickPriceRange_16.setString("9685914");
set_field(noTickRules_1_1_2, EndTickPriceRange_16, TickRules_NoTickRules_16);
      FIX::StartTickPriceRange StartTickPriceRange_16;
      StartTickPriceRange_16.setString("3833224");
set_field(noTickRules_1_1_2, StartTickPriceRange_16, TickRules_NoTickRules_16);
      FIX::TickIncrement TickIncrement_16;
      TickIncrement_16.setString("4421891");
set_field(noTickRules_1_1_2, TickIncrement_16, TickRules_NoTickRules_16);
      set_field(noTickRules_1_1_2, FIX::TickRuleType{3}, TickRules_NoTickRules_16);
      all_values.push_back(TickRules_NoTickRules_16);
      all_compo_names.insert("...NoRelatedSym.....NoTickRules");

      noRelatedSym_0_1.addGroup(noTickRules_1_1_2);
    }
    // NestedInstrumentAttribute
    // Group NestedInstrumentAttribute.NoNestedInstrAttrib
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_0;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_12;
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribType{33766902}, NestedInstrumentAttribute_NoNestedInstrAttrib_12);
      set_field(noNestedInstrAttrib_1_1_0, FIX::NestedInstrAttribValue{"STRING_167070704"}, NestedInstrumentAttribute_NoNestedInstrAttrib_12);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_12);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoNestedInstrAttrib noNestedInstrAttrib_1_1_1;
      // NestedInstrumentAttribute.NoNestedInstrAttrib
      multiset<string> NestedInstrumentAttribute_NoNestedInstrAttrib_13;
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribType{1016446572}, NestedInstrumentAttribute_NoNestedInstrAttrib_13);
      set_field(noNestedInstrAttrib_1_1_1, FIX::NestedInstrAttribValue{"STRING_179661577"}, NestedInstrumentAttribute_NoNestedInstrAttrib_13);
      all_values.push_back(NestedInstrumentAttribute_NoNestedInstrAttrib_13);
      all_compo_names.insert("...NoRelatedSym....NoNestedInstrAttrib");

      noRelatedSym_0_1.addGroup(noNestedInstrAttrib_1_1_1);
    }
    // TradingSessionRulesGrp
    // Group TradingSessionRulesGrp.NoTradingSessionRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_0;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_13;
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_13);
      set_field(noTradingSessionRules_1_1_0, FIX::TradingSessionSubID{"STRING_4"}, TradingSessionRulesGrp_NoTradingSessionRules_13);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_13);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_29;
        set_field(noExecInstRules_1_0_2_0, FIX::ExecInstValue{'3'}, ExecInstRules_NoExecInstRules_29);
        all_values.push_back(ExecInstRules_NoExecInstRules_29);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_0_2_1;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_30;
        set_field(noExecInstRules_1_0_2_1, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_30);
        all_values.push_back(ExecInstRules_NoExecInstRules_30);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_0.addGroup(noExecInstRules_1_0_2_1);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_28;
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_28);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MDFeedType{"STRING_1110704285"}, MarketDataFeedTypes_NoMDFeedTypes_28);
        set_field(noMDFeedTypes_1_0_2_0, FIX::MarketDepth{690958634}, MarketDataFeedTypes_NoMDFeedTypes_28);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_28);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_29;
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_29);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MDFeedType{"STRING_225837571"}, MarketDataFeedTypes_NoMDFeedTypes_29);
        set_field(noMDFeedTypes_1_0_2_1, FIX::MarketDepth{1999556405}, MarketDataFeedTypes_NoMDFeedTypes_29);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_29);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_0_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_30;
        set_field(noMDFeedTypes_1_0_2_2, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_30);
        set_field(noMDFeedTypes_1_0_2_2, FIX::MDFeedType{"STRING_514495843"}, MarketDataFeedTypes_NoMDFeedTypes_30);
        set_field(noMDFeedTypes_1_0_2_2, FIX::MarketDepth{518111785}, MarketDataFeedTypes_NoMDFeedTypes_30);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_30);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_0.addGroup(noMDFeedTypes_1_0_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_30;
        set_field(noMatchRules_1_0_2_0, FIX::MatchAlgorithm{"STRING_1040321787"}, MatchRules_NoMatchRules_30);
        set_field(noMatchRules_1_0_2_0, FIX::MatchType{"STRING_8"}, MatchRules_NoMatchRules_30);
        all_values.push_back(MatchRules_NoMatchRules_30);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_1;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_31;
        set_field(noMatchRules_1_0_2_1, FIX::MatchAlgorithm{"STRING_1207277834"}, MatchRules_NoMatchRules_31);
        set_field(noMatchRules_1_0_2_1, FIX::MatchType{"STRING_5"}, MatchRules_NoMatchRules_31);
        all_values.push_back(MatchRules_NoMatchRules_31);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_0_2_2;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_32;
        set_field(noMatchRules_1_0_2_2, FIX::MatchAlgorithm{"STRING_1496662020"}, MatchRules_NoMatchRules_32);
        set_field(noMatchRules_1_0_2_2, FIX::MatchType{"STRING_7"}, MatchRules_NoMatchRules_32);
        all_values.push_back(MatchRules_NoMatchRules_32);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_0.addGroup(noMatchRules_1_0_2_2);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_27;
        set_field(noOrdTypeRules_1_0_2_0, FIX::OrdType{'5'}, OrdTypeRules_NoOrdTypeRules_27);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_27);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_0_2_1;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_28;
        set_field(noOrdTypeRules_1_0_2_1, FIX::OrdType{'F'}, OrdTypeRules_NoOrdTypeRules_28);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_28);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_0.addGroup(noOrdTypeRules_1_0_2_1);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_32;
        set_field(noTimeInForceRules_1_0_2_0, FIX::TimeInForce{'5'}, TimeInForceRules_NoTimeInForceRules_32);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_32);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_1;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_33;
        set_field(noTimeInForceRules_1_0_2_1, FIX::TimeInForce{'4'}, TimeInForceRules_NoTimeInForceRules_33);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_33);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_0_2_2;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_34;
        set_field(noTimeInForceRules_1_0_2_2, FIX::TimeInForce{'9'}, TimeInForceRules_NoTimeInForceRules_34);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_34);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_0.addGroup(noTimeInForceRules_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules noTradingSessionRules_1_1_1;
      // TradingSessionRulesGrp.NoTradingSessionRules
      multiset<string> TradingSessionRulesGrp_NoTradingSessionRules_14;
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionID{"STRING_5"}, TradingSessionRulesGrp_NoTradingSessionRules_14);
      set_field(noTradingSessionRules_1_1_1, FIX::TradingSessionSubID{"STRING_3"}, TradingSessionRulesGrp_NoTradingSessionRules_14);
      all_values.push_back(TradingSessionRulesGrp_NoTradingSessionRules_14);
      all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules");

      // TradingSessionRules
      // ExecInstRules
      // Group ExecInstRules.NoExecInstRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoExecInstRules noExecInstRules_1_1_2_0;
        // ExecInstRules.NoExecInstRules
        multiset<string> ExecInstRules_NoExecInstRules_31;
        set_field(noExecInstRules_1_1_2_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_31);
        all_values.push_back(ExecInstRules_NoExecInstRules_31);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoExecInstRules");

        noTradingSessionRules_1_1_1.addGroup(noExecInstRules_1_1_2_0);
      }
      // MarketDataFeedTypes
      // Group MarketDataFeedTypes.NoMDFeedTypes
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_0;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_31;
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDBookType{3}, MarketDataFeedTypes_NoMDFeedTypes_31);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MDFeedType{"STRING_662887148"}, MarketDataFeedTypes_NoMDFeedTypes_31);
        set_field(noMDFeedTypes_1_1_2_0, FIX::MarketDepth{1708832536}, MarketDataFeedTypes_NoMDFeedTypes_31);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_31);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_1;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_32;
        set_field(noMDFeedTypes_1_1_2_1, FIX::MDBookType{2}, MarketDataFeedTypes_NoMDFeedTypes_32);
        set_field(noMDFeedTypes_1_1_2_1, FIX::MDFeedType{"STRING_1773591434"}, MarketDataFeedTypes_NoMDFeedTypes_32);
        set_field(noMDFeedTypes_1_1_2_1, FIX::MarketDepth{252307523}, MarketDataFeedTypes_NoMDFeedTypes_32);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_32);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMDFeedTypes noMDFeedTypes_1_1_2_2;
        // MarketDataFeedTypes.NoMDFeedTypes
        multiset<string> MarketDataFeedTypes_NoMDFeedTypes_33;
        set_field(noMDFeedTypes_1_1_2_2, FIX::MDBookType{1}, MarketDataFeedTypes_NoMDFeedTypes_33);
        set_field(noMDFeedTypes_1_1_2_2, FIX::MDFeedType{"STRING_1999429005"}, MarketDataFeedTypes_NoMDFeedTypes_33);
        set_field(noMDFeedTypes_1_1_2_2, FIX::MarketDepth{104380280}, MarketDataFeedTypes_NoMDFeedTypes_33);
        all_values.push_back(MarketDataFeedTypes_NoMDFeedTypes_33);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMDFeedTypes");

        noTradingSessionRules_1_1_1.addGroup(noMDFeedTypes_1_1_2_2);
      }
      // MatchRules
      // Group MatchRules.NoMatchRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoMatchRules noMatchRules_1_1_2_0;
        // MatchRules.NoMatchRules
        multiset<string> MatchRules_NoMatchRules_33;
        set_field(noMatchRules_1_1_2_0, FIX::MatchAlgorithm{"STRING_366441200"}, MatchRules_NoMatchRules_33);
        set_field(noMatchRules_1_1_2_0, FIX::MatchType{"STRING_A2"}, MatchRules_NoMatchRules_33);
        all_values.push_back(MatchRules_NoMatchRules_33);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoMatchRules");

        noTradingSessionRules_1_1_1.addGroup(noMatchRules_1_1_2_0);
      }
      // OrdTypeRules
      // Group OrdTypeRules.NoOrdTypeRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoOrdTypeRules noOrdTypeRules_1_1_2_0;
        // OrdTypeRules.NoOrdTypeRules
        multiset<string> OrdTypeRules_NoOrdTypeRules_29;
        set_field(noOrdTypeRules_1_1_2_0, FIX::OrdType{'C'}, OrdTypeRules_NoOrdTypeRules_29);
        all_values.push_back(OrdTypeRules_NoOrdTypeRules_29);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoOrdTypeRules");

        noTradingSessionRules_1_1_1.addGroup(noOrdTypeRules_1_1_2_0);
      }
      // TimeInForceRules
      // Group TimeInForceRules.NoTimeInForceRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoTradingSessionRules::NoTimeInForceRules noTimeInForceRules_1_1_2_0;
        // TimeInForceRules.NoTimeInForceRules
        multiset<string> TimeInForceRules_NoTimeInForceRules_35;
        set_field(noTimeInForceRules_1_1_2_0, FIX::TimeInForce{'8'}, TimeInForceRules_NoTimeInForceRules_35);
        all_values.push_back(TimeInForceRules_NoTimeInForceRules_35);
        all_compo_names.insert("...NoRelatedSym....NoTradingSessionRules....NoTimeInForceRules");

        noTradingSessionRules_1_1_1.addGroup(noTimeInForceRules_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noTradingSessionRules_1_1_1);
    }
    // SpreadOrBenchmarkCurveData
    multiset<string> SpreadOrBenchmarkCurveData_30;
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurveCurrency{"EUR"}, SpreadOrBenchmarkCurveData_30);
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurveName{"STRING_Treasury"}, SpreadOrBenchmarkCurveData_30);
    set_field(noRelatedSym_0_1, FIX::BenchmarkCurvePoint{"STRING_1156767321"}, SpreadOrBenchmarkCurveData_30);
    FIX::BenchmarkPrice BenchmarkPrice_30;
    BenchmarkPrice_30.setString("19659871");
set_field(noRelatedSym_0_1, BenchmarkPrice_30, SpreadOrBenchmarkCurveData_30);
    set_field(noRelatedSym_0_1, FIX::BenchmarkPriceType{1454199137}, SpreadOrBenchmarkCurveData_30);
    set_field(noRelatedSym_0_1, FIX::BenchmarkSecurityID{"STRING_897584958"}, SpreadOrBenchmarkCurveData_30);
    set_field(noRelatedSym_0_1, FIX::BenchmarkSecurityIDSource{"STRING_1791121587"}, SpreadOrBenchmarkCurveData_30);
    FIX::Spread Spread_30;
    Spread_30.setString("13614849");
set_field(noRelatedSym_0_1, Spread_30, SpreadOrBenchmarkCurveData_30);
    all_values.push_back(SpreadOrBenchmarkCurveData_30);
    all_compo_names.insert("...NoRelatedSym.");

    // Stipulations
    // Group Stipulations.NoStipulations
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStipulations noStipulations_1_1_0;
      // Stipulations.NoStipulations
      multiset<string> Stipulations_NoStipulations_49;
      set_field(noStipulations_1_1_0, FIX::StipulationType{"STRING_PROTECT"}, Stipulations_NoStipulations_49);
      set_field(noStipulations_1_1_0, FIX::StipulationValue{"STRING_156074639"}, Stipulations_NoStipulations_49);
      all_values.push_back(Stipulations_NoStipulations_49);
      all_compo_names.insert("...NoRelatedSym...NoStipulations");

      noRelatedSym_0_1.addGroup(noStipulations_1_1_0);
    }
    // StrikeRules
    // Group StrikeRules.NoStrikeRules
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_1_1_0;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_12;
      FIX::EndStrikePxRange EndStrikePxRange_12;
      EndStrikePxRange_12.setString("13984448");
set_field(noStrikeRules_1_1_0, EndStrikePxRange_12, StrikeRules_NoStrikeRules_12);
      FIX::StartStrikePxRange StartStrikePxRange_12;
      StartStrikePxRange_12.setString("10798487");
set_field(noStrikeRules_1_1_0, StartStrikePxRange_12, StrikeRules_NoStrikeRules_12);
      set_field(noStrikeRules_1_1_0, FIX::StrikeExerciseStyle{795246247}, StrikeRules_NoStrikeRules_12);
      FIX::StrikeIncrement StrikeIncrement_12;
      StrikeIncrement_12.setString("20613319");
set_field(noStrikeRules_1_1_0, StrikeIncrement_12, StrikeRules_NoStrikeRules_12);
      set_field(noStrikeRules_1_1_0, FIX::StrikeRuleID{"STRING_641197675"}, StrikeRules_NoStrikeRules_12);
      all_values.push_back(StrikeRules_NoStrikeRules_12);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_0_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_19;
        set_field(noMaturityRules_1_0_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1687439778"}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrement{2037424191}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::MaturityRuleID{"STRING_997885478"}, MaturityRules_NoMaturityRules_19);
        set_field(noMaturityRules_1_0_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_1286193679"}, MaturityRules_NoMaturityRules_19);
        all_values.push_back(MaturityRules_NoMaturityRules_19);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_0.addGroup(noMaturityRules_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noStrikeRules_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules noStrikeRules_1_1_1;
      // StrikeRules.NoStrikeRules
      multiset<string> StrikeRules_NoStrikeRules_13;
      FIX::EndStrikePxRange EndStrikePxRange_13;
      EndStrikePxRange_13.setString("19058263");
set_field(noStrikeRules_1_1_1, EndStrikePxRange_13, StrikeRules_NoStrikeRules_13);
      FIX::StartStrikePxRange StartStrikePxRange_13;
      StartStrikePxRange_13.setString("16203775");
set_field(noStrikeRules_1_1_1, StartStrikePxRange_13, StrikeRules_NoStrikeRules_13);
      set_field(noStrikeRules_1_1_1, FIX::StrikeExerciseStyle{1764514243}, StrikeRules_NoStrikeRules_13);
      FIX::StrikeIncrement StrikeIncrement_13;
      StrikeIncrement_13.setString("11651056");
set_field(noStrikeRules_1_1_1, StrikeIncrement_13, StrikeRules_NoStrikeRules_13);
      set_field(noStrikeRules_1_1_1, FIX::StrikeRuleID{"STRING_150851430"}, StrikeRules_NoStrikeRules_13);
      all_values.push_back(StrikeRules_NoStrikeRules_13);
      all_compo_names.insert("...NoRelatedSym...NoStrikeRules");

      // MaturityRules
      // Group MaturityRules.NoMaturityRules
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_0;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_20;
        set_field(noMaturityRules_1_1_2_0, FIX::EndMaturityMonthYear{"MONTHYEAR_1181467761"}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearFormat{2}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrement{869129381}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityMonthYearIncrementUnits{2}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_1_2_0, FIX::MaturityRuleID{"STRING_2143974458"}, MaturityRules_NoMaturityRules_20);
        set_field(noMaturityRules_1_1_2_0, FIX::StartMaturityMonthYear{"MONTHYEAR_175844870"}, MaturityRules_NoMaturityRules_20);
        all_values.push_back(MaturityRules_NoMaturityRules_20);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_1;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_21;
        set_field(noMaturityRules_1_1_2_1, FIX::EndMaturityMonthYear{"MONTHYEAR_1088336392"}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearFormat{0}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearIncrement{1537329813}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityMonthYearIncrementUnits{3}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_1_2_1, FIX::MaturityRuleID{"STRING_1436046380"}, MaturityRules_NoMaturityRules_21);
        set_field(noMaturityRules_1_1_2_1, FIX::StartMaturityMonthYear{"MONTHYEAR_1693404452"}, MaturityRules_NoMaturityRules_21);
        all_values.push_back(MaturityRules_NoMaturityRules_21);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoStrikeRules::NoMaturityRules noMaturityRules_1_1_2_2;
        // MaturityRules.NoMaturityRules
        multiset<string> MaturityRules_NoMaturityRules_22;
        set_field(noMaturityRules_1_1_2_2, FIX::EndMaturityMonthYear{"MONTHYEAR_1660564878"}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_2, FIX::MaturityMonthYearFormat{1}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_2, FIX::MaturityMonthYearIncrement{625769590}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_2, FIX::MaturityMonthYearIncrementUnits{1}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_2, FIX::MaturityRuleID{"STRING_600855920"}, MaturityRules_NoMaturityRules_22);
        set_field(noMaturityRules_1_1_2_2, FIX::StartMaturityMonthYear{"MONTHYEAR_1266967265"}, MaturityRules_NoMaturityRules_22);
        all_values.push_back(MaturityRules_NoMaturityRules_22);
        all_compo_names.insert("...NoRelatedSym...NoStrikeRules...NoMaturityRules");

        noStrikeRules_1_1_1.addGroup(noMaturityRules_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noStrikeRules_1_1_1);
    }
    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_126;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_140812051"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{12988815}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_250739418"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{1680197186}, UnderlyingInstrument_126);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_126;
      UnderlyingAdjustedQuantity_126.setString("10108742");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_126, UnderlyingInstrument_126);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_126;
      UnderlyingAllocationPercent_126.setString("30.980000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_126, UnderlyingInstrument_126);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_126;
      UnderlyingAttachmentPoint_126.setString("98.740000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_483768189"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_1153963693"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_456161901"}, UnderlyingInstrument_126);
      FIX::UnderlyingCapValue UnderlyingCapValue_126;
      UnderlyingCapValue_126.setString("6346196");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_126, UnderlyingInstrument_126);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_126;
      UnderlyingCashAmount_126.setString("3091090");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_126);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_126;
      UnderlyingContractMultiplier_126.setString("8126069");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{1178238420}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1828381096"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_809097767"}, UnderlyingInstrument_126);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_126;
      UnderlyingCouponRate_126.setString("32.900000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_769233840"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_126);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_126;
      UnderlyingCurrentValue_126.setString("13649357");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_126, UnderlyingInstrument_126);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_126;
      UnderlyingDetachmentPoint_126.setString("28.960000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_126, UnderlyingInstrument_126);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_126;
      UnderlyingDirtyPrice_126.setString("2898502");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_126, UnderlyingInstrument_126);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_126;
      UnderlyingEndPrice_126.setString("8780169");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_126, UnderlyingInstrument_126);
      FIX::UnderlyingEndValue UnderlyingEndValue_126;
      UnderlyingEndValue_126.setString("4247968");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{915619850}, UnderlyingInstrument_126);
      FIX::UnderlyingFXRate UnderlyingFXRate_126;
      UnderlyingFXRate_126.setString("11863444");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_126);
      FIX::UnderlyingFactor UnderlyingFactor_126;
      UnderlyingFactor_126.setString("351034");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{1547143333}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_1166464796"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_48092283"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_1797882751"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_699178334"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1058966576"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1187332201"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2137718208"}, UnderlyingInstrument_126);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_126;
      UnderlyingNotionalPercentageOutstanding_126.setString("47.650000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_126);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_126;
      UnderlyingOriginalNotionalPercentageOutstanding_126.setString("64.610000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_29870737"}, UnderlyingInstrument_126);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_126;
      UnderlyingPriceUnitOfMeasureQty_126.setString("5029212");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{2084026123}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{842477694}, UnderlyingInstrument_126);
      FIX::UnderlyingPx UnderlyingPx_126;
      UnderlyingPx_126.setString("16811597");
set_field(noUnderlyings_1_1_0, UnderlyingPx_126, UnderlyingInstrument_126);
      FIX::UnderlyingQty UnderlyingQty_126;
      UnderlyingQty_126.setString("17649235");
set_field(noUnderlyings_1_1_0, UnderlyingQty_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1651575462"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_887759349"}, UnderlyingInstrument_126);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_126;
      UnderlyingRepurchaseRate_126.setString("37.630000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{2100801978}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_1631688805"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_1751609514"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1838591227"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_1921539064"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_482142847"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_115904403"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_689675266"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_1668487305"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_1141557148"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_126);
      FIX::UnderlyingStartValue UnderlyingStartValue_126;
      UnderlyingStartValue_126.setString("10681469");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_160538296"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_126);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_126;
      UnderlyingStrikePrice_126.setString("8597166");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_126, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_1831837593"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_1905878295"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_849951191"}, UnderlyingInstrument_126);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1227088711"}, UnderlyingInstrument_126);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_126;
      UnderlyingUnitOfMeasureQty_126.setString("20996905");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_126, UnderlyingInstrument_126);
      all_values.push_back(UnderlyingInstrument_126);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_263;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1256959448"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_455128181"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_263);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_264;
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1232890128"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2099437142"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_264);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_254;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_850330052"}, UnderlyingStipulations_NoUnderlyingStips_254);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_1603528956"}, UnderlyingStipulations_NoUnderlyingStips_254);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_254);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_255;
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipType{"STRING_876563589"}, UnderlyingStipulations_NoUnderlyingStips_255);
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipValue{"STRING_1237003815"}, UnderlyingStipulations_NoUnderlyingStips_255);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_255);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_256;
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipType{"STRING_1556847287"}, UnderlyingStipulations_NoUnderlyingStips_256);
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipValue{"STRING_360768746"}, UnderlyingStipulations_NoUnderlyingStips_256);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_256);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_260;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1247954866"}, UndlyInstrumentParties_NoUndlyInstrumentParties_260);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_260);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{1323272529}, UndlyInstrumentParties_NoUndlyInstrumentParties_260);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_260);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_824499429"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{844276187}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_521);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_357932770"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1549278163}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_522);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_261;
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1912423177"}, UndlyInstrumentParties_NoUndlyInstrumentParties_261);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_261);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyRole{174665532}, UndlyInstrumentParties_NoUndlyInstrumentParties_261);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_261);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1378187697"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{2006503126}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_523);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_241880271"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{80655241}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_524);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_262;
        set_field(noUndlyInstrumentParties_1_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1086108189"}, UndlyInstrumentParties_NoUndlyInstrumentParties_262);
        set_field(noUndlyInstrumentParties_1_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_262);
        set_field(noUndlyInstrumentParties_1_0_2_2, FIX::UnderlyingInstrumentPartyRole{1377002894}, UndlyInstrumentParties_NoUndlyInstrumentParties_262);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_262);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525;
          set_field(noUndlyInstrumentPartySubIDs_1_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_649215346"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);
          set_field(noUndlyInstrumentPartySubIDs_1_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{462409374}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_525);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_0_2_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_127;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_147537483"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{638019586}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1312739426"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{1751066440}, UnderlyingInstrument_127);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_127;
      UnderlyingAdjustedQuantity_127.setString("15145831");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_127, UnderlyingInstrument_127);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_127;
      UnderlyingAllocationPercent_127.setString("95.940000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_127, UnderlyingInstrument_127);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_127;
      UnderlyingAttachmentPoint_127.setString("0.790000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_1875351922"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_1243389276"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_260901297"}, UnderlyingInstrument_127);
      FIX::UnderlyingCapValue UnderlyingCapValue_127;
      UnderlyingCapValue_127.setString("20101760");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_127, UnderlyingInstrument_127);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_127;
      UnderlyingCashAmount_127.setString("4191781");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_127);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_127;
      UnderlyingContractMultiplier_127.setString("6871918");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{1263454344}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1982693336"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_88986382"}, UnderlyingInstrument_127);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_127;
      UnderlyingCouponRate_127.setString("38.740000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_353680755"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_127);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_127;
      UnderlyingCurrentValue_127.setString("17318684");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_127, UnderlyingInstrument_127);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_127;
      UnderlyingDetachmentPoint_127.setString("13.930000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_127, UnderlyingInstrument_127);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_127;
      UnderlyingDirtyPrice_127.setString("17537597");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_127, UnderlyingInstrument_127);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_127;
      UnderlyingEndPrice_127.setString("18125236");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_127, UnderlyingInstrument_127);
      FIX::UnderlyingEndValue UnderlyingEndValue_127;
      UnderlyingEndValue_127.setString("12087795");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{1947846934}, UnderlyingInstrument_127);
      FIX::UnderlyingFXRate UnderlyingFXRate_127;
      UnderlyingFXRate_127.setString("10420429");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_127);
      FIX::UnderlyingFactor UnderlyingFactor_127;
      UnderlyingFactor_127.setString("4495786");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{1504452314}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_1551901054"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1087598219"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_669708092"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1155483846"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_454697747"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1071967686"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_168430277"}, UnderlyingInstrument_127);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_127;
      UnderlyingNotionalPercentageOutstanding_127.setString("60.210000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_127);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_127;
      UnderlyingOriginalNotionalPercentageOutstanding_127.setString("15.740000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_45258459"}, UnderlyingInstrument_127);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_127;
      UnderlyingPriceUnitOfMeasureQty_127.setString("5870514");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{2054092141}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{732450326}, UnderlyingInstrument_127);
      FIX::UnderlyingPx UnderlyingPx_127;
      UnderlyingPx_127.setString("18505058");
set_field(noUnderlyings_1_1_1, UnderlyingPx_127, UnderlyingInstrument_127);
      FIX::UnderlyingQty UnderlyingQty_127;
      UnderlyingQty_127.setString("18893018");
set_field(noUnderlyings_1_1_1, UnderlyingQty_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_821436708"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_731416042"}, UnderlyingInstrument_127);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_127;
      UnderlyingRepurchaseRate_127.setString("89.360000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{1085088623}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_95811892"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_1827367389"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1207760016"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_1849571660"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1492407434"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_269055950"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_1649934946"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_386966726"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_1673419521"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_127);
      FIX::UnderlyingStartValue UnderlyingStartValue_127;
      UnderlyingStartValue_127.setString("18914190");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1077836928"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_127);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_127;
      UnderlyingStrikePrice_127.setString("858371");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_127, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_1494325897"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_1485611171"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_254267404"}, UnderlyingInstrument_127);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1676891918"}, UnderlyingInstrument_127);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_127;
      UnderlyingUnitOfMeasureQty_127.setString("16534844");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_127, UnderlyingInstrument_127);
      all_values.push_back(UnderlyingInstrument_127);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_265;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1722150377"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_93052309"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_265);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_257;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_307117055"}, UnderlyingStipulations_NoUnderlyingStips_257);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_1943558126"}, UnderlyingStipulations_NoUnderlyingStips_257);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_257);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_258;
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipType{"STRING_332025653"}, UnderlyingStipulations_NoUnderlyingStips_258);
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipValue{"STRING_1128553764"}, UnderlyingStipulations_NoUnderlyingStips_258);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_258);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_259;
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipType{"STRING_527490520"}, UnderlyingStipulations_NoUnderlyingStips_259);
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipValue{"STRING_427524589"}, UnderlyingStipulations_NoUnderlyingStips_259);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_259);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_263;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_623302412"}, UndlyInstrumentParties_NoUndlyInstrumentParties_263);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_263);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{1273918756}, UndlyInstrumentParties_NoUndlyInstrumentParties_263);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_263);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1599815765"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1542974706}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_526);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_128;
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuer{"DATA_1975325371"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuerLen{1986782491}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1068910580"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDescLen{1927355302}, UnderlyingInstrument_128);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_128;
      UnderlyingAdjustedQuantity_128.setString("17307178");
set_field(noUnderlyings_1_1_2, UnderlyingAdjustedQuantity_128, UnderlyingInstrument_128);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_128;
      UnderlyingAllocationPercent_128.setString("75.080000");
set_field(noUnderlyings_1_1_2, UnderlyingAllocationPercent_128, UnderlyingInstrument_128);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_128;
      UnderlyingAttachmentPoint_128.setString("98.040000");
set_field(noUnderlyings_1_1_2, UnderlyingAttachmentPoint_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCFICode{"STRING_2144361367"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPProgram{"STRING_85100986"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPRegType{"STRING_166342053"}, UnderlyingInstrument_128);
      FIX::UnderlyingCapValue UnderlyingCapValue_128;
      UnderlyingCapValue_128.setString("14824888");
set_field(noUnderlyings_1_1_2, UnderlyingCapValue_128, UnderlyingInstrument_128);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_128;
      UnderlyingCashAmount_128.setString("3393683");
set_field(noUnderlyings_1_1_2, UnderlyingCashAmount_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_128);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_128;
      UnderlyingContractMultiplier_128.setString("9884897");
set_field(noUnderlyings_1_1_2, UnderlyingContractMultiplier_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingContractMultiplierUnit{1022967369}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1417900701"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1081542037"}, UnderlyingInstrument_128);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_128;
      UnderlyingCouponRate_128.setString("48.400000");
set_field(noUnderlyings_1_1_2, UnderlyingCouponRate_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCreditRating{"STRING_1725017757"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_128);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_128;
      UnderlyingCurrentValue_128.setString("7060878");
set_field(noUnderlyings_1_1_2, UnderlyingCurrentValue_128, UnderlyingInstrument_128);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_128;
      UnderlyingDetachmentPoint_128.setString("70.360000");
set_field(noUnderlyings_1_1_2, UnderlyingDetachmentPoint_128, UnderlyingInstrument_128);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_128;
      UnderlyingDirtyPrice_128.setString("2252414");
set_field(noUnderlyings_1_1_2, UnderlyingDirtyPrice_128, UnderlyingInstrument_128);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_128;
      UnderlyingEndPrice_128.setString("7722466");
set_field(noUnderlyings_1_1_2, UnderlyingEndPrice_128, UnderlyingInstrument_128);
      FIX::UnderlyingEndValue UnderlyingEndValue_128;
      UnderlyingEndValue_128.setString("20284094");
set_field(noUnderlyings_1_1_2, UnderlyingEndValue_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingExerciseStyle{332649765}, UnderlyingInstrument_128);
      FIX::UnderlyingFXRate UnderlyingFXRate_128;
      UnderlyingFXRate_128.setString("20461653");
set_field(noUnderlyings_1_1_2, UnderlyingFXRate_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_128);
      FIX::UnderlyingFactor UnderlyingFactor_128;
      UnderlyingFactor_128.setString("19324655");
set_field(noUnderlyings_1_1_2, UnderlyingFactor_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFlowScheduleType{1441656427}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingInstrRegistry{"STRING_34157949"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1771764373"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssuer{"STRING_363083359"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1961513251"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1354998608"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_362347219"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_633529408"}, UnderlyingInstrument_128);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_128;
      UnderlyingNotionalPercentageOutstanding_128.setString("63.280000");
set_field(noUnderlyings_1_1_2, UnderlyingNotionalPercentageOutstanding_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_128);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_128;
      UnderlyingOriginalNotionalPercentageOutstanding_128.setString("14.610000");
set_field(noUnderlyings_1_1_2, UnderlyingOriginalNotionalPercentageOutstanding_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_686881570"}, UnderlyingInstrument_128);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_128;
      UnderlyingPriceUnitOfMeasureQty_128.setString("7868165");
set_field(noUnderlyings_1_1_2, UnderlyingPriceUnitOfMeasureQty_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingProduct{495621785}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPutOrCall{1675371298}, UnderlyingInstrument_128);
      FIX::UnderlyingPx UnderlyingPx_128;
      UnderlyingPx_128.setString("18097839");
set_field(noUnderlyings_1_1_2, UnderlyingPx_128, UnderlyingInstrument_128);
      FIX::UnderlyingQty UnderlyingQty_128;
      UnderlyingQty_128.setString("19135224");
set_field(noUnderlyings_1_1_2, UnderlyingQty_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_609429688"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1275475157"}, UnderlyingInstrument_128);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_128;
      UnderlyingRepurchaseRate_128.setString("65.960000");
set_field(noUnderlyings_1_1_2, UnderlyingRepurchaseRate_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepurchaseTerm{1487046203}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRestructuringType{"STRING_1073192003"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityDesc{"STRING_49660821"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_744669591"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityID{"STRING_1298433438"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityIDSource{"STRING_821907433"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecuritySubType{"STRING_625595392"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityType{"STRING_1631083203"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSeniority{"STRING_720589154"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlMethod{"STRING_831911617"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_128);
      FIX::UnderlyingStartValue UnderlyingStartValue_128;
      UnderlyingStartValue_128.setString("147619");
set_field(noUnderlyings_1_1_2, UnderlyingStartValue_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_866069566"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_128);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_128;
      UnderlyingStrikePrice_128.setString("6800991");
set_field(noUnderlyings_1_1_2, UnderlyingStrikePrice_128, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbol{"STRING_247860772"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbolSfx{"STRING_740192511"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingTimeUnit{"STRING_1313628578"}, UnderlyingInstrument_128);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_1599737100"}, UnderlyingInstrument_128);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_128;
      UnderlyingUnitOfMeasureQty_128.setString("11876407");
set_field(noUnderlyings_1_1_2, UnderlyingUnitOfMeasureQty_128, UnderlyingInstrument_128);
      all_values.push_back(UnderlyingInstrument_128);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_266;
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_139135022"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1974457312"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_266);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_260;
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipType{"STRING_1814506321"}, UnderlyingStipulations_NoUnderlyingStips_260);
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipValue{"STRING_1636757629"}, UnderlyingStipulations_NoUnderlyingStips_260);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_260);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_261;
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipType{"STRING_227677016"}, UnderlyingStipulations_NoUnderlyingStips_261);
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipValue{"STRING_276452361"}, UnderlyingStipulations_NoUnderlyingStips_261);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_261);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_264;
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1718733612"}, UndlyInstrumentParties_NoUndlyInstrumentParties_264);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_264);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyRole{1837941142}, UndlyInstrumentParties_NoUndlyInstrumentParties_264);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_264);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_360684508"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{988890932}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_527);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_265;
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_442818218"}, UndlyInstrumentParties_NoUndlyInstrumentParties_265);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_265);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyRole{472490487}, UndlyInstrumentParties_NoUndlyInstrumentParties_265);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_265);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1818191517"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1888555573}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_528);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1178169305"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{536777436}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_529);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      {
        FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_266;
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_781417737"}, UndlyInstrumentParties_NoUndlyInstrumentParties_266);
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_266);
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyRole{1216876606}, UndlyInstrumentParties_NoUndlyInstrumentParties_266);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_266);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530;
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_148723460"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{383021536}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_530);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::SecurityList::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531;
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_481531961"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{1336364177}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_531);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    // YieldData
    multiset<string> YieldData_25;
    FIX::Yield Yield_25;
    Yield_25.setString("79.270000");
set_field(noRelatedSym_0_1, Yield_25, YieldData_25);
    set_field(noRelatedSym_0_1, FIX::YieldCalcDate{"LOCALMKTDATE_620666983"}, YieldData_25);
    set_field(noRelatedSym_0_1, FIX::YieldRedemptionDate{"LOCALMKTDATE_1163337841"}, YieldData_25);
    FIX::YieldRedemptionPrice YieldRedemptionPrice_25;
    YieldRedemptionPrice_25.setString("8106761");
set_field(noRelatedSym_0_1, YieldRedemptionPrice_25, YieldData_25);
    set_field(noRelatedSym_0_1, FIX::YieldRedemptionPriceType{287689656}, YieldData_25);
    set_field(noRelatedSym_0_1, FIX::YieldType{"STRING_INVERSEFLOATER"}, YieldData_25);
    all_values.push_back(YieldData_25);
    all_compo_names.insert("...NoRelatedSym.");

    msg.addGroup(noRelatedSym_0_1);
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
