#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::RFQRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RFQRequest_0;
  set_field(msg, FIX::PrivateQuote{false}, RFQRequest_0);
  set_field(msg, FIX::RFQReqID{"STRING_1251635203"}, RFQRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'1'}, RFQRequest_0);
  all_values.push_back(RFQRequest_0);

  all_compo_names.insert("RFQRequest");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_126;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1449037929"}, Parties_NoPartyIDs_126);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_126);
    set_field(noPartyIDs_0_0, FIX::PartyRole{39}, Parties_NoPartyIDs_126);
    all_values.push_back(Parties_NoPartyIDs_126);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_249;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_546914494"}, PtysSubGrp_NoPartySubIDs_249);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{22}, PtysSubGrp_NoPartySubIDs_249);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_249);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_127;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_1990546550"}, Parties_NoPartyIDs_127);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'A'}, Parties_NoPartyIDs_127);
    set_field(noPartyIDs_0_1, FIX::PartyRole{3}, Parties_NoPartyIDs_127);
    all_values.push_back(Parties_NoPartyIDs_127);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_250;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_569416703"}, PtysSubGrp_NoPartySubIDs_250);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{6}, PtysSubGrp_NoPartySubIDs_250);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_250);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_251;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_960071686"}, PtysSubGrp_NoPartySubIDs_251);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_251);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_251);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  {
    FIX50SP2::RFQRequest::NoPartyIDs noPartyIDs_0_2;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_128;
    set_field(noPartyIDs_0_2, FIX::PartyID{"STRING_1041152869"}, Parties_NoPartyIDs_128);
    set_field(noPartyIDs_0_2, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_128);
    set_field(noPartyIDs_0_2, FIX::PartyRole{51}, Parties_NoPartyIDs_128);
    all_values.push_back(Parties_NoPartyIDs_128);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_252;
      set_field(noPartySubIDs_2_1_0, FIX::PartySubID{"STRING_1754018543"}, PtysSubGrp_NoPartySubIDs_252);
      set_field(noPartySubIDs_2_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_252);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_252);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_253;
      set_field(noPartySubIDs_2_1_1, FIX::PartySubID{"STRING_948139522"}, PtysSubGrp_NoPartySubIDs_253);
      set_field(noPartySubIDs_2_1_1, FIX::PartySubIDType{20}, PtysSubGrp_NoPartySubIDs_253);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_253);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoPartyIDs::NoPartySubIDs noPartySubIDs_2_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_254;
      set_field(noPartySubIDs_2_1_2, FIX::PartySubID{"STRING_543178369"}, PtysSubGrp_NoPartySubIDs_254);
      set_field(noPartySubIDs_2_1_2, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_254);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_254);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_2.addGroup(noPartySubIDs_2_1_2);
    }
    msg.addGroup(noPartyIDs_0_2);
  }
  // RFQReqGrp
  // Group RFQReqGrp.NoRelatedSym
  {
    FIX50SP2::RFQRequest::NoRelatedSym noRelatedSym_0_0;
    // RFQReqGrp.NoRelatedSym
    multiset<string> RFQReqGrp_NoRelatedSym_0;
    FIX::PrevClosePx PrevClosePx_12;
    PrevClosePx_12.setString("12960863");
set_field(noRelatedSym_0_0, PrevClosePx_12, RFQReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteRequestType{1}, RFQReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::QuoteType{0}, RFQReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionID{"STRING_3"}, RFQReqGrp_NoRelatedSym_0);
    set_field(noRelatedSym_0_0, FIX::TradingSessionSubID{"STRING_3"}, RFQReqGrp_NoRelatedSym_0);
    all_values.push_back(RFQReqGrp_NoRelatedSym_0);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_110;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_1849275839"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{1267355302}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_835261838"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{72028038}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_1814269796"}, InstrumentLeg_110);
      FIX::LegContractMultiplier LegContractMultiplier_110;
      LegContractMultiplier_110.setString("2720138");
set_field(noLegs_0_1_0, LegContractMultiplier_110, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{2062574588}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1210227940"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1510005749"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_249115288"}, InstrumentLeg_110);
      FIX::LegCouponRate LegCouponRate_110;
      LegCouponRate_110.setString("46.430000");
set_field(noLegs_0_1_0, LegCouponRate_110, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_1080129569"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"USD"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_2121282439"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{445943833}, InstrumentLeg_110);
      FIX::LegFactor LegFactor_110;
      LegFactor_110.setString("5506955");
set_field(noLegs_0_1_0, LegFactor_110, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{549084997}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_52478729"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_341121723"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1497224519"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_1920014583"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_884300093"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1566503226"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_2036990128"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_32902799"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_110);
      FIX::LegOptionRatio LegOptionRatio_110;
      LegOptionRatio_110.setString("10775836");
set_field(noLegs_0_1_0, LegOptionRatio_110, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_433140709"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_892179514"}, InstrumentLeg_110);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_110;
      LegPriceUnitOfMeasureQty_110.setString("12019257");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_110, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegProduct{134932900}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{12051168}, InstrumentLeg_110);
      FIX::LegRatioQty LegRatioQty_110;
      LegRatioQty_110.setString("20371875");
set_field(noLegs_0_1_0, LegRatioQty_110, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_206960938"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1826320965"}, InstrumentLeg_110);
      FIX::LegRepurchaseRate LegRepurchaseRate_110;
      LegRepurchaseRate_110.setString("77.470000");
set_field(noLegs_0_1_0, LegRepurchaseRate_110, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{122051879}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_889065257"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_1671723496"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_371167167"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_521226253"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_604369418"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1580354142"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_578168209"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_110);
      FIX::LegStrikePrice LegStrikePrice_110;
      LegStrikePrice_110.setString("11272532");
set_field(noLegs_0_1_0, LegStrikePrice_110, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_2078776704"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_413973470"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_476994078"}, InstrumentLeg_110);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_1851307639"}, InstrumentLeg_110);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_110;
      LegUnitOfMeasureQty_110.setString("12982735");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_110, InstrumentLeg_110);
      all_values.push_back(InstrumentLeg_110);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_217;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_1740814119"}, LegSecAltIDGrp_NoLegSecurityAltID_217);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1331176362"}, LegSecAltIDGrp_NoLegSecurityAltID_217);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_217);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_111;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_1127779550"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{670914115}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_1764317072"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{2019959064}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1872839840"}, InstrumentLeg_111);
      FIX::LegContractMultiplier LegContractMultiplier_111;
      LegContractMultiplier_111.setString("18992499");
set_field(noLegs_0_1_1, LegContractMultiplier_111, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{2032010233}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1762543756"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_2106210911"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1710847550"}, InstrumentLeg_111);
      FIX::LegCouponRate LegCouponRate_111;
      LegCouponRate_111.setString("15.030000");
set_field(noLegs_0_1_1, LegCouponRate_111, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_80779142"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"CAN"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_451946309"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{973655412}, InstrumentLeg_111);
      FIX::LegFactor LegFactor_111;
      LegFactor_111.setString("20528707");
set_field(noLegs_0_1_1, LegFactor_111, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{2032300451}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_495811649"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_483555330"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_1911114779"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_568663396"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_1610808537"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_1842407835"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_982636866"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_2087802615"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_111);
      FIX::LegOptionRatio LegOptionRatio_111;
      LegOptionRatio_111.setString("1334267");
set_field(noLegs_0_1_1, LegOptionRatio_111, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_1983816271"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1139562298"}, InstrumentLeg_111);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_111;
      LegPriceUnitOfMeasureQty_111.setString("14646031");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_111, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegProduct{964112173}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{1810476414}, InstrumentLeg_111);
      FIX::LegRatioQty LegRatioQty_111;
      LegRatioQty_111.setString("10814365");
set_field(noLegs_0_1_1, LegRatioQty_111, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_836587589"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_1535832606"}, InstrumentLeg_111);
      FIX::LegRepurchaseRate LegRepurchaseRate_111;
      LegRepurchaseRate_111.setString("28.920000");
