#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteCancel.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteCancel, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::QuoteCancel msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteCancel_0;
  set_field(msg, FIX::Account{"STRING_2025598421"}, QuoteCancel_0);
  set_field(msg, FIX::AccountType{7}, QuoteCancel_0);
  set_field(msg, FIX::AcctIDSource{2}, QuoteCancel_0);
  set_field(msg, FIX::QuoteCancelType{4}, QuoteCancel_0);
  set_field(msg, FIX::QuoteID{"STRING_675650708"}, QuoteCancel_0);
  set_field(msg, FIX::QuoteMsgID{"STRING_312849066"}, QuoteCancel_0);
  set_field(msg, FIX::QuoteReqID{"STRING_2046561472"}, QuoteCancel_0);
  set_field(msg, FIX::QuoteResponseLevel{1}, QuoteCancel_0);
  set_field(msg, FIX::QuoteType{0}, QuoteCancel_0);
  set_field(msg, FIX::TradingSessionID{"STRING_3"}, QuoteCancel_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_7"}, QuoteCancel_0);
  all_values.push_back(QuoteCancel_0);

  all_compo_names.insert("QuoteCancel");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_100;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_255289907"}, Parties_NoPartyIDs_100);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'G'}, Parties_NoPartyIDs_100);
    set_field(noPartyIDs_0_0, FIX::PartyRole{20}, Parties_NoPartyIDs_100);
    all_values.push_back(Parties_NoPartyIDs_100);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_203;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_714087269"}, PtysSubGrp_NoPartySubIDs_203);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_203);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_203);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_204;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1517533889"}, PtysSubGrp_NoPartySubIDs_204);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{18}, PtysSubGrp_NoPartySubIDs_204);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_204);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_101;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_267796141"}, Parties_NoPartyIDs_101);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_101);
    set_field(noPartyIDs_0_1, FIX::PartyRole{61}, Parties_NoPartyIDs_101);
    all_values.push_back(Parties_NoPartyIDs_101);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_205;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1708096011"}, PtysSubGrp_NoPartySubIDs_205);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{25}, PtysSubGrp_NoPartySubIDs_205);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_205);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_206;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1231130782"}, PtysSubGrp_NoPartySubIDs_206);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{26}, PtysSubGrp_NoPartySubIDs_206);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_206);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // QuotCxlEntriesGrp
  // Group QuotCxlEntriesGrp.NoQuoteEntries
  {
    FIX50SP2::QuoteCancel::NoQuoteEntries noQuoteEntries_0_0;
    // QuotCxlEntriesGrp.NoQuoteEntries
    // FinancingDetails
    multiset<string> FinancingDetails_17;
    set_field(noQuoteEntries_0_0, FIX::AgreementCurrency{"CAN"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::AgreementDate{"LOCALMKTDATE_265564313"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::AgreementDesc{"STRING_889954332"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::AgreementID{"STRING_43963060"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::DeliveryType{0}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::EndDate{"LOCALMKTDATE_1565605040"}, FinancingDetails_17);
    FIX::MarginRatio MarginRatio_17;
    MarginRatio_17.setString("21.260000");
set_field(noQuoteEntries_0_0, MarginRatio_17, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::StartDate{"LOCALMKTDATE_1639885372"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::TerminationType{2}, FinancingDetails_17);
    all_values.push_back(FinancingDetails_17);
    all_compo_names.insert("...NoQuoteEntries.");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_73;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_1847677345"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{1802598605}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_99695218"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{2102967252}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_1995024903"}, InstrumentLeg_73);
      FIX::LegContractMultiplier LegContractMultiplier_73;
      LegContractMultiplier_73.setString("8341086");
set_field(noLegs_0_1_0, LegContractMultiplier_73, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{1967721899}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_561628525"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_355023673"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1337772140"}, InstrumentLeg_73);
      FIX::LegCouponRate LegCouponRate_73;
      LegCouponRate_73.setString("52.510000");
set_field(noLegs_0_1_0, LegCouponRate_73, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_622819814"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"USD"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_1345096317"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{186365557}, InstrumentLeg_73);
      FIX::LegFactor LegFactor_73;
      LegFactor_73.setString("18863644");
set_field(noLegs_0_1_0, LegFactor_73, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{428743451}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_215946386"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_126330372"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_771928849"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_752810695"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_391894685"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_1661883181"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_796773755"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_2132702234"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_73);
      FIX::LegOptionRatio LegOptionRatio_73;
      LegOptionRatio_73.setString("11535858");
set_field(noLegs_0_1_0, LegOptionRatio_73, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_1625103958"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_232981307"}, InstrumentLeg_73);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_73;
      LegPriceUnitOfMeasureQty_73.setString("5755073");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_73, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegProduct{1325297655}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{2035579912}, InstrumentLeg_73);
      FIX::LegRatioQty LegRatioQty_73;
      LegRatioQty_73.setString("6752026");
set_field(noLegs_0_1_0, LegRatioQty_73, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1280781259"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1883121167"}, InstrumentLeg_73);
      FIX::LegRepurchaseRate LegRepurchaseRate_73;
      LegRepurchaseRate_73.setString("12.760000");
set_field(noLegs_0_1_0, LegRepurchaseRate_73, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{1101019511}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_297266044"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_1864334949"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_291308003"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_1662681296"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_339671116"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_917061197"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegSide{'9'}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1684767433"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_73);
      FIX::LegStrikePrice LegStrikePrice_73;
      LegStrikePrice_73.setString("21135108");
set_field(noLegs_0_1_0, LegStrikePrice_73, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_1319373141"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_2106947900"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_737956086"}, InstrumentLeg_73);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_2072183837"}, InstrumentLeg_73);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_73;
      LegUnitOfMeasureQty_73.setString("3513589");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_73, InstrumentLeg_73);
      all_values.push_back(InstrumentLeg_73);
      all_compo_names.insert("...NoQuoteEntries...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_149;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_721473944"}, LegSecAltIDGrp_NoLegSecurityAltID_149);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_336577523"}, LegSecAltIDGrp_NoLegSecurityAltID_149);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_149);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_150;
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltID{"STRING_1332360192"}, LegSecAltIDGrp_NoLegSecurityAltID_150);
        set_field(noLegSecurityAltID_0_0_2_1, FIX::LegSecurityAltIDSource{"STRING_1875059826"}, LegSecAltIDGrp_NoLegSecurityAltID_150);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_150);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_151;
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltID{"STRING_1961681482"}, LegSecAltIDGrp_NoLegSecurityAltID_151);
        set_field(noLegSecurityAltID_0_0_2_2, FIX::LegSecurityAltIDSource{"STRING_1565341499"}, LegSecAltIDGrp_NoLegSecurityAltID_151);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_151);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_74;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_303083570"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{1139495489}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_1453437763"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{978286180}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_272793101"}, InstrumentLeg_74);
      FIX::LegContractMultiplier LegContractMultiplier_74;
      LegContractMultiplier_74.setString("11890752");
set_field(noLegs_0_1_1, LegContractMultiplier_74, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{340113809}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_1373812612"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_1486341327"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_56965110"}, InstrumentLeg_74);
      FIX::LegCouponRate LegCouponRate_74;
      LegCouponRate_74.setString("6.150000");
set_field(noLegs_0_1_1, LegCouponRate_74, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_1001538975"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_1095792022"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{2081403660}, InstrumentLeg_74);
      FIX::LegFactor LegFactor_74;
      LegFactor_74.setString("15381249");
set_field(noLegs_0_1_1, LegFactor_74, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{928925901}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_2047430897"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_710014413"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_888390153"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_637903335"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_634714602"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_1239749091"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_890258954"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_1356188547"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_74);
      FIX::LegOptionRatio LegOptionRatio_74;
      LegOptionRatio_74.setString("751354");
set_field(noLegs_0_1_1, LegOptionRatio_74, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_1083764725"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1390524448"}, InstrumentLeg_74);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_74;
      LegPriceUnitOfMeasureQty_74.setString("16404769");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_74, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegProduct{1386848295}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{382536290}, InstrumentLeg_74);
      FIX::LegRatioQty LegRatioQty_74;
      LegRatioQty_74.setString("9464311");
set_field(noLegs_0_1_1, LegRatioQty_74, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_217650827"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_655329391"}, InstrumentLeg_74);
      FIX::LegRepurchaseRate LegRepurchaseRate_74;
      LegRepurchaseRate_74.setString("63.960000");
set_field(noLegs_0_1_1, LegRepurchaseRate_74, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{557764636}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_2029142003"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_1474364076"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_614729747"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_1546778970"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_328419403"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_1011365973"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegSide{'1'}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_1424211425"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_74);
      FIX::LegStrikePrice LegStrikePrice_74;
      LegStrikePrice_74.setString("2056536");
set_field(noLegs_0_1_1, LegStrikePrice_74, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_845233234"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_2082132821"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_1094043832"}, InstrumentLeg_74);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_1483136569"}, InstrumentLeg_74);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_74;
      LegUnitOfMeasureQty_74.setString("5693637");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_74, InstrumentLeg_74);
      all_values.push_back(InstrumentLeg_74);
      all_compo_names.insert("...NoQuoteEntries...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_152;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_225911875"}, LegSecAltIDGrp_NoLegSecurityAltID_152);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_1925552322"}, LegSecAltIDGrp_NoLegSecurityAltID_152);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_152);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_153;
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltID{"STRING_1762635890"}, LegSecAltIDGrp_NoLegSecurityAltID_153);
        set_field(noLegSecurityAltID_0_1_2_1, FIX::LegSecurityAltIDSource{"STRING_301047374"}, LegSecAltIDGrp_NoLegSecurityAltID_153);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_153);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_154;
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltID{"STRING_861833399"}, LegSecAltIDGrp_NoLegSecurityAltID_154);
        set_field(noLegSecurityAltID_0_1_2_2, FIX::LegSecurityAltIDSource{"STRING_1005676690"}, LegSecAltIDGrp_NoLegSecurityAltID_154);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_154);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_2);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_75;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_1941524372"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{101198046}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_1388212980"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{740471837}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_318848874"}, InstrumentLeg_75);
      FIX::LegContractMultiplier LegContractMultiplier_75;
      LegContractMultiplier_75.setString("20435423");
