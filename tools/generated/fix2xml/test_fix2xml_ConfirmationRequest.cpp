#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::ConfirmationRequest msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ConfirmationRequest_0;
  set_field(msg, FIX::AllocAccount{"STRING_1318964613"}, ConfirmationRequest_0);
  set_field(msg, FIX::AllocAccountType{2}, ConfirmationRequest_0);
  set_field(msg, FIX::AllocAcctIDSource{586617231}, ConfirmationRequest_0);
  set_field(msg, FIX::AllocID{"STRING_1539962556"}, ConfirmationRequest_0);
  set_field(msg, FIX::ConfirmReqID{"STRING_364886096"}, ConfirmationRequest_0);
  set_field(msg, FIX::ConfirmType{2}, ConfirmationRequest_0);
  set_field(msg, FIX::EncodedText{"DATA_1473985396"}, ConfirmationRequest_0);
  set_field(msg, FIX::EncodedTextLen{1873731732}, ConfirmationRequest_0);
  set_field(msg, FIX::IndividualAllocID{"STRING_407691806"}, ConfirmationRequest_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_1380187458"}, ConfirmationRequest_0);
  set_field(msg, FIX::Text{"STRING_1102678121"}, ConfirmationRequest_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(5, 16, 32, 16, 9, 2000)}, ConfirmationRequest_0);
  all_values.push_back(ConfirmationRequest_0);

  all_compo_names.insert("ConfirmationRequest");

  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_8;
    set_field(noOrders_0_0, FIX::ClOrdID{"STRING_193023357"}, OrdAllocGrp_NoOrders_8);
    set_field(noOrders_0_0, FIX::ListID{"STRING_339638259"}, OrdAllocGrp_NoOrders_8);
    FIX::OrderAvgPx OrderAvgPx_8;
    OrderAvgPx_8.setString("18925783");
set_field(noOrders_0_0, OrderAvgPx_8, OrdAllocGrp_NoOrders_8);
    FIX::OrderBookingQty OrderBookingQty_8;
    OrderBookingQty_8.setString("12444653");
set_field(noOrders_0_0, OrderBookingQty_8, OrdAllocGrp_NoOrders_8);
    set_field(noOrders_0_0, FIX::OrderID{"STRING_163153559"}, OrdAllocGrp_NoOrders_8);
    FIX::OrderQty OrderQty_8;
    OrderQty_8.setString("17745021");
set_field(noOrders_0_0, OrderQty_8, OrdAllocGrp_NoOrders_8);
    set_field(noOrders_0_0, FIX::SecondaryClOrdID{"STRING_357995652"}, OrdAllocGrp_NoOrders_8);
    set_field(noOrders_0_0, FIX::SecondaryOrderID{"STRING_864000927"}, OrdAllocGrp_NoOrders_8);
    all_values.push_back(OrdAllocGrp_NoOrders_8);
    all_compo_names.insert("...NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_15;
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyID{"STRING_72765285"}, NestedParties2_NoNested2PartyIDs_15);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyIDSource{'8'}, NestedParties2_NoNested2PartyIDs_15);
      set_field(noNested2PartyIDs_0_1_0, FIX::Nested2PartyRole{4473822}, NestedParties2_NoNested2PartyIDs_15);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_15);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_28;
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubID{"STRING_1094507932"}, NstdPtys2SubGrp_NoNested2PartySubIDs_28);
        set_field(noNested2PartySubIDs_0_0_2_0, FIX::Nested2PartySubIDType{591091053}, NstdPtys2SubGrp_NoNested2PartySubIDs_28);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_28);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_29;
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubID{"STRING_784208807"}, NstdPtys2SubGrp_NoNested2PartySubIDs_29);
        set_field(noNested2PartySubIDs_0_0_2_1, FIX::Nested2PartySubIDType{1459394028}, NstdPtys2SubGrp_NoNested2PartySubIDs_29);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_29);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_16;
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyID{"STRING_182642870"}, NestedParties2_NoNested2PartyIDs_16);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyIDSource{'1'}, NestedParties2_NoNested2PartyIDs_16);
      set_field(noNested2PartyIDs_0_1_1, FIX::Nested2PartyRole{1185642113}, NestedParties2_NoNested2PartyIDs_16);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_16);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_30;
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubID{"STRING_1490898014"}, NstdPtys2SubGrp_NoNested2PartySubIDs_30);
        set_field(noNested2PartySubIDs_0_1_2_0, FIX::Nested2PartySubIDType{140836586}, NstdPtys2SubGrp_NoNested2PartySubIDs_30);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_30);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_31;
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubID{"STRING_660804786"}, NstdPtys2SubGrp_NoNested2PartySubIDs_31);
        set_field(noNested2PartySubIDs_0_1_2_1, FIX::Nested2PartySubIDType{360450467}, NstdPtys2SubGrp_NoNested2PartySubIDs_31);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_31);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_17;
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyID{"STRING_1266057702"}, NestedParties2_NoNested2PartyIDs_17);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyIDSource{'9'}, NestedParties2_NoNested2PartyIDs_17);
      set_field(noNested2PartyIDs_0_1_2, FIX::Nested2PartyRole{1091138400}, NestedParties2_NoNested2PartyIDs_17);
      all_values.push_back(NestedParties2_NoNested2PartyIDs_17);
      all_compo_names.insert("...NoOrders...NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_32;
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubID{"STRING_63090253"}, NstdPtys2SubGrp_NoNested2PartySubIDs_32);
        set_field(noNested2PartySubIDs_0_2_2_0, FIX::Nested2PartySubIDType{1174738710}, NstdPtys2SubGrp_NoNested2PartySubIDs_32);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_32);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_33;
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubID{"STRING_1528339007"}, NstdPtys2SubGrp_NoNested2PartySubIDs_33);
        set_field(noNested2PartySubIDs_0_2_2_1, FIX::Nested2PartySubIDType{402728512}, NstdPtys2SubGrp_NoNested2PartySubIDs_33);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_33);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_34;
        set_field(noNested2PartySubIDs_0_2_2_2, FIX::Nested2PartySubID{"STRING_919833405"}, NstdPtys2SubGrp_NoNested2PartySubIDs_34);
        set_field(noNested2PartySubIDs_0_2_2_2, FIX::Nested2PartySubIDType{625320717}, NstdPtys2SubGrp_NoNested2PartySubIDs_34);
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_34);
        all_compo_names.insert("...NoOrders...NoNested2PartyIDs...NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  // header
  multiset<string> header_22;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_1"}, header_22);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_546851932"}, header_22);
  set_header_field(msg.getHeader(), FIX::BodyLength{983316369}, header_22);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1429882999"}, header_22);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_772212867"}, header_22);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_1056081655"}, header_22);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_160969798"}, header_22);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{776686689}, header_22);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_SHIFT_JIS"}, header_22);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{1255477730}, header_22);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1367777743"}, header_22);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_1084536713"}, header_22);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_567388110"}, header_22);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(13, 23, 50, 16, 2, 2006)}, header_22);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_22);
  set_header_field(msg.getHeader(), FIX::PossResend{true}, header_22);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1613631806"}, header_22);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{1990250503}, header_22);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_200272866"}, header_22);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1676722059"}, header_22);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_1017505565"}, header_22);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(20, 50, 43, 7, 11, 2016)}, header_22);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1927731994"}, header_22);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1108920122"}, header_22);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_98363319"}, header_22);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_2088701792"}, header_22);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{1885606811}, header_22);
  all_values.push_back(header_22);
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
