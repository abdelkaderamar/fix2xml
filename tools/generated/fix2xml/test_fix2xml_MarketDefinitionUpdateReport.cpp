#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::MarketDefinitionUpdateReport msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinitionUpdateReport_0;
  set_field(msg, FIX::Currency{"GBP"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedMktSegmDesc{"DATA_1002669786"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedMktSegmDescLen{1529156613}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedText{"DATA_1098428082"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::EncodedTextLen{1602086042}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1017529712"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketReportID{"STRING_2055537346"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketReqID{"STRING_1250505689"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketSegmentDesc{"STRING_1077957201"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_1927956379"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::MarketUpdateAction{'D'}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::ParentMktSegmID{"STRING_1567957610"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::Text{"STRING_1294955318"}, MarketDefinitionUpdateReport_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 0, 31, 4, 6, 2006)}, MarketDefinitionUpdateReport_0);
  all_values.push_back(MarketDefinitionUpdateReport_0);

  all_compo_names.insert("MarketDefinitionUpdateReport");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_9;
  set_field(msg, FIX::ApplID{"STRING_2013505951"}, ApplicationSequenceControl_9);
  set_field(msg, FIX::ApplLastSeqNum{352440117}, ApplicationSequenceControl_9);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_9);
  set_field(msg, FIX::ApplSeqNum{1627930630}, ApplicationSequenceControl_9);
  all_values.push_back(ApplicationSequenceControl_9);
  all_compo_names.insert(".");

  // BaseTradingRules
  multiset<string> BaseTradingRules_4;
  set_field(msg, FIX::ExpirationCycle{1}, BaseTradingRules_4);
  set_field(msg, FIX::ImpliedMarketIndicator{2}, BaseTradingRules_4);
  FIX::MaxPriceVariation MaxPriceVariation_4;
  MaxPriceVariation_4.setString("17216995");
set_field(msg, MaxPriceVariation_4, BaseTradingRules_4);
  FIX::MaxTradeVol MaxTradeVol_4;
  MaxTradeVol_4.setString("18072866");
set_field(msg, MaxTradeVol_4, BaseTradingRules_4);
  FIX::MinTradeVol MinTradeVol_4;
  MinTradeVol_4.setString("9573802");
set_field(msg, MinTradeVol_4, BaseTradingRules_4);
  set_field(msg, FIX::MultilegModel{1}, BaseTradingRules_4);
  set_field(msg, FIX::MultilegPriceMethod{1}, BaseTradingRules_4);
  set_field(msg, FIX::PriceType{7}, BaseTradingRules_4);
  FIX::RoundLot RoundLot_4;
  RoundLot_4.setString("18963782");
set_field(msg, RoundLot_4, BaseTradingRules_4);
  set_field(msg, FIX::TradingCurrency{"USD"}, BaseTradingRules_4);
  all_values.push_back(BaseTradingRules_4);
  all_compo_names.insert(".");

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_8;
    set_field(noLotTypeRules_0_0, FIX::LotType{'4'}, LotTypeRules_NoLotTypeRules_8);
    FIX::MinLotSize MinLotSize_8;
    MinLotSize_8.setString("18701888");
set_field(noLotTypeRules_0_0, MinLotSize_8, LotTypeRules_NoLotTypeRules_8);
    all_values.push_back(LotTypeRules_NoLotTypeRules_8);
    all_compo_names.insert("....NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_1;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_9;
    set_field(noLotTypeRules_0_1, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_9);
    FIX::MinLotSize MinLotSize_9;
    MinLotSize_9.setString("5785949");
set_field(noLotTypeRules_0_1, MinLotSize_9, LotTypeRules_NoLotTypeRules_9);
    all_values.push_back(LotTypeRules_NoLotTypeRules_9);
    all_compo_names.insert("....NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_1);
  }
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoLotTypeRules noLotTypeRules_0_2;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_10;
    set_field(noLotTypeRules_0_2, FIX::LotType{'3'}, LotTypeRules_NoLotTypeRules_10);
    FIX::MinLotSize MinLotSize_10;
    MinLotSize_10.setString("18570237");
set_field(noLotTypeRules_0_2, MinLotSize_10, LotTypeRules_NoLotTypeRules_10);
    all_values.push_back(LotTypeRules_NoLotTypeRules_10);
    all_compo_names.insert("....NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_2);
  }
  // PriceLimits
  multiset<string> PriceLimits_4;
  FIX::HighLimitPrice HighLimitPrice_4;
  HighLimitPrice_4.setString("21465525");
set_field(msg, HighLimitPrice_4, PriceLimits_4);
  FIX::LowLimitPrice LowLimitPrice_4;
  LowLimitPrice_4.setString("7981332");
set_field(msg, LowLimitPrice_4, PriceLimits_4);
  set_field(msg, FIX::PriceLimitType{0}, PriceLimits_4);
  FIX::TradingReferencePrice TradingReferencePrice_4;
  TradingReferencePrice_4.setString("7957157");
set_field(msg, TradingReferencePrice_4, PriceLimits_4);
  all_values.push_back(PriceLimits_4);
  all_compo_names.insert("..");

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_5;
    FIX::EndTickPriceRange EndTickPriceRange_5;
    EndTickPriceRange_5.setString("12309310");
set_field(noTickRules_0_0, EndTickPriceRange_5, TickRules_NoTickRules_5);
    FIX::StartTickPriceRange StartTickPriceRange_5;
    StartTickPriceRange_5.setString("3085545");
set_field(noTickRules_0_0, StartTickPriceRange_5, TickRules_NoTickRules_5);
    FIX::TickIncrement TickIncrement_5;
    TickIncrement_5.setString("10689251");
set_field(noTickRules_0_0, TickIncrement_5, TickRules_NoTickRules_5);
    set_field(noTickRules_0_0, FIX::TickRuleType{1}, TickRules_NoTickRules_5);
    all_values.push_back(TickRules_NoTickRules_5);
    all_compo_names.insert("....NoTickRules");

    msg.addGroup(noTickRules_0_0);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_16;
    set_field(noExecInstRules_0_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_16);
    all_values.push_back(ExecInstRules_NoExecInstRules_16);
    all_compo_names.insert("...NoExecInstRules");

    msg.addGroup(noExecInstRules_0_0);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_20;
    set_field(noOrdTypeRules_0_0, FIX::OrdType{'5'}, OrdTypeRules_NoOrdTypeRules_20);
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_20);
    all_compo_names.insert("...NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_0);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinitionUpdateReport::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_13;
    set_field(noTimeInForceRules_0_0, FIX::TimeInForce{'1'}, TimeInForceRules_NoTimeInForceRules_13);
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_13);
    all_compo_names.insert("...NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_0);
  }
  // header
  multiset<string> header_45;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_45);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1709011930"}, header_45);
  set_header_field(msg.getHeader(), FIX::BodyLength{2090472103}, header_45);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_122948247"}, header_45);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_810446967"}, header_45);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_806695566"}, header_45);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_2019326546"}, header_45);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1441038618}, header_45);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_45);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1222823591}, header_45);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_941676334"}, header_45);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_344052353"}, header_45);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1676826325"}, header_45);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(7, 57, 29, 19, 8, 2014)}, header_45);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_45);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_45);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_476126811"}, header_45);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{277515965}, header_45);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_206574857"}, header_45);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_650703706"}, header_45);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1698881192"}, header_45);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(6, 39, 22, 13, 6, 2004)}, header_45);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1805399212"}, header_45);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1972581729"}, header_45);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_69504956"}, header_45);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1677242110"}, header_45);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1266136699}, header_45);
  all_values.push_back(header_45);
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
