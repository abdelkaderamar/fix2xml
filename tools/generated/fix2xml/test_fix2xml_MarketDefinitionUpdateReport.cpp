#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDefinitionUpdateReport, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::MarketDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinitionUpdateReport_0;
  set_field(msg, FIX::Currency{"GBP"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedMktSegmDesc{"DATA_44623079"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedMktSegmDescLen{133410899}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1985621283"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedTextLen{1031503164}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_734069272"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketReportID{"STRING_849181973"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketReqID{"STRING_1951520810"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketSegmentDesc{"STRING_803216383"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1769624159"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketUpdateAction{'D'}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::ParentMktSegmID{"STRING_586290171"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::Text{"STRING_386352301"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(22, 53, 24, 22, 12, 2004)}, MarketDefinitionUpdateReport_0);
  all_values.push_back(MarketDefinitionUpdateReport_0);

  all_compo_names.insert("MarketDefinitionUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_9;
  set_field(msg, FIX::ApplID{"STRING_305975561"}, ApplicationSequenceControl_9);
  set_field(msg, FIX::ApplLastSeqNum{1247965487}, ApplicationSequenceControl_9);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_9);
  set_field(msg, FIX::ApplSeqNum{954042354}, ApplicationSequenceControl_9);
  all_values.push_back(ApplicationSequenceControl_9);
  all_compo_names.insert(".");

  // BaseTradingRules
  multiset<string> BaseTradingRules_3;
  set_field(msg, FIX::ExpirationCycle{0}, BaseTradingRules_3);
  set_field(msg, FIX::ImpliedMarketIndicator{0}, BaseTradingRules_3);
  FIX::MaxPriceVariation MaxPriceVariation_3;
  MaxPriceVariation_3.setString("3112354");
set_field(msg, MaxPriceVariation_3, BaseTradingRules_3);
  FIX::MaxTradeVol MaxTradeVol_3;
  MaxTradeVol_3.setString("4333125");
set_field(msg, MaxTradeVol_3, BaseTradingRules_3);
  FIX::MinTradeVol MinTradeVol_3;
  MinTradeVol_3.setString("6872659");
set_field(msg, MinTradeVol_3, BaseTradingRules_3);
  set_field(msg, FIX::MultilegModel{0}, BaseTradingRules_3);
  set_field(msg, FIX::MultilegPriceMethod{0}, BaseTradingRules_3);
  set_field(msg, FIX::PriceType{2}, BaseTradingRules_3);
  FIX::RoundLot RoundLot_3;
  RoundLot_3.setString("14365941");
set_field(msg, RoundLot_3, BaseTradingRules_3);
  set_field(msg, FIX::TradingCurrency{"GBP"}, BaseTradingRules_3);
  all_values.push_back(BaseTradingRules_3);
  all_compo_names.insert(".");

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_6;
    set_field(noLotTypeRules_0_0, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_6);
    FIX::MinLotSize MinLotSize_6;
    MinLotSize_6.setString("18060189");
set_field(noLotTypeRules_0_0, MinLotSize_6, LotTypeRules_NoLotTypeRules_6);
    all_values.push_back(LotTypeRules_NoLotTypeRules_6);
    all_compo_names.insert("....NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_1;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_7;
    set_field(noLotTypeRules_0_1, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_7);
    FIX::MinLotSize MinLotSize_7;
    MinLotSize_7.setString("45069");
set_field(noLotTypeRules_0_1, MinLotSize_7, LotTypeRules_NoLotTypeRules_7);
    all_values.push_back(LotTypeRules_NoLotTypeRules_7);
    all_compo_names.insert("....NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_1);
  }
  // PriceLimits
  multiset<string> PriceLimits_3;
  FIX::HighLimitPrice HighLimitPrice_3;
  HighLimitPrice_3.setString("14281594");
set_field(msg, HighLimitPrice_3, PriceLimits_3);
  FIX::LowLimitPrice LowLimitPrice_3;
  LowLimitPrice_3.setString("8211479");
set_field(msg, LowLimitPrice_3, PriceLimits_3);
  set_field(msg, FIX::PriceLimitType{0}, PriceLimits_3);
  FIX::TradingReferencePrice TradingReferencePrice_3;
  TradingReferencePrice_3.setString("18145117");
set_field(msg, TradingReferencePrice_3, PriceLimits_3);
  all_values.push_back(PriceLimits_3);
  all_compo_names.insert("..");

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_6;
    FIX::EndTickPriceRange EndTickPriceRange_6;
    EndTickPriceRange_6.setString("14176865");
set_field(noTickRules_0_0, EndTickPriceRange_6, TickRules_NoTickRules_6);
    FIX::StartTickPriceRange StartTickPriceRange_6;
    StartTickPriceRange_6.setString("15937452");
set_field(noTickRules_0_0, StartTickPriceRange_6, TickRules_NoTickRules_6);
    FIX::TickIncrement TickIncrement_6;
    TickIncrement_6.setString("6761685");
set_field(noTickRules_0_0, TickIncrement_6, TickRules_NoTickRules_6);
    set_field(noTickRules_0_0, FIX::TickRuleType{3}, TickRules_NoTickRules_6);
    all_values.push_back(TickRules_NoTickRules_6);
    all_compo_names.insert("....NoTickRules");

    msg.addGroup(noTickRules_0_0);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_11;
    set_field(noExecInstRules_0_0, FIX::ExecInstValue{'5'}, ExecInstRules_NoExecInstRules_11);
    all_values.push_back(ExecInstRules_NoExecInstRules_11);
    all_compo_names.insert("...NoExecInstRules");

    msg.addGroup(noExecInstRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_1;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_12;
    set_field(noExecInstRules_0_1, FIX::ExecInstValue{'8'}, ExecInstRules_NoExecInstRules_12);
    all_values.push_back(ExecInstRules_NoExecInstRules_12);
    all_compo_names.insert("...NoExecInstRules");

    msg.addGroup(noExecInstRules_0_1);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_2;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_13;
    set_field(noExecInstRules_0_2, FIX::ExecInstValue{'8'}, ExecInstRules_NoExecInstRules_13);
    all_values.push_back(ExecInstRules_NoExecInstRules_13);
    all_compo_names.insert("...NoExecInstRules");

    msg.addGroup(noExecInstRules_0_2);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_12;
    set_field(noOrdTypeRules_0_0, FIX::OrdType{'J'}, OrdTypeRules_NoOrdTypeRules_12);
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_12);
    all_compo_names.insert("...NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_13;
    set_field(noOrdTypeRules_0_1, FIX::OrdType{'6'}, OrdTypeRules_NoOrdTypeRules_13);
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_13);
    all_compo_names.insert("...NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_1);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_16;
    set_field(noTimeInForceRules_0_0, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_16);
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_16);
    all_compo_names.insert("...NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_1;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_17;
    set_field(noTimeInForceRules_0_1, FIX::TimeInForce{'0'}, TimeInForceRules_NoTimeInForceRules_17);
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_17);
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
