#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RFQRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RFQRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::RFQRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RFQRequest_0;
  set_field(msg, FIX::PrivateQuote{false}, RFQRequest_0);
  set_field(msg, FIX::RFQReqID{"STRING_2008627297"}, RFQRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, RFQRequest_0);
  all_values.push_back(RFQRequest_0);

  all_compo_names.insert("RFQRequest");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_113;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_467947043"}, Parties_NoPartyIDs_113);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'9'}, Parties_NoPartyIDs_113);
    set_field(noPartyIDs_0_0, FIX::PartyRole{51}, Parties_NoPartyIDs_113);
    all_values.push_back(Parties_NoPartyIDs_113);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_232;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_371347786"}, PtysSubGrp_NoPartySubIDs_232);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{21}, PtysSubGrp_NoPartySubIDs_232);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_232);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_114;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1043704600"}, Parties_NoPartyIDs_114);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'D'}, Parties_NoPartyIDs_114);
    set_field(noPartyIDs_0_1, FIX::PartyRole{60}, Parties_NoPartyIDs_114);
    all_values.push_back(Parties_NoPartyIDs_114);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_233;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1748244148"}, PtysSubGrp_NoPartySubIDs_233);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{28}, PtysSubGrp_NoPartySubIDs_233);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_233);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_234;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1575373646"}, PtysSubGrp_NoPartySubIDs_234);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_234);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_234);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_235;
      set_field(noPartySubIDs_1_1_2, FIX::PartySubID{"STRING_757311533"}, PtysSubGrp_NoPartySubIDs_235);
      set_field(noPartySubIDs_1_1_2, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_235);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_235);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_2);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // RFQReqGrp
  // Group RFQReqGrp.NoRelatedSym
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_0;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_0;
    FIX::PrevClosePx PrevClosePx_10;
    PrevClosePx_10.setString("12873451");
set_field(noRelatedSym_0_0, PrevClosePx_10, RFQReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteRequestType{2}, RFQReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteType{1}, RFQReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionID{"STRING_4"}, RFQReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionSubID{"STRING_7"}, RFQReqGrp_NoRelatedSym_0);
    all_values.push_back(RFQReqGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_87;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_2108645845"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{1781037416}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_576454861"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{112026811}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_128394683"}, InstrumentLeg_87);
      FIX::LegContractMultiplier LegContractMultiplier_87;
      LegContractMultiplier_87.setString("4375985");
set_field(noLegs_0_1_0, LegContractMultiplier_87, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{2074997848}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_40630697"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_905545554"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_934512557"}, InstrumentLeg_87);
      FIX::LegCouponRate LegCouponRate_87;
      LegCouponRate_87.setString("34.220000");
set_field(noLegs_0_1_0, LegCouponRate_87, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_1431000837"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"CAN"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_327221789"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{786768651}, InstrumentLeg_87);
      FIX::LegFactor LegFactor_87;
      LegFactor_87.setString("15586902");
set_field(noLegs_0_1_0, LegFactor_87, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{1914678623}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_387529151"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1187033468"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1342568621"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_1743771650"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1944345002"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1391142146"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_531043825"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1084206552"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_87);
      FIX::LegOptionRatio LegOptionRatio_87;
      LegOptionRatio_87.setString("7087286");
set_field(noLegs_0_1_0, LegOptionRatio_87, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_838600891"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_98129808"}, InstrumentLeg_87);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_87;
      LegPriceUnitOfMeasureQty_87.setString("15883501");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_87, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegProduct{799763089}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{1879167225}, InstrumentLeg_87);
      FIX::LegRatioQty LegRatioQty_87;
      LegRatioQty_87.setString("173213");
set_field(noLegs_0_1_0, LegRatioQty_87, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_911789900"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_2007561908"}, InstrumentLeg_87);
      FIX::LegRepurchaseRate LegRepurchaseRate_87;
      LegRepurchaseRate_87.setString("98.800000");
set_field(noLegs_0_1_0, LegRepurchaseRate_87, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{839304100}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_2048192605"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_1360465435"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1773816657"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_1799872380"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_643982624"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_932193353"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_971204414"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_87);
      FIX::LegStrikePrice LegStrikePrice_87;
      LegStrikePrice_87.setString("7383993");
set_field(noLegs_0_1_0, LegStrikePrice_87, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_2106491155"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_14566497"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_2080968010"}, InstrumentLeg_87);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_1702779157"}, InstrumentLeg_87);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_87;
      LegUnitOfMeasureQty_87.setString("19589114");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_87, InstrumentLeg_87);
      all_values.push_back(InstrumentLeg_87);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_179;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_86339334"}, LegSecAltIDGrp_NoLegSecurityAltID_179);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_895634404"}, LegSecAltIDGrp_NoLegSecurityAltID_179);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_179);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_180;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_540597187"}, LegSecAltIDGrp_NoLegSecurityAltID_180);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_795068021"}, LegSecAltIDGrp_NoLegSecurityAltID_180);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_180);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_181;
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltID{"STRING_1734235295"}, LegSecAltIDGrp_NoLegSecurityAltID_181);
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltIDSource{"STRING_638726995"}, LegSecAltIDGrp_NoLegSecurityAltID_181);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_181);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_88;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_235934529"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{386514736}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_370410572"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{253255898}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1298304636"}, InstrumentLeg_88);
      FIX::LegContractMultiplier LegContractMultiplier_88;
      LegContractMultiplier_88.setString("2304888");
set_field(noLegs_0_1_1, LegContractMultiplier_88, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{708175779}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_2137608736"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_131197790"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2068641214"}, InstrumentLeg_88);
      FIX::LegCouponRate LegCouponRate_88;
      LegCouponRate_88.setString("17.460000");
set_field(noLegs_0_1_1, LegCouponRate_88, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_1931070170"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_1347396646"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{1536344604}, InstrumentLeg_88);
      FIX::LegFactor LegFactor_88;
      LegFactor_88.setString("1201298");
set_field(noLegs_0_1_1, LegFactor_88, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{174929675}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_127260345"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_79137315"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_189496172"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_60744708"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_1781916473"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_924024"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1385371217"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1868255807"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'8'}, InstrumentLeg_88);
      FIX::LegOptionRatio LegOptionRatio_88;
      LegOptionRatio_88.setString("19259684");
set_field(noLegs_0_1_1, LegOptionRatio_88, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_515840180"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_483310075"}, InstrumentLeg_88);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_88;
      LegPriceUnitOfMeasureQty_88.setString("4172117");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_88, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegProduct{751774709}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{869824812}, InstrumentLeg_88);
      FIX::LegRatioQty LegRatioQty_88;
      LegRatioQty_88.setString("7876223");
set_field(noLegs_0_1_1, LegRatioQty_88, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1005030608"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_20645800"}, InstrumentLeg_88);
      FIX::LegRepurchaseRate LegRepurchaseRate_88;
      LegRepurchaseRate_88.setString("11.570000");
