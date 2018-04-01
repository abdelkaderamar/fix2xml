#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
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
  FIX50SP2::OrderCancelReject msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReject_0;
  set_field(msg, FIX::Account{"STRING_696746807"}, OrderCancelReject_0);
  set_field(msg, FIX::AccountType{7}, OrderCancelReject_0);
  set_field(msg, FIX::AcctIDSource{3}, OrderCancelReject_0);
  set_field(msg, FIX::ClOrdID{"STRING_980034718"}, OrderCancelReject_0);
  set_field(msg, FIX::ClOrdLinkID{"STRING_106818337"}, OrderCancelReject_0);
  set_field(msg, FIX::CxlRejReason{2}, OrderCancelReject_0);
  set_field(msg, FIX::CxlRejResponseTo{'2'}, OrderCancelReject_0);
  set_field(msg, FIX::EncodedText{"DATA_1002489708"}, OrderCancelReject_0);
  set_field(msg, FIX::EncodedTextLen{1279167103}, OrderCancelReject_0);
  set_field(msg, FIX::ListID{"STRING_404324965"}, OrderCancelReject_0);
  set_field(msg, FIX::OrdStatus{'6'}, OrderCancelReject_0);
  set_field(msg, FIX::OrderID{"STRING_1803637485"}, OrderCancelReject_0);
  set_field(msg, FIX::OrigClOrdID{"STRING_1747300035"}, OrderCancelReject_0);
  set_field(msg, FIX::OrigOrdModTime{FIX::UTCTIMESTAMP(18, 40, 43, 11, 10, 2015)}, OrderCancelReject_0);
  set_field(msg, FIX::SecondaryClOrdID{"STRING_231845835"}, OrderCancelReject_0);
  set_field(msg, FIX::SecondaryOrderID{"STRING_1483653653"}, OrderCancelReject_0);
  set_field(msg, FIX::Text{"STRING_2012846512"}, OrderCancelReject_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1865182694"}, OrderCancelReject_0);
  set_field(msg, FIX::TradeOriginationDate{"LOCALMKTDATE_773480987"}, OrderCancelReject_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(10, 4, 39, 16, 2, 2000)}, OrderCancelReject_0);
  set_field(msg, FIX::WorkingIndicator{true}, OrderCancelReject_0);
  all_values.push_back(OrderCancelReject_0);

  all_compo_names.insert("OrderCancelReject");


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
