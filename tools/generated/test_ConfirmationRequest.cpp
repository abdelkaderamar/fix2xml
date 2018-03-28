#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ConfirmationRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ConfirmationRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ConfirmationRequest msg;

  list<multiset<string>> all_values;
  multiset<string> ConfirmationRequest_0;
  FIX::AllocAccount AllocAccount_9("STRING_1583260724");
  msg.set(AllocAccount_9);
  ConfirmationRequest_0.insert(AllocAccount_9.getString());
  FIX::AllocAccountType AllocAccountType_1(8);
  msg.set(AllocAccountType_1);
  ConfirmationRequest_0.insert(AllocAccountType_1.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_9(1046908936);
  msg.set(AllocAcctIDSource_9);
  ConfirmationRequest_0.insert(AllocAcctIDSource_9.getString());
  FIX::AllocID AllocID_6("STRING_1091691278");
  msg.set(AllocID_6);
  ConfirmationRequest_0.insert(AllocID_6.getString());
  FIX::ConfirmReqID ConfirmReqID_1("STRING_1452315877");
  msg.set(ConfirmReqID_1);
  ConfirmationRequest_0.insert(ConfirmReqID_1.getString());
  FIX::ConfirmType ConfirmType_1(3);
  msg.set(ConfirmType_1);
  ConfirmationRequest_0.insert(ConfirmType_1.getString());
  FIX::EncodedText EncodedText_23("DATA_579356459");
  msg.set(EncodedText_23);
  ConfirmationRequest_0.insert(EncodedText_23.getString());
  FIX::EncodedTextLen EncodedTextLen_23(1845627640);
  msg.set(EncodedTextLen_23);
  ConfirmationRequest_0.insert(EncodedTextLen_23.getString());
  FIX::IndividualAllocID IndividualAllocID_9("STRING_1005461648");
  msg.set(IndividualAllocID_9);
  ConfirmationRequest_0.insert(IndividualAllocID_9.getString());
  FIX::SecondaryAllocID SecondaryAllocID_6("STRING_1141816339");
  msg.set(SecondaryAllocID_6);
  ConfirmationRequest_0.insert(SecondaryAllocID_6.getString());
  FIX::Text Text_23("STRING_1935554798");
  msg.set(Text_23);
  ConfirmationRequest_0.insert(Text_23.getString());
  FIX::TransactTime TransactTime_12(FIX::UTCTIMESTAMP(10, 29, 15, 5, 5, 2011));
  msg.set(TransactTime_12);
  ConfirmationRequest_0.insert(TransactTime_12.getString());
  all_values.push_back(ConfirmationRequest_0);

  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_7;
    FIX::ClOrdID ClOrdID_13("STRING_1484190904");
    noOrders_0_0.set(ClOrdID_13);
    OrdAllocGrp_NoOrders_7.insert(ClOrdID_13.getString());
    FIX::ListID ListID_13("STRING_1724114634");
    noOrders_0_0.set(ListID_13);
    OrdAllocGrp_NoOrders_7.insert(ListID_13.getString());
    FIX::OrderAvgPx OrderAvgPx_7;
    OrderAvgPx_7.setString("2551236");
    noOrders_0_0.set(OrderAvgPx_7);
    OrdAllocGrp_NoOrders_7.insert(OrderAvgPx_7.getString());
    FIX::OrderBookingQty OrderBookingQty_7;
    OrderBookingQty_7.setString("8927190");
    noOrders_0_0.set(OrderBookingQty_7);
    OrdAllocGrp_NoOrders_7.insert(OrderBookingQty_7.getString());
    FIX::OrderID OrderID_13("STRING_1265593628");
    noOrders_0_0.set(OrderID_13);
    OrdAllocGrp_NoOrders_7.insert(OrderID_13.getString());
    FIX::OrderQty OrderQty_7;
    OrderQty_7.setString("6428149");
    noOrders_0_0.set(OrderQty_7);
    OrdAllocGrp_NoOrders_7.insert(OrderQty_7.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_13("STRING_2049096812");
    noOrders_0_0.set(SecondaryClOrdID_13);
    OrdAllocGrp_NoOrders_7.insert(SecondaryClOrdID_13.getString());
    FIX::SecondaryOrderID SecondaryOrderID_13("STRING_682243054");
    noOrders_0_0.set(SecondaryOrderID_13);
    OrdAllocGrp_NoOrders_7.insert(SecondaryOrderID_13.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_7);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_12;
      FIX::Nested2PartyID Nested2PartyID_12("STRING_1405721500");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyID_12.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_12('9');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyIDSource_12.getString());
      FIX::Nested2PartyRole Nested2PartyRole_12(1163870443);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_12);
      NestedParties2_NoNested2PartyIDs_12.insert(Nested2PartyRole_12.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_12);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_28;
        FIX::Nested2PartySubID Nested2PartySubID_28("STRING_1274186879");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_28);
        NstdPtys2SubGrp_NoNested2PartySubIDs_28.insert(Nested2PartySubID_28.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_28(63295732);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_28);
        NstdPtys2SubGrp_NoNested2PartySubIDs_28.insert(Nested2PartySubIDType_28.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_28);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_29;
        FIX::Nested2PartySubID Nested2PartySubID_29("STRING_1933189855");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_29);
        NstdPtys2SubGrp_NoNested2PartySubIDs_29.insert(Nested2PartySubID_29.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_29(579019108);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_29);
        NstdPtys2SubGrp_NoNested2PartySubIDs_29.insert(Nested2PartySubIDType_29.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_29);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    msg.addGroup(noOrders_0_0);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }

  for (const auto& xml_l : elt_lists) {
    bool found = false;
    for (const auto& l : all_values) {
      if (includes(l.begin(), l.end(), xml_l.begin(), xml_l.end())) {
        found = true;
        break;
      } // end if includes
    } // end for all_values
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