set_field(noLegs_0_1_1, LegRepurchaseRate_88, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{1713206387}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_10770889"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_1149308947"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_1634363953"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_1774712635"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_932895470"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_52020495"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegSide{'1'}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_132808468"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_88);
      FIX::LegStrikePrice LegStrikePrice_88;
      LegStrikePrice_88.setString("3077381");
set_field(noLegs_0_1_1, LegStrikePrice_88, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_1715625445"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_375147562"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_497234315"}, InstrumentLeg_88);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_1776370153"}, InstrumentLeg_88);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_88;
      LegUnitOfMeasureQty_88.setString("95803");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_88, InstrumentLeg_88);
      all_values.push_back(InstrumentLeg_88);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_182;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1014257722"}, LegSecAltIDGrp_NoLegSecurityAltID_182);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1877836194"}, LegSecAltIDGrp_NoLegSecurityAltID_182);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_182);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_183;
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltID{"STRING_1394716767"}, LegSecAltIDGrp_NoLegSecurityAltID_183);
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltIDSource{"STRING_792742478"}, LegSecAltIDGrp_NoLegSecurityAltID_183);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_183);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_184;
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltID{"STRING_246192727"}, LegSecAltIDGrp_NoLegSecurityAltID_184);
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltIDSource{"STRING_1878026843"}, LegSecAltIDGrp_NoLegSecurityAltID_184);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_184);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_62;
    FIX::AttachmentPoint AttachmentPoint_62;
    AttachmentPoint_62.setString("42.300000");
set_field(noRelatedSym_0_0, AttachmentPoint_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_997967436"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::CPProgram{1}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_1997576554"}, Instrument_62);
    FIX::CapPrice CapPrice_62;
    CapPrice_62.setString("20029980");
set_field(noRelatedSym_0_0, CapPrice_62, Instrument_62);
    FIX::ContractMultiplier ContractMultiplier_62;
    ContractMultiplier_62.setString("6210138");
set_field(noRelatedSym_0_0, ContractMultiplier_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{1}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1568720783"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_631784696"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_2017513010"}, Instrument_62);
    FIX::CouponRate CouponRate_62;
    CouponRate_62.setString("10.880000");
set_field(noRelatedSym_0_0, CouponRate_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_259013683"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_802924832"}, Instrument_62);
    FIX::DetachmentPoint DetachmentPoint_62;
    DetachmentPoint_62.setString("15.840000");
set_field(noRelatedSym_0_0, DetachmentPoint_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_434894122"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{935733300}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_548503036"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{730904368}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{0}, Instrument_62);
    FIX::Factor Factor_62;
    Factor_62.setString("1166448");
set_field(noRelatedSym_0_0, Factor_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{false}, Instrument_62);
    FIX::FloorPrice FloorPrice_62;
    FloorPrice_62.setString("18930149");
set_field(noRelatedSym_0_0, FloorPrice_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{2}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_91380450"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'7'}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_845984864"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_1486097218"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1552531540"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_1216640413"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_615002122"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_2090145027"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1817008420"}, Instrument_62);
    FIX::MinPriceIncrement MinPriceIncrement_62;
    MinPriceIncrement_62.setString("4650950");
set_field(noRelatedSym_0_0, MinPriceIncrement_62, Instrument_62);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_62;
    MinPriceIncrementAmount_62.setString("19456594");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{290538579}, Instrument_62);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_62;
    NotionalPercentageOutstanding_62.setString("90.910000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'1'}, Instrument_62);
    FIX::OptPayoutAmount OptPayoutAmount_62;
    OptPayoutAmount_62.setString("9223232");
set_field(noRelatedSym_0_0, OptPayoutAmount_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_62);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_62;
    OriginalNotionalPercentageOutstanding_62.setString("40.000000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1181336959"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{2006253286}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_1616231081"}, Instrument_62);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_62;
    PriceUnitOfMeasureQty_62.setString("7945029");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::Product{9}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_199651802"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{0}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_2047783453"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_1305703732"}, Instrument_62);
    FIX::RepurchaseRate RepurchaseRate_62;
    RepurchaseRate_62.setString("64.930000");
set_field(noRelatedSym_0_0, RepurchaseRate_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{1793314792}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_MM"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_1722576943"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_405620206"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_1119837266"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1061190513"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_D"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_2"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_130347278"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_MPP"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SR"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_890765248"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_1952852012"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CHF"}, Instrument_62);
    FIX::StrikeMultiplier StrikeMultiplier_62;
    StrikeMultiplier_62.setString("11722649");
set_field(noRelatedSym_0_0, StrikeMultiplier_62, Instrument_62);
    FIX::StrikePrice StrikePrice_62;
    StrikePrice_62.setString("10127339");
set_field(noRelatedSym_0_0, StrikePrice_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_62);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_62;
    StrikePriceBoundaryPrecision_62.setString("89.240000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_62);
    FIX::StrikeValue StrikeValue_62;
    StrikeValue_62.setString("11386787");
set_field(noRelatedSym_0_0, StrikeValue_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_682430860"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_S"}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_62);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_62;
    UnitOfMeasureQty_62.setString("18236724");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_62, Instrument_62);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_62);
    all_values.push_back(Instrument_62);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_128;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_128);
      FIX::ComplexEventPrice ComplexEventPrice_128;
      ComplexEventPrice_128.setString("122167");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_128, ComplexEvents_NoComplexEvents_128);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_128);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_128;
      ComplexEventPriceBoundaryPrecision_128.setString("85.950000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_128, ComplexEvents_NoComplexEvents_128);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_128);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_128);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_128;
      ComplexOptPayoutAmount_128.setString("19436691");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_128, ComplexEvents_NoComplexEvents_128);
      all_values.push_back(ComplexEvents_NoComplexEvents_128);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_267;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 46, 43, 2, 3, 2013)}, ComplexEventDates_NoComplexEventDates_267);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 51, 6, 9, 8, 2007)}, ComplexEventDates_NoComplexEventDates_267);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_267);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_537;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 57, 59)}, ComplexEventTimes_NoComplexEventTimes_537);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 17, 13)}, ComplexEventTimes_NoComplexEventTimes_537);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_537);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_538;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 52, 11)}, ComplexEventTimes_NoComplexEventTimes_538);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 12, 5)}, ComplexEventTimes_NoComplexEventTimes_538);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_538);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_539;
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 51, 55)}, ComplexEventTimes_NoComplexEventTimes_539);
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 3, 22)}, ComplexEventTimes_NoComplexEventTimes_539);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_539);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_129;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_129);
      FIX::ComplexEventPrice ComplexEventPrice_129;
      ComplexEventPrice_129.setString("5239084");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_129, ComplexEvents_NoComplexEvents_129);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{4}, ComplexEvents_NoComplexEvents_129);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_129;
      ComplexEventPriceBoundaryPrecision_129.setString("26.550000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_129, ComplexEvents_NoComplexEvents_129);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_129);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_129);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_129;
      ComplexOptPayoutAmount_129.setString("6667845");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_129, ComplexEvents_NoComplexEvents_129);
      all_values.push_back(ComplexEvents_NoComplexEvents_129);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_268;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 33, 5, 4, 7, 2006)}, ComplexEventDates_NoComplexEventDates_268);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 11, 44, 20, 2, 2000)}, ComplexEventDates_NoComplexEventDates_268);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_268);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_540;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 32, 1)}, ComplexEventTimes_NoComplexEventTimes_540);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 4, 36)}, ComplexEventTimes_NoComplexEventTimes_540);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_540);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_541;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 56, 18)}, ComplexEventTimes_NoComplexEventTimes_541);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 42, 10)}, ComplexEventTimes_NoComplexEventTimes_541);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_541);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_130;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_130);
      FIX::ComplexEventPrice ComplexEventPrice_130;
      ComplexEventPrice_130.setString("5913727");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_130, ComplexEvents_NoComplexEvents_130);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_130);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_130;
      ComplexEventPriceBoundaryPrecision_130.setString("49.430000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_130, ComplexEvents_NoComplexEvents_130);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_130);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_130);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_130;
      ComplexOptPayoutAmount_130.setString("14385512");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_130, ComplexEvents_NoComplexEvents_130);
      all_values.push_back(ComplexEvents_NoComplexEvents_130);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_269;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 15, 38, 22, 5, 2007)}, ComplexEventDates_NoComplexEventDates_269);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(12, 51, 24, 27, 9, 2002)}, ComplexEventDates_NoComplexEventDates_269);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_269);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_542;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 24, 53)}, ComplexEventTimes_NoComplexEventTimes_542);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 27, 33)}, ComplexEventTimes_NoComplexEventTimes_542);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_542);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_125;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_789249210"}, EvntGrp_NoEvents_125);
      FIX::EventPx EventPx_125;
      EventPx_125.setString("16138551");
