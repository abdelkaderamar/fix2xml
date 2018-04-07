#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ListStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStatus, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListStatus msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListStatus_0;
  set_field(msg, FIX::ContingencyType{4}, ListStatus_0);
  set_field(msg, FIX::EncodedListStatusText{"DATA_2052310855"}, ListStatus_0);
  set_field(msg, FIX::EncodedListStatusTextLen{1592611650}, ListStatus_0);
  set_field(msg, FIX::LastFragment{false}, ListStatus_0);
  set_field(msg, FIX::ListID{"STRING_190246334"}, ListStatus_0);
  set_field(msg, FIX::ListOrderStatus{3}, ListStatus_0);
  set_field(msg, FIX::ListRejectReason{2}, ListStatus_0);
  set_field(msg, FIX::ListStatusText{"STRING_41378805"}, ListStatus_0);
  set_field(msg, FIX::ListStatusType{1}, ListStatus_0);
  set_field(msg, FIX::NoRpts{389765358}, ListStatus_0);
  set_field(msg, FIX::RptSeq{1080900668}, ListStatus_0);
  set_field(msg, FIX::TotNoOrders{1835811811}, ListStatus_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(10, 11, 3, 20, 3, 2014)}, ListStatus_0);
  all_values.push_back(ListStatus_0);

  all_compo_names.insert("ListStatus");

  // OrdListStatGrp
  // Group OrdListStatGrp.NoOrders
  {
    FIX50SP2::ListStatus::NoOrders noOrders_0_0;
    // OrdListStatGrp.NoOrders
    multiset<string> OrdListStatGrp_NoOrders_0;
    FIX::AvgPx AvgPx_6;
    AvgPx_6.setString("4943583");
set_field(noOrders_0_0, AvgPx_6, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_1269546663"}, OrdListStatGrp_NoOrders_0);
    FIX::CumQty CumQty_2;
    CumQty_2.setString("13575283");
set_field(noOrders_0_0, CumQty_2, OrdListStatGrp_NoOrders_0);
    FIX::CxlQty CxlQty_0;
    CxlQty_0.setString("20190375");
set_field(noOrders_0_0, CxlQty_0, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EncodedText{"DATA_1847670322"}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::EncodedTextLen{1506788662}, OrdListStatGrp_NoOrders_0);
    FIX::LeavesQty LeavesQty_1;
    LeavesQty_1.setString("8782910");
set_field(noOrders_0_0, LeavesQty_1, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrdRejReason{11}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrdStatus{'3'}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_1425660831"}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_761897995"}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::Text{"STRING_483174983"}, OrdListStatGrp_NoOrders_0);
    set_field(noOrders_0_0, FIX::WorkingIndicator{false}, OrdListStatGrp_NoOrders_0);
    all_values.push_back(OrdListStatGrp_NoOrders_0);
    all_compo_names.insert("...NoOrders");

    msg.addGroup(noOrders_0_0);
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