set_field(noLegs_0_1_1, LegRepurchaseRate_111, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{721114174}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_1150892714"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_791930155"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_284478076"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_927670569"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_872709297"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_736907236"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegSide{'2'}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_1324655606"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_111);
      FIX::LegStrikePrice LegStrikePrice_111;
      LegStrikePrice_111.setString("12094724");
set_field(noLegs_0_1_1, LegStrikePrice_111, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_58890650"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_617630725"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_973103541"}, InstrumentLeg_111);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_627554046"}, InstrumentLeg_111);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_111;
      LegUnitOfMeasureQty_111.setString("809556");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_111, InstrumentLeg_111);
      all_values.push_back(InstrumentLeg_111);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_218;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1610190912"}, LegSecAltIDGrp_NoLegSecurityAltID_218);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_21274581"}, LegSecAltIDGrp_NoLegSecurityAltID_218);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_218);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_219;
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltID{"STRING_66775907"}, LegSecAltIDGrp_NoLegSecurityAltID_219);
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltIDSource{"STRING_1743617693"}, LegSecAltIDGrp_NoLegSecurityAltID_219);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_219);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      noRelatedSym_0_0.addGroup(noLegs_0_1_1);
    }
    // Instrument
    multiset<string> Instrument_75;
    FIX::AttachmentPoint AttachmentPoint_75;
    AttachmentPoint_75.setString("8.520000");
set_field(noRelatedSym_0_0, AttachmentPoint_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::CFICode{"STRING_1206338206"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::CPProgram{99}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::CPRegType{"STRING_821719377"}, Instrument_75);
    FIX::CapPrice CapPrice_75;
    CapPrice_75.setString("8693309");
set_field(noRelatedSym_0_0, CapPrice_75, Instrument_75);
    FIX::ContractMultiplier ContractMultiplier_75;
    ContractMultiplier_75.setString("21421737");
set_field(noRelatedSym_0_0, ContractMultiplier_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::ContractMultiplierUnit{2}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::ContractSettlMonth{"MONTHYEAR_257679930"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::CountryOfIssue{"COUNTRY_827893000"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_231937493"}, Instrument_75);
    FIX::CouponRate CouponRate_75;
    CouponRate_75.setString("26.450000");
set_field(noRelatedSym_0_0, CouponRate_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::CreditRating{"STRING_1619823155"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::DatedDate{"LOCALMKTDATE_516415569"}, Instrument_75);
    FIX::DetachmentPoint DetachmentPoint_75;
    DetachmentPoint_75.setString("95.660000");
set_field(noRelatedSym_0_0, DetachmentPoint_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuer{"DATA_345048804"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::EncodedIssuerLen{1253322805}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDesc{"DATA_417447839"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::EncodedSecurityDescLen{1669704410}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::ExerciseStyle{1}, Instrument_75);
    FIX::Factor Factor_75;
    Factor_75.setString("5515232");
set_field(noRelatedSym_0_0, Factor_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::FlexibleIndicator{true}, Instrument_75);
    FIX::FloorPrice FloorPrice_75;
    FloorPrice_75.setString("11691539");
set_field(noRelatedSym_0_0, FloorPrice_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::FlowScheduleType{3}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::InstrRegistry{"STRING_1502846502"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_225340794"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::IssueDate{"LOCALMKTDATE_965553766"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::Issuer{"STRING_1271384154"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::ListMethod{1}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::LocaleOfIssue{"STRING_561687811"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::MaturityDate{"LOCALMKTDATE_1128991358"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1498454907"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::MaturityTime{"TZTIMEONLY_1622424999"}, Instrument_75);
    FIX::MinPriceIncrement MinPriceIncrement_75;
    MinPriceIncrement_75.setString("19507107");
set_field(noRelatedSym_0_0, MinPriceIncrement_75, Instrument_75);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_75;
    MinPriceIncrementAmount_75.setString("2203022");
set_field(noRelatedSym_0_0, MinPriceIncrementAmount_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::NTPositionLimit{1617115107}, Instrument_75);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_75;
    NotionalPercentageOutstanding_75.setString("40.530000");
set_field(noRelatedSym_0_0, NotionalPercentageOutstanding_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::OptAttribute{'4'}, Instrument_75);
    FIX::OptPayoutAmount OptPayoutAmount_75;
    OptPayoutAmount_75.setString("2975244");
set_field(noRelatedSym_0_0, OptPayoutAmount_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::OptPayoutType{2}, Instrument_75);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_75;
    OriginalNotionalPercentageOutstanding_75.setString("48.070000");
set_field(noRelatedSym_0_0, OriginalNotionalPercentageOutstanding_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::Pool{"STRING_1917347614"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::PositionLimit{62403468}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::PriceUnitOfMeasure{"STRING_114912770"}, Instrument_75);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_75;
    PriceUnitOfMeasureQty_75.setString("13157262");
set_field(noRelatedSym_0_0, PriceUnitOfMeasureQty_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::Product{9}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::ProductComplex{"STRING_1784617181"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::PutOrCall{1}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::RedemptionDate{"LOCALMKTDATE_896801799"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::RepoCollateralSecurityType{"STRING_368826705"}, Instrument_75);
    FIX::RepurchaseRate RepurchaseRate_75;
    RepurchaseRate_75.setString("68.870000");
set_field(noRelatedSym_0_0, RepurchaseRate_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::RepurchaseTerm{2065955758}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::RestructuringType{"STRING_XR"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SecurityDesc{"STRING_215299741"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SecurityExchange{"EXCHANGE_1168581683"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SecurityGroup{"STRING_151480565"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SecurityID{"STRING_1180853507"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SecurityIDSource{"STRING_M"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SecuritySubType{"STRING_1742541318"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SecurityType{"STRING_FXSWAP"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::Seniority{"STRING_SB"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SettlMethod{'C'}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SettleOnOpenFlag{"STRING_1224700634"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::StateOrProvinceOfIssue{"STRING_14870757"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_75);
    FIX::StrikeMultiplier StrikeMultiplier_75;
    StrikeMultiplier_75.setString("4928529");
set_field(noRelatedSym_0_0, StrikeMultiplier_75, Instrument_75);
    FIX::StrikePrice StrikePrice_75;
    StrikePrice_75.setString("9846385");
set_field(noRelatedSym_0_0, StrikePrice_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::StrikePriceBoundaryMethod{4}, Instrument_75);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_75;
    StrikePriceBoundaryPrecision_75.setString("40.780000");
set_field(noRelatedSym_0_0, StrikePriceBoundaryPrecision_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::StrikePriceDeterminationMethod{4}, Instrument_75);
    FIX::StrikeValue StrikeValue_75;
    StrikeValue_75.setString("1471424");
set_field(noRelatedSym_0_0, StrikeValue_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::Symbol{"STRING_159754804"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::TimeUnit{"STRING_Yr"}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::UnitOfMeasure{"STRING_USD"}, Instrument_75);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_75;
    UnitOfMeasureQty_75.setString("14475131");
set_field(noRelatedSym_0_0, UnitOfMeasureQty_75, Instrument_75);
    set_field(noRelatedSym_0_0, FIX::ValuationMethod{"STRING_CDS"}, Instrument_75);
    all_values.push_back(Instrument_75);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_153;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_153);
      FIX::ComplexEventPrice ComplexEventPrice_153;
      ComplexEventPrice_153.setString("13203072");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_153, ComplexEvents_NoComplexEvents_153);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_153);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_153;
      ComplexEventPriceBoundaryPrecision_153.setString("60.920000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_153, ComplexEvents_NoComplexEvents_153);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_153);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_153);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_153;
      ComplexOptPayoutAmount_153.setString("15561195");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_153, ComplexEvents_NoComplexEvents_153);
      all_values.push_back(ComplexEvents_NoComplexEvents_153);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_306;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 29, 53, 8, 12, 2014)}, ComplexEventDates_NoComplexEventDates_306);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 10, 50, 20, 5, 2006)}, ComplexEventDates_NoComplexEventDates_306);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_306);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_625;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 10, 13)}, ComplexEventTimes_NoComplexEventTimes_625);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 41, 19)}, ComplexEventTimes_NoComplexEventTimes_625);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_625);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_626;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 15, 15)}, ComplexEventTimes_NoComplexEventTimes_626);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 47, 6)}, ComplexEventTimes_NoComplexEventTimes_626);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_626);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_627;
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 27, 39)}, ComplexEventTimes_NoComplexEventTimes_627);
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 30, 42)}, ComplexEventTimes_NoComplexEventTimes_627);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_627);
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
      multiset<string> ComplexEvents_NoComplexEvents_154;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_154);
      FIX::ComplexEventPrice ComplexEventPrice_154;
      ComplexEventPrice_154.setString("14085369");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_154, ComplexEvents_NoComplexEvents_154);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_154);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_154;
      ComplexEventPriceBoundaryPrecision_154.setString("71.650000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_154, ComplexEvents_NoComplexEvents_154);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_154);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_154);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_154;
      ComplexOptPayoutAmount_154.setString("19266775");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_154, ComplexEvents_NoComplexEvents_154);
      all_values.push_back(ComplexEvents_NoComplexEvents_154);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_307;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 30, 2, 15, 5, 2007)}, ComplexEventDates_NoComplexEventDates_307);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(11, 28, 10, 4, 1, 2015)}, ComplexEventDates_NoComplexEventDates_307);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_307);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_628;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 30, 2)}, ComplexEventTimes_NoComplexEventTimes_628);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 24, 9)}, ComplexEventTimes_NoComplexEventTimes_628);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_628);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_629;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 34, 3)}, ComplexEventTimes_NoComplexEventTimes_629);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 59, 49)}, ComplexEventTimes_NoComplexEventTimes_629);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_629);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_308;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 12, 22, 20, 5, 2012)}, ComplexEventDates_NoComplexEventDates_308);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 56, 40, 15, 1, 2017)}, ComplexEventDates_NoComplexEventDates_308);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_308);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_630;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 40, 41)}, ComplexEventTimes_NoComplexEventTimes_630);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 57, 24)}, ComplexEventTimes_NoComplexEventTimes_630);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_630);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_631;
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 50, 29)}, ComplexEventTimes_NoComplexEventTimes_631);
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 28, 59)}, ComplexEventTimes_NoComplexEventTimes_631);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_631);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_309;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 3, 43, 1, 12, 2007)}, ComplexEventDates_NoComplexEventDates_309);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 15, 12, 18, 5, 2003)}, ComplexEventDates_NoComplexEventDates_309);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_309);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_632;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(21, 56, 52)}, ComplexEventTimes_NoComplexEventTimes_632);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 49, 51)}, ComplexEventTimes_NoComplexEventTimes_632);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_632);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_633;
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 34, 39)}, ComplexEventTimes_NoComplexEventTimes_633);
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 59, 26)}, ComplexEventTimes_NoComplexEventTimes_633);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_633);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_155;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_155);
      FIX::ComplexEventPrice ComplexEventPrice_155;
      ComplexEventPrice_155.setString("14248808");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_155, ComplexEvents_NoComplexEvents_155);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_155);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_155;
      ComplexEventPriceBoundaryPrecision_155.setString("80.090000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_155, ComplexEvents_NoComplexEvents_155);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_155);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{5}, ComplexEvents_NoComplexEvents_155);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_155;
      ComplexOptPayoutAmount_155.setString("11854732");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_155, ComplexEvents_NoComplexEvents_155);
      all_values.push_back(ComplexEvents_NoComplexEvents_155);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_310;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 9, 53, 24, 7, 2009)}, ComplexEventDates_NoComplexEventDates_310);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(19, 57, 47, 23, 10, 2004)}, ComplexEventDates_NoComplexEventDates_310);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_310);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_634;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 48, 15)}, ComplexEventTimes_NoComplexEventTimes_634);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 15, 40)}, ComplexEventTimes_NoComplexEventTimes_634);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_634);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_635;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 1, 30)}, ComplexEventTimes_NoComplexEventTimes_635);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 11, 10)}, ComplexEventTimes_NoComplexEventTimes_635);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_635);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_636;
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 11, 6)}, ComplexEventTimes_NoComplexEventTimes_636);
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 15, 30)}, ComplexEventTimes_NoComplexEventTimes_636);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_636);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_311;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 9, 12, 21, 6, 2012)}, ComplexEventDates_NoComplexEventDates_311);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 7, 21, 24, 2, 2006)}, ComplexEventDates_NoComplexEventDates_311);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_311);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_637;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 2, 37)}, ComplexEventTimes_NoComplexEventTimes_637);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 48, 22)}, ComplexEventTimes_NoComplexEventTimes_637);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_637);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_312;
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(19, 25, 47, 2, 12, 2008)}, ComplexEventDates_NoComplexEventDates_312);
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 6, 1, 24, 12, 2010)}, ComplexEventDates_NoComplexEventDates_312);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_312);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_638;
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 13, 10)}, ComplexEventTimes_NoComplexEventTimes_638);
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 38, 50)}, ComplexEventTimes_NoComplexEventTimes_638);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_638);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_639;
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 44, 18)}, ComplexEventTimes_NoComplexEventTimes_639);
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 58, 12)}, ComplexEventTimes_NoComplexEventTimes_639);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_639);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_640;
          set_field(noComplexEventTimes_0_2_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 30, 40)}, ComplexEventTimes_NoComplexEventTimes_640);
          set_field(noComplexEventTimes_0_2_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 42, 7)}, ComplexEventTimes_NoComplexEventTimes_640);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_640);
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
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_150;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1439178040"}, EvntGrp_NoEvents_150);
      FIX::EventPx EventPx_150;
      EventPx_150.setString("20395361");