set_field(noEvents_0_1_0, EventPx_125, EvntGrp_NoEvents_125);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1010318709"}, EvntGrp_NoEvents_125);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(9, 15, 0, 15, 9, 2016)}, EvntGrp_NoEvents_125);
      set_field(noEvents_0_1_0, FIX::EventType{14}, EvntGrp_NoEvents_125);
      all_values.push_back(EvntGrp_NoEvents_125);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_126;
      set_field(noEvents_0_1_1, FIX::EventDate{"LOCALMKTDATE_1490607402"}, EvntGrp_NoEvents_126);
      FIX::EventPx EventPx_126;
      EventPx_126.setString("13765458");
set_field(noEvents_0_1_1, EventPx_126, EvntGrp_NoEvents_126);
      set_field(noEvents_0_1_1, FIX::EventText{"STRING_2025676912"}, EvntGrp_NoEvents_126);
      set_field(noEvents_0_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(16, 35, 22, 19, 8, 2017)}, EvntGrp_NoEvents_126);
      set_field(noEvents_0_1_1, FIX::EventType{12}, EvntGrp_NoEvents_126);
      all_values.push_back(EvntGrp_NoEvents_126);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_127;
      set_field(noEvents_0_1_2, FIX::EventDate{"LOCALMKTDATE_1713935250"}, EvntGrp_NoEvents_127);
      FIX::EventPx EventPx_127;
      EventPx_127.setString("5530422");
set_field(noEvents_0_1_2, EventPx_127, EvntGrp_NoEvents_127);
      set_field(noEvents_0_1_2, FIX::EventText{"STRING_1050825427"}, EvntGrp_NoEvents_127);
      set_field(noEvents_0_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(1, 23, 43, 3, 6, 2005)}, EvntGrp_NoEvents_127);
      set_field(noEvents_0_1_2, FIX::EventType{16}, EvntGrp_NoEvents_127);
      all_values.push_back(EvntGrp_NoEvents_127);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_115;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1142980594"}, InstrumentParties_NoInstrumentParties_115);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_115);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{2029838814}, InstrumentParties_NoInstrumentParties_115);
      all_values.push_back(InstrumentParties_NoInstrumentParties_115);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1649591680"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1595125818}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_235);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_1627287283"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{1132501086}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_236);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237;
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubID{"STRING_938249573"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);
        set_field(noInstrumentPartySubIDs_0_0_2_2, FIX::InstrumentPartySubIDType{856349447}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_237);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_116;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1010694350"}, InstrumentParties_NoInstrumentParties_116);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_116);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{1011700887}, InstrumentParties_NoInstrumentParties_116);
      all_values.push_back(InstrumentParties_NoInstrumentParties_116);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_1420056245"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{125555211}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_238);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_864909253"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{519177032}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_239);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240;
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubID{"STRING_1187924382"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubIDType{431360856}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_240);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_117;
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyID{"STRING_1072219262"}, InstrumentParties_NoInstrumentParties_117);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyIDSource{'9'}, InstrumentParties_NoInstrumentParties_117);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyRole{1949424232}, InstrumentParties_NoInstrumentParties_117);
      all_values.push_back(InstrumentParties_NoInstrumentParties_117);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241;
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubID{"STRING_1539006184"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubIDType{1517880387}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_241);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242;
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubID{"STRING_1380217351"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubIDType{109656325}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_242);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243;
        set_field(noInstrumentPartySubIDs_0_2_2_2, FIX::InstrumentPartySubID{"STRING_1875585753"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);
        set_field(noInstrumentPartySubIDs_0_2_2_2, FIX::InstrumentPartySubIDType{2120936826}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_243);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_124;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_871082699"}, SecAltIDGrp_NoSecurityAltID_124);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1592686543"}, SecAltIDGrp_NoSecurityAltID_124);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_124);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_124;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_1720463989"}, SecurityXML_124);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{566948186}, SecurityXML_124);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1094794576"}, SecurityXML_124);
    all_values.push_back(SecurityXML_124);
    all_compo_names.insert("...NoRelatedSym..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_109;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_46751821"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{79812014}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2106355733"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{903101268}, UnderlyingInstrument_109);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_109;
      UnderlyingAdjustedQuantity_109.setString("10905063");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_109, UnderlyingInstrument_109);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_109;
      UnderlyingAllocationPercent_109.setString("86.160000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_109, UnderlyingInstrument_109);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_109;
      UnderlyingAttachmentPoint_109.setString("21.560000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_318644722"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_677121213"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_2040357367"}, UnderlyingInstrument_109);
      FIX::UnderlyingCapValue UnderlyingCapValue_109;
      UnderlyingCapValue_109.setString("11835539");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_109, UnderlyingInstrument_109);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_109;
      UnderlyingCashAmount_109.setString("11962982");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_109);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_109;
      UnderlyingContractMultiplier_109.setString("16149148");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{121033860}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_1172064262"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1416855416"}, UnderlyingInstrument_109);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_109;
      UnderlyingCouponRate_109.setString("31.960000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_563586798"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_109);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_109;
      UnderlyingCurrentValue_109.setString("6732431");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_109, UnderlyingInstrument_109);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_109;
      UnderlyingDetachmentPoint_109.setString("42.600000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_109, UnderlyingInstrument_109);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_109;
      UnderlyingDirtyPrice_109.setString("15805737");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_109, UnderlyingInstrument_109);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_109;
      UnderlyingEndPrice_109.setString("3638682");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_109, UnderlyingInstrument_109);
      FIX::UnderlyingEndValue UnderlyingEndValue_109;
      UnderlyingEndValue_109.setString("13864369");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1025776621}, UnderlyingInstrument_109);
      FIX::UnderlyingFXRate UnderlyingFXRate_109;
      UnderlyingFXRate_109.setString("20843322");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_109);
      FIX::UnderlyingFactor UnderlyingFactor_109;
      UnderlyingFactor_109.setString("21205711");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1104954800}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_2000136968"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_52899563"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1063826885"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_755754588"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1143405928"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_320891853"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_523073096"}, UnderlyingInstrument_109);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_109;
      UnderlyingNotionalPercentageOutstanding_109.setString("6.500000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_109);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_109;
      UnderlyingOriginalNotionalPercentageOutstanding_109.setString("68.150000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_498120978"}, UnderlyingInstrument_109);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_109;
      UnderlyingPriceUnitOfMeasureQty_109.setString("468276");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{1496744916}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{2113035810}, UnderlyingInstrument_109);
      FIX::UnderlyingPx UnderlyingPx_109;
      UnderlyingPx_109.setString("1678615");
set_field(noUnderlyings_0_1_0, UnderlyingPx_109, UnderlyingInstrument_109);
      FIX::UnderlyingQty UnderlyingQty_109;
      UnderlyingQty_109.setString("5213255");
