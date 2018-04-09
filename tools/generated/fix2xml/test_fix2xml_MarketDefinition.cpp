#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::MarketDefinition msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDefinition_0;
  set_field(msg, FIX::Currency{"CAN"}, MarketDefinition_0);
  set_field(msg, FIX::EncodedMktSegmDesc{"DATA_1088162359"}, MarketDefinition_0);
  set_field(msg, FIX::EncodedMktSegmDescLen{1765284717}, MarketDefinition_0);
  set_field(msg, FIX::EncodedText{"DATA_2042772162"}, MarketDefinition_0);
  set_field(msg, FIX::EncodedTextLen{1157722444}, MarketDefinition_0);
  set_field(msg, FIX::MarketID{"EXCHANGE_1840616948"}, MarketDefinition_0);
  set_field(msg, FIX::MarketReportID{"STRING_1497090655"}, MarketDefinition_0);
  set_field(msg, FIX::MarketReqID{"STRING_420775167"}, MarketDefinition_0);
  set_field(msg, FIX::MarketSegmentDesc{"STRING_1108460479"}, MarketDefinition_0);
  set_field(msg, FIX::MarketSegmentID{"STRING_911770870"}, MarketDefinition_0);
  set_field(msg, FIX::ParentMktSegmID{"STRING_2043818292"}, MarketDefinition_0);
  set_field(msg, FIX::Text{"STRING_516537180"}, MarketDefinition_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(22, 8, 35, 16, 12, 2012)}, MarketDefinition_0);
  all_values.push_back(MarketDefinition_0);

  all_compo_names.insert("MarketDefinition");

  // ApplicationSequenceControl
  multiset<string> ApplicationSequenceControl_8;
  set_field(msg, FIX::ApplID{"STRING_450863142"}, ApplicationSequenceControl_8);
  set_field(msg, FIX::ApplLastSeqNum{330280810}, ApplicationSequenceControl_8);
  set_field(msg, FIX::ApplResendFlag{true}, ApplicationSequenceControl_8);
  set_field(msg, FIX::ApplSeqNum{1322787918}, ApplicationSequenceControl_8);
  all_values.push_back(ApplicationSequenceControl_8);
  all_compo_names.insert(".");

  // BaseTradingRules
  multiset<string> BaseTradingRules_3;
  set_field(msg, FIX::ExpirationCycle{1}, BaseTradingRules_3);
  set_field(msg, FIX::ImpliedMarketIndicator{2}, BaseTradingRules_3);
  FIX::MaxPriceVariation MaxPriceVariation_3;
  MaxPriceVariation_3.setString("10093221");
set_field(msg, MaxPriceVariation_3, BaseTradingRules_3);
  FIX::MaxTradeVol MaxTradeVol_3;
  MaxTradeVol_3.setString("21164294");
set_field(msg, MaxTradeVol_3, BaseTradingRules_3);
  FIX::MinTradeVol MinTradeVol_3;
  MinTradeVol_3.setString("10057582");
set_field(msg, MinTradeVol_3, BaseTradingRules_3);
  set_field(msg, FIX::MultilegModel{0}, BaseTradingRules_3);
  set_field(msg, FIX::MultilegPriceMethod{2}, BaseTradingRules_3);
  set_field(msg, FIX::PriceType{14}, BaseTradingRules_3);
  FIX::RoundLot RoundLot_3;
  RoundLot_3.setString("14289684");
set_field(msg, RoundLot_3, BaseTradingRules_3);
  set_field(msg, FIX::TradingCurrency{"EUR"}, BaseTradingRules_3);
  all_values.push_back(BaseTradingRules_3);
  all_compo_names.insert(".");

  // LotTypeRules
  // Group LotTypeRules.NoLotTypeRules
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_0;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_6;
    set_field(noLotTypeRules_0_0, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_6);
    FIX::MinLotSize MinLotSize_6;
    MinLotSize_6.setString("2922143");
set_field(noLotTypeRules_0_0, MinLotSize_6, LotTypeRules_NoLotTypeRules_6);
    all_values.push_back(LotTypeRules_NoLotTypeRules_6);
    all_compo_names.insert("....NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoLotTypeRules noLotTypeRules_0_1;
    // LotTypeRules.NoLotTypeRules
    multiset<string> LotTypeRules_NoLotTypeRules_7;
    set_field(noLotTypeRules_0_1, FIX::LotType{'1'}, LotTypeRules_NoLotTypeRules_7);
    FIX::MinLotSize MinLotSize_7;
    MinLotSize_7.setString("16940206");
set_field(noLotTypeRules_0_1, MinLotSize_7, LotTypeRules_NoLotTypeRules_7);
    all_values.push_back(LotTypeRules_NoLotTypeRules_7);
    all_compo_names.insert("....NoLotTypeRules");

    msg.addGroup(noLotTypeRules_0_1);
  }
  // PriceLimits
  multiset<string> PriceLimits_3;
  FIX::HighLimitPrice HighLimitPrice_3;
  HighLimitPrice_3.setString("14006748");
set_field(msg, HighLimitPrice_3, PriceLimits_3);
  FIX::LowLimitPrice LowLimitPrice_3;
  LowLimitPrice_3.setString("15856348");
set_field(msg, LowLimitPrice_3, PriceLimits_3);
  set_field(msg, FIX::PriceLimitType{2}, PriceLimits_3);
  FIX::TradingReferencePrice TradingReferencePrice_3;
  TradingReferencePrice_3.setString("19172119");
