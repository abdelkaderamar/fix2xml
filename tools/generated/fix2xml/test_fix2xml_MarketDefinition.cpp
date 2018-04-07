#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinition, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinition_0;
  set_field(msg, FIX::Currency{"JPY"}, MarketDefinition_0);
  set_field(msg, FIX::EncodedMktSegmDesc{"DATA_1126826187"}, MarketDefinition_0);
  set_field(msg, FIX::EncodedMktSegmDescLen{866932652}, MarketDefinition_0);
  set_field(msg, FIX::EncodedText{"DATA_704977573"}, MarketDefinition_0);
  set_field(msg, FIX::EncodedTextLen{1686380668}, MarketDefinition_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1535312169"}, MarketDefinition_0);
  set_field(msg, FIX::MarketReportID{"STRING_262726074"}, MarketDefinition_0);
  set_field(msg, FIX::MarketReqID{"STRING_440616205"}, MarketDefinition_0);
  set_field(msg, FIX::MarketSegmentDesc{"STRING_2022992640"}, MarketDefinition_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_515228991"}, MarketDefinition_0);
  set_field(msg, FIX::ParentMktSegmID{"STRING_1604340077"}, MarketDefinition_0);
  set_field(msg, FIX::Text{"STRING_2080621209"}, MarketDefinition_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(16, 13, 24, 15, 3, 2004)}, MarketDefinition_0);
  all_values.push_back(MarketDefinition_0);

  all_compo_names.insert("MarketDefinition");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_8;
  set_field(msg, FIX::ApplID{"STRING_776153082"}, ApplicationSequenceControl_8);
  set_field(msg, FIX::ApplLastSeqNum{1372898324}, ApplicationSequenceControl_8);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_8);
  set_field(msg, FIX::ApplSeqNum{1011542730}, ApplicationSequenceControl_8);
  all_values.push_back(ApplicationSequenceControl_8);
  all_compo_names.insert(".");

  // BaseTradingRules
  multiset<string> BaseTradingRules_2;
  set_field(msg, FIX::ExpirationCycle{2}, BaseTradingRules_2);
  set_field(msg, FIX::ImpliedMarketIndicator{2}, BaseTradingRules_2);
  FIX::MaxPriceVariation MaxPriceVariation_2;
  MaxPriceVariation_2.setString("6598840");
set_field(msg, MaxPriceVariation_2, BaseTradingRules_2);
  FIX::MaxTradeVol MaxTradeVol_2;
  MaxTradeVol_2.setString("11148641");
set_field(msg, MaxTradeVol_2, BaseTradingRules_2);
  FIX::MinTradeVol MinTradeVol_2;
  MinTradeVol_2.setString("16314971");
set_field(msg, MinTradeVol_2, BaseTradingRules_2);
  set_field(msg, FIX::MultilegModel{0}, BaseTradingRules_2);
  set_field(msg, FIX::MultilegPriceMethod{0}, BaseTradingRules_2);
  set_field(msg, FIX::PriceType{19}, BaseTradingRules_2);
  FIX::RoundLot RoundLot_2;
  RoundLot_2.setString("12652093");
set_field(msg, RoundLot_2, BaseTradingRules_2);
  set_field(msg, FIX::TradingCurrency{"EUR"}, BaseTradingRules_2);
  all_values.push_back(BaseTradingRules_2);
  all_compo_names.insert(".");

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_5;
    set_field(noLotTypeRules_0_0, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_5);
    FIX::MinLotSize MinLotSize_5;
    MinLotSize_5.setString("11113710");
set_field(noLotTypeRules_0_0, MinLotSize_5, LotTypeRules_NoLotTypeRules_5);
    all_values.push_back(LotTypeRules_NoLotTypeRules_5);
    all_compo_names.insert("....NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_0);
  }
  // PriceLimits
  multiset<string> PriceLimits_2;
  FIX::HighLimitPrice HighLimitPrice_2;
  HighLimitPrice_2.setString("854293");