set_field(noLegs_0_1_2, LegContractMultiplier_75, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{728494586}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_876613510"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_1925200726"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_55375014"}, InstrumentLeg_75);
      FIX::LegCouponRate LegCouponRate_75;
      LegCouponRate_75.setString("32.570000");
set_field(noLegs_0_1_2, LegCouponRate_75, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_1324496049"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"CAN"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_1158489536"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{1808005843}, InstrumentLeg_75);
      FIX::LegFactor LegFactor_75;
      LegFactor_75.setString("13005115");
set_field(noLegs_0_1_2, LegFactor_75, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{383124296}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_2013659522"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_2145744803"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_317773469"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_960219706"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_1481397724"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_887137244"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_1146528982"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_1707309600"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'6'}, InstrumentLeg_75);
      FIX::LegOptionRatio LegOptionRatio_75;
      LegOptionRatio_75.setString("7616812");
set_field(noLegs_0_1_2, LegOptionRatio_75, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_2008356974"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_1527039318"}, InstrumentLeg_75);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_75;
      LegPriceUnitOfMeasureQty_75.setString("17673579");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_75, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegProduct{1802397698}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{1628237365}, InstrumentLeg_75);
      FIX::LegRatioQty LegRatioQty_75;
      LegRatioQty_75.setString("10080872");
set_field(noLegs_0_1_2, LegRatioQty_75, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_395385887"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_1947086239"}, InstrumentLeg_75);
      FIX::LegRepurchaseRate LegRepurchaseRate_75;
      LegRepurchaseRate_75.setString("59.700000");
set_field(noLegs_0_1_2, LegRepurchaseRate_75, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{1123880473}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_676216101"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_681863049"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_1179255487"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_20075711"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_2006359098"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_1563049905"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegSide{'3'}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_1017364986"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_75);
      FIX::LegStrikePrice LegStrikePrice_75;
      LegStrikePrice_75.setString("14004892");
set_field(noLegs_0_1_2, LegStrikePrice_75, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_1089747974"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_1674074017"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_1718262751"}, InstrumentLeg_75);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_2049967680"}, InstrumentLeg_75);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_75;
      LegUnitOfMeasureQty_75.setString("10079880");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_75, InstrumentLeg_75);
      all_values.push_back(InstrumentLeg_75);
      all_compo_names.insert("...NoQuoteEntries...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_155;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_1049013014"}, LegSecAltIDGrp_NoLegSecurityAltID_155);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_567814046"}, LegSecAltIDGrp_NoLegSecurityAltID_155);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_155);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_156;
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltID{"STRING_1123122267"}, LegSecAltIDGrp_NoLegSecurityAltID_156);
        set_field(noLegSecurityAltID_0_2_2_1, FIX::LegSecurityAltIDSource{"STRING_1810694238"}, LegSecAltIDGrp_NoLegSecurityAltID_156);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_156);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_2;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_157;
        set_field(noLegSecurityAltID_0_2_2_2, FIX::LegSecurityAltID{"STRING_428687372"}, LegSecAltIDGrp_NoLegSecurityAltID_157);
        set_field(noLegSecurityAltID_0_2_2_2, FIX::LegSecurityAltIDSource{"STRING_502677937"}, LegSecAltIDGrp_NoLegSecurityAltID_157);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_157);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_2);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_54;
    FIX::AttachmentPoint AttachmentPoint_54;
    AttachmentPoint_54.setString("85.050000");
