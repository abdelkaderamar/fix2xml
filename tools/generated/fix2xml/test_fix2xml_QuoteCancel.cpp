#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::QuoteCancel msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteCancel_0;
  set_field(msg, FIX::Account{"STRING_513699934"}, QuoteCancel_0);
  set_field(msg, FIX::AccountType{7}, QuoteCancel_0);
  set_field(msg, FIX::AcctIDSource{3}, QuoteCancel_0);
  set_field(msg, FIX::QuoteCancelType{7}, QuoteCancel_0);
  set_field(msg, FIX::QuoteID{"STRING_924910842"}, QuoteCancel_0);
  set_field(msg, FIX::QuoteMsgID{"STRING_342341163"}, QuoteCancel_0);
  set_field(msg, FIX::QuoteReqID{"STRING_1007649481"}, QuoteCancel_0);
  set_field(msg, FIX::QuoteResponseLevel{2}, QuoteCancel_0);
  set_field(msg, FIX::QuoteType{0}, QuoteCancel_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, QuoteCancel_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_2"}, QuoteCancel_0);
  all_values.push_back(QuoteCancel_0);

  all_compo_names.insert("QuoteCancel");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::QuoteCancel::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_112;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1034842263"}, Parties_NoPartyIDs_112);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'F'}, Parties_NoPartyIDs_112);
    set_field(noPartyIDs_0_0, FIX::PartyRole{25}, Parties_NoPartyIDs_112);
    all_values.push_back(Parties_NoPartyIDs_112);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::QuoteCancel::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_224;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1405729737"}, PtysSubGrp_NoPartySubIDs_224);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_224);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_224);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotCxlEntriesGrp
  // Group QuotCxlEntriesGrp.NoQuoteEntries
  {
    FIX50SP2::QuoteCancel::NoQuoteEntries noQuoteEntries_0_0;
    // QuotCxlEntriesGrp.NoQuoteEntries
    // FinancingDetails
    multiset<string> FinancingDetails_17;
    set_field(noQuoteEntries_0_0, FIX::AgreementCurrency{"EUR"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::AgreementDate{"LOCALMKTDATE_1372916516"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::AgreementDesc{"STRING_973978937"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::AgreementID{"STRING_1366785419"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::DeliveryType{2}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::EndDate{"LOCALMKTDATE_762820476"}, FinancingDetails_17);
    FIX::MarginRatio MarginRatio_17;
    MarginRatio_17.setString("69.690000");
set_field(noQuoteEntries_0_0, MarginRatio_17, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::StartDate{"LOCALMKTDATE_561997216"}, FinancingDetails_17);
    set_field(noQuoteEntries_0_0, FIX::TerminationType{1}, FinancingDetails_17);
    all_values.push_back(FinancingDetails_17);
    all_compo_names.insert("...NoQuoteEntries.");

    // InstrmtLegGrp
    // Group InstrmtLegGrp.NoLegs
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_0;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_93;
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuer{"DATA_261526325"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::EncodedLegIssuerLen{2058375394}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDesc{"DATA_1898726716"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::EncodedLegSecurityDescLen{168100307}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegCFICode{"STRING_425553464"}, InstrumentLeg_93);
      FIX::LegContractMultiplier LegContractMultiplier_93;
      LegContractMultiplier_93.setString("6761539");
set_field(noLegs_0_1_0, LegContractMultiplier_93, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegContractMultiplierUnit{510441470}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegContractSettlMonth{"MONTHYEAR_1433202945"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegCountryOfIssue{"COUNTRY_1210587457"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_996675418"}, InstrumentLeg_93);
      FIX::LegCouponRate LegCouponRate_93;
      LegCouponRate_93.setString("75.940000");
set_field(noLegs_0_1_0, LegCouponRate_93, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegCreditRating{"STRING_1233494867"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegDatedDate{"LOCALMKTDATE_977244540"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegExerciseStyle{691757747}, InstrumentLeg_93);
      FIX::LegFactor LegFactor_93;
      LegFactor_93.setString("5859975");
set_field(noLegs_0_1_0, LegFactor_93, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegFlowScheduleType{235490630}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegInstrRegistry{"STRING_1338066758"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_519268546"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegIssueDate{"LOCALMKTDATE_2084143826"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegIssuer{"STRING_297114769"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegLocaleOfIssue{"STRING_1892185062"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegMaturityDate{"LOCALMKTDATE_910639115"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1663900189"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegMaturityTime{"TZTIMEONLY_916054084"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_93);
      FIX::LegOptionRatio LegOptionRatio_93;
      LegOptionRatio_93.setString("15658535");
set_field(noLegs_0_1_0, LegOptionRatio_93, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegPool{"STRING_1478051301"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegPriceUnitOfMeasure{"STRING_1070651404"}, InstrumentLeg_93);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_93;
      LegPriceUnitOfMeasureQty_93.setString("10636466");
set_field(noLegs_0_1_0, LegPriceUnitOfMeasureQty_93, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegProduct{1739577626}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegPutOrCall{981543150}, InstrumentLeg_93);
      FIX::LegRatioQty LegRatioQty_93;
      LegRatioQty_93.setString("8148897");
set_field(noLegs_0_1_0, LegRatioQty_93, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1907677933"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegRepoCollateralSecurityType{"STRING_1407096614"}, InstrumentLeg_93);
      FIX::LegRepurchaseRate LegRepurchaseRate_93;
      LegRepurchaseRate_93.setString("36.700000");
set_field(noLegs_0_1_0, LegRepurchaseRate_93, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegRepurchaseTerm{270635755}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegSecurityDesc{"STRING_692815911"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegSecurityExchange{"EXCHANGE_554147479"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegSecurityID{"STRING_1267311174"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegSecurityIDSource{"STRING_413549858"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegSecuritySubType{"STRING_1787642346"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegSecurityType{"STRING_1374923405"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegSide{'1'}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegStateOrProvinceOfIssue{"STRING_617403239"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegStrikeCurrency{"CHF"}, InstrumentLeg_93);
      FIX::LegStrikePrice LegStrikePrice_93;
      LegStrikePrice_93.setString("8528938");
set_field(noLegs_0_1_0, LegStrikePrice_93, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegSymbol{"STRING_1257264263"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegSymbolSfx{"STRING_126908561"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegTimeUnit{"STRING_789554047"}, InstrumentLeg_93);
      set_field(noLegs_0_1_0, FIX::LegUnitOfMeasure{"STRING_1554379032"}, InstrumentLeg_93);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_93;
      LegUnitOfMeasureQty_93.setString("20190936");
set_field(noLegs_0_1_0, LegUnitOfMeasureQty_93, InstrumentLeg_93);
      all_values.push_back(InstrumentLeg_93);
      all_compo_names.insert("...NoQuoteEntries...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_188;
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltID{"STRING_1070795573"}, LegSecAltIDGrp_NoLegSecurityAltID_188);
        set_field(noLegSecurityAltID_0_0_2_0, FIX::LegSecurityAltIDSource{"STRING_787664060"}, LegSecAltIDGrp_NoLegSecurityAltID_188);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_188);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_0.addGroup(noLegSecurityAltID_0_0_2_0);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_1;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_94;
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuer{"DATA_1226169106"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::EncodedLegIssuerLen{489165436}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDesc{"DATA_118231713"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::EncodedLegSecurityDescLen{149336862}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegCFICode{"STRING_1552812127"}, InstrumentLeg_94);
      FIX::LegContractMultiplier LegContractMultiplier_94;
      LegContractMultiplier_94.setString("18578093");
set_field(noLegs_0_1_1, LegContractMultiplier_94, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegContractMultiplierUnit{1130880012}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegContractSettlMonth{"MONTHYEAR_220218239"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegCountryOfIssue{"COUNTRY_1618003624"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_390492978"}, InstrumentLeg_94);
      FIX::LegCouponRate LegCouponRate_94;
      LegCouponRate_94.setString("19.100000");
set_field(noLegs_0_1_1, LegCouponRate_94, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegCreditRating{"STRING_1888639379"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegDatedDate{"LOCALMKTDATE_1008466905"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegExerciseStyle{1496858748}, InstrumentLeg_94);
      FIX::LegFactor LegFactor_94;
      LegFactor_94.setString("19055680");
set_field(noLegs_0_1_1, LegFactor_94, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegFlowScheduleType{235906663}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegInstrRegistry{"STRING_518501167"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_375487679"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegIssueDate{"LOCALMKTDATE_155104167"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegIssuer{"STRING_126141182"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegLocaleOfIssue{"STRING_1228381548"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegMaturityDate{"LOCALMKTDATE_1412368430"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegMaturityMonthYear{"MONTHYEAR_253049743"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegMaturityTime{"TZTIMEONLY_2017935595"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegOptAttribute{'8'}, InstrumentLeg_94);
      FIX::LegOptionRatio LegOptionRatio_94;
      LegOptionRatio_94.setString("1246597");
set_field(noLegs_0_1_1, LegOptionRatio_94, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegPool{"STRING_1570645109"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegPriceUnitOfMeasure{"STRING_1890059388"}, InstrumentLeg_94);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_94;
      LegPriceUnitOfMeasureQty_94.setString("9123237");
set_field(noLegs_0_1_1, LegPriceUnitOfMeasureQty_94, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegProduct{649330568}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegPutOrCall{231741176}, InstrumentLeg_94);
      FIX::LegRatioQty LegRatioQty_94;
      LegRatioQty_94.setString("10305554");
set_field(noLegs_0_1_1, LegRatioQty_94, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegRedemptionDate{"LOCALMKTDATE_798667430"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegRepoCollateralSecurityType{"STRING_1784553304"}, InstrumentLeg_94);
      FIX::LegRepurchaseRate LegRepurchaseRate_94;
      LegRepurchaseRate_94.setString("11.830000");
set_field(noLegs_0_1_1, LegRepurchaseRate_94, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegRepurchaseTerm{1929547443}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegSecurityDesc{"STRING_2004771543"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegSecurityExchange{"EXCHANGE_211401159"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegSecurityID{"STRING_172556773"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegSecurityIDSource{"STRING_1568549805"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegSecuritySubType{"STRING_2100040538"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegSecurityType{"STRING_1255865663"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegSide{'1'}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegStateOrProvinceOfIssue{"STRING_961023796"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_94);
      FIX::LegStrikePrice LegStrikePrice_94;
      LegStrikePrice_94.setString("11969304");
set_field(noLegs_0_1_1, LegStrikePrice_94, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegSymbol{"STRING_1123741931"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegSymbolSfx{"STRING_1820047666"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegTimeUnit{"STRING_1352034626"}, InstrumentLeg_94);
      set_field(noLegs_0_1_1, FIX::LegUnitOfMeasure{"STRING_1249883113"}, InstrumentLeg_94);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_94;
      LegUnitOfMeasureQty_94.setString("9009455");
set_field(noLegs_0_1_1, LegUnitOfMeasureQty_94, InstrumentLeg_94);
      all_values.push_back(InstrumentLeg_94);
      all_compo_names.insert("...NoQuoteEntries...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_189;
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltID{"STRING_1502932857"}, LegSecAltIDGrp_NoLegSecurityAltID_189);
        set_field(noLegSecurityAltID_0_1_2_0, FIX::LegSecurityAltIDSource{"STRING_771397513"}, LegSecAltIDGrp_NoLegSecurityAltID_189);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_189);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_1.addGroup(noLegSecurityAltID_0_1_2_0);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs noLegs_0_1_2;
      // InstrmtLegGrp.NoLegs
      // InstrumentLeg
      multiset<string> InstrumentLeg_95;
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuer{"DATA_1436183224"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::EncodedLegIssuerLen{1627592576}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDesc{"DATA_194558974"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::EncodedLegSecurityDescLen{1178758964}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegCFICode{"STRING_392432707"}, InstrumentLeg_95);
      FIX::LegContractMultiplier LegContractMultiplier_95;
      LegContractMultiplier_95.setString("8438895");
set_field(noLegs_0_1_2, LegContractMultiplier_95, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegContractMultiplierUnit{1410500141}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegContractSettlMonth{"MONTHYEAR_1422988199"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegCountryOfIssue{"COUNTRY_1642556973"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1047569797"}, InstrumentLeg_95);
      FIX::LegCouponRate LegCouponRate_95;
      LegCouponRate_95.setString("57.340000");
set_field(noLegs_0_1_2, LegCouponRate_95, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegCreditRating{"STRING_1424620768"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegCurrency{"EUR"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegDatedDate{"LOCALMKTDATE_1597177541"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegExerciseStyle{325923850}, InstrumentLeg_95);
      FIX::LegFactor LegFactor_95;
      LegFactor_95.setString("1803437");
set_field(noLegs_0_1_2, LegFactor_95, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegFlowScheduleType{705559557}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegInstrRegistry{"STRING_2012399397"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1141367579"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegIssueDate{"LOCALMKTDATE_1310800320"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegIssuer{"STRING_1309475736"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegLocaleOfIssue{"STRING_190814390"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegMaturityDate{"LOCALMKTDATE_287058603"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegMaturityMonthYear{"MONTHYEAR_982039754"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegMaturityTime{"TZTIMEONLY_1542849017"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_95);
      FIX::LegOptionRatio LegOptionRatio_95;
      LegOptionRatio_95.setString("18829853");
set_field(noLegs_0_1_2, LegOptionRatio_95, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegPool{"STRING_12284778"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegPriceUnitOfMeasure{"STRING_892390926"}, InstrumentLeg_95);
      FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_95;
      LegPriceUnitOfMeasureQty_95.setString("5068991");
set_field(noLegs_0_1_2, LegPriceUnitOfMeasureQty_95, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegProduct{1448468002}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegPutOrCall{372499854}, InstrumentLeg_95);
      FIX::LegRatioQty LegRatioQty_95;
      LegRatioQty_95.setString("7014581");
set_field(noLegs_0_1_2, LegRatioQty_95, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegRedemptionDate{"LOCALMKTDATE_479743318"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegRepoCollateralSecurityType{"STRING_764932561"}, InstrumentLeg_95);
      FIX::LegRepurchaseRate LegRepurchaseRate_95;
      LegRepurchaseRate_95.setString("77.020000");
set_field(noLegs_0_1_2, LegRepurchaseRate_95, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegRepurchaseTerm{1890243459}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegSecurityDesc{"STRING_40437112"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegSecurityExchange{"EXCHANGE_1040421027"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegSecurityID{"STRING_790329608"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegSecurityIDSource{"STRING_56822846"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegSecuritySubType{"STRING_317558147"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegSecurityType{"STRING_1695187301"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegSide{'2'}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegStateOrProvinceOfIssue{"STRING_1914735688"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_95);
      FIX::LegStrikePrice LegStrikePrice_95;
      LegStrikePrice_95.setString("4728115");
set_field(noLegs_0_1_2, LegStrikePrice_95, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegSymbol{"STRING_1886026900"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegSymbolSfx{"STRING_1606321102"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegTimeUnit{"STRING_1783611918"}, InstrumentLeg_95);
      set_field(noLegs_0_1_2, FIX::LegUnitOfMeasure{"STRING_1048018988"}, InstrumentLeg_95);
      FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_95;
      LegUnitOfMeasureQty_95.setString("17971354");
set_field(noLegs_0_1_2, LegUnitOfMeasureQty_95, InstrumentLeg_95);
      all_values.push_back(InstrumentLeg_95);
      all_compo_names.insert("...NoQuoteEntries...NoLegs.");

      // LegSecAltIDGrp
      // Group LegSecAltIDGrp.NoLegSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_0;
        // LegSecAltIDGrp.NoLegSecurityAltID
        multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_190;
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltID{"STRING_2030058742"}, LegSecAltIDGrp_NoLegSecurityAltID_190);
        set_field(noLegSecurityAltID_0_2_2_0, FIX::LegSecurityAltIDSource{"STRING_1192500861"}, LegSecAltIDGrp_NoLegSecurityAltID_190);
        all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_190);
        all_compo_names.insert("...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

        noLegs_0_1_2.addGroup(noLegSecurityAltID_0_2_2_0);
      }
      noQuoteEntries_0_0.addGroup(noLegs_0_1_2);
    }
    // Instrument
    multiset<string> Instrument_67;
    FIX::AttachmentPoint AttachmentPoint_67;
    AttachmentPoint_67.setString("85.900000");
set_field(noQuoteEntries_0_0, AttachmentPoint_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::CFICode{"STRING_1765560414"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::CPProgram{1}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::CPRegType{"STRING_205035868"}, Instrument_67);
    FIX::CapPrice CapPrice_67;
    CapPrice_67.setString("1249759");
set_field(noQuoteEntries_0_0, CapPrice_67, Instrument_67);
    FIX::ContractMultiplier ContractMultiplier_67;
    ContractMultiplier_67.setString("5057699");
set_field(noQuoteEntries_0_0, ContractMultiplier_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::ContractMultiplierUnit{1}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::ContractSettlMonth{"MONTHYEAR_826434110"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::CountryOfIssue{"COUNTRY_985513312"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::CouponPaymentDate{"LOCALMKTDATE_1342468283"}, Instrument_67);
    FIX::CouponRate CouponRate_67;
    CouponRate_67.setString("81.640000");
set_field(noQuoteEntries_0_0, CouponRate_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::CreditRating{"STRING_728273123"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::DatedDate{"LOCALMKTDATE_1382905395"}, Instrument_67);
    FIX::DetachmentPoint DetachmentPoint_67;
    DetachmentPoint_67.setString("91.910000");
set_field(noQuoteEntries_0_0, DetachmentPoint_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::EncodedIssuer{"DATA_1518602732"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::EncodedIssuerLen{1439728241}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::EncodedSecurityDesc{"DATA_1582277338"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::EncodedSecurityDescLen{1066306385}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::ExerciseStyle{2}, Instrument_67);
    FIX::Factor Factor_67;
    Factor_67.setString("13495293");
set_field(noQuoteEntries_0_0, Factor_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::FlexibleIndicator{false}, Instrument_67);
    FIX::FloorPrice FloorPrice_67;
    FloorPrice_67.setString("18223409");
set_field(noQuoteEntries_0_0, FloorPrice_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::FlowScheduleType{0}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::InstrRegistry{"STRING_1648128957"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::InterestAccrualDate{"LOCALMKTDATE_1726496128"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::IssueDate{"LOCALMKTDATE_1297780801"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::Issuer{"STRING_1381656120"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::ListMethod{0}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::LocaleOfIssue{"STRING_342798015"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::MaturityDate{"LOCALMKTDATE_694301062"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::MaturityMonthYear{"MONTHYEAR_1227147988"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::MaturityTime{"TZTIMEONLY_1547583654"}, Instrument_67);
    FIX::MinPriceIncrement MinPriceIncrement_67;
    MinPriceIncrement_67.setString("8993369");
set_field(noQuoteEntries_0_0, MinPriceIncrement_67, Instrument_67);
    FIX::MinPriceIncrementAmount MinPriceIncrementAmount_67;
    MinPriceIncrementAmount_67.setString("13521239");
set_field(noQuoteEntries_0_0, MinPriceIncrementAmount_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::NTPositionLimit{2053353648}, Instrument_67);
    FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_67;
    NotionalPercentageOutstanding_67.setString("26.530000");
set_field(noQuoteEntries_0_0, NotionalPercentageOutstanding_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::OptAttribute{'3'}, Instrument_67);
    FIX::OptPayoutAmount OptPayoutAmount_67;
    OptPayoutAmount_67.setString("8913833");
set_field(noQuoteEntries_0_0, OptPayoutAmount_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::OptPayoutType{3}, Instrument_67);
    FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_67;
    OriginalNotionalPercentageOutstanding_67.setString("25.660000");
set_field(noQuoteEntries_0_0, OriginalNotionalPercentageOutstanding_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::Pool{"STRING_1619656435"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::PositionLimit{2054762684}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::PriceQuoteMethod{"STRING_INX"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::PriceUnitOfMeasure{"STRING_990775519"}, Instrument_67);
    FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_67;
    PriceUnitOfMeasureQty_67.setString("13470072");
set_field(noQuoteEntries_0_0, PriceUnitOfMeasureQty_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::Product{11}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::ProductComplex{"STRING_2057081904"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::PutOrCall{0}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::RedemptionDate{"LOCALMKTDATE_156931179"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::RepoCollateralSecurityType{"STRING_849532144"}, Instrument_67);
    FIX::RepurchaseRate RepurchaseRate_67;
    RepurchaseRate_67.setString("94.650000");
set_field(noQuoteEntries_0_0, RepurchaseRate_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::RepurchaseTerm{1979272155}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::RestructuringType{"STRING_FR"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SecurityDesc{"STRING_466314774"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SecurityExchange{"EXCHANGE_1290257754"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SecurityGroup{"STRING_1107021764"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SecurityID{"STRING_1764095576"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SecurityIDSource{"STRING_D"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SecurityStatus{"STRING_1"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SecuritySubType{"STRING_2106893591"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SecurityType{"STRING_SECLOAN"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::Seniority{"STRING_SR"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SettlMethod{'P'}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SettleOnOpenFlag{"STRING_2118068219"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::StateOrProvinceOfIssue{"STRING_1000397617"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::StrikeCurrency{"CAN"}, Instrument_67);
    FIX::StrikeMultiplier StrikeMultiplier_67;
    StrikeMultiplier_67.setString("10314720");
set_field(noQuoteEntries_0_0, StrikeMultiplier_67, Instrument_67);
    FIX::StrikePrice StrikePrice_67;
    StrikePrice_67.setString("1567632");
set_field(noQuoteEntries_0_0, StrikePrice_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_67);
    FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_67;
    StrikePriceBoundaryPrecision_67.setString("45.850000");
set_field(noQuoteEntries_0_0, StrikePriceBoundaryPrecision_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_67);
    FIX::StrikeValue StrikeValue_67;
    StrikeValue_67.setString("20265935");
set_field(noQuoteEntries_0_0, StrikeValue_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::Symbol{"STRING_659452694"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::SymbolSfx{"STRING_CD"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::TimeUnit{"STRING_Min"}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::UnderlyingPriceDeterminationMethod{3}, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::UnitOfMeasure{"STRING_Bu"}, Instrument_67);
    FIX::UnitOfMeasureQty UnitOfMeasureQty_67;
    UnitOfMeasureQty_67.setString("24951");
set_field(noQuoteEntries_0_0, UnitOfMeasureQty_67, Instrument_67);
    set_field(noQuoteEntries_0_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_67);
    all_values.push_back(Instrument_67);
    all_compo_names.insert("...NoQuoteEntries.");

    // ComplexEvents
    // Group ComplexEvents.NoComplexEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_0;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_134;
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_134);
      FIX::ComplexEventPrice ComplexEventPrice_134;
      ComplexEventPrice_134.setString("16030578");
set_field(noComplexEvents_0_1_0, ComplexEventPrice_134, ComplexEvents_NoComplexEvents_134);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_134);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_134;
      ComplexEventPriceBoundaryPrecision_134.setString("93.830000");
set_field(noComplexEvents_0_1_0, ComplexEventPriceBoundaryPrecision_134, ComplexEvents_NoComplexEvents_134);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_134);
      set_field(noComplexEvents_0_1_0, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_134);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_134;
      ComplexOptPayoutAmount_134.setString("10510913");
set_field(noComplexEvents_0_1_0, ComplexOptPayoutAmount_134, ComplexEvents_NoComplexEvents_134);
      all_values.push_back(ComplexEvents_NoComplexEvents_134);
      all_compo_names.insert("...NoQuoteEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_261;
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 1, 27, 23, 6, 2003)}, ComplexEventDates_NoComplexEventDates_261);
        set_field(noComplexEventDates_0_0_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(22, 16, 2, 0, 6, 2003)}, ComplexEventDates_NoComplexEventDates_261);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_261);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_538;
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 39, 42)}, ComplexEventTimes_NoComplexEventTimes_538);
          set_field(noComplexEventTimes_0_0_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(10, 55, 46)}, ComplexEventTimes_NoComplexEventTimes_538);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_538);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_539;
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 24, 45)}, ComplexEventTimes_NoComplexEventTimes_539);
          set_field(noComplexEventTimes_0_0_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 16, 24)}, ComplexEventTimes_NoComplexEventTimes_539);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_539);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_540;
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 26, 47)}, ComplexEventTimes_NoComplexEventTimes_540);
          set_field(noComplexEventTimes_0_0_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(19, 44, 59)}, ComplexEventTimes_NoComplexEventTimes_540);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_540);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_0.addGroup(noComplexEventTimes_0_0_0_3_2);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_262;
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(16, 53, 25, 17, 2, 2015)}, ComplexEventDates_NoComplexEventDates_262);
        set_field(noComplexEventDates_0_0_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 22, 19, 14, 9, 2008)}, ComplexEventDates_NoComplexEventDates_262);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_262);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_541;
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 49, 32)}, ComplexEventTimes_NoComplexEventTimes_541);
          set_field(noComplexEventTimes_0_0_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(0, 41, 19)}, ComplexEventTimes_NoComplexEventTimes_541);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_541);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_0_2_1.addGroup(noComplexEventTimes_0_0_1_3_0);
        }
        noComplexEvents_0_1_0.addGroup(noComplexEventDates_0_0_2_1);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_1;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_135;
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_135);
      FIX::ComplexEventPrice ComplexEventPrice_135;
      ComplexEventPrice_135.setString("20449861");
set_field(noComplexEvents_0_1_1, ComplexEventPrice_135, ComplexEvents_NoComplexEvents_135);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceBoundaryMethod{1}, ComplexEvents_NoComplexEvents_135);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_135;
      ComplexEventPriceBoundaryPrecision_135.setString("51.230000");
set_field(noComplexEvents_0_1_1, ComplexEventPriceBoundaryPrecision_135, ComplexEvents_NoComplexEvents_135);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_135);
      set_field(noComplexEvents_0_1_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_135);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_135;
      ComplexOptPayoutAmount_135.setString("16945587");
set_field(noComplexEvents_0_1_1, ComplexOptPayoutAmount_135, ComplexEvents_NoComplexEvents_135);
      all_values.push_back(ComplexEvents_NoComplexEvents_135);
      all_compo_names.insert("...NoQuoteEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_263;
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 6, 30, 26, 8, 2013)}, ComplexEventDates_NoComplexEventDates_263);
        set_field(noComplexEventDates_0_1_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(0, 36, 46, 10, 9, 2010)}, ComplexEventDates_NoComplexEventDates_263);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_263);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_542;
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(15, 3, 32)}, ComplexEventTimes_NoComplexEventTimes_542);
          set_field(noComplexEventTimes_0_1_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 5, 21)}, ComplexEventTimes_NoComplexEventTimes_542);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_542);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_543;
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 58, 19)}, ComplexEventTimes_NoComplexEventTimes_543);
          set_field(noComplexEventTimes_0_1_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(22, 39, 54)}, ComplexEventTimes_NoComplexEventTimes_543);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_543);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_0.addGroup(noComplexEventTimes_0_1_0_3_1);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_264;
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(7, 0, 13, 17, 8, 2014)}, ComplexEventDates_NoComplexEventDates_264);
        set_field(noComplexEventDates_0_1_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(23, 2, 38, 1, 4, 2005)}, ComplexEventDates_NoComplexEventDates_264);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_264);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_544;
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 55, 46)}, ComplexEventTimes_NoComplexEventTimes_544);
          set_field(noComplexEventTimes_0_1_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 51, 45)}, ComplexEventTimes_NoComplexEventTimes_544);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_544);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_1.addGroup(noComplexEventTimes_0_1_1_3_0);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_265;
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(12, 35, 5, 22, 10, 2014)}, ComplexEventDates_NoComplexEventDates_265);
        set_field(noComplexEventDates_0_1_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 20, 33, 17, 6, 2008)}, ComplexEventDates_NoComplexEventDates_265);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_265);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_545;
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 38, 16)}, ComplexEventTimes_NoComplexEventTimes_545);
          set_field(noComplexEventTimes_0_1_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 31, 25)}, ComplexEventTimes_NoComplexEventTimes_545);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_545);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_546;
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 13, 46)}, ComplexEventTimes_NoComplexEventTimes_546);
          set_field(noComplexEventTimes_0_1_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(16, 30, 4)}, ComplexEventTimes_NoComplexEventTimes_546);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_546);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_547;
          set_field(noComplexEventTimes_0_1_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 31, 40)}, ComplexEventTimes_NoComplexEventTimes_547);
          set_field(noComplexEventTimes_0_1_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(21, 16, 44)}, ComplexEventTimes_NoComplexEventTimes_547);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_547);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_1_2_2.addGroup(noComplexEventTimes_0_1_2_3_2);
        }
        noComplexEvents_0_1_1.addGroup(noComplexEventDates_0_1_2_2);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2;
      // ComplexEvents.NoComplexEvents
      multiset<string> ComplexEvents_NoComplexEvents_136;
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_136);
      FIX::ComplexEventPrice ComplexEventPrice_136;
      ComplexEventPrice_136.setString("8080548");
set_field(noComplexEvents_0_1_2, ComplexEventPrice_136, ComplexEvents_NoComplexEvents_136);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_136);
      FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_136;
      ComplexEventPriceBoundaryPrecision_136.setString("9.590000");
set_field(noComplexEvents_0_1_2, ComplexEventPriceBoundaryPrecision_136, ComplexEvents_NoComplexEvents_136);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_136);
      set_field(noComplexEvents_0_1_2, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_136);
      FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_136;
      ComplexOptPayoutAmount_136.setString("12694380");
set_field(noComplexEvents_0_1_2, ComplexOptPayoutAmount_136, ComplexEvents_NoComplexEvents_136);
      all_values.push_back(ComplexEvents_NoComplexEvents_136);
      all_compo_names.insert("...NoQuoteEntries....NoComplexEvents");

      // ComplexEventDates
      // Group ComplexEventDates.NoComplexEventDates
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_0;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_266;
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(5, 16, 31, 15, 1, 2013)}, ComplexEventDates_NoComplexEventDates_266);
        set_field(noComplexEventDates_0_2_2_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 2, 37, 4, 7, 2017)}, ComplexEventDates_NoComplexEventDates_266);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_266);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_548;
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(1, 20, 48)}, ComplexEventTimes_NoComplexEventTimes_548);
          set_field(noComplexEventTimes_0_2_0_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 57, 22)}, ComplexEventTimes_NoComplexEventTimes_548);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_548);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_549;
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 31, 37)}, ComplexEventTimes_NoComplexEventTimes_549);
          set_field(noComplexEventTimes_0_2_0_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(5, 4, 55)}, ComplexEventTimes_NoComplexEventTimes_549);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_549);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_550;
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 12, 11)}, ComplexEventTimes_NoComplexEventTimes_550);
          set_field(noComplexEventTimes_0_2_0_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 0, 52)}, ComplexEventTimes_NoComplexEventTimes_550);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_550);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_0.addGroup(noComplexEventTimes_0_2_0_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_1;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_267;
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(18, 21, 26, 0, 10, 2003)}, ComplexEventDates_NoComplexEventDates_267);
        set_field(noComplexEventDates_0_2_2_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(14, 35, 17, 8, 9, 2002)}, ComplexEventDates_NoComplexEventDates_267);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_267);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_551;
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(11, 53, 48)}, ComplexEventTimes_NoComplexEventTimes_551);
          set_field(noComplexEventTimes_0_2_1_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 44, 30)}, ComplexEventTimes_NoComplexEventTimes_551);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_551);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_1.addGroup(noComplexEventTimes_0_2_1_3_0);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_2;
        // ComplexEventDates.NoComplexEventDates
        multiset<string> ComplexEventDates_NoComplexEventDates_268;
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(6, 34, 25, 19, 3, 2005)}, ComplexEventDates_NoComplexEventDates_268);
        set_field(noComplexEventDates_0_2_2_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 11, 1, 7, 8, 2014)}, ComplexEventDates_NoComplexEventDates_268);
        all_values.push_back(ComplexEventDates_NoComplexEventDates_268);
        all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

        // ComplexEventTimes
        // Group ComplexEventTimes.NoComplexEventTimes
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_0;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_552;
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 1, 17)}, ComplexEventTimes_NoComplexEventTimes_552);
          set_field(noComplexEventTimes_0_2_2_3_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 31, 30)}, ComplexEventTimes_NoComplexEventTimes_552);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_552);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_1;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_553;
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 16, 23)}, ComplexEventTimes_NoComplexEventTimes_553);
          set_field(noComplexEventTimes_0_2_2_3_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 0, 8)}, ComplexEventTimes_NoComplexEventTimes_553);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_553);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_1);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_3_2;
          // ComplexEventTimes.NoComplexEventTimes
          multiset<string> ComplexEventTimes_NoComplexEventTimes_554;
          set_field(noComplexEventTimes_0_2_2_3_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 34, 23)}, ComplexEventTimes_NoComplexEventTimes_554);
          set_field(noComplexEventTimes_0_2_2_3_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(13, 32, 21)}, ComplexEventTimes_NoComplexEventTimes_554);
          all_values.push_back(ComplexEventTimes_NoComplexEventTimes_554);
          all_compo_names.insert("...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

          noComplexEventDates_0_2_2_2.addGroup(noComplexEventTimes_0_2_2_3_2);
        }
        noComplexEvents_0_1_2.addGroup(noComplexEventDates_0_2_2_2);
      }
      noQuoteEntries_0_0.addGroup(noComplexEvents_0_1_2);
    }
    // EvntGrp
    // Group EvntGrp.NoEvents
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoEvents noEvents_0_1_0;
      // EvntGrp.NoEvents
      multiset<string> EvntGrp_NoEvents_139;
      set_field(noEvents_0_1_0, FIX::EventDate{"LOCALMKTDATE_441637836"}, EvntGrp_NoEvents_139);
      FIX::EventPx EventPx_139;
      EventPx_139.setString("5878497");
