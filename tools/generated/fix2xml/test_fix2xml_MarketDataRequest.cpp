#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDataRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataRequest_0;
  set_field(msg, FIX::AggregatedBook{false}, MarketDataRequest_0);
  set_field(msg, FIX::ApplQueueAction{3}, MarketDataRequest_0);
  set_field(msg, FIX::ApplQueueMax{1859029759}, MarketDataRequest_0);
  set_field(msg, FIX::MDImplicitDelete{true}, MarketDataRequest_0);
  set_field(msg, FIX::MDQuoteType{3}, MarketDataRequest_0);
  set_field(msg, FIX::MDReqID{"STRING_293734419"}, MarketDataRequest_0);
  set_field(msg, FIX::MDUpdateType{0}, MarketDataRequest_0);
  set_field(msg, FIX::MarketDepth{1873061680}, MarketDataRequest_0);
  set_field(msg, FIX::OpenCloseSettlFlag{"MULTIPLECHARVALUE_2"}, MarketDataRequest_0);
  set_field(msg, FIX::Scope{"MULTIPLECHARVALUE_2"}, MarketDataRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, MarketDataRequest_0);
  all_values.push_back(MarketDataRequest_0);

  all_compo_names.insert("MarketDataRequest");

  // InstrmtMDReqGrp
  // Group InstrmtMDReqGrp.NoRelatedSym
  {
    FIX50SP2::MarketDataRequest::NoRelatedSym noRelatedSym_0_0;
    // InstrmtMDReqGrp.NoRelatedSym
    multiset<string> InstrmtMDReqGrp_NoRelatedSym_0;
    set_field(noRelatedSym_0_0, FIX::Currency{"EUR"}, InstrmtMDReqGrp_NoRelatedSym_0);
    FIX::MDEntrySize MDEntrySize_1;
    MDEntrySize_1.setString("5398648");
set_field(noRelatedSym_0_0, MDEntrySize_1, InstrmtMDReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::MDStreamID{"STRING_2030372362"}, InstrmtMDReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteType{1}, InstrmtMDReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlDate{"LOCALMKTDATE_1861984016"}, InstrmtMDReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::SettlType{"STRING_8"}, InstrmtMDReqGrp_NoRelatedSym_0);
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_43;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_827423301"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{154014764}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1738672016"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{693534201}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_453316811"}, InstrumentLeg_43);
      FIX::LegContractMultiplier LegContractMultiplier_43;
      LegContractMultiplier_43.setString("6779709");
set_field(noLegs_0_1_0, LegContractMultiplier_43, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{889846233}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1334892845"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1300171975"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1642792039"}, InstrumentLeg_43);
      FIX::LegCouponRate LegCouponRate_43;
      LegCouponRate_43.setString("52.210000");
set_field(noLegs_0_1_0, LegCouponRate_43, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_1142819438"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1986152390"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{577599992}, InstrumentLeg_43);
      FIX::LegFactor LegFactor_43;
      LegFactor_43.setString("3863857");
set_field(noLegs_0_1_0, LegFactor_43, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{1268824312}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_303178024"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1488479074"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1813761128"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_2047105069"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1225226136"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1982886837"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1082567869"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1765091027"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_43);
      FIX::LegOptionRatio LegOptionRatio_43;
      LegOptionRatio_43.setString("6321349");
set_field(noLegs_0_1_0, LegOptionRatio_43, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_1479591395"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1535501232"}, InstrumentLeg_43);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_43;
      LegPriceUnitOfMeasureQty_43.setString("18614177");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_43, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegProduct{159531048}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1689515996}, InstrumentLeg_43);
      FIX::LegRatioQty LegRatioQty_43;
      LegRatioQty_43.setString("14526061");
set_field(noLegs_0_1_0, LegRatioQty_43, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_853065250"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_2142832807"}, InstrumentLeg_43);
      FIX::LegRepurchaseRate LegRepurchaseRate_43;
      LegRepurchaseRate_43.setString("70.830000");
set_field(noLegs_0_1_0, LegRepurchaseRate_43, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{1742911483}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_1330242005"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_1283265410"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1238219875"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_1711347226"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_278601200"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1676621854"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_117269942"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_43);
      FIX::LegStrikePrice LegStrikePrice_43;
      LegStrikePrice_43.setString("13860942");
set_field(noLegs_0_1_0, LegStrikePrice_43, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_409916223"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_1531379737"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_1052371735"}, InstrumentLeg_43);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_309537644"}, InstrumentLeg_43);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_43;
      LegUnitOfMeasureQty_43.setString("6091222");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_43, InstrumentLeg_43);
      all_values.push_back(InstrumentLeg_43);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_91;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_1392105513"}, LegSecAltIDGrp_NoLegSecurityAltID_91);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_226729604"}, LegSecAltIDGrp_NoLegSecurityAltID_91);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_91);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_92;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_606066827"}, LegSecAltIDGrp_NoLegSecurityAltID_92);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_2024240499"}, LegSecAltIDGrp_NoLegSecurityAltID_92);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_92);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_93;
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltID{"STRING_1706321000"}, LegSecAltIDGrp_NoLegSecurityAltID_93);
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltIDSource{"STRING_2141568059"}, LegSecAltIDGrp_NoLegSecurityAltID_93);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_93);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_44;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_1738174639"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{1865852048}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_1683600407"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{1043297146}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_571433650"}, InstrumentLeg_44);
      FIX::LegContractMultiplier LegContractMultiplier_44;
      LegContractMultiplier_44.setString("16789495");
set_field(noLegs_0_1_1, LegContractMultiplier_44, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{1026390581}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_166861486"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_861707924"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_162172343"}, InstrumentLeg_44);
      FIX::LegCouponRate LegCouponRate_44;
      LegCouponRate_44.setString("13.610000");
set_field(noLegs_0_1_1, LegCouponRate_44, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_425571502"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_82086414"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{558043485}, InstrumentLeg_44);
      FIX::LegFactor LegFactor_44;
      LegFactor_44.setString("10409577");
set_field(noLegs_0_1_1, LegFactor_44, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{124987077}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_1944137740"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1450873988"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_1656366815"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_849025827"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_1760411633"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_118005392"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1736800751"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1005033498"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'3'}, InstrumentLeg_44);
      FIX::LegOptionRatio LegOptionRatio_44;
      LegOptionRatio_44.setString("1953839");
set_field(noLegs_0_1_1, LegOptionRatio_44, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_881790350"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_2051055997"}, InstrumentLeg_44);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_44;
      LegPriceUnitOfMeasureQty_44.setString("1894683");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_44, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegProduct{472481341}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{1769424397}, InstrumentLeg_44);
      FIX::LegRatioQty LegRatioQty_44;
      LegRatioQty_44.setString("18730687");
set_field(noLegs_0_1_1, LegRatioQty_44, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1515778487"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_193374400"}, InstrumentLeg_44);
      FIX::LegRepurchaseRate LegRepurchaseRate_44;
      LegRepurchaseRate_44.setString("46.680000");
set_field(noLegs_0_1_1, LegRepurchaseRate_44, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{394685421}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_360235886"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_118758944"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_556857764"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_1765317247"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_544330447"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_997631308"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegSide{'5'}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_626416861"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_44);
      FIX::LegStrikePrice LegStrikePrice_44;
      LegStrikePrice_44.setString("7514039");
set_field(noLegs_0_1_1, LegStrikePrice_44, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_1352328885"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_896401272"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_260287105"}, InstrumentLeg_44);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_53871064"}, InstrumentLeg_44);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_44;
      LegUnitOfMeasureQty_44.setString("5093292");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_44, InstrumentLeg_44);
      all_values.push_back(InstrumentLeg_44);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_94;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1790671815"}, LegSecAltIDGrp_NoLegSecurityAltID_94);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1514362755"}, LegSecAltIDGrp_NoLegSecurityAltID_94);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_94);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_95;
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltID{"STRING_723027495"}, LegSecAltIDGrp_NoLegSecurityAltID_95);
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltIDSource{"STRING_1986055746"}, LegSecAltIDGrp_NoLegSecurityAltID_95);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_95);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_45;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_248669457"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{626599844}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_28040440"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{721150798}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_248540593"}, InstrumentLeg_45);
      FIX::LegContractMultiplier LegContractMultiplier_45;
      LegContractMultiplier_45.setString("19011091");
set_field(noLegs_0_1_2, LegContractMultiplier_45, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{89445638}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_441914993"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_1158160210"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_484131059"}, InstrumentLeg_45);
      FIX::LegCouponRate LegCouponRate_45;
      LegCouponRate_45.setString("8.790000");
set_field(noLegs_0_1_2, LegCouponRate_45, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_1276919154"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"USD"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_1821249601"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{2038620131}, InstrumentLeg_45);
      FIX::LegFactor LegFactor_45;
      LegFactor_45.setString("9720376");
set_field(noLegs_0_1_2, LegFactor_45, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{300182814}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_1446811277"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_417564928"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_1051586753"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_651656514"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_1313966200"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_1311873858"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_705527579"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_1823295457"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_45);
      FIX::LegOptionRatio LegOptionRatio_45;
      LegOptionRatio_45.setString("3487157");
set_field(noLegs_0_1_2, LegOptionRatio_45, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_1190174564"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_265710203"}, InstrumentLeg_45);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_45;
      LegPriceUnitOfMeasureQty_45.setString("1872878");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_45, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegProduct{1438844022}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{892310047}, InstrumentLeg_45);
      FIX::LegRatioQty LegRatioQty_45;
      LegRatioQty_45.setString("2153282");