set_field(noEvents_0_1_0, EventPx_150, EvntGrp_NoEvents_150);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_111595281"}, EvntGrp_NoEvents_150);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(10, 35, 56, 11, 2, 2000)}, EvntGrp_NoEvents_150);
      set_field(noEvents_0_1_0, FIX::EventType{10}, EvntGrp_NoEvents_150);
      all_values.push_back(EvntGrp_NoEvents_150);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_139;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_1422229784"}, InstrumentParties_NoInstrumentParties_139);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_139);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1487661469}, InstrumentParties_NoInstrumentParties_139);
      all_values.push_back(InstrumentParties_NoInstrumentParties_139);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1292180235"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1045227000}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_288);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_244288272"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{2058091527}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_289);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_140;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1148622118"}, InstrumentParties_NoInstrumentParties_140);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_140);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{338347572}, InstrumentParties_NoInstrumentParties_140);
      all_values.push_back(InstrumentParties_NoInstrumentParties_140);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_142411966"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{815991292}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_290);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_2006844847"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{738452307}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_291);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292;
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubID{"STRING_606262646"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);
        set_field(noInstrumentPartySubIDs_0_1_2_2, FIX::InstrumentPartySubIDType{2048613735}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_292);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_2);
      }
      noRelatedSym_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_152;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_2045440686"}, SecAltIDGrp_NoSecurityAltID_152);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1940666235"}, SecAltIDGrp_NoSecurityAltID_152);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_152);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_0_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_153;
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltID{"STRING_183694933"}, SecAltIDGrp_NoSecurityAltID_153);
      set_field(noSecurityAltID_0_1_1, FIX::SecurityAltIDSource{"STRING_1481383033"}, SecAltIDGrp_NoSecurityAltID_153);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_153);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_0.addGroup(noSecurityAltID_0_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_150;
    set_field(noRelatedSym_0_0, FIX::SecurityXML{"XMLDATA_333124470"}, SecurityXML_150);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLLen{1497106969}, SecurityXML_150);
    set_field(noRelatedSym_0_0, FIX::SecurityXMLSchema{"STRING_1602870910"}, SecurityXML_150);
    all_values.push_back(SecurityXML_150);
    all_compo_names.insert("...NoRelatedSym..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_111;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1035863910"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{379054508}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_767338022"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{1023863738}, UnderlyingInstrument_111);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_111;
      UnderlyingAdjustedQuantity_111.setString("18012842");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_111, UnderlyingInstrument_111);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_111;
      UnderlyingAllocationPercent_111.setString("36.730000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_111, UnderlyingInstrument_111);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_111;
      UnderlyingAttachmentPoint_111.setString("15.590000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_128122687"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_576680260"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1409268559"}, UnderlyingInstrument_111);
      FIX::UnderlyingCapValue UnderlyingCapValue_111;
      UnderlyingCapValue_111.setString("3724109");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_111, UnderlyingInstrument_111);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_111;
      UnderlyingCashAmount_111.setString("4872881");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_111);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_111;
      UnderlyingContractMultiplier_111.setString("3778345");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{825635711}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_546400974"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_520246522"}, UnderlyingInstrument_111);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_111;
      UnderlyingCouponRate_111.setString("70.030000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_405762173"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_111);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_111;
      UnderlyingCurrentValue_111.setString("3068922");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_111, UnderlyingInstrument_111);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_111;
      UnderlyingDetachmentPoint_111.setString("84.820000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_111, UnderlyingInstrument_111);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_111;
      UnderlyingDirtyPrice_111.setString("21458466");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_111, UnderlyingInstrument_111);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_111;
      UnderlyingEndPrice_111.setString("1000748");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_111, UnderlyingInstrument_111);
      FIX::UnderlyingEndValue UnderlyingEndValue_111;
      UnderlyingEndValue_111.setString("15144934");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1479746073}, UnderlyingInstrument_111);
      FIX::UnderlyingFXRate UnderlyingFXRate_111;
      UnderlyingFXRate_111.setString("4331993");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_111);
      FIX::UnderlyingFactor UnderlyingFactor_111;
      UnderlyingFactor_111.setString("9351333");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1228983899}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_1899980646"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1314187843"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_1996321922"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_776360736"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_967988488"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1280821947"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1140402296"}, UnderlyingInstrument_111);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_111;
      UnderlyingNotionalPercentageOutstanding_111.setString("11.750000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_111);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_111;
      UnderlyingOriginalNotionalPercentageOutstanding_111.setString("72.070000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1468522134"}, UnderlyingInstrument_111);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_111;
      UnderlyingPriceUnitOfMeasureQty_111.setString("1973066");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{812594237}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{1846356690}, UnderlyingInstrument_111);
      FIX::UnderlyingPx UnderlyingPx_111;
      UnderlyingPx_111.setString("10229424");
