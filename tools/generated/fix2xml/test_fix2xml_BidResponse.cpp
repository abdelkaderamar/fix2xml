#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/BidResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BidResponse, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::BidResponse msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidResponse_0;
  set_field(msg, FIX::BidID{"STRING_308827585"}, BidResponse_0);
  set_field(msg, FIX::ClientBidID{"STRING_1441418443"}, BidResponse_0);
  all_values.push_back(BidResponse_0);

  all_compo_names.insert("BidResponse");

  // BidCompRspGrp
  // Group BidCompRspGrp.NoBidComponents
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_0;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_0;
    set_field(noBidComponents_0_0, FIX::Country{"COUNTRY_934921790"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::EncodedText{"DATA_1789882070"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::EncodedTextLen{1870355766}, BidCompRspGrp_NoBidComponents_0);
    FIX::FairValue FairValue_3;
    FairValue_3.setString("17336672");
set_field(noBidComponents_0_0, FairValue_3, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::ListID{"STRING_881328029"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::NetGrossInd{2}, BidCompRspGrp_NoBidComponents_0);
    FIX::Price Price_1;
    Price_1.setString("616892");
set_field(noBidComponents_0_0, Price_1, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::PriceType{9}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::SettlDate{"LOCALMKTDATE_358859261"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::SettlType{"STRING_5"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::Side{'4'}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::Text{"STRING_1731727650"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::TradingSessionID{"STRING_3"}, BidCompRspGrp_NoBidComponents_0);
    set_field(noBidComponents_0_0, FIX::TradingSessionSubID{"STRING_6"}, BidCompRspGrp_NoBidComponents_0);
    all_values.push_back(BidCompRspGrp_NoBidComponents_0);
    all_compo_names.insert("...NoBidComponents");

    // CommissionData
    multiset<string> CommissionData_8;
    set_field(noBidComponents_0_0, FIX::CommCurrency{"CHF"}, CommissionData_8);
    set_field(noBidComponents_0_0, FIX::CommType{'4'}, CommissionData_8);
    FIX::Commission Commission_8;
    Commission_8.setString("13850008");
set_field(noBidComponents_0_0, Commission_8, CommissionData_8);
    set_field(noBidComponents_0_0, FIX::FundRenewWaiv{'N'}, CommissionData_8);
    all_values.push_back(CommissionData_8);
    all_compo_names.insert("...NoBidComponents.");

    msg.addGroup(noBidComponents_0_0);
  }
  {
    FIX50SP2::BidResponse::NoBidComponents noBidComponents_0_1;
    // BidCompRspGrp.NoBidComponents
    multiset<string> BidCompRspGrp_NoBidComponents_1;
    set_field(noBidComponents_0_1, FIX::Country{"COUNTRY_1721674691"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::EncodedText{"DATA_1663573933"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::EncodedTextLen{1697329446}, BidCompRspGrp_NoBidComponents_1);
    FIX::FairValue FairValue_4;
    FairValue_4.setString("493907");
set_field(noBidComponents_0_1, FairValue_4, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::ListID{"STRING_698775022"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::NetGrossInd{1}, BidCompRspGrp_NoBidComponents_1);
    FIX::Price Price_2;
    Price_2.setString("13823910");
set_field(noBidComponents_0_1, Price_2, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::PriceType{10}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::SettlDate{"LOCALMKTDATE_1611403515"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::SettlType{"STRING_8"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::Side{'D'}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::Text{"STRING_870927416"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::TradingSessionID{"STRING_3"}, BidCompRspGrp_NoBidComponents_1);
    set_field(noBidComponents_0_1, FIX::TradingSessionSubID{"STRING_6"}, BidCompRspGrp_NoBidComponents_1);
    all_values.push_back(BidCompRspGrp_NoBidComponents_1);
    all_compo_names.insert("...NoBidComponents");

    // CommissionData
    multiset<string> CommissionData_9;
    set_field(noBidComponents_0_1, FIX::CommCurrency{"USD"}, CommissionData_9);
    set_field(noBidComponents_0_1, FIX::CommType{'3'}, CommissionData_9);
    FIX::Commission Commission_9;
    Commission_9.setString("13162649");
set_field(noBidComponents_0_1, Commission_9, CommissionData_9);
    set_field(noBidComponents_0_1, FIX::FundRenewWaiv{'N'}, CommissionData_9);
    all_values.push_back(CommissionData_9);
    all_compo_names.insert("...NoBidComponents.");

    msg.addGroup(noBidComponents_0_1);
  }
  // header
  multiset<string> header_12;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_3"}, header_12);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_1675124165"}, header_12);
  set_header_field(msg.getHeader(), FIX::BodyLength{200128456}, header_12);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1636446534"}, header_12);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1259368168"}, header_12);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_926328366"}, header_12);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_65063605"}, header_12);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{33648159}, header_12);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_12);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1586534092}, header_12);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1418648987"}, header_12);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_529671971"}, header_12);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1160725136"}, header_12);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(9, 21, 14, 5, 9, 2009)}, header_12);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{true}, header_12);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_12);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_131877220"}, header_12);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1559009333}, header_12);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_467415094"}, header_12);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_817908151"}, header_12);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_5325220"}, header_12);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(7, 4, 9, 6, 3, 2001)}, header_12);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_2114056960"}, header_12);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_2108598810"}, header_12);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1785242071"}, header_12);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_31636918"}, header_12);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{2142246969}, header_12);
  all_values.push_back(header_12);
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