set_field(noLegs_0_1_2, LegRatioQty_45, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_12511172"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_1140850641"}, InstrumentLeg_45);
      FIX::LegRepurchaseRate LegRepurchaseRate_45;
      LegRepurchaseRate_45.setString("74.740000");
set_field(noLegs_0_1_2, LegRepurchaseRate_45, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{101956810}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_1582765634"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_1127114036"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_586087869"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_237432866"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_256549542"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_1627076693"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegSide{'6'}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_2077799144"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_45);
      FIX::LegStrikePrice LegStrikePrice_45;
      LegStrikePrice_45.setString("2304983");
set_field(noLegs_0_1_2, LegStrikePrice_45, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_817540805"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_2047019917"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_1282085063"}, InstrumentLeg_45);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_1469197320"}, InstrumentLeg_45);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_45;
      LegUnitOfMeasureQty_45.setString("12135024");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_45, InstrumentLeg_45);
      all_values.push_back(InstrumentLeg_45);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_96;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_27241251"}, LegSecAltIDGrp_NoLegSecurityAltID_96);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_889314278"}, LegSecAltIDGrp_NoLegSecurityAltID_96);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_96);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_97;
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltID{"STRING_2136641630"}, LegSecAltIDGrp_NoLegSecurityAltID_97);
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltIDSource{"STRING_375956997"}, LegSecAltIDGrp_NoLegSecurityAltID_97);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_97);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_29;
    FIX::AttachmentPoint AttachmentPoint_29;
    AttachmentPoint_29.setString("88.420000");
set_field(noRelatedSym_0_0, AttachmentPoint_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_254868186"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::CPProgram{99}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_1370849216"}, Instrument_29);
    FIX::CapPrice CapPrice_29;
    CapPrice_29.setString("11471782");
set_field(noRelatedSym_0_0, CapPrice_29, Instrument_29);
    FIX::ContractMultiplier ContractMultiplier_29;
    ContractMultiplier_29.setString("7785731");
set_field(noRelatedSym_0_0, ContractMultiplier_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{2}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_140545226"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_747526952"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1485317199"}, Instrument_29);
    FIX::CouponRate CouponRate_29;
    CouponRate_29.setString("8.610000");
set_field(noRelatedSym_0_0, CouponRate_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_1874640988"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_2071405069"}, Instrument_29);
    FIX::DetachmentPoint DetachmentPoint_29;
    DetachmentPoint_29.setString("37.270000");
set_field(noRelatedSym_0_0, DetachmentPoint_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_2131190531"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1550998114}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_470677423"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{2061506027}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{1}, Instrument_29);
    FIX::Factor Factor_29;
    Factor_29.setString("21001324");
set_field(noRelatedSym_0_0, Factor_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{false}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_29);
    FIX::FloorPrice FloorPrice_29;
    FloorPrice_29.setString("19996686");
set_field(noRelatedSym_0_0, FloorPrice_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{3}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_1060982120"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1873081027"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1088223371"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1955001780"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1464180368"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1887006975"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_2117107195"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_2027425210"}, Instrument_29);
    FIX::MinPriceIncrement MinPriceIncrement_29;
    MinPriceIncrement_29.setString("11103725");
set_field(noRelatedSym_0_0, MinPriceIncrement_29, Instrument_29);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_29;
    MinPriceIncrementAmount_29.setString("11168017");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{658514689}, Instrument_29);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_29;
    NotionalPercentageOutstanding_29.setString("92.840000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_29);
    FIX::OptPayoutAmount OptPayoutAmount_29;
    OptPayoutAmount_29.setString("14060416");
set_field(noRelatedSym_0_0, OptPayoutAmount_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_29);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_29;
    OriginalNotionalPercentageOutstanding_29.setString("42.200000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1133198982"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{1755487905}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1116905865"}, Instrument_29);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_29;
    PriceUnitOfMeasureQty_29.setString("11590023");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::Product{1}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1030928244"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1069760487"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1175448933"}, Instrument_29);
    FIX::RepurchaseRate RepurchaseRate_29;
    RepurchaseRate_29.setString("48.130000");
set_field(noRelatedSym_0_0, RepurchaseRate_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{921945521}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_586013285"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1987633023"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_180168417"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1674236656"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_J"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_990933377"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_CASH"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SR"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'P'}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_497563378"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_981349107"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_29);
    FIX::StrikeMultiplier StrikeMultiplier_29;
    StrikeMultiplier_29.setString("912124");
set_field(noRelatedSym_0_0, StrikeMultiplier_29, Instrument_29);
    FIX::StrikePrice StrikePrice_29;
    StrikePrice_29.setString("7879476");
set_field(noRelatedSym_0_0, StrikePrice_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_29);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_29;
    StrikePriceBoundaryPrecision_29.setString("66.870000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{1}, Instrument_29);
    FIX::StrikeValue StrikeValue_29;
    StrikeValue_29.setString("1358997");
set_field(noRelatedSym_0_0, StrikeValue_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_1570820987"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Min"}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_Gal"}, Instrument_29);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_29;
    UnitOfMeasureQty_29.setString("12281484");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_29, Instrument_29);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_29);
    all_values.push_back(Instrument_29);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_59;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_59);
      FIX::ComplexEventPrice ComplexEventPrice_59;
      ComplexEventPrice_59.setString("3846714");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_59, ComplexEvents_NoComplexEvents_59);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_59);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_59;
      ComplexEventPriceBoundaryPrecision_59.setString("29.430000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_59, ComplexEvents_NoComplexEvents_59);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_59);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_59);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_59;
      ComplexOptPayoutAmount_59.setString("8659459");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_59, ComplexEvents_NoComplexEvents_59);
      all_values.push_back(ComplexEvents_NoComplexEvents_59);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_121;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(1, 9, 32, 20, 8, 2015)}, ComplexEventDates_NoComplexEventDates_121);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 38, 23, 5, 3, 2013)}, ComplexEventDates_NoComplexEventDates_121);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_121);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_241;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 36, 27)}, ComplexEventTimes_NoComplexEventTimes_241);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 8, 27)}, ComplexEventTimes_NoComplexEventTimes_241);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_241);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_242;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 48, 42)}, ComplexEventTimes_NoComplexEventTimes_242);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 6, 55)}, ComplexEventTimes_NoComplexEventTimes_242);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_242);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_122;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 56, 36, 0, 8, 2004)}, ComplexEventDates_NoComplexEventDates_122);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 6, 12, 7, 1, 2001)}, ComplexEventDates_NoComplexEventDates_122);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_122);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_243;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 5, 48)}, ComplexEventTimes_NoComplexEventTimes_243);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 57, 31)}, ComplexEventTimes_NoComplexEventTimes_243);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_243);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_244;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 20, 0)}, ComplexEventTimes_NoComplexEventTimes_244);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 6, 56)}, ComplexEventTimes_NoComplexEventTimes_244);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_244);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_245;
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 52, 0)}, ComplexEventTimes_NoComplexEventTimes_245);
          set_field(noComplexEventTimes_0_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 20, 31)}, ComplexEventTimes_NoComplexEventTimes_245);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_245);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_123;
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 35, 57, 3, 11, 2006)}, ComplexEventDates_NoComplexEventDates_123);
        set_field(noComplexEventDates_0_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 23, 45, 9, 11, 2000)}, ComplexEventDates_NoComplexEventDates_123);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_123);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_246;
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 16, 47)}, ComplexEventTimes_NoComplexEventTimes_246);
          set_field(noComplexEventTimes_0_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 46, 59)}, ComplexEventTimes_NoComplexEventTimes_246);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_246);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_247;
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 51, 51)}, ComplexEventTimes_NoComplexEventTimes_247);
          set_field(noComplexEventTimes_0_0_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 3, 37)}, ComplexEventTimes_NoComplexEventTimes_247);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_247);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_248;
          set_field(noComplexEventTimes_0_0_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 12, 25)}, ComplexEventTimes_NoComplexEventTimes_248);
          set_field(noComplexEventTimes_0_0_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 43, 53)}, ComplexEventTimes_NoComplexEventTimes_248);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_248);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_2.addGroup(noComplexEventTimes_0_0_2_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_63;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_2136788466"}, EvntGrp_NoEvents_63);
      FIX::EventPx EventPx_63;
      EventPx_63.setString("21397109");
set_field(noEvents_0_1_0, EventPx_63, EvntGrp_NoEvents_63);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_202946080"}, EvntGrp_NoEvents_63);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(0, 36, 8, 14, 6, 2011)}, EvntGrp_NoEvents_63);
      set_field(noEvents_0_1_0, FIX::EventType{10}, EvntGrp_NoEvents_63);
      all_values.push_back(EvntGrp_NoEvents_63);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_55;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1434499653"}, InstrumentParties_NoInstrumentParties_55);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_55);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1554258671}, InstrumentParties_NoInstrumentParties_55);
      all_values.push_back(InstrumentParties_NoInstrumentParties_55);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1875464151"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1305236514}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_110);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_1326002659"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{2107367361}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_111);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112;
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubID{"STRING_319982809"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112);
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubIDType{1878029276}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_112);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_56;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1675304569"}, InstrumentParties_NoInstrumentParties_56);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_56);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{1461867420}, InstrumentParties_NoInstrumentParties_56);
      all_values.push_back(InstrumentParties_NoInstrumentParties_56);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_849765891"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{1907040062}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_113);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_57;
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyID{"STRING_1035911989"}, InstrumentParties_NoInstrumentParties_57);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_57);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyRole{14975229}, InstrumentParties_NoInstrumentParties_57);
      all_values.push_back(InstrumentParties_NoInstrumentParties_57);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114;
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubID{"STRING_675252726"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114);
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubIDType{217921309}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_114);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_59;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_2070370278"}, SecAltIDGrp_NoSecurityAltID_59);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_496023866"}, SecAltIDGrp_NoSecurityAltID_59);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_59);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_60;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_288194108"}, SecAltIDGrp_NoSecurityAltID_60);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_674170996"}, SecAltIDGrp_NoSecurityAltID_60);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_60);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_2;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_61;
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltID{"STRING_223809971"}, SecAltIDGrp_NoSecurityAltID_61);
      set_field(noSecurityAltID_0_1_2, FIX::SecurityAltIDSource{"STRING_1234170836"}, SecAltIDGrp_NoSecurityAltID_61);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_61);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_2);
    }
    // SecurityXML
    multiset<string> SecurityXML_58;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_2111524405"}, SecurityXML_58);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1754390011}, SecurityXML_58);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_521186841"}, SecurityXML_58);
    all_values.push_back(SecurityXML_58);
    all_compo_names.insert("...NoRelatedSym..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_51;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1161165035"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1168722267}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2099492648"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{318917901}, UnderlyingInstrument_51);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_51;
      UnderlyingAdjustedQuantity_51.setString("3472412");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_51, UnderlyingInstrument_51);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_51;
      UnderlyingAllocationPercent_51.setString("63.620000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_51, UnderlyingInstrument_51);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_51;
      UnderlyingAttachmentPoint_51.setString("7.110000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_77786907"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_1587197283"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1190101994"}, UnderlyingInstrument_51);
      FIX::UnderlyingCapValue UnderlyingCapValue_51;
      UnderlyingCapValue_51.setString("15396543");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_51, UnderlyingInstrument_51);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_51;
      UnderlyingCashAmount_51.setString("18675472");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_51);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_51;
      UnderlyingContractMultiplier_51.setString("12992107");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{755975631}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_575409694"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1314185971"}, UnderlyingInstrument_51);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_51;
      UnderlyingCouponRate_51.setString("24.390000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_1250662420"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"JPY"}, UnderlyingInstrument_51);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_51;
      UnderlyingCurrentValue_51.setString("11735490");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_51, UnderlyingInstrument_51);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_51;
      UnderlyingDetachmentPoint_51.setString("11.470000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_51, UnderlyingInstrument_51);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_51;
      UnderlyingDirtyPrice_51.setString("10412947");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_51, UnderlyingInstrument_51);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_51;
      UnderlyingEndPrice_51.setString("18477200");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_51, UnderlyingInstrument_51);
      FIX::UnderlyingEndValue UnderlyingEndValue_51;
      UnderlyingEndValue_51.setString("1044574");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{127981896}, UnderlyingInstrument_51);
      FIX::UnderlyingFXRate UnderlyingFXRate_51;
      UnderlyingFXRate_51.setString("18117608");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_51);
      FIX::UnderlyingFactor UnderlyingFactor_51;
      UnderlyingFactor_51.setString("6491687");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{2035789302}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_872528868"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1817891005"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1987798303"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1191446770"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_17648635"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1899691017"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1830347481"}, UnderlyingInstrument_51);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_51;
      UnderlyingNotionalPercentageOutstanding_51.setString("55.420000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_51);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_51;
      UnderlyingOriginalNotionalPercentageOutstanding_51.setString("58.270000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1635089870"}, UnderlyingInstrument_51);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_51;
      UnderlyingPriceUnitOfMeasureQty_51.setString("10594682");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{765350064}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{786816964}, UnderlyingInstrument_51);
      FIX::UnderlyingPx UnderlyingPx_51;
      UnderlyingPx_51.setString("18154439");