set_field(noUnderlyings_0_1_0, UnderlyingPx_111, UnderlyingInstrument_111);
      FIX::UnderlyingQty UnderlyingQty_111;
      UnderlyingQty_111.setString("13589952");
set_field(noUnderlyings_0_1_0, UnderlyingQty_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_219119564"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_517085766"}, UnderlyingInstrument_111);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_111;
      UnderlyingRepurchaseRate_111.setString("73.850000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{1477818393}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_617491768"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_2071649645"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_661133227"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_615854807"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_24240845"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_28142995"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_2095600880"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_457440163"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_892259731"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_111);
      FIX::UnderlyingStartValue UnderlyingStartValue_111;
      UnderlyingStartValue_111.setString("16864240");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_644756730"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_111);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_111;
      UnderlyingStrikePrice_111.setString("14211174");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_111, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_1017943251"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_668600636"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_414036114"}, UnderlyingInstrument_111);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_2114054427"}, UnderlyingInstrument_111);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_111;
      UnderlyingUnitOfMeasureQty_111.setString("3786191");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_111, UnderlyingInstrument_111);
      all_values.push_back(UnderlyingInstrument_111);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_230;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1435092913"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_575925896"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_230);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_231;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1628817559"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1133965955"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_231);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_232;
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_1598868307"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);
        set_field(noUnderlyingSecurityAltID_0_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_840329123"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_232);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_220;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_2115954073"}, UnderlyingStipulations_NoUnderlyingStips_220);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_457602860"}, UnderlyingStipulations_NoUnderlyingStips_220);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_220);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_221;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_683420265"}, UnderlyingStipulations_NoUnderlyingStips_221);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_585962193"}, UnderlyingStipulations_NoUnderlyingStips_221);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_221);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_238;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1344553492"}, UndlyInstrumentParties_NoUndlyInstrumentParties_238);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_238);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{406009703}, UndlyInstrumentParties_NoUndlyInstrumentParties_238);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_238);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1149934233"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{863449866}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_476);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_117472571"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{2033184801}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_477);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_402390281"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{762229301}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_478);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_2);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_239;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_2083139564"}, UndlyInstrumentParties_NoUndlyInstrumentParties_239);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_239);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{35863119}, UndlyInstrumentParties_NoUndlyInstrumentParties_239);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_239);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_458769607"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{449899234}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_479);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_240;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_920169946"}, UndlyInstrumentParties_NoUndlyInstrumentParties_240);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_240);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{1266122556}, UndlyInstrumentParties_NoUndlyInstrumentParties_240);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_240);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1413314699"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{747456467}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_480);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1341745167"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{864699358}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_481);
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
    FIX::PrevClosePx PrevClosePx_13;
    PrevClosePx_13.setString("15877855");
set_field(noRelatedSym_0_1, PrevClosePx_13, RFQReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteRequestType{2}, RFQReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::QuoteType{0}, RFQReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradingSessionID{"STRING_1"}, RFQReqGrp_NoRelatedSym_1);
    set_field(noRelatedSym_0_1, FIX::TradingSessionSubID{"STRING_5"}, RFQReqGrp_NoRelatedSym_1);
    all_values.push_back(RFQReqGrp_NoRelatedSym_1);
    all_compo_names.insert("...NoRelatedSym");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_112;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_279673660"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{427837148}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_473465330"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{685683363}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_1800533636"}, InstrumentLeg_112);
      FIX::LegContractMultiplier LegContractMultiplier_112;
      LegContractMultiplier_112.setString("16233995");
set_field(noLegs_1_1_0, LegContractMultiplier_112, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{1549133229}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1918006207"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_1509100717"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1951523511"}, InstrumentLeg_112);
      FIX::LegCouponRate LegCouponRate_112;
      LegCouponRate_112.setString("18.600000");
set_field(noLegs_1_1_0, LegCouponRate_112, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_1444756633"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_250872152"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{52978440}, InstrumentLeg_112);
      FIX::LegFactor LegFactor_112;
      LegFactor_112.setString("10185142");
set_field(noLegs_1_1_0, LegFactor_112, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{1171042099}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_890367244"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_137153121"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1378821311"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_156198295"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_884609589"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_573082830"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1020897654"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_324911531"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_112);
      FIX::LegOptionRatio LegOptionRatio_112;
      LegOptionRatio_112.setString("18540674");
set_field(noLegs_1_1_0, LegOptionRatio_112, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_222816334"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_203713525"}, InstrumentLeg_112);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_112;
      LegPriceUnitOfMeasureQty_112.setString("11257157");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_112, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegProduct{502489994}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{631550674}, InstrumentLeg_112);
      FIX::LegRatioQty LegRatioQty_112;
      LegRatioQty_112.setString("15991810");
set_field(noLegs_1_1_0, LegRatioQty_112, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1188173357"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_284600662"}, InstrumentLeg_112);
      FIX::LegRepurchaseRate LegRepurchaseRate_112;
      LegRepurchaseRate_112.setString("70.140000");
set_field(noLegs_1_1_0, LegRepurchaseRate_112, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{589822938}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_55123221"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_436714083"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_393862801"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_587875081"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_1881470716"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_2135555283"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegSide{'1'}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_2132342868"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_112);
      FIX::LegStrikePrice LegStrikePrice_112;
      LegStrikePrice_112.setString("11559013");
set_field(noLegs_1_1_0, LegStrikePrice_112, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_931417319"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_164673747"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_387238982"}, InstrumentLeg_112);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_1087615615"}, InstrumentLeg_112);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_112;
      LegUnitOfMeasureQty_112.setString("10492833");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_112, InstrumentLeg_112);
      all_values.push_back(InstrumentLeg_112);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_220;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_2108513269"}, LegSecAltIDGrp_NoLegSecurityAltID_220);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_1374194868"}, LegSecAltIDGrp_NoLegSecurityAltID_220);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_220);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoLegs noLegs_1_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_113;
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuer{"DATA_2080751682"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::EncodedLegIssuerLen{1815097059}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDesc{"DATA_1597011202"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::EncodedLegSecurityDescLen{136981560}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegCFICode{"STRING_793329178"}, InstrumentLeg_113);
      FIX::LegContractMultiplier LegContractMultiplier_113;
      LegContractMultiplier_113.setString("20995011");
set_field(noLegs_1_1_1, LegContractMultiplier_113, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegContractMultiplierUnit{768532234}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_245026628"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegCountryOfIssue{"COUNTRY_1140190905"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1053132896"}, InstrumentLeg_113);
      FIX::LegCouponRate LegCouponRate_113;
      LegCouponRate_113.setString("36.420000");
