#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MassQuoteAcknowledgement.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MassQuoteAcknowledgement, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MassQuoteAcknowledgement msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MassQuoteAcknowledgement_0;
  set_field(msg, FIX::Account{"STRING_1227545812"}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::AccountType{8}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::AcctIDSource{2}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::EncodedText{"DATA_1103417613"}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::EncodedTextLen{2108788427}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteCancelType{2}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteID{"STRING_683843497"}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteRejectReason{4}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteReqID{"STRING_1989092737"}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteResponseLevel{3}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteStatus{2}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::QuoteType{0}, MassQuoteAcknowledgement_0);
  set_field(msg, FIX::Text{"STRING_423312791"}, MassQuoteAcknowledgement_0);
  all_values.push_back(MassQuoteAcknowledgement_0);

  all_compo_names.insert("MassQuoteAcknowledgement");

  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_65;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_99686867"}, Parties_NoPartyIDs_65);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'7'}, Parties_NoPartyIDs_65);
    set_field(noPartyIDs_0_0, FIX::PartyRole{39}, Parties_NoPartyIDs_65);
    all_values.push_back(Parties_NoPartyIDs_65);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::MassQuoteAcknowledgement::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_130;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1088615666"}, PtysSubGrp_NoPartySubIDs_130);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{8}, PtysSubGrp_NoPartySubIDs_130);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_130);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  // QuotSetAckGrp
  // Group QuotSetAckGrp.NoQuoteSets
  {
    FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets noQuoteSets_0_0;
    // QuotSetAckGrp.NoQuoteSets
    multiset<string> QuotSetAckGrp_NoQuoteSets_0;
    set_field(noQuoteSets_0_0, FIX::LastFragment{true}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::QuoteSetID{"STRING_354299969"}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::QuoteSetValidUntilTime{FIX::UTCTIMESTAMP(0, 34, 9, 27, 6, 2002)}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoAccQuotes{1990417977}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoCxldQuotes{1739560977}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoQuoteEntries{1751835351}, QuotSetAckGrp_NoQuoteSets_0);
    set_field(noQuoteSets_0_0, FIX::TotNoRejQuotes{117106185}, QuotSetAckGrp_NoQuoteSets_0);
    all_values.push_back(QuotSetAckGrp_NoQuoteSets_0);
    all_compo_names.insert("...NoQuoteSets");

    // QuotEntryAckGrp
    // Group QuotEntryAckGrp.NoQuoteEntries
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_0;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_0;
      FIX::BidForwardPoints BidForwardPoints_1;
      BidForwardPoints_1.setString("17131401");
set_field(noQuoteEntries_0_1_0, BidForwardPoints_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidForwardPoints2 BidForwardPoints2_1;
      BidForwardPoints2_1.setString("14265893");
set_field(noQuoteEntries_0_1_0, BidForwardPoints2_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidPx BidPx_1;
      BidPx_1.setString("13793384");
set_field(noQuoteEntries_0_1_0, BidPx_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidSize BidSize_1;
      BidSize_1.setString("5178886");
set_field(noQuoteEntries_0_1_0, BidSize_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidSpotRate BidSpotRate_1;
      BidSpotRate_1.setString("12681984");
set_field(noQuoteEntries_0_1_0, BidSpotRate_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::BidYield BidYield_1;
      BidYield_1.setString("94.670000");
set_field(noQuoteEntries_0_1_0, BidYield_1, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::BookingType{2}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::Currency{"USD"}, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::MidPx MidPx_1;
      MidPx_1.setString("18688496");
set_field(noQuoteEntries_0_1_0, MidPx_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::MidYield MidYield_1;
      MidYield_1.setString("68.310000");
set_field(noQuoteEntries_0_1_0, MidYield_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferForwardPoints OfferForwardPoints_1;
      OfferForwardPoints_1.setString("936858");
set_field(noQuoteEntries_0_1_0, OfferForwardPoints_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferForwardPoints2 OfferForwardPoints2_1;
      OfferForwardPoints2_1.setString("1191393");
set_field(noQuoteEntries_0_1_0, OfferForwardPoints2_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferPx OfferPx_1;
      OfferPx_1.setString("10035167");
set_field(noQuoteEntries_0_1_0, OfferPx_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferSize OfferSize_1;
      OfferSize_1.setString("11823015");
set_field(noQuoteEntries_0_1_0, OfferSize_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferSpotRate OfferSpotRate_1;
      OfferSpotRate_1.setString("17890197");
set_field(noQuoteEntries_0_1_0, OfferSpotRate_1, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OfferYield OfferYield_1;
      OfferYield_1.setString("27.010000");
set_field(noQuoteEntries_0_1_0, OfferYield_1, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrdType{'J'}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrderCapacity{'P'}, QuotEntryAckGrp_NoQuoteEntries_0);
      FIX::OrderQty2 OrderQty2_2;
      OrderQty2_2.setString("16651198");
set_field(noQuoteEntries_0_1_0, OrderQty2_2, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::OrderRestrictions{"MULTIPLECHARVALUE_8"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::QuoteEntryID{"STRING_510576677"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::QuoteEntryRejectReason{1377226321}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::QuoteEntryStatus{14}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::SettlDate{"LOCALMKTDATE_1022591843"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::SettlDate2{"LOCALMKTDATE_396779803"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TradingSessionID{"STRING_3"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TradingSessionSubID{"STRING_6"}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 35, 56, 11, 5, 2015)}, QuotEntryAckGrp_NoQuoteEntries_0);
      set_field(noQuoteEntries_0_1_0, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(23, 0, 31, 2, 11, 2016)}, QuotEntryAckGrp_NoQuoteEntries_0);
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_0);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_0_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_50;
        set_field(noLegs_0_0_2_0, FIX::EncodedLegIssuer{"DATA_1077099153"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegIssuerLen{414406745}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegSecurityDesc{"DATA_466950699"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::EncodedLegSecurityDescLen{718635227}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegCFICode{"STRING_648589447"}, InstrumentLeg_50);
        FIX::LegContractMultiplier LegContractMultiplier_50;
        LegContractMultiplier_50.setString("7000495");
set_field(noLegs_0_0_2_0, LegContractMultiplier_50, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegContractMultiplierUnit{714471270}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_166225679"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegCountryOfIssue{"COUNTRY_1730566865"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1225047947"}, InstrumentLeg_50);
        FIX::LegCouponRate LegCouponRate_50;
        LegCouponRate_50.setString("20.000000");
set_field(noLegs_0_0_2_0, LegCouponRate_50, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegCreditRating{"STRING_1193992683"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegDatedDate{"LOCALMKTDATE_500352831"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegExerciseStyle{714825315}, InstrumentLeg_50);
        FIX::LegFactor LegFactor_50;
        LegFactor_50.setString("19413633");
set_field(noLegs_0_0_2_0, LegFactor_50, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegFlowScheduleType{2071302812}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegInstrRegistry{"STRING_2024989430"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1508151298"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegIssueDate{"LOCALMKTDATE_773874844"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegIssuer{"STRING_419524690"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegLocaleOfIssue{"STRING_1592827976"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_744645311"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_74359418"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegMaturityTime{"TZTIMEONLY_681938148"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegOptAttribute{'3'}, InstrumentLeg_50);
        FIX::LegOptionRatio LegOptionRatio_50;
        LegOptionRatio_50.setString("14128064");
set_field(noLegs_0_0_2_0, LegOptionRatio_50, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegPool{"STRING_1639897942"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegPriceUnitOfMeasure{"STRING_1944005709"}, InstrumentLeg_50);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_50;
        LegPriceUnitOfMeasureQty_50.setString("6974555");
set_field(noLegs_0_0_2_0, LegPriceUnitOfMeasureQty_50, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegProduct{569513447}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegPutOrCall{210928807}, InstrumentLeg_50);
        FIX::LegRatioQty LegRatioQty_50;
        LegRatioQty_50.setString("11644062");
set_field(noLegs_0_0_2_0, LegRatioQty_50, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1288148674"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegRepoCollateralSecurityType{"STRING_859518254"}, InstrumentLeg_50);
        FIX::LegRepurchaseRate LegRepurchaseRate_50;
        LegRepurchaseRate_50.setString("58.070000");
set_field(noLegs_0_0_2_0, LegRepurchaseRate_50, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegRepurchaseTerm{2002619944}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityDesc{"STRING_1025743933"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityExchange{"EXCHANGE_1447539024"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityID{"STRING_1080184244"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityIDSource{"STRING_421712285"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegSecuritySubType{"STRING_494048059"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegSecurityType{"STRING_1180340386"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegSide{'2'}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_994400891"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_50);
        FIX::LegStrikePrice LegStrikePrice_50;
        LegStrikePrice_50.setString("9182200");
set_field(noLegs_0_0_2_0, LegStrikePrice_50, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegSymbol{"STRING_1772671484"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegSymbolSfx{"STRING_1516491401"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegTimeUnit{"STRING_1692094899"}, InstrumentLeg_50);
        set_field(noLegs_0_0_2_0, FIX::LegUnitOfMeasure{"STRING_44712526"}, InstrumentLeg_50);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_50;
        LegUnitOfMeasureQty_50.setString("9618357");
set_field(noLegs_0_0_2_0, LegUnitOfMeasureQty_50, InstrumentLeg_50);
        all_values.push_back(InstrumentLeg_50);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_106;
          set_field(noLegSecurityAltID_0_0_0_3_0, FIX::LegSecurityAltID{"STRING_119071944"}, LegSecAltIDGrp_NoLegSecurityAltID_106);
          set_field(noLegSecurityAltID_0_0_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1643773877"}, LegSecAltIDGrp_NoLegSecurityAltID_106);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_106);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_0_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_107;
          set_field(noLegSecurityAltID_0_0_0_3_1, FIX::LegSecurityAltID{"STRING_674888658"}, LegSecAltIDGrp_NoLegSecurityAltID_107);
          set_field(noLegSecurityAltID_0_0_0_3_1, FIX::LegSecurityAltIDSource{"STRING_1531878348"}, LegSecAltIDGrp_NoLegSecurityAltID_107);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_107);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_0_2_0.addGroup(noLegSecurityAltID_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noLegs_0_0_2_0);
      }
      // Instrument
      multiset<string> Instrument_33;
      FIX::AttachmentPoint AttachmentPoint_33;
      AttachmentPoint_33.setString("81.710000");
set_field(noQuoteEntries_0_1_0, AttachmentPoint_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::CFICode{"STRING_471410719"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::CPProgram{1}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::CPRegType{"STRING_1705701618"}, Instrument_33);
      FIX::CapPrice CapPrice_33;
      CapPrice_33.setString("6823395");
set_field(noQuoteEntries_0_1_0, CapPrice_33, Instrument_33);
      FIX::ContractMultiplier ContractMultiplier_33;
      ContractMultiplier_33.setString("12462565");
set_field(noQuoteEntries_0_1_0, ContractMultiplier_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::ContractMultiplierUnit{0}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::ContractSettlMonth{"MONTHYEAR_1541857780"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::CountryOfIssue{"COUNTRY_963228738"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::CouponPaymentDate{"LOCALMKTDATE_701502941"}, Instrument_33);
      FIX::CouponRate CouponRate_33;
      CouponRate_33.setString("80.650000");
set_field(noQuoteEntries_0_1_0, CouponRate_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::CreditRating{"STRING_263284114"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::DatedDate{"LOCALMKTDATE_1781687185"}, Instrument_33);
      FIX::DetachmentPoint DetachmentPoint_33;
      DetachmentPoint_33.setString("3.500000");
set_field(noQuoteEntries_0_1_0, DetachmentPoint_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedIssuer{"DATA_757332173"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedIssuerLen{814543924}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedSecurityDesc{"DATA_1056290791"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::EncodedSecurityDescLen{1751733064}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::ExerciseStyle{0}, Instrument_33);
      FIX::Factor Factor_33;
      Factor_33.setString("10646308");
set_field(noQuoteEntries_0_1_0, Factor_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::FlexProductEligibilityIndicator{true}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::FlexibleIndicator{false}, Instrument_33);
      FIX::FloorPrice FloorPrice_33;
      FloorPrice_33.setString("4336386");
set_field(noQuoteEntries_0_1_0, FloorPrice_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::FlowScheduleType{3}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::InstrRegistry{"STRING_232126340"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::InstrmtAssignmentMethod{'1'}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::InterestAccrualDate{"LOCALMKTDATE_356337286"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::IssueDate{"LOCALMKTDATE_351198284"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::Issuer{"STRING_891764604"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::ListMethod{0}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::LocaleOfIssue{"STRING_1883076633"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityDate{"LOCALMKTDATE_2027952775"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityMonthYear{"MONTHYEAR_1502636664"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::MaturityTime{"TZTIMEONLY_1964926923"}, Instrument_33);
      FIX::MinPriceIncrement MinPriceIncrement_33;
      MinPriceIncrement_33.setString("15861707");
set_field(noQuoteEntries_0_1_0, MinPriceIncrement_33, Instrument_33);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_33;
      MinPriceIncrementAmount_33.setString("374925");
set_field(noQuoteEntries_0_1_0, MinPriceIncrementAmount_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::NTPositionLimit{1063699854}, Instrument_33);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_33;
      NotionalPercentageOutstanding_33.setString("37.430000");
set_field(noQuoteEntries_0_1_0, NotionalPercentageOutstanding_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::OptAttribute{'1'}, Instrument_33);
      FIX::OptPayoutAmount OptPayoutAmount_33;
      OptPayoutAmount_33.setString("20269285");
set_field(noQuoteEntries_0_1_0, OptPayoutAmount_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::OptPayoutType{1}, Instrument_33);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_33;
      OriginalNotionalPercentageOutstanding_33.setString("83.880000");
set_field(noQuoteEntries_0_1_0, OriginalNotionalPercentageOutstanding_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::Pool{"STRING_142729058"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::PositionLimit{620760222}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::PriceQuoteMethod{"STRING_PCTPAR"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::PriceUnitOfMeasure{"STRING_900061231"}, Instrument_33);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_33;
      PriceUnitOfMeasureQty_33.setString("14353041");
set_field(noQuoteEntries_0_1_0, PriceUnitOfMeasureQty_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::Product{6}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::ProductComplex{"STRING_504310648"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::PutOrCall{1}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::RedemptionDate{"LOCALMKTDATE_667253127"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::RepoCollateralSecurityType{"STRING_1026780120"}, Instrument_33);
      FIX::RepurchaseRate RepurchaseRate_33;
      RepurchaseRate_33.setString("2.890000");
set_field(noQuoteEntries_0_1_0, RepurchaseRate_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::RepurchaseTerm{1100891774}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::RestructuringType{"STRING_XR"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityDesc{"STRING_269586629"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityExchange{"EXCHANGE_348882501"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityGroup{"STRING_1450198130"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityID{"STRING_620784913"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityIDSource{"STRING_7"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityStatus{"STRING_1"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SecuritySubType{"STRING_356377898"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityType{"STRING_FAC"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::Seniority{"STRING_SR"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SettlMethod{'P'}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SettleOnOpenFlag{"STRING_559803331"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::StateOrProvinceOfIssue{"STRING_1874069633"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::StrikeCurrency{"GBP"}, Instrument_33);
      FIX::StrikeMultiplier StrikeMultiplier_33;
      StrikeMultiplier_33.setString("13059363");
set_field(noQuoteEntries_0_1_0, StrikeMultiplier_33, Instrument_33);
      FIX::StrikePrice StrikePrice_33;
      StrikePrice_33.setString("11169659");
set_field(noQuoteEntries_0_1_0, StrikePrice_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::StrikePriceBoundaryMethod{5}, Instrument_33);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_33;
      StrikePriceBoundaryPrecision_33.setString("10.480000");
set_field(noQuoteEntries_0_1_0, StrikePriceBoundaryPrecision_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::StrikePriceDeterminationMethod{2}, Instrument_33);
      FIX::StrikeValue StrikeValue_33;
      StrikeValue_33.setString("3046903");
set_field(noQuoteEntries_0_1_0, StrikeValue_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::Symbol{"STRING_1851736139"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::SymbolSfx{"STRING_WI"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::TimeUnit{"STRING_Yr"}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::UnitOfMeasure{"STRING_Alw"}, Instrument_33);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_33;
      UnitOfMeasureQty_33.setString("15900409");
set_field(noQuoteEntries_0_1_0, UnitOfMeasureQty_33, Instrument_33);
      set_field(noQuoteEntries_0_1_0, FIX::ValuationMethod{"STRING_FUT"}, Instrument_33);
      all_values.push_back(Instrument_33);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_67;
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_67);
        FIX::ComplexEventPrice ComplexEventPrice_67;
        ComplexEventPrice_67.setString("10750196");
set_field(noComplexEvents_0_0_2_0, ComplexEventPrice_67, ComplexEvents_NoComplexEvents_67);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_67);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_67;
        ComplexEventPriceBoundaryPrecision_67.setString("78.720000");
set_field(noComplexEvents_0_0_2_0, ComplexEventPriceBoundaryPrecision_67, ComplexEvents_NoComplexEvents_67);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_67);
        set_field(noComplexEvents_0_0_2_0, FIX::ComplexEventType{2}, ComplexEvents_NoComplexEvents_67);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_67;
        ComplexOptPayoutAmount_67.setString("3703891");
set_field(noComplexEvents_0_0_2_0, ComplexOptPayoutAmount_67, ComplexEvents_NoComplexEvents_67);
        all_values.push_back(ComplexEvents_NoComplexEvents_67);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_137;
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 20, 35, 18, 8, 2008)}, ComplexEventDates_NoComplexEventDates_137);
          set_field(noComplexEventDates_0_0_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(10, 20, 21, 21, 6, 2010)}, ComplexEventDates_NoComplexEventDates_137);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_137);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_278;
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 33, 26)}, ComplexEventTimes_NoComplexEventTimes_278);
            set_field(noComplexEventTimes_0_0_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 59, 49)}, ComplexEventTimes_NoComplexEventTimes_278);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_278);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_0.addGroup(noComplexEventTimes_0_0_0_0_4_0);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_138;
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(22, 46, 47, 22, 1, 2011)}, ComplexEventDates_NoComplexEventDates_138);
          set_field(noComplexEventDates_0_0_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(13, 54, 45, 25, 1, 2010)}, ComplexEventDates_NoComplexEventDates_138);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_138);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_279;
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 50, 26)}, ComplexEventTimes_NoComplexEventTimes_279);
            set_field(noComplexEventTimes_0_0_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(23, 49, 29)}, ComplexEventTimes_NoComplexEventTimes_279);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_279);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_280;
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 2, 49)}, ComplexEventTimes_NoComplexEventTimes_280);
            set_field(noComplexEventTimes_0_0_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 40, 30)}, ComplexEventTimes_NoComplexEventTimes_280);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_280);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_0_3_1.addGroup(noComplexEventTimes_0_0_0_1_4_1);
          }
          noComplexEvents_0_0_2_0.addGroup(noComplexEventDates_0_0_0_3_1);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_0_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_68;
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_68);
        FIX::ComplexEventPrice ComplexEventPrice_68;
        ComplexEventPrice_68.setString("21068246");
set_field(noComplexEvents_0_0_2_1, ComplexEventPrice_68, ComplexEvents_NoComplexEvents_68);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_68);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_68;
        ComplexEventPriceBoundaryPrecision_68.setString("40.960000");
set_field(noComplexEvents_0_0_2_1, ComplexEventPriceBoundaryPrecision_68, ComplexEvents_NoComplexEvents_68);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_68);
        set_field(noComplexEvents_0_0_2_1, FIX::ComplexEventType{7}, ComplexEvents_NoComplexEvents_68);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_68;
        ComplexOptPayoutAmount_68.setString("743622");
set_field(noComplexEvents_0_0_2_1, ComplexOptPayoutAmount_68, ComplexEvents_NoComplexEvents_68);
        all_values.push_back(ComplexEvents_NoComplexEvents_68);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_0_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_139;
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 7, 39, 16, 12, 2003)}, ComplexEventDates_NoComplexEventDates_139);
          set_field(noComplexEventDates_0_0_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 59, 4, 1, 3, 2017)}, ComplexEventDates_NoComplexEventDates_139);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_139);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_0_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_281;
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(13, 57, 15)}, ComplexEventTimes_NoComplexEventTimes_281);
            set_field(noComplexEventTimes_0_0_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(15, 55, 41)}, ComplexEventTimes_NoComplexEventTimes_281);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_281);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_0_1_3_0.addGroup(noComplexEventTimes_0_0_1_0_4_0);
          }
          noComplexEvents_0_0_2_1.addGroup(noComplexEventDates_0_0_1_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noComplexEvents_0_0_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_69;
        set_field(noEvents_0_0_2_0, FIX::EventDate{"LOCALMKTDATE_1793295614"}, EvntGrp_NoEvents_69);
        FIX::EventPx EventPx_69;
        EventPx_69.setString("19407195");
set_field(noEvents_0_0_2_0, EventPx_69, EvntGrp_NoEvents_69);
        set_field(noEvents_0_0_2_0, FIX::EventText{"STRING_1574921557"}, EvntGrp_NoEvents_69);
        set_field(noEvents_0_0_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(14, 51, 41, 5, 12, 2016)}, EvntGrp_NoEvents_69);
        set_field(noEvents_0_0_2_0, FIX::EventType{9}, EvntGrp_NoEvents_69);
        all_values.push_back(EvntGrp_NoEvents_69);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_70;
        set_field(noEvents_0_0_2_1, FIX::EventDate{"LOCALMKTDATE_1288588223"}, EvntGrp_NoEvents_70);
        FIX::EventPx EventPx_70;
        EventPx_70.setString("16495179");
set_field(noEvents_0_0_2_1, EventPx_70, EvntGrp_NoEvents_70);
        set_field(noEvents_0_0_2_1, FIX::EventText{"STRING_1376081537"}, EvntGrp_NoEvents_70);
        set_field(noEvents_0_0_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(1, 8, 56, 27, 11, 2013)}, EvntGrp_NoEvents_70);
        set_field(noEvents_0_0_2_1, FIX::EventType{11}, EvntGrp_NoEvents_70);
        all_values.push_back(EvntGrp_NoEvents_70);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_0_2_2;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_71;
        set_field(noEvents_0_0_2_2, FIX::EventDate{"LOCALMKTDATE_41004808"}, EvntGrp_NoEvents_71);
        FIX::EventPx EventPx_71;
        EventPx_71.setString("2926106");
set_field(noEvents_0_0_2_2, EventPx_71, EvntGrp_NoEvents_71);
        set_field(noEvents_0_0_2_2, FIX::EventText{"STRING_1180828039"}, EvntGrp_NoEvents_71);
        set_field(noEvents_0_0_2_2, FIX::EventTime{FIX::UTCTIMESTAMP(5, 3, 30, 10, 12, 2012)}, EvntGrp_NoEvents_71);
        set_field(noEvents_0_0_2_2, FIX::EventType{5}, EvntGrp_NoEvents_71);
        all_values.push_back(EvntGrp_NoEvents_71);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_0.addGroup(noEvents_0_0_2_2);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_62;
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyID{"STRING_2114403167"}, InstrumentParties_NoInstrumentParties_62);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyIDSource{'6'}, InstrumentParties_NoInstrumentParties_62);
        set_field(noInstrumentParties_0_0_2_0, FIX::InstrumentPartyRole{742665875}, InstrumentParties_NoInstrumentParties_62);
        all_values.push_back(InstrumentParties_NoInstrumentParties_62);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126;
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubID{"STRING_1726401515"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126);
          set_field(noInstrumentPartySubIDs_0_0_0_3_0, FIX::InstrumentPartySubIDType{564653366}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_126);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127;
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubID{"STRING_1960419540"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127);
          set_field(noInstrumentPartySubIDs_0_0_0_3_1, FIX::InstrumentPartySubIDType{1914288884}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_127);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128;
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubID{"STRING_1853241589"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128);
          set_field(noInstrumentPartySubIDs_0_0_0_3_2, FIX::InstrumentPartySubIDType{1462453808}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_128);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_0.addGroup(noInstrumentPartySubIDs_0_0_0_3_2);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_0_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_63;
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyID{"STRING_1142886773"}, InstrumentParties_NoInstrumentParties_63);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_63);
        set_field(noInstrumentParties_0_0_2_1, FIX::InstrumentPartyRole{583740121}, InstrumentParties_NoInstrumentParties_63);
        all_values.push_back(InstrumentParties_NoInstrumentParties_63);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_0_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129;
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubID{"STRING_1601065718"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129);
          set_field(noInstrumentPartySubIDs_0_0_1_3_0, FIX::InstrumentPartySubIDType{52332808}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_129);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_0_2_1.addGroup(noInstrumentPartySubIDs_0_0_1_3_0);
        }
        noQuoteEntries_0_1_0.addGroup(noInstrumentParties_0_0_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_68;
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltID{"STRING_474398300"}, SecAltIDGrp_NoSecurityAltID_68);
        set_field(noSecurityAltID_0_0_2_0, FIX::SecurityAltIDSource{"STRING_1480265218"}, SecAltIDGrp_NoSecurityAltID_68);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_68);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_0_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_69;
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltID{"STRING_1803970112"}, SecAltIDGrp_NoSecurityAltID_69);
        set_field(noSecurityAltID_0_0_2_1, FIX::SecurityAltIDSource{"STRING_767008959"}, SecAltIDGrp_NoSecurityAltID_69);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_69);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_0.addGroup(noSecurityAltID_0_0_2_1);
      }
      // SecurityXML
      multiset<string> SecurityXML_66;
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXML{"XMLDATA_513609610"}, SecurityXML_66);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXMLLen{1490828287}, SecurityXML_66);
      set_field(noQuoteEntries_0_1_0, FIX::SecurityXMLSchema{"STRING_1629098228"}, SecurityXML_66);
      all_values.push_back(SecurityXML_66);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_1;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_1;
      FIX::BidForwardPoints BidForwardPoints_2;
      BidForwardPoints_2.setString("13074199");
set_field(noQuoteEntries_0_1_1, BidForwardPoints_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidForwardPoints2 BidForwardPoints2_2;
      BidForwardPoints2_2.setString("8641574");
set_field(noQuoteEntries_0_1_1, BidForwardPoints2_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidPx BidPx_2;
      BidPx_2.setString("2079215");
set_field(noQuoteEntries_0_1_1, BidPx_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidSize BidSize_2;
      BidSize_2.setString("9733641");
set_field(noQuoteEntries_0_1_1, BidSize_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidSpotRate BidSpotRate_2;
      BidSpotRate_2.setString("20307822");
set_field(noQuoteEntries_0_1_1, BidSpotRate_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::BidYield BidYield_2;
      BidYield_2.setString("44.070000");
set_field(noQuoteEntries_0_1_1, BidYield_2, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::BookingType{1}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::Currency{"CHF"}, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::MidPx MidPx_2;
      MidPx_2.setString("8094121");
set_field(noQuoteEntries_0_1_1, MidPx_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::MidYield MidYield_2;
      MidYield_2.setString("98.180000");
set_field(noQuoteEntries_0_1_1, MidYield_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferForwardPoints OfferForwardPoints_2;
      OfferForwardPoints_2.setString("9749134");
set_field(noQuoteEntries_0_1_1, OfferForwardPoints_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferForwardPoints2 OfferForwardPoints2_2;
      OfferForwardPoints2_2.setString("13740655");
set_field(noQuoteEntries_0_1_1, OfferForwardPoints2_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferPx OfferPx_2;
      OfferPx_2.setString("15920257");
set_field(noQuoteEntries_0_1_1, OfferPx_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferSize OfferSize_2;
      OfferSize_2.setString("7417186");
set_field(noQuoteEntries_0_1_1, OfferSize_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferSpotRate OfferSpotRate_2;
      OfferSpotRate_2.setString("10798234");
set_field(noQuoteEntries_0_1_1, OfferSpotRate_2, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OfferYield OfferYield_2;
      OfferYield_2.setString("58.710000");
set_field(noQuoteEntries_0_1_1, OfferYield_2, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::OrdType{'J'}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::OrderCapacity{'A'}, QuotEntryAckGrp_NoQuoteEntries_1);
      FIX::OrderQty2 OrderQty2_3;
      OrderQty2_3.setString("14907359");
set_field(noQuoteEntries_0_1_1, OrderQty2_3, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::OrderRestrictions{"MULTIPLECHARVALUE_7"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::QuoteEntryID{"STRING_1983907749"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::QuoteEntryRejectReason{1543068801}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::QuoteEntryStatus{14}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::SettlDate{"LOCALMKTDATE_310822401"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::SettlDate2{"LOCALMKTDATE_875850371"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::TradingSessionID{"STRING_4"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::TradingSessionSubID{"STRING_5"}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::TransactTime{FIX::UTCTIMESTAMP(21, 0, 26, 19, 4, 2007)}, QuotEntryAckGrp_NoQuoteEntries_1);
      set_field(noQuoteEntries_0_1_1, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(2, 8, 3, 4, 1, 2000)}, QuotEntryAckGrp_NoQuoteEntries_1);
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_1);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_51;
        set_field(noLegs_0_1_2_0, FIX::EncodedLegIssuer{"DATA_1625500863"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::EncodedLegIssuerLen{344640577}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::EncodedLegSecurityDesc{"DATA_312492262"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::EncodedLegSecurityDescLen{557840692}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegCFICode{"STRING_1251636448"}, InstrumentLeg_51);
        FIX::LegContractMultiplier LegContractMultiplier_51;
        LegContractMultiplier_51.setString("496140");
set_field(noLegs_0_1_2_0, LegContractMultiplier_51, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegContractMultiplierUnit{940682722}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_594888792"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegCountryOfIssue{"COUNTRY_2105119413"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_777106823"}, InstrumentLeg_51);
        FIX::LegCouponRate LegCouponRate_51;
        LegCouponRate_51.setString("75.930000");
set_field(noLegs_0_1_2_0, LegCouponRate_51, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegCreditRating{"STRING_1628622778"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegDatedDate{"LOCALMKTDATE_808612607"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegExerciseStyle{18276936}, InstrumentLeg_51);
        FIX::LegFactor LegFactor_51;
        LegFactor_51.setString("1083006");
set_field(noLegs_0_1_2_0, LegFactor_51, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegFlowScheduleType{1479430724}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegInstrRegistry{"STRING_577722877"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_657696977"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegIssueDate{"LOCALMKTDATE_866922663"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegIssuer{"STRING_1345090360"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegLocaleOfIssue{"STRING_32973844"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_137713221"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_692438603"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegMaturityTime{"TZTIMEONLY_1622480652"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_51);
        FIX::LegOptionRatio LegOptionRatio_51;
        LegOptionRatio_51.setString("14357824");
set_field(noLegs_0_1_2_0, LegOptionRatio_51, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegPool{"STRING_1873915980"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegPriceUnitOfMeasure{"STRING_158820430"}, InstrumentLeg_51);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_51;
        LegPriceUnitOfMeasureQty_51.setString("10065560");
set_field(noLegs_0_1_2_0, LegPriceUnitOfMeasureQty_51, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegProduct{1351933196}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegPutOrCall{503461007}, InstrumentLeg_51);
        FIX::LegRatioQty LegRatioQty_51;
        LegRatioQty_51.setString("13190482");
set_field(noLegs_0_1_2_0, LegRatioQty_51, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1909773888"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegRepoCollateralSecurityType{"STRING_1755097455"}, InstrumentLeg_51);
        FIX::LegRepurchaseRate LegRepurchaseRate_51;
        LegRepurchaseRate_51.setString("23.220000");
set_field(noLegs_0_1_2_0, LegRepurchaseRate_51, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegRepurchaseTerm{702972962}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityDesc{"STRING_202502600"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityExchange{"EXCHANGE_1326298087"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityID{"STRING_1480079786"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityIDSource{"STRING_192976545"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegSecuritySubType{"STRING_807437217"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegSecurityType{"STRING_420525362"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegSide{'1'}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1616049825"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_51);
        FIX::LegStrikePrice LegStrikePrice_51;
        LegStrikePrice_51.setString("9479969");
set_field(noLegs_0_1_2_0, LegStrikePrice_51, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegSymbol{"STRING_1016525176"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegSymbolSfx{"STRING_1825298490"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegTimeUnit{"STRING_1814919565"}, InstrumentLeg_51);
        set_field(noLegs_0_1_2_0, FIX::LegUnitOfMeasure{"STRING_214131888"}, InstrumentLeg_51);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_51;
        LegUnitOfMeasureQty_51.setString("18582723");
set_field(noLegs_0_1_2_0, LegUnitOfMeasureQty_51, InstrumentLeg_51);
        all_values.push_back(InstrumentLeg_51);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_108;
          set_field(noLegSecurityAltID_0_1_0_3_0, FIX::LegSecurityAltID{"STRING_906570491"}, LegSecAltIDGrp_NoLegSecurityAltID_108);
          set_field(noLegSecurityAltID_0_1_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1333269338"}, LegSecAltIDGrp_NoLegSecurityAltID_108);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_108);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_0_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_109;
          set_field(noLegSecurityAltID_0_1_0_3_1, FIX::LegSecurityAltID{"STRING_1211354702"}, LegSecAltIDGrp_NoLegSecurityAltID_109);
          set_field(noLegSecurityAltID_0_1_0_3_1, FIX::LegSecurityAltIDSource{"STRING_194869254"}, LegSecAltIDGrp_NoLegSecurityAltID_109);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_109);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_0.addGroup(noLegSecurityAltID_0_1_0_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_52;
        set_field(noLegs_0_1_2_1, FIX::EncodedLegIssuer{"DATA_1059701670"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::EncodedLegIssuerLen{1370175133}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::EncodedLegSecurityDesc{"DATA_1201425258"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::EncodedLegSecurityDescLen{264151218}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegCFICode{"STRING_1873636140"}, InstrumentLeg_52);
        FIX::LegContractMultiplier LegContractMultiplier_52;
        LegContractMultiplier_52.setString("3729898");
set_field(noLegs_0_1_2_1, LegContractMultiplier_52, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegContractMultiplierUnit{26441458}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_1481249948"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegCountryOfIssue{"COUNTRY_1741652199"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_729414421"}, InstrumentLeg_52);
        FIX::LegCouponRate LegCouponRate_52;
        LegCouponRate_52.setString("25.480000");
set_field(noLegs_0_1_2_1, LegCouponRate_52, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegCreditRating{"STRING_920466638"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegCurrency{"EUR"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegDatedDate{"LOCALMKTDATE_1727903856"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegExerciseStyle{482535921}, InstrumentLeg_52);
        FIX::LegFactor LegFactor_52;
        LegFactor_52.setString("7885463");
set_field(noLegs_0_1_2_1, LegFactor_52, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegFlowScheduleType{1196470033}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegInstrRegistry{"STRING_921338220"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1956147821"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegIssueDate{"LOCALMKTDATE_2144466934"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegIssuer{"STRING_1937863396"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegLocaleOfIssue{"STRING_1633962663"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_1811902851"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_4511637"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegMaturityTime{"TZTIMEONLY_1344751349"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegOptAttribute{'1'}, InstrumentLeg_52);
        FIX::LegOptionRatio LegOptionRatio_52;
        LegOptionRatio_52.setString("9110821");
set_field(noLegs_0_1_2_1, LegOptionRatio_52, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegPool{"STRING_530537039"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegPriceUnitOfMeasure{"STRING_680923044"}, InstrumentLeg_52);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_52;
        LegPriceUnitOfMeasureQty_52.setString("11059513");
set_field(noLegs_0_1_2_1, LegPriceUnitOfMeasureQty_52, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegProduct{1590238709}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegPutOrCall{2051098177}, InstrumentLeg_52);
        FIX::LegRatioQty LegRatioQty_52;
        LegRatioQty_52.setString("1598929");
set_field(noLegs_0_1_2_1, LegRatioQty_52, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1854389928"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegRepoCollateralSecurityType{"STRING_1777250669"}, InstrumentLeg_52);
        FIX::LegRepurchaseRate LegRepurchaseRate_52;
        LegRepurchaseRate_52.setString("28.700000");
set_field(noLegs_0_1_2_1, LegRepurchaseRate_52, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegRepurchaseTerm{1880831386}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityDesc{"STRING_1111016969"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityExchange{"EXCHANGE_127051421"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityID{"STRING_462762159"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityIDSource{"STRING_647285869"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegSecuritySubType{"STRING_1047518059"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegSecurityType{"STRING_524772718"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegSide{'3'}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_627938267"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegStrikeCurrency{"CAN"}, InstrumentLeg_52);
        FIX::LegStrikePrice LegStrikePrice_52;
        LegStrikePrice_52.setString("18244083");
set_field(noLegs_0_1_2_1, LegStrikePrice_52, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegSymbol{"STRING_1928646860"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegSymbolSfx{"STRING_973741796"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegTimeUnit{"STRING_1821391587"}, InstrumentLeg_52);
        set_field(noLegs_0_1_2_1, FIX::LegUnitOfMeasure{"STRING_1719026609"}, InstrumentLeg_52);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_52;
        LegUnitOfMeasureQty_52.setString("4602208");
set_field(noLegs_0_1_2_1, LegUnitOfMeasureQty_52, InstrumentLeg_52);
        all_values.push_back(InstrumentLeg_52);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_110;
          set_field(noLegSecurityAltID_0_1_1_3_0, FIX::LegSecurityAltID{"STRING_1723538246"}, LegSecAltIDGrp_NoLegSecurityAltID_110);
          set_field(noLegSecurityAltID_0_1_1_3_0, FIX::LegSecurityAltIDSource{"STRING_1804972160"}, LegSecAltIDGrp_NoLegSecurityAltID_110);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_110);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_1_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_111;
          set_field(noLegSecurityAltID_0_1_1_3_1, FIX::LegSecurityAltID{"STRING_955379132"}, LegSecAltIDGrp_NoLegSecurityAltID_111);
          set_field(noLegSecurityAltID_0_1_1_3_1, FIX::LegSecurityAltIDSource{"STRING_487136726"}, LegSecAltIDGrp_NoLegSecurityAltID_111);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_111);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_1.addGroup(noLegSecurityAltID_0_1_1_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_1_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_53;
        set_field(noLegs_0_1_2_2, FIX::EncodedLegIssuer{"DATA_188025551"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::EncodedLegIssuerLen{1636302176}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::EncodedLegSecurityDesc{"DATA_1593088109"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::EncodedLegSecurityDescLen{1778264260}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegCFICode{"STRING_1539916705"}, InstrumentLeg_53);
        FIX::LegContractMultiplier LegContractMultiplier_53;
        LegContractMultiplier_53.setString("17529811");
set_field(noLegs_0_1_2_2, LegContractMultiplier_53, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegContractMultiplierUnit{1485170540}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegContractSettlMonth{"MONTHYEAR_1169683726"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegCountryOfIssue{"COUNTRY_138380325"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_1218518279"}, InstrumentLeg_53);
        FIX::LegCouponRate LegCouponRate_53;
        LegCouponRate_53.setString("70.480000");
set_field(noLegs_0_1_2_2, LegCouponRate_53, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegCreditRating{"STRING_265431746"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegCurrency{"CHF"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegDatedDate{"LOCALMKTDATE_1312949805"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegExerciseStyle{58569509}, InstrumentLeg_53);
        FIX::LegFactor LegFactor_53;
        LegFactor_53.setString("11570342");
set_field(noLegs_0_1_2_2, LegFactor_53, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegFlowScheduleType{1940888073}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegInstrRegistry{"STRING_1065878149"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_174628207"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegIssueDate{"LOCALMKTDATE_1617812725"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegIssuer{"STRING_847041361"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegLocaleOfIssue{"STRING_1148370003"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegMaturityDate{"LOCALMKTDATE_1291720664"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegMaturityMonthYear{"MONTHYEAR_418584322"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegMaturityTime{"TZTIMEONLY_1608590814"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegOptAttribute{'6'}, InstrumentLeg_53);
        FIX::LegOptionRatio LegOptionRatio_53;
        LegOptionRatio_53.setString("21421225");
set_field(noLegs_0_1_2_2, LegOptionRatio_53, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegPool{"STRING_1266079326"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegPriceUnitOfMeasure{"STRING_1585426939"}, InstrumentLeg_53);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_53;
        LegPriceUnitOfMeasureQty_53.setString("4817756");
set_field(noLegs_0_1_2_2, LegPriceUnitOfMeasureQty_53, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegProduct{1454104877}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegPutOrCall{1074245467}, InstrumentLeg_53);
        FIX::LegRatioQty LegRatioQty_53;
        LegRatioQty_53.setString("20748637");
set_field(noLegs_0_1_2_2, LegRatioQty_53, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegRedemptionDate{"LOCALMKTDATE_1084885490"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegRepoCollateralSecurityType{"STRING_466678524"}, InstrumentLeg_53);
        FIX::LegRepurchaseRate LegRepurchaseRate_53;
        LegRepurchaseRate_53.setString("12.110000");
set_field(noLegs_0_1_2_2, LegRepurchaseRate_53, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegRepurchaseTerm{422572382}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityDesc{"STRING_1636362250"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityExchange{"EXCHANGE_1818741536"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityID{"STRING_1641090661"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityIDSource{"STRING_1769579298"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegSecuritySubType{"STRING_2084173282"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegSecurityType{"STRING_1174887452"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegSide{'4'}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegStateOrProvinceOfIssue{"STRING_1249639440"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegStrikeCurrency{"USD"}, InstrumentLeg_53);
        FIX::LegStrikePrice LegStrikePrice_53;
        LegStrikePrice_53.setString("10430438");
set_field(noLegs_0_1_2_2, LegStrikePrice_53, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegSymbol{"STRING_151851462"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegSymbolSfx{"STRING_1734261008"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegTimeUnit{"STRING_513372942"}, InstrumentLeg_53);
        set_field(noLegs_0_1_2_2, FIX::LegUnitOfMeasure{"STRING_998892823"}, InstrumentLeg_53);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_53;
        LegUnitOfMeasureQty_53.setString("7351473");
set_field(noLegs_0_1_2_2, LegUnitOfMeasureQty_53, InstrumentLeg_53);
        all_values.push_back(InstrumentLeg_53);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_1_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_112;
          set_field(noLegSecurityAltID_0_1_2_3_0, FIX::LegSecurityAltID{"STRING_1417477146"}, LegSecAltIDGrp_NoLegSecurityAltID_112);
          set_field(noLegSecurityAltID_0_1_2_3_0, FIX::LegSecurityAltIDSource{"STRING_196254530"}, LegSecAltIDGrp_NoLegSecurityAltID_112);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_112);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_1_2_2.addGroup(noLegSecurityAltID_0_1_2_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noLegs_0_1_2_2);
      }
      // Instrument
      multiset<string> Instrument_34;
      FIX::AttachmentPoint AttachmentPoint_34;
      AttachmentPoint_34.setString("77.660000");
set_field(noQuoteEntries_0_1_1, AttachmentPoint_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::CFICode{"STRING_1412116066"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::CPProgram{99}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::CPRegType{"STRING_1873084705"}, Instrument_34);
      FIX::CapPrice CapPrice_34;
      CapPrice_34.setString("18938917");
set_field(noQuoteEntries_0_1_1, CapPrice_34, Instrument_34);
      FIX::ContractMultiplier ContractMultiplier_34;
      ContractMultiplier_34.setString("7689550");
set_field(noQuoteEntries_0_1_1, ContractMultiplier_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::ContractMultiplierUnit{0}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::ContractSettlMonth{"MONTHYEAR_1821271822"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::CountryOfIssue{"COUNTRY_1853840576"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::CouponPaymentDate{"LOCALMKTDATE_1266525048"}, Instrument_34);
      FIX::CouponRate CouponRate_34;
      CouponRate_34.setString("93.850000");
set_field(noQuoteEntries_0_1_1, CouponRate_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::CreditRating{"STRING_128929310"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::DatedDate{"LOCALMKTDATE_755403650"}, Instrument_34);
      FIX::DetachmentPoint DetachmentPoint_34;
      DetachmentPoint_34.setString("72.740000");
set_field(noQuoteEntries_0_1_1, DetachmentPoint_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedIssuer{"DATA_1770019972"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedIssuerLen{377499301}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedSecurityDesc{"DATA_962096908"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::EncodedSecurityDescLen{797423776}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::ExerciseStyle{0}, Instrument_34);
      FIX::Factor Factor_34;
      Factor_34.setString("642527");
set_field(noQuoteEntries_0_1_1, Factor_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::FlexProductEligibilityIndicator{false}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::FlexibleIndicator{false}, Instrument_34);
      FIX::FloorPrice FloorPrice_34;
      FloorPrice_34.setString("11072965");
set_field(noQuoteEntries_0_1_1, FloorPrice_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::FlowScheduleType{1}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::InstrRegistry{"STRING_1926508029"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::InstrmtAssignmentMethod{'1'}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::InterestAccrualDate{"LOCALMKTDATE_1034141374"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::IssueDate{"LOCALMKTDATE_514171745"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::Issuer{"STRING_1278279467"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::ListMethod{0}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::LocaleOfIssue{"STRING_710426275"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::MaturityDate{"LOCALMKTDATE_1565937233"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::MaturityMonthYear{"MONTHYEAR_1716250939"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::MaturityTime{"TZTIMEONLY_25276483"}, Instrument_34);
      FIX::MinPriceIncrement MinPriceIncrement_34;
      MinPriceIncrement_34.setString("12915382");
set_field(noQuoteEntries_0_1_1, MinPriceIncrement_34, Instrument_34);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_34;
      MinPriceIncrementAmount_34.setString("14626590");
set_field(noQuoteEntries_0_1_1, MinPriceIncrementAmount_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::NTPositionLimit{794231569}, Instrument_34);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_34;
      NotionalPercentageOutstanding_34.setString("48.140000");
set_field(noQuoteEntries_0_1_1, NotionalPercentageOutstanding_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::OptAttribute{'1'}, Instrument_34);
      FIX::OptPayoutAmount OptPayoutAmount_34;
      OptPayoutAmount_34.setString("5005884");
set_field(noQuoteEntries_0_1_1, OptPayoutAmount_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::OptPayoutType{3}, Instrument_34);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_34;
      OriginalNotionalPercentageOutstanding_34.setString("29.160000");
set_field(noQuoteEntries_0_1_1, OriginalNotionalPercentageOutstanding_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::Pool{"STRING_629517808"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::PositionLimit{1965829864}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::PriceQuoteMethod{"STRING_INT"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::PriceUnitOfMeasure{"STRING_252054132"}, Instrument_34);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_34;
      PriceUnitOfMeasureQty_34.setString("1958455");
set_field(noQuoteEntries_0_1_1, PriceUnitOfMeasureQty_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::Product{7}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::ProductComplex{"STRING_1049477908"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::PutOrCall{0}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::RedemptionDate{"LOCALMKTDATE_247386151"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::RepoCollateralSecurityType{"STRING_932874997"}, Instrument_34);
      FIX::RepurchaseRate RepurchaseRate_34;
      RepurchaseRate_34.setString("4.080000");
set_field(noQuoteEntries_0_1_1, RepurchaseRate_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::RepurchaseTerm{1354682716}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::RestructuringType{"STRING_FR"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityDesc{"STRING_947214789"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityExchange{"EXCHANGE_827868576"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityGroup{"STRING_2002264922"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityID{"STRING_1461386534"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityIDSource{"STRING_M"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityStatus{"STRING_2"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SecuritySubType{"STRING_24329161"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityType{"STRING_AN"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::Seniority{"STRING_SR"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SettlMethod{'P'}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SettleOnOpenFlag{"STRING_668656270"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::StateOrProvinceOfIssue{"STRING_1190342442"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::StrikeCurrency{"USD"}, Instrument_34);
      FIX::StrikeMultiplier StrikeMultiplier_34;
      StrikeMultiplier_34.setString("1793059");
set_field(noQuoteEntries_0_1_1, StrikeMultiplier_34, Instrument_34);
      FIX::StrikePrice StrikePrice_34;
      StrikePrice_34.setString("13444257");
set_field(noQuoteEntries_0_1_1, StrikePrice_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::StrikePriceBoundaryMethod{1}, Instrument_34);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_34;
      StrikePriceBoundaryPrecision_34.setString("88.890000");
set_field(noQuoteEntries_0_1_1, StrikePriceBoundaryPrecision_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::StrikePriceDeterminationMethod{1}, Instrument_34);
      FIX::StrikeValue StrikeValue_34;
      StrikeValue_34.setString("16413298");
set_field(noQuoteEntries_0_1_1, StrikeValue_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::Symbol{"STRING_1890939079"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::SymbolSfx{"STRING_CD"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::TimeUnit{"STRING_S"}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::UnitOfMeasure{"STRING_oz_tr"}, Instrument_34);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_34;
      UnitOfMeasureQty_34.setString("6656351");
set_field(noQuoteEntries_0_1_1, UnitOfMeasureQty_34, Instrument_34);
      set_field(noQuoteEntries_0_1_1, FIX::ValuationMethod{"STRING_FUTDA"}, Instrument_34);
      all_values.push_back(Instrument_34);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_69;
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_69);
        FIX::ComplexEventPrice ComplexEventPrice_69;
        ComplexEventPrice_69.setString("15286577");
set_field(noComplexEvents_0_1_2_0, ComplexEventPrice_69, ComplexEvents_NoComplexEvents_69);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceBoundaryMethod{5}, ComplexEvents_NoComplexEvents_69);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_69;
        ComplexEventPriceBoundaryPrecision_69.setString("66.720000");
set_field(noComplexEvents_0_1_2_0, ComplexEventPriceBoundaryPrecision_69, ComplexEvents_NoComplexEvents_69);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventPriceTimeType{2}, ComplexEvents_NoComplexEvents_69);
        set_field(noComplexEvents_0_1_2_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_69);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_69;
        ComplexOptPayoutAmount_69.setString("20949432");
set_field(noComplexEvents_0_1_2_0, ComplexOptPayoutAmount_69, ComplexEvents_NoComplexEvents_69);
        all_values.push_back(ComplexEvents_NoComplexEvents_69);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_140;
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 1, 8, 13, 5, 2003)}, ComplexEventDates_NoComplexEventDates_140);
          set_field(noComplexEventDates_0_1_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 44, 24, 19, 6, 2004)}, ComplexEventDates_NoComplexEventDates_140);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_140);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_282;
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(0, 46, 37)}, ComplexEventTimes_NoComplexEventTimes_282);
            set_field(noComplexEventTimes_0_1_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 30, 33)}, ComplexEventTimes_NoComplexEventTimes_282);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_282);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_283;
            set_field(noComplexEventTimes_0_1_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 42, 57)}, ComplexEventTimes_NoComplexEventTimes_283);
            set_field(noComplexEventTimes_0_1_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 56, 9)}, ComplexEventTimes_NoComplexEventTimes_283);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_283);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_0.addGroup(noComplexEventTimes_0_1_0_0_4_1);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_141;
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(20, 3, 16, 22, 8, 2005)}, ComplexEventDates_NoComplexEventDates_141);
          set_field(noComplexEventDates_0_1_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(3, 35, 26, 10, 5, 2016)}, ComplexEventDates_NoComplexEventDates_141);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_141);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_284;
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(14, 43, 34)}, ComplexEventTimes_NoComplexEventTimes_284);
            set_field(noComplexEventTimes_0_1_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 56, 19)}, ComplexEventTimes_NoComplexEventTimes_284);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_284);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_285;
            set_field(noComplexEventTimes_0_1_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 53, 6)}, ComplexEventTimes_NoComplexEventTimes_285);
            set_field(noComplexEventTimes_0_1_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 54, 45)}, ComplexEventTimes_NoComplexEventTimes_285);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_285);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_1.addGroup(noComplexEventTimes_0_1_0_1_4_1);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_142;
          set_field(noComplexEventDates_0_1_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 40, 39, 8, 4, 2006)}, ComplexEventDates_NoComplexEventDates_142);
          set_field(noComplexEventDates_0_1_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 6, 44, 9, 3, 2006)}, ComplexEventDates_NoComplexEventDates_142);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_142);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_286;
            set_field(noComplexEventTimes_0_1_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(12, 0, 53)}, ComplexEventTimes_NoComplexEventTimes_286);
            set_field(noComplexEventTimes_0_1_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(9, 49, 57)}, ComplexEventTimes_NoComplexEventTimes_286);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_286);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_287;
            set_field(noComplexEventTimes_0_1_0_2_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 50, 4)}, ComplexEventTimes_NoComplexEventTimes_287);
            set_field(noComplexEventTimes_0_1_0_2_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 58, 36)}, ComplexEventTimes_NoComplexEventTimes_287);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_287);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_0_2_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_288;
            set_field(noComplexEventTimes_0_1_0_2_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(16, 8, 14)}, ComplexEventTimes_NoComplexEventTimes_288);
            set_field(noComplexEventTimes_0_1_0_2_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(11, 45, 31)}, ComplexEventTimes_NoComplexEventTimes_288);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_288);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_0_3_2.addGroup(noComplexEventTimes_0_1_0_2_4_2);
          }
          noComplexEvents_0_1_2_0.addGroup(noComplexEventDates_0_1_0_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_1_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_70;
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_70);
        FIX::ComplexEventPrice ComplexEventPrice_70;
        ComplexEventPrice_70.setString("20563172");
set_field(noComplexEvents_0_1_2_1, ComplexEventPrice_70, ComplexEvents_NoComplexEvents_70);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_70);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_70;
        ComplexEventPriceBoundaryPrecision_70.setString("45.910000");
set_field(noComplexEvents_0_1_2_1, ComplexEventPriceBoundaryPrecision_70, ComplexEvents_NoComplexEvents_70);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_70);
        set_field(noComplexEvents_0_1_2_1, FIX::ComplexEventType{3}, ComplexEvents_NoComplexEvents_70);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_70;
        ComplexOptPayoutAmount_70.setString("5241051");
set_field(noComplexEvents_0_1_2_1, ComplexOptPayoutAmount_70, ComplexEvents_NoComplexEvents_70);
        all_values.push_back(ComplexEvents_NoComplexEvents_70);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_143;
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(13, 33, 53, 22, 3, 2003)}, ComplexEventDates_NoComplexEventDates_143);
          set_field(noComplexEventDates_0_1_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(18, 33, 4, 14, 11, 2006)}, ComplexEventDates_NoComplexEventDates_143);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_143);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_289;
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(10, 51, 36)}, ComplexEventTimes_NoComplexEventTimes_289);
            set_field(noComplexEventTimes_0_1_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(6, 21, 3)}, ComplexEventTimes_NoComplexEventTimes_289);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_289);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_290;
            set_field(noComplexEventTimes_0_1_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(4, 19, 31)}, ComplexEventTimes_NoComplexEventTimes_290);
            set_field(noComplexEventTimes_0_1_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(1, 52, 58)}, ComplexEventTimes_NoComplexEventTimes_290);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_290);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_1);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_0_4_2;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_291;
            set_field(noComplexEventTimes_0_1_1_0_4_2, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 24, 34)}, ComplexEventTimes_NoComplexEventTimes_291);
            set_field(noComplexEventTimes_0_1_1_0_4_2, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 17, 15)}, ComplexEventTimes_NoComplexEventTimes_291);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_291);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_0.addGroup(noComplexEventTimes_0_1_1_0_4_2);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_1_1_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_144;
          set_field(noComplexEventDates_0_1_1_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(14, 11, 23, 25, 6, 2017)}, ComplexEventDates_NoComplexEventDates_144);
          set_field(noComplexEventDates_0_1_1_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(7, 56, 27, 7, 4, 2005)}, ComplexEventDates_NoComplexEventDates_144);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_144);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_292;
            set_field(noComplexEventTimes_0_1_1_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(9, 17, 19)}, ComplexEventTimes_NoComplexEventTimes_292);
            set_field(noComplexEventTimes_0_1_1_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 11, 54)}, ComplexEventTimes_NoComplexEventTimes_292);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_292);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_1_1_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_293;
            set_field(noComplexEventTimes_0_1_1_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(8, 18, 41)}, ComplexEventTimes_NoComplexEventTimes_293);
            set_field(noComplexEventTimes_0_1_1_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(20, 58, 22)}, ComplexEventTimes_NoComplexEventTimes_293);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_293);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_1_1_3_1.addGroup(noComplexEventTimes_0_1_1_1_4_1);
          }
          noComplexEvents_0_1_2_1.addGroup(noComplexEventDates_0_1_1_3_1);
        }
        noQuoteEntries_0_1_1.addGroup(noComplexEvents_0_1_2_1);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_1_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_72;
        set_field(noEvents_0_1_2_0, FIX::EventDate{"LOCALMKTDATE_481732780"}, EvntGrp_NoEvents_72);
        FIX::EventPx EventPx_72;
        EventPx_72.setString("21088385");
set_field(noEvents_0_1_2_0, EventPx_72, EvntGrp_NoEvents_72);
        set_field(noEvents_0_1_2_0, FIX::EventText{"STRING_1395429672"}, EvntGrp_NoEvents_72);
        set_field(noEvents_0_1_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(6, 10, 0, 21, 11, 2014)}, EvntGrp_NoEvents_72);
        set_field(noEvents_0_1_2_0, FIX::EventType{9}, EvntGrp_NoEvents_72);
        all_values.push_back(EvntGrp_NoEvents_72);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_1.addGroup(noEvents_0_1_2_0);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_64;
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyID{"STRING_885649681"}, InstrumentParties_NoInstrumentParties_64);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_64);
        set_field(noInstrumentParties_0_1_2_0, FIX::InstrumentPartyRole{265370045}, InstrumentParties_NoInstrumentParties_64);
        all_values.push_back(InstrumentParties_NoInstrumentParties_64);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130;
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubID{"STRING_873087415"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130);
          set_field(noInstrumentPartySubIDs_0_1_0_3_0, FIX::InstrumentPartySubIDType{1090629384}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_130);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131;
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubID{"STRING_712627534"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131);
          set_field(noInstrumentPartySubIDs_0_1_0_3_1, FIX::InstrumentPartySubIDType{642891930}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_131);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_0_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132;
          set_field(noInstrumentPartySubIDs_0_1_0_3_2, FIX::InstrumentPartySubID{"STRING_505140387"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);
          set_field(noInstrumentPartySubIDs_0_1_0_3_2, FIX::InstrumentPartySubIDType{1594107928}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_132);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_0.addGroup(noInstrumentPartySubIDs_0_1_0_3_2);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_1_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_65;
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyID{"STRING_1921226745"}, InstrumentParties_NoInstrumentParties_65);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_65);
        set_field(noInstrumentParties_0_1_2_1, FIX::InstrumentPartyRole{469001738}, InstrumentParties_NoInstrumentParties_65);
        all_values.push_back(InstrumentParties_NoInstrumentParties_65);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_1_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133;
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubID{"STRING_139346742"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);
          set_field(noInstrumentPartySubIDs_0_1_1_3_0, FIX::InstrumentPartySubIDType{49011806}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_133);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_1_2_1.addGroup(noInstrumentPartySubIDs_0_1_1_3_0);
        }
        noQuoteEntries_0_1_1.addGroup(noInstrumentParties_0_1_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_70;
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltID{"STRING_1202279884"}, SecAltIDGrp_NoSecurityAltID_70);
        set_field(noSecurityAltID_0_1_2_0, FIX::SecurityAltIDSource{"STRING_1779727104"}, SecAltIDGrp_NoSecurityAltID_70);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_70);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_1;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_71;
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltID{"STRING_953365668"}, SecAltIDGrp_NoSecurityAltID_71);
        set_field(noSecurityAltID_0_1_2_1, FIX::SecurityAltIDSource{"STRING_1163634749"}, SecAltIDGrp_NoSecurityAltID_71);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_71);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_1_2_2;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_72;
        set_field(noSecurityAltID_0_1_2_2, FIX::SecurityAltID{"STRING_1027673128"}, SecAltIDGrp_NoSecurityAltID_72);
        set_field(noSecurityAltID_0_1_2_2, FIX::SecurityAltIDSource{"STRING_1290694618"}, SecAltIDGrp_NoSecurityAltID_72);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_72);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_1.addGroup(noSecurityAltID_0_1_2_2);
      }
      // SecurityXML
      multiset<string> SecurityXML_68;
      set_field(noQuoteEntries_0_1_1, FIX::SecurityXML{"XMLDATA_1086610971"}, SecurityXML_68);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityXMLLen{1564129658}, SecurityXML_68);
      set_field(noQuoteEntries_0_1_1, FIX::SecurityXMLSchema{"STRING_40204430"}, SecurityXML_68);
      all_values.push_back(SecurityXML_68);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_1);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries noQuoteEntries_0_1_2;
      // QuotEntryAckGrp.NoQuoteEntries
      multiset<string> QuotEntryAckGrp_NoQuoteEntries_2;
      FIX::BidForwardPoints BidForwardPoints_3;
      BidForwardPoints_3.setString("6568050");
set_field(noQuoteEntries_0_1_2, BidForwardPoints_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidForwardPoints2 BidForwardPoints2_3;
      BidForwardPoints2_3.setString("16459006");
set_field(noQuoteEntries_0_1_2, BidForwardPoints2_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidPx BidPx_3;
      BidPx_3.setString("2756737");
set_field(noQuoteEntries_0_1_2, BidPx_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidSize BidSize_3;
      BidSize_3.setString("17955283");
set_field(noQuoteEntries_0_1_2, BidSize_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidSpotRate BidSpotRate_3;
      BidSpotRate_3.setString("12986415");
set_field(noQuoteEntries_0_1_2, BidSpotRate_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::BidYield BidYield_3;
      BidYield_3.setString("34.110000");
set_field(noQuoteEntries_0_1_2, BidYield_3, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::BookingType{0}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::Currency{"GBP"}, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::MidPx MidPx_3;
      MidPx_3.setString("17377945");
set_field(noQuoteEntries_0_1_2, MidPx_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::MidYield MidYield_3;
      MidYield_3.setString("73.350000");
set_field(noQuoteEntries_0_1_2, MidYield_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferForwardPoints OfferForwardPoints_3;
      OfferForwardPoints_3.setString("3353518");
set_field(noQuoteEntries_0_1_2, OfferForwardPoints_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferForwardPoints2 OfferForwardPoints2_3;
      OfferForwardPoints2_3.setString("2332028");
set_field(noQuoteEntries_0_1_2, OfferForwardPoints2_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferPx OfferPx_3;
      OfferPx_3.setString("10122977");
set_field(noQuoteEntries_0_1_2, OfferPx_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferSize OfferSize_3;
      OfferSize_3.setString("19294597");
set_field(noQuoteEntries_0_1_2, OfferSize_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferSpotRate OfferSpotRate_3;
      OfferSpotRate_3.setString("69458");
set_field(noQuoteEntries_0_1_2, OfferSpotRate_3, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OfferYield OfferYield_3;
      OfferYield_3.setString("1.970000");
set_field(noQuoteEntries_0_1_2, OfferYield_3, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::OrdType{'F'}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::OrderCapacity{'R'}, QuotEntryAckGrp_NoQuoteEntries_2);
      FIX::OrderQty2 OrderQty2_4;
      OrderQty2_4.setString("1260632");
set_field(noQuoteEntries_0_1_2, OrderQty2_4, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::OrderRestrictions{"MULTIPLECHARVALUE_B"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::QuoteEntryID{"STRING_1341722724"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::QuoteEntryRejectReason{1328343175}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::QuoteEntryStatus{12}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::SettlDate{"LOCALMKTDATE_147604744"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::SettlDate2{"LOCALMKTDATE_344494276"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::TradingSessionID{"STRING_2"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::TradingSessionSubID{"STRING_4"}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::TransactTime{FIX::UTCTIMESTAMP(7, 53, 44, 4, 4, 2013)}, QuotEntryAckGrp_NoQuoteEntries_2);
      set_field(noQuoteEntries_0_1_2, FIX::ValidUntilTime{FIX::UTCTIMESTAMP(7, 56, 10, 21, 12, 2014)}, QuotEntryAckGrp_NoQuoteEntries_2);
      all_values.push_back(QuotEntryAckGrp_NoQuoteEntries_2);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries");

      // InstrmtLegGrp
      // Group InstrmtLegGrp.NoLegs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_0;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_54;
        set_field(noLegs_0_2_2_0, FIX::EncodedLegIssuer{"DATA_276692168"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::EncodedLegIssuerLen{2109593828}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::EncodedLegSecurityDesc{"DATA_508069541"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::EncodedLegSecurityDescLen{283638066}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegCFICode{"STRING_2096310378"}, InstrumentLeg_54);
        FIX::LegContractMultiplier LegContractMultiplier_54;
        LegContractMultiplier_54.setString("7590473");
set_field(noLegs_0_2_2_0, LegContractMultiplier_54, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegContractMultiplierUnit{1153727902}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegContractSettlMonth{"MONTHYEAR_74890021"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegCountryOfIssue{"COUNTRY_1059037055"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegCouponPaymentDate{"LOCALMKTDATE_347966978"}, InstrumentLeg_54);
        FIX::LegCouponRate LegCouponRate_54;
        LegCouponRate_54.setString("31.970000");
set_field(noLegs_0_2_2_0, LegCouponRate_54, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegCreditRating{"STRING_991270172"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegCurrency{"EUR"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegDatedDate{"LOCALMKTDATE_1951176417"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegExerciseStyle{1933871085}, InstrumentLeg_54);
        FIX::LegFactor LegFactor_54;
        LegFactor_54.setString("10313490");
set_field(noLegs_0_2_2_0, LegFactor_54, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegFlowScheduleType{180245024}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegInstrRegistry{"STRING_1264891230"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegInterestAccrualDate{"LOCALMKTDATE_971775769"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegIssueDate{"LOCALMKTDATE_55214289"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegIssuer{"STRING_871585106"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegLocaleOfIssue{"STRING_560247162"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegMaturityDate{"LOCALMKTDATE_1228825108"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegMaturityMonthYear{"MONTHYEAR_1639602393"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegMaturityTime{"TZTIMEONLY_1013425658"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegOptAttribute{'1'}, InstrumentLeg_54);
        FIX::LegOptionRatio LegOptionRatio_54;
        LegOptionRatio_54.setString("20303439");
set_field(noLegs_0_2_2_0, LegOptionRatio_54, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegPool{"STRING_1056915026"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegPriceUnitOfMeasure{"STRING_768776336"}, InstrumentLeg_54);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_54;
        LegPriceUnitOfMeasureQty_54.setString("6089537");
set_field(noLegs_0_2_2_0, LegPriceUnitOfMeasureQty_54, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegProduct{1333607194}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegPutOrCall{730886517}, InstrumentLeg_54);
        FIX::LegRatioQty LegRatioQty_54;
        LegRatioQty_54.setString("11170233");
set_field(noLegs_0_2_2_0, LegRatioQty_54, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegRedemptionDate{"LOCALMKTDATE_1617245261"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegRepoCollateralSecurityType{"STRING_679713247"}, InstrumentLeg_54);
        FIX::LegRepurchaseRate LegRepurchaseRate_54;
        LegRepurchaseRate_54.setString("6.950000");
set_field(noLegs_0_2_2_0, LegRepurchaseRate_54, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegRepurchaseTerm{623489515}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegSecurityDesc{"STRING_754603268"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegSecurityExchange{"EXCHANGE_787624102"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegSecurityID{"STRING_971456494"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegSecurityIDSource{"STRING_10352817"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegSecuritySubType{"STRING_1778894274"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegSecurityType{"STRING_1467028217"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegSide{'1'}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegStateOrProvinceOfIssue{"STRING_1582587043"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegStrikeCurrency{"JPY"}, InstrumentLeg_54);
        FIX::LegStrikePrice LegStrikePrice_54;
        LegStrikePrice_54.setString("17628320");
set_field(noLegs_0_2_2_0, LegStrikePrice_54, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegSymbol{"STRING_370823237"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegSymbolSfx{"STRING_1613721485"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegTimeUnit{"STRING_1818046357"}, InstrumentLeg_54);
        set_field(noLegs_0_2_2_0, FIX::LegUnitOfMeasure{"STRING_1242408343"}, InstrumentLeg_54);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_54;
        LegUnitOfMeasureQty_54.setString("264849");
set_field(noLegs_0_2_2_0, LegUnitOfMeasureQty_54, InstrumentLeg_54);
        all_values.push_back(InstrumentLeg_54);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_0_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_113;
          set_field(noLegSecurityAltID_0_2_0_3_0, FIX::LegSecurityAltID{"STRING_734527088"}, LegSecAltIDGrp_NoLegSecurityAltID_113);
          set_field(noLegSecurityAltID_0_2_0_3_0, FIX::LegSecurityAltIDSource{"STRING_1039910657"}, LegSecAltIDGrp_NoLegSecurityAltID_113);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_113);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_2_2_0.addGroup(noLegSecurityAltID_0_2_0_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_1;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_55;
        set_field(noLegs_0_2_2_1, FIX::EncodedLegIssuer{"DATA_570868047"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::EncodedLegIssuerLen{617387422}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::EncodedLegSecurityDesc{"DATA_2096825683"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::EncodedLegSecurityDescLen{1339644384}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegCFICode{"STRING_1226341181"}, InstrumentLeg_55);
        FIX::LegContractMultiplier LegContractMultiplier_55;
        LegContractMultiplier_55.setString("12829492");
set_field(noLegs_0_2_2_1, LegContractMultiplier_55, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegContractMultiplierUnit{2070530901}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegContractSettlMonth{"MONTHYEAR_195880833"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegCountryOfIssue{"COUNTRY_752710843"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegCouponPaymentDate{"LOCALMKTDATE_602760500"}, InstrumentLeg_55);
        FIX::LegCouponRate LegCouponRate_55;
        LegCouponRate_55.setString("15.280000");
set_field(noLegs_0_2_2_1, LegCouponRate_55, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegCreditRating{"STRING_1376200358"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegCurrency{"USD"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegDatedDate{"LOCALMKTDATE_200173204"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegExerciseStyle{1367716586}, InstrumentLeg_55);
        FIX::LegFactor LegFactor_55;
        LegFactor_55.setString("3435026");
set_field(noLegs_0_2_2_1, LegFactor_55, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegFlowScheduleType{1667201421}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegInstrRegistry{"STRING_978313229"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegInterestAccrualDate{"LOCALMKTDATE_1926089652"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegIssueDate{"LOCALMKTDATE_773133428"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegIssuer{"STRING_1620258945"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegLocaleOfIssue{"STRING_1541438072"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegMaturityDate{"LOCALMKTDATE_1143956665"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegMaturityMonthYear{"MONTHYEAR_1086496782"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegMaturityTime{"TZTIMEONLY_1212000781"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegOptAttribute{'2'}, InstrumentLeg_55);
        FIX::LegOptionRatio LegOptionRatio_55;
        LegOptionRatio_55.setString("11129817");
set_field(noLegs_0_2_2_1, LegOptionRatio_55, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegPool{"STRING_2111388598"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegPriceUnitOfMeasure{"STRING_973408448"}, InstrumentLeg_55);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_55;
        LegPriceUnitOfMeasureQty_55.setString("54087");
set_field(noLegs_0_2_2_1, LegPriceUnitOfMeasureQty_55, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegProduct{534772998}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegPutOrCall{1590795870}, InstrumentLeg_55);
        FIX::LegRatioQty LegRatioQty_55;
        LegRatioQty_55.setString("21022344");
set_field(noLegs_0_2_2_1, LegRatioQty_55, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegRedemptionDate{"LOCALMKTDATE_1874417382"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegRepoCollateralSecurityType{"STRING_669653403"}, InstrumentLeg_55);
        FIX::LegRepurchaseRate LegRepurchaseRate_55;
        LegRepurchaseRate_55.setString("0.560000");
set_field(noLegs_0_2_2_1, LegRepurchaseRate_55, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegRepurchaseTerm{1797464635}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegSecurityDesc{"STRING_865534236"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegSecurityExchange{"EXCHANGE_1990410899"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegSecurityID{"STRING_252741487"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegSecurityIDSource{"STRING_790002116"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegSecuritySubType{"STRING_1219127609"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegSecurityType{"STRING_1610105255"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegSide{'1'}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegStateOrProvinceOfIssue{"STRING_1419300814"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegStrikeCurrency{"EUR"}, InstrumentLeg_55);
        FIX::LegStrikePrice LegStrikePrice_55;
        LegStrikePrice_55.setString("9390185");
set_field(noLegs_0_2_2_1, LegStrikePrice_55, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegSymbol{"STRING_1808651422"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegSymbolSfx{"STRING_1624202712"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegTimeUnit{"STRING_1712152015"}, InstrumentLeg_55);
        set_field(noLegs_0_2_2_1, FIX::LegUnitOfMeasure{"STRING_1281426719"}, InstrumentLeg_55);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_55;
        LegUnitOfMeasureQty_55.setString("10181571");
set_field(noLegs_0_2_2_1, LegUnitOfMeasureQty_55, InstrumentLeg_55);
        all_values.push_back(InstrumentLeg_55);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_1_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_114;
          set_field(noLegSecurityAltID_0_2_1_3_0, FIX::LegSecurityAltID{"STRING_220439853"}, LegSecAltIDGrp_NoLegSecurityAltID_114);
          set_field(noLegSecurityAltID_0_2_1_3_0, FIX::LegSecurityAltIDSource{"STRING_82674270"}, LegSecAltIDGrp_NoLegSecurityAltID_114);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_114);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_2_2_1.addGroup(noLegSecurityAltID_0_2_1_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs noLegs_0_2_2_2;
        // InstrmtLegGrp.NoLegs
        // InstrumentLeg
        multiset<string> InstrumentLeg_56;
        set_field(noLegs_0_2_2_2, FIX::EncodedLegIssuer{"DATA_947506392"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::EncodedLegIssuerLen{1333421634}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::EncodedLegSecurityDesc{"DATA_46579220"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::EncodedLegSecurityDescLen{1920914840}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegCFICode{"STRING_1338830425"}, InstrumentLeg_56);
        FIX::LegContractMultiplier LegContractMultiplier_56;
        LegContractMultiplier_56.setString("5813522");
set_field(noLegs_0_2_2_2, LegContractMultiplier_56, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegContractMultiplierUnit{1364227062}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegContractSettlMonth{"MONTHYEAR_1293581251"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegCountryOfIssue{"COUNTRY_308285952"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegCouponPaymentDate{"LOCALMKTDATE_2033880465"}, InstrumentLeg_56);
        FIX::LegCouponRate LegCouponRate_56;
        LegCouponRate_56.setString("76.590000");
set_field(noLegs_0_2_2_2, LegCouponRate_56, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegCreditRating{"STRING_2105750587"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegCurrency{"USD"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegDatedDate{"LOCALMKTDATE_211008426"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegExerciseStyle{1541933169}, InstrumentLeg_56);
        FIX::LegFactor LegFactor_56;
        LegFactor_56.setString("14458525");
set_field(noLegs_0_2_2_2, LegFactor_56, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegFlowScheduleType{1821113682}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegInstrRegistry{"STRING_896543620"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegInterestAccrualDate{"LOCALMKTDATE_717669685"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegIssueDate{"LOCALMKTDATE_503968227"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegIssuer{"STRING_594656679"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegLocaleOfIssue{"STRING_1656688273"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegMaturityDate{"LOCALMKTDATE_165136002"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegMaturityMonthYear{"MONTHYEAR_71375743"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegMaturityTime{"TZTIMEONLY_1221356640"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegOptAttribute{'1'}, InstrumentLeg_56);
        FIX::LegOptionRatio LegOptionRatio_56;
        LegOptionRatio_56.setString("10895328");
set_field(noLegs_0_2_2_2, LegOptionRatio_56, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegPool{"STRING_1929981673"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegPriceUnitOfMeasure{"STRING_1667002575"}, InstrumentLeg_56);
        FIX::LegPriceUnitOfMeasureQty LegPriceUnitOfMeasureQty_56;
        LegPriceUnitOfMeasureQty_56.setString("11722071");
set_field(noLegs_0_2_2_2, LegPriceUnitOfMeasureQty_56, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegProduct{730004417}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegPutOrCall{852940561}, InstrumentLeg_56);
        FIX::LegRatioQty LegRatioQty_56;
        LegRatioQty_56.setString("12187863");
set_field(noLegs_0_2_2_2, LegRatioQty_56, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegRedemptionDate{"LOCALMKTDATE_503435610"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegRepoCollateralSecurityType{"STRING_44287338"}, InstrumentLeg_56);
        FIX::LegRepurchaseRate LegRepurchaseRate_56;
        LegRepurchaseRate_56.setString("85.890000");
set_field(noLegs_0_2_2_2, LegRepurchaseRate_56, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegRepurchaseTerm{1867662672}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegSecurityDesc{"STRING_1337868589"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegSecurityExchange{"EXCHANGE_2108424541"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegSecurityID{"STRING_1754059490"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegSecurityIDSource{"STRING_1721666248"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegSecuritySubType{"STRING_2066691481"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegSecurityType{"STRING_358506895"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegSide{'1'}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegStateOrProvinceOfIssue{"STRING_130216259"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegStrikeCurrency{"GBP"}, InstrumentLeg_56);
        FIX::LegStrikePrice LegStrikePrice_56;
        LegStrikePrice_56.setString("19513299");
set_field(noLegs_0_2_2_2, LegStrikePrice_56, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegSymbol{"STRING_649500037"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegSymbolSfx{"STRING_1964429715"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegTimeUnit{"STRING_307814521"}, InstrumentLeg_56);
        set_field(noLegs_0_2_2_2, FIX::LegUnitOfMeasure{"STRING_1244156716"}, InstrumentLeg_56);
        FIX::LegUnitOfMeasureQty LegUnitOfMeasureQty_56;
        LegUnitOfMeasureQty_56.setString("14736343");
set_field(noLegs_0_2_2_2, LegUnitOfMeasureQty_56, InstrumentLeg_56);
        all_values.push_back(InstrumentLeg_56);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs.");

        // LegSecAltIDGrp
        // Group LegSecAltIDGrp.NoLegSecurityAltID
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_3_0;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_115;
          set_field(noLegSecurityAltID_0_2_2_3_0, FIX::LegSecurityAltID{"STRING_1315532460"}, LegSecAltIDGrp_NoLegSecurityAltID_115);
          set_field(noLegSecurityAltID_0_2_2_3_0, FIX::LegSecurityAltIDSource{"STRING_547507333"}, LegSecAltIDGrp_NoLegSecurityAltID_115);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_115);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_2_2_2.addGroup(noLegSecurityAltID_0_2_2_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoLegs::NoLegSecurityAltID noLegSecurityAltID_0_2_2_3_1;
          // LegSecAltIDGrp.NoLegSecurityAltID
          multiset<string> LegSecAltIDGrp_NoLegSecurityAltID_116;
          set_field(noLegSecurityAltID_0_2_2_3_1, FIX::LegSecurityAltID{"STRING_1919513244"}, LegSecAltIDGrp_NoLegSecurityAltID_116);
          set_field(noLegSecurityAltID_0_2_2_3_1, FIX::LegSecurityAltIDSource{"STRING_257581692"}, LegSecAltIDGrp_NoLegSecurityAltID_116);
          all_values.push_back(LegSecAltIDGrp_NoLegSecurityAltID_116);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries...NoLegs....NoLegSecurityAltID");

          noLegs_0_2_2_2.addGroup(noLegSecurityAltID_0_2_2_3_1);
        }
        noQuoteEntries_0_1_2.addGroup(noLegs_0_2_2_2);
      }
      // Instrument
      multiset<string> Instrument_35;
      FIX::AttachmentPoint AttachmentPoint_35;
      AttachmentPoint_35.setString("53.580000");
set_field(noQuoteEntries_0_1_2, AttachmentPoint_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::CFICode{"STRING_1439032171"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::CPProgram{99}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::CPRegType{"STRING_1060009775"}, Instrument_35);
      FIX::CapPrice CapPrice_35;
      CapPrice_35.setString("1444890");
set_field(noQuoteEntries_0_1_2, CapPrice_35, Instrument_35);
      FIX::ContractMultiplier ContractMultiplier_35;
      ContractMultiplier_35.setString("5010915");
set_field(noQuoteEntries_0_1_2, ContractMultiplier_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::ContractMultiplierUnit{2}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::ContractSettlMonth{"MONTHYEAR_188776423"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::CountryOfIssue{"COUNTRY_153746505"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::CouponPaymentDate{"LOCALMKTDATE_1283624410"}, Instrument_35);
      FIX::CouponRate CouponRate_35;
      CouponRate_35.setString("50.130000");
set_field(noQuoteEntries_0_1_2, CouponRate_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::CreditRating{"STRING_114687399"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::DatedDate{"LOCALMKTDATE_890200252"}, Instrument_35);
      FIX::DetachmentPoint DetachmentPoint_35;
      DetachmentPoint_35.setString("76.130000");
set_field(noQuoteEntries_0_1_2, DetachmentPoint_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::EncodedIssuer{"DATA_33895232"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::EncodedIssuerLen{1248707147}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::EncodedSecurityDesc{"DATA_901735124"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::EncodedSecurityDescLen{164111491}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::ExerciseStyle{2}, Instrument_35);
      FIX::Factor Factor_35;
      Factor_35.setString("10115");
set_field(noQuoteEntries_0_1_2, Factor_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::FlexProductEligibilityIndicator{false}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::FlexibleIndicator{false}, Instrument_35);
      FIX::FloorPrice FloorPrice_35;
      FloorPrice_35.setString("19654412");
set_field(noQuoteEntries_0_1_2, FloorPrice_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::FlowScheduleType{1}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::InstrRegistry{"STRING_747836670"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::InstrmtAssignmentMethod{'1'}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::InterestAccrualDate{"LOCALMKTDATE_748722829"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::IssueDate{"LOCALMKTDATE_2063369130"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::Issuer{"STRING_1839099247"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::ListMethod{1}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::LocaleOfIssue{"STRING_173467174"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::MaturityDate{"LOCALMKTDATE_21620957"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::MaturityMonthYear{"MONTHYEAR_1959784597"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::MaturityTime{"TZTIMEONLY_1603256016"}, Instrument_35);
      FIX::MinPriceIncrement MinPriceIncrement_35;
      MinPriceIncrement_35.setString("10816307");
set_field(noQuoteEntries_0_1_2, MinPriceIncrement_35, Instrument_35);
      FIX::MinPriceIncrementAmount MinPriceIncrementAmount_35;
      MinPriceIncrementAmount_35.setString("21042736");
set_field(noQuoteEntries_0_1_2, MinPriceIncrementAmount_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::NTPositionLimit{2104347580}, Instrument_35);
      FIX::NotionalPercentageOutstanding NotionalPercentageOutstanding_35;
      NotionalPercentageOutstanding_35.setString("24.700000");
set_field(noQuoteEntries_0_1_2, NotionalPercentageOutstanding_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::OptAttribute{'1'}, Instrument_35);
      FIX::OptPayoutAmount OptPayoutAmount_35;
      OptPayoutAmount_35.setString("1106104");
set_field(noQuoteEntries_0_1_2, OptPayoutAmount_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::OptPayoutType{1}, Instrument_35);
      FIX::OriginalNotionalPercentageOutstanding OriginalNotionalPercentageOutstanding_35;
      OriginalNotionalPercentageOutstanding_35.setString("14.700000");
set_field(noQuoteEntries_0_1_2, OriginalNotionalPercentageOutstanding_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::Pool{"STRING_225297837"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::PositionLimit{523933484}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::PriceQuoteMethod{"STRING_STD"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::PriceUnitOfMeasure{"STRING_259193069"}, Instrument_35);
      FIX::PriceUnitOfMeasureQty PriceUnitOfMeasureQty_35;
      PriceUnitOfMeasureQty_35.setString("17726406");
set_field(noQuoteEntries_0_1_2, PriceUnitOfMeasureQty_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::Product{4}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::ProductComplex{"STRING_423304560"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::PutOrCall{0}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::RedemptionDate{"LOCALMKTDATE_1528302066"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::RepoCollateralSecurityType{"STRING_391262345"}, Instrument_35);
      FIX::RepurchaseRate RepurchaseRate_35;
      RepurchaseRate_35.setString("5.010000");
set_field(noQuoteEntries_0_1_2, RepurchaseRate_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::RepurchaseTerm{1346259639}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::RestructuringType{"STRING_XR"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SecurityDesc{"STRING_878337171"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SecurityExchange{"EXCHANGE_490367905"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SecurityGroup{"STRING_1415757480"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SecurityID{"STRING_794222653"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SecurityIDSource{"STRING_B"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SecurityStatus{"STRING_1"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SecuritySubType{"STRING_967689827"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SecurityType{"STRING_CD"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::Seniority{"STRING_SB"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SettlMethod{'P'}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SettleOnOpenFlag{"STRING_1285235194"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::StateOrProvinceOfIssue{"STRING_1705600889"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::StrikeCurrency{"USD"}, Instrument_35);
      FIX::StrikeMultiplier StrikeMultiplier_35;
      StrikeMultiplier_35.setString("18511673");
set_field(noQuoteEntries_0_1_2, StrikeMultiplier_35, Instrument_35);
      FIX::StrikePrice StrikePrice_35;
      StrikePrice_35.setString("4909365");
set_field(noQuoteEntries_0_1_2, StrikePrice_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::StrikePriceBoundaryMethod{2}, Instrument_35);
      FIX::StrikePriceBoundaryPrecision StrikePriceBoundaryPrecision_35;
      StrikePriceBoundaryPrecision_35.setString("51.690000");
set_field(noQuoteEntries_0_1_2, StrikePriceBoundaryPrecision_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::StrikePriceDeterminationMethod{4}, Instrument_35);
      FIX::StrikeValue StrikeValue_35;
      StrikeValue_35.setString("19404943");
set_field(noQuoteEntries_0_1_2, StrikeValue_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::Symbol{"STRING_2001450605"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::SymbolSfx{"STRING_CD"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::TimeUnit{"STRING_D"}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::UnderlyingPriceDeterminationMethod{2}, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::UnitOfMeasure{"STRING_t"}, Instrument_35);
      FIX::UnitOfMeasureQty UnitOfMeasureQty_35;
      UnitOfMeasureQty_35.setString("449882");
set_field(noQuoteEntries_0_1_2, UnitOfMeasureQty_35, Instrument_35);
      set_field(noQuoteEntries_0_1_2, FIX::ValuationMethod{"STRING_EQTY"}, Instrument_35);
      all_values.push_back(Instrument_35);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries.");

      // ComplexEvents
      // Group ComplexEvents.NoComplexEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_0;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_71;
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_71);
        FIX::ComplexEventPrice ComplexEventPrice_71;
        ComplexEventPrice_71.setString("21083355");
set_field(noComplexEvents_0_2_2_0, ComplexEventPrice_71, ComplexEvents_NoComplexEvents_71);
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_71);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_71;
        ComplexEventPriceBoundaryPrecision_71.setString("59.360000");
set_field(noComplexEvents_0_2_2_0, ComplexEventPriceBoundaryPrecision_71, ComplexEvents_NoComplexEvents_71);
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_71);
        set_field(noComplexEvents_0_2_2_0, FIX::ComplexEventType{1}, ComplexEvents_NoComplexEvents_71);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_71;
        ComplexOptPayoutAmount_71.setString("18480485");
set_field(noComplexEvents_0_2_2_0, ComplexOptPayoutAmount_71, ComplexEvents_NoComplexEvents_71);
        all_values.push_back(ComplexEvents_NoComplexEvents_71);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_145;
          set_field(noComplexEventDates_0_2_0_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(17, 38, 7, 17, 1, 2016)}, ComplexEventDates_NoComplexEventDates_145);
          set_field(noComplexEventDates_0_2_0_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(16, 26, 39, 20, 12, 2010)}, ComplexEventDates_NoComplexEventDates_145);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_145);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_294;
            set_field(noComplexEventTimes_0_2_0_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(6, 43, 1)}, ComplexEventTimes_NoComplexEventTimes_294);
            set_field(noComplexEventTimes_0_2_0_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(7, 36, 0)}, ComplexEventTimes_NoComplexEventTimes_294);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_294);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_295;
            set_field(noComplexEventTimes_0_2_0_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(19, 42, 28)}, ComplexEventTimes_NoComplexEventTimes_295);
            set_field(noComplexEventTimes_0_2_0_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 10, 3)}, ComplexEventTimes_NoComplexEventTimes_295);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_295);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_0.addGroup(noComplexEventTimes_0_2_0_0_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_1;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_146;
          set_field(noComplexEventDates_0_2_0_3_1, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(4, 41, 55, 5, 10, 2011)}, ComplexEventDates_NoComplexEventDates_146);
          set_field(noComplexEventDates_0_2_0_3_1, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(17, 49, 21, 9, 6, 2011)}, ComplexEventDates_NoComplexEventDates_146);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_146);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_296;
            set_field(noComplexEventTimes_0_2_0_1_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(5, 45, 43)}, ComplexEventTimes_NoComplexEventTimes_296);
            set_field(noComplexEventTimes_0_2_0_1_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(4, 11, 16)}, ComplexEventTimes_NoComplexEventTimes_296);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_296);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_1_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_297;
            set_field(noComplexEventTimes_0_2_0_1_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(22, 58, 4)}, ComplexEventTimes_NoComplexEventTimes_297);
            set_field(noComplexEventTimes_0_2_0_1_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(14, 7, 57)}, ComplexEventTimes_NoComplexEventTimes_297);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_297);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_1.addGroup(noComplexEventTimes_0_2_0_1_4_1);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_0_3_2;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_147;
          set_field(noComplexEventDates_0_2_0_3_2, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(11, 30, 49, 20, 5, 2000)}, ComplexEventDates_NoComplexEventDates_147);
          set_field(noComplexEventDates_0_2_0_3_2, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(1, 53, 51, 19, 3, 2008)}, ComplexEventDates_NoComplexEventDates_147);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_147);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_0_2_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_298;
            set_field(noComplexEventTimes_0_2_0_2_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(23, 33, 19)}, ComplexEventTimes_NoComplexEventTimes_298);
            set_field(noComplexEventTimes_0_2_0_2_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(17, 22, 46)}, ComplexEventTimes_NoComplexEventTimes_298);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_298);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_0_3_2.addGroup(noComplexEventTimes_0_2_0_2_4_0);
          }
          noComplexEvents_0_2_2_0.addGroup(noComplexEventDates_0_2_0_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_1;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_72;
        set_field(noComplexEvents_0_2_2_1, FIX::ComplexEventCondition{2}, ComplexEvents_NoComplexEvents_72);
        FIX::ComplexEventPrice ComplexEventPrice_72;
        ComplexEventPrice_72.setString("7995358");
set_field(noComplexEvents_0_2_2_1, ComplexEventPrice_72, ComplexEvents_NoComplexEvents_72);
        set_field(noComplexEvents_0_2_2_1, FIX::ComplexEventPriceBoundaryMethod{2}, ComplexEvents_NoComplexEvents_72);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_72;
        ComplexEventPriceBoundaryPrecision_72.setString("64.380000");
set_field(noComplexEvents_0_2_2_1, ComplexEventPriceBoundaryPrecision_72, ComplexEvents_NoComplexEvents_72);
        set_field(noComplexEvents_0_2_2_1, FIX::ComplexEventPriceTimeType{3}, ComplexEvents_NoComplexEvents_72);
        set_field(noComplexEvents_0_2_2_1, FIX::ComplexEventType{6}, ComplexEvents_NoComplexEvents_72);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_72;
        ComplexOptPayoutAmount_72.setString("9645255");
set_field(noComplexEvents_0_2_2_1, ComplexOptPayoutAmount_72, ComplexEvents_NoComplexEvents_72);
        all_values.push_back(ComplexEvents_NoComplexEvents_72);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_1_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_148;
          set_field(noComplexEventDates_0_2_1_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(8, 22, 33, 24, 3, 2013)}, ComplexEventDates_NoComplexEventDates_148);
          set_field(noComplexEventDates_0_2_1_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(15, 23, 1, 2, 2, 2015)}, ComplexEventDates_NoComplexEventDates_148);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_148);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_299;
            set_field(noComplexEventTimes_0_2_1_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(18, 52, 20)}, ComplexEventTimes_NoComplexEventTimes_299);
            set_field(noComplexEventTimes_0_2_1_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(2, 35, 11)}, ComplexEventTimes_NoComplexEventTimes_299);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_299);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_0.addGroup(noComplexEventTimes_0_2_1_0_4_0);
          }
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_1_0_4_1;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_300;
            set_field(noComplexEventTimes_0_2_1_0_4_1, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(20, 47, 53)}, ComplexEventTimes_NoComplexEventTimes_300);
            set_field(noComplexEventTimes_0_2_1_0_4_1, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(18, 50, 30)}, ComplexEventTimes_NoComplexEventTimes_300);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_300);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_1_3_0.addGroup(noComplexEventTimes_0_2_1_0_4_1);
          }
          noComplexEvents_0_2_2_1.addGroup(noComplexEventDates_0_2_1_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_1);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents noComplexEvents_0_2_2_2;
        // ComplexEvents.NoComplexEvents
        multiset<string> ComplexEvents_NoComplexEvents_73;
        set_field(noComplexEvents_0_2_2_2, FIX::ComplexEventCondition{1}, ComplexEvents_NoComplexEvents_73);
        FIX::ComplexEventPrice ComplexEventPrice_73;
        ComplexEventPrice_73.setString("8924309");
set_field(noComplexEvents_0_2_2_2, ComplexEventPrice_73, ComplexEvents_NoComplexEvents_73);
        set_field(noComplexEvents_0_2_2_2, FIX::ComplexEventPriceBoundaryMethod{3}, ComplexEvents_NoComplexEvents_73);
        FIX::ComplexEventPriceBoundaryPrecision ComplexEventPriceBoundaryPrecision_73;
        ComplexEventPriceBoundaryPrecision_73.setString("24.320000");
set_field(noComplexEvents_0_2_2_2, ComplexEventPriceBoundaryPrecision_73, ComplexEvents_NoComplexEvents_73);
        set_field(noComplexEvents_0_2_2_2, FIX::ComplexEventPriceTimeType{1}, ComplexEvents_NoComplexEvents_73);
        set_field(noComplexEvents_0_2_2_2, FIX::ComplexEventType{4}, ComplexEvents_NoComplexEvents_73);
        FIX::ComplexOptPayoutAmount ComplexOptPayoutAmount_73;
        ComplexOptPayoutAmount_73.setString("17102765");
set_field(noComplexEvents_0_2_2_2, ComplexOptPayoutAmount_73, ComplexEvents_NoComplexEvents_73);
        all_values.push_back(ComplexEvents_NoComplexEvents_73);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents");

        // ComplexEventDates
        // Group ComplexEventDates.NoComplexEventDates
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates noComplexEventDates_0_2_2_3_0;
          // ComplexEventDates.NoComplexEventDates
          multiset<string> ComplexEventDates_NoComplexEventDates_149;
          set_field(noComplexEventDates_0_2_2_3_0, FIX::ComplexEventEndDate{FIX::UTCTIMESTAMP(0, 17, 44, 22, 1, 2007)}, ComplexEventDates_NoComplexEventDates_149);
          set_field(noComplexEventDates_0_2_2_3_0, FIX::ComplexEventStartDate{FIX::UTCTIMESTAMP(6, 39, 56, 15, 6, 2013)}, ComplexEventDates_NoComplexEventDates_149);
          all_values.push_back(ComplexEventDates_NoComplexEventDates_149);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates");

          // ComplexEventTimes
          // Group ComplexEventTimes.NoComplexEventTimes
          {
            FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoComplexEvents::NoComplexEventDates::NoComplexEventTimes noComplexEventTimes_0_2_2_0_4_0;
            // ComplexEventTimes.NoComplexEventTimes
            multiset<string> ComplexEventTimes_NoComplexEventTimes_301;
            set_field(noComplexEventTimes_0_2_2_0_4_0, FIX::ComplexEventEndTime{FIX::UTCTIMEONLY(3, 57, 22)}, ComplexEventTimes_NoComplexEventTimes_301);
            set_field(noComplexEventTimes_0_2_2_0_4_0, FIX::ComplexEventStartTime{FIX::UTCTIMEONLY(3, 13, 23)}, ComplexEventTimes_NoComplexEventTimes_301);
            all_values.push_back(ComplexEventTimes_NoComplexEventTimes_301);
            all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoComplexEvents...NoComplexEventDates...NoComplexEventTimes");

            noComplexEventDates_0_2_2_3_0.addGroup(noComplexEventTimes_0_2_2_0_4_0);
          }
          noComplexEvents_0_2_2_2.addGroup(noComplexEventDates_0_2_2_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noComplexEvents_0_2_2_2);
      }
      // EvntGrp
      // Group EvntGrp.NoEvents
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_0;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_73;
        set_field(noEvents_0_2_2_0, FIX::EventDate{"LOCALMKTDATE_1242699587"}, EvntGrp_NoEvents_73);
        FIX::EventPx EventPx_73;
        EventPx_73.setString("1128478");
set_field(noEvents_0_2_2_0, EventPx_73, EvntGrp_NoEvents_73);
        set_field(noEvents_0_2_2_0, FIX::EventText{"STRING_2084259966"}, EvntGrp_NoEvents_73);
        set_field(noEvents_0_2_2_0, FIX::EventTime{FIX::UTCTIMESTAMP(5, 7, 10, 19, 9, 2010)}, EvntGrp_NoEvents_73);
        set_field(noEvents_0_2_2_0, FIX::EventType{99}, EvntGrp_NoEvents_73);
        all_values.push_back(EvntGrp_NoEvents_73);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoEvents noEvents_0_2_2_1;
        // EvntGrp.NoEvents
        multiset<string> EvntGrp_NoEvents_74;
        set_field(noEvents_0_2_2_1, FIX::EventDate{"LOCALMKTDATE_1720177454"}, EvntGrp_NoEvents_74);
        FIX::EventPx EventPx_74;
        EventPx_74.setString("20434413");
set_field(noEvents_0_2_2_1, EventPx_74, EvntGrp_NoEvents_74);
        set_field(noEvents_0_2_2_1, FIX::EventText{"STRING_1912541594"}, EvntGrp_NoEvents_74);
        set_field(noEvents_0_2_2_1, FIX::EventTime{FIX::UTCTIMESTAMP(3, 53, 45, 6, 4, 2016)}, EvntGrp_NoEvents_74);
        set_field(noEvents_0_2_2_1, FIX::EventType{9}, EvntGrp_NoEvents_74);
        all_values.push_back(EvntGrp_NoEvents_74);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoEvents");

        noQuoteEntries_0_1_2.addGroup(noEvents_0_2_2_1);
      }
      // InstrumentParties
      // Group InstrumentParties.NoInstrumentParties
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_0;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_66;
        set_field(noInstrumentParties_0_2_2_0, FIX::InstrumentPartyID{"STRING_1001907023"}, InstrumentParties_NoInstrumentParties_66);
        set_field(noInstrumentParties_0_2_2_0, FIX::InstrumentPartyIDSource{'2'}, InstrumentParties_NoInstrumentParties_66);
        set_field(noInstrumentParties_0_2_2_0, FIX::InstrumentPartyRole{1630572926}, InstrumentParties_NoInstrumentParties_66);
        all_values.push_back(InstrumentParties_NoInstrumentParties_66);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_0_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134;
          set_field(noInstrumentPartySubIDs_0_2_0_3_0, FIX::InstrumentPartySubID{"STRING_1815409945"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);
          set_field(noInstrumentPartySubIDs_0_2_0_3_0, FIX::InstrumentPartySubIDType{1980841539}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_134);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_0.addGroup(noInstrumentPartySubIDs_0_2_0_3_0);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_0);
      }
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties noInstrumentParties_0_2_2_1;
        // InstrumentParties.NoInstrumentParties
        multiset<string> InstrumentParties_NoInstrumentParties_67;
        set_field(noInstrumentParties_0_2_2_1, FIX::InstrumentPartyID{"STRING_277958664"}, InstrumentParties_NoInstrumentParties_67);
        set_field(noInstrumentParties_0_2_2_1, FIX::InstrumentPartyIDSource{'1'}, InstrumentParties_NoInstrumentParties_67);
        set_field(noInstrumentParties_0_2_2_1, FIX::InstrumentPartyRole{1076057479}, InstrumentParties_NoInstrumentParties_67);
        all_values.push_back(InstrumentParties_NoInstrumentParties_67);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties");

        // InstrumentPtysSubGrp
        // Group InstrumentPtysSubGrp.NoInstrumentPartySubIDs
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_1_3_0;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135;
          set_field(noInstrumentPartySubIDs_0_2_1_3_0, FIX::InstrumentPartySubID{"STRING_1514990149"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);
          set_field(noInstrumentPartySubIDs_0_2_1_3_0, FIX::InstrumentPartySubIDType{229446725}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_135);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_1.addGroup(noInstrumentPartySubIDs_0_2_1_3_0);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_1_3_1;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136;
          set_field(noInstrumentPartySubIDs_0_2_1_3_1, FIX::InstrumentPartySubID{"STRING_479264761"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);
          set_field(noInstrumentPartySubIDs_0_2_1_3_1, FIX::InstrumentPartySubIDType{1014559368}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_136);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_1.addGroup(noInstrumentPartySubIDs_0_2_1_3_1);
        }
        {
          FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoInstrumentParties::NoInstrumentPartySubIDs noInstrumentPartySubIDs_0_2_1_3_2;
          // InstrumentPtysSubGrp.NoInstrumentPartySubIDs
          multiset<string> InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137;
          set_field(noInstrumentPartySubIDs_0_2_1_3_2, FIX::InstrumentPartySubID{"STRING_1490642955"}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);
          set_field(noInstrumentPartySubIDs_0_2_1_3_2, FIX::InstrumentPartySubIDType{365963856}, InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);
          all_values.push_back(InstrumentPtysSubGrp_NoInstrumentPartySubIDs_137);
          all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoInstrumentParties...NoInstrumentPartySubIDs");

          noInstrumentParties_0_2_2_1.addGroup(noInstrumentPartySubIDs_0_2_1_3_2);
        }
        noQuoteEntries_0_1_2.addGroup(noInstrumentParties_0_2_2_1);
      }
      // SecAltIDGrp
      // Group SecAltIDGrp.NoSecurityAltID
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoQuoteEntries::NoSecurityAltID noSecurityAltID_0_2_2_0;
        // SecAltIDGrp.NoSecurityAltID
        multiset<string> SecAltIDGrp_NoSecurityAltID_73;
        set_field(noSecurityAltID_0_2_2_0, FIX::SecurityAltID{"STRING_1168290755"}, SecAltIDGrp_NoSecurityAltID_73);
        set_field(noSecurityAltID_0_2_2_0, FIX::SecurityAltIDSource{"STRING_2069342635"}, SecAltIDGrp_NoSecurityAltID_73);
        all_values.push_back(SecAltIDGrp_NoSecurityAltID_73);
        all_compo_names.insert("...NoQuoteSets...NoQuoteEntries....NoSecurityAltID");

        noQuoteEntries_0_1_2.addGroup(noSecurityAltID_0_2_2_0);
      }
      // SecurityXML
      multiset<string> SecurityXML_70;
      set_field(noQuoteEntries_0_1_2, FIX::SecurityXML{"XMLDATA_450476178"}, SecurityXML_70);
      set_field(noQuoteEntries_0_1_2, FIX::SecurityXMLLen{1064248424}, SecurityXML_70);
      set_field(noQuoteEntries_0_1_2, FIX::SecurityXMLSchema{"STRING_1834400581"}, SecurityXML_70);
      all_values.push_back(SecurityXML_70);
      all_compo_names.insert("...NoQuoteSets...NoQuoteEntries..");

      noQuoteSets_0_0.addGroup(noQuoteEntries_0_1_2);
    }
    // UnderlyingInstrument
    multiset<string> UnderlyingInstrument_60;
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingIssuer{"DATA_658616348"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingIssuerLen{1887595835}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingSecurityDesc{"DATA_1728445487"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::EncodedUnderlyingSecurityDescLen{1442181713}, UnderlyingInstrument_60);
    FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_60;
    UnderlyingAdjustedQuantity_60.setString("17220158");
set_field(noQuoteSets_0_0, UnderlyingAdjustedQuantity_60, UnderlyingInstrument_60);
    FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_60;
    UnderlyingAllocationPercent_60.setString("56.260000");
set_field(noQuoteSets_0_0, UnderlyingAllocationPercent_60, UnderlyingInstrument_60);
    FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_60;
    UnderlyingAttachmentPoint_60.setString("83.020000");
set_field(noQuoteSets_0_0, UnderlyingAttachmentPoint_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCFICode{"STRING_1336543765"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCPProgram{"STRING_1490994490"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCPRegType{"STRING_1794075325"}, UnderlyingInstrument_60);
    FIX::UnderlyingCapValue UnderlyingCapValue_60;
    UnderlyingCapValue_60.setString("16168443");
set_field(noQuoteSets_0_0, UnderlyingCapValue_60, UnderlyingInstrument_60);
    FIX::UnderlyingCashAmount UnderlyingCashAmount_60;
    UnderlyingCashAmount_60.setString("9740837");
set_field(noQuoteSets_0_0, UnderlyingCashAmount_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCashType{"STRING_FIXED"}, UnderlyingInstrument_60);
    FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_60;
    UnderlyingContractMultiplier_60.setString("12847706");
set_field(noQuoteSets_0_0, UnderlyingContractMultiplier_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingContractMultiplierUnit{807441660}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCountryOfIssue{"COUNTRY_489754311"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_715500802"}, UnderlyingInstrument_60);
    FIX::UnderlyingCouponRate UnderlyingCouponRate_60;
    UnderlyingCouponRate_60.setString("91.390000");
set_field(noQuoteSets_0_0, UnderlyingCouponRate_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCreditRating{"STRING_880560803"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingCurrency{"USD"}, UnderlyingInstrument_60);
    FIX::UnderlyingCurrentValue UnderlyingCurrentValue_60;
    UnderlyingCurrentValue_60.setString("13598255");
set_field(noQuoteSets_0_0, UnderlyingCurrentValue_60, UnderlyingInstrument_60);
    FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_60;
    UnderlyingDetachmentPoint_60.setString("66.720000");
set_field(noQuoteSets_0_0, UnderlyingDetachmentPoint_60, UnderlyingInstrument_60);
    FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_60;
    UnderlyingDirtyPrice_60.setString("14561051");
set_field(noQuoteSets_0_0, UnderlyingDirtyPrice_60, UnderlyingInstrument_60);
    FIX::UnderlyingEndPrice UnderlyingEndPrice_60;
    UnderlyingEndPrice_60.setString("17257894");
set_field(noQuoteSets_0_0, UnderlyingEndPrice_60, UnderlyingInstrument_60);
    FIX::UnderlyingEndValue UnderlyingEndValue_60;
    UnderlyingEndValue_60.setString("19753490");
set_field(noQuoteSets_0_0, UnderlyingEndValue_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingExerciseStyle{476912279}, UnderlyingInstrument_60);
    FIX::UnderlyingFXRate UnderlyingFXRate_60;
    UnderlyingFXRate_60.setString("16476484");
set_field(noQuoteSets_0_0, UnderlyingFXRate_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingFXRateCalc{'M'}, UnderlyingInstrument_60);
    FIX::UnderlyingFactor UnderlyingFactor_60;
    UnderlyingFactor_60.setString("15411607");
set_field(noQuoteSets_0_0, UnderlyingFactor_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingFlowScheduleType{1334565342}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingInstrRegistry{"STRING_936957923"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingIssueDate{"LOCALMKTDATE_1281272890"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingIssuer{"STRING_915527181"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingLocaleOfIssue{"STRING_231655988"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_855805107"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_960162807"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingMaturityTime{"TZTIMEONLY_1023824290"}, UnderlyingInstrument_60);
    FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_60;
    UnderlyingNotionalPercentageOutstanding_60.setString("52.240000");
set_field(noQuoteSets_0_0, UnderlyingNotionalPercentageOutstanding_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingOptAttribute{'3'}, UnderlyingInstrument_60);
    FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_60;
    UnderlyingOriginalNotionalPercentageOutstanding_60.setString("59.680000");
set_field(noQuoteSets_0_0, UnderlyingOriginalNotionalPercentageOutstanding_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1661709546"}, UnderlyingInstrument_60);
    FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_60;
    UnderlyingPriceUnitOfMeasureQty_60.setString("12777574");
set_field(noQuoteSets_0_0, UnderlyingPriceUnitOfMeasureQty_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingProduct{882211614}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingPutOrCall{798996518}, UnderlyingInstrument_60);
    FIX::UnderlyingPx UnderlyingPx_60;
    UnderlyingPx_60.setString("20851990");
set_field(noQuoteSets_0_0, UnderlyingPx_60, UnderlyingInstrument_60);
    FIX::UnderlyingQty UnderlyingQty_60;
    UnderlyingQty_60.setString("13719659");
set_field(noQuoteSets_0_0, UnderlyingQty_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_1514497320"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1821214568"}, UnderlyingInstrument_60);
    FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_60;
    UnderlyingRepurchaseRate_60.setString("30.800000");
set_field(noQuoteSets_0_0, UnderlyingRepurchaseRate_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRepurchaseTerm{1597504624}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingRestructuringType{"STRING_1786676784"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityDesc{"STRING_1464868645"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityExchange{"EXCHANGE_547587648"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityID{"STRING_1095298308"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityIDSource{"STRING_1043174418"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecuritySubType{"STRING_375453044"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSecurityType{"STRING_1572210587"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSeniority{"STRING_543339178"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSettlMethod{"STRING_653794619"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_60);
    FIX::UnderlyingStartValue UnderlyingStartValue_60;
    UnderlyingStartValue_60.setString("18779045");
set_field(noQuoteSets_0_0, UnderlyingStartValue_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_1590752542"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingStrikeCurrency{"CAN"}, UnderlyingInstrument_60);
    FIX::UnderlyingStrikePrice UnderlyingStrikePrice_60;
    UnderlyingStrikePrice_60.setString("18224085");
set_field(noQuoteSets_0_0, UnderlyingStrikePrice_60, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSymbol{"STRING_955481991"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingSymbolSfx{"STRING_1606110860"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingTimeUnit{"STRING_698749173"}, UnderlyingInstrument_60);
    set_field(noQuoteSets_0_0, FIX::UnderlyingUnitOfMeasure{"STRING_1000347215"}, UnderlyingInstrument_60);
    FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_60;
    UnderlyingUnitOfMeasureQty_60.setString("19097845");
set_field(noQuoteSets_0_0, UnderlyingUnitOfMeasureQty_60, UnderlyingInstrument_60);
    all_values.push_back(UnderlyingInstrument_60);
    all_compo_names.insert("...NoQuoteSets.");

    // UndSecAltIDGrp
    // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_0;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_127;
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltID{"STRING_514573113"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);
      set_field(noUnderlyingSecurityAltID_0_1_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1040058279"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_127);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1_1;
      // UndSecAltIDGrp.NoUnderlyingSecurityAltID
      multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_128;
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltID{"STRING_103893108"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);
      set_field(noUnderlyingSecurityAltID_0_1_1, FIX::UnderlyingSecurityAltIDSource{"STRING_1313569631"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);
      all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_128);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingSecurityAltID");

      noQuoteSets_0_0.addGroup(noUnderlyingSecurityAltID_0_1_1);
    }
    // UnderlyingStipulations
    // Group UnderlyingStipulations.NoUnderlyingStips
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_0;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_115;
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipType{"STRING_1475859033"}, UnderlyingStipulations_NoUnderlyingStips_115);
      set_field(noUnderlyingStips_0_1_0, FIX::UnderlyingStipValue{"STRING_680583304"}, UnderlyingStipulations_NoUnderlyingStips_115);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_115);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_0);
    }
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUnderlyingStips noUnderlyingStips_0_1_1;
      // UnderlyingStipulations.NoUnderlyingStips
      multiset<string> UnderlyingStipulations_NoUnderlyingStips_116;
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipType{"STRING_651504629"}, UnderlyingStipulations_NoUnderlyingStips_116);
      set_field(noUnderlyingStips_0_1_1, FIX::UnderlyingStipValue{"STRING_1580902114"}, UnderlyingStipulations_NoUnderlyingStips_116);
      all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_116);
      all_compo_names.insert("...NoQuoteSets....NoUnderlyingStips");

      noQuoteSets_0_0.addGroup(noUnderlyingStips_0_1_1);
    }
    // UndlyInstrumentParties
    // Group UndlyInstrumentParties.NoUndlyInstrumentParties
    {
      FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1_0;
      // UndlyInstrumentParties.NoUndlyInstrumentParties
      multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_130;
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyID{"STRING_290697765"}, UndlyInstrumentParties_NoUndlyInstrumentParties_130);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyIDSource{'8'}, UndlyInstrumentParties_NoUndlyInstrumentParties_130);
      set_field(noUndlyInstrumentParties_0_1_0, FIX::UnderlyingInstrumentPartyRole{678191928}, UndlyInstrumentParties_NoUndlyInstrumentParties_130);
      all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_130);
      all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties");

      // UndlyInstrumentPtysSubGrp
      // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      {
        FIX50SP2::MassQuoteAcknowledgement::NoQuoteSets::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_0_2_0;
        // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
        multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256;
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1941461529"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);
        set_field(noUndlyInstrumentPartySubIDs_0_0_2_0, FIX::UnderlyingInstrumentPartySubIDType{1053644972}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);
        all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_256);
        all_compo_names.insert("...NoQuoteSets....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

        noUndlyInstrumentParties_0_1_0.addGroup(noUndlyInstrumentPartySubIDs_0_0_2_0);
      }
      noQuoteSets_0_0.addGroup(noUndlyInstrumentParties_0_1_0);
    }
    msg.addGroup(noQuoteSets_0_0);
  }
  // TargetParties
  // Group TargetParties.NoTargetPartyIDs
  {
    FIX50SP2::MassQuoteAcknowledgement::NoTargetPartyIDs noTargetPartyIDs_0_0;
    // TargetParties.NoTargetPartyIDs
    multiset<string> TargetParties_NoTargetPartyIDs_0;
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyID{"STRING_337317059"}, TargetParties_NoTargetPartyIDs_0);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyIDSource{'1'}, TargetParties_NoTargetPartyIDs_0);
    set_field(noTargetPartyIDs_0_0, FIX::TargetPartyRole{1776610654}, TargetParties_NoTargetPartyIDs_0);
    all_values.push_back(TargetParties_NoTargetPartyIDs_0);
    all_compo_names.insert("...NoTargetPartyIDs");

    msg.addGroup(noTargetPartyIDs_0_0);
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