set_field(noUnderlyings_0_1_0, UnderlyingPx_51, UnderlyingInstrument_51);
      FIX::UnderlyingQty UnderlyingQty_51;
      UnderlyingQty_51.setString("13407597");
set_field(noUnderlyings_0_1_0, UnderlyingQty_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2101002935"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1449152717"}, UnderlyingInstrument_51);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_51;
      UnderlyingRepurchaseRate_51.setString("85.310000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1485626568}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_54769669"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_1617487582"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1366274067"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_1096064378"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1317723981"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_1470731537"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_1224046274"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_982001138"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_1182095371"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_51);
      FIX::UnderlyingStartValue UnderlyingStartValue_51;
      UnderlyingStartValue_51.setString("8703067");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_2054624239"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_51);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_51;
      UnderlyingStrikePrice_51.setString("10985873");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_51, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1561271005"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_462828817"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_781451194"}, UnderlyingInstrument_51);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1656706547"}, UnderlyingInstrument_51);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_51;
      UnderlyingUnitOfMeasureQty_51.setString("18022334");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_51, UnderlyingInstrument_51);
      all_values.push_back(UnderlyingInstrument_51);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_108;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1144312769"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_714218116"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_108);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_109;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_272283438"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1931129733"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_109);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_102;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_1613043196"}, UnderlyingStipulations_NoUnderlyingStips_102);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1884649021"}, UnderlyingStipulations_NoUnderlyingStips_102);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_102);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_107;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_2056981727"}, UndlyInstrumentParties_NoUndlyInstrumentParties_107);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_107);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1886100781}, UndlyInstrumentParties_NoUndlyInstrumentParties_107);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_107);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_441582361"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{834681511}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_209);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_697225995"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1912313898}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_210);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_108;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_2058727785"}, UndlyInstrumentParties_NoUndlyInstrumentParties_108);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_108);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{946925621}, UndlyInstrumentParties_NoUndlyInstrumentParties_108);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_108);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_402050278"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{854066213}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_211);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1180597871"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1112671726}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_212);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1952653574"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{594385228}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_213);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_109;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1575500543"}, UndlyInstrumentParties_NoUndlyInstrumentParties_109);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_109);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{103608128}, UndlyInstrumentParties_NoUndlyInstrumentParties_109);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_109);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_93554494"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1247920897}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_214);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_52;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1944468481"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{365837932}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1031566983"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{179163227}, UnderlyingInstrument_52);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_52;
      UnderlyingAdjustedQuantity_52.setString("19788811");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_52, UnderlyingInstrument_52);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_52;
      UnderlyingAllocationPercent_52.setString("23.560000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_52, UnderlyingInstrument_52);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_52;
      UnderlyingAttachmentPoint_52.setString("43.380000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_1888379208"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_1991524297"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_1749111471"}, UnderlyingInstrument_52);
      FIX::UnderlyingCapValue UnderlyingCapValue_52;
      UnderlyingCapValue_52.setString("12678812");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_52, UnderlyingInstrument_52);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_52;
      UnderlyingCashAmount_52.setString("2856230");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_52);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_52;
      UnderlyingContractMultiplier_52.setString("19651072");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{50453261}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_347553472"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1496850702"}, UnderlyingInstrument_52);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_52;
      UnderlyingCouponRate_52.setString("88.820000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_2132012622"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_52);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_52;
      UnderlyingCurrentValue_52.setString("11651268");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_52, UnderlyingInstrument_52);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_52;
      UnderlyingDetachmentPoint_52.setString("90.590000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_52, UnderlyingInstrument_52);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_52;
      UnderlyingDirtyPrice_52.setString("16566150");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_52, UnderlyingInstrument_52);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_52;
      UnderlyingEndPrice_52.setString("17595120");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_52, UnderlyingInstrument_52);
      FIX::UnderlyingEndValue UnderlyingEndValue_52;
      UnderlyingEndValue_52.setString("2921059");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{95752495}, UnderlyingInstrument_52);
      FIX::UnderlyingFXRate UnderlyingFXRate_52;
      UnderlyingFXRate_52.setString("18631202");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_52);
      FIX::UnderlyingFactor UnderlyingFactor_52;
      UnderlyingFactor_52.setString("1893069");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{963557451}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_1319341153"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_555144922"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_1995124434"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1498504380"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_386542403"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_616373142"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1361515070"}, UnderlyingInstrument_52);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_52;
      UnderlyingNotionalPercentageOutstanding_52.setString("79.630000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_52);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_52;
      UnderlyingOriginalNotionalPercentageOutstanding_52.setString("28.940000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1395319185"}, UnderlyingInstrument_52);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_52;
      UnderlyingPriceUnitOfMeasureQty_52.setString("7460368");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{1399452228}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{1212942754}, UnderlyingInstrument_52);
      FIX::UnderlyingPx UnderlyingPx_52;
      UnderlyingPx_52.setString("7964900");
set_field(noUnderlyings_0_1_1, UnderlyingPx_52, UnderlyingInstrument_52);
      FIX::UnderlyingQty UnderlyingQty_52;
      UnderlyingQty_52.setString("17470057");