set_field(noQuoteEntries_0_0, AttachmentPoint_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::CFICode{"STRING_83601422"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::CPProgram{99}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::CPRegType{"STRING_291172104"}, Instrument_54);
    FIX::CapPrice CapPrice_54;
    CapPrice_54.setString("4789873");
set_field(noQuoteEntries_0_0, CapPrice_54, Instrument_54);
    FIX::ContractMultiplier ContractMultiplier_54;
    ContractMultiplier_54.setString("19305178");
set_field(noQuoteEntries_0_0, ContractMultiplier_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::ContractMultiplierUnit{0}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::ContractSettlMonth{"MONTHYEAR_1602867783"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::CountryOfIssue{"COUNTRY_459250347"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1877181123"}, Instrument_54);
    FIX::CouponRate CouponRate_54;
    CouponRate_54.setString("96.220000");
set_field(noQuoteEntries_0_0, CouponRate_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::CreditRating{"STRING_479326058"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::DatedDate{"LOCALMKTDATE_1736056573"}, Instrument_54);
    FIX::DetachmentPoint DetachmentPoint_54;
    DetachmentPoint_54.setString("58.790000");
set_field(noQuoteEntries_0_0, DetachmentPoint_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::EncodedIssuer{"DATA_854627352"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::EncodedIssuerLen{605937912}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::EncodedSecurityDesc{"DATA_1273777979"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::EncodedSecurityDescLen{382956566}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::ExerciseStyle{2}, Instrument_54);
    FIX::Factor Factor_54;
    Factor_54.setString("2160423");
set_field(noQuoteEntries_0_0, Factor_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::FlexibleIndicator{true}, Instrument_54);
    FIX::FloorPrice FloorPrice_54;
    FloorPrice_54.setString("1185263");
set_field(noQuoteEntries_0_0, FloorPrice_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::FlowScheduleType{0}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::InstrRegistry{"STRING_2035122646"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1485349076"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::IssueDate{"LOCALMKTDATE_1010761265"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::Issuer{"STRING_830749943"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::ListMethod{0}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::LocaleOfIssue{"STRING_1513439202"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::MaturityDate{"LOCALMKTDATE_113834800"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1997637870"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::MaturityTime{"TZTIMEONLY_1496870857"}, Instrument_54);
    FIX::MinPriceIncrement MinPriceIncrement_54;
    MinPriceIncrement_54.setString("4050069");
set_field(noQuoteEntries_0_0, MinPriceIncrement_54, Instrument_54);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_54;
    MinPriceIncrementAmount_54.setString("3291415");
set_field(noQuoteEntries_0_0, MinPriceIncrementAmount_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::NTPositionLimit{1279905102}, Instrument_54);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_54;
    NotionalPercentageOutstanding_54.setString("49.780000");
set_field(noQuoteEntries_0_0, NotionalPercentageOutstanding_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::OptAttribute{'1'}, Instrument_54);
    FIX::OptPayoutAmount OptPayoutAmount_54;
    OptPayoutAmount_54.setString("17391554");
set_field(noQuoteEntries_0_0, OptPayoutAmount_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::OptPayoutType{1}, Instrument_54);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_54;
    OriginalNotionalPercentageOutstanding_54.setString("52.890000");
set_field(noQuoteEntries_0_0, OriginalNotionalPercentageOutstanding_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::Pool{"STRING_70997859"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::PositionLimit{918595379}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::PriceUnitOfMeasure{"STRING_925625211"}, Instrument_54);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_54;
    PriceUnitOfMeasureQty_54.setString("15245332");
set_field(noQuoteEntries_0_0, PriceUnitOfMeasureQty_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::Product{1}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::ProductComplex{"STRING_1308581778"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::PutOrCall{0}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::RedemptionDate{"LOCALMKTDATE_1959191453"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::RepoCollateralSecurityType{"STRING_1218128714"}, Instrument_54);
    FIX::RepurchaseRate RepurchaseRate_54;
    RepurchaseRate_54.setString("94.880000");
set_field(noQuoteEntries_0_0, RepurchaseRate_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::RepurchaseTerm{2077717791}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::RestructuringType{"STRING_FR"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SecurityDesc{"STRING_700838486"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SecurityExchange{"EXCHANGE_1097773496"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SecurityGroup{"STRING_1473529172"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SecurityID{"STRING_1711599751"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SecurityIDSource{"STRING_8"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SecuritySubType{"STRING_1077555305"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SecurityType{"STRING_YCD"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::Seniority{"STRING_SB"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SettlMethod{'C'}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SettleOnOpenFlag{"STRING_299881495"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::StateOrProvinceOfIssue{"STRING_1419377725"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_54);
    FIX::StrikeMultiplier StrikeMultiplier_54;
    StrikeMultiplier_54.setString("12039033");
set_field(noQuoteEntries_0_0, StrikeMultiplier_54, Instrument_54);
    FIX::StrikePrice StrikePrice_54;
    StrikePrice_54.setString("12985194");
set_field(noQuoteEntries_0_0, StrikePrice_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_54);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_54;
    StrikePriceBoundaryPrecision_54.setString("86.810000");
set_field(noQuoteEntries_0_0, StrikePriceBoundaryPrecision_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::StrikePriceDeterminationMethod{3}, Instrument_54);
    FIX::StrikeValue StrikeValue_54;
    StrikeValue_54.setString("20013406");
set_field(noQuoteEntries_0_0, StrikeValue_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::Symbol{"STRING_2092439849"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::TimeUnit{"STRING_S"}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::UnitOfMeasure{"STRING_MMBtu"}, Instrument_54);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_54;
    UnitOfMeasureQty_54.setString("6143834");
set_field(noQuoteEntries_0_0, UnitOfMeasureQty_54, Instrument_54);
    set_field(noQuoteEntries_0_0, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_54);
    all_values.push_back(Instrument_54);
    all_compo_names.insert("...NoQuoteEntries.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_109;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_109);
      FIX::ComplexEventPrice ComplexEventPrice_109;
      ComplexEventPrice_109.setString("14300472");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_109, ComplexEvents_NoComplexEvents_109);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_109);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_109;
      ComplexEventPriceBoundaryPrecision_109.setString("14.660000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_109, ComplexEvents_NoComplexEvents_109);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_109);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_109);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_109;
      ComplexOptPayoutAmount_109.setString("16925375");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_109, ComplexEvents_NoComplexEvents_109);
      all_values.push_back(ComplexEvents_NoComplexEvents_109);
      all_compo_names.insert("...NoQuoteEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_237;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(3, 28, 3, 21, 12, 2011)}, ComplexEventDates_NoComplexEventDates_237);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 53, 29, 4, 11, 2007)}, ComplexEventDates_NoComplexEventDates_237);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_237);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_471;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 54, 57)}, ComplexEventTimes_NoComplexEventTimes_471);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 44, 57)}, ComplexEventTimes_NoComplexEventTimes_471);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_471);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_472;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(2, 39, 17)}, ComplexEventTimes_NoComplexEventTimes_472);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(8, 47, 18)}, ComplexEventTimes_NoComplexEventTimes_472);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_472);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_238;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 47, 37, 23, 11, 2000)}, ComplexEventDates_NoComplexEventDates_238);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 51, 39, 16, 6, 2014)}, ComplexEventDates_NoComplexEventDates_238);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_238);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_473;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 13, 2)}, ComplexEventTimes_NoComplexEventTimes_473);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 38, 32)}, ComplexEventTimes_NoComplexEventTimes_473);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_473);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_474;
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 3, 28)}, ComplexEventTimes_NoComplexEventTimes_474);
          set_field(noComplexEventTimes_0_0_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 7, 44)}, ComplexEventTimes_NoComplexEventTimes_474);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_474);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_1);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_110;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_110);
      FIX::ComplexEventPrice ComplexEventPrice_110;
      ComplexEventPrice_110.setString("7543635");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_110, ComplexEvents_NoComplexEvents_110);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_110);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_110;
      ComplexEventPriceBoundaryPrecision_110.setString("72.710000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_110, ComplexEvents_NoComplexEvents_110);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_110);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{9}, ComplexEvents_NoComplexEvents_110);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_110;
      ComplexOptPayoutAmount_110.setString("9016699");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_110, ComplexEvents_NoComplexEvents_110);
      all_values.push_back(ComplexEvents_NoComplexEvents_110);
      all_compo_names.insert("...NoQuoteEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_239;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 2, 53, 18, 9, 2016)}, ComplexEventDates_NoComplexEventDates_239);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 10, 57, 9, 3, 2017)}, ComplexEventDates_NoComplexEventDates_239);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_239);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_475;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 28, 41)}, ComplexEventTimes_NoComplexEventTimes_475);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 41, 37)}, ComplexEventTimes_NoComplexEventTimes_475);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_475);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_240;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 0, 4, 15, 11, 2017)}, ComplexEventDates_NoComplexEventDates_240);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 26, 24, 20, 6, 2002)}, ComplexEventDates_NoComplexEventDates_240);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_240);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_476;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 18, 10)}, ComplexEventTimes_NoComplexEventTimes_476);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 45, 1)}, ComplexEventTimes_NoComplexEventTimes_476);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_476);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_477;
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 29, 59)}, ComplexEventTimes_NoComplexEventTimes_477);
          set_field(noComplexEventTimes_0_1_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 40, 20)}, ComplexEventTimes_NoComplexEventTimes_477);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_477);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_111;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_111);
      FIX::ComplexEventPrice ComplexEventPrice_111;
      ComplexEventPrice_111.setString("15515175");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_111, ComplexEvents_NoComplexEvents_111);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_111);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_111;
      ComplexEventPriceBoundaryPrecision_111.setString("47.850000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_111, ComplexEvents_NoComplexEvents_111);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_111);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_111);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_111;
      ComplexOptPayoutAmount_111.setString("9446551");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_111, ComplexEvents_NoComplexEvents_111);
      all_values.push_back(ComplexEvents_NoComplexEvents_111);
      all_compo_names.insert("...NoQuoteEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_241;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(21, 29, 26, 22, 6, 2010)}, ComplexEventDates_NoComplexEventDates_241);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(4, 53, 37, 24, 6, 2014)}, ComplexEventDates_NoComplexEventDates_241);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_241);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_478;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 2, 30)}, ComplexEventTimes_NoComplexEventTimes_478);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 10, 15)}, ComplexEventTimes_NoComplexEventTimes_478);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_478);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_479;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 28, 50)}, ComplexEventTimes_NoComplexEventTimes_479);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 21, 7)}, ComplexEventTimes_NoComplexEventTimes_479);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_479);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_480;
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 36, 47)}, ComplexEventTimes_NoComplexEventTimes_480);
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 14, 36)}, ComplexEventTimes_NoComplexEventTimes_480);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_480);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_242;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(23, 13, 42, 8, 8, 2004)}, ComplexEventDates_NoComplexEventDates_242);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 10, 57, 2, 10, 2001)}, ComplexEventDates_NoComplexEventDates_242);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_242);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_481;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 54, 28)}, ComplexEventTimes_NoComplexEventTimes_481);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 41, 53)}, ComplexEventTimes_NoComplexEventTimes_481);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_481);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_482;
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(7, 21, 19)}, ComplexEventTimes_NoComplexEventTimes_482);
          set_field(noComplexEventTimes_0_2_1_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 25, 36)}, ComplexEventTimes_NoComplexEventTimes_482);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_482);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_1);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_112;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_1153843104"}, EvntGrp_NoEvents_112);
      FIX::EventPx EventPx_112;
      EventPx_112.setString("11111541");
set_field(noEvents_0_1_0, EventPx_112, EvntGrp_NoEvents_112);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1114897375"}, EvntGrp_NoEvents_112);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(13, 3, 48, 16, 3, 2003)}, EvntGrp_NoEvents_112);
      set_field(noEvents_0_1_0, FIX::EventType{4}, EvntGrp_NoEvents_112);
      all_values.push_back(EvntGrp_NoEvents_112);
      all_compo_names.insert("...NoQuoteEntries....NoEvents");

      noQuoteEntries_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_101;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_277396905"}, InstrumentParties_NoInstrumentParties_101);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_101);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{999452605}, InstrumentParties_NoInstrumentParties_101);
      all_values.push_back(InstrumentParties_NoInstrumentParties_101);
      all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_1299412683"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1879182173}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_204);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_102;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1006797127"}, InstrumentParties_NoInstrumentParties_102);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_102);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{418278026}, InstrumentParties_NoInstrumentParties_102);
      all_values.push_back(InstrumentParties_NoInstrumentParties_102);
      all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_1779766905"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{551855290}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_205);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_1039468394"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{971346536}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_206);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_103;
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyID{"STRING_1936924750"}, InstrumentParties_NoInstrumentParties_103);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_103);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyRole{1278446721}, InstrumentParties_NoInstrumentParties_103);
      all_values.push_back(InstrumentParties_NoInstrumentParties_103);
      all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207;
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubID{"STRING_1429153906"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubIDType{284806177}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_207);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_113;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_396567634"}, SecAltIDGrp_NoSecurityAltID_113);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_706815177"}, SecAltIDGrp_NoSecurityAltID_113);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_113);
      all_compo_names.insert("...NoQuoteEntries....NoSecurityAltID");

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_108;
    set_field(noQuoteEntries_0_0, FIX::SecurityXML{"XMLDATA_3639365"}, SecurityXML_108);
    set_field(noQuoteEntries_0_0, FIX::SecurityXMLLen{877697017}, SecurityXML_108);
    set_field(noQuoteEntries_0_0, FIX::SecurityXMLSchema{"STRING_1022434185"}, SecurityXML_108);
    all_values.push_back(SecurityXML_108);
    all_compo_names.insert("...NoQuoteEntries..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_95;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1921190991"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{1870573651}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_857674805"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{903108811}, UnderlyingInstrument_95);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_95;
      UnderlyingAdjustedQuantity_95.setString("4869");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_95, UnderlyingInstrument_95);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_95;
      UnderlyingAllocationPercent_95.setString("75.540000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_95, UnderlyingInstrument_95);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_95;
      UnderlyingAttachmentPoint_95.setString("14.160000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_155395829"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_1059746589"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_1634259942"}, UnderlyingInstrument_95);
      FIX::UnderlyingCapValue UnderlyingCapValue_95;
      UnderlyingCapValue_95.setString("11621929");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_95, UnderlyingInstrument_95);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_95;
      UnderlyingCashAmount_95.setString("7949023");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_95);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_95;
      UnderlyingContractMultiplier_95.setString("11548091");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{427185592}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_456909610"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_46793856"}, UnderlyingInstrument_95);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_95;
      UnderlyingCouponRate_95.setString("21.280000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_246350713"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"EUR"}, UnderlyingInstrument_95);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_95;
      UnderlyingCurrentValue_95.setString("16379126");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_95, UnderlyingInstrument_95);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_95;
      UnderlyingDetachmentPoint_95.setString("53.880000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_95, UnderlyingInstrument_95);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_95;
      UnderlyingDirtyPrice_95.setString("8143013");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_95, UnderlyingInstrument_95);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_95;
      UnderlyingEndPrice_95.setString("19931451");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_95, UnderlyingInstrument_95);
      FIX::UnderlyingEndValue UnderlyingEndValue_95;
      UnderlyingEndValue_95.setString("17986830");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{1521116555}, UnderlyingInstrument_95);
      FIX::UnderlyingFXRate UnderlyingFXRate_95;
      UnderlyingFXRate_95.setString("19967845");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_95);
      FIX::UnderlyingFactor UnderlyingFactor_95;
      UnderlyingFactor_95.setString("3960670");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{1290546812}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_302603735"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_119157096"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_737969"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1205712546"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_119644004"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1908555523"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_960790314"}, UnderlyingInstrument_95);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_95;
      UnderlyingNotionalPercentageOutstanding_95.setString("98.330000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'8'}, UnderlyingInstrument_95);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_95;
      UnderlyingOriginalNotionalPercentageOutstanding_95.setString("66.080000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1437232789"}, UnderlyingInstrument_95);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_95;
      UnderlyingPriceUnitOfMeasureQty_95.setString("16157207");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{352620929}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{444558251}, UnderlyingInstrument_95);
      FIX::UnderlyingPx UnderlyingPx_95;
      UnderlyingPx_95.setString("20429063");
