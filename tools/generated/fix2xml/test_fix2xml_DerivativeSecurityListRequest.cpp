#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/DerivativeSecurityListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( DerivativeSecurityListRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::DerivativeSecurityListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListRequest_0;
  set_field(msg, FIX::Currency{"GBP"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_527189795"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::EncodedTextLen{285729439}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1625095657"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_624743076"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::SecurityListRequestType{3}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::SecurityReqID{"STRING_2141265811"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::SecuritySubType{"STRING_905522456"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'0'}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::Text{"STRING_2106248467"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_4"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_5"}, DerivativeSecurityListRequest_0);
  all_values.push_back(DerivativeSecurityListRequest_0);

  all_compo_names.insert("DerivativeSecurityListRequest");

  // DerivativeInstrument
  multiset<string> DerivativeInstrument_1;
  set_field(msg, FIX::DerivFlexProductEligibilityIndicator{false}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeCFICode{"STRING_367497712"}, DerivativeInstrument_1);
  FIX::DerivativeCapPrice DerivativeCapPrice_1;
  DerivativeCapPrice_1.setString("1760112");
set_field(msg, DerivativeCapPrice_1, DerivativeInstrument_1);
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_1;
  DerivativeContractMultiplier_1.setString("17360714");
set_field(msg, DerivativeContractMultiplier_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeContractMultiplierUnit{1976051662}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeContractSettlMonth{"MONTHYEAR_87313962"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeCountryOfIssue{"COUNTRY_426538065"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeEncodedIssuer{"DATA_453952983"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeEncodedIssuerLen{779116449}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeEncodedSecurityDesc{"DATA_654010376"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeEncodedSecurityDescLen{276348892}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeExerciseStyle{'1'}, DerivativeInstrument_1);
  FIX::DerivativeFloorPrice DerivativeFloorPrice_1;
  DerivativeFloorPrice_1.setString("9147460");
set_field(msg, DerivativeFloorPrice_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeFlowScheduleType{213892591}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeInstrRegistry{"STRING_1821108838"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeInstrmtAssignmentMethod{'1'}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeIssueDate{"LOCALMKTDATE_1192624292"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeIssuer{"STRING_2054714107"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeListMethod{505861864}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeLocaleOfIssue{"STRING_1250162230"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeMaturityDate{"LOCALMKTDATE_434420255"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeMaturityMonthYear{"MONTHYEAR_791591304"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeMaturityTime{"TZTIMEONLY_727774240"}, DerivativeInstrument_1);
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_1;
  DerivativeMinPriceIncrement_1.setString("10591633");
set_field(msg, DerivativeMinPriceIncrement_1, DerivativeInstrument_1);
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_1;
  DerivativeMinPriceIncrementAmount_1.setString("900869");
set_field(msg, DerivativeMinPriceIncrementAmount_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeNTPositionLimit{721556403}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeOptAttribute{'1'}, DerivativeInstrument_1);
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_1;
  DerivativeOptPayAmount_1.setString("16041142");
set_field(msg, DerivativeOptPayAmount_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativePositionLimit{680321222}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativePriceQuoteMethod{"STRING_1917599853"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativePriceUnitOfMeasure{"STRING_2044618224"}, DerivativeInstrument_1);
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_1;
  DerivativePriceUnitOfMeasureQty_1.setString("20685431");
set_field(msg, DerivativePriceUnitOfMeasureQty_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeProduct{137613918}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeProductComplex{"STRING_73145784"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativePutOrCall{1657130979}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityDesc{"STRING_2113665580"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityExchange{"EXCHANGE_160459746"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityGroup{"STRING_2083669044"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityID{"STRING_420134915"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityIDSource{"STRING_939576195"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityStatus{"STRING_590195773"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecuritySubType{"STRING_696483807"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityType{"STRING_1977619972"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSettlMethod{'1'}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSettleOnOpenFlag{"STRING_910376399"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeStateOrProvinceOfIssue{"STRING_1651245162"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeStrikeCurrency{"EUR"}, DerivativeInstrument_1);
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_1;
  DerivativeStrikeMultiplier_1.setString("15584756");
set_field(msg, DerivativeStrikeMultiplier_1, DerivativeInstrument_1);
  FIX::DerivativeStrikePrice DerivativeStrikePrice_1;
  DerivativeStrikePrice_1.setString("15913271");
set_field(msg, DerivativeStrikePrice_1, DerivativeInstrument_1);
  FIX::DerivativeStrikeValue DerivativeStrikeValue_1;
  DerivativeStrikeValue_1.setString("12056792");
set_field(msg, DerivativeStrikeValue_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSymbol{"STRING_1992895877"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSymbolSfx{"STRING_235434833"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeTimeUnit{"STRING_1933453513"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeUnitOfMeasure{"STRING_904575560"}, DerivativeInstrument_1);
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_1;
  DerivativeUnitOfMeasureQty_1.setString("3255218");
set_field(msg, DerivativeUnitOfMeasureQty_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeValuationMethod{"STRING_507526269"}, DerivativeInstrument_1);
  all_values.push_back(DerivativeInstrument_1);
  all_compo_names.insert(".");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_2;
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventDate{"LOCALMKTDATE_1929636112"}, DerivativeEventsGrp_NoDerivativeEvents_2);
    FIX::DerivativeEventPx DerivativeEventPx_2;
    DerivativeEventPx_2.setString("11878474");
set_field(noDerivativeEvents_0_0, DerivativeEventPx_2, DerivativeEventsGrp_NoDerivativeEvents_2);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventText{"STRING_491893906"}, DerivativeEventsGrp_NoDerivativeEvents_2);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(3, 4, 33, 22, 1, 2010)}, DerivativeEventsGrp_NoDerivativeEvents_2);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventType{554739746}, DerivativeEventsGrp_NoDerivativeEvents_2);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_2);
    all_compo_names.insert("....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_3;
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventDate{"LOCALMKTDATE_1015824671"}, DerivativeEventsGrp_NoDerivativeEvents_3);
    FIX::DerivativeEventPx DerivativeEventPx_3;
    DerivativeEventPx_3.setString("8524687");
set_field(noDerivativeEvents_0_1, DerivativeEventPx_3, DerivativeEventsGrp_NoDerivativeEvents_3);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventText{"STRING_1144935519"}, DerivativeEventsGrp_NoDerivativeEvents_3);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(19, 57, 30, 6, 7, 2017)}, DerivativeEventsGrp_NoDerivativeEvents_3);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventType{1744842228}, DerivativeEventsGrp_NoDerivativeEvents_3);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_3);
    all_compo_names.insert("....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_4;
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventDate{"LOCALMKTDATE_1031702579"}, DerivativeEventsGrp_NoDerivativeEvents_4);
    FIX::DerivativeEventPx DerivativeEventPx_4;
    DerivativeEventPx_4.setString("16363975");
set_field(noDerivativeEvents_0_2, DerivativeEventPx_4, DerivativeEventsGrp_NoDerivativeEvents_4);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventText{"STRING_1590254457"}, DerivativeEventsGrp_NoDerivativeEvents_4);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(20, 9, 28, 9, 7, 2006)}, DerivativeEventsGrp_NoDerivativeEvents_4);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventType{970257524}, DerivativeEventsGrp_NoDerivativeEvents_4);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_4);
    all_compo_names.insert("....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_2);
  }
  // DerivativeInstrumentParties
  // Group DerivativeInstrumentParties.NoDerivativeInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_0;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_3;
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyID{"STRING_1054098733"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyIDSource{"STRING_2079164543"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyRole{43042152}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);
    all_compo_names.insert("....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5;
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_550235245"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubIDType{638731908}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_4;
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyID{"STRING_719424131"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyIDSource{"STRING_1104974992"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyRole{1654556579}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);
    all_compo_names.insert("....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_102426863"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubIDType{1219381410}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubID{"STRING_107014342"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubIDType{604820601}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1;
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltID{"STRING_293380948"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltIDSource{"STRING_45196003"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_1);
    all_compo_names.insert("....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_2;
  set_field(msg, FIX::DerivativeSecurityXML{"DATA_2125300913"}, DerivativeSecurityXML_2);
  set_field(msg, FIX::DerivativeSecurityXMLLen{2038223176}, DerivativeSecurityXML_2);
  set_field(msg, FIX::DerivativeSecurityXMLSchema{"STRING_1076898582"}, DerivativeSecurityXML_2);
  all_values.push_back(DerivativeSecurityXML_2);
  all_compo_names.insert("..");

  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_28;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_1614214812"}, UnderlyingInstrument_28);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{1480993985}, UnderlyingInstrument_28);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_196552346"}, UnderlyingInstrument_28);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{889098576}, UnderlyingInstrument_28);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_28;
  UnderlyingAdjustedQuantity_28.setString("18283403");
set_field(msg, UnderlyingAdjustedQuantity_28, UnderlyingInstrument_28);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_28;
  UnderlyingAllocationPercent_28.setString("15.740000");
set_field(msg, UnderlyingAllocationPercent_28, UnderlyingInstrument_28);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_28;
  UnderlyingAttachmentPoint_28.setString("86.090000");
set_field(msg, UnderlyingAttachmentPoint_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_749980776"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_1016539618"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1641766133"}, UnderlyingInstrument_28);
  FIX::UnderlyingCapValue UnderlyingCapValue_28;
  UnderlyingCapValue_28.setString("1635151");
set_field(msg, UnderlyingCapValue_28, UnderlyingInstrument_28);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_28;
  UnderlyingCashAmount_28.setString("20706383");
set_field(msg, UnderlyingCashAmount_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_28);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_28;
  UnderlyingContractMultiplier_28.setString("2065572");
set_field(msg, UnderlyingContractMultiplier_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{729686263}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_2123682274"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_845289164"}, UnderlyingInstrument_28);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_28;
  UnderlyingCouponRate_28.setString("3.940000");
set_field(msg, UnderlyingCouponRate_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_1081173618"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingCurrency{"GBP"}, UnderlyingInstrument_28);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_28;
  UnderlyingCurrentValue_28.setString("11836004");
set_field(msg, UnderlyingCurrentValue_28, UnderlyingInstrument_28);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_28;
  UnderlyingDetachmentPoint_28.setString("35.060000");
set_field(msg, UnderlyingDetachmentPoint_28, UnderlyingInstrument_28);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_28;
  UnderlyingDirtyPrice_28.setString("9805339");
set_field(msg, UnderlyingDirtyPrice_28, UnderlyingInstrument_28);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_28;
  UnderlyingEndPrice_28.setString("17884210");
set_field(msg, UnderlyingEndPrice_28, UnderlyingInstrument_28);
  FIX::UnderlyingEndValue UnderlyingEndValue_28;
  UnderlyingEndValue_28.setString("11188424");
set_field(msg, UnderlyingEndValue_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingExerciseStyle{1273914934}, UnderlyingInstrument_28);
  FIX::UnderlyingFXRate UnderlyingFXRate_28;
  UnderlyingFXRate_28.setString("18336170");
set_field(msg, UnderlyingFXRate_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_28);
  FIX::UnderlyingFactor UnderlyingFactor_28;
  UnderlyingFactor_28.setString("11646544");
set_field(msg, UnderlyingFactor_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingFlowScheduleType{763032020}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_563390928"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_498164799"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_959584366"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_1452489504"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_179021506"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_601312292"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_2123998113"}, UnderlyingInstrument_28);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_28;
  UnderlyingNotionalPercentageOutstanding_28.setString("22.820000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_28);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_28;
  UnderlyingOriginalNotionalPercentageOutstanding_28.setString("5.990000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_1092517387"}, UnderlyingInstrument_28);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_28;
  UnderlyingPriceUnitOfMeasureQty_28.setString("15410066");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingProduct{1044243980}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingPutOrCall{1299074643}, UnderlyingInstrument_28);
  FIX::UnderlyingPx UnderlyingPx_28;
  UnderlyingPx_28.setString("1232092");
set_field(msg, UnderlyingPx_28, UnderlyingInstrument_28);
  FIX::UnderlyingQty UnderlyingQty_28;
  UnderlyingQty_28.setString("10204426");
set_field(msg, UnderlyingQty_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_2144363808"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_1572319623"}, UnderlyingInstrument_28);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_28;
  UnderlyingRepurchaseRate_28.setString("62.250000");
set_field(msg, UnderlyingRepurchaseRate_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{349242256}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_298355620"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1137733059"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_1920985762"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_1278889606"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_778670494"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_892344613"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_405320893"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_464803932"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_1989004378"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSettlementType{4}, UnderlyingInstrument_28);
  FIX::UnderlyingStartValue UnderlyingStartValue_28;
  UnderlyingStartValue_28.setString("12278359");
set_field(msg, UnderlyingStartValue_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_404911658"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"JPY"}, UnderlyingInstrument_28);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_28;
  UnderlyingStrikePrice_28.setString("18574011");
set_field(msg, UnderlyingStrikePrice_28, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_99678013"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_641248962"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_1833915628"}, UnderlyingInstrument_28);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1028680295"}, UnderlyingInstrument_28);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_28;
  UnderlyingUnitOfMeasureQty_28.setString("1116172");
set_field(msg, UnderlyingUnitOfMeasureQty_28, UnderlyingInstrument_28);
  all_values.push_back(UnderlyingInstrument_28);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_54;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_2121197682"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_1652623839"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_54);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_50;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_1272788678"}, UnderlyingStipulations_NoUnderlyingStips_50);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_1775833068"}, UnderlyingStipulations_NoUnderlyingStips_50);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_50);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_57;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_1269668838"}, UndlyInstrumentParties_NoUndlyInstrumentParties_57);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_57);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{1176048095}, UndlyInstrumentParties_NoUndlyInstrumentParties_57);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_57);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1499024664"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{166297506}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_110);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1392413208"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{630430622}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_111);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_58;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_944968000"}, UndlyInstrumentParties_NoUndlyInstrumentParties_58);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'1'}, UndlyInstrumentParties_NoUndlyInstrumentParties_58);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{1035751515}, UndlyInstrumentParties_NoUndlyInstrumentParties_58);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_58);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_2126278552"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{458243223}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_112);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113;
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_490124236"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);
      set_field(noUndlyInstrumentPartySubIDs_1_1_1, FIX::UnderlyingInstrumentPartySubIDType{383706562}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_113);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_59;
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyID{"STRING_378899730"}, UndlyInstrumentParties_NoUndlyInstrumentParties_59);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyIDSource{'5'}, UndlyInstrumentParties_NoUndlyInstrumentParties_59);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyRole{93624077}, UndlyInstrumentParties_NoUndlyInstrumentParties_59);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_59);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114;
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_1171309868"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubIDType{1927539706}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_114);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115;
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1507258038"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubIDType{1282927092}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_115);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
  }
  // header
  multiset<string> header_27;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_27);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1480972073"}, header_27);
  set_header_field(msg.getHeader(), FIX::BodyLength{788067283}, header_27);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1286241549"}, header_27);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_606277103"}, header_27);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_416416704"}, header_27);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_360673419"}, header_27);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1875945941}, header_27);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_27);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1536721514}, header_27);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1347373387"}, header_27);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_968626764"}, header_27);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1703019020"}, header_27);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(2, 52, 41, 10, 9, 2007)}, header_27);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_27);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_27);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1092078588"}, header_27);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1324468207}, header_27);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_782976798"}, header_27);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1185702665"}, header_27);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1803045950"}, header_27);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(19, 0, 30, 1, 10, 2008)}, header_27);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1189285262"}, header_27);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1102585868"}, header_27);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_146730450"}, header_27);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1549958681"}, header_27);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{831048161}, header_27);
  all_values.push_back(header_27);
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