set_field(noUnderlyings_0_1_1, UnderlyingQty_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_562309809"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1793868946"}, UnderlyingInstrument_52);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_52;
      UnderlyingRepurchaseRate_52.setString("46.740000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{313727142}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_1497830393"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_749177872"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1177816201"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_1006961767"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_361206298"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_1469922156"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_1102714262"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_76842852"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_844794828"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_52);
      FIX::UnderlyingStartValue UnderlyingStartValue_52;
      UnderlyingStartValue_52.setString("10404003");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_16652333"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_52);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_52;
      UnderlyingStrikePrice_52.setString("15151567");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_52, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_86224929"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_1504414232"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_729188136"}, UnderlyingInstrument_52);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_213662892"}, UnderlyingInstrument_52);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_52;
      UnderlyingUnitOfMeasureQty_52.setString("19648280");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_52, UnderlyingInstrument_52);
      all_values.push_back(UnderlyingInstrument_52);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_110;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1608982078"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_563381179"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_110);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_111;
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_944299610"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_674441184"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_111);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_103;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_543821663"}, UnderlyingStipulations_NoUnderlyingStips_103);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_1236750993"}, UnderlyingStipulations_NoUnderlyingStips_103);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_103);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_110;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_127872689"}, UndlyInstrumentParties_NoUndlyInstrumentParties_110);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_110);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{356603286}, UndlyInstrumentParties_NoUndlyInstrumentParties_110);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_110);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_580810689"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1363565053}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_215);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_111;
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1238256859"}, UndlyInstrumentParties_NoUndlyInstrumentParties_111);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_111);
        set_field(noUndlyInstrumentParties_0_1_2_1, FIX::UnderlyingInstrumentPartyRole{318795668}, UndlyInstrumentParties_NoUndlyInstrumentParties_111);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_111);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_748044026"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1610816920}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_216);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217;
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_208016367"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);
          set_field(noUndlyInstrumentPartySubIDs_0_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{764696359}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_217);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_1_1_3_1);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_112;
        set_field(noUndlyInstrumentParties_0_1_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1310499446"}, UndlyInstrumentParties_NoUndlyInstrumentParties_112);
        set_field(noUndlyInstrumentParties_0_1_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_112);
        set_field(noUndlyInstrumentParties_0_1_2_2, FIX::UnderlyingInstrumentPartyRole{132369425}, UndlyInstrumentParties_NoUndlyInstrumentParties_112);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_112);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218;
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_452988041"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{861557561}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_218);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219;
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1610387267"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{270332418}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_219);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_2_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220;
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_406404943"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);
          set_field(noUndlyInstrumentPartySubIDs_0_1_2_3_2, FIX::UnderlyingInstrumentPartySubIDType{1071885697}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_220);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_1_2_3_2);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_53;
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuer{"DATA_833713597"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuerLen{1350704553}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1746326882"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDescLen{46101191}, UnderlyingInstrument_53);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_53;
      UnderlyingAdjustedQuantity_53.setString("18945262");
set_field(noUnderlyings_0_1_2, UnderlyingAdjustedQuantity_53, UnderlyingInstrument_53);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_53;
      UnderlyingAllocationPercent_53.setString("42.270000");
set_field(noUnderlyings_0_1_2, UnderlyingAllocationPercent_53, UnderlyingInstrument_53);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_53;
      UnderlyingAttachmentPoint_53.setString("77.320000");
set_field(noUnderlyings_0_1_2, UnderlyingAttachmentPoint_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCFICode{"STRING_2022398906"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPProgram{"STRING_238588715"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPRegType{"STRING_1408961018"}, UnderlyingInstrument_53);
      FIX::UnderlyingCapValue UnderlyingCapValue_53;
      UnderlyingCapValue_53.setString("7519658");
set_field(noUnderlyings_0_1_2, UnderlyingCapValue_53, UnderlyingInstrument_53);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_53;
      UnderlyingCashAmount_53.setString("8193994");
set_field(noUnderlyings_0_1_2, UnderlyingCashAmount_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_53);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_53;
      UnderlyingContractMultiplier_53.setString("19902226");
set_field(noUnderlyings_0_1_2, UnderlyingContractMultiplier_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingContractMultiplierUnit{722648601}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_943838091"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1157838742"}, UnderlyingInstrument_53);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_53;
      UnderlyingCouponRate_53.setString("26.270000");
set_field(noUnderlyings_0_1_2, UnderlyingCouponRate_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCreditRating{"STRING_407171363"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_53);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_53;
      UnderlyingCurrentValue_53.setString("17176708");
set_field(noUnderlyings_0_1_2, UnderlyingCurrentValue_53, UnderlyingInstrument_53);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_53;
      UnderlyingDetachmentPoint_53.setString("89.180000");
set_field(noUnderlyings_0_1_2, UnderlyingDetachmentPoint_53, UnderlyingInstrument_53);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_53;
      UnderlyingDirtyPrice_53.setString("2202747");
set_field(noUnderlyings_0_1_2, UnderlyingDirtyPrice_53, UnderlyingInstrument_53);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_53;
      UnderlyingEndPrice_53.setString("9669115");
set_field(noUnderlyings_0_1_2, UnderlyingEndPrice_53, UnderlyingInstrument_53);
      FIX::UnderlyingEndValue UnderlyingEndValue_53;
      UnderlyingEndValue_53.setString("7674169");
set_field(noUnderlyings_0_1_2, UnderlyingEndValue_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingExerciseStyle{1081832325}, UnderlyingInstrument_53);
      FIX::UnderlyingFXRate UnderlyingFXRate_53;
      UnderlyingFXRate_53.setString("4298151");
set_field(noUnderlyings_0_1_2, UnderlyingFXRate_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_53);
      FIX::UnderlyingFactor UnderlyingFactor_53;
      UnderlyingFactor_53.setString("14882372");
set_field(noUnderlyings_0_1_2, UnderlyingFactor_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFlowScheduleType{1501700853}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingInstrRegistry{"STRING_1871462975"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_691458173"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssuer{"STRING_1100544087"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1917564166"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_438500742"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1936138315"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_822438250"}, UnderlyingInstrument_53);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_53;
      UnderlyingNotionalPercentageOutstanding_53.setString("60.000000");
set_field(noUnderlyings_0_1_2, UnderlyingNotionalPercentageOutstanding_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingOptAttribute{'2'}, UnderlyingInstrument_53);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_53;
      UnderlyingOriginalNotionalPercentageOutstanding_53.setString("56.200000");
set_field(noUnderlyings_0_1_2, UnderlyingOriginalNotionalPercentageOutstanding_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1065381819"}, UnderlyingInstrument_53);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_53;
      UnderlyingPriceUnitOfMeasureQty_53.setString("8466427");
set_field(noUnderlyings_0_1_2, UnderlyingPriceUnitOfMeasureQty_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingProduct{708958044}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPutOrCall{908120850}, UnderlyingInstrument_53);
      FIX::UnderlyingPx UnderlyingPx_53;
      UnderlyingPx_53.setString("15692913");
set_field(noUnderlyings_0_1_2, UnderlyingPx_53, UnderlyingInstrument_53);
      FIX::UnderlyingQty UnderlyingQty_53;
      UnderlyingQty_53.setString("16527961");
set_field(noUnderlyings_0_1_2, UnderlyingQty_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2065959593"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_892500367"}, UnderlyingInstrument_53);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_53;
      UnderlyingRepurchaseRate_53.setString("74.990000");
set_field(noUnderlyings_0_1_2, UnderlyingRepurchaseRate_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepurchaseTerm{1284331054}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRestructuringType{"STRING_980405706"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityDesc{"STRING_1630154660"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1598759973"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityID{"STRING_1200680470"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityIDSource{"STRING_449582549"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecuritySubType{"STRING_218693285"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityType{"STRING_135029147"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSeniority{"STRING_879397705"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlMethod{"STRING_1256442663"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_53);
      FIX::UnderlyingStartValue UnderlyingStartValue_53;
      UnderlyingStartValue_53.setString("2336149");
set_field(noUnderlyings_0_1_2, UnderlyingStartValue_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_980421990"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_53);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_53;
      UnderlyingStrikePrice_53.setString("7505025");
set_field(noUnderlyings_0_1_2, UnderlyingStrikePrice_53, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbol{"STRING_605741682"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbolSfx{"STRING_1122813665"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingTimeUnit{"STRING_1572940759"}, UnderlyingInstrument_53);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_919157682"}, UnderlyingInstrument_53);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_53;
      UnderlyingUnitOfMeasureQty_53.setString("11500570");
set_field(noUnderlyings_0_1_2, UnderlyingUnitOfMeasureQty_53, UnderlyingInstrument_53);
      all_values.push_back(UnderlyingInstrument_53);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_112;
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_1984539502"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1996699833"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_112);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_113;
        set_field(noUnderlyingSecurityAltID_0_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_218330775"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);
        set_field(noUnderlyingSecurityAltID_0_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_745176704"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_113);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_114;
        set_field(noUnderlyingSecurityAltID_0_2_2_2, FIX::UnderlyingSecurityAltID{"STRING_1418507572"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);
        set_field(noUnderlyingSecurityAltID_0_2_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1871126911"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_114);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_104;
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipType{"STRING_163524291"}, UnderlyingStipulations_NoUnderlyingStips_104);
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipValue{"STRING_1783610762"}, UnderlyingStipulations_NoUnderlyingStips_104);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_104);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_105;
        set_field(noUnderlyingStips_0_2_2_1, FIX::UnderlyingStipType{"STRING_1947983704"}, UnderlyingStipulations_NoUnderlyingStips_105);
        set_field(noUnderlyingStips_0_2_2_1, FIX::UnderlyingStipValue{"STRING_1143929997"}, UnderlyingStipulations_NoUnderlyingStips_105);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_105);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_106;
        set_field(noUnderlyingStips_0_2_2_2, FIX::UnderlyingStipType{"STRING_1266281774"}, UnderlyingStipulations_NoUnderlyingStips_106);
        set_field(noUnderlyingStips_0_2_2_2, FIX::UnderlyingStipValue{"STRING_1399260029"}, UnderlyingStipulations_NoUnderlyingStips_106);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_106);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_113;
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1715864323"}, UndlyInstrumentParties_NoUndlyInstrumentParties_113);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_113);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyRole{332155966}, UndlyInstrumentParties_NoUndlyInstrumentParties_113);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_113);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_726912329"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1955422381}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_221);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_114;
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_681393291"}, UndlyInstrumentParties_NoUndlyInstrumentParties_114);
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_114);
        set_field(noUndlyInstrumentParties_0_2_2_1, FIX::UnderlyingInstrumentPartyRole{2122663322}, UndlyInstrumentParties_NoUndlyInstrumentParties_114);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_114);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222;
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_310353179"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);
          set_field(noUndlyInstrumentPartySubIDs_0_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{580921356}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_222);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_2_1_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_115;
        set_field(noUndlyInstrumentParties_0_2_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_990882306"}, UndlyInstrumentParties_NoUndlyInstrumentParties_115);
        set_field(noUndlyInstrumentParties_0_2_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_115);
        set_field(noUndlyInstrumentParties_0_2_2_2, FIX::UnderlyingInstrumentPartyRole{1500079039}, UndlyInstrumentParties_NoUndlyInstrumentParties_115);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_115);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223;
          set_field(noUndlyInstrumentPartySubIDs_0_2_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1392666670"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);
          set_field(noUndlyInstrumentPartySubIDs_0_2_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1337134893}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_223);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_2_2_3_0);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_2);
    }
    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoRelatedSym noRelatedSym_0_1;
    // InstrmtMDReqGrp.NoRelatedSym
    multiset<string> InstrmtMDReqGrp_NoRelatedSym_1;
    set_field(noRelatedSym_0_1, FIX::Currency{"EUR"}, InstrmtMDReqGrp_NoRelatedSym_1);
    FIX::MDEntrySize MDEntrySize_2;
    MDEntrySize_2.setString("20823115");
set_field(noRelatedSym_0_1, MDEntrySize_2, InstrmtMDReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::MDStreamID{"STRING_1261179462"}, InstrmtMDReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteType{0}, InstrmtMDReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlDate{"LOCALMKTDATE_598480599"}, InstrmtMDReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::SettlType{"STRING_B"}, InstrmtMDReqGrp_NoRelatedSym_1);
    all_values.push_back(InstrmtMDReqGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_46;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_398980655"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{421150103}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_89565949"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{1798240684}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_618276923"}, InstrumentLeg_46);
      FIX::LegContractMultiplier LegContractMultiplier_46;
      LegContractMultiplier_46.setString("18054302");
set_field(noLegs_1_1_0, LegContractMultiplier_46, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{1268710350}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_950432889"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_105725005"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1995622679"}, InstrumentLeg_46);
      FIX::LegCouponRate LegCouponRate_46;
      LegCouponRate_46.setString("16.230000");
set_field(noLegs_1_1_0, LegCouponRate_46, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_787118296"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"CHF"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_655186937"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{1865826529}, InstrumentLeg_46);
      FIX::LegFactor LegFactor_46;
      LegFactor_46.setString("13144726");
set_field(noLegs_1_1_0, LegFactor_46, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{1646069243}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_1601636820"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_667068044"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1639524948"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_846819842"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_2004202937"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1482196838"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_310333639"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1939030887"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'5'}, InstrumentLeg_46);
      FIX::LegOptionRatio LegOptionRatio_46;
      LegOptionRatio_46.setString("16449743");
set_field(noLegs_1_1_0, LegOptionRatio_46, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_390027838"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_2020596406"}, InstrumentLeg_46);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_46;
      LegPriceUnitOfMeasureQty_46.setString("4682585");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_46, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegProduct{789008493}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{294262862}, InstrumentLeg_46);
      FIX::LegRatioQty LegRatioQty_46;
      LegRatioQty_46.setString("5578244");
set_field(noLegs_1_1_0, LegRatioQty_46, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_439765529"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_912539785"}, InstrumentLeg_46);
      FIX::LegRepurchaseRate LegRepurchaseRate_46;
      LegRepurchaseRate_46.setString("10.960000");