set_field(noEvents_0_1_0, EventPx_139, EvntGrp_NoEvents_139);
      set_field(noEvents_0_1_0, FIX::EventText{"STRING_1976723576"}, EvntGrp_NoEvents_139);
      set_field(noEvents_0_1_0, FIX::EventTime{FIX::UTCTIMESTAMP(12, 14, 7, 21, 8, 2000)}, EvntGrp_NoEvents_139);
      set_field(noEvents_0_1_0, FIX::EventType{2}, EvntGrp_NoEvents_139);
      all_values.push_back(EvntGrp_NoEvents_139);
      all_compo_names.insert("...NoQuoteEntries....NoEvents");

      noQuoteEntries_0_0.addGroup(noEvents_0_1_0);
    }
    // InstrumentParties
    // Group InstrumentParties.NoInstrumentParties
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_0;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_126;
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyID{"STRING_201902807"}, InstrumentParties_NoInstrumentParties_126);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyIDSource{'4'}, InstrumentParties_NoInstrumentParties_126);
      set_field(noInstrumentParties_0_1_0, FIX::InstrumentPartyRole{1678314908}, InstrumentParties_NoInstrumentParties_126);
      all_values.push_back(InstrumentParties_NoInstrumentParties_126);
      all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259;
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubID{"STRING_627114120"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);
        set_field(noInstrumentPartySubIDs_0_0_2_0, FIX::InstrumentPartySubIDType{1648475663}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_259);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260;
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubID{"STRING_1290789215"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);
        set_field(noInstrumentPartySubIDs_0_0_2_1, FIX::InstrumentPartySubIDType{104683603}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_260);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_0.addGroup(noInstrumentPartySubIDs_0_0_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_1;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_127;
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyID{"STRING_1749203903"}, InstrumentParties_NoInstrumentParties_127);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyIDSource{'5'}, InstrumentParties_NoInstrumentParties_127);
      set_field(noInstrumentParties_0_1_1, FIX::InstrumentPartyRole{175162720}, InstrumentParties_NoInstrumentParties_127);
      all_values.push_back(InstrumentParties_NoInstrumentParties_127);
      all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261;
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubID{"STRING_593787070"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);
        set_field(noInstrumentPartySubIDs_0_1_2_0, FIX::InstrumentPartySubIDType{1686014823}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_261);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262;
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubID{"STRING_886703692"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);
        set_field(noInstrumentPartySubIDs_0_1_2_1, FIX::InstrumentPartySubIDType{2096229491}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_262);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_1.addGroup(noInstrumentPartySubIDs_0_1_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2;
      // InstrumentParties.NoInstrumentParties
      multiset<string> InstrumentParties_NoInstrumentParties_128;
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyID{"STRING_53960548"}, InstrumentParties_NoInstrumentParties_128);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_128);
      set_field(noInstrumentParties_0_1_2, FIX::InstrumentPartyRole{956429928}, InstrumentParties_NoInstrumentParties_128);
      all_values.push_back(InstrumentParties_NoInstrumentParties_128);
      all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties");

      // InstrumentPtysSubGrp
      // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_0;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263;
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubID{"STRING_1698180456"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);
        set_field(noInstrumentPartySubIDs_0_2_2_0, FIX::InstrumentPartySubIDType{785669857}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_263);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_2_1;
        // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264;
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubID{"STRING_1510836491"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);
        set_field(noInstrumentPartySubIDs_0_2_2_1, FIX::InstrumentPartySubIDType{304371964}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);
        all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_264);
        all_compo_names.insert("...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

        noInstrumentParties_0_1_2.addGroup(noInstrumentPartySubIDs_0_2_2_1);
      }
      noQuoteEntries_0_0.addGroup(noInstrumentParties_0_1_2);
    }
    // SecAltIDGrp
    // Group SecAltIDGrp.NoSecurityAltID
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_0;
      // SecAltIDGrp.NoSecurityAltID
      multiset<string> SecAltIDGrp_NoSecurityAltID_141;
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltID{"STRING_36709991"}, SecAltIDGrp_NoSecurityAltID_141);
      set_field(noSecurityAltID_0_1_0, FIX::SecurityAltIDSource{"STRING_1901276973"}, SecAltIDGrp_NoSecurityAltID_141);
      all_values.push_back(SecAltIDGrp_NoSecurityAltID_141);
      all_compo_names.insert("...NoQuoteEntries....NoSecurityAltID");

      noQuoteEntries_0_0.addGroup(noSecurityAltID_0_1_0);
    }
    // SecurityXML
    multiset<string> SecurityXML_134;
    set_field(noQuoteEntries_0_0, FIX::SecurityXML{"XMLDATA_829929411"}, SecurityXML_134);
    set_field(noQuoteEntries_0_0, FIX::SecurityXMLLen{1077522695}, SecurityXML_134);
    set_field(noQuoteEntries_0_0, FIX::SecurityXMLSchema{"STRING_2003646955"}, SecurityXML_134);
    all_values.push_back(SecurityXML_134);
    all_compo_names.insert("...NoQuoteEntries..");

    // UndInstrmtGrp
    // Group UndInstrmtGrp.NoUnderlyings
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_0;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_93;
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuer{"DATA_1279425503"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingIssuerLen{2051488179}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1610616023"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::EncodedUnderlyingSecurityDescLen{475889473}, UnderlyingInstrument_93);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_93;
      UnderlyingAdjustedQuantity_93.setString("5311186");
set_field(noUnderlyings_0_1_0, UnderlyingAdjustedQuantity_93, UnderlyingInstrument_93);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_93;
      UnderlyingAllocationPercent_93.setString("80.390000");
set_field(noUnderlyings_0_1_0, UnderlyingAllocationPercent_93, UnderlyingInstrument_93);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_93;
      UnderlyingAttachmentPoint_93.setString("86.880000");
set_field(noUnderlyings_0_1_0, UnderlyingAttachmentPoint_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCFICode{"STRING_635802254"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPProgram{"STRING_713328294"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCPRegType{"STRING_210993676"}, UnderlyingInstrument_93);
      FIX::UnderlyingCapValue UnderlyingCapValue_93;
      UnderlyingCapValue_93.setString("8109649");
set_field(noUnderlyings_0_1_0, UnderlyingCapValue_93, UnderlyingInstrument_93);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_93;
      UnderlyingCashAmount_93.setString("13014926");
set_field(noUnderlyings_0_1_0, UnderlyingCashAmount_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_93);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_93;
      UnderlyingContractMultiplier_93.setString("3494961");
set_field(noUnderlyings_0_1_0, UnderlyingContractMultiplier_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingContractMultiplierUnit{40712688}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_753526589"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_403456698"}, UnderlyingInstrument_93);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_93;
      UnderlyingCouponRate_93.setString("33.620000");
set_field(noUnderlyings_0_1_0, UnderlyingCouponRate_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCreditRating{"STRING_1709956517"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_93);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_93;
      UnderlyingCurrentValue_93.setString("3481427");
set_field(noUnderlyings_0_1_0, UnderlyingCurrentValue_93, UnderlyingInstrument_93);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_93;
      UnderlyingDetachmentPoint_93.setString("79.250000");
set_field(noUnderlyings_0_1_0, UnderlyingDetachmentPoint_93, UnderlyingInstrument_93);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_93;
      UnderlyingDirtyPrice_93.setString("10061121");
set_field(noUnderlyings_0_1_0, UnderlyingDirtyPrice_93, UnderlyingInstrument_93);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_93;
      UnderlyingEndPrice_93.setString("1344033");
set_field(noUnderlyings_0_1_0, UnderlyingEndPrice_93, UnderlyingInstrument_93);
      FIX::UnderlyingEndValue UnderlyingEndValue_93;
      UnderlyingEndValue_93.setString("2991179");
set_field(noUnderlyings_0_1_0, UnderlyingEndValue_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingExerciseStyle{759905460}, UnderlyingInstrument_93);
      FIX::UnderlyingFXRate UnderlyingFXRate_93;
      UnderlyingFXRate_93.setString("9643327");
set_field(noUnderlyings_0_1_0, UnderlyingFXRate_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_93);
      FIX::UnderlyingFactor UnderlyingFactor_93;
      UnderlyingFactor_93.setString("6160687");
set_field(noUnderlyings_0_1_0, UnderlyingFactor_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingFlowScheduleType{896633856}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingInstrRegistry{"STRING_508582467"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_520073298"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingIssuer{"STRING_359766232"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingLocaleOfIssue{"STRING_984471940"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1051191949"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_1471374271"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_603666980"}, UnderlyingInstrument_93);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_93;
      UnderlyingNotionalPercentageOutstanding_93.setString("42.030000");
set_field(noUnderlyings_0_1_0, UnderlyingNotionalPercentageOutstanding_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_93);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_93;
      UnderlyingOriginalNotionalPercentageOutstanding_93.setString("6.560000");
set_field(noUnderlyings_0_1_0, UnderlyingOriginalNotionalPercentageOutstanding_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_350475529"}, UnderlyingInstrument_93);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_93;
      UnderlyingPriceUnitOfMeasureQty_93.setString("13387115");
set_field(noUnderlyings_0_1_0, UnderlyingPriceUnitOfMeasureQty_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingProduct{1619441402}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingPutOrCall{699971679}, UnderlyingInstrument_93);
      FIX::UnderlyingPx UnderlyingPx_93;
      UnderlyingPx_93.setString("13794242");
set_field(noUnderlyings_0_1_0, UnderlyingPx_93, UnderlyingInstrument_93);
      FIX::UnderlyingQty UnderlyingQty_93;
      UnderlyingQty_93.setString("2254843");
set_field(noUnderlyings_0_1_0, UnderlyingQty_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1103428377"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_382983964"}, UnderlyingInstrument_93);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_93;
      UnderlyingRepurchaseRate_93.setString("8.610000");
set_field(noUnderlyings_0_1_0, UnderlyingRepurchaseRate_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRepurchaseTerm{2002483459}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingRestructuringType{"STRING_1084724134"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityDesc{"STRING_136099939"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_117407737"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityID{"STRING_2090836269"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityIDSource{"STRING_270503269"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecuritySubType{"STRING_416525653"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSecurityType{"STRING_703258081"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSeniority{"STRING_1234836010"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlMethod{"STRING_1793166265"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_93);
      FIX::UnderlyingStartValue UnderlyingStartValue_93;
      UnderlyingStartValue_93.setString("21314698");
set_field(noUnderlyings_0_1_0, UnderlyingStartValue_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_154265084"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingStrikeCurrency{"EUR"}, UnderlyingInstrument_93);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_93;
      UnderlyingStrikePrice_93.setString("11387370");
set_field(noUnderlyings_0_1_0, UnderlyingStrikePrice_93, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbol{"STRING_743108447"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingSymbolSfx{"STRING_1815126722"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingTimeUnit{"STRING_1742404005"}, UnderlyingInstrument_93);
      set_field(noUnderlyings_0_1_0, FIX::UnderlyingUnitOfMeasure{"STRING_282619002"}, UnderlyingInstrument_93);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_93;
      UnderlyingUnitOfMeasureQty_93.setString("18523456");
set_field(noUnderlyings_0_1_0, UnderlyingUnitOfMeasureQty_93, UnderlyingInstrument_93);
      all_values.push_back(UnderlyingInstrument_93);
      all_compo_names.insert("...NoQuoteEntries...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_193;
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltID{"STRING_633094531"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);
        set_field(noUnderlyingSecurityAltID_0_0_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1043573553"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_193);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_194;
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltID{"STRING_2029022416"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);
        set_field(noUnderlyingSecurityAltID_0_0_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1333066211"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_194);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_0.addGroup(noUnderlyingSecurityAltID_0_0_2_1);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_0_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_185;
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipType{"STRING_107023111"}, UnderlyingStipulations_NoUnderlyingStips_185);
        set_field(noUnderlyingStips_0_0_2_0, FIX::UnderlyingStipValue{"STRING_289010940"}, UnderlyingStipulations_NoUnderlyingStips_185);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_185);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_0.addGroup(noUnderlyingStips_0_0_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_205;
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_2042463972"}, UndlyInstrumentParties_NoUndlyInstrumentParties_205);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_205);
        set_field(noUndlyInstrumentParties_0_0_2_0, FIX::UnderlyingInstrumentPartyRole{1743222255}, UndlyInstrumentParties_NoUndlyInstrumentParties_205);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_205);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411;
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_261418489"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);
          set_field(noUndlyInstrumentPartySubIDs_0_0_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{1686574876}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_411);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_0_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0_2_1;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_206;
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyID{"STRING_301583533"}, UndlyInstrumentParties_NoUndlyInstrumentParties_206);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_206);
        set_field(noUndlyInstrumentParties_0_0_2_1, FIX::UnderlyingInstrumentPartyRole{242349309}, UndlyInstrumentParties_NoUndlyInstrumentParties_206);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_206);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_1_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412;
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_323626760"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);
          set_field(noUndlyInstrumentPartySubIDs_0_0_1_3_0, FIX::UnderlyingInstrumentPartySubIDType{1561676157}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_412);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_0_2_1.addGroup(noUndlyInstrumentPartySubIDs_0_0_1_3_0);
        }
        noUnderlyings_0_1_0.addGroup(noUndlyInstrumentParties_0_0_2_1);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_0);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_1;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_94;
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuer{"DATA_1520405763"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingIssuerLen{477891844}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDesc{"DATA_1253592655"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::EncodedUnderlyingSecurityDescLen{1864158214}, UnderlyingInstrument_94);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_94;
      UnderlyingAdjustedQuantity_94.setString("16166288");
set_field(noUnderlyings_0_1_1, UnderlyingAdjustedQuantity_94, UnderlyingInstrument_94);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_94;
      UnderlyingAllocationPercent_94.setString("11.020000");
set_field(noUnderlyings_0_1_1, UnderlyingAllocationPercent_94, UnderlyingInstrument_94);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_94;
      UnderlyingAttachmentPoint_94.setString("12.880000");
set_field(noUnderlyings_0_1_1, UnderlyingAttachmentPoint_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCFICode{"STRING_1211549226"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPProgram{"STRING_131836456"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCPRegType{"STRING_1236663279"}, UnderlyingInstrument_94);
      FIX::UnderlyingCapValue UnderlyingCapValue_94;
      UnderlyingCapValue_94.setString("16211302");
set_field(noUnderlyings_0_1_1, UnderlyingCapValue_94, UnderlyingInstrument_94);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_94;
      UnderlyingCashAmount_94.setString("7649309");
set_field(noUnderlyings_0_1_1, UnderlyingCashAmount_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_94);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_94;
      UnderlyingContractMultiplier_94.setString("15026690");
set_field(noUnderlyings_0_1_1, UnderlyingContractMultiplier_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingContractMultiplierUnit{2097997198}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCountryOfIssue{"COUNTRY_408267341"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_1609692119"}, UnderlyingInstrument_94);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_94;
      UnderlyingCouponRate_94.setString("44.910000");
set_field(noUnderlyings_0_1_1, UnderlyingCouponRate_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCreditRating{"STRING_1066765461"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_94);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_94;
      UnderlyingCurrentValue_94.setString("6625040");
set_field(noUnderlyings_0_1_1, UnderlyingCurrentValue_94, UnderlyingInstrument_94);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_94;
      UnderlyingDetachmentPoint_94.setString("27.070000");
set_field(noUnderlyings_0_1_1, UnderlyingDetachmentPoint_94, UnderlyingInstrument_94);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_94;
      UnderlyingDirtyPrice_94.setString("6449537");
set_field(noUnderlyings_0_1_1, UnderlyingDirtyPrice_94, UnderlyingInstrument_94);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_94;
      UnderlyingEndPrice_94.setString("2015952");
set_field(noUnderlyings_0_1_1, UnderlyingEndPrice_94, UnderlyingInstrument_94);
      FIX::UnderlyingEndValue UnderlyingEndValue_94;
      UnderlyingEndValue_94.setString("18373362");
set_field(noUnderlyings_0_1_1, UnderlyingEndValue_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingExerciseStyle{1322897874}, UnderlyingInstrument_94);
      FIX::UnderlyingFXRate UnderlyingFXRate_94;
      UnderlyingFXRate_94.setString("4439446");
set_field(noUnderlyings_0_1_1, UnderlyingFXRate_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_94);
      FIX::UnderlyingFactor UnderlyingFactor_94;
      UnderlyingFactor_94.setString("16465246");
set_field(noUnderlyings_0_1_1, UnderlyingFactor_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingFlowScheduleType{2005620762}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingInstrRegistry{"STRING_599194252"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssueDate{"LOCALMKTDATE_2124416479"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingIssuer{"STRING_1111729769"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingLocaleOfIssue{"STRING_315868818"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1593561700"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_960947223"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1847670106"}, UnderlyingInstrument_94);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_94;
      UnderlyingNotionalPercentageOutstanding_94.setString("72.780000");
set_field(noUnderlyings_0_1_1, UnderlyingNotionalPercentageOutstanding_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_94);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_94;
      UnderlyingOriginalNotionalPercentageOutstanding_94.setString("97.370000");
set_field(noUnderlyings_0_1_1, UnderlyingOriginalNotionalPercentageOutstanding_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPriceUnitOfMeasure{"STRING_131273869"}, UnderlyingInstrument_94);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_94;
      UnderlyingPriceUnitOfMeasureQty_94.setString("18577146");
set_field(noUnderlyings_0_1_1, UnderlyingPriceUnitOfMeasureQty_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingProduct{1069602922}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingPutOrCall{1633942877}, UnderlyingInstrument_94);
      FIX::UnderlyingPx UnderlyingPx_94;
      UnderlyingPx_94.setString("18082282");
set_field(noUnderlyings_0_1_1, UnderlyingPx_94, UnderlyingInstrument_94);
      FIX::UnderlyingQty UnderlyingQty_94;
      UnderlyingQty_94.setString("14778702");
set_field(noUnderlyings_0_1_1, UnderlyingQty_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1096151348"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2047752708"}, UnderlyingInstrument_94);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_94;
      UnderlyingRepurchaseRate_94.setString("20.770000");
set_field(noUnderlyings_0_1_1, UnderlyingRepurchaseRate_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRepurchaseTerm{453340143}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingRestructuringType{"STRING_283804303"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityDesc{"STRING_1059656145"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityExchange{"EXCHANGE_1989092851"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityID{"STRING_928758035"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityIDSource{"STRING_1261251442"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecuritySubType{"STRING_1678945444"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSecurityType{"STRING_104172262"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSeniority{"STRING_1705196047"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlMethod{"STRING_757733933"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSettlementType{2}, UnderlyingInstrument_94);
      FIX::UnderlyingStartValue UnderlyingStartValue_94;
      UnderlyingStartValue_94.setString("15633331");
set_field(noUnderlyings_0_1_1, UnderlyingStartValue_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1356928185"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_94);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_94;
      UnderlyingStrikePrice_94.setString("16727970");
set_field(noUnderlyings_0_1_1, UnderlyingStrikePrice_94, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbol{"STRING_1173707779"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingSymbolSfx{"STRING_1488526507"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingTimeUnit{"STRING_1372983461"}, UnderlyingInstrument_94);
      set_field(noUnderlyings_0_1_1, FIX::UnderlyingUnitOfMeasure{"STRING_1831335057"}, UnderlyingInstrument_94);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_94;
      UnderlyingUnitOfMeasureQty_94.setString("4338265");
set_field(noUnderlyings_0_1_1, UnderlyingUnitOfMeasureQty_94, UnderlyingInstrument_94);
      all_values.push_back(UnderlyingInstrument_94);
      all_compo_names.insert("...NoQuoteEntries...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_195;
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltID{"STRING_1962608927"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);
        set_field(noUnderlyingSecurityAltID_0_1_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_144057557"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_195);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_1;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_196;
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltID{"STRING_1231952473"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);
        set_field(noUnderlyingSecurityAltID_0_1_2_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1449068156"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_196);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_2_2;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_197;
        set_field(noUnderlyingSecurityAltID_0_1_2_2, FIX::UnderlyingSecurityAltID{"STRING_1952285775"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);
        set_field(noUnderlyingSecurityAltID_0_1_2_2, FIX::UnderlyingSecurityAltIDSource{"STRING_562339088"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_197);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_1.addGroup(noUnderlyingSecurityAltID_0_1_2_2);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_186;
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipType{"STRING_1852554835"}, UnderlyingStipulations_NoUnderlyingStips_186);
        set_field(noUnderlyingStips_0_1_2_0, FIX::UnderlyingStipValue{"STRING_959491165"}, UnderlyingStipulations_NoUnderlyingStips_186);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_186);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_0);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_1;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_187;
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipType{"STRING_851075999"}, UnderlyingStipulations_NoUnderlyingStips_187);
        set_field(noUnderlyingStips_0_1_2_1, FIX::UnderlyingStipValue{"STRING_2136359139"}, UnderlyingStipulations_NoUnderlyingStips_187);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_187);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_1);
      }
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_1_2_2;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_188;
        set_field(noUnderlyingStips_0_1_2_2, FIX::UnderlyingStipType{"STRING_2019147311"}, UnderlyingStipulations_NoUnderlyingStips_188);
        set_field(noUnderlyingStips_0_1_2_2, FIX::UnderlyingStipValue{"STRING_692685202"}, UnderlyingStipulations_NoUnderlyingStips_188);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_188);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_1.addGroup(noUnderlyingStips_0_1_2_2);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_207;
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_1132915105"}, UndlyInstrumentParties_NoUndlyInstrumentParties_207);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_207);
        set_field(noUndlyInstrumentParties_0_1_2_0, FIX::UnderlyingInstrumentPartyRole{1021805788}, UndlyInstrumentParties_NoUndlyInstrumentParties_207);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_207);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413;
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_981880931"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);
          set_field(noUndlyInstrumentPartySubIDs_0_1_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{625019037}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_413);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_1_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0_3_0);
        }
        noUnderlyings_0_1_1.addGroup(noUndlyInstrumentParties_0_1_2_0);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_1);
    }
    {
      FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings noUnderlyings_0_1_2;
      // UndInstrmtGrp.NoUnderlyings
      // UnderlyingInstrument
      multiset<string> UnderlyingInstrument_95;
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuer{"DATA_106477018"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingIssuerLen{191325468}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDesc{"DATA_205165116"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::EncodedUnderlyingSecurityDescLen{634056302}, UnderlyingInstrument_95);
      FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_95;
      UnderlyingAdjustedQuantity_95.setString("18641224");
set_field(noUnderlyings_0_1_2, UnderlyingAdjustedQuantity_95, UnderlyingInstrument_95);
      FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_95;
      UnderlyingAllocationPercent_95.setString("28.960000");
set_field(noUnderlyings_0_1_2, UnderlyingAllocationPercent_95, UnderlyingInstrument_95);
      FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_95;
      UnderlyingAttachmentPoint_95.setString("28.090000");
set_field(noUnderlyings_0_1_2, UnderlyingAttachmentPoint_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCFICode{"STRING_1089622284"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPProgram{"STRING_1062724305"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCPRegType{"STRING_408925699"}, UnderlyingInstrument_95);
      FIX::UnderlyingCapValue UnderlyingCapValue_95;
      UnderlyingCapValue_95.setString("12519718");
set_field(noUnderlyings_0_1_2, UnderlyingCapValue_95, UnderlyingInstrument_95);
      FIX::UnderlyingCashAmount UnderlyingCashAmount_95;
      UnderlyingCashAmount_95.setString("8778495");
set_field(noUnderlyings_0_1_2, UnderlyingCashAmount_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_95);
      FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_95;
      UnderlyingContractMultiplier_95.setString("3364406");
set_field(noUnderlyings_0_1_2, UnderlyingContractMultiplier_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingContractMultiplierUnit{179434092}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCountryOfIssue{"COUNTRY_357785384"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_898779748"}, UnderlyingInstrument_95);
      FIX::UnderlyingCouponRate UnderlyingCouponRate_95;
      UnderlyingCouponRate_95.setString("99.480000");
set_field(noUnderlyings_0_1_2, UnderlyingCouponRate_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCreditRating{"STRING_62856571"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_95);
      FIX::UnderlyingCurrentValue UnderlyingCurrentValue_95;
      UnderlyingCurrentValue_95.setString("517320");
set_field(noUnderlyings_0_1_2, UnderlyingCurrentValue_95, UnderlyingInstrument_95);
      FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_95;
      UnderlyingDetachmentPoint_95.setString("45.770000");
set_field(noUnderlyings_0_1_2, UnderlyingDetachmentPoint_95, UnderlyingInstrument_95);
      FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_95;
      UnderlyingDirtyPrice_95.setString("21209311");
set_field(noUnderlyings_0_1_2, UnderlyingDirtyPrice_95, UnderlyingInstrument_95);
      FIX::UnderlyingEndPrice UnderlyingEndPrice_95;
      UnderlyingEndPrice_95.setString("9693655");
set_field(noUnderlyings_0_1_2, UnderlyingEndPrice_95, UnderlyingInstrument_95);
      FIX::UnderlyingEndValue UnderlyingEndValue_95;
      UnderlyingEndValue_95.setString("7153660");
set_field(noUnderlyings_0_1_2, UnderlyingEndValue_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingExerciseStyle{197594501}, UnderlyingInstrument_95);
      FIX::UnderlyingFXRate UnderlyingFXRate_95;
      UnderlyingFXRate_95.setString("19911713");
set_field(noUnderlyings_0_1_2, UnderlyingFXRate_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_95);
      FIX::UnderlyingFactor UnderlyingFactor_95;
      UnderlyingFactor_95.setString("11794754");
set_field(noUnderlyings_0_1_2, UnderlyingFactor_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingFlowScheduleType{468706766}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingInstrRegistry{"STRING_1512470557"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1370800901"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingIssuer{"STRING_673871883"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingLocaleOfIssue{"STRING_2146526859"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_1087439724"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_2052744779"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2121626020"}, UnderlyingInstrument_95);
      FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_95;
      UnderlyingNotionalPercentageOutstanding_95.setString("83.610000");
set_field(noUnderlyings_0_1_2, UnderlyingNotionalPercentageOutstanding_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingOptAttribute{'9'}, UnderlyingInstrument_95);
      FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_95;
      UnderlyingOriginalNotionalPercentageOutstanding_95.setString("80.710000");
set_field(noUnderlyings_0_1_2, UnderlyingOriginalNotionalPercentageOutstanding_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1281550196"}, UnderlyingInstrument_95);
      FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_95;
      UnderlyingPriceUnitOfMeasureQty_95.setString("18458350");
set_field(noUnderlyings_0_1_2, UnderlyingPriceUnitOfMeasureQty_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingProduct{936051328}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingPutOrCall{1617990856}, UnderlyingInstrument_95);
      FIX::UnderlyingPx UnderlyingPx_95;
      UnderlyingPx_95.setString("20252691");
set_field(noUnderlyings_0_1_2, UnderlyingPx_95, UnderlyingInstrument_95);
      FIX::UnderlyingQty UnderlyingQty_95;
      UnderlyingQty_95.setString("12938367");
set_field(noUnderlyings_0_1_2, UnderlyingQty_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_369286956"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepoCollateralSecurityType{"STRING_454955414"}, UnderlyingInstrument_95);
      FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_95;
      UnderlyingRepurchaseRate_95.setString("32.840000");
set_field(noUnderlyings_0_1_2, UnderlyingRepurchaseRate_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRepurchaseTerm{80074222}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingRestructuringType{"STRING_1883201362"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityDesc{"STRING_1408425346"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityExchange{"EXCHANGE_1810008799"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityID{"STRING_1856648864"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityIDSource{"STRING_230307287"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecuritySubType{"STRING_377891185"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSecurityType{"STRING_2054243365"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSeniority{"STRING_73995017"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlMethod{"STRING_1783884724"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_95);
      FIX::UnderlyingStartValue UnderlyingStartValue_95;
      UnderlyingStartValue_95.setString("5427017");
set_field(noUnderlyings_0_1_2, UnderlyingStartValue_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1148871633"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_95);
      FIX::UnderlyingStrikePrice UnderlyingStrikePrice_95;
      UnderlyingStrikePrice_95.setString("11479148");
set_field(noUnderlyings_0_1_2, UnderlyingStrikePrice_95, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbol{"STRING_1396992127"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingSymbolSfx{"STRING_1121834797"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingTimeUnit{"STRING_1122057216"}, UnderlyingInstrument_95);
      set_field(noUnderlyings_0_1_2, FIX::UnderlyingUnitOfMeasure{"STRING_1426570488"}, UnderlyingInstrument_95);
      FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_95;
      UnderlyingUnitOfMeasureQty_95.setString("20898202");
set_field(noUnderlyings_0_1_2, UnderlyingUnitOfMeasureQty_95, UnderlyingInstrument_95);
      all_values.push_back(UnderlyingInstrument_95);
      all_compo_names.insert("...NoQuoteEntries...NoUnderlyings.");

      // UndSecAltIDGrp
      // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_2_2_0;
        // UndSecAltIDGrp.NoUnderlyingSecurityAltID
        multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_198;
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltID{"STRING_560637036"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);
        set_field(noUnderlyingSecurityAltID_0_2_2_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1788171607"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);
        all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_198);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingSecurityAltID");

        noUnderlyings_0_1_2.addGroup(noUnderlyingSecurityAltID_0_2_2_0);
      }
      // UnderlyingStipulations
      // Group UnderlyingStipulations.NoUnderlyingStips
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUnderlyingStips noUnderlyingStips_0_2_2_0;
        // UnderlyingStipulations.NoUnderlyingStips
        multiset<string> UnderlyingStipulations_NoUnderlyingStips_189;
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipType{"STRING_31144244"}, UnderlyingStipulations_NoUnderlyingStips_189);
        set_field(noUnderlyingStips_0_2_2_0, FIX::UnderlyingStipValue{"STRING_1665957072"}, UnderlyingStipulations_NoUnderlyingStips_189);
        all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_189);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUnderlyingStips");

        noUnderlyings_0_1_2.addGroup(noUnderlyingStips_0_2_2_0);
      }
      // UndlyInstrumentParties
      // Group UndlyInstrumentParties.NoUndlyInstrumentParties
      {
        FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2_2_0;
        // UndlyInstrumentParties.NoUndlyInstrumentParties
        multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_208;
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyID{"STRING_400431201"}, UndlyInstrumentParties_NoUndlyInstrumentParties_208);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_208);
        set_field(noUndlyInstrumentParties_0_2_2_0, FIX::UnderlyingInstrumentPartyRole{796739316}, UndlyInstrumentParties_NoUndlyInstrumentParties_208);
        all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_208);
        all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties");

        // UndlyInstrumentPtysSubGrp
        // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_0;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1856630200"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_0, FIX::UnderlyingInstrumentPartySubIDType{57681015}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_414);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_0);
        }
        {
          FIX50SP2::QuoteCancel::NoQuoteEntries::NoUnderlyings::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_2_0_3_1;
          // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
          multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415;
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubID{"STRING_143030575"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);
          set_field(noUndlyInstrumentPartySubIDs_0_2_0_3_1, FIX::UnderlyingInstrumentPartySubIDType{1565795417}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);
          all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_415);
          all_compo_names.insert("...NoQuoteEntries...NoUnderlyings....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

          noUndlyInstrumentParties_0_2_2_0.addGroup(noUndlyInstrumentPartySubIDs_0_2_0_3_1);
        }
        noUnderlyings_0_1_2.addGroup(noUndlyInstrumentParties_0_2_2_0);
      }
      noQuoteEntries_0_0.addGroup(noUnderlyings_0_1_2);
    }
    msg.addGroup(noQuoteEntries_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_12;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_520921760"}, TargetParties_NoTargetPartyIDs_12);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_12);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{361983319}, TargetParties_NoTargetPartyIDs_12);
    all_values.push_back(TargetParties_NoTargetPartyIDs_12);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
  }
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_1;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_13;
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyID{"STRING_157322836"}, TargetParties_NoTargetPartyIDs_13);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyIDSource{'4'}, TargetParties_NoTargetPartyIDs_13);
    set_field(noTargetPartyIDs_0_1, FIX::TargetPartyRole{904685103}, TargetParties_NoTargetPartyIDs_13);
    all_values.push_back(TargetParties_NoTargetPartyIDs_13);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_1);
  }
  {
    FIX50SP2::QuoteCancel::NoTargetPartyIDs noTargetPartyIDs_0_2;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_14;
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyID{"STRING_1306194469"}, TargetParties_NoTargetPartyIDs_14);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyIDSource{'7'}, TargetParties_NoTargetPartyIDs_14);
    set_field(noTargetPartyIDs_0_2, FIX::TargetPartyRole{2121258769}, TargetParties_NoTargetPartyIDs_14);
    all_values.push_back(TargetParties_NoTargetPartyIDs_14);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_2);
  }
  // header
  multiset<string> header_69;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_5"}, header_69);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_2117851167"}, header_69);
  set_header_field(msg.getHeader(), FIX::BodyLength{1095609919}, header_69);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1428682881"}, header_69);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1396938007"}, header_69);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1037946505"}, header_69);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_786324521"}, header_69);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1957575044}, header_69);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_69);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1080017489}, header_69);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1988719288"}, header_69);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_197107888"}, header_69);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_520063521"}, header_69);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(23, 58, 25, 23, 2, 2008)}, header_69);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_69);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_69);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1386124600"}, header_69);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{770550183}, header_69);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_2024455475"}, header_69);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1543447437"}, header_69);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1181856819"}, header_69);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(2, 59, 11, 8, 7, 2000)}, header_69);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_289983157"}, header_69);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1122537737"}, header_69);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_741504827"}, header_69);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1076307678"}, header_69);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{932629133}, header_69);
  all_values.push_back(header_69);
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
