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
  multiset<string> all_compo_names;
  multiset<string> ConfirmationRequest_0;
  FIX::AllocAccount AllocAccount_8("STRING_1492572310");
  msg.set(AllocAccount_8);
  ConfirmationRequest_0.insert(AllocAccount_8.getString());
  FIX::AllocAccountType AllocAccountType_1(6);
  msg.set(AllocAccountType_1);
  ConfirmationRequest_0.insert(AllocAccountType_1.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_8(1811704893);
  msg.set(AllocAcctIDSource_8);
  ConfirmationRequest_0.insert(AllocAcctIDSource_8.getString());
  FIX::AllocID AllocID_6("STRING_1465598401");
  msg.set(AllocID_6);
  ConfirmationRequest_0.insert(AllocID_6.getString());
  FIX::ConfirmReqID ConfirmReqID_1("STRING_351492811");
  msg.set(ConfirmReqID_1);
  ConfirmationRequest_0.insert(ConfirmReqID_1.getString());
  FIX::ConfirmType ConfirmType_1(2);
  msg.set(ConfirmType_1);
  ConfirmationRequest_0.insert(ConfirmType_1.getString());
  FIX::EncodedText EncodedText_23("DATA_428340220");
  msg.set(EncodedText_23);
  ConfirmationRequest_0.insert(EncodedText_23.getString());
  FIX::EncodedTextLen EncodedTextLen_23(606305379);
  msg.set(EncodedTextLen_23);
  ConfirmationRequest_0.insert(EncodedTextLen_23.getString());
  FIX::IndividualAllocID IndividualAllocID_8("STRING_536966315");
  msg.set(IndividualAllocID_8);
  ConfirmationRequest_0.insert(IndividualAllocID_8.getString());
  FIX::SecondaryAllocID SecondaryAllocID_6("STRING_649347496");
  msg.set(SecondaryAllocID_6);
  ConfirmationRequest_0.insert(SecondaryAllocID_6.getString());
  FIX::Text Text_23("STRING_1405630212");
  msg.set(Text_23);
  ConfirmationRequest_0.insert(Text_23.getString());
  FIX::TransactTime TransactTime_12(FIX::UTCTIMESTAMP(12, 0, 56, 21, 10, 2006));
  msg.set(TransactTime_12);
  ConfirmationRequest_0.insert(TransactTime_12.getString());
  all_values.push_back(ConfirmationRequest_0);

  all_compo_names.insert("ConfirmationRequest");

  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_7;
    FIX::ClOrdID ClOrdID_13("STRING_1810002481");
    noOrders_0_0.set(ClOrdID_13);
    OrdAllocGrp_NoOrders_7.insert(ClOrdID_13.getString());
    FIX::ListID ListID_13("STRING_975938832");
    noOrders_0_0.set(ListID_13);
    OrdAllocGrp_NoOrders_7.insert(ListID_13.getString());
    FIX::OrderAvgPx OrderAvgPx_7;
    OrderAvgPx_7.setString("20418683");
    noOrders_0_0.set(OrderAvgPx_7);
    OrdAllocGrp_NoOrders_7.insert(OrderAvgPx_7.getString());
    FIX::OrderBookingQty OrderBookingQty_7;
    OrderBookingQty_7.setString("6137561");
    noOrders_0_0.set(OrderBookingQty_7);
    OrdAllocGrp_NoOrders_7.insert(OrderBookingQty_7.getString());
    FIX::OrderID OrderID_13("STRING_578731118");
    noOrders_0_0.set(OrderID_13);
    OrdAllocGrp_NoOrders_7.insert(OrderID_13.getString());
    FIX::OrderQty OrderQty_7;
    OrderQty_7.setString("2031927");
    noOrders_0_0.set(OrderQty_7);
    OrdAllocGrp_NoOrders_7.insert(OrderQty_7.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_13("STRING_1095717840");
    noOrders_0_0.set(SecondaryClOrdID_13);
    OrdAllocGrp_NoOrders_7.insert(SecondaryClOrdID_13.getString());
    FIX::SecondaryOrderID SecondaryOrderID_13("STRING_194747869");
    noOrders_0_0.set(SecondaryOrderID_13);
    OrdAllocGrp_NoOrders_7.insert(SecondaryOrderID_13.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_7);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_15;
      FIX::Nested2PartyID Nested2PartyID_15("STRING_827451468");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_15);
      NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyID_15.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_15('1');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_15);
      NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyIDSource_15.getString());
      FIX::Nested2PartyRole Nested2PartyRole_15(1371781311);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_15);
      NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyRole_15.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_15);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_31;
        FIX::Nested2PartySubID Nested2PartySubID_31("STRING_1512925912");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_31);
        NstdPtys2SubGrp_NoNested2PartySubIDs_31.insert(Nested2PartySubID_31.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_31(1036002556);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_31);
        NstdPtys2SubGrp_NoNested2PartySubIDs_31.insert(Nested2PartySubIDType_31.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_31);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_32;
        FIX::Nested2PartySubID Nested2PartySubID_32("STRING_1638138531");
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubID_32);
        NstdPtys2SubGrp_NoNested2PartySubIDs_32.insert(Nested2PartySubID_32.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_32(1864418723);
        noNested2PartySubIDs_0_0_2_1.set(Nested2PartySubIDType_32);
        NstdPtys2SubGrp_NoNested2PartySubIDs_32.insert(Nested2PartySubIDType_32.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_32);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_33;
        FIX::Nested2PartySubID Nested2PartySubID_33("STRING_2093702355");
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubID_33);
        NstdPtys2SubGrp_NoNested2PartySubIDs_33.insert(Nested2PartySubID_33.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_33(2066478751);
        noNested2PartySubIDs_0_0_2_2.set(Nested2PartySubIDType_33);
        NstdPtys2SubGrp_NoNested2PartySubIDs_33.insert(Nested2PartySubIDType_33.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_33);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_16;
      FIX::Nested2PartyID Nested2PartyID_16("STRING_323240455");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_16);
      NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyID_16.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_16('4');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_16);
      NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyIDSource_16.getString());
      FIX::Nested2PartyRole Nested2PartyRole_16(568342600);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_16);
      NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyRole_16.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_16);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_34;
        FIX::Nested2PartySubID Nested2PartySubID_34("STRING_1750858244");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_34);
        NstdPtys2SubGrp_NoNested2PartySubIDs_34.insert(Nested2PartySubID_34.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_34(966319228);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_34);
        NstdPtys2SubGrp_NoNested2PartySubIDs_34.insert(Nested2PartySubIDType_34.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_34);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_35;
        FIX::Nested2PartySubID Nested2PartySubID_35("STRING_816172380");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_35);
        NstdPtys2SubGrp_NoNested2PartySubIDs_35.insert(Nested2PartySubID_35.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_35(2015532581);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_35);
        NstdPtys2SubGrp_NoNested2PartySubIDs_35.insert(Nested2PartySubIDType_35.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_35);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_17;
      FIX::Nested2PartyID Nested2PartyID_17("STRING_74760509");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_17);
      NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyID_17.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_17('1');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_17);
      NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyIDSource_17.getString());
      FIX::Nested2PartyRole Nested2PartyRole_17(1842913989);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_17);
      NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyRole_17.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_17);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_36;
        FIX::Nested2PartySubID Nested2PartySubID_36("STRING_833962862");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_36);
        NstdPtys2SubGrp_NoNested2PartySubIDs_36.insert(Nested2PartySubID_36.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_36(671369173);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_36);
        NstdPtys2SubGrp_NoNested2PartySubIDs_36.insert(Nested2PartySubIDType_36.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_36);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_37;
        FIX::Nested2PartySubID Nested2PartySubID_37("STRING_265806251");
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubID_37);
        NstdPtys2SubGrp_NoNested2PartySubIDs_37.insert(Nested2PartySubID_37.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_37(1447719017);
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubIDType_37);
        NstdPtys2SubGrp_NoNested2PartySubIDs_37.insert(Nested2PartySubIDType_37.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_37);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_38;
        FIX::Nested2PartySubID Nested2PartySubID_38("STRING_1250100291");
        noNested2PartySubIDs_0_2_2_2.set(Nested2PartySubID_38);
        NstdPtys2SubGrp_NoNested2PartySubIDs_38.insert(Nested2PartySubID_38.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_38(468999008);
        noNested2PartySubIDs_0_2_2_2.set(Nested2PartySubIDType_38);
        NstdPtys2SubGrp_NoNested2PartySubIDs_38.insert(Nested2PartySubIDType_38.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_38);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_8;
    FIX::ClOrdID ClOrdID_14("STRING_395953209");
    noOrders_0_1.set(ClOrdID_14);
    OrdAllocGrp_NoOrders_8.insert(ClOrdID_14.getString());
    FIX::ListID ListID_14("STRING_1444848161");
    noOrders_0_1.set(ListID_14);
    OrdAllocGrp_NoOrders_8.insert(ListID_14.getString());
    FIX::OrderAvgPx OrderAvgPx_8;
    OrderAvgPx_8.setString("14950868");
    noOrders_0_1.set(OrderAvgPx_8);
    OrdAllocGrp_NoOrders_8.insert(OrderAvgPx_8.getString());
    FIX::OrderBookingQty OrderBookingQty_8;
    OrderBookingQty_8.setString("12234046");
    noOrders_0_1.set(OrderBookingQty_8);
    OrdAllocGrp_NoOrders_8.insert(OrderBookingQty_8.getString());
    FIX::OrderID OrderID_14("STRING_504650709");
    noOrders_0_1.set(OrderID_14);
    OrdAllocGrp_NoOrders_8.insert(OrderID_14.getString());
    FIX::OrderQty OrderQty_8;
    OrderQty_8.setString("7193845");
    noOrders_0_1.set(OrderQty_8);
    OrdAllocGrp_NoOrders_8.insert(OrderQty_8.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_14("STRING_1395944807");
    noOrders_0_1.set(SecondaryClOrdID_14);
    OrdAllocGrp_NoOrders_8.insert(SecondaryClOrdID_14.getString());
    FIX::SecondaryOrderID SecondaryOrderID_14("STRING_2017576621");
    noOrders_0_1.set(SecondaryOrderID_14);
    OrdAllocGrp_NoOrders_8.insert(SecondaryOrderID_14.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_8);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_18;
      FIX::Nested2PartyID Nested2PartyID_18("STRING_886599690");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_18);
      NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyID_18.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_18('1');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_18);
      NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyIDSource_18.getString());
      FIX::Nested2PartyRole Nested2PartyRole_18(1701605819);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_18);
      NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyRole_18.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_18);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_39;
        FIX::Nested2PartySubID Nested2PartySubID_39("STRING_2057752151");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_39);
        NstdPtys2SubGrp_NoNested2PartySubIDs_39.insert(Nested2PartySubID_39.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_39(37307193);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_39);
        NstdPtys2SubGrp_NoNested2PartySubIDs_39.insert(Nested2PartySubIDType_39.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_39);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_40;
        FIX::Nested2PartySubID Nested2PartySubID_40("STRING_1373937393");
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubID_40);
        NstdPtys2SubGrp_NoNested2PartySubIDs_40.insert(Nested2PartySubID_40.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_40(1639139171);
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubIDType_40);
        NstdPtys2SubGrp_NoNested2PartySubIDs_40.insert(Nested2PartySubIDType_40.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_40);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_41;
        FIX::Nested2PartySubID Nested2PartySubID_41("STRING_1788165438");
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubID_41);
        NstdPtys2SubGrp_NoNested2PartySubIDs_41.insert(Nested2PartySubID_41.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_41(192772973);
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubIDType_41);
        NstdPtys2SubGrp_NoNested2PartySubIDs_41.insert(Nested2PartySubIDType_41.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_41);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_19;
      FIX::Nested2PartyID Nested2PartyID_19("STRING_307827903");
      noNested2PartyIDs_1_1_1.set(Nested2PartyID_19);
      NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyID_19.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_19('1');
      noNested2PartyIDs_1_1_1.set(Nested2PartyIDSource_19);
      NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyIDSource_19.getString());
      FIX::Nested2PartyRole Nested2PartyRole_19(267533483);
      noNested2PartyIDs_1_1_1.set(Nested2PartyRole_19);
      NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyRole_19.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_19);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_42;
        FIX::Nested2PartySubID Nested2PartySubID_42("STRING_1351644712");
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubID_42);
        NstdPtys2SubGrp_NoNested2PartySubIDs_42.insert(Nested2PartySubID_42.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_42(638955070);
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubIDType_42);
        NstdPtys2SubGrp_NoNested2PartySubIDs_42.insert(Nested2PartySubIDType_42.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_42);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_0);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_1);
    }
    msg.addGroup(noOrders_0_1);
  }
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_2;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_9;
    FIX::ClOrdID ClOrdID_15("STRING_165751147");
    noOrders_0_2.set(ClOrdID_15);
    OrdAllocGrp_NoOrders_9.insert(ClOrdID_15.getString());
    FIX::ListID ListID_15("STRING_2023013885");
    noOrders_0_2.set(ListID_15);
    OrdAllocGrp_NoOrders_9.insert(ListID_15.getString());
    FIX::OrderAvgPx OrderAvgPx_9;
    OrderAvgPx_9.setString("9047613");
    noOrders_0_2.set(OrderAvgPx_9);
    OrdAllocGrp_NoOrders_9.insert(OrderAvgPx_9.getString());
    FIX::OrderBookingQty OrderBookingQty_9;
    OrderBookingQty_9.setString("16134701");
    noOrders_0_2.set(OrderBookingQty_9);
    OrdAllocGrp_NoOrders_9.insert(OrderBookingQty_9.getString());
    FIX::OrderID OrderID_15("STRING_1125630529");
    noOrders_0_2.set(OrderID_15);
    OrdAllocGrp_NoOrders_9.insert(OrderID_15.getString());
    FIX::OrderQty OrderQty_9;
    OrderQty_9.setString("13737603");
    noOrders_0_2.set(OrderQty_9);
    OrdAllocGrp_NoOrders_9.insert(OrderQty_9.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_15("STRING_2009423373");
    noOrders_0_2.set(SecondaryClOrdID_15);
    OrdAllocGrp_NoOrders_9.insert(SecondaryClOrdID_15.getString());
    FIX::SecondaryOrderID SecondaryOrderID_15("STRING_422995042");
    noOrders_0_2.set(SecondaryOrderID_15);
    OrdAllocGrp_NoOrders_9.insert(SecondaryOrderID_15.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_9);
    all_compo_names.insert("OrdAllocGrp.NoOrders");

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_20;
      FIX::Nested2PartyID Nested2PartyID_20("STRING_1085344402");
      noNested2PartyIDs_2_1_0.set(Nested2PartyID_20);
      NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyID_20.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_20('9');
      noNested2PartyIDs_2_1_0.set(Nested2PartyIDSource_20);
      NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyIDSource_20.getString());
      FIX::Nested2PartyRole Nested2PartyRole_20(1440748129);
      noNested2PartyIDs_2_1_0.set(Nested2PartyRole_20);
      NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyRole_20.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_20);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_43;
        FIX::Nested2PartySubID Nested2PartySubID_43("STRING_797738724");
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubID_43);
        NstdPtys2SubGrp_NoNested2PartySubIDs_43.insert(Nested2PartySubID_43.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_43(1048651594);
        noNested2PartySubIDs_2_0_2_0.set(Nested2PartySubIDType_43);
        NstdPtys2SubGrp_NoNested2PartySubIDs_43.insert(Nested2PartySubIDType_43.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_43);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_44;
        FIX::Nested2PartySubID Nested2PartySubID_44("STRING_1220405251");
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubID_44);
        NstdPtys2SubGrp_NoNested2PartySubIDs_44.insert(Nested2PartySubID_44.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_44(384766772);
        noNested2PartySubIDs_2_0_2_1.set(Nested2PartySubIDType_44);
        NstdPtys2SubGrp_NoNested2PartySubIDs_44.insert(Nested2PartySubIDType_44.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_44);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_0.addGroup(noNested2PartySubIDs_2_0_2_1);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_0);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_2_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_21;
      FIX::Nested2PartyID Nested2PartyID_21("STRING_602773765");
      noNested2PartyIDs_2_1_1.set(Nested2PartyID_21);
      NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyID_21.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_21('2');
      noNested2PartyIDs_2_1_1.set(Nested2PartyIDSource_21);
      NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyIDSource_21.getString());
      FIX::Nested2PartyRole Nested2PartyRole_21(295035276);
      noNested2PartyIDs_2_1_1.set(Nested2PartyRole_21);
      NestedParties2_NoNested2PartyIDs_21.insert(Nested2PartyRole_21.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_21);
      all_compo_names.insert("NestedParties2.NoNested2PartyIDs");

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_45;
        FIX::Nested2PartySubID Nested2PartySubID_45("STRING_1252453790");
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubID_45);
        NstdPtys2SubGrp_NoNested2PartySubIDs_45.insert(Nested2PartySubID_45.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_45(1934174447);
        noNested2PartySubIDs_2_1_2_0.set(Nested2PartySubIDType_45);
        NstdPtys2SubGrp_NoNested2PartySubIDs_45.insert(Nested2PartySubIDType_45.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_45);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_46;
        FIX::Nested2PartySubID Nested2PartySubID_46("STRING_280762749");
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubID_46);
        NstdPtys2SubGrp_NoNested2PartySubIDs_46.insert(Nested2PartySubID_46.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_46(1445226763);
        noNested2PartySubIDs_2_1_2_1.set(Nested2PartySubIDType_46);
        NstdPtys2SubGrp_NoNested2PartySubIDs_46.insert(Nested2PartySubIDType_46.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_46);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_1);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_2_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_47;
        FIX::Nested2PartySubID Nested2PartySubID_47("STRING_94518702");
        noNested2PartySubIDs_2_1_2_2.set(Nested2PartySubID_47);
        NstdPtys2SubGrp_NoNested2PartySubIDs_47.insert(Nested2PartySubID_47.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_47(1936977120);
        noNested2PartySubIDs_2_1_2_2.set(Nested2PartySubIDType_47);
        NstdPtys2SubGrp_NoNested2PartySubIDs_47.insert(Nested2PartySubIDType_47.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_47);
        all_compo_names.insert("NstdPtys2SubGrp.NoNested2PartySubIDs");

        noNested2PartyIDs_2_1_1.addGroup(noNested2PartySubIDs_2_1_2_2);
      }
      noOrders_0_2.addGroup(noNested2PartyIDs_2_1_1);
    }
    msg.addGroup(noOrders_0_2);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
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