set_field(noLegs_1_1_0, LegRepurchaseRate_46, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{1708475879}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_1862972674"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_321496101"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_1556614910"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_473860649"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_1108614397"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_964604612"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegSide{'1'}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1763801334"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_46);
      FIX::LegStrikePrice LegStrikePrice_46;
      LegStrikePrice_46.setString("12623869");
set_field(noLegs_1_1_0, LegStrikePrice_46, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_137100665"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_1041468996"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_754428229"}, InstrumentLeg_46);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_983920507"}, InstrumentLeg_46);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_46;
      LegUnitOfMeasureQty_46.setString("8981882");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_46, InstrumentLeg_46);
      all_values.push_back(InstrumentLeg_46);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_98;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_1294254147"}, LegSecAltIDGrp_NoLegSecurityAltID_98);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_689735525"}, LegSecAltIDGrp_NoLegSecurityAltID_98);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_98);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_99;
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltID{"STRING_685034071"}, LegSecAltIDGrp_NoLegSecurityAltID_99);
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltIDSource{"STRING_791744847"}, LegSecAltIDGrp_NoLegSecurityAltID_99);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_99);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_30;
    FIX::AttachmentPoint AttachmentPoint_30;
    AttachmentPoint_30.setString("33.630000");
set_field(noRelatedSym_0_1, AttachmentPoint_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_558146830"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::CPProgram{1}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_1868771856"}, Instrument_30);
    FIX::CapPrice CapPrice_30;
    CapPrice_30.setString("8524096");
set_field(noRelatedSym_0_1, CapPrice_30, Instrument_30);
    FIX::ContractMultiplier ContractMultiplier_30;
    ContractMultiplier_30.setString("18178278");
set_field(noRelatedSym_0_1, ContractMultiplier_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{0}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_1764949477"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_2033598937"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1869529616"}, Instrument_30);
    FIX::CouponRate CouponRate_30;
    CouponRate_30.setString("85.030000");
set_field(noRelatedSym_0_1, CouponRate_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_207611390"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_1278660878"}, Instrument_30);
    FIX::DetachmentPoint DetachmentPoint_30;
    DetachmentPoint_30.setString("91.530000");
set_field(noRelatedSym_0_1, DetachmentPoint_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_1316225787"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{95781842}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1014227451"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{932543473}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{0}, Instrument_30);
    FIX::Factor Factor_30;
    Factor_30.setString("13886284");
set_field(noRelatedSym_0_1, Factor_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{false}, Instrument_30);
    FIX::FloorPrice FloorPrice_30;
    FloorPrice_30.setString("2826137");
set_field(noRelatedSym_0_1, FloorPrice_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{3}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_1899750508"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_891016402"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_1046521007"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1870537563"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::ListMethod{1}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_1838265854"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_802817278"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_2134197303"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_950785576"}, Instrument_30);
    FIX::MinPriceIncrement MinPriceIncrement_30;
    MinPriceIncrement_30.setString("5241054");
set_field(noRelatedSym_0_1, MinPriceIncrement_30, Instrument_30);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_30;
    MinPriceIncrementAmount_30.setString("8391233");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{621129769}, Instrument_30);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_30;
    NotionalPercentageOutstanding_30.setString("92.230000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'4'}, Instrument_30);
    FIX::OptPayoutAmount OptPayoutAmount_30;
    OptPayoutAmount_30.setString("5072450");
set_field(noRelatedSym_0_1, OptPayoutAmount_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{3}, Instrument_30);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_30;
    OriginalNotionalPercentageOutstanding_30.setString("76.800000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_714856448"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{1685866069}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_2031082235"}, Instrument_30);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_30;
    PriceUnitOfMeasureQty_30.setString("17816479");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::Product{12}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_816142060"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{0}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1999215392"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_863588814"}, Instrument_30);
    FIX::RepurchaseRate RepurchaseRate_30;
    RepurchaseRate_30.setString("35.990000");
set_field(noRelatedSym_0_1, RepurchaseRate_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{134345496}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_MR"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_1080990460"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1315147534"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_408996551"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_2127511467"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_M"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_1"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_1818293674"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_STN"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SD"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'C'}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_217640565"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_663400379"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"GBP"}, Instrument_30);
    FIX::StrikeMultiplier StrikeMultiplier_30;
    StrikeMultiplier_30.setString("11199895");
set_field(noRelatedSym_0_1, StrikeMultiplier_30, Instrument_30);
    FIX::StrikePrice StrikePrice_30;
    StrikePrice_30.setString("17499704");