set_field(noUnderlyings_0_1_0, UnderlyingQty_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1382407578"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_394764721"}, UnderlyingInstrument_109);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_109;
      UnderlyingRepurchaseRate_109.setString("23.280000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{22176086}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_2001885269"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_1758155451"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_537530346"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_1434975347"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_2122023750"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_1923967306"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_313268320"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_2058872390"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_1729868805"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_109);
      FIX::UnderlyingStartValue UnderlyingStartValue_109;
      UnderlyingStartValue_109.setString("10163435");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1582522125"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_109);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_109;
      UnderlyingStrikePrice_109.setString("1907930");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_109, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1482661361"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_253578632"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_713866162"}, UnderlyingInstrument_109);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_797228364"}, UnderlyingInstrument_109);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_109;
      UnderlyingUnitOfMeasureQty_109.setString("12515916");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_109, UnderlyingInstrument_109);
      all_values.push_back(UnderlyingInstrument_109);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_229;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1295349342"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1298419363"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_229);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_230;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_479074246"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1260901505"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_231;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_1466280888"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_1000399776"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_222;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_1861045609"}, UnderlyingStipulations_NoUnderlyingStips_222);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_2085312105"}, UnderlyingStipulations_NoUnderlyingStips_222);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_222);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_224;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1715447230"}, UndlyInstrumentParties_NoUndlyInstrumentParties_224);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_224);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1055531868}, UndlyInstrumentParties_NoUndlyInstrumentParties_224);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_224);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1670524010"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{832015526}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_446);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1316207250"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1581912752}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_447);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_225;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_414400683"}, UndlyInstrumentParties_NoUndlyInstrumentParties_225);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_225);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{450772646}, UndlyInstrumentParties_NoUndlyInstrumentParties_225);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_225);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1941818553"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{383459425}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_448);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_226;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_40232226"}, UndlyInstrumentParties_NoUndlyInstrumentParties_226);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_226);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{637038057}, UndlyInstrumentParties_NoUndlyInstrumentParties_226);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_226);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2074224631"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1888629756}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_449);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1883911365"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{1222090325}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_450);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noRelatedSym_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noRelatedSym_0_0);
  }
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_1;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_1;
    FIX::PrevClosePx PrevClosePx_11;
    PrevClosePx_11.setString("10395654");
set_field(noRelatedSym_0_1, PrevClosePx_11, RFQReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteRequestType{2}, RFQReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteType{2}, RFQReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradingSessionID{"STRING_4"}, RFQReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradingSessionSubID{"STRING_5"}, RFQReqGrp_NoRelatedSym_1);
    all_values.push_back(RFQReqGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_89;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_71924672"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{1153730197}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_1349335139"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{1787371903}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_702230457"}, InstrumentLeg_89);
      FIX::LegContractMultiplier LegContractMultiplier_89;
      LegContractMultiplier_89.setString("2573833");
set_field(noLegs_1_1_0, LegContractMultiplier_89, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{642827184}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_225270820"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_1089398886"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1959034434"}, InstrumentLeg_89);
      FIX::LegCouponRate LegCouponRate_89;
      LegCouponRate_89.setString("35.720000");
set_field(noLegs_1_1_0, LegCouponRate_89, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_1503799569"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1353238730"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{1208448812}, InstrumentLeg_89);
      FIX::LegFactor LegFactor_89;
      LegFactor_89.setString("4939319");
set_field(noLegs_1_1_0, LegFactor_89, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{1393470956}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_337961431"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1130970054"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_85696"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_264702414"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_872116162"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1883997061"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1486792739"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_1911681633"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'2'}, InstrumentLeg_89);
      FIX::LegOptionRatio LegOptionRatio_89;
      LegOptionRatio_89.setString("18223009");
set_field(noLegs_1_1_0, LegOptionRatio_89, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_122560696"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1167917117"}, InstrumentLeg_89);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_89;
      LegPriceUnitOfMeasureQty_89.setString("5061508");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_89, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegProduct{194485368}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{174163666}, InstrumentLeg_89);
      FIX::LegRatioQty LegRatioQty_89;
      LegRatioQty_89.setString("18554860");
set_field(noLegs_1_1_0, LegRatioQty_89, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1981857271"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_876394123"}, InstrumentLeg_89);
      FIX::LegRepurchaseRate LegRepurchaseRate_89;
      LegRepurchaseRate_89.setString("93.910000");
set_field(noLegs_1_1_0, LegRepurchaseRate_89, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{477200808}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_1101664943"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_1054784629"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_288751594"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_761364868"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_411100550"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_1702865501"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegSide{'8'}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1764339280"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_89);
      FIX::LegStrikePrice LegStrikePrice_89;
      LegStrikePrice_89.setString("10103265");
set_field(noLegs_1_1_0, LegStrikePrice_89, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_1101792096"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_349255841"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_1010412284"}, InstrumentLeg_89);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_1366494510"}, InstrumentLeg_89);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_89;
      LegUnitOfMeasureQty_89.setString("12213720");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_89, InstrumentLeg_89);
      all_values.push_back(InstrumentLeg_89);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_185;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_705803601"}, LegSecAltIDGrp_NoLegSecurityAltID_185);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_985569988"}, LegSecAltIDGrp_NoLegSecurityAltID_185);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_185);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_186;
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltID{"STRING_698941075"}, LegSecAltIDGrp_NoLegSecurityAltID_186);
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltIDSource{"STRING_380620875"}, LegSecAltIDGrp_NoLegSecurityAltID_186);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_186);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_187;
        set_field(noLegSecurityAltID_1_0_2_2, FIX::LegSecurityAltID{"STRING_1108130684"}, LegSecAltIDGrp_NoLegSecurityAltID_187);
        set_field(noLegSecurityAltID_1_0_2_2, FIX::LegSecurityAltIDSource{"STRING_1866858192"}, LegSecAltIDGrp_NoLegSecurityAltID_187);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_187);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_63;
    FIX::AttachmentPoint AttachmentPoint_63;
    AttachmentPoint_63.setString("17.670000");
set_field(noRelatedSym_0_1, AttachmentPoint_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1302616053"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::CPProgram{2}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_594774151"}, Instrument_63);
    FIX::CapPrice CapPrice_63;
    CapPrice_63.setString("11369896");
set_field(noRelatedSym_0_1, CapPrice_63, Instrument_63);
    FIX::ContractMultiplier ContractMultiplier_63;
    ContractMultiplier_63.setString("7699323");
set_field(noRelatedSym_0_1, ContractMultiplier_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{2}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_1614190484"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_1871597277"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1614944523"}, Instrument_63);
    FIX::CouponRate CouponRate_63;
    CouponRate_63.setString("20.790000");
set_field(noRelatedSym_0_1, CouponRate_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_485478497"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_2026045073"}, Instrument_63);
    FIX::DetachmentPoint DetachmentPoint_63;
    DetachmentPoint_63.setString("39.320000");
set_field(noRelatedSym_0_1, DetachmentPoint_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_1357315936"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{1642900706}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_74670949"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{575601723}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{1}, Instrument_63);
    FIX::Factor Factor_63;
    Factor_63.setString("11764630");
set_field(noRelatedSym_0_1, Factor_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{false}, Instrument_63);
    FIX::FloorPrice FloorPrice_63;
    FloorPrice_63.setString("3954739");
set_field(noRelatedSym_0_1, FloorPrice_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{3}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_115597981"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_984315909"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_814539056"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_1481898384"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::ListMethod{1}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_533913600"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_221186503"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_1247578998"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_427451810"}, Instrument_63);
    FIX::MinPriceIncrement MinPriceIncrement_63;
    MinPriceIncrement_63.setString("8159606");