set_field(noLegs_1_1_1, LegCouponRate_113, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegCreditRating{"STRING_1730013843"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegCurrency{"CHF"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegDatedDate{"LOCALMKTDATE_2123876645"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegExerciseStyle{1696131198}, InstrumentLeg_113);
      FIX::LegFactor LegFactor_113;
      LegFactor_113.setString("14908247");
set_field(noLegs_1_1_1, LegFactor_113, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegFlowScheduleType{2111948280}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegInstrRegistry{"STRING_705137610"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1475684014"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegIssueDate{"LOCALMKTDATE_5514707"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegIssuer{"STRING_732658236"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegLocaleOfIssue{"STRING_484101685"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_936932027"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_897331984"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegMaturityTime{"TZTIMEONLY_871340668"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegOptAttribute{'2'}, InstrumentLeg_113);
      FIX::LegOptionRatio LegOptionRatio_113;
      LegOptionRatio_113.setString("19466153");
set_field(noLegs_1_1_1, LegOptionRatio_113, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegPool{"STRING_1831662481"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1985577263"}, InstrumentLeg_113);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_113;
      LegPriceUnitOfMeasureQty_113.setString("11733265");
set_field(noLegs_1_1_1, LegPriceUnitOfMeasureQty_113, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegProduct{1764930515}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegPutOrCall{1653190674}, InstrumentLeg_113);
      FIX::LegRatioQty LegRatioQty_113;
      LegRatioQty_113.setString("6228540");
set_field(noLegs_1_1_1, LegRatioQty_113, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1901912075"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegRepoCollateralSecurityType{"STRING_299036204"}, InstrumentLeg_113);
      FIX::LegRepurchaseRate LegRepurchaseRate_113;
      LegRepurchaseRate_113.setString("16.420000");
set_field(noLegs_1_1_1, LegRepurchaseRate_113, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegRepurchaseTerm{522960661}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegSecurityDesc{"STRING_544062833"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegSecurityExchange{"EXCHANGE_1715062547"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegSecurityID{"STRING_1576093557"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegSecurityIDSource{"STRING_1864186475"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegSecuritySubType{"STRING_1297592743"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegSecurityType{"STRING_536866026"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegSide{'1'}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_1273985740"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_113);
      FIX::LegStrikePrice LegStrikePrice_113;
      LegStrikePrice_113.setString("12384503");
set_field(noLegs_1_1_1, LegStrikePrice_113, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegSymbol{"STRING_790651187"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegSymbolSfx{"STRING_145082064"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegTimeUnit{"STRING_1243965079"}, InstrumentLeg_113);
      set_field(noLegs_1_1_1, FIX::LegUnitOfMeasure{"STRING_1523309423"}, InstrumentLeg_113);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_113;
      LegUnitOfMeasureQty_113.setString("6291837");
set_field(noLegs_1_1_1, LegUnitOfMeasureQty_113, InstrumentLeg_113);
      all_values.push_back(InstrumentLeg_113);
      all_compo_names.insert("...NoRelatedSym...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_221;
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltID{"STRING_273157759"}, LegSecAltIDGrp_NoLegSecurityAltID_221);
        set_field(noLegSecurityAltID_1_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1500524418"}, LegSecAltIDGrp_NoLegSecurityAltID_221);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_221);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_222;
        set_field(noLegSecurityAltID_1_1_2_1, FIX::LegSecurityAltID{"STRING_2057961100"}, LegSecAltIDGrp_NoLegSecurityAltID_222);
        set_field(noLegSecurityAltID_1_1_2_1, FIX::LegSecurityAltIDSource{"STRING_72289432"}, LegSecAltIDGrp_NoLegSecurityAltID_222);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_222);
        all_compo_names.insert("...NoRelatedSym...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_1.addGroup(noLegSecurityAltID_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noLegs_1_1_1);
    }
    // Instrument
    multiset<string> Instrument_76;
    FIX::AttachmentPoint AttachmentPoint_76;
    AttachmentPoint_76.setString("32.510000");
set_field(noRelatedSym_0_1, AttachmentPoint_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::CFICode{"STRING_1896054715"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::CPProgram{1}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::CPRegType{"STRING_802150118"}, Instrument_76);
    FIX::CapPrice CapPrice_76;
    CapPrice_76.setString("14017617");
set_field(noRelatedSym_0_1, CapPrice_76, Instrument_76);
    FIX::ContractMultiplier ContractMultiplier_76;
    ContractMultiplier_76.setString("18684700");
set_field(noRelatedSym_0_1, ContractMultiplier_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::ContractMultiplierUnit{0}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::ContractSettlMonth{"MONTHYEAR_1700797946"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::CountryOfIssue{"COUNTRY_295858061"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1079539207"}, Instrument_76);
    FIX::CouponRate CouponRate_76;
    CouponRate_76.setString("71.310000");
set_field(noRelatedSym_0_1, CouponRate_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::CreditRating{"STRING_2010920609"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::DatedDate{"LOCALMKTDATE_508149117"}, Instrument_76);
    FIX::DetachmentPoint DetachmentPoint_76;
    DetachmentPoint_76.setString("36.060000");
set_field(noRelatedSym_0_1, DetachmentPoint_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuer{"DATA_1161029704"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::EncodedIssuerLen{1045015143}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDesc{"DATA_1287620511"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::EncodedSecurityDescLen{287531796}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::ExerciseStyle{2}, Instrument_76);
    FIX::Factor Factor_76;
    Factor_76.setString("21045022");
set_field(noRelatedSym_0_1, Factor_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::FlexProductEligibilityIndicator{true}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::FlexibleIndicator{false}, Instrument_76);
    FIX::FloorPrice FloorPrice_76;
    FloorPrice_76.setString("1021006");
set_field(noRelatedSym_0_1, FloorPrice_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::FlowScheduleType{4}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::InstrRegistry{"STRING_1297005682"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::InstrmtAssignmentMethod{'7'}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_655877058"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::IssueDate{"LOCALMKTDATE_1570163442"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::Issuer{"STRING_84325146"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::ListMethod{0}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::LocaleOfIssue{"STRING_1642452874"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::MaturityDate{"LOCALMKTDATE_1269028397"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::MaturityMonthYear{"MONTHYEAR_314925578"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::MaturityTime{"TZTIMEONLY_740585198"}, Instrument_76);
    FIX::MinPriceIncrement MinPriceIncrement_76;
    MinPriceIncrement_76.setString("20711785");
set_field(noRelatedSym_0_1, MinPriceIncrement_76, Instrument_76);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_76;
    MinPriceIncrementAmount_76.setString("17166873");
set_field(noRelatedSym_0_1, MinPriceIncrementAmount_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::NTPositionLimit{461571617}, Instrument_76);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_76;
    NotionalPercentageOutstanding_76.setString("34.140000");
set_field(noRelatedSym_0_1, NotionalPercentageOutstanding_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::OptAttribute{'1'}, Instrument_76);
    FIX::OptPayoutAmount OptPayoutAmount_76;
    OptPayoutAmount_76.setString("7574296");
set_field(noRelatedSym_0_1, OptPayoutAmount_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::OptPayoutType{2}, Instrument_76);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_76;
    OriginalNotionalPercentageOutstanding_76.setString("87.480000");
set_field(noRelatedSym_0_1, OriginalNotionalPercentageOutstanding_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::Pool{"STRING_620866640"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::PositionLimit{2067961738}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::PriceUnitOfMeasure{"STRING_1781896344"}, Instrument_76);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_76;
    PriceUnitOfMeasureQty_76.setString("9654932");
set_field(noRelatedSym_0_1, PriceUnitOfMeasureQty_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::Product{11}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::ProductComplex{"STRING_2069428140"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::PutOrCall{0}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::RedemptionDate{"LOCALMKTDATE_278614132"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::RepoCollateralSecurityType{"STRING_1447926660"}, Instrument_76);
    FIX::RepurchaseRate RepurchaseRate_76;
    RepurchaseRate_76.setString("82.130000");
set_field(noRelatedSym_0_1, RepurchaseRate_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::RepurchaseTerm{380714759}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::RestructuringType{"STRING_XR"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SecurityDesc{"STRING_1019240247"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SecurityExchange{"EXCHANGE_1111999135"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SecurityGroup{"STRING_578783669"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SecurityID{"STRING_441920041"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SecurityIDSource{"STRING_B"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SecurityStatus{"STRING_1"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SecuritySubType{"STRING_2084372915"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SecurityType{"STRING_TIPS"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::Seniority{"STRING_SR"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SettlMethod{'C'}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SettleOnOpenFlag{"STRING_241563899"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::StateOrProvinceOfIssue{"STRING_1029267429"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::StrikeCurrency{"CAN"}, Instrument_76);
    FIX::StrikeMultiplier StrikeMultiplier_76;
    StrikeMultiplier_76.setString("1517853");
set_field(noRelatedSym_0_1, StrikeMultiplier_76, Instrument_76);
    FIX::StrikePrice StrikePrice_76;
    StrikePrice_76.setString("18964757");
set_field(noRelatedSym_0_1, StrikePrice_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::StrikePriceBoundaryMethod{3}, Instrument_76);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_76;
    StrikePriceBoundaryPrecision_76.setString("41.470000");
set_field(noRelatedSym_0_1, StrikePriceBoundaryPrecision_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_76);
    FIX::StrikeValue StrikeValue_76;
    StrikeValue_76.setString("546443");
set_field(noRelatedSym_0_1, StrikeValue_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::Symbol{"STRING_553139206"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::TimeUnit{"STRING_D"}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::UnitOfMeasure{"STRING_MMbbl"}, Instrument_76);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_76;
    UnitOfMeasureQty_76.setString("9686759");
set_field(noRelatedSym_0_1, UnitOfMeasureQty_76, Instrument_76);
    set_field(noRelatedSym_0_1, FIX::ValuationMethod{"STRING_CDSD"}, Instrument_76);
    all_values.push_back(Instrument_76);
    all_compo_names.insert("...NoRelatedSym.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_156;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_156);
      FIX::ComplexEventPrice ComplexEventPrice_156;
      ComplexEventPrice_156.setString("15340636");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_156, ComplexEvents_NoComplexEvents_156);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_156);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_156;
      ComplexEventPriceBoundaryPrecision_156.setString("7.300000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_156, ComplexEvents_NoComplexEvents_156);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_156);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_156);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_156;
      ComplexOptPayoutAmount_156.setString("45871");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_156, ComplexEvents_NoComplexEvents_156);
      all_values.push_back(ComplexEvents_NoComplexEvents_156);
      all_compo_names.insert("...NoRelatedSym....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_313;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(15, 49, 25, 21, 6, 2011)}, ComplexEventDates_NoComplexEventDates_313);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 14, 15, 21, 10, 2013)}, ComplexEventDates_NoComplexEventDates_313);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_313);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_641;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 30, 9)}, ComplexEventTimes_NoComplexEventTimes_641);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(12, 58, 57)}, ComplexEventTimes_NoComplexEventTimes_641);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_641);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_642;
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 43, 44)}, ComplexEventTimes_NoComplexEventTimes_642);
          set_field(noComplexEventTimes_1_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 48, 45)}, ComplexEventTimes_NoComplexEventTimes_642);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_642);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_643;
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 26, 59)}, ComplexEventTimes_NoComplexEventTimes_643);
          set_field(noComplexEventTimes_1_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 26, 48)}, ComplexEventTimes_NoComplexEventTimes_643);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_643);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_314;
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 55, 55, 6, 2, 2006)}, ComplexEventDates_NoComplexEventDates_314);
        set_field(noComplexEventDates_1_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(21, 17, 35, 23, 6, 2001)}, ComplexEventDates_NoComplexEventDates_314);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_314);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_644;
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 3, 28)}, ComplexEventTimes_NoComplexEventTimes_644);
          set_field(noComplexEventTimes_1_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 16, 56)}, ComplexEventTimes_NoComplexEventTimes_644);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_644);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_645;
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 23, 27)}, ComplexEventTimes_NoComplexEventTimes_645);
          set_field(noComplexEventTimes_1_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 54, 3)}, ComplexEventTimes_NoComplexEventTimes_645);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_645);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_1_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_646;
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 59, 0)}, ComplexEventTimes_NoComplexEventTimes_646);
          set_field(noComplexEventTimes_1_0_1_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 46, 58)}, ComplexEventTimes_NoComplexEventTimes_646);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_646);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_1.addGroup(noComplexEventTimes_1_0_1_3_2);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_315;
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 25, 8, 12, 4, 2003)}, ComplexEventDates_NoComplexEventDates_315);
        set_field(noComplexEventDates_1_0_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 24, 24, 19, 7, 2010)}, ComplexEventDates_NoComplexEventDates_315);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_315);
        all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_647;
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 18, 14)}, ComplexEventTimes_NoComplexEventTimes_647);
          set_field(noComplexEventTimes_1_0_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 8, 17)}, ComplexEventTimes_NoComplexEventTimes_647);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_647);
          all_compo_names.insert("...NoRelatedSym....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_2.addGroup(noComplexEventTimes_1_0_2_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_2);
      }
      noRelatedSym_0_1.addGroup(noComplexEvents_1_1_0);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_151;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_905396914"}, EvntGrp_NoEvents_151);
      FIX::EventPx EventPx_151;
      EventPx_151.setString("11161192");