set_field(msg, TradingReferencePrice_3, PriceLimits_3);
  all_values.push_back(PriceLimits_3);
  all_compo_names.insert("..");

  // TickRules
  // Group TickRules.NoTickRules
  {
    FIX50SP2::MarketDefinition::NoTickRules noTickRules_0_0;
    // TickRules.NoTickRules
    multiset<string> TickRules_NoTickRules_4;
    FIX::EndTickPriceRange EndTickPriceRange_4;
    EndTickPriceRange_4.setString("13569791");
set_field(noTickRules_0_0, EndTickPriceRange_4, TickRules_NoTickRules_4);
    FIX::StartTickPriceRange StartTickPriceRange_4;
    StartTickPriceRange_4.setString("14463695");
set_field(noTickRules_0_0, StartTickPriceRange_4, TickRules_NoTickRules_4);
    FIX::TickIncrement TickIncrement_4;
    TickIncrement_4.setString("20377568");
set_field(noTickRules_0_0, TickIncrement_4, TickRules_NoTickRules_4);
    set_field(noTickRules_0_0, FIX::TickRuleType{0}, TickRules_NoTickRules_4);
    all_values.push_back(TickRules_NoTickRules_4);
    all_compo_names.insert("....NoTickRules");

    msg.addGroup(noTickRules_0_0);
  }
  // ExecInstRules
  // Group ExecInstRules.NoExecInstRules
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_0;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_13;
    set_field(noExecInstRules_0_0, FIX::ExecInstValue{'1'}, ExecInstRules_NoExecInstRules_13);
    all_values.push_back(ExecInstRules_NoExecInstRules_13);
    all_compo_names.insert("...NoExecInstRules");

    msg.addGroup(noExecInstRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_1;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_14;
    set_field(noExecInstRules_0_1, FIX::ExecInstValue{'4'}, ExecInstRules_NoExecInstRules_14);
    all_values.push_back(ExecInstRules_NoExecInstRules_14);
    all_compo_names.insert("...NoExecInstRules");

    msg.addGroup(noExecInstRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoExecInstRules noExecInstRules_0_2;
    // ExecInstRules.NoExecInstRules
    multiset<string> ExecInstRules_NoExecInstRules_15;
    set_field(noExecInstRules_0_2, FIX::ExecInstValue{'2'}, ExecInstRules_NoExecInstRules_15);
    all_values.push_back(ExecInstRules_NoExecInstRules_15);
    all_compo_names.insert("...NoExecInstRules");

    msg.addGroup(noExecInstRules_0_2);
  }
  // OrdTypeRules
  // Group OrdTypeRules.NoOrdTypeRules
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_0;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_18;
    set_field(noOrdTypeRules_0_0, FIX::OrdType{'8'}, OrdTypeRules_NoOrdTypeRules_18);
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_18);
    all_compo_names.insert("...NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoOrdTypeRules noOrdTypeRules_0_1;
    // OrdTypeRules.NoOrdTypeRules
    multiset<string> OrdTypeRules_NoOrdTypeRules_19;
    set_field(noOrdTypeRules_0_1, FIX::OrdType{'J'}, OrdTypeRules_NoOrdTypeRules_19);
    all_values.push_back(OrdTypeRules_NoOrdTypeRules_19);
    all_compo_names.insert("...NoOrdTypeRules");

    msg.addGroup(noOrdTypeRules_0_1);
  }
  // TimeInForceRules
  // Group TimeInForceRules.NoTimeInForceRules
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_0;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_10;
    set_field(noTimeInForceRules_0_0, FIX::TimeInForce{'9'}, TimeInForceRules_NoTimeInForceRules_10);
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_10);
    all_compo_names.insert("...NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_0);
  }
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_1;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_11;
    set_field(noTimeInForceRules_0_1, FIX::TimeInForce{'6'}, TimeInForceRules_NoTimeInForceRules_11);
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_11);
    all_compo_names.insert("...NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_1);
  }
  {
    FIX50SP2::MarketDefinition::NoTimeInForceRules noTimeInForceRules_0_2;
    // TimeInForceRules.NoTimeInForceRules
    multiset<string> TimeInForceRules_NoTimeInForceRules_12;
    set_field(noTimeInForceRules_0_2, FIX::TimeInForce{'3'}, TimeInForceRules_NoTimeInForceRules_12);
    all_values.push_back(TimeInForceRules_NoTimeInForceRules_12);
    all_compo_names.insert("...NoTimeInForceRules");

    msg.addGroup(noTimeInForceRules_0_2);
  }
  // header
  multiset<string> header_43;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_7"}, header_43);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1455092276"}, header_43);
  set_header_field(msg.getHeader(), FIX::BodyLength{2005002179}, header_43);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_579270136"}, header_43);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1570615348"}, header_43);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_456599567"}, header_43);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1903527077"}, header_43);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{696377216}, header_43);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_43);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{429907377}, header_43);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_242914251"}, header_43);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_2005069"}, header_43);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_2015542195"}, header_43);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(15, 21, 13, 14, 10, 2013)}, header_43);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_43);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_43);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1572231476"}, header_43);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{604937001}, header_43);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1677851813"}, header_43);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1237700539"}, header_43);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_916239123"}, header_43);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(12, 40, 49, 21, 5, 2005)}, header_43);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1642063553"}, header_43);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_2074711016"}, header_43);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_886172488"}, header_43);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_1398106982"}, header_43);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{623604584}, header_43);
  all_values.push_back(header_43);
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