set_field(noRelatedSym_0_1, MinPriceIncrement_63, Instrument_63);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_63;
    MinPriceIncrementAmount_63.setString("2370850");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{1197384143}, Instrument_63);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_63;
    NotionalPercentageOutstanding_63.setString("5.480000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'1'}, Instrument_63);
    FIX::OptPayoutAmount OptPayoutAmount_63;
    OptPayoutAmount_63.setString("9214977");
set_field(noRelatedSym_0_1, OptPayoutAmount_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{3}, Instrument_63);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_63;
    OriginalNotionalPercentageOutstanding_63.setString("39.420000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_1406976269"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{722142849}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_616808557"}, Instrument_63);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_63;
    PriceUnitOfMeasureQty_63.setString("2175599");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::Product{13}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_1192410281"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{1}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_21224572"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_2117267846"}, Instrument_63);
    FIX::RepurchaseRate RepurchaseRate_63;
    RepurchaseRate_63.setString("58.360000");
set_field(noRelatedSym_0_1, RepurchaseRate_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{416698479}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_MM"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_207573817"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1517975988"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_952846027"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_1022112873"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_L"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_2"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_1556026473"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_EUCORP"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SB"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'P'}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_1889537882"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_234989350"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"JPY"}, Instrument_63);
    FIX::StrikeMultiplier StrikeMultiplier_63;
    StrikeMultiplier_63.setString("20862648");
set_field(noRelatedSym_0_1, StrikeMultiplier_63, Instrument_63);
    FIX::StrikePrice StrikePrice_63;
    StrikePrice_63.setString("19548765");
set_field(noRelatedSym_0_1, StrikePrice_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{2}, Instrument_63);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_63;
    StrikePriceBoundaryPrecision_63.setString("51.560000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{2}, Instrument_63);
    FIX::StrikeValue StrikeValue_63;
    StrikeValue_63.setString("5364154");
set_field(noRelatedSym_0_1, StrikeValue_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_315605735"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_Min"}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_Bbl"}, Instrument_63);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_63;
    UnitOfMeasureQty_63.setString("14772788");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_63, Instrument_63);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_CDS"}, Instrument_63);
    all_values.push_back(Instrument_63);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_131;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_131);
      FIX::ComplexEventPrice ComplexEventPrice_131;
      ComplexEventPrice_131.setString("17457739");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_131, ComplexEvents_NoComplexEvents_131);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_131);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_131;
      ComplexEventPriceBoundaryPrecision_131.setString("85.210000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_131, ComplexEvents_NoComplexEvents_131);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_131);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_131);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_131;
      ComplexOptPayoutAmount_131.setString("6514577");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_131, ComplexEvents_NoComplexEvents_131);
      all_values.push_back(ComplexEvents_NoComplexEvents_131);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_270;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 6, 36, 20, 1, 2004)}, ComplexEventDates_NoComplexEventDates_270);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 40, 10, 20, 6, 2017)}, ComplexEventDates_NoComplexEventDates_270);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_270);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_543;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 53, 14)}, ComplexEventTimes_NoComplexEventTimes_543);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 9, 3)}, ComplexEventTimes_NoComplexEventTimes_543);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_543);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_544;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 43, 50)}, ComplexEventTimes_NoComplexEventTimes_544);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 57, 25)}, ComplexEventTimes_NoComplexEventTimes_544);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_544);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_545;
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 23, 23)}, ComplexEventTimes_NoComplexEventTimes_545);
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 9, 37)}, ComplexEventTimes_NoComplexEventTimes_545);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_545);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_271;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 47, 38, 3, 4, 2005)}, ComplexEventDates_NoComplexEventDates_271);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 3, 29, 26, 5, 2013)}, ComplexEventDates_NoComplexEventDates_271);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_271);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_546;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 0, 15)}, ComplexEventTimes_NoComplexEventTimes_546);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 5, 38)}, ComplexEventTimes_NoComplexEventTimes_546);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_546);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_547;
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 53, 25)}, ComplexEventTimes_NoComplexEventTimes_547);
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 26, 14)}, ComplexEventTimes_NoComplexEventTimes_547);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_547);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_548;
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 53, 24)}, ComplexEventTimes_NoComplexEventTimes_548);
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 33, 34)}, ComplexEventTimes_NoComplexEventTimes_548);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_548);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_272;
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 56, 12, 20, 4, 2005)}, ComplexEventDates_NoComplexEventDates_272);
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 22, 25, 19, 6, 2004)}, ComplexEventDates_NoComplexEventDates_272);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_272);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_549;
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 11, 40)}, ComplexEventTimes_NoComplexEventTimes_549);
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 6, 32)}, ComplexEventTimes_NoComplexEventTimes_549);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_549);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_132;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_132);
      FIX::ComplexEventPrice ComplexEventPrice_132;
      ComplexEventPrice_132.setString("2521473");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_132, ComplexEvents_NoComplexEvents_132);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_132);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_132;
      ComplexEventPriceBoundaryPrecision_132.setString("77.500000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_132, ComplexEvents_NoComplexEvents_132);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_132);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_132);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_132;
      ComplexOptPayoutAmount_132.setString("2005138");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_132, ComplexEvents_NoComplexEvents_132);
      all_values.push_back(ComplexEvents_NoComplexEvents_132);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_273;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 49, 15, 20, 9, 2013)}, ComplexEventDates_NoComplexEventDates_273);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 59, 43, 25, 5, 2011)}, ComplexEventDates_NoComplexEventDates_273);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_273);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_550;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 35, 31)}, ComplexEventTimes_NoComplexEventTimes_550);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 29, 44)}, ComplexEventTimes_NoComplexEventTimes_550);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_550);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_551;
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 1, 23)}, ComplexEventTimes_NoComplexEventTimes_551);
          set_field(noComplexEventTimes_1_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 18, 48)}, ComplexEventTimes_NoComplexEventTimes_551);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_551);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_274;
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 29, 34, 27, 2, 2005)}, ComplexEventDates_NoComplexEventDates_274);
        set_field(noComplexEventDates_1_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 2, 52, 0, 11, 2013)}, ComplexEventDates_NoComplexEventDates_274);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_274);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_552;
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 15, 28)}, ComplexEventTimes_NoComplexEventTimes_552);
          set_field(noComplexEventTimes_1_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 58, 23)}, ComplexEventTimes_NoComplexEventTimes_552);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_552);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_1.addGroup(noComplexEventTimes_1_1_1_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_275;
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 24, 10, 5, 5, 2008)}, ComplexEventDates_NoComplexEventDates_275);
        set_field(noComplexEventDates_1_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 55, 30, 13, 11, 2007)}, ComplexEventDates_NoComplexEventDates_275);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_275);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_553;
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 31, 39)}, ComplexEventTimes_NoComplexEventTimes_553);
          set_field(noComplexEventTimes_1_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 28, 7)}, ComplexEventTimes_NoComplexEventTimes_553);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_553);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_554;
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 14, 20)}, ComplexEventTimes_NoComplexEventTimes_554);
          set_field(noComplexEventTimes_1_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 18, 13)}, ComplexEventTimes_NoComplexEventTimes_554);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_554);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_2.addGroup(noComplexEventTimes_1_1_2_3_1);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_133;
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_133);
      FIX::ComplexEventPrice ComplexEventPrice_133;
      ComplexEventPrice_133.setString("20845913");
set_field(noComplexEvents_1_1_2, ComplexEventPrice_133, ComplexEvents_NoComplexEvents_133);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_133);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_133;
      ComplexEventPriceBoundaryPrecision_133.setString("88.250000");
set_field(noComplexEvents_1_1_2, ComplexEventPriceBoundaryPrecision_133, ComplexEvents_NoComplexEvents_133);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_133);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_133);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_133;
      ComplexOptPayoutAmount_133.setString("20471963");