set_field(noUnderlyings_0_1_0, UnderlyingPx_95, UnderlyingInstrument_95);
      FIX::UnderlyingQty UnderlyingQty_95;
      UnderlyingQty_95.setString("8095305");
set_field(noUnderlyings_0_1_0, UnderlyingQty_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_491352107"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1293954871"}, UnderlyingInstrument_95);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_95;
      UnderlyingRepurchaseRate_95.setString("12.520000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{464313588}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_1823450072"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_546310296"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_1866428976"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_490267802"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_391971813"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_1517628350"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_2011384358"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_241272695"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_2046524742"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_95);
      FIX::UnderlyingStartValue UnderlyingStartValue_95;
      UnderlyingStartValue_95.setString("15318195");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_201644829"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"USD"}, UnderlyingInstrument_95);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_95;
      UnderlyingStrikePrice_95.setString("14073573");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_498768903"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_1293629351"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_220664041"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_773808736"}, UnderlyingInstrument_95);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_95;
      UnderlyingUnitOfMeasureQty_95.setString("21144478");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_95, UnderlyingInstrument_95);
      all_values.push_back(UnderlyingInstrument_95);
      all_compo_names.insert("...NoQuoteEntries...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_201;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_63557877"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1582684967"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_201);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_193;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_508116128"}, UnderlyingStipulations_NoUnderlyingStips_193);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_1478107710"}, UnderlyingStipulations_NoUnderlyingStips_193);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_193);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_194;
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipType{"STRING_1830382118"}, UnderlyingStipulations_NoUnderlyingStips_194);
        set_field(noUnderlyingStips_0_0_2_1, FIX::UnderlyingStipValue{"STRING_999468235"}, UnderlyingStipulations_NoUnderlyingStips_194);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_194);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_195;
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipType{"STRING_624578934"}, UnderlyingStipulations_NoUnderlyingStips_195);
        set_field(noUnderlyingStips_0_0_2_2, FIX::UnderlyingStipValue{"STRING_738779723"}, UnderlyingStipulations_NoUnderlyingStips_195);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_195);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_196;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_300545358"}, UndlyInstrumentParties_NoUndlyInstrumentParties_196);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_196);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1182727152}, UndlyInstrumentParties_NoUndlyInstrumentParties_196);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_196);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1677061832"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{552871855}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_392);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_197;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_654713871"}, UndlyInstrumentParties_NoUndlyInstrumentParties_197);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_197);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{451912949}, UndlyInstrumentParties_NoUndlyInstrumentParties_197);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_197);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1302670386"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{653557778}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_393);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1293806573"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{687744214}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_394);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_2;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_198;
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyID{"STRING_2060915153"}, UndlyInstrumentParties_NoUndlyInstrumentParties_198);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_198);
        set_field(noUndlyInstrumentParties_0_0_2_2, FIX::UnderlyingInstrumentPartyRole{1981373565}, UndlyInstrumentParties_NoUndlyInstrumentParties_198);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_198);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_418900564"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_0, FIX::UnderlyingInstrumentPartySubIDType{1948337733}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_395);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396;
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_802326196"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);
          set_field(noUndlyInstrumentPartySubIDs_0_0_2_3_1, FIX::UnderlyingInstrumentPartySubIDType{482458441}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_396);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_2.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_3_1);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_2);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    msg.addGroup(noQuoteEntries_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoQuoteEntries noQuoteEntries_0_1;
    // QuotCxlEntriesGrp.NoQuoteEntries
    // FinancingDetails
    multiset<string> FinancingDetails_18;
    set_field(noQuoteEntries_0_1, FIX::AgreementCurrency{"CHF"}, FinancingDetails_18);
    set_field(noQuoteEntries_0_1, FIX::AgreementDate{"LOCALMKTDATE_990574570"}, FinancingDetails_18);
    set_field(noQuoteEntries_0_1, FIX::AgreementDesc{"STRING_714163114"}, FinancingDetails_18);
    set_field(noQuoteEntries_0_1, FIX::AgreementID{"STRING_1506076246"}, FinancingDetails_18);
    set_field(noQuoteEntries_0_1, FIX::DeliveryType{1}, FinancingDetails_18);
    set_field(noQuoteEntries_0_1, FIX::EndDate{"LOCALMKTDATE_1338742048"}, FinancingDetails_18);
    FIX::MarginRatio MarginRatio_18;
    MarginRatio_18.setString("23.210000");
set_field(noQuoteEntries_0_1, MarginRatio_18, FinancingDetails_18);
    set_field(noQuoteEntries_0_1, FIX::StartDate{"LOCALMKTDATE_1306340981"}, FinancingDetails_18);
    set_field(noQuoteEntries_0_1, FIX::TerminationType{4}, FinancingDetails_18);
    all_values.push_back(FinancingDetails_18);
    all_compo_names.insert("...NoQuoteEntries.");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_1_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_76;
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuer{"DATA_341584486"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::EncodedLegIssuerLen{282616920}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDesc{"DATA_912040525"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::EncodedLegSecurityDescLen{894456341}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegCFICode{"STRING_937330791"}, InstrumentLeg_76);
      FIX::LegContractMultiplier LegContractMultiplier_76;
      LegContractMultiplier_76.setString("6828914");
set_field(noLegs_1_1_0, LegContractMultiplier_76, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegContractMultiplierUnit{1346369290}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1852012465"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegCountryOfIssue{"COUNTRY_1985561791"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1999927068"}, InstrumentLeg_76);
      FIX::LegCouponRate LegCouponRate_76;
      LegCouponRate_76.setString("53.900000");
set_field(noLegs_1_1_0, LegCouponRate_76, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegCreditRating{"STRING_525822357"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegCurrency{"JPY"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegDatedDate{"LOCALMKTDATE_359712275"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegExerciseStyle{2047454119}, InstrumentLeg_76);
      FIX::LegFactor LegFactor_76;
      LegFactor_76.setString("10623277");
set_field(noLegs_1_1_0, LegFactor_76, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegFlowScheduleType{160566360}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegInstrRegistry{"STRING_702296668"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1544786223"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegIssueDate{"LOCALMKTDATE_1544105412"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegIssuer{"STRING_377990795"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegLocaleOfIssue{"STRING_387877145"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_110784878"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1884067041"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegMaturityTime{"TZTIMEONLY_230436303"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_76);
      FIX::LegOptionRatio LegOptionRatio_76;
      LegOptionRatio_76.setString("19814393");
set_field(noLegs_1_1_0, LegOptionRatio_76, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegPool{"STRING_1536777284"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegPriceUnitOfMeasure{"STRING_941330686"}, InstrumentLeg_76);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_76;
      LegPriceUnitOfMeasureQty_76.setString("12164180");
set_field(noLegs_1_1_0, LegPriceUnitOfMeasureQty_76, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegProduct{1878361770}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegPutOrCall{1223947606}, InstrumentLeg_76);
      FIX::LegRatioQty LegRatioQty_76;
      LegRatioQty_76.setString("21284585");
set_field(noLegs_1_1_0, LegRatioQty_76, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_625334463"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegRepoCollateralSecurityType{"STRING_13794749"}, InstrumentLeg_76);
      FIX::LegRepurchaseRate LegRepurchaseRate_76;
      LegRepurchaseRate_76.setString("63.360000");
set_field(noLegs_1_1_0, LegRepurchaseRate_76, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegRepurchaseTerm{1971703753}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegSecurityDesc{"STRING_1865807214"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegSecurityExchange{"EXCHANGE_501944479"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegSecurityID{"STRING_1824147173"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegSecurityIDSource{"STRING_716658956"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegSecuritySubType{"STRING_1027766837"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegSecurityType{"STRING_1590022098"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegSide{'1'}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_1387479112"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_76);
      FIX::LegStrikePrice LegStrikePrice_76;
      LegStrikePrice_76.setString("15480454");
set_field(noLegs_1_1_0, LegStrikePrice_76, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegSymbol{"STRING_44805590"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegSymbolSfx{"STRING_1819716531"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegTimeUnit{"STRING_944667236"}, InstrumentLeg_76);
      set_field(noLegs_1_1_0, FIX::LegUnitOfMeasure{"STRING_422796385"}, InstrumentLeg_76);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_76;
      LegUnitOfMeasureQty_76.setString("601100");
set_field(noLegs_1_1_0, LegUnitOfMeasureQty_76, InstrumentLeg_76);
      all_values.push_back(InstrumentLeg_76);
      all_compo_names.insert("...NoQuoteEntries...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_158;
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltID{"STRING_159379779"}, LegSecAltIDGrp_NoLegSecurityAltID_158);
        set_field(noLegSecurityAltID_1_0_2_0, FIX::LegSecurityAltIDSource{"STRING_290546332"}, LegSecAltIDGrp_NoLegSecurityAltID_158);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_158);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_1_0_2_1;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_159;
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltID{"STRING_357495393"}, LegSecAltIDGrp_NoLegSecurityAltID_159);
        set_field(noLegSecurityAltID_1_0_2_1, FIX::LegSecurityAltIDSource{"STRING_2140819141"}, LegSecAltIDGrp_NoLegSecurityAltID_159);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_159);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_1_1_0.addGroup(noLegSecurityAltID_1_0_2_1);
      }
      noQuoteEntries_0_1.addGroup(noLegs_1_1_0);
    }
    // Instrument
    multiset<string> Instrument_55;
    FIX::AttachmentPoint AttachmentPoint_55;
    AttachmentPoint_55.setString("36.160000");
set_field(noQuoteEntries_0_1, AttachmentPoint_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::CFICode{"STRING_1298826079"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::CPProgram{99}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::CPRegType{"STRING_1558201739"}, Instrument_55);
    FIX::CapPrice CapPrice_55;
    CapPrice_55.setString("3752900");
set_field(noQuoteEntries_0_1, CapPrice_55, Instrument_55);
    FIX::ContractMultiplier ContractMultiplier_55;
    ContractMultiplier_55.setString("11907284");
set_field(noQuoteEntries_0_1, ContractMultiplier_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::ContractMultiplierUnit{0}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::ContractSettlMonth{"MONTHYEAR_389084786"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::CountryOfIssue{"COUNTRY_1854594817"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::CouponPaymentDate{"LOCALMKTDATE_2007756308"}, Instrument_55);
    FIX::CouponRate CouponRate_55;
    CouponRate_55.setString("83.520000");
set_field(noQuoteEntries_0_1, CouponRate_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::CreditRating{"STRING_209055648"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::DatedDate{"LOCALMKTDATE_1684419833"}, Instrument_55);
    FIX::DetachmentPoint DetachmentPoint_55;
    DetachmentPoint_55.setString("73.080000");
set_field(noQuoteEntries_0_1, DetachmentPoint_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::EncodedIssuer{"DATA_1236822485"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::EncodedIssuerLen{1126958284}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::EncodedSecurityDesc{"DATA_36669834"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::EncodedSecurityDescLen{476817949}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::ExerciseStyle{2}, Instrument_55);
    FIX::Factor Factor_55;
    Factor_55.setString("3116001");
set_field(noQuoteEntries_0_1, Factor_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::FlexibleIndicator{true}, Instrument_55);
    FIX::FloorPrice FloorPrice_55;
    FloorPrice_55.setString("21313166");
set_field(noQuoteEntries_0_1, FloorPrice_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::FlowScheduleType{4}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::InstrRegistry{"STRING_937069181"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::InstrmtAssignmentMethod{'4'}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1877499124"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::IssueDate{"LOCALMKTDATE_1096448960"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::Issuer{"STRING_334489387"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::ListMethod{1}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::LocaleOfIssue{"STRING_1089784454"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::MaturityDate{"LOCALMKTDATE_14329355"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::MaturityMonthYear{"MONTHYEAR_1386336949"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::MaturityTime{"TZTIMEONLY_152054354"}, Instrument_55);
    FIX::MinPriceIncrement MinPriceIncrement_55;
    MinPriceIncrement_55.setString("15725310");
set_field(noQuoteEntries_0_1, MinPriceIncrement_55, Instrument_55);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_55;
    MinPriceIncrementAmount_55.setString("17616269");
set_field(noQuoteEntries_0_1, MinPriceIncrementAmount_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::NTPositionLimit{1342782835}, Instrument_55);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_55;
    NotionalPercentageOutstanding_55.setString("36.490000");
set_field(noQuoteEntries_0_1, NotionalPercentageOutstanding_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::OptAttribute{'3'}, Instrument_55);
    FIX::OptPayoutAmount OptPayoutAmount_55;
    OptPayoutAmount_55.setString("10498940");
set_field(noQuoteEntries_0_1, OptPayoutAmount_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::OptPayoutType{3}, Instrument_55);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_55;
    OriginalNotionalPercentageOutstanding_55.setString("64.770000");
set_field(noQuoteEntries_0_1, OriginalNotionalPercentageOutstanding_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::Pool{"STRING_1258949652"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::PositionLimit{1005792494}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::PriceUnitOfMeasure{"STRING_348288490"}, Instrument_55);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_55;
    PriceUnitOfMeasureQty_55.setString("21327507");
set_field(noQuoteEntries_0_1, PriceUnitOfMeasureQty_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::Product{10}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::ProductComplex{"STRING_825106439"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::PutOrCall{0}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::RedemptionDate{"LOCALMKTDATE_1282973763"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::RepoCollateralSecurityType{"STRING_702486213"}, Instrument_55);
    FIX::RepurchaseRate RepurchaseRate_55;
    RepurchaseRate_55.setString("71.320000");
set_field(noQuoteEntries_0_1, RepurchaseRate_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::RepurchaseTerm{1266806789}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::RestructuringType{"STRING_MM"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SecurityDesc{"STRING_1906076314"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SecurityExchange{"EXCHANGE_1310749844"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SecurityGroup{"STRING_1254548698"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SecurityID{"STRING_855041626"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SecurityIDSource{"STRING_A"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SecurityStatus{"STRING_1"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SecuritySubType{"STRING_1944826080"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SecurityType{"STRING_DN"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::Seniority{"STRING_SD"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SettlMethod{'P'}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SettleOnOpenFlag{"STRING_1084616033"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::StateOrProvinceOfIssue{"STRING_195056207"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::StrikeCurrency{"GBP"}, Instrument_55);
    FIX::StrikeMultiplier StrikeMultiplier_55;
    StrikeMultiplier_55.setString("1982843");
set_field(noQuoteEntries_0_1, StrikeMultiplier_55, Instrument_55);
    FIX::StrikePrice StrikePrice_55;
    StrikePrice_55.setString("1945899");
set_field(noQuoteEntries_0_1, StrikePrice_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::StrikePriceBoundaryMethod{4}, Instrument_55);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_55;
    StrikePriceBoundaryPrecision_55.setString("8.100000");
set_field(noQuoteEntries_0_1, StrikePriceBoundaryPrecision_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::StrikePriceDeterminationMethod{3}, Instrument_55);
    FIX::StrikeValue StrikeValue_55;
    StrikeValue_55.setString("8728811");
set_field(noQuoteEntries_0_1, StrikeValue_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::Symbol{"STRING_1243624596"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::TimeUnit{"STRING_Min"}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::UnderlyingPriceDeterminationMethod{1}, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_55);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_55;
    UnitOfMeasureQty_55.setString("13128826");
set_field(noQuoteEntries_0_1, UnitOfMeasureQty_55, Instrument_55);
    set_field(noQuoteEntries_0_1, FIX::ValuationMethod{"STRING_FUT"}, Instrument_55);
    all_values.push_back(Instrument_55);
    all_compo_names.insert("...NoQuoteEntries.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_112;
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_112);
      FIX::ComplexEventPrice ComplexEventPrice_112;
      ComplexEventPrice_112.setString("4698114");
set_field(noComplexEvents_1_1_0, ComplexEventPrice_112, ComplexEvents_NoComplexEvents_112);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_112);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_112;
      ComplexEventPriceBoundaryPrecision_112.setString("24.550000");
set_field(noComplexEvents_1_1_0, ComplexEventPriceBoundaryPrecision_112, ComplexEvents_NoComplexEvents_112);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_112);
      set_field(noComplexEvents_1_1_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_112);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_112;
      ComplexOptPayoutAmount_112.setString("7480404");
set_field(noComplexEvents_1_1_0, ComplexOptPayoutAmount_112, ComplexEvents_NoComplexEvents_112);
      all_values.push_back(ComplexEvents_NoComplexEvents_112);
      all_compo_names.insert("...NoQuoteEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_243;
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(2, 58, 27, 25, 4, 2008)}, ComplexEventDates_NoComplexEventDates_243);
        set_field(noComplexEventDates_1_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(9, 7, 53, 12, 10, 2003)}, ComplexEventDates_NoComplexEventDates_243);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_243);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_483;
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 21, 33)}, ComplexEventTimes_NoComplexEventTimes_483);
          set_field(noComplexEventTimes_1_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 17, 17)}, ComplexEventTimes_NoComplexEventTimes_483);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_483);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_0_2_0.addGroup(noComplexEventTimes_1_0_0_3_0);
        }
        noComplexEvents_1_1_0.addGroup(noComplexEventDates_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_113;
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_113);
      FIX::ComplexEventPrice ComplexEventPrice_113;
      ComplexEventPrice_113.setString("11277572");
set_field(noComplexEvents_1_1_1, ComplexEventPrice_113, ComplexEvents_NoComplexEvents_113);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_113);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_113;
      ComplexEventPriceBoundaryPrecision_113.setString("24.180000");
set_field(noComplexEvents_1_1_1, ComplexEventPriceBoundaryPrecision_113, ComplexEvents_NoComplexEvents_113);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_113);
      set_field(noComplexEvents_1_1_1, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_113);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_113;
      ComplexOptPayoutAmount_113.setString("18122128");
set_field(noComplexEvents_1_1_1, ComplexOptPayoutAmount_113, ComplexEvents_NoComplexEvents_113);
      all_values.push_back(ComplexEvents_NoComplexEvents_113);
      all_compo_names.insert("...NoQuoteEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_244;
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 47, 43, 10, 7, 2014)}, ComplexEventDates_NoComplexEventDates_244);
        set_field(noComplexEventDates_1_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 49, 34, 7, 11, 2002)}, ComplexEventDates_NoComplexEventDates_244);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_244);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_484;
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 34, 8)}, ComplexEventTimes_NoComplexEventTimes_484);
          set_field(noComplexEventTimes_1_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 25, 7)}, ComplexEventTimes_NoComplexEventTimes_484);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_484);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_1_2_0.addGroup(noComplexEventTimes_1_1_0_3_0);
        }
        noComplexEvents_1_1_1.addGroup(noComplexEventDates_1_1_2_0);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_1_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_114;
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_114);
      FIX::ComplexEventPrice ComplexEventPrice_114;
      ComplexEventPrice_114.setString("10789273");
set_field(noComplexEvents_1_1_2, ComplexEventPrice_114, ComplexEvents_NoComplexEvents_114);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_114);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_114;
      ComplexEventPriceBoundaryPrecision_114.setString("45.570000");
set_field(noComplexEvents_1_1_2, ComplexEventPriceBoundaryPrecision_114, ComplexEvents_NoComplexEvents_114);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_114);
      set_field(noComplexEvents_1_1_2, FIX::ComplexEventType{8}, ComplexEvents_NoComplexEvents_114);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_114;
      ComplexOptPayoutAmount_114.setString("2021737");
set_field(noComplexEvents_1_1_2, ComplexOptPayoutAmount_114, ComplexEvents_NoComplexEvents_114);
      all_values.push_back(ComplexEvents_NoComplexEvents_114);
      all_compo_names.insert("...NoQuoteEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_1_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_245;
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 34, 14, 9, 5, 2016)}, ComplexEventDates_NoComplexEventDates_245);
        set_field(noComplexEventDates_1_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(8, 53, 17, 19, 8, 2017)}, ComplexEventDates_NoComplexEventDates_245);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_245);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_485;
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(17, 11, 26)}, ComplexEventTimes_NoComplexEventTimes_485);
          set_field(noComplexEventTimes_1_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 44, 10)}, ComplexEventTimes_NoComplexEventTimes_485);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_485);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_486;
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 25, 4)}, ComplexEventTimes_NoComplexEventTimes_486);
          set_field(noComplexEventTimes_1_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 45, 14)}, ComplexEventTimes_NoComplexEventTimes_486);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_486);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_1_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_487;
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 40, 24)}, ComplexEventTimes_NoComplexEventTimes_487);
          set_field(noComplexEventTimes_1_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 28, 35)}, ComplexEventTimes_NoComplexEventTimes_487);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_487);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_1_2_2_0.addGroup(noComplexEventTimes_1_2_0_3_2);
        }
        noComplexEvents_1_1_2.addGroup(noComplexEventDates_1_2_2_0);
      }
      noQuoteEntries_0_1.addGroup(noComplexEvents_1_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_1_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_113;
      set_field(noEvents_1_1_0, FIX::EventDate{"LOCALMKTDATE_988009333"}, EvntGrp_NoEvents_113);
      FIX::EventPx EventPx_113;
      EventPx_113.setString("1344211");
set_field(noEvents_1_1_0, EventPx_113, EvntGrp_NoEvents_113);
      set_field(noEvents_1_1_0, FIX::EventText{"STRING_2097705160"}, EvntGrp_NoEvents_113);
      set_field(noEvents_1_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(7, 17, 14, 8, 9, 2014)}, EvntGrp_NoEvents_113);
      set_field(noEvents_1_1_0, FIX::EventType{16}, EvntGrp_NoEvents_113);
      all_values.push_back(EvntGrp_NoEvents_113);
      all_compo_names.insert("...NoQuoteEntries....NoEvents");

      noQuoteEntries_0_1.addGroup(noEvents_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_1_1_1;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_114;
      set_field(noEvents_1_1_1, FIX::EventDate{"LOCALMKTDATE_542261499"}, EvntGrp_NoEvents_114);
      FIX::EventPx EventPx_114;
      EventPx_114.setString("1953029");
set_field(noEvents_1_1_1, EventPx_114, EvntGrp_NoEvents_114);
      set_field(noEvents_1_1_1, FIX::EventText{"STRING_1661697565"}, EvntGrp_NoEvents_114);
      set_field(noEvents_1_1_1, FIX::EventTime{FIX::UTCTIMESTAMP(7, 43, 23, 23, 3, 2000)}, EvntGrp_NoEvents_114);
      set_field(noEvents_1_1_1, FIX::EventType{19}, EvntGrp_NoEvents_114);
      all_values.push_back(EvntGrp_NoEvents_114);
      all_compo_names.insert("...NoQuoteEntries....NoEvents");

      noQuoteEntries_0_1.addGroup(noEvents_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_1_1_2;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_115;
      set_field(noEvents_1_1_2, FIX::EventDate{"LOCALMKTDATE_770373444"}, EvntGrp_NoEvents_115);
      FIX::EventPx EventPx_115;
      EventPx_115.setString("13538479");
set_field(noEvents_1_1_2, EventPx_115, EvntGrp_NoEvents_115);
      set_field(noEvents_1_1_2, FIX::EventText{"STRING_654777338"}, EvntGrp_NoEvents_115);
      set_field(noEvents_1_1_2, FIX::EventTime{FIX::UTCTIMESTAMP(1, 23, 8, 17, 9, 2009)}, EvntGrp_NoEvents_115);
      set_field(noEvents_1_1_2, FIX::EventType{2}, EvntGrp_NoEvents_115);
      all_values.push_back(EvntGrp_NoEvents_115);
      all_compo_names.insert("...NoQuoteEntries....NoEvents");

      noQuoteEntries_0_1.addGroup(noEvents_1_1_2);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_104;
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyID{"STRING_763267449"}, InstrumentParties_NoInstrumentParties_104);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_104);
      set_field(noInstrumentParties_1_1_0, FIX::InstrumentPartyRole{899416634}, InstrumentParties_NoInstrumentParties_104);
      all_values.push_back(InstrumentParties_NoInstrumentParties_104);
      all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208;
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubID{"STRING_420554281"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);
        set_field(noInstrumentPartySubIDs_1_0_2_0, FIX::InstrumentPartySubIDType{1856166334}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_208);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209;
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubID{"STRING_732795108"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);
        set_field(noInstrumentPartySubIDs_1_0_2_1, FIX::InstrumentPartySubIDType{1338518657}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_209);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_0_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210;
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubID{"STRING_250944185"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);
        set_field(noInstrumentPartySubIDs_1_0_2_2, FIX::InstrumentPartySubIDType{928098056}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_210);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_0.addGroup(noInstrumentPartySubIDs_1_0_2_2);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_105;
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyID{"STRING_852732574"}, InstrumentParties_NoInstrumentParties_105);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_105);
      set_field(noInstrumentParties_1_1_1, FIX::InstrumentPartyRole{1610583208}, InstrumentParties_NoInstrumentParties_105);
      all_values.push_back(InstrumentParties_NoInstrumentParties_105);
      all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211;
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubID{"STRING_1196747207"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);
        set_field(noInstrumentPartySubIDs_1_1_2_0, FIX::InstrumentPartySubIDType{325045451}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_211);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212;
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubID{"STRING_371266044"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);
        set_field(noInstrumentPartySubIDs_1_1_2_1, FIX::InstrumentPartySubIDType{192423399}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_212);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_1_2_2;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213;
        set_field(noInstrumentPartySubIDs_1_1_2_2, FIX::InstrumentPartySubID{"STRING_950398749"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);
        set_field(noInstrumentPartySubIDs_1_1_2_2, FIX::InstrumentPartySubIDType{1141639488}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_213);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_1.addGroup(noInstrumentPartySubIDs_1_1_2_2);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_1_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_106;
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyID{"STRING_1546271328"}, InstrumentParties_NoInstrumentParties_106);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_106);
      set_field(noInstrumentParties_1_1_2, FIX::InstrumentPartyRole{342538469}, InstrumentParties_NoInstrumentParties_106);
      all_values.push_back(InstrumentParties_NoInstrumentParties_106);
      all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214;
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubID{"STRING_817514643"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);
        set_field(noInstrumentPartySubIDs_1_2_2_0, FIX::InstrumentPartySubIDType{1099177417}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_214);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_1_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215;
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubID{"STRING_1109174418"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);
        set_field(noInstrumentPartySubIDs_1_2_2_1, FIX::InstrumentPartySubIDType{2093373336}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_215);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_1_1_2.addGroup(noInstrumentPartySubIDs_1_2_2_1);
      }
      noQuoteEntries_0_1.addGroup(noInstrumentParties_1_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_1_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_114;
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltID{"STRING_272268692"}, SecAltIDGrp_NoSecurityAltID_114);
      set_field(noSecurityAltID_1_1_0, FIX::SecurityAltIDSource{"STRING_1171969893"}, SecAltIDGrp_NoSecurityAltID_114);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_114);
      all_compo_names.insert("...NoQuoteEntries....NoSecurityAltID");

      noQuoteEntries_0_1.addGroup(noSecurityAltID_1_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_110;
    set_field(noQuoteEntries_0_1, FIX::SecurityXML{"XMLDATA_1459609500"}, SecurityXML_110);
    set_field(noQuoteEntries_0_1, FIX::SecurityXMLLen{528316469}, SecurityXML_110);
    set_field(noQuoteEntries_0_1, FIX::SecurityXMLSchema{"STRING_2071386527"}, SecurityXML_110);
    all_values.push_back(SecurityXML_110);
    all_compo_names.insert("...NoQuoteEntries..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_96;
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuer{"DATA_948870750"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingIssuerLen{1780069213}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_2138151664"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::EncodedUnderlyingSecurityDescLen{139905759}, UnderlyingInstrument_96);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_96;
      UnderlyingAdjustedQuantity_96.setString("20310133");
set_field(noUnderlyings_1_1_0, UnderlyingAdjustedQuantity_96, UnderlyingInstrument_96);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_96;
      UnderlyingAllocationPercent_96.setString("60.720000");
set_field(noUnderlyings_1_1_0, UnderlyingAllocationPercent_96, UnderlyingInstrument_96);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_96;
      UnderlyingAttachmentPoint_96.setString("83.340000");
set_field(noUnderlyings_1_1_0, UnderlyingAttachmentPoint_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCFICode{"STRING_1883003022"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPProgram{"STRING_381865632"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCPRegType{"STRING_960950483"}, UnderlyingInstrument_96);
      FIX::UnderlyingCapValue UnderlyingCapValue_96;
      UnderlyingCapValue_96.setString("9322665");
set_field(noUnderlyings_1_1_0, UnderlyingCapValue_96, UnderlyingInstrument_96);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_96;
      UnderlyingCashAmount_96.setString("7069110");
set_field(noUnderlyings_1_1_0, UnderlyingCashAmount_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_96);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_96;
      UnderlyingContractMultiplier_96.setString("11246899");
set_field(noUnderlyings_1_1_0, UnderlyingContractMultiplier_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingContractMultiplierUnit{1657309833}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_326372368"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_523477661"}, UnderlyingInstrument_96);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_96;
      UnderlyingCouponRate_96.setString("22.730000");
set_field(noUnderlyings_1_1_0, UnderlyingCouponRate_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCreditRating{"STRING_668910837"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingCurrency{"CAN"}, UnderlyingInstrument_96);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_96;
      UnderlyingCurrentValue_96.setString("17680882");
set_field(noUnderlyings_1_1_0, UnderlyingCurrentValue_96, UnderlyingInstrument_96);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_96;
      UnderlyingDetachmentPoint_96.setString("96.810000");
set_field(noUnderlyings_1_1_0, UnderlyingDetachmentPoint_96, UnderlyingInstrument_96);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_96;
      UnderlyingDirtyPrice_96.setString("18784066");
set_field(noUnderlyings_1_1_0, UnderlyingDirtyPrice_96, UnderlyingInstrument_96);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_96;
      UnderlyingEndPrice_96.setString("3169466");
set_field(noUnderlyings_1_1_0, UnderlyingEndPrice_96, UnderlyingInstrument_96);
      FIX::UnderlyingEndValue UnderlyingEndValue_96;
      UnderlyingEndValue_96.setString("18379383");
set_field(noUnderlyings_1_1_0, UnderlyingEndValue_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingExerciseStyle{902892850}, UnderlyingInstrument_96);
      FIX::UnderlyingFXRate UnderlyingFXRate_96;
      UnderlyingFXRate_96.setString("17765561");
set_field(noUnderlyings_1_1_0, UnderlyingFXRate_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_96);
      FIX::UnderlyingFactor UnderlyingFactor_96;
      UnderlyingFactor_96.setString("8267957");
set_field(noUnderlyings_1_1_0, UnderlyingFactor_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingFlowScheduleType{1034429066}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingInstrRegistry{"STRING_1167641944"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_459381294"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingIssuer{"STRING_1025097082"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_1307547704"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_342911044"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1943863154"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_152702390"}, UnderlyingInstrument_96);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_96;
      UnderlyingNotionalPercentageOutstanding_96.setString("4.190000");
set_field(noUnderlyings_1_1_0, UnderlyingNotionalPercentageOutstanding_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_96);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_96;
      UnderlyingOriginalNotionalPercentageOutstanding_96.setString("28.730000");
set_field(noUnderlyings_1_1_0, UnderlyingOriginalNotionalPercentageOutstanding_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1010697000"}, UnderlyingInstrument_96);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_96;
      UnderlyingPriceUnitOfMeasureQty_96.setString("8851562");
set_field(noUnderlyings_1_1_0, UnderlyingPriceUnitOfMeasureQty_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingProduct{298385753}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingPutOrCall{2135386981}, UnderlyingInstrument_96);
      FIX::UnderlyingPx UnderlyingPx_96;
      UnderlyingPx_96.setString("3949824");
set_field(noUnderlyings_1_1_0, UnderlyingPx_96, UnderlyingInstrument_96);
      FIX::UnderlyingQty UnderlyingQty_96;
      UnderlyingQty_96.setString("6247581");
set_field(noUnderlyings_1_1_0, UnderlyingQty_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_511380994"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1509984682"}, UnderlyingInstrument_96);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_96;
      UnderlyingRepurchaseRate_96.setString("89.580000");
set_field(noUnderlyings_1_1_0, UnderlyingRepurchaseRate_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRepurchaseTerm{967876257}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingRestructuringType{"STRING_1295017951"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityDesc{"STRING_914273564"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_386062290"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityID{"STRING_1025940908"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityIDSource{"STRING_1231220222"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecuritySubType{"STRING_76517015"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSecurityType{"STRING_1928833758"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSeniority{"STRING_860292732"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlMethod{"STRING_295288209"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_96);
      FIX::UnderlyingStartValue UnderlyingStartValue_96;
      UnderlyingStartValue_96.setString("18947217");
set_field(noUnderlyings_1_1_0, UnderlyingStartValue_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1462930153"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_96);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_96;
      UnderlyingStrikePrice_96.setString("6229942");
set_field(noUnderlyings_1_1_0, UnderlyingStrikePrice_96, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbol{"STRING_1410438177"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingSymbolSfx{"STRING_568714738"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingTimeUnit{"STRING_775696599"}, UnderlyingInstrument_96);
      set_field(noUnderlyings_1_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_1488868596"}, UnderlyingInstrument_96);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_96;
      UnderlyingUnitOfMeasureQty_96.setString("7469598");
set_field(noUnderlyings_1_1_0, UnderlyingUnitOfMeasureQty_96, UnderlyingInstrument_96);
      all_values.push_back(UnderlyingInstrument_96);
      all_compo_names.insert("...NoQuoteEntries...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_202;
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_352081949"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);
        set_field(noUnderlyingSecurityAltID_1_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1632116100"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_202);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_203;
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_40251578"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);
        set_field(noUnderlyingSecurityAltID_1_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_339985282"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_203);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_0_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_204;
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltID{"STRING_2027098509"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);
        set_field(noUnderlyingSecurityAltID_1_0_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_665009699"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_204);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_0.addGroup(noUnderlyingSecurityAltID_1_0_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_196;
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipType{"STRING_1389599543"}, UnderlyingStipulations_NoUnderlyingStips_196);
        set_field(noUnderlyingStips_1_0_2_0, FIX::UnderlyingStipValue{"STRING_1958678657"}, UnderlyingStipulations_NoUnderlyingStips_196);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_196);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_0.addGroup(noUnderlyingStips_1_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_199;
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_537133846"}, UndlyInstrumentParties_NoUndlyInstrumentParties_199);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'7'}, UndlyInstrumentParties_NoUndlyInstrumentParties_199);
        set_field(noUndlyInstrumentParties_1_0_2_0, FIX::UnderlyingInstrumentPartyRole{57821176}, UndlyInstrumentParties_NoUndlyInstrumentParties_199);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_199);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397;
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1956688795"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);
          set_field(noUndlyInstrumentPartySubIDs_1_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{134338191}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_397);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_0_0_3_0);
        }
        noUnderlyings_1_1_0.addGroup(noUndlyInstrumentParties_1_0_2_0);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_1_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_97;
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1344424864"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingIssuerLen{669497879}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_429626400"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::EncodedUnderlyingSecurityDescLen{1952570703}, UnderlyingInstrument_97);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_97;
      UnderlyingAdjustedQuantity_97.setString("4167360");
set_field(noUnderlyings_1_1_1, UnderlyingAdjustedQuantity_97, UnderlyingInstrument_97);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_97;
      UnderlyingAllocationPercent_97.setString("65.530000");
set_field(noUnderlyings_1_1_1, UnderlyingAllocationPercent_97, UnderlyingInstrument_97);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_97;
      UnderlyingAttachmentPoint_97.setString("41.880000");
set_field(noUnderlyings_1_1_1, UnderlyingAttachmentPoint_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCFICode{"STRING_1189071261"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPProgram{"STRING_368067115"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCPRegType{"STRING_135568717"}, UnderlyingInstrument_97);
      FIX::UnderlyingCapValue UnderlyingCapValue_97;
      UnderlyingCapValue_97.setString("17577860");
set_field(noUnderlyings_1_1_1, UnderlyingCapValue_97, UnderlyingInstrument_97);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_97;
      UnderlyingCashAmount_97.setString("11437637");
set_field(noUnderlyings_1_1_1, UnderlyingCashAmount_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_97);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_97;
      UnderlyingContractMultiplier_97.setString("3572622");
set_field(noUnderlyings_1_1_1, UnderlyingContractMultiplier_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingContractMultiplierUnit{885629539}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_1976519263"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1989378330"}, UnderlyingInstrument_97);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_97;
      UnderlyingCouponRate_97.setString("11.170000");
set_field(noUnderlyings_1_1_1, UnderlyingCouponRate_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCreditRating{"STRING_169020897"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_97);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_97;
      UnderlyingCurrentValue_97.setString("10203871");
set_field(noUnderlyings_1_1_1, UnderlyingCurrentValue_97, UnderlyingInstrument_97);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_97;
      UnderlyingDetachmentPoint_97.setString("90.860000");
set_field(noUnderlyings_1_1_1, UnderlyingDetachmentPoint_97, UnderlyingInstrument_97);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_97;
      UnderlyingDirtyPrice_97.setString("14020858");
set_field(noUnderlyings_1_1_1, UnderlyingDirtyPrice_97, UnderlyingInstrument_97);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_97;
      UnderlyingEndPrice_97.setString("6921460");
set_field(noUnderlyings_1_1_1, UnderlyingEndPrice_97, UnderlyingInstrument_97);
      FIX::UnderlyingEndValue UnderlyingEndValue_97;
      UnderlyingEndValue_97.setString("16482429");
set_field(noUnderlyings_1_1_1, UnderlyingEndValue_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingExerciseStyle{2127554399}, UnderlyingInstrument_97);
      FIX::UnderlyingFXRate UnderlyingFXRate_97;
      UnderlyingFXRate_97.setString("7499672");
set_field(noUnderlyings_1_1_1, UnderlyingFXRate_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_97);
      FIX::UnderlyingFactor UnderlyingFactor_97;
      UnderlyingFactor_97.setString("19367595");
set_field(noUnderlyings_1_1_1, UnderlyingFactor_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingFlowScheduleType{884305427}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingInstrRegistry{"STRING_260775254"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_458773778"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingIssuer{"STRING_1313931827"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_65862309"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_875509807"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1059004733"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_938476497"}, UnderlyingInstrument_97);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_97;
      UnderlyingNotionalPercentageOutstanding_97.setString("10.690000");
set_field(noUnderlyings_1_1_1, UnderlyingNotionalPercentageOutstanding_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_97);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_97;
      UnderlyingOriginalNotionalPercentageOutstanding_97.setString("52.140000");
set_field(noUnderlyings_1_1_1, UnderlyingOriginalNotionalPercentageOutstanding_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1674883421"}, UnderlyingInstrument_97);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_97;
      UnderlyingPriceUnitOfMeasureQty_97.setString("4233519");
set_field(noUnderlyings_1_1_1, UnderlyingPriceUnitOfMeasureQty_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingProduct{550998880}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingPutOrCall{2032145650}, UnderlyingInstrument_97);
      FIX::UnderlyingPx UnderlyingPx_97;
      UnderlyingPx_97.setString("13089814");
set_field(noUnderlyings_1_1_1, UnderlyingPx_97, UnderlyingInstrument_97);
      FIX::UnderlyingQty UnderlyingQty_97;
      UnderlyingQty_97.setString("3800344");
set_field(noUnderlyings_1_1_1, UnderlyingQty_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1874040332"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_87378923"}, UnderlyingInstrument_97);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_97;
      UnderlyingRepurchaseRate_97.setString("53.930000");
set_field(noUnderlyings_1_1_1, UnderlyingRepurchaseRate_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRepurchaseTerm{1595549875}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingRestructuringType{"STRING_1678269740"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityDesc{"STRING_1569442567"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_559175313"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityID{"STRING_932871917"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityIDSource{"STRING_114104980"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecuritySubType{"STRING_59934597"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSecurityType{"STRING_912942668"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSeniority{"STRING_864072216"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlMethod{"STRING_1123768635"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_97);
      FIX::UnderlyingStartValue UnderlyingStartValue_97;
      UnderlyingStartValue_97.setString("17483776");
set_field(noUnderlyings_1_1_1, UnderlyingStartValue_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1384543889"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_97);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_97;
      UnderlyingStrikePrice_97.setString("14504061");
set_field(noUnderlyings_1_1_1, UnderlyingStrikePrice_97, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbol{"STRING_2036502152"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingSymbolSfx{"STRING_1973830556"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingTimeUnit{"STRING_241399047"}, UnderlyingInstrument_97);
      set_field(noUnderlyings_1_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1953599573"}, UnderlyingInstrument_97);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_97;
      UnderlyingUnitOfMeasureQty_97.setString("12534187");
set_field(noUnderlyings_1_1_1, UnderlyingUnitOfMeasureQty_97, UnderlyingInstrument_97);
      all_values.push_back(UnderlyingInstrument_97);
      all_compo_names.insert("...NoQuoteEntries...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_205;
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1480999346"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);
        set_field(noUnderlyingSecurityAltID_1_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1676770671"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_205);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_206;
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_1866443142"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);
        set_field(noUnderlyingSecurityAltID_1_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1365661349"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_206);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_1_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_207;
        set_field(noUnderlyingSecurityAltID_1_1_2_2, FIX::UnderlyingSecurityAltID{"STRING_838268477"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);
        set_field(noUnderlyingSecurityAltID_1_1_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_98993990"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_207);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_1_1_1.addGroup(noUnderlyingSecurityAltID_1_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_197;
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipType{"STRING_925647400"}, UnderlyingStipulations_NoUnderlyingStips_197);
        set_field(noUnderlyingStips_1_1_2_0, FIX::UnderlyingStipValue{"STRING_648049383"}, UnderlyingStipulations_NoUnderlyingStips_197);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_197);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_198;
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipType{"STRING_540284261"}, UnderlyingStipulations_NoUnderlyingStips_198);
        set_field(noUnderlyingStips_1_1_2_1, FIX::UnderlyingStipValue{"STRING_456433492"}, UnderlyingStipulations_NoUnderlyingStips_198);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_198);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_1_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_199;
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipType{"STRING_70008302"}, UnderlyingStipulations_NoUnderlyingStips_199);
        set_field(noUnderlyingStips_1_1_2_2, FIX::UnderlyingStipValue{"STRING_1099459574"}, UnderlyingStipulations_NoUnderlyingStips_199);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_199);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_1_1_1.addGroup(noUnderlyingStips_1_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_200;
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_184113282"}, UndlyInstrumentParties_NoUndlyInstrumentParties_200);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_200);
        set_field(noUndlyInstrumentParties_1_1_2_0, FIX::UnderlyingInstrumentPartyRole{154764430}, UndlyInstrumentParties_NoUndlyInstrumentParties_200);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_200);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_135679159"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{856982997}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_398);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399;
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_649079495"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);
          set_field(noUndlyInstrumentPartySubIDs_1_1_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1520223049}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_399);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_1_1_0_3_1);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_1_1_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_201;
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_2017975342"}, UndlyInstrumentParties_NoUndlyInstrumentParties_201);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_201);
        set_field(noUndlyInstrumentParties_1_1_2_1, FIX::UnderlyingInstrumentPartyRole{823145599}, UndlyInstrumentParties_NoUndlyInstrumentParties_201);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_201);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1390252227"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1064544647}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_400);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1713109772"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_1, FIX::UnderlyingInstrumentPartySubIDType{496187335}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_401);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1_3_2;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402;
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_2, FIX::UnderlyingInstrumentPartySubID{"STRING_232505261"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);
          set_field(noUndlyInstrumentPartySubIDs_1_1_1_3_2, FIX::UnderlyingInstrumentPartySubIDType{1046625471}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_402);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_1_1_2_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1_3_2);
        }
        noUnderlyings_1_1_1.addGroup(noUndlyInstrumentParties_1_1_2_1);
      }
      noQuoteEntries_0_1.addGroup(noUnderlyings_1_1_1);
    }
    msg.addGroup(noQuoteEntries_0_1);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_13;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_2098948403"}, TargetParties_NoTargetPartyIDs_13);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'2'}, TargetParties_NoTargetPartyIDs_13);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{863742835}, TargetParties_NoTargetPartyIDs_13);
    all_values.push_back(TargetParties_NoTargetPartyIDs_13);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_14;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_50458745"}, TargetParties_NoTargetPartyIDs_14);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_14);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{1789390236}, TargetParties_NoTargetPartyIDs_14);
    all_values.push_back(TargetParties_NoTargetPartyIDs_14);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_15;
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyID{"STRING_698508128"}, TargetParties_NoTargetPartyIDs_15);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_15);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyRole{98340080}, TargetParties_NoTargetPartyIDs_15);
    all_values.push_back(TargetParties_NoTargetPartyIDs_15);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
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
