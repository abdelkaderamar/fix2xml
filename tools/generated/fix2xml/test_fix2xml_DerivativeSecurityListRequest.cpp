#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::DerivativeSecurityListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> DerivativeSecurityListRequest_0;
  set_field(msg, FIX::Currency{"GBP"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_2044788331"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::EncodedTextLen{491886941}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1514477461"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_2129092037"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::SecurityListRequestType{4}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::SecurityReqID{"STRING_1968188210"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::SecuritySubType{"STRING_675304639"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::SubscriptionRequestType{'2'}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::Text{"STRING_1605543776"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::TradingSessionID{"STRING_2"}, DerivativeSecurityListRequest_0);
  set_field(msg, FIX::TradingSessionSubID{"STRING_6"}, DerivativeSecurityListRequest_0);
  all_values.push_back(DerivativeSecurityListRequest_0);

  all_compo_names.insert("DerivativeSecurityListRequest");

  // DerivativeInstrument
  multiset<string> DerivativeInstrument_1;
  set_field(msg, FIX::DerivFlexProductEligibilityIndicator{true}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeCFICode{"STRING_994705813"}, DerivativeInstrument_1);
  FIX::DerivativeCapPrice DerivativeCapPrice_1;
  DerivativeCapPrice_1.setString("1937437");
set_field(msg, DerivativeCapPrice_1, DerivativeInstrument_1);
  FIX::DerivativeContractMultiplier DerivativeContractMultiplier_1;
  DerivativeContractMultiplier_1.setString("6135380");
set_field(msg, DerivativeContractMultiplier_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeContractMultiplierUnit{1950929074}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeContractSettlMonth{"MONTHYEAR_973951380"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeCountryOfIssue{"COUNTRY_1015388190"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeEncodedIssuer{"DATA_1216856376"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeEncodedIssuerLen{1099457639}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeEncodedSecurityDesc{"DATA_1147040978"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeEncodedSecurityDescLen{1832386923}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeExerciseStyle{'6'}, DerivativeInstrument_1);
  FIX::DerivativeFloorPrice DerivativeFloorPrice_1;
  DerivativeFloorPrice_1.setString("7778065");
set_field(msg, DerivativeFloorPrice_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeFlowScheduleType{916901403}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeInstrRegistry{"STRING_109224445"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeInstrmtAssignmentMethod{'1'}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeIssueDate{"LOCALMKTDATE_180546194"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeIssuer{"STRING_951552588"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeListMethod{1373350068}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeLocaleOfIssue{"STRING_1759988453"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeMaturityDate{"LOCALMKTDATE_848857272"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeMaturityMonthYear{"MONTHYEAR_1865237009"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeMaturityTime{"TZTIMEONLY_1126982266"}, DerivativeInstrument_1);
  FIX::DerivativeMinPriceIncrement DerivativeMinPriceIncrement_1;
  DerivativeMinPriceIncrement_1.setString("8304656");
set_field(msg, DerivativeMinPriceIncrement_1, DerivativeInstrument_1);
  FIX::DerivativeMinPriceIncrementAmount DerivativeMinPriceIncrementAmount_1;
  DerivativeMinPriceIncrementAmount_1.setString("6923200");
set_field(msg, DerivativeMinPriceIncrementAmount_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeNTPositionLimit{947686828}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeOptAttribute{'1'}, DerivativeInstrument_1);
  FIX::DerivativeOptPayAmount DerivativeOptPayAmount_1;
  DerivativeOptPayAmount_1.setString("10220293");
set_field(msg, DerivativeOptPayAmount_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativePositionLimit{405746956}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativePriceQuoteMethod{"STRING_347705008"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativePriceUnitOfMeasure{"STRING_1274196491"}, DerivativeInstrument_1);
  FIX::DerivativePriceUnitOfMeasureQty DerivativePriceUnitOfMeasureQty_1;
  DerivativePriceUnitOfMeasureQty_1.setString("4973419");
set_field(msg, DerivativePriceUnitOfMeasureQty_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeProduct{1342410821}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeProductComplex{"STRING_1467940237"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativePutOrCall{1110880018}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityDesc{"STRING_1145856247"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityExchange{"EXCHANGE_294407969"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityGroup{"STRING_2126268209"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityID{"STRING_215228975"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityIDSource{"STRING_1393865608"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityStatus{"STRING_1125825539"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecuritySubType{"STRING_2047615899"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSecurityType{"STRING_2028941660"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSettlMethod{'1'}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSettleOnOpenFlag{"STRING_817033654"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeStateOrProvinceOfIssue{"STRING_2138166106"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeStrikeCurrency{"USD"}, DerivativeInstrument_1);
  FIX::DerivativeStrikeMultiplier DerivativeStrikeMultiplier_1;
  DerivativeStrikeMultiplier_1.setString("9422350");
set_field(msg, DerivativeStrikeMultiplier_1, DerivativeInstrument_1);
  FIX::DerivativeStrikePrice DerivativeStrikePrice_1;
  DerivativeStrikePrice_1.setString("5819537");
set_field(msg, DerivativeStrikePrice_1, DerivativeInstrument_1);
  FIX::DerivativeStrikeValue DerivativeStrikeValue_1;
  DerivativeStrikeValue_1.setString("6100846");
set_field(msg, DerivativeStrikeValue_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSymbol{"STRING_1791092318"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeSymbolSfx{"STRING_299707085"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeTimeUnit{"STRING_1737066919"}, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeUnitOfMeasure{"STRING_474074332"}, DerivativeInstrument_1);
  FIX::DerivativeUnitOfMeasureQty DerivativeUnitOfMeasureQty_1;
  DerivativeUnitOfMeasureQty_1.setString("9920271");
set_field(msg, DerivativeUnitOfMeasureQty_1, DerivativeInstrument_1);
  set_field(msg, FIX::DerivativeValuationMethod{"STRING_537270099"}, DerivativeInstrument_1);
  all_values.push_back(DerivativeInstrument_1);
  all_compo_names.insert(".");

  // DerivativeEventsGrp
  // Group DerivativeEventsGrp.NoDerivativeEvents
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_0;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_2;
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventDate{"LOCALMKTDATE_2014056499"}, DerivativeEventsGrp_NoDerivativeEvents_2);
    FIX::DerivativeEventPx DerivativeEventPx_2;
    DerivativeEventPx_2.setString("9430170");
set_field(noDerivativeEvents_0_0, DerivativeEventPx_2, DerivativeEventsGrp_NoDerivativeEvents_2);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventText{"STRING_180065992"}, DerivativeEventsGrp_NoDerivativeEvents_2);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(12, 33, 52, 14, 10, 2003)}, DerivativeEventsGrp_NoDerivativeEvents_2);
    set_field(noDerivativeEvents_0_0, FIX::DerivativeEventType{382539983}, DerivativeEventsGrp_NoDerivativeEvents_2);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_2);
    all_compo_names.insert("....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_1;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_3;
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventDate{"LOCALMKTDATE_736078388"}, DerivativeEventsGrp_NoDerivativeEvents_3);
    FIX::DerivativeEventPx DerivativeEventPx_3;
    DerivativeEventPx_3.setString("20158");
set_field(noDerivativeEvents_0_1, DerivativeEventPx_3, DerivativeEventsGrp_NoDerivativeEvents_3);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventText{"STRING_1508365522"}, DerivativeEventsGrp_NoDerivativeEvents_3);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(2, 31, 13, 24, 3, 2012)}, DerivativeEventsGrp_NoDerivativeEvents_3);
    set_field(noDerivativeEvents_0_1, FIX::DerivativeEventType{816391379}, DerivativeEventsGrp_NoDerivativeEvents_3);
    all_values.push_back(DerivativeEventsGrp_NoDerivativeEvents_3);
    all_compo_names.insert("....NoDerivativeEvents");

    msg.addGroup(noDerivativeEvents_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeEvents noDerivativeEvents_0_2;
    // DerivativeEventsGrp.NoDerivativeEvents
    multiset<string> DerivativeEventsGrp_NoDerivativeEvents_4;
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventDate{"LOCALMKTDATE_1055071330"}, DerivativeEventsGrp_NoDerivativeEvents_4);
    FIX::DerivativeEventPx DerivativeEventPx_4;
    DerivativeEventPx_4.setString("9134251");
set_field(noDerivativeEvents_0_2, DerivativeEventPx_4, DerivativeEventsGrp_NoDerivativeEvents_4);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventText{"STRING_460000049"}, DerivativeEventsGrp_NoDerivativeEvents_4);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventTime{FIX::UTCTIMESTAMP(3, 21, 13, 6, 11, 2007)}, DerivativeEventsGrp_NoDerivativeEvents_4);
    set_field(noDerivativeEvents_0_2, FIX::DerivativeEventType{1983295574}, DerivativeEventsGrp_NoDerivativeEvents_4);
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
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyID{"STRING_1206664128"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyIDSource{"STRING_1276170978"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);
    set_field(noDerivativeInstrumentParties_0_0, FIX::DerivativeInstrumentPartyRole{321494524}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_3);
    all_compo_names.insert("....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4;
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_1679926400"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);
      set_field(noDerivativeInstrumentPartySubIDs_0_1_0, FIX::DerivativeInstrumentPartySubIDType{842343937}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_4);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_0_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5;
      set_field(noDerivativeInstrumentPartySubIDs_0_1_1, FIX::DerivativeInstrumentPartySubID{"STRING_276040313"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);
      set_field(noDerivativeInstrumentPartySubIDs_0_1_1, FIX::DerivativeInstrumentPartySubIDType{2062466384}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_5);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_0.addGroup(noDerivativeInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_1;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_4;
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyID{"STRING_1578422325"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyIDSource{"STRING_278056175"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);
    set_field(noDerivativeInstrumentParties_0_1, FIX::DerivativeInstrumentPartyRole{1423348258}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_4);
    all_compo_names.insert("....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_161530050"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_0, FIX::DerivativeInstrumentPartySubIDType{540378561}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_6);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubID{"STRING_1520393610"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_1, FIX::DerivativeInstrumentPartySubIDType{35686382}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_7);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_1);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_1_1_2;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8;
      set_field(noDerivativeInstrumentPartySubIDs_1_1_2, FIX::DerivativeInstrumentPartySubID{"STRING_1013496168"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);
      set_field(noDerivativeInstrumentPartySubIDs_1_1_2, FIX::DerivativeInstrumentPartySubIDType{1823734104}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_8);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_1.addGroup(noDerivativeInstrumentPartySubIDs_1_1_2);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties noDerivativeInstrumentParties_0_2;
    // DerivativeInstrumentParties.NoDerivativeInstrumentParties
    multiset<string> DerivativeInstrumentParties_NoDerivativeInstrumentParties_5;
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyID{"STRING_852077761"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyIDSource{"STRING_2068567498"}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);
    set_field(noDerivativeInstrumentParties_0_2, FIX::DerivativeInstrumentPartyRole{589675604}, DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);
    all_values.push_back(DerivativeInstrumentParties_NoDerivativeInstrumentParties_5);
    all_compo_names.insert("....NoDerivativeInstrumentParties");

    // DerivativeInstrumentPartySubIDsGrp
    // Group DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_0;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9;
      set_field(noDerivativeInstrumentPartySubIDs_2_1_0, FIX::DerivativeInstrumentPartySubID{"STRING_1275862265"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);
      set_field(noDerivativeInstrumentPartySubIDs_2_1_0, FIX::DerivativeInstrumentPartySubIDType{1092684023}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_9);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoDerivativeInstrumentParties::NoDerivativeInstrumentPartySubIDs noDerivativeInstrumentPartySubIDs_2_1_1;
      // DerivativeInstrumentPartySubIDsGrp.NoDerivativeInstrumentPartySubIDs
      multiset<string> DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10;
      set_field(noDerivativeInstrumentPartySubIDs_2_1_1, FIX::DerivativeInstrumentPartySubID{"STRING_98668544"}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10);
      set_field(noDerivativeInstrumentPartySubIDs_2_1_1, FIX::DerivativeInstrumentPartySubIDType{1475184198}, DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10);
      all_values.push_back(DerivativeInstrumentPartySubIDsGrp_NoDerivativeInstrumentPartySubIDs_10);
      all_compo_names.insert("....NoDerivativeInstrumentParties...NoDerivativeInstrumentPartySubIDs");

      noDerivativeInstrumentParties_0_2.addGroup(noDerivativeInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noDerivativeInstrumentParties_0_2);
  }
  // DerivativeSecurityAltIDGrp
  // Group DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_0;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3;
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltID{"STRING_865103910"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);
    set_field(noDerivativeSecurityAltID_0_0, FIX::DerivativeSecurityAltIDSource{"STRING_1541078983"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_3);
    all_compo_names.insert("....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_1;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4;
    set_field(noDerivativeSecurityAltID_0_1, FIX::DerivativeSecurityAltID{"STRING_1968774467"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4);
    set_field(noDerivativeSecurityAltID_0_1, FIX::DerivativeSecurityAltIDSource{"STRING_1811605269"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_4);
    all_compo_names.insert("....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoDerivativeSecurityAltID noDerivativeSecurityAltID_0_2;
    // DerivativeSecurityAltIDGrp.NoDerivativeSecurityAltID
    multiset<string> DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5;
    set_field(noDerivativeSecurityAltID_0_2, FIX::DerivativeSecurityAltID{"STRING_600259463"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5);
    set_field(noDerivativeSecurityAltID_0_2, FIX::DerivativeSecurityAltIDSource{"STRING_1097461797"}, DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5);
    all_values.push_back(DerivativeSecurityAltIDGrp_NoDerivativeSecurityAltID_5);
    all_compo_names.insert("....NoDerivativeSecurityAltID");

    msg.addGroup(noDerivativeSecurityAltID_0_2);
  }
  // DerivativeSecurityXML
  multiset<string> DerivativeSecurityXML_2;
  set_field(msg, FIX::DerivativeSecurityXML{"DATA_2133099793"}, DerivativeSecurityXML_2);
  set_field(msg, FIX::DerivativeSecurityXMLLen{120665875}, DerivativeSecurityXML_2);
  set_field(msg, FIX::DerivativeSecurityXMLSchema{"STRING_629904550"}, DerivativeSecurityXML_2);
  all_values.push_back(DerivativeSecurityXML_2);
  all_compo_names.insert("..");

  // UnderlyingInstrument
  multiset<string> UnderlyingInstrument_34;
  set_field(msg, FIX::EncodedUnderlyingIssuer{"DATA_827960082"}, UnderlyingInstrument_34);
  set_field(msg, FIX::EncodedUnderlyingIssuerLen{396706189}, UnderlyingInstrument_34);
  set_field(msg, FIX::EncodedUnderlyingSecurityDesc{"DATA_544887286"}, UnderlyingInstrument_34);
  set_field(msg, FIX::EncodedUnderlyingSecurityDescLen{258898759}, UnderlyingInstrument_34);
  FIX::UnderlyingAdjustedQuantity UnderlyingAdjustedQuantity_34;
  UnderlyingAdjustedQuantity_34.setString("6747623");
set_field(msg, UnderlyingAdjustedQuantity_34, UnderlyingInstrument_34);
  FIX::UnderlyingAllocationPercent UnderlyingAllocationPercent_34;
  UnderlyingAllocationPercent_34.setString("55.440000");
set_field(msg, UnderlyingAllocationPercent_34, UnderlyingInstrument_34);
  FIX::UnderlyingAttachmentPoint UnderlyingAttachmentPoint_34;
  UnderlyingAttachmentPoint_34.setString("80.760000");
set_field(msg, UnderlyingAttachmentPoint_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingCFICode{"STRING_836292414"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingCPProgram{"STRING_361130458"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingCPRegType{"STRING_1846441687"}, UnderlyingInstrument_34);
  FIX::UnderlyingCapValue UnderlyingCapValue_34;
  UnderlyingCapValue_34.setString("8719787");
set_field(msg, UnderlyingCapValue_34, UnderlyingInstrument_34);
  FIX::UnderlyingCashAmount UnderlyingCashAmount_34;
  UnderlyingCashAmount_34.setString("13746266");
set_field(msg, UnderlyingCashAmount_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingCashType{"STRING_DIFF"}, UnderlyingInstrument_34);
  FIX::UnderlyingContractMultiplier UnderlyingContractMultiplier_34;
  UnderlyingContractMultiplier_34.setString("17240565");
set_field(msg, UnderlyingContractMultiplier_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingContractMultiplierUnit{1295710476}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingCountryOfIssue{"COUNTRY_2112367747"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingCouponPaymentDate{"LOCALMKTDATE_888650721"}, UnderlyingInstrument_34);
  FIX::UnderlyingCouponRate UnderlyingCouponRate_34;
  UnderlyingCouponRate_34.setString("90.930000");
set_field(msg, UnderlyingCouponRate_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingCreditRating{"STRING_1057568122"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingCurrency{"CHF"}, UnderlyingInstrument_34);
  FIX::UnderlyingCurrentValue UnderlyingCurrentValue_34;
  UnderlyingCurrentValue_34.setString("10430470");
set_field(msg, UnderlyingCurrentValue_34, UnderlyingInstrument_34);
  FIX::UnderlyingDetachmentPoint UnderlyingDetachmentPoint_34;
  UnderlyingDetachmentPoint_34.setString("31.760000");
set_field(msg, UnderlyingDetachmentPoint_34, UnderlyingInstrument_34);
  FIX::UnderlyingDirtyPrice UnderlyingDirtyPrice_34;
  UnderlyingDirtyPrice_34.setString("12928686");
set_field(msg, UnderlyingDirtyPrice_34, UnderlyingInstrument_34);
  FIX::UnderlyingEndPrice UnderlyingEndPrice_34;
  UnderlyingEndPrice_34.setString("8643378");
set_field(msg, UnderlyingEndPrice_34, UnderlyingInstrument_34);
  FIX::UnderlyingEndValue UnderlyingEndValue_34;
  UnderlyingEndValue_34.setString("15165447");
set_field(msg, UnderlyingEndValue_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingExerciseStyle{1893128090}, UnderlyingInstrument_34);
  FIX::UnderlyingFXRate UnderlyingFXRate_34;
  UnderlyingFXRate_34.setString("19617996");
set_field(msg, UnderlyingFXRate_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingFXRateCalc{'D'}, UnderlyingInstrument_34);
  FIX::UnderlyingFactor UnderlyingFactor_34;
  UnderlyingFactor_34.setString("20137939");
set_field(msg, UnderlyingFactor_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingFlowScheduleType{444220535}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingInstrRegistry{"STRING_182637376"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingIssueDate{"LOCALMKTDATE_263016507"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingIssuer{"STRING_989107821"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingLocaleOfIssue{"STRING_441536136"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingMaturityDate{"LOCALMKTDATE_937778871"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingMaturityMonthYear{"MONTHYEAR_809859717"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingMaturityTime{"TZTIMEONLY_767584212"}, UnderlyingInstrument_34);
  FIX::UnderlyingNotionalPercentageOutstanding UnderlyingNotionalPercentageOutstanding_34;
  UnderlyingNotionalPercentageOutstanding_34.setString("12.860000");
set_field(msg, UnderlyingNotionalPercentageOutstanding_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingOptAttribute{'1'}, UnderlyingInstrument_34);
  FIX::UnderlyingOriginalNotionalPercentageOutstanding UnderlyingOriginalNotionalPercentageOutstanding_34;
  UnderlyingOriginalNotionalPercentageOutstanding_34.setString("22.510000");
set_field(msg, UnderlyingOriginalNotionalPercentageOutstanding_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingPriceUnitOfMeasure{"STRING_498566435"}, UnderlyingInstrument_34);
  FIX::UnderlyingPriceUnitOfMeasureQty UnderlyingPriceUnitOfMeasureQty_34;
  UnderlyingPriceUnitOfMeasureQty_34.setString("3981331");
set_field(msg, UnderlyingPriceUnitOfMeasureQty_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingProduct{1989234395}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingPutOrCall{75139345}, UnderlyingInstrument_34);
  FIX::UnderlyingPx UnderlyingPx_34;
  UnderlyingPx_34.setString("16938436");
set_field(msg, UnderlyingPx_34, UnderlyingInstrument_34);
  FIX::UnderlyingQty UnderlyingQty_34;
  UnderlyingQty_34.setString("19541184");
set_field(msg, UnderlyingQty_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingRedemptionDate{"LOCALMKTDATE_963790067"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingRepoCollateralSecurityType{"STRING_2117932722"}, UnderlyingInstrument_34);
  FIX::UnderlyingRepurchaseRate UnderlyingRepurchaseRate_34;
  UnderlyingRepurchaseRate_34.setString("29.690000");
set_field(msg, UnderlyingRepurchaseRate_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingRepurchaseTerm{1951109333}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingRestructuringType{"STRING_1869722366"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSecurityDesc{"STRING_1907249985"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSecurityExchange{"EXCHANGE_1656048861"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSecurityID{"STRING_1015107345"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSecurityIDSource{"STRING_624104172"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSecuritySubType{"STRING_1025110011"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSecurityType{"STRING_760751787"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSeniority{"STRING_438420157"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSettlMethod{"STRING_379787305"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSettlementType{5}, UnderlyingInstrument_34);
  FIX::UnderlyingStartValue UnderlyingStartValue_34;
  UnderlyingStartValue_34.setString("8826406");
set_field(msg, UnderlyingStartValue_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingStateOrProvinceOfIssue{"STRING_562424682"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingStrikeCurrency{"CHF"}, UnderlyingInstrument_34);
  FIX::UnderlyingStrikePrice UnderlyingStrikePrice_34;
  UnderlyingStrikePrice_34.setString("10039608");
set_field(msg, UnderlyingStrikePrice_34, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSymbol{"STRING_1827857484"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingSymbolSfx{"STRING_534124583"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingTimeUnit{"STRING_1771545030"}, UnderlyingInstrument_34);
  set_field(msg, FIX::UnderlyingUnitOfMeasure{"STRING_1454445122"}, UnderlyingInstrument_34);
  FIX::UnderlyingUnitOfMeasureQty UnderlyingUnitOfMeasureQty_34;
  UnderlyingUnitOfMeasureQty_34.setString("17051147");
set_field(msg, UnderlyingUnitOfMeasureQty_34, UnderlyingInstrument_34);
  all_values.push_back(UnderlyingInstrument_34);
  all_compo_names.insert(".");

  // UndSecAltIDGrp
  // Group UndSecAltIDGrp.NoUnderlyingSecurityAltID
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_0;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_72;
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltID{"STRING_1953011557"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);
    set_field(noUnderlyingSecurityAltID_0_0, FIX::UnderlyingSecurityAltIDSource{"STRING_2103247912"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_72);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingSecurityAltID noUnderlyingSecurityAltID_0_1;
    // UndSecAltIDGrp.NoUnderlyingSecurityAltID
    multiset<string> UndSecAltIDGrp_NoUnderlyingSecurityAltID_73;
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltID{"STRING_2079838029"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);
    set_field(noUnderlyingSecurityAltID_0_1, FIX::UnderlyingSecurityAltIDSource{"STRING_2028150902"}, UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);
    all_values.push_back(UndSecAltIDGrp_NoUnderlyingSecurityAltID_73);
    all_compo_names.insert("....NoUnderlyingSecurityAltID");

    msg.addGroup(noUnderlyingSecurityAltID_0_1);
  }
  // UnderlyingStipulations
  // Group UnderlyingStipulations.NoUnderlyingStips
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_0;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_69;
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipType{"STRING_1886472875"}, UnderlyingStipulations_NoUnderlyingStips_69);
    set_field(noUnderlyingStips_0_0, FIX::UnderlyingStipValue{"STRING_844457321"}, UnderlyingStipulations_NoUnderlyingStips_69);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_69);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_1;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_70;
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipType{"STRING_1620056968"}, UnderlyingStipulations_NoUnderlyingStips_70);
    set_field(noUnderlyingStips_0_1, FIX::UnderlyingStipValue{"STRING_603192196"}, UnderlyingStipulations_NoUnderlyingStips_70);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_70);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUnderlyingStips noUnderlyingStips_0_2;
    // UnderlyingStipulations.NoUnderlyingStips
    multiset<string> UnderlyingStipulations_NoUnderlyingStips_71;
    set_field(noUnderlyingStips_0_2, FIX::UnderlyingStipType{"STRING_648083006"}, UnderlyingStipulations_NoUnderlyingStips_71);
    set_field(noUnderlyingStips_0_2, FIX::UnderlyingStipValue{"STRING_1342295686"}, UnderlyingStipulations_NoUnderlyingStips_71);
    all_values.push_back(UnderlyingStipulations_NoUnderlyingStips_71);
    all_compo_names.insert("....NoUnderlyingStips");

    msg.addGroup(noUnderlyingStips_0_2);
  }
  // UndlyInstrumentParties
  // Group UndlyInstrumentParties.NoUndlyInstrumentParties
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_0;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_66;
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyID{"STRING_156648220"}, UndlyInstrumentParties_NoUndlyInstrumentParties_66);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_66);
    set_field(noUndlyInstrumentParties_0_0, FIX::UnderlyingInstrumentPartyRole{987062706}, UndlyInstrumentParties_NoUndlyInstrumentParties_66);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_66);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127;
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_970671170"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);
      set_field(noUndlyInstrumentPartySubIDs_0_1_0, FIX::UnderlyingInstrumentPartySubIDType{1425482863}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_127);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_0_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128;
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_1561545536"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);
      set_field(noUndlyInstrumentPartySubIDs_0_1_1, FIX::UnderlyingInstrumentPartySubIDType{1597733276}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_128);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_0.addGroup(noUndlyInstrumentPartySubIDs_0_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_0);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_1;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_67;
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyID{"STRING_160639908"}, UndlyInstrumentParties_NoUndlyInstrumentParties_67);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyIDSource{'2'}, UndlyInstrumentParties_NoUndlyInstrumentParties_67);
    set_field(noUndlyInstrumentParties_0_1, FIX::UnderlyingInstrumentPartyRole{340328240}, UndlyInstrumentParties_NoUndlyInstrumentParties_67);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_67);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_1_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129;
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_980447388"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);
      set_field(noUndlyInstrumentPartySubIDs_1_1_0, FIX::UnderlyingInstrumentPartySubIDType{20702076}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_129);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_1.addGroup(noUndlyInstrumentPartySubIDs_1_1_0);
    }
    msg.addGroup(noUndlyInstrumentParties_0_1);
  }
  {
    FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties noUndlyInstrumentParties_0_2;
    // UndlyInstrumentParties.NoUndlyInstrumentParties
    multiset<string> UndlyInstrumentParties_NoUndlyInstrumentParties_68;
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyID{"STRING_419029356"}, UndlyInstrumentParties_NoUndlyInstrumentParties_68);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyIDSource{'6'}, UndlyInstrumentParties_NoUndlyInstrumentParties_68);
    set_field(noUndlyInstrumentParties_0_2, FIX::UnderlyingInstrumentPartyRole{1475147198}, UndlyInstrumentParties_NoUndlyInstrumentParties_68);
    all_values.push_back(UndlyInstrumentParties_NoUndlyInstrumentParties_68);
    all_compo_names.insert("....NoUndlyInstrumentParties");

    // UndlyInstrumentPtysSubGrp
    // Group UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_0;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130;
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubID{"STRING_695112405"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);
      set_field(noUndlyInstrumentPartySubIDs_2_1_0, FIX::UnderlyingInstrumentPartySubIDType{1280675107}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_130);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_0);
    }
    {
      FIX50SP2::DerivativeSecurityListRequest::NoUndlyInstrumentParties::NoUndlyInstrumentPartySubIDs noUndlyInstrumentPartySubIDs_2_1_1;
      // UndlyInstrumentPtysSubGrp.NoUndlyInstrumentPartySubIDs
      multiset<string> UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131;
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubID{"STRING_2079908379"}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);
      set_field(noUndlyInstrumentPartySubIDs_2_1_1, FIX::UnderlyingInstrumentPartySubIDType{627466786}, UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);
      all_values.push_back(UndlyInstrumentPtysSubGrp_NoUndlyInstrumentPartySubIDs_131);
      all_compo_names.insert("....NoUndlyInstrumentParties...NoUndlyInstrumentPartySubIDs");

      noUndlyInstrumentParties_0_2.addGroup(noUndlyInstrumentPartySubIDs_2_1_1);
    }
    msg.addGroup(noUndlyInstrumentParties_0_2);
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