set_field(noRelatedSym_0_1, StrikePrice_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{5}, Instrument_30);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_30;
    StrikePriceBoundaryPrecision_30.setString("35.880000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{2}, Instrument_30);
    FIX::StrikeValue StrikeValue_30;
    StrikeValue_30.setString("8483874");
set_field(noRelatedSym_0_1, StrikeValue_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_505893125"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_Yr"}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_MWh"}, Instrument_30);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_30;
    UnitOfMeasureQty_30.setString("8954452");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_30, Instrument_30);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_30);
    all_values.push_back(Instrument_30);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_60;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_60);
      FIX::ComplexEventPrice ComplexEventPrice_60;
      ComplexEventPrice_60.setString("11025573");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_60, ComplexEvents_NoComplexEvents_60);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_60);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_60;
      ComplexEventPriceBoundaryPrecision_60.setString("56.730000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_60, ComplexEvents_NoComplexEvents_60);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_60);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_60);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_60;
      ComplexOptPayoutAmount_60.setString("11377034");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_60, ComplexEvents_NoComplexEvents_60);
      all_values.push_back(ComplexEvents_NoComplexEvents_60);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_124;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 7, 38, 20, 5, 2014)}, ComplexEventDates_NoComplexEventDates_124);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 6, 4, 11, 3, 2011)}, ComplexEventDates_NoComplexEventDates_124);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_124);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_249;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 46, 4)}, ComplexEventTimes_NoComplexEventTimes_249);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 14, 47)}, ComplexEventTimes_NoComplexEventTimes_249);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_249);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_250;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 18, 46)}, ComplexEventTimes_NoComplexEventTimes_250);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 38, 7)}, ComplexEventTimes_NoComplexEventTimes_250);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_250);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_251;
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 15, 17)}, ComplexEventTimes_NoComplexEventTimes_251);
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 47, 5)}, ComplexEventTimes_NoComplexEventTimes_251);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_251);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_61;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_61);
      FIX::ComplexEventPrice ComplexEventPrice_61;
      ComplexEventPrice_61.setString("2182684");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_61, ComplexEvents_NoComplexEvents_61);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_61);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_61;
      ComplexEventPriceBoundaryPrecision_61.setString("78.350000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_61, ComplexEvents_NoComplexEvents_61);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_61);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_61);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_61;
      ComplexOptPayoutAmount_61.setString("165110");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_61, ComplexEvents_NoComplexEvents_61);
      all_values.push_back(ComplexEvents_NoComplexEvents_61);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_125;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(9, 7, 10, 13, 2, 2001)}, ComplexEventDates_NoComplexEventDates_125);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(20, 8, 12, 11, 9, 2013)}, ComplexEventDates_NoComplexEventDates_125);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_125);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_252;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 54, 5)}, ComplexEventTimes_NoComplexEventTimes_252);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 44, 18)}, ComplexEventTimes_NoComplexEventTimes_252);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_252);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_253;
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 28, 33)}, ComplexEventTimes_NoComplexEventTimes_253);
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 32, 24)}, ComplexEventTimes_NoComplexEventTimes_253);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_253);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_254;
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 23, 45)}, ComplexEventTimes_NoComplexEventTimes_254);
          set_field(noComplexEventTimes_1_1_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 35, 41)}, ComplexEventTimes_NoComplexEventTimes_254);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_254);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_2);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_126;
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 54, 20, 27, 6, 2001)}, ComplexEventDates_NoComplexEventDates_126);
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 53, 28, 26, 3, 2010)}, ComplexEventDates_NoComplexEventDates_126);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_126);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_255;
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 45, 33)}, ComplexEventTimes_NoComplexEventTimes_255);
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 5, 4)}, ComplexEventTimes_NoComplexEventTimes_255);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_255);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_256;
          set_field(noComplexEventTimes_1_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 19, 21)}, ComplexEventTimes_NoComplexEventTimes_256);
          set_field(noComplexEventTimes_1_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 48, 11)}, ComplexEventTimes_NoComplexEventTimes_256);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_256);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_127;
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 57, 47, 18, 3, 2010)}, ComplexEventDates_NoComplexEventDates_127);
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 39, 49, 9, 11, 2012)}, ComplexEventDates_NoComplexEventDates_127);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_127);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_257;
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 19, 43)}, ComplexEventTimes_NoComplexEventTimes_257);
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 48, 56)}, ComplexEventTimes_NoComplexEventTimes_257);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_257);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_258;
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 7, 24)}, ComplexEventTimes_NoComplexEventTimes_258);
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 12, 27)}, ComplexEventTimes_NoComplexEventTimes_258);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_258);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_62;
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_62);
      FIX::ComplexEventPrice ComplexEventPrice_62;
      ComplexEventPrice_62.setString("10732861");
set_field(noComplexEvents_1_1_2, ComplexEventPrice_62, ComplexEvents_NoComplexEvents_62);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_62);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_62;
      ComplexEventPriceBoundaryPrecision_62.setString("58.690000");
set_field(noComplexEvents_1_1_2, ComplexEventPriceBoundaryPrecision_62, ComplexEvents_NoComplexEvents_62);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_62);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_62);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_62;
      ComplexOptPayoutAmount_62.setString("10343827");
set_field(noComplexEvents_1_1_2, ComplexOptPayoutAmount_62, ComplexEvents_NoComplexEvents_62);
      all_values.push_back(ComplexEvents_NoComplexEvents_62);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_128;
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 44, 10, 13, 7, 2003)}, ComplexEventDates_NoComplexEventDates_128);
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 56, 22, 7, 5, 2010)}, ComplexEventDates_NoComplexEventDates_128);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_128);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_259;
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 39, 43)}, ComplexEventTimes_NoComplexEventTimes_259);
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 55, 48)}, ComplexEventTimes_NoComplexEventTimes_259);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_259);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_260;
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 4, 57)}, ComplexEventTimes_NoComplexEventTimes_260);
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 45, 50)}, ComplexEventTimes_NoComplexEventTimes_260);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_260);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_261;
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 35, 41)}, ComplexEventTimes_NoComplexEventTimes_261);
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 18, 22)}, ComplexEventTimes_NoComplexEventTimes_261);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_261);
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
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_64;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1846305735"}, EvntGrp_NoEvents_64);
      FIX::EventPx EventPx_64;
      EventPx_64.setString("5978498");
set_field(noEvents_1_1_0, EventPx_64, EvntGrp_NoEvents_64);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_1839523104"}, EvntGrp_NoEvents_64);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(11, 48, 42, 24, 4, 2007)}, EvntGrp_NoEvents_64);
      set_field(noEvents_1_1_0, FIX::EventType{18}, EvntGrp_NoEvents_64);
      all_values.push_back(EvntGrp_NoEvents_64);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_58;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_1219866012"}, InstrumentParties_NoInstrumentParties_58);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_58);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{1048066293}, InstrumentParties_NoInstrumentParties_58);
      all_values.push_back(InstrumentParties_NoInstrumentParties_58);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_527112041"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{932933843}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_115);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_1347071241"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{1959368067}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_116);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_1852184168"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{2088587952}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_117);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_62;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_1044230653"}, SecAltIDGrp_NoSecurityAltID_62);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_1142605719"}, SecAltIDGrp_NoSecurityAltID_62);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_62);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_63;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_1047119311"}, SecAltIDGrp_NoSecurityAltID_63);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_1935829916"}, SecAltIDGrp_NoSecurityAltID_63);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_63);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_60;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_493689696"}, SecurityXML_60);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{2063069090}, SecurityXML_60);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_377690470"}, SecurityXML_60);
    all_values.push_back(SecurityXML_60);
    all_compo_names.insert("...NoRelatedSym..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_54;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1761891177"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{975540294}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2040774401"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{1527206840}, UnderlyingInstrument_54);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_54;
      UnderlyingAdjustedQuantity_54.setString("12254507");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_54, UnderlyingInstrument_54);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_54;
      UnderlyingAllocationPercent_54.setString("32.610000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_54, UnderlyingInstrument_54);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_54;
      UnderlyingAttachmentPoint_54.setString("89.220000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_1903850005"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_661463380"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_834020299"}, UnderlyingInstrument_54);
      FIX::UnderlyingCapValue UnderlyingCapValue_54;
      UnderlyingCapValue_54.setString("21263737");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_54, UnderlyingInstrument_54);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_54;
      UnderlyingCashAmount_54.setString("6968143");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_54);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_54;
      UnderlyingContractMultiplier_54.setString("19908939");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{1744880639}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_2096645817"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_370522352"}, UnderlyingInstrument_54);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_54;
      UnderlyingCouponRate_54.setString("8.340000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_1296233410"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_54);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_54;
      UnderlyingCurrentValue_54.setString("12373377");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_54, UnderlyingInstrument_54);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_54;
      UnderlyingDetachmentPoint_54.setString("88.490000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_54, UnderlyingInstrument_54);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_54;
      UnderlyingDirtyPrice_54.setString("12792620");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_54, UnderlyingInstrument_54);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_54;
      UnderlyingEndPrice_54.setString("2324597");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_54, UnderlyingInstrument_54);
      FIX::UnderlyingEndValue UnderlyingEndValue_54;
      UnderlyingEndValue_54.setString("9540345");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{1067608276}, UnderlyingInstrument_54);
      FIX::UnderlyingFXRate UnderlyingFXRate_54;
      UnderlyingFXRate_54.setString("7261494");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_54);
      FIX::UnderlyingFactor UnderlyingFactor_54;
      UnderlyingFactor_54.setString("14452987");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{927400779}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_484027484"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_273355393"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_820691532"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_2011234324"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1498806114"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1539884793"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1522479598"}, UnderlyingInstrument_54);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_54;
      UnderlyingNotionalPercentageOutstanding_54.setString("24.720000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'5'}, UnderlyingInstrument_54);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_54;
      UnderlyingOriginalNotionalPercentageOutstanding_54.setString("62.490000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1234062566"}, UnderlyingInstrument_54);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_54;
      UnderlyingPriceUnitOfMeasureQty_54.setString("7506788");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{115418912}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{1077472878}, UnderlyingInstrument_54);
      FIX::UnderlyingPx UnderlyingPx_54;
      UnderlyingPx_54.setString("3480758");