set_field(noComplexEvents_1_1_2, ComplexOptPayoutAmount_133, ComplexEvents_NoComplexEvents_133);
      all_values.push_back(ComplexEvents_NoComplexEvents_133);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_276;
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 30, 34, 18, 6, 2015)}, ComplexEventDates_NoComplexEventDates_276);
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 34, 24, 27, 9, 2002)}, ComplexEventDates_NoComplexEventDates_276);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_276);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_555;
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 4, 32)}, ComplexEventTimes_NoComplexEventTimes_555);
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 42, 34)}, ComplexEventTimes_NoComplexEventTimes_555);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_555);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_556;
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 4, 12)}, ComplexEventTimes_NoComplexEventTimes_556);
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 29, 16)}, ComplexEventTimes_NoComplexEventTimes_556);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_556);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_277;
        set_field(noComplexEventDates_1_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 38, 48, 20, 8, 2003)}, ComplexEventDates_NoComplexEventDates_277);
        set_field(noComplexEventDates_1_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 17, 34, 18, 3, 2011)}, ComplexEventDates_NoComplexEventDates_277);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_277);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_557;
          set_field(noComplexEventTimes_1_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 24, 14)}, ComplexEventTimes_NoComplexEventTimes_557);
          set_field(noComplexEventTimes_1_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 48, 46)}, ComplexEventTimes_NoComplexEventTimes_557);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_557);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_558;
          set_field(noComplexEventTimes_1_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 50, 55)}, ComplexEventTimes_NoComplexEventTimes_558);
          set_field(noComplexEventTimes_1_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 17, 23)}, ComplexEventTimes_NoComplexEventTimes_558);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_558);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_559;
          set_field(noComplexEventTimes_1_2_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 1, 6)}, ComplexEventTimes_NoComplexEventTimes_559);
          set_field(noComplexEventTimes_1_2_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 49, 41)}, ComplexEventTimes_NoComplexEventTimes_559);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_559);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_1.addGroup(noComplexEventTimes_1_2_1_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_278;
        set_field(noComplexEventDates_1_2_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 16, 2, 4, 4, 2017)}, ComplexEventDates_NoComplexEventDates_278);
        set_field(noComplexEventDates_1_2_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(5, 47, 24, 9, 1, 2010)}, ComplexEventDates_NoComplexEventDates_278);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_278);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_560;
          set_field(noComplexEventTimes_1_2_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 6, 55)}, ComplexEventTimes_NoComplexEventTimes_560);
          set_field(noComplexEventTimes_1_2_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 12, 41)}, ComplexEventTimes_NoComplexEventTimes_560);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_560);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_561;
          set_field(noComplexEventTimes_1_2_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 42, 18)}, ComplexEventTimes_NoComplexEventTimes_561);
          set_field(noComplexEventTimes_1_2_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 59, 8)}, ComplexEventTimes_NoComplexEventTimes_561);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_561);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_2.addGroup(noComplexEventTimes_1_2_2_3_1);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_128;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_1720880946"}, EvntGrp_NoEvents_128);
      FIX::EventPx EventPx_128;
      EventPx_128.setString("422007");
set_field(noEvents_1_1_0, EventPx_128, EvntGrp_NoEvents_128);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_636376217"}, EvntGrp_NoEvents_128);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(19, 40, 45, 8, 8, 2013)}, EvntGrp_NoEvents_128);
      set_field(noEvents_1_1_0, FIX::EventType{15}, EvntGrp_NoEvents_128);
      all_values.push_back(EvntGrp_NoEvents_128);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_129;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_465998195"}, EvntGrp_NoEvents_129);
      FIX::EventPx EventPx_129;
      EventPx_129.setString("10984064");
set_field(noEvents_1_1_1, EventPx_129, EvntGrp_NoEvents_129);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_1202954490"}, EvntGrp_NoEvents_129);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(21, 28, 22, 23, 8, 2002)}, EvntGrp_NoEvents_129);
      set_field(noEvents_1_1_1, FIX::EventType{9}, EvntGrp_NoEvents_129);
      all_values.push_back(EvntGrp_NoEvents_129);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_130;
      set_field(noEvents_1_1_2, FIX::EventDate{"LOCALMKTDATE_2125863403"}, EvntGrp_NoEvents_130);
      FIX::EventPx EventPx_130;
      EventPx_130.setString("8057067");
set_field(noEvents_1_1_2, EventPx_130, EvntGrp_NoEvents_130);
      set_field(noEvents_1_1_2, FIX::EventText{"STRING_1457061230"}, EvntGrp_NoEvents_130);
      set_field(noEvents_1_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(19, 24, 53, 15, 4, 2015)}, EvntGrp_NoEvents_130);
      set_field(noEvents_1_1_2, FIX::EventType{99}, EvntGrp_NoEvents_130);
      all_values.push_back(EvntGrp_NoEvents_130);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_118;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_153691818"}, InstrumentParties_NoInstrumentParties_118);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_118);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{777504808}, InstrumentParties_NoInstrumentParties_118);
      all_values.push_back(InstrumentParties_NoInstrumentParties_118);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_408455739"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{1422413927}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_244);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_119;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1709632444"}, InstrumentParties_NoInstrumentParties_119);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_119);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{1888412123}, InstrumentParties_NoInstrumentParties_119);
      all_values.push_back(InstrumentParties_NoInstrumentParties_119);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_1862986703"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{513913190}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_245);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246;
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubID{"STRING_1079012471"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubIDType{515422123}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_246);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247;
        set_field(noInstrumentPartySubIDs_1_1_2_2, FIX::InstrumentPartySubID{"STRING_865304232"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);
        set_field(noInstrumentPartySubIDs_1_1_2_2, FIX::InstrumentPartySubIDType{1232776538}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_247);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_120;
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyID{"STRING_365887446"}, InstrumentParties_NoInstrumentParties_120);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyIDSource{'8'}, InstrumentParties_NoInstrumentParties_120);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyRole{1507274386}, InstrumentParties_NoInstrumentParties_120);
      all_values.push_back(InstrumentParties_NoInstrumentParties_120);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248;
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubID{"STRING_1704946867"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubIDType{816851968}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_248);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_125;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_319587414"}, SecAltIDGrp_NoSecurityAltID_125);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_1325739653"}, SecAltIDGrp_NoSecurityAltID_125);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_125);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_126;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_1697546361"}, SecurityXML_126);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{1532882338}, SecurityXML_126);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_17587944"}, SecurityXML_126);
    all_values.push_back(SecurityXML_126);
    all_compo_names.insert("...NoRelatedSym..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_110;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_640894329"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{1493296100}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1131540323"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{1668051124}, UnderlyingInstrument_110);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_110;
      UnderlyingAdjustedQuantity_110.setString("1233172");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_110, UnderlyingInstrument_110);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_110;
      UnderlyingAllocationPercent_110.setString("62.260000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_110, UnderlyingInstrument_110);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_110;
      UnderlyingAttachmentPoint_110.setString("68.630000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_1545731187"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_1691805022"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_589055428"}, UnderlyingInstrument_110);
      FIX::UnderlyingCapValue UnderlyingCapValue_110;
      UnderlyingCapValue_110.setString("12866596");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_110, UnderlyingInstrument_110);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_110;
      UnderlyingCashAmount_110.setString("2048766");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_110);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_110;
      UnderlyingContractMultiplier_110.setString("18005728");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{1283889088}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_819980606"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_518393436"}, UnderlyingInstrument_110);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_110;
      UnderlyingCouponRate_110.setString("19.790000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_1185868053"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_110);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_110;
      UnderlyingCurrentValue_110.setString("15301352");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_110, UnderlyingInstrument_110);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_110;
      UnderlyingDetachmentPoint_110.setString("67.930000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_110, UnderlyingInstrument_110);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_110;
      UnderlyingDirtyPrice_110.setString("5458246");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_110, UnderlyingInstrument_110);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_110;
      UnderlyingEndPrice_110.setString("13732931");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_110, UnderlyingInstrument_110);
      FIX::UnderlyingEndValue UnderlyingEndValue_110;
      UnderlyingEndValue_110.setString("12946842");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{1871564339}, UnderlyingInstrument_110);
      FIX::UnderlyingFXRate UnderlyingFXRate_110;
      UnderlyingFXRate_110.setString("9233558");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_110);
      FIX::UnderlyingFactor UnderlyingFactor_110;
      UnderlyingFactor_110.setString("18891522");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{1901204341}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_1320977227"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1234964735"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_885261016"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_841544703"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1358281995"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_867433594"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_770567918"}, UnderlyingInstrument_110);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_110;
      UnderlyingNotionalPercentageOutstanding_110.setString("95.340000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_110);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_110;
      UnderlyingOriginalNotionalPercentageOutstanding_110.setString("33.460000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_2043189197"}, UnderlyingInstrument_110);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_110;
      UnderlyingPriceUnitOfMeasureQty_110.setString("6166315");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{1664181829}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{1696278401}, UnderlyingInstrument_110);
      FIX::UnderlyingPx UnderlyingPx_110;
      UnderlyingPx_110.setString("19005206");
