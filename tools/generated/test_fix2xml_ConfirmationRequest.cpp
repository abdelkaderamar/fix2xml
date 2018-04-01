#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ConfirmationRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ConfirmationRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ConfirmationRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ConfirmationRequest_0;
  set_field(msg, FIX::AllocAccount{"STRING_1043306116"}, ConfirmationRequest_0);
  set_field(msg, FIX::AllocAccountType{4}, ConfirmationRequest_0);
  set_field(msg, FIX::AllocAcctIDSource{1038020110}, ConfirmationRequest_0);
  set_field(msg, FIX::AllocID{"STRING_1365723931"}, ConfirmationRequest_0);
  set_field(msg, FIX::ConfirmReqID{"STRING_1073921916"}, ConfirmationRequest_0);
  set_field(msg, FIX::ConfirmType{1}, ConfirmationRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1289522193"}, ConfirmationRequest_0);
  set_field(msg, FIX::EncodedTextLen{816932167}, ConfirmationRequest_0);
  set_field(msg, FIX::IndividualAllocID{"STRING_293790871"}, ConfirmationRequest_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_550303704"}, ConfirmationRequest_0);
  set_field(msg, FIX::Text{"STRING_861849951"}, ConfirmationRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(22, 11, 13, 4, 9, 2013)}, ConfirmationRequest_0);
  all_values.push_back(ConfirmationRequest_0);

  all_compo_names.insert("ConfirmationRequest");

  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_6;
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_296590432"}, OrdAllocGrp_NoOrders_6);
    set_field(noOrders_0_0, FIX::ListID{"STRING_473436214"}, OrdAllocGrp_NoOrders_6);
    FIX::OrderAvgPx OrderAvgPx_6;
    OrderAvgPx_6.setString("9631846");
set_field(noOrders_0_0, OrderAvgPx_6, OrdAllocGrp_NoOrders_6);
    FIX::OrderBookingQty OrderBookingQty_6;
    OrderBookingQty_6.setString("8939197");
set_field(noOrders_0_0, OrderBookingQty_6, OrdAllocGrp_NoOrders_6);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_1328553936"}, OrdAllocGrp_NoOrders_6);
    FIX::OrderQty OrderQty_6;
    OrderQty_6.setString("18610670");
set_field(noOrders_0_0, OrderQty_6, OrdAllocGrp_NoOrders_6);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_803734262"}, OrdAllocGrp_NoOrders_6);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_1920089176"}, OrdAllocGrp_NoOrders_6);
    all_values.push_back(OrdAllocGrp_NoOrders_6);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_13;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_1738835060"}, NestedParties2_NoNested2PartyIDs_13);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'6'}, NestedParties2_NoNested2PartyIDs_13);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{2019472325}, NestedParties2_NoNested2PartyIDs_13);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_13);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_29;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_1617432244"}, NstdPtys2SubGrp_NoNested2PartySubIDs_29);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{910008787}, NstdPtys2SubGrp_NoNested2PartySubIDs_29);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_29);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_30;
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubID{"STRING_2000381460"}, NstdPtys2SubGrp_NoNested2PartySubIDs_30);
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubIDType{543870512}, NstdPtys2SubGrp_NoNested2PartySubIDs_30);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_30);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_14;
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyID{"STRING_1170551302"}, NestedParties2_NoNested2PartyIDs_14);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_14);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyRole{1360802679}, NestedParties2_NoNested2PartyIDs_14);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_14);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_31;
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubID{"STRING_1692723709"}, NstdPtys2SubGrp_NoNested2PartySubIDs_31);
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubIDType{75168982}, NstdPtys2SubGrp_NoNested2PartySubIDs_31);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_31);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_15;
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyID{"STRING_365317446"}, NestedParties2_NoNested2PartyIDs_15);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_15);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyRole{1820809234}, NestedParties2_NoNested2PartyIDs_15);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_15);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_32;
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubID{"STRING_1866846508"}, NstdPtys2SubGrp_NoNested2PartySubIDs_32);
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubIDType{1199041210}, NstdPtys2SubGrp_NoNested2PartySubIDs_32);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_32);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_33;
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubID{"STRING_727818360"}, NstdPtys2SubGrp_NoNested2PartySubIDs_33);
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubIDType{1323664458}, NstdPtys2SubGrp_NoNested2PartySubIDs_33);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_33);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_7;
    set_field(noOrders_0_1, FIX::ClOrdID{"STRING_1495631642"}, OrdAllocGrp_NoOrders_7);
    set_field(noOrders_0_1, FIX::ListID{"STRING_1201254575"}, OrdAllocGrp_NoOrders_7);
    FIX::OrderAvgPx OrderAvgPx_7;
    OrderAvgPx_7.setString("1393654");
set_field(noOrders_0_1, OrderAvgPx_7, OrdAllocGrp_NoOrders_7);
    FIX::OrderBookingQty OrderBookingQty_7;
    OrderBookingQty_7.setString("2420677");
set_field(noOrders_0_1, OrderBookingQty_7, OrdAllocGrp_NoOrders_7);
    set_field(noOrders_0_1, FIX::OrderID{"STRING_382324863"}, OrdAllocGrp_NoOrders_7);
    FIX::OrderQty OrderQty_7;
    OrderQty_7.setString("20004324");
set_field(noOrders_0_1, OrderQty_7, OrdAllocGrp_NoOrders_7);
    set_field(noOrders_0_1, FIX::SecondaryClOrdID{"STRING_1045802016"}, OrdAllocGrp_NoOrders_7);
    set_field(noOrders_0_1, FIX::SecondaryOrderID{"STRING_154930391"}, OrdAllocGrp_NoOrders_7);
    all_values.push_back(OrdAllocGrp_NoOrders_7);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_16;
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyID{"STRING_637153428"}, NestedParties2_NoNested2PartyIDs_16);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyIDSource{'7'}, NestedParties2_NoNested2PartyIDs_16);
      set_field(noNested2PartyIDs_1_1_0, FIX::Nested2PartyRole{214758369}, NestedParties2_NoNested2PartyIDs_16);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_16);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_34;
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubID{"STRING_227434499"}, NstdPtys2SubGrp_NoNested2PartySubIDs_34);
        set_field(noNested2PartySubIDs_1_0_2_0, FIX::Nested2PartySubIDType{1124767156}, NstdPtys2SubGrp_NoNested2PartySubIDs_34);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_34);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_35;
        set_field(noNested2PartySubIDs_1_0_2_1, FIX::Nested2PartySubID{"STRING_1124708768"}, NstdPtys2SubGrp_NoNested2PartySubIDs_35);
        set_field(noNested2PartySubIDs_1_0_2_1, FIX::Nested2PartySubIDType{771305012}, NstdPtys2SubGrp_NoNested2PartySubIDs_35);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_35);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    msg.addGroup(noOrders_0_1);
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