set_field(noUnderlyings_1_1_0, UnderlyingPx_54, UnderlyingInstrument_54);
      FIX::UnderlyingQty UnderlyingQty_54;
      UnderlyingQty_54.setString("645810");
set_field(noUnderlyings_1_1_0, UnderlyingQty_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1447995230"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_878406697"}, UnderlyingInstrument_54);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_54;
      UnderlyingRepurchaseRate_54.setString("44.910000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{1630402002}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_1113438052"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_450668558"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1537317203"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_245216413"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_683128343"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_343868068"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_1312824689"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_1409277825"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_1213488023"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_54);
      FIX::UnderlyingStartValue UnderlyingStartValue_54;
      UnderlyingStartValue_54.setString("1891949");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1697515507"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_54);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_54;
      UnderlyingStrikePrice_54.setString("15612661");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_54, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_235317647"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_402287633"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_936262133"}, UnderlyingInstrument_54);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1490490119"}, UnderlyingInstrument_54);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_54;
      UnderlyingUnitOfMeasureQty_54.setString("4561521");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_54, UnderlyingInstrument_54);
      all_values.push_back(UnderlyingInstrument_54);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_115;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_577069038"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1206831030"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_115);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_116;
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1260697294"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1654541916"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_116);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_117;
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_1554906893"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1325278375"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_117);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_107;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_285829943"}, UnderlyingStipulations_NoUnderlyingStips_107);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_538609219"}, UnderlyingStipulations_NoUnderlyingStips_107);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_107);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_116;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1399267995"}, UndlyInstrumentParties_NoUndlyInstrumentParties_116);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_116);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{1975289056}, UndlyInstrumentParties_NoUndlyInstrumentParties_116);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_116);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1672406120"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{171673476}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_224);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_809825450"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{934200298}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_225);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_117;
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1385161500"}, UndlyInstrumentParties_NoUndlyInstrumentParties_117);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_117);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyRole{1123395254}, UndlyInstrumentParties_NoUndlyInstrumentParties_117);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_117);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_156976771"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{2133281743}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_226);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_348975895"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{392294418}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_227);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_388085728"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1285238028}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_228);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_2);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_55;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1882784538"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{844237887}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_283032763"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{312369928}, UnderlyingInstrument_55);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_55;
      UnderlyingAdjustedQuantity_55.setString("20510689");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_55, UnderlyingInstrument_55);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_55;
      UnderlyingAllocationPercent_55.setString("0.570000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_55, UnderlyingInstrument_55);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_55;
      UnderlyingAttachmentPoint_55.setString("18.440000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_1458492163"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_721524785"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_774481694"}, UnderlyingInstrument_55);
      FIX::UnderlyingCapValue UnderlyingCapValue_55;
      UnderlyingCapValue_55.setString("17443221");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_55, UnderlyingInstrument_55);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_55;
      UnderlyingCashAmount_55.setString("12601340");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_55);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_55;
      UnderlyingContractMultiplier_55.setString("9961064");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{101928133}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1040258955"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_493107214"}, UnderlyingInstrument_55);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_55;
      UnderlyingCouponRate_55.setString("42.530000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_1211932431"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_55);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_55;
      UnderlyingCurrentValue_55.setString("4496102");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_55, UnderlyingInstrument_55);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_55;
      UnderlyingDetachmentPoint_55.setString("42.540000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_55, UnderlyingInstrument_55);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_55;
      UnderlyingDirtyPrice_55.setString("16844461");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_55, UnderlyingInstrument_55);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_55;
      UnderlyingEndPrice_55.setString("13848036");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_55, UnderlyingInstrument_55);
      FIX::UnderlyingEndValue UnderlyingEndValue_55;
      UnderlyingEndValue_55.setString("7328910");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{1670244253}, UnderlyingInstrument_55);
      FIX::UnderlyingFXRate UnderlyingFXRate_55;
      UnderlyingFXRate_55.setString("17337795");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_55);
      FIX::UnderlyingFactor UnderlyingFactor_55;
      UnderlyingFactor_55.setString("20583299");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{871533918}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_860486334"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_755084221"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_1154566681"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1172856262"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_658669491"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_550813091"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_992284458"}, UnderlyingInstrument_55);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_55;
      UnderlyingNotionalPercentageOutstanding_55.setString("16.540000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_55);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_55;
      UnderlyingOriginalNotionalPercentageOutstanding_55.setString("61.520000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1714000113"}, UnderlyingInstrument_55);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_55;
      UnderlyingPriceUnitOfMeasureQty_55.setString("3849882");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{831736051}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{562622919}, UnderlyingInstrument_55);
      FIX::UnderlyingPx UnderlyingPx_55;
      UnderlyingPx_55.setString("4869163");
set_field(noUnderlyings_1_1_1, UnderlyingPx_55, UnderlyingInstrument_55);
      FIX::UnderlyingQty UnderlyingQty_55;
      UnderlyingQty_55.setString("18719950");