set_field(msg, HighLimitPrice_2, PriceLimits_2);
  FIX::LowLimitPrice LowLimitPrice_2;
  LowLimitPrice_2.setString("15541879");
set_field(msg, LowLimitPrice_2, PriceLimits_2);
  set_field(msg, FIX::PriceLimitType{1}, PriceLimits_2);
  FIX::TradingReferencePrice TradingReferencePrice_2;
  TradingReferencePrice_2.setString("6006583");
set_field(msg, TradingReferencePrice_2, PriceLimits_2);
  all_values.push_back(PriceLimits_2);
  all_compo_names.insert("..");

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_4;
    FIX::EndTickPriceRange EndTickPriceRange_4;
    EndTickPriceRange_4.setString("9200176");
set_field(noTickRules_0_0, EndTickPriceRange_4, TickRules_NoTickRules_4);
    FIX::StartTickPriceRange StartTickPriceRange_4;
    StartTickPriceRange_4.setString("691471");
set_field(noTickRules_0_0, StartTickPriceRange_4, TickRules_NoTickRules_4);
    FIX::TickIncrement TickIncrement_4;
    TickIncrement_4.setString("9204421");
set_field(noTickRules_0_0, TickIncrement_4, TickRules_NoTickRules_4);
    set_field(noTickRules_0_0, FIX::TickRuleType{1}, TickRules_NoTickRules_4);
    all_values.push_back(TickRules_NoTickRules_4);
    all_compo_names.insert("....NoTickRules");

    msg.addGroup(noTickRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_1;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_5;
    FIX::EndTickPriceRange EndTickPriceRange_5;
    EndTickPriceRange_5.setString("19305574");
set_field(noTickRules_0_1, EndTickPriceRange_5, TickRules_NoTickRules_5);
    FIX::StartTickPriceRange StartTickPriceRange_5;
    StartTickPriceRange_5.setString("7642117");
set_field(noTickRules_0_1, StartTickPriceRange_5, TickRules_NoTickRules_5);
    FIX::TickIncrement TickIncrement_5;
    TickIncrement_5.setString("18930208");
set_field(noTickRules_0_1, TickIncrement_5, TickRules_NoTickRules_5);
    set_field(noTickRules_0_1, FIX::TickRuleType{0}, TickRules_NoTickRules_5);
    all_values.push_back(TickRules_NoTickRules_5);
    all_compo_names.insert("....NoTickRules");

    msg.addGroup(noTickRules_0_1);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_9;
    set_field(noExecInstRules_0_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_9);
    all_values.push_back(ExecInstRules_NoExecInstRules_9);
    all_compo_names.insert("...NoExecInstRules");

    msg.addGroup(noExecInstRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_1;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_10;
    set_field(noExecInstRules_0_1, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_10);
    all_values.push_back(ExecInstRules_NoExecInstRules_10);
    all_compo_names.insert("...NoExecInstRules");

    msg.addGroup(noExecInstRules_0_1);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_9;
    set_field(noOrdTypeRules_0_0, FIX::OrdType{'G'}, OrdTypeRules_NoOrdTypeRules_9);
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_9);
    all_compo_names.insert("...NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_10;
    set_field(noOrdTypeRules_0_1, FIX::OrdType{'4'}, OrdTypeRules_NoOrdTypeRules_10);
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_10);
    all_compo_names.insert("...NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_2;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_11;
    set_field(noOrdTypeRules_0_2, FIX::OrdType{'Q'}, OrdTypeRules_NoOrdTypeRules_11);
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_11);
    all_compo_names.insert("...NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_2);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_14;
    set_field(noTimeInForceRules_0_0, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_14);
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_14);
    all_compo_names.insert("...NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_1;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_15;
    set_field(noTimeInForceRules_0_1, FIX::TimeInForce{'7'}, TimeInForceRules_NoTimeInForceRules_15);
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_15);
    all_compo_names.insert("...NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_1);
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