set_field(noUnderlyings_1_1_0, UnderlyingPx_110, UnderlyingInstrument_110);
      FIX::UnderlyingQty UnderlyingQty_110;
      UnderlyingQty_110.setString("3366787");
set_field(noUnderlyings_1_1_0, UnderlyingQty_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_67188190"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_122219005"}, UnderlyingInstrument_110);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_110;
      UnderlyingRepurchaseRate_110.setString("68.410000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{1484821764}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_1998675371"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_905198448"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_312434910"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_397016409"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_131007923"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_1607119118"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_121097100"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_1054363759"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_139718368"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_110);
      FIX::UnderlyingStartValue UnderlyingStartValue_110;
      UnderlyingStartValue_110.setString("8080844");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1460695595"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_110);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_110;
      UnderlyingStrikePrice_110.setString("1547566");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_110, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_308528817"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_413295416"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_925324569"}, UnderlyingInstrument_110);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1065058351"}, UnderlyingInstrument_110);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_110;
      UnderlyingUnitOfMeasureQty_110.setString("8250503");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_110, UnderlyingInstrument_110);
      all_values.push_back(UnderlyingInstrument_110);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_232;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_960763900"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1441681971"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_233;
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1801646097"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_509558654"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_234;
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_1194718997"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_2138324885"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_223;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_1316938003"}, UnderlyingStipulations_NoUnderlyingStips_223);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_1513388078"}, UnderlyingStipulations_NoUnderlyingStips_223);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_223);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_227;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1168129726"}, UndlyInstrumentParties_NoUndlyInstrumentParties_227);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_227);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{226519870}, UndlyInstrumentParties_NoUndlyInstrumentParties_227);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_227);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_402110801"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1833638988}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_451);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1686243235"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1456474561}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_452);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_111;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1973357356"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{1549008970}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_117075366"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{1286569304}, UnderlyingInstrument_111);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_111;
      UnderlyingAdjustedQuantity_111.setString("4992557");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_111, UnderlyingInstrument_111);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_111;
      UnderlyingAllocationPercent_111.setString("8.350000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_111, UnderlyingInstrument_111);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_111;
      UnderlyingAttachmentPoint_111.setString("59.550000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_807784609"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_76232603"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_219166876"}, UnderlyingInstrument_111);
      FIX::UnderlyingCapValue UnderlyingCapValue_111;
      UnderlyingCapValue_111.setString("18728429");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_111, UnderlyingInstrument_111);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_111;
      UnderlyingCashAmount_111.setString("9012829");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_111);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_111;
      UnderlyingContractMultiplier_111.setString("6861232");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{195481311}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_10793594"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1195681867"}, UnderlyingInstrument_111);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_111;
      UnderlyingCouponRate_111.setString("3.090000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_1634831"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_111);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_111;
      UnderlyingCurrentValue_111.setString("15150229");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_111, UnderlyingInstrument_111);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_111;
      UnderlyingDetachmentPoint_111.setString("36.710000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_111, UnderlyingInstrument_111);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_111;
      UnderlyingDirtyPrice_111.setString("17277843");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_111, UnderlyingInstrument_111);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_111;
      UnderlyingEndPrice_111.setString("17861257");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_111, UnderlyingInstrument_111);
      FIX::UnderlyingEndValue UnderlyingEndValue_111;
      UnderlyingEndValue_111.setString("19130335");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{1145446877}, UnderlyingInstrument_111);
      FIX::UnderlyingFXRate UnderlyingFXRate_111;
      UnderlyingFXRate_111.setString("407529");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_111);
      FIX::UnderlyingFactor UnderlyingFactor_111;
      UnderlyingFactor_111.setString("6842064");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{1497227503}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_1425062591"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_85731786"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_1614302869"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_564148247"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_584987578"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1277240056"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2005474202"}, UnderlyingInstrument_111);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_111;
      UnderlyingNotionalPercentageOutstanding_111.setString("21.870000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_111);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_111;
      UnderlyingOriginalNotionalPercentageOutstanding_111.setString("74.300000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1118131499"}, UnderlyingInstrument_111);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_111;
      UnderlyingPriceUnitOfMeasureQty_111.setString("1072720");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{433788575}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{1804254712}, UnderlyingInstrument_111);
      FIX::UnderlyingPx UnderlyingPx_111;
      UnderlyingPx_111.setString("3027533");
set_field(noUnderlyings_1_1_1, UnderlyingPx_111, UnderlyingInstrument_111);
      FIX::UnderlyingQty UnderlyingQty_111;
      UnderlyingQty_111.setString("4445821");