set_field(noEvents_1_1_0, EventPx_151, EvntGrp_NoEvents_151);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_1385202105"}, EvntGrp_NoEvents_151);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 32, 5, 9, 4, 2007)}, EvntGrp_NoEvents_151);
      set_field(noEvents_1_1_0, FIX::EventType{15}, EvntGrp_NoEvents_151);
      all_values.push_back(EvntGrp_NoEvents_151);
      all_compo_names.insert("...NoRelatedSym....NoEvents");

      noRelatedSym_0_1.addGroup(noEvents_1_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_141;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_504340514"}, InstrumentParties_NoInstrumentParties_141);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_141);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{1656666516}, InstrumentParties_NoInstrumentParties_141);
      all_values.push_back(InstrumentParties_NoInstrumentParties_141);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_1705757391"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{103255792}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_293);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_142;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_1126625348"}, InstrumentParties_NoInstrumentParties_142);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_142);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{21831504}, InstrumentParties_NoInstrumentParties_142);
      all_values.push_back(InstrumentParties_NoInstrumentParties_142);
      all_compo_names.insert("...NoRelatedSym....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_101442768"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{323381663}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_294);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295;
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubID{"STRING_1100296462"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubIDType{650993342}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_295);
        all_compo_names.insert("...NoRelatedSym....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      noRelatedSym_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_154;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_835113723"}, SecAltIDGrp_NoSecurityAltID_154);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_1748991130"}, SecAltIDGrp_NoSecurityAltID_154);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_154);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoSecurityAltID noSecurityAltID_1_1_1;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_155;
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltID{"STRING_1953157734"}, SecAltIDGrp_NoSecurityAltID_155);
      set_field(noSecurityAltID_1_1_1, FIX::SecurityAltIDSource{"STRING_1284461749"}, SecAltIDGrp_NoSecurityAltID_155);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_155);
      all_compo_names.insert("...NoRelatedSym....NoSecurityAltID");

      noRelatedSym_0_1.addGroup(noSecurityAltID_1_1_1);
    }
    // SecurityXML
    multiset<string> SecurityXML_152;
    set_field(noRelatedSym_0_1, FIX::SecurityXML{"XMLDATA_506904397"}, SecurityXML_152);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLLen{921793375}, SecurityXML_152);
    set_field(noRelatedSym_0_1, FIX::SecurityXMLSchema{"STRING_522180206"}, SecurityXML_152);
    all_values.push_back(SecurityXML_152);
    all_compo_names.insert("...NoRelatedSym..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_112;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_2115524731"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{1934576758}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_875363081"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{1349825497}, UnderlyingInstrument_112);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_112;
      UnderlyingAdjustedQuantity_112.setString("2081791");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_112, UnderlyingInstrument_112);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_112;
      UnderlyingAllocationPercent_112.setString("80.440000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_112, UnderlyingInstrument_112);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_112;
      UnderlyingAttachmentPoint_112.setString("18.630000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_1625763898"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_1293858558"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_497750530"}, UnderlyingInstrument_112);
      FIX::UnderlyingCapValue UnderlyingCapValue_112;
      UnderlyingCapValue_112.setString("11349467");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_112, UnderlyingInstrument_112);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_112;
      UnderlyingCashAmount_112.setString("11339615");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_112);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_112;
      UnderlyingContractMultiplier_112.setString("12382025");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{113103260}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_117048475"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1260034062"}, UnderlyingInstrument_112);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_112;
      UnderlyingCouponRate_112.setString("25.840000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_218491244"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_112);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_112;
      UnderlyingCurrentValue_112.setString("8694845");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_112, UnderlyingInstrument_112);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_112;
      UnderlyingDetachmentPoint_112.setString("8.620000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_112, UnderlyingInstrument_112);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_112;
      UnderlyingDirtyPrice_112.setString("5750891");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_112, UnderlyingInstrument_112);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_112;
      UnderlyingEndPrice_112.setString("4709920");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_112, UnderlyingInstrument_112);
      FIX::UnderlyingEndValue UnderlyingEndValue_112;
      UnderlyingEndValue_112.setString("19269349");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{1859550871}, UnderlyingInstrument_112);
      FIX::UnderlyingFXRate UnderlyingFXRate_112;
      UnderlyingFXRate_112.setString("9778964");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_112);
      FIX::UnderlyingFactor UnderlyingFactor_112;
      UnderlyingFactor_112.setString("2342474");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{47866022}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_669285759"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_21340540"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_923229103"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_2019111256"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_229519678"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1712747148"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_414099471"}, UnderlyingInstrument_112);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_112;
      UnderlyingNotionalPercentageOutstanding_112.setString("35.760000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_112);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_112;
      UnderlyingOriginalNotionalPercentageOutstanding_112.setString("0.010000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_842746694"}, UnderlyingInstrument_112);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_112;
      UnderlyingPriceUnitOfMeasureQty_112.setString("19930836");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{967874274}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{2080949252}, UnderlyingInstrument_112);
      FIX::UnderlyingPx UnderlyingPx_112;
      UnderlyingPx_112.setString("21061868");
set_field(noUnderlyings_1_1_0, UnderlyingPx_112, UnderlyingInstrument_112);
      FIX::UnderlyingQty UnderlyingQty_112;
      UnderlyingQty_112.setString("10849227");