set_field(noUnderlyings_1_1_1, UnderlyingQty_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1055730133"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_113766970"}, UnderlyingInstrument_55);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_55;
      UnderlyingRepurchaseRate_55.setString("37.900000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{211179150}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_674817874"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_1386054073"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_787093404"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_211780384"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_623374068"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_1519984430"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_1882024637"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_209669958"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_497686226"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_55);
      FIX::UnderlyingStartValue UnderlyingStartValue_55;
      UnderlyingStartValue_55.setString("10812038");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1358172560"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_55);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_55;
      UnderlyingStrikePrice_55.setString("3835451");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_55, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_1059141034"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_639100001"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_1375829632"}, UnderlyingInstrument_55);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1028819041"}, UnderlyingInstrument_55);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_55;
      UnderlyingUnitOfMeasureQty_55.setString("19114378");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_55, UnderlyingInstrument_55);
      all_values.push_back(UnderlyingInstrument_55);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_118;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_595335506"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_148942461"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_118);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_119;
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_1826848188"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1157958425"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_119);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_108;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_1551359546"}, UnderlyingStipulations_NoUnderlyingStips_108);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_66204910"}, UnderlyingStipulations_NoUnderlyingStips_108);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_108);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_118;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_340319688"}, UndlyInstrumentParties_NoUndlyInstrumentParties_118);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_118);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{1424443671}, UndlyInstrumentParties_NoUndlyInstrumentParties_118);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_118);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1064477465"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1636224055}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_229);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_202264182"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{436978247}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_230);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_1370765044"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{411934141}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_231);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_119;
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_934664473"}, UndlyInstrumentParties_NoUndlyInstrumentParties_119);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_119);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyRole{1493138018}, UndlyInstrumentParties_NoUndlyInstrumentParties_119);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_119);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1416623910"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1581424928}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_232);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_528898559"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{328281296}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_233);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_120;
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_73041282"}, UndlyInstrumentParties_NoUndlyInstrumentParties_120);
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_120);
        set_field(noUndlyInstrumentParties_1_1_2_2, FIX::UnderlyingInstrumentPartyRole{1357100337}, UndlyInstrumentParties_NoUndlyInstrumentParties_120);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_120);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234;
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_752356679"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);
          set_field(noUndlyInstrumentPartySubIDs_1_1_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1952435843}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_234);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_1_2_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_56;
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuer{"DATA_2133421621"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuerLen{431721219}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_962910620"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDescLen{621796799}, UnderlyingInstrument_56);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_56;
      UnderlyingAdjustedQuantity_56.setString("19830807");
set_field(noUnderlyings_1_1_2, UnderlyingAdjustedQuantity_56, UnderlyingInstrument_56);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_56;
      UnderlyingAllocationPercent_56.setString("55.310000");
set_field(noUnderlyings_1_1_2, UnderlyingAllocationPercent_56, UnderlyingInstrument_56);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_56;
      UnderlyingAttachmentPoint_56.setString("25.960000");
set_field(noUnderlyings_1_1_2, UnderlyingAttachmentPoint_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCFICode{"STRING_175916806"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPProgram{"STRING_1306499591"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPRegType{"STRING_648382619"}, UnderlyingInstrument_56);
      FIX::UnderlyingCapValue UnderlyingCapValue_56;
      UnderlyingCapValue_56.setString("19022905");
set_field(noUnderlyings_1_1_2, UnderlyingCapValue_56, UnderlyingInstrument_56);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_56;
      UnderlyingCashAmount_56.setString("2234934");
set_field(noUnderlyings_1_1_2, UnderlyingCashAmount_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_56);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_56;
      UnderlyingContractMultiplier_56.setString("21045547");
set_field(noUnderlyings_1_1_2, UnderlyingContractMultiplier_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingContractMultiplierUnit{660471655}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1507888070"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_369005244"}, UnderlyingInstrument_56);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_56;
      UnderlyingCouponRate_56.setString("61.280000");
set_field(noUnderlyings_1_1_2, UnderlyingCouponRate_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCreditRating{"STRING_376556789"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_56);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_56;
      UnderlyingCurrentValue_56.setString("17931806");
set_field(noUnderlyings_1_1_2, UnderlyingCurrentValue_56, UnderlyingInstrument_56);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_56;
      UnderlyingDetachmentPoint_56.setString("45.420000");
set_field(noUnderlyings_1_1_2, UnderlyingDetachmentPoint_56, UnderlyingInstrument_56);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_56;
      UnderlyingDirtyPrice_56.setString("1219044");
set_field(noUnderlyings_1_1_2, UnderlyingDirtyPrice_56, UnderlyingInstrument_56);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_56;
      UnderlyingEndPrice_56.setString("21214619");
set_field(noUnderlyings_1_1_2, UnderlyingEndPrice_56, UnderlyingInstrument_56);
      FIX::UnderlyingEndValue UnderlyingEndValue_56;
      UnderlyingEndValue_56.setString("13691258");
set_field(noUnderlyings_1_1_2, UnderlyingEndValue_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingExerciseStyle{2026632615}, UnderlyingInstrument_56);
      FIX::UnderlyingFXRate UnderlyingFXRate_56;
      UnderlyingFXRate_56.setString("13310786");
set_field(noUnderlyings_1_1_2, UnderlyingFXRate_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_56);
      FIX::UnderlyingFactor UnderlyingFactor_56;
      UnderlyingFactor_56.setString("6315056");
set_field(noUnderlyings_1_1_2, UnderlyingFactor_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFlowScheduleType{1136030880}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingInstrRegistry{"STRING_1192059309"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1063226866"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssuer{"STRING_2098941501"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_1813856108"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_898823984"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_980573384"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1037795057"}, UnderlyingInstrument_56);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_56;
      UnderlyingNotionalPercentageOutstanding_56.setString("7.910000");
set_field(noUnderlyings_1_1_2, UnderlyingNotionalPercentageOutstanding_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_56);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_56;
      UnderlyingOriginalNotionalPercentageOutstanding_56.setString("76.760000");
set_field(noUnderlyings_1_1_2, UnderlyingOriginalNotionalPercentageOutstanding_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_829547711"}, UnderlyingInstrument_56);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_56;
      UnderlyingPriceUnitOfMeasureQty_56.setString("3630827");
set_field(noUnderlyings_1_1_2, UnderlyingPriceUnitOfMeasureQty_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingProduct{1823300703}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPutOrCall{786618814}, UnderlyingInstrument_56);
      FIX::UnderlyingPx UnderlyingPx_56;
      UnderlyingPx_56.setString("10235543");
set_field(noUnderlyings_1_1_2, UnderlyingPx_56, UnderlyingInstrument_56);
      FIX::UnderlyingQty UnderlyingQty_56;
      UnderlyingQty_56.setString("11837051");
set_field(noUnderlyings_1_1_2, UnderlyingQty_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1155624058"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_471206872"}, UnderlyingInstrument_56);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_56;
      UnderlyingRepurchaseRate_56.setString("19.140000");
set_field(noUnderlyings_1_1_2, UnderlyingRepurchaseRate_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepurchaseTerm{870283672}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRestructuringType{"STRING_64212737"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityDesc{"STRING_1205958965"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_18884567"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityID{"STRING_186117162"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityIDSource{"STRING_1179937313"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecuritySubType{"STRING_1388010391"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityType{"STRING_65266129"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSeniority{"STRING_363532350"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlMethod{"STRING_446648079"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_56);
      FIX::UnderlyingStartValue UnderlyingStartValue_56;
      UnderlyingStartValue_56.setString("14995632");
set_field(noUnderlyings_1_1_2, UnderlyingStartValue_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1638707388"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_56);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_56;
      UnderlyingStrikePrice_56.setString("13050798");
set_field(noUnderlyings_1_1_2, UnderlyingStrikePrice_56, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbol{"STRING_511338979"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbolSfx{"STRING_284110819"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingTimeUnit{"STRING_195391258"}, UnderlyingInstrument_56);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_1586079770"}, UnderlyingInstrument_56);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_56;
      UnderlyingUnitOfMeasureQty_56.setString("4237001");
set_field(noUnderlyings_1_1_2, UnderlyingUnitOfMeasureQty_56, UnderlyingInstrument_56);
      all_values.push_back(UnderlyingInstrument_56);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_120;
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_268143834"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_786782883"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_120);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_121;
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_1557385989"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1054762648"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_121);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_122;
        set_field(noUnderlyingSecurityAltID_1_2_2_2, FIX::UnderlyingSecurityAltID{"STRING_1810337274"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);
        set_field(noUnderlyingSecurityAltID_1_2_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_593607467"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_122);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_109;
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipType{"STRING_134060498"}, UnderlyingStipulations_NoUnderlyingStips_109);
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipValue{"STRING_6385733"}, UnderlyingStipulations_NoUnderlyingStips_109);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_109);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_110;
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipType{"STRING_933186731"}, UnderlyingStipulations_NoUnderlyingStips_110);
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipValue{"STRING_198273236"}, UnderlyingStipulations_NoUnderlyingStips_110);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_110);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_121;
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_952071298"}, UndlyInstrumentParties_NoUndlyInstrumentParties_121);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'3'}, UndlyInstrumentParties_NoUndlyInstrumentParties_121);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyRole{244798364}, UndlyInstrumentParties_NoUndlyInstrumentParties_121);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_121);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_449656527"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{608330714}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_235);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_639246121"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1146428304}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_236);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_122;
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_2107893944"}, UndlyInstrumentParties_NoUndlyInstrumentParties_122);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_122);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyRole{758943299}, UndlyInstrumentParties_NoUndlyInstrumentParties_122);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_122);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1435549711"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1270282278}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_237);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1695542199"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{1630940969}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_238);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_1);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_708878401"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{2119242346}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_239);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      {
        FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_123;
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_1365026255"}, UndlyInstrumentParties_NoUndlyInstrumentParties_123);
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyIDSource{'9'}, UndlyInstrumentParties_NoUndlyInstrumentParties_123);
        set_field(noUndlyInstrumentParties_1_2_2_2, FIX::UnderlyingInstrumentPartyRole{758541581}, UndlyInstrumentParties_NoUndlyInstrumentParties_123);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_123);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240;
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2031784883"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{421395208}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_240);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_0);
        }
        {
          FIX50SP2::MarketDataRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241;
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1368536064"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);
          set_field(noUndlyInstrumentPartySubIDs_1_2_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{2094687942}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_241);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_2.addGroup(noUndlyInstrumentPartySubIDs_1_2_2_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    msg.addGroup(noRelatedSym_0_1);
  }
  // MDReqGrp
  // Group MDReqGrp.NoMDEntryTypes
  {
    FIX50SP2::MarketDataRequest::NoMDEntryTypes noMDEntryTypes_0_0;
    // MDReqGrp.NoMDEntryTypes
    multiset<string> MDReqGrp_NoMDEntryTypes_0;
    set_field(noMDEntryTypes_0_0, FIX::MDEntryType{'5'}, MDReqGrp_NoMDEntryTypes_0);
    all_values.push_back(MDReqGrp_NoMDEntryTypes_0);
    all_compo_names.insert("...NoMDEntryTypes");

    msg.addGroup(noMDEntryTypes_0_0);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_55;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_753728942"}, Parties_NoPartyIDs_55);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'4'}, Parties_NoPartyIDs_55);
    set_field(noPartyIDs_0_0, FIX::PartyRole{58}, Parties_NoPartyIDs_55);
    all_values.push_back(Parties_NoPartyIDs_55);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_113;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_684581212"}, PtysSubGrp_NoPartySubIDs_113);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_113);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_113);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_114;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1587775868"}, PtysSubGrp_NoPartySubIDs_114);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_114);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_114);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_56;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_516822840"}, Parties_NoPartyIDs_56);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'C'}, Parties_NoPartyIDs_56);
    set_field(noPartyIDs_0_1, FIX::PartyRole{57}, Parties_NoPartyIDs_56);
    all_values.push_back(Parties_NoPartyIDs_56);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MarketDataRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_115;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1345663823"}, PtysSubGrp_NoPartySubIDs_115);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{5}, PtysSubGrp_NoPartySubIDs_115);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_115);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // TrdgSesGrp
  // Group TrdgSesGrp.NoTradingSessions
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_0;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_3;
    set_field(noTradingSessions_0_0, FIX::TradingSessionID{"STRING_4"}, TrdgSesGrp_NoTradingSessions_3);
    set_field(noTradingSessions_0_0, FIX::TradingSessionSubID{"STRING_6"}, TrdgSesGrp_NoTradingSessions_3);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_3);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_0);
  }
  {
    FIX50SP2::MarketDataRequest::NoTradingSessions noTradingSessions_0_1;
    // TrdgSesGrp.NoTradingSessions
    multiset<string> TrdgSesGrp_NoTradingSessions_4;
    set_field(noTradingSessions_0_1, FIX::TradingSessionID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_4);
    set_field(noTradingSessions_0_1, FIX::TradingSessionSubID{"STRING_5"}, TrdgSesGrp_NoTradingSessions_4);
    all_values.push_back(TrdgSesGrp_NoTradingSessions_4);
    all_compo_names.insert("...NoTradingSessions");

    msg.addGroup(noTradingSessions_0_1);
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
