#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelReject.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelReject, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::OrderCancelReject msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReject_0;
  set_field(msg, FIX::Account{"STRING_1503206943"}, OrderCancelReject_0);
  set_field(msg, FIX::AccountType{1}, OrderCancelReject_0);
  set_field(msg, FIX::AcctIDSource{5}, OrderCancelReject_0);
  set_field(msg, FIX::ClOrdID{"STRING_1904910912"}, OrderCancelReject_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_1071501311"}, OrderCancelReject_0);
  set_field(msg, FIX::CxlRejReason{3}, OrderCancelReject_0);
  set_field(msg, FIX::CxlRejResponseTo{'1'}, OrderCancelReject_0);
  set_field(msg, FIX::EncodedText{"DATA_146288886"}, OrderCancelReject_0);
  set_field(msg, FIX::EncodedTextLen{1291233327}, OrderCancelReject_0);
  set_field(msg, FIX::ListID{"STRING_1386649670"}, OrderCancelReject_0);
  set_field(msg, FIX::OrdStatus{'E'}, OrderCancelReject_0);
  set_field(msg, FIX::OrderID{"STRING_150332032"}, OrderCancelReject_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_960806279"}, OrderCancelReject_0);
  set_field(msg, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(12, 26, 42, 0, 7, 2013)}, OrderCancelReject_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_689531953"}, OrderCancelReject_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_1677527479"}, OrderCancelReject_0);
  set_field(msg, FIX::Text{"STRING_1268800634"}, OrderCancelReject_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_144954067"}, OrderCancelReject_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_611494793"}, OrderCancelReject_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(12, 18, 43, 7, 8, 2014)}, OrderCancelReject_0);
  set_field(msg, FIX::WorkingIndicator{false}, OrderCancelReject_0);
  all_values.push_back(OrderCancelReject_0);

  all_compo_names.insert("OrderCancelReject");

  // header
  multiset<string> header_56;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_56);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_977919402"}, header_56);
  set_header_field(msg.getHeader(), FIX::BodyLength{75057028}, header_56);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1874171764"}, header_56);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_2064882583"}, header_56);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_221345915"}, header_56);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_1017921443"}, header_56);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1304048605}, header_56);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_UTF-8"}, header_56);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1168253475}, header_56);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_117371236"}, header_56);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_908636764"}, header_56);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1750145464"}, header_56);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(11, 28, 40, 18, 6, 2017)}, header_56);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_56);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_56);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_217050945"}, header_56);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{588178175}, header_56);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_1546160476"}, header_56);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_656584383"}, header_56);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_305463370"}, header_56);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(10, 49, 5, 27, 12, 2003)}, header_56);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1379613207"}, header_56);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_273790198"}, header_56);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_1102138208"}, header_56);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_250051002"}, header_56);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1577838803}, header_56);
  all_values.push_back(header_56);
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