set_field(noUnderlyings_1_1_0, UnderlyingQty_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1193499666"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_745865815"}, UnderlyingInstrument_112);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_112;
      UnderlyingRepurchaseRate_112.setString("39.940000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{629431743}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_485841214"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_25414932"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_603208957"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_1060930337"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_496407001"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_382660258"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_772997560"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_1474303467"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_1083904933"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_112);
      FIX::UnderlyingStartValue UnderlyingStartValue_112;
      UnderlyingStartValue_112.setString("15221694");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1753190692"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_112);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_112;
      UnderlyingStrikePrice_112.setString("16248183");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_112, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_1258105209"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_2010662093"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_2038917771"}, UnderlyingInstrument_112);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_965905138"}, UnderlyingInstrument_112);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_112;
      UnderlyingUnitOfMeasureQty_112.setString("7223005");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_112, UnderlyingInstrument_112);
      all_values.push_back(UnderlyingInstrument_112);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_233;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_1808651832"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_567900474"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_233);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_234;
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_1771158399"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1742117437"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_234);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_235;
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_526603705"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_708597501"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_235);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_222;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_1272469520"}, UnderlyingStipulations_NoUnderlyingStips_222);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_2012011495"}, UnderlyingStipulations_NoUnderlyingStips_222);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_222);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_223;
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipType{"STRING_1417565199"}, UnderlyingStipulations_NoUnderlyingStips_223);
        set_field(noUnderlyingStips_1_0_2_1, FIX::UnderlyingStipValue{"STRING_1758310735"}, UnderlyingStipulations_NoUnderlyingStips_223);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_223);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_224;
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipType{"STRING_2037426427"}, UnderlyingStipulations_NoUnderlyingStips_224);
        set_field(noUnderlyingStips_1_0_2_2, FIX::UnderlyingStipValue{"STRING_2020774156"}, UnderlyingStipulations_NoUnderlyingStips_224);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_224);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_241;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_386349781"}, UndlyInstrumentParties_NoUndlyInstrumentParties_241);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_241);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{1444754984}, UndlyInstrumentParties_NoUndlyInstrumentParties_241);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_241);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1339855700"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{304516327}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_482);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1235339090"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{945562744}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_483);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_242;
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1333101858"}, UndlyInstrumentParties_NoUndlyInstrumentParties_242);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_242);
        set_field(noUndlyInstrumentParties_1_0_2_1, FIX::UnderlyingInstrumentPartyRole{422897397}, UndlyInstrumentParties_NoUndlyInstrumentParties_242);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_242);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1396432480"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{314331520}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_484);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485;
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1409628557"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);
          set_field(noUndlyInstrumentPartySubIDs_1_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{2118732983}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_485);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_0_1_3_1);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_113;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1117615645"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{1070796742}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_539149809"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{741290396}, UnderlyingInstrument_113);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_113;
      UnderlyingAdjustedQuantity_113.setString("6654305");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_113, UnderlyingInstrument_113);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_113;
      UnderlyingAllocationPercent_113.setString("35.140000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_113, UnderlyingInstrument_113);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_113;
      UnderlyingAttachmentPoint_113.setString("78.970000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_1453563986"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_190739387"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_1314415744"}, UnderlyingInstrument_113);
      FIX::UnderlyingCapValue UnderlyingCapValue_113;
      UnderlyingCapValue_113.setString("7236455");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_113, UnderlyingInstrument_113);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_113;
      UnderlyingCashAmount_113.setString("19490501");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_113);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_113;
      UnderlyingContractMultiplier_113.setString("5969360");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{473323898}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1590708304"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_852886812"}, UnderlyingInstrument_113);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_113;
      UnderlyingCouponRate_113.setString("88.820000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_1303877905"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_113);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_113;
      UnderlyingCurrentValue_113.setString("3917333");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_113, UnderlyingInstrument_113);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_113;
      UnderlyingDetachmentPoint_113.setString("16.090000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_113, UnderlyingInstrument_113);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_113;
      UnderlyingDirtyPrice_113.setString("14082134");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_113, UnderlyingInstrument_113);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_113;
      UnderlyingEndPrice_113.setString("19249873");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_113, UnderlyingInstrument_113);
      FIX::UnderlyingEndValue UnderlyingEndValue_113;
      UnderlyingEndValue_113.setString("14137190");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{1851936839}, UnderlyingInstrument_113);
      FIX::UnderlyingFXRate UnderlyingFXRate_113;
      UnderlyingFXRate_113.setString("11739362");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_113);
      FIX::UnderlyingFactor UnderlyingFactor_113;
      UnderlyingFactor_113.setString("11140817");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{1145185549}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_698182523"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_37394842"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_1684335359"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_1439472919"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_702825373"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_602605225"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_741877168"}, UnderlyingInstrument_113);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_113;
      UnderlyingNotionalPercentageOutstanding_113.setString("57.120000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'7'}, UnderlyingInstrument_113);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_113;
      UnderlyingOriginalNotionalPercentageOutstanding_113.setString("29.120000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_732551249"}, UnderlyingInstrument_113);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_113;
      UnderlyingPriceUnitOfMeasureQty_113.setString("5949110");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{1113167788}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{1329487295}, UnderlyingInstrument_113);
      FIX::UnderlyingPx UnderlyingPx_113;
      UnderlyingPx_113.setString("10682349");
set_field(noUnderlyings_1_1_1, UnderlyingPx_113, UnderlyingInstrument_113);
      FIX::UnderlyingQty UnderlyingQty_113;
      UnderlyingQty_113.setString("5563924");