set_field(noUnderlyings_1_1_1, UnderlyingQty_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_852452931"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1692953621"}, UnderlyingInstrument_111);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_111;
      UnderlyingRepurchaseRate_111.setString("70.000000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{477397994}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_105124637"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_1961239910"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_16428018"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_1832909027"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1599882051"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_1929461560"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_830872256"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_1640634993"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_1381166794"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_111);
      FIX::UnderlyingStartValue UnderlyingStartValue_111;
      UnderlyingStartValue_111.setString("9903788");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_658745737"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_111);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_111;
      UnderlyingStrikePrice_111.setString("12228939");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_38314436"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_1734438125"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_1080884538"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1431086623"}, UnderlyingInstrument_111);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_111;
      UnderlyingUnitOfMeasureQty_111.setString("9404271");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_111, UnderlyingInstrument_111);
      all_values.push_back(UnderlyingInstrument_111);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_235;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_401734474"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1047699138"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_236;
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_1591830544"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_58505539"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_237;
        set_field(noUnderlyingSecurityAltID_1_1_2_2, FIX::UnderlyingSecurityAltID{"STRING_1350452450"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);
        set_field(noUnderlyingSecurityAltID_1_1_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_2036412713"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_224;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_895922423"}, UnderlyingStipulations_NoUnderlyingStips_224);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_335146065"}, UnderlyingStipulations_NoUnderlyingStips_224);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_224);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_225;
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipType{"STRING_1388356465"}, UnderlyingStipulations_NoUnderlyingStips_225);
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipValue{"STRING_1001047060"}, UnderlyingStipulations_NoUnderlyingStips_225);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_225);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_228;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1404784483"}, UndlyInstrumentParties_NoUndlyInstrumentParties_228);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_228);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{1748784379}, UndlyInstrumentParties_NoUndlyInstrumentParties_228);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_228);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1517344695"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1241935724}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_453);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_229;
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_420445541"}, UndlyInstrumentParties_NoUndlyInstrumentParties_229);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_229);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyRole{84830924}, UndlyInstrumentParties_NoUndlyInstrumentParties_229);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_229);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_338266625"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{542028993}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_454);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_154601615"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{376581061}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_455);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_112;
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuer{"DATA_128983470"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuerLen{1235486154}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_1807667684"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDescLen{1069410608}, UnderlyingInstrument_112);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_112;
      UnderlyingAdjustedQuantity_112.setString("2460444");
set_field(noUnderlyings_1_1_2, UnderlyingAdjustedQuantity_112, UnderlyingInstrument_112);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_112;
      UnderlyingAllocationPercent_112.setString("85.100000");
set_field(noUnderlyings_1_1_2, UnderlyingAllocationPercent_112, UnderlyingInstrument_112);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_112;
      UnderlyingAttachmentPoint_112.setString("97.460000");
set_field(noUnderlyings_1_1_2, UnderlyingAttachmentPoint_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCFICode{"STRING_1837875019"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPProgram{"STRING_120424049"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPRegType{"STRING_1320078548"}, UnderlyingInstrument_112);
      FIX::UnderlyingCapValue UnderlyingCapValue_112;
      UnderlyingCapValue_112.setString("17268040");
set_field(noUnderlyings_1_1_2, UnderlyingCapValue_112, UnderlyingInstrument_112);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_112;
      UnderlyingCashAmount_112.setString("10313825");
set_field(noUnderlyings_1_1_2, UnderlyingCashAmount_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_112);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_112;
      UnderlyingContractMultiplier_112.setString("20619501");
set_field(noUnderlyings_1_1_2, UnderlyingContractMultiplier_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingContractMultiplierUnit{272255337}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1069564383"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_63368829"}, UnderlyingInstrument_112);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_112;
      UnderlyingCouponRate_112.setString("98.200000");
set_field(noUnderlyings_1_1_2, UnderlyingCouponRate_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCreditRating{"STRING_1756036822"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_112);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_112;
      UnderlyingCurrentValue_112.setString("11258978");
set_field(noUnderlyings_1_1_2, UnderlyingCurrentValue_112, UnderlyingInstrument_112);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_112;
      UnderlyingDetachmentPoint_112.setString("52.840000");
set_field(noUnderlyings_1_1_2, UnderlyingDetachmentPoint_112, UnderlyingInstrument_112);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_112;
      UnderlyingDirtyPrice_112.setString("11367641");
set_field(noUnderlyings_1_1_2, UnderlyingDirtyPrice_112, UnderlyingInstrument_112);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_112;
      UnderlyingEndPrice_112.setString("20108376");
set_field(noUnderlyings_1_1_2, UnderlyingEndPrice_112, UnderlyingInstrument_112);
      FIX::UnderlyingEndValue UnderlyingEndValue_112;
      UnderlyingEndValue_112.setString("9914362");
set_field(noUnderlyings_1_1_2, UnderlyingEndValue_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingExerciseStyle{68471739}, UnderlyingInstrument_112);
      FIX::UnderlyingFXRate UnderlyingFXRate_112;
      UnderlyingFXRate_112.setString("2016206");
set_field(noUnderlyings_1_1_2, UnderlyingFXRate_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_112);
      FIX::UnderlyingFactor UnderlyingFactor_112;
      UnderlyingFactor_112.setString("2230733");
set_field(noUnderlyings_1_1_2, UnderlyingFactor_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFlowScheduleType{578201674}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingInstrRegistry{"STRING_1662448672"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1458559509"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssuer{"STRING_238385710"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_584375632"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1704603984"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_300304220"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_554001730"}, UnderlyingInstrument_112);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_112;
      UnderlyingNotionalPercentageOutstanding_112.setString("53.550000");
set_field(noUnderlyings_1_1_2, UnderlyingNotionalPercentageOutstanding_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingOptAttribute{'4'}, UnderlyingInstrument_112);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_112;
      UnderlyingOriginalNotionalPercentageOutstanding_112.setString("2.780000");
set_field(noUnderlyings_1_1_2, UnderlyingOriginalNotionalPercentageOutstanding_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_974315791"}, UnderlyingInstrument_112);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_112;
      UnderlyingPriceUnitOfMeasureQty_112.setString("14521107");
set_field(noUnderlyings_1_1_2, UnderlyingPriceUnitOfMeasureQty_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingProduct{1942597601}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPutOrCall{888782292}, UnderlyingInstrument_112);
      FIX::UnderlyingPx UnderlyingPx_112;
      UnderlyingPx_112.setString("17243661");
set_field(noUnderlyings_1_1_2, UnderlyingPx_112, UnderlyingInstrument_112);
      FIX::UnderlyingQty UnderlyingQty_112;
      UnderlyingQty_112.setString("8646783");
set_field(noUnderlyings_1_1_2, UnderlyingQty_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_952151122"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1253922299"}, UnderlyingInstrument_112);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_112;
      UnderlyingRepurchaseRate_112.setString("15.100000");
set_field(noUnderlyings_1_1_2, UnderlyingRepurchaseRate_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepurchaseTerm{616820682}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRestructuringType{"STRING_1970240866"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityDesc{"STRING_1599129379"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1523425967"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityID{"STRING_959521326"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityIDSource{"STRING_1462483367"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecuritySubType{"STRING_367378527"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityType{"STRING_1027993066"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSeniority{"STRING_1664103980"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlMethod{"STRING_1900843729"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_112);
      FIX::UnderlyingStartValue UnderlyingStartValue_112;
      UnderlyingStartValue_112.setString("948220");
set_field(noUnderlyings_1_1_2, UnderlyingStartValue_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1415808753"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStrikeCurrency{"GBP"}, UnderlyingInstrument_112);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_112;
      UnderlyingStrikePrice_112.setString("20001843");
set_field(noUnderlyings_1_1_2, UnderlyingStrikePrice_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbol{"STRING_119262618"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbolSfx{"STRING_633511936"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingTimeUnit{"STRING_406702467"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_1514257973"}, UnderlyingInstrument_112);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_112;
      UnderlyingUnitOfMeasureQty_112.setString("10542402");
set_field(noUnderlyings_1_1_2, UnderlyingUnitOfMeasureQty_112, UnderlyingInstrument_112);
      all_values.push_back(UnderlyingInstrument_112);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_238;
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_341090116"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_358867348"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_239;
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_2075896698"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1229872408"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_239);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_226;
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipType{"STRING_793091386"}, UnderlyingStipulations_NoUnderlyingStips_226);
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipValue{"STRING_34539882"}, UnderlyingStipulations_NoUnderlyingStips_226);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_226);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_227;
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipType{"STRING_1189672126"}, UnderlyingStipulations_NoUnderlyingStips_227);
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipValue{"STRING_1266322896"}, UnderlyingStipulations_NoUnderlyingStips_227);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_227);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_230;
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1012429344"}, UndlyInstrumentParties_NoUndlyInstrumentParties_230);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_230);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyRole{27302884}, UndlyInstrumentParties_NoUndlyInstrumentParties_230);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_230);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_32968346"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{394681411}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_456);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_852460089"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1697072326}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_457);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_231;
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_148041492"}, UndlyInstrumentParties_NoUndlyInstrumentParties_231);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_231);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyRole{1791894332}, UndlyInstrumentParties_NoUndlyInstrumentParties_231);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_231);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_518185144"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{2125102048}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_458);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
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
