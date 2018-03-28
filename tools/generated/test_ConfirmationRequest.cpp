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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ConfirmationRequest msg;

  list<multiset<string>> all_values;
  multiset<string> ConfirmationRequest_0;
  FIX::AllocAccount AllocAccount_11("STRING_1491723316");
  msg.set(AllocAccount_11);
  ConfirmationRequest_0.insert(AllocAccount_11.getString());
  FIX::AllocAccountType AllocAccountType_1(1);
  msg.set(AllocAccountType_1);
  ConfirmationRequest_0.insert(AllocAccountType_1.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_11(479884017);
  msg.set(AllocAcctIDSource_11);
  ConfirmationRequest_0.insert(AllocAcctIDSource_11.getString());
  FIX::AllocID AllocID_6("STRING_866640086");
  msg.set(AllocID_6);
  ConfirmationRequest_0.insert(AllocID_6.getString());
  FIX::ConfirmReqID ConfirmReqID_1("STRING_988377617");
  msg.set(ConfirmReqID_1);
  ConfirmationRequest_0.insert(ConfirmReqID_1.getString());
  FIX::ConfirmType ConfirmType_1(2);
  msg.set(ConfirmType_1);
  ConfirmationRequest_0.insert(ConfirmType_1.getString());
  FIX::EncodedText EncodedText_21("DATA_1128646575");
  msg.set(EncodedText_21);
  ConfirmationRequest_0.insert(EncodedText_21.getString());
  FIX::EncodedTextLen EncodedTextLen_21(874087924);
  msg.set(EncodedTextLen_21);
  ConfirmationRequest_0.insert(EncodedTextLen_21.getString());
  FIX::IndividualAllocID IndividualAllocID_11("STRING_1125704352");
  msg.set(IndividualAllocID_11);
  ConfirmationRequest_0.insert(IndividualAllocID_11.getString());
  FIX::SecondaryAllocID SecondaryAllocID_6("STRING_291386277");
  msg.set(SecondaryAllocID_6);
  ConfirmationRequest_0.insert(SecondaryAllocID_6.getString());
  FIX::Text Text_21("STRING_1265856486");
  msg.set(Text_21);
  ConfirmationRequest_0.insert(Text_21.getString());
  FIX::TransactTime TransactTime_12(FIX::UTCTIMESTAMP(3, 57, 40, 24, 3, 2002));
  msg.set(TransactTime_12);
  ConfirmationRequest_0.insert(TransactTime_12.getString());
  all_values.push_back(ConfirmationRequest_0);

  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_10;
    FIX::ClOrdID ClOrdID_16("STRING_1711935023");
    noOrders_0_0.set(ClOrdID_16);
    OrdAllocGrp_NoOrders_10.insert(ClOrdID_16.getString());
    FIX::ListID ListID_12("STRING_508121279");
    noOrders_0_0.set(ListID_12);
    OrdAllocGrp_NoOrders_10.insert(ListID_12.getString());
    FIX::OrderAvgPx OrderAvgPx_10;
    OrderAvgPx_10.setString("19010909");
    noOrders_0_0.set(OrderAvgPx_10);
    OrdAllocGrp_NoOrders_10.insert(OrderAvgPx_10.getString());
    FIX::OrderBookingQty OrderBookingQty_10;
    OrderBookingQty_10.setString("5781201");
    noOrders_0_0.set(OrderBookingQty_10);
    OrdAllocGrp_NoOrders_10.insert(OrderBookingQty_10.getString());
    FIX::OrderID OrderID_16("STRING_698001427");
    noOrders_0_0.set(OrderID_16);
    OrdAllocGrp_NoOrders_10.insert(OrderID_16.getString());
    FIX::OrderQty OrderQty_10;
    OrderQty_10.setString("9068954");
    noOrders_0_0.set(OrderQty_10);
    OrdAllocGrp_NoOrders_10.insert(OrderQty_10.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_16("STRING_399311482");
    noOrders_0_0.set(SecondaryClOrdID_16);
    OrdAllocGrp_NoOrders_10.insert(SecondaryClOrdID_16.getString());
    FIX::SecondaryOrderID SecondaryOrderID_16("STRING_109742221");
    noOrders_0_0.set(SecondaryOrderID_16);
    OrdAllocGrp_NoOrders_10.insert(SecondaryOrderID_16.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_10);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_21;
      FIX::Nested2PartyID Nested2PartyID_21("STRING_1425203828");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_21);
      NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyID_21.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_21('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_21);
      NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyIDSource_21.getString());
      FIX::Nested2PartyRole Nested2PartyRole_21(1710773461);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_21);
      NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyRole_21.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_21);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_43;
        FIX::Nested2PartySubID Nested2PartySubID_43("STRING_1206927717");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_43);
        NstdPtys2SubGrp_NoNested2PartySubIDs_43.insert(Nested2PartySubID_43.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_43(43173831);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_43);
        NstdPtys2SubGrp_NoNested2PartySubIDs_43.insert(Nested2PartySubIDType_43.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_43);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_44;
        FIX::Nested2PartySubID Nested2PartySubID_44("STRING_1636083583");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_44);
        NstdPtys2SubGrp_NoNested2PartySubIDs_44.insert(Nested2PartySubID_44.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_44(47821686);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_44);
        NstdPtys2SubGrp_NoNested2PartySubIDs_44.insert(Nested2PartySubIDType_44.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_44);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_22;
      FIX::Nested2PartyID Nested2PartyID_22("STRING_1236530614");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_22);
      NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyID_22.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_22('6');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_22);
      NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyIDSource_22.getString());
      FIX::Nested2PartyRole Nested2PartyRole_22(921909610);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_22);
      NestedParties2_NoNested2PartyIDs_22.insert(Nested2PartyRole_22.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_22);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_45;
        FIX::Nested2PartySubID Nested2PartySubID_45("STRING_908632787");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_45);
        NstdPtys2SubGrp_NoNested2PartySubIDs_45.insert(Nested2PartySubID_45.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_45(40282449);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_45);
        NstdPtys2SubGrp_NoNested2PartySubIDs_45.insert(Nested2PartySubIDType_45.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_45);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_46;
        FIX::Nested2PartySubID Nested2PartySubID_46("STRING_1147957026");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_46);
        NstdPtys2SubGrp_NoNested2PartySubIDs_46.insert(Nested2PartySubID_46.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_46(807541014);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_46);
        NstdPtys2SubGrp_NoNested2PartySubIDs_46.insert(Nested2PartySubIDType_46.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_46);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_47;
        FIX::Nested2PartySubID Nested2PartySubID_47("STRING_2020536606");
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubID_47);
        NstdPtys2SubGrp_NoNested2PartySubIDs_47.insert(Nested2PartySubID_47.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_47(157841438);
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubIDType_47);
        NstdPtys2SubGrp_NoNested2PartySubIDs_47.insert(Nested2PartySubIDType_47.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_47);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