set_field(noUnderlyings_1_1_1, UnderlyingQty_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_34890460"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_838830219"}, UnderlyingInstrument_113);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_113;
      UnderlyingRepurchaseRate_113.setString("3.490000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{80149324}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_913941780"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_104520048"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1070970933"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_174671552"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_2029507430"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_337206291"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_2026608391"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_1055959996"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_2065256818"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_113);
      FIX::UnderlyingStartValue UnderlyingStartValue_113;
      UnderlyingStartValue_113.setString("536618");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_615955693"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_113);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_113;
      UnderlyingStrikePrice_113.setString("20554286");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_113, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_1733426707"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_193118834"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_649822133"}, UnderlyingInstrument_113);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1742332419"}, UnderlyingInstrument_113);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_113;
      UnderlyingUnitOfMeasureQty_113.setString("9864634");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_113, UnderlyingInstrument_113);
      all_values.push_back(UnderlyingInstrument_113);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_236;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_327400021"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1581374533"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_236);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_225;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_1656887316"}, UnderlyingStipulations_NoUnderlyingStips_225);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_502125870"}, UnderlyingStipulations_NoUnderlyingStips_225);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_225);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_226;
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipType{"STRING_80707982"}, UnderlyingStipulations_NoUnderlyingStips_226);
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipValue{"STRING_1691777776"}, UnderlyingStipulations_NoUnderlyingStips_226);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_226);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_243;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1940978332"}, UndlyInstrumentParties_NoUndlyInstrumentParties_243);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_243);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{107414221}, UndlyInstrumentParties_NoUndlyInstrumentParties_243);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_243);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_695414386"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{282085773}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_486);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1927522163"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1032620678}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_487);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_1);
    }
    {
      FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings noUnderlyings_1_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_114;
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuer{"DATA_161210516"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingIssuerLen{835998511}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_950393848"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::EncodedUnderlyingSecurityDescLen{1154417008}, UnderlyingInstrument_114);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_114;
      UnderlyingAdjustedQuantity_114.setString("8896604");
set_field(noUnderlyings_1_1_2, UnderlyingAdjustedQuantity_114, UnderlyingInstrument_114);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_114;
      UnderlyingAllocationPercent_114.setString("95.410000");
set_field(noUnderlyings_1_1_2, UnderlyingAllocationPercent_114, UnderlyingInstrument_114);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_114;
      UnderlyingAttachmentPoint_114.setString("46.940000");
set_field(noUnderlyings_1_1_2, UnderlyingAttachmentPoint_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCFICode{"STRING_480174018"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPProgram{"STRING_1474294506"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCPRegType{"STRING_1770961401"}, UnderlyingInstrument_114);
      FIX::UnderlyingCapValue UnderlyingCapValue_114;
      UnderlyingCapValue_114.setString("6732928");
set_field(noUnderlyings_1_1_2, UnderlyingCapValue_114, UnderlyingInstrument_114);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_114;
      UnderlyingCashAmount_114.setString("21241166");
set_field(noUnderlyings_1_1_2, UnderlyingCashAmount_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_114);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_114;
      UnderlyingContractMultiplier_114.setString("16597563");
set_field(noUnderlyings_1_1_2, UnderlyingContractMultiplier_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingContractMultiplierUnit{535264390}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_1693210194"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1093647185"}, UnderlyingInstrument_114);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_114;
      UnderlyingCouponRate_114.setString("99.280000");
set_field(noUnderlyings_1_1_2, UnderlyingCouponRate_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCreditRating{"STRING_1202613862"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_114);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_114;
      UnderlyingCurrentValue_114.setString("7469079");
set_field(noUnderlyings_1_1_2, UnderlyingCurrentValue_114, UnderlyingInstrument_114);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_114;
      UnderlyingDetachmentPoint_114.setString("54.960000");
set_field(noUnderlyings_1_1_2, UnderlyingDetachmentPoint_114, UnderlyingInstrument_114);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_114;
      UnderlyingDirtyPrice_114.setString("20812662");
set_field(noUnderlyings_1_1_2, UnderlyingDirtyPrice_114, UnderlyingInstrument_114);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_114;
      UnderlyingEndPrice_114.setString("3713514");
set_field(noUnderlyings_1_1_2, UnderlyingEndPrice_114, UnderlyingInstrument_114);
      FIX::UnderlyingEndValue UnderlyingEndValue_114;
      UnderlyingEndValue_114.setString("8966597");
set_field(noUnderlyings_1_1_2, UnderlyingEndValue_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingExerciseStyle{1979280975}, UnderlyingInstrument_114);
      FIX::UnderlyingFXRate UnderlyingFXRate_114;
      UnderlyingFXRate_114.setString("10667658");
set_field(noUnderlyings_1_1_2, UnderlyingFXRate_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_114);
      FIX::UnderlyingFactor UnderlyingFactor_114;
      UnderlyingFactor_114.setString("17593194");
set_field(noUnderlyings_1_1_2, UnderlyingFactor_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingFlowScheduleType{2099386508}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingInstrRegistry{"STRING_1339956008"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_447834353"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingIssuer{"STRING_902296708"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_346889368"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1337494763"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_321162602"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_384424062"}, UnderlyingInstrument_114);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_114;
      UnderlyingNotionalPercentageOutstanding_114.setString("87.810000");
set_field(noUnderlyings_1_1_2, UnderlyingNotionalPercentageOutstanding_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_114);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_114;
      UnderlyingOriginalNotionalPercentageOutstanding_114.setString("18.150000");
set_field(noUnderlyings_1_1_2, UnderlyingOriginalNotionalPercentageOutstanding_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_343477986"}, UnderlyingInstrument_114);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_114;
      UnderlyingPriceUnitOfMeasureQty_114.setString("17720901");
set_field(noUnderlyings_1_1_2, UnderlyingPriceUnitOfMeasureQty_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingProduct{1373711988}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingPutOrCall{2003234286}, UnderlyingInstrument_114);
      FIX::UnderlyingPx UnderlyingPx_114;
      UnderlyingPx_114.setString("1598708");
set_field(noUnderlyings_1_1_2, UnderlyingPx_114, UnderlyingInstrument_114);
      FIX::UnderlyingQty UnderlyingQty_114;
      UnderlyingQty_114.setString("9194385");
set_field(noUnderlyings_1_1_2, UnderlyingQty_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_949397824"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_219450770"}, UnderlyingInstrument_114);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_114;
      UnderlyingRepurchaseRate_114.setString("23.970000");
set_field(noUnderlyings_1_1_2, UnderlyingRepurchaseRate_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRepurchaseTerm{397687231}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingRestructuringType{"STRING_359738681"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityDesc{"STRING_721476740"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1186932728"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityID{"STRING_293521275"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityIDSource{"STRING_1092828184"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecuritySubType{"STRING_2083592446"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSecurityType{"STRING_125318602"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSeniority{"STRING_12110366"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlMethod{"STRING_1114854289"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_114);
      FIX::UnderlyingStartValue UnderlyingStartValue_114;
      UnderlyingStartValue_114.setString("21114968");
set_field(noUnderlyings_1_1_2, UnderlyingStartValue_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_307326649"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_114);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_114;
      UnderlyingStrikePrice_114.setString("6542160");
set_field(noUnderlyings_1_1_2, UnderlyingStrikePrice_114, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbol{"STRING_1522483561"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingSymbolSfx{"STRING_1187472537"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingTimeUnit{"STRING_1038640079"}, UnderlyingInstrument_114);
      set_field(noUnderlyings_1_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_1192668694"}, UnderlyingInstrument_114);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_114;
      UnderlyingUnitOfMeasureQty_114.setString("8354459");
set_field(noUnderlyings_1_1_2, UnderlyingUnitOfMeasureQty_114, UnderlyingInstrument_114);
      all_values.push_back(UnderlyingInstrument_114);
      all_compo_names.insert("...NoRelatedSym...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_237;
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_1536146681"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);
        set_field(noUnderlyingSecurityAltID_1_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_460052450"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_237);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_2_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_238;
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltID{"STRING_272770235"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);
        set_field(noUnderlyingSecurityAltID_1_2_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1391897319"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_238);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_2.addGroup(noUnderlyingSecurityAltID_1_2_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_227;
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipType{"STRING_1192208770"}, UnderlyingStipulations_NoUnderlyingStips_227);
        set_field(noUnderlyingStips_1_2_2_0, FIX::UnderlyingStipValue{"STRING_193811495"}, UnderlyingStipulations_NoUnderlyingStips_227);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_227);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_228;
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipType{"STRING_839374063"}, UnderlyingStipulations_NoUnderlyingStips_228);
        set_field(noUnderlyingStips_1_2_2_1, FIX::UnderlyingStipValue{"STRING_1166777519"}, UnderlyingStipulations_NoUnderlyingStips_228);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_228);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_1);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_2_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_229;
        set_field(noUnderlyingStips_1_2_2_2, FIX::UnderlyingStipType{"STRING_591498727"}, UnderlyingStipulations_NoUnderlyingStips_229);
        set_field(noUnderlyingStips_1_2_2_2, FIX::UnderlyingStipValue{"STRING_1199112744"}, UnderlyingStipulations_NoUnderlyingStips_229);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_229);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_2.addGroup(noUnderlyingStips_1_2_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_244;
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1778431455"}, UndlyInstrumentParties_NoUndlyInstrumentParties_244);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_244);
        set_field(noUndlyInstrumentParties_1_2_2_0, FIX::UnderlyingInstrumentPartyRole{833598795}, UndlyInstrumentParties_NoUndlyInstrumentParties_244);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_244);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1617952622"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{845709161}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_488);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_0);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_681910894"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1355107067}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_489);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_1);
        }
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_0_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490;
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_809722388"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);
          set_field(noUndlyInstrumentPartySubIDs_1_2_0_3_2, FIX::UnderlyingInstrumentPartySubIDType{989237544}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_490);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_2_0_3_2);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_0);
      }
      {
        FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_2_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_245;
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_1540095865"}, UndlyInstrumentParties_NoUndlyInstrumentParties_245);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_245);
        set_field(noUndlyInstrumentParties_1_2_2_1, FIX::UnderlyingInstrumentPartyRole{1643453561}, UndlyInstrumentParties_NoUndlyInstrumentParties_245);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_245);
        all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::RFQRequest::NoRelatedSym::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_2_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491;
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_716021213"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);
          set_field(noUndlyInstrumentPartySubIDs_1_2_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{534609993}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_491);
          all_compo_names.insert("...NoRelatedSym...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_2_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_2_1_3_0);
        }
        noUnderlyings_1_1_2.addGroup(noUndlyInstrumentParties_1_2_2_1);
      }
      noRelatedSym_0_1.addGroup(noUnderlyings_1_1_2);
    }
    msg.addGroup(noRelatedSym_0_1);
  }
  // header
  multiset<string> header_75;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_75);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1551467211"}, header_75);
  set_header_field(msg.getHeader(), FIX::BodyLength{1581151888}, header_75);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1496427505"}, header_75);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_2011519662"}, header_75);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1853922123"}, header_75);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_740841177"}, header_75);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{483959307}, header_75);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_EUC-JP"}, header_75);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{934652672}, header_75);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1323333370"}, header_75);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2065424764"}, header_75);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1526151399"}, header_75);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 46, 7, 18, 8, 2001)}, header_75);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_75);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_75);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_545688880"}, header_75);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{258424}, header_75);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_247820602"}, header_75);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_2085784745"}, header_75);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1676290748"}, header_75);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(3, 54, 28, 24, 10, 2008)}, header_75);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_162621557"}, header_75);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1660331539"}, header_75);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1565990872"}, header_75);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_903462734"}, header_75);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{2144290846}, header_75);
  all_values.push_back(header_75);
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
