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
  FIX::AllocAccount AllocAccount_9("STRING_1221285948");
  msg.set(AllocAccount_9);
  ConfirmationRequest_0.insert(AllocAccount_9.getString());
  FIX::AllocAccountType AllocAccountType_1(6);
  msg.set(AllocAccountType_1);
  ConfirmationRequest_0.insert(AllocAccountType_1.getString());
  FIX::AllocAcctIDSource AllocAcctIDSource_9(511942944);
  msg.set(AllocAcctIDSource_9);
  ConfirmationRequest_0.insert(AllocAcctIDSource_9.getString());
  FIX::AllocID AllocID_6("STRING_1306047554");
  msg.set(AllocID_6);
  ConfirmationRequest_0.insert(AllocID_6.getString());
  FIX::ConfirmReqID ConfirmReqID_1("STRING_482559272");
  msg.set(ConfirmReqID_1);
  ConfirmationRequest_0.insert(ConfirmReqID_1.getString());
  FIX::ConfirmType ConfirmType_1(1);
  msg.set(ConfirmType_1);
  ConfirmationRequest_0.insert(ConfirmType_1.getString());
  FIX::EncodedText EncodedText_21("DATA_1708019765");
  msg.set(EncodedText_21);
  ConfirmationRequest_0.insert(EncodedText_21.getString());
  FIX::EncodedTextLen EncodedTextLen_21(1936615604);
  msg.set(EncodedTextLen_21);
  ConfirmationRequest_0.insert(EncodedTextLen_21.getString());
  FIX::IndividualAllocID IndividualAllocID_9("STRING_1964998977");
  msg.set(IndividualAllocID_9);
  ConfirmationRequest_0.insert(IndividualAllocID_9.getString());
  FIX::SecondaryAllocID SecondaryAllocID_6("STRING_204418651");
  msg.set(SecondaryAllocID_6);
  ConfirmationRequest_0.insert(SecondaryAllocID_6.getString());
  FIX::Text Text_21("STRING_1052629977");
  msg.set(Text_21);
  ConfirmationRequest_0.insert(Text_21.getString());
  FIX::TransactTime TransactTime_12(FIX::UTCTIMESTAMP(12, 5, 10, 5, 92011));
  msg.set(TransactTime_12);
  ConfirmationRequest_0.insert(TransactTime_12.getString());
  all_values.push_back(ConfirmationRequest_0);

  // OrdAllocGrp
  // Group OrdAllocGrp.NoOrders
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_0;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_7;
    FIX::ClOrdID ClOrdID_13("STRING_1832859858");
    noOrders_0_0.set(ClOrdID_13);
    OrdAllocGrp_NoOrders_7.insert(ClOrdID_13.getString());
    FIX::ListID ListID_10("STRING_898484424");
    noOrders_0_0.set(ListID_10);
    OrdAllocGrp_NoOrders_7.insert(ListID_10.getString());
    FIX::OrderAvgPx OrderAvgPx_7;
    OrderAvgPx_7.setString("7656250");
    noOrders_0_0.set(OrderAvgPx_7);
    OrdAllocGrp_NoOrders_7.insert(OrderAvgPx_7.getString());
    FIX::OrderBookingQty OrderBookingQty_7;
    OrderBookingQty_7.setString("8562362");
    noOrders_0_0.set(OrderBookingQty_7);
    OrdAllocGrp_NoOrders_7.insert(OrderBookingQty_7.getString());
    FIX::OrderID OrderID_13("STRING_153918735");
    noOrders_0_0.set(OrderID_13);
    OrdAllocGrp_NoOrders_7.insert(OrderID_13.getString());
    FIX::OrderQty OrderQty_7;
    OrderQty_7.setString("21285493");
    noOrders_0_0.set(OrderQty_7);
    OrdAllocGrp_NoOrders_7.insert(OrderQty_7.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_13("STRING_1031986341");
    noOrders_0_0.set(SecondaryClOrdID_13);
    OrdAllocGrp_NoOrders_7.insert(SecondaryClOrdID_13.getString());
    FIX::SecondaryOrderID SecondaryOrderID_13("STRING_351431193");
    noOrders_0_0.set(SecondaryOrderID_13);
    OrdAllocGrp_NoOrders_7.insert(SecondaryOrderID_13.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_7);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_15;
      FIX::Nested2PartyID Nested2PartyID_15("STRING_1048470676");
      noNested2PartyIDs_0_1_0.set(Nested2PartyID_15);
      NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyID_15.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_15('6');
      noNested2PartyIDs_0_1_0.set(Nested2PartyIDSource_15);
      NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyIDSource_15.getString());
      FIX::Nested2PartyRole Nested2PartyRole_15(1096473291);
      noNested2PartyIDs_0_1_0.set(Nested2PartyRole_15);
      NestedParties2_NoNested2PartyIDs_15.insert(Nested2PartyRole_15.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_15);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_28;
        FIX::Nested2PartySubID Nested2PartySubID_28("STRING_868722937");
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubID_28);
        NstdPtys2SubGrp_NoNested2PartySubIDs_28.insert(Nested2PartySubID_28.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_28(1608416235);
        noNested2PartySubIDs_0_0_2_0.set(Nested2PartySubIDType_28);
        NstdPtys2SubGrp_NoNested2PartySubIDs_28.insert(Nested2PartySubIDType_28.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_28);

        noNested2PartyIDs_0_1_0.addGroup(noNested2PartySubIDs_0_0_2_0);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_0);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_16;
      FIX::Nested2PartyID Nested2PartyID_16("STRING_1428320531");
      noNested2PartyIDs_0_1_1.set(Nested2PartyID_16);
      NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyID_16.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_16('1');
      noNested2PartyIDs_0_1_1.set(Nested2PartyIDSource_16);
      NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyIDSource_16.getString());
      FIX::Nested2PartyRole Nested2PartyRole_16(1031507692);
      noNested2PartyIDs_0_1_1.set(Nested2PartyRole_16);
      NestedParties2_NoNested2PartyIDs_16.insert(Nested2PartyRole_16.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_16);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_29;
        FIX::Nested2PartySubID Nested2PartySubID_29("STRING_1140414165");
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubID_29);
        NstdPtys2SubGrp_NoNested2PartySubIDs_29.insert(Nested2PartySubID_29.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_29(849023021);
        noNested2PartySubIDs_0_1_2_0.set(Nested2PartySubIDType_29);
        NstdPtys2SubGrp_NoNested2PartySubIDs_29.insert(Nested2PartySubIDType_29.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_29);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_30;
        FIX::Nested2PartySubID Nested2PartySubID_30("STRING_1193275299");
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubID_30);
        NstdPtys2SubGrp_NoNested2PartySubIDs_30.insert(Nested2PartySubID_30.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_30(45560495);
        noNested2PartySubIDs_0_1_2_1.set(Nested2PartySubIDType_30);
        NstdPtys2SubGrp_NoNested2PartySubIDs_30.insert(Nested2PartySubIDType_30.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_30);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_1);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_31;
        FIX::Nested2PartySubID Nested2PartySubID_31("STRING_1119975259");
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubID_31);
        NstdPtys2SubGrp_NoNested2PartySubIDs_31.insert(Nested2PartySubID_31.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_31(711488600);
        noNested2PartySubIDs_0_1_2_2.set(Nested2PartySubIDType_31);
        NstdPtys2SubGrp_NoNested2PartySubIDs_31.insert(Nested2PartySubIDType_31.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_31);

        noNested2PartyIDs_0_1_1.addGroup(noNested2PartySubIDs_0_1_2_2);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_1);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_0_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_17;
      FIX::Nested2PartyID Nested2PartyID_17("STRING_455818180");
      noNested2PartyIDs_0_1_2.set(Nested2PartyID_17);
      NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyID_17.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_17('5');
      noNested2PartyIDs_0_1_2.set(Nested2PartyIDSource_17);
      NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyIDSource_17.getString());
      FIX::Nested2PartyRole Nested2PartyRole_17(879860697);
      noNested2PartyIDs_0_1_2.set(Nested2PartyRole_17);
      NestedParties2_NoNested2PartyIDs_17.insert(Nested2PartyRole_17.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_17);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_32;
        FIX::Nested2PartySubID Nested2PartySubID_32("STRING_497668831");
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubID_32);
        NstdPtys2SubGrp_NoNested2PartySubIDs_32.insert(Nested2PartySubID_32.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_32(1002387112);
        noNested2PartySubIDs_0_2_2_0.set(Nested2PartySubIDType_32);
        NstdPtys2SubGrp_NoNested2PartySubIDs_32.insert(Nested2PartySubIDType_32.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_32);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_0_2_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_33;
        FIX::Nested2PartySubID Nested2PartySubID_33("STRING_1873366631");
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubID_33);
        NstdPtys2SubGrp_NoNested2PartySubIDs_33.insert(Nested2PartySubID_33.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_33(1396153255);
        noNested2PartySubIDs_0_2_2_1.set(Nested2PartySubIDType_33);
        NstdPtys2SubGrp_NoNested2PartySubIDs_33.insert(Nested2PartySubIDType_33.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_33);

        noNested2PartyIDs_0_1_2.addGroup(noNested2PartySubIDs_0_2_2_1);
      }
      noOrders_0_0.addGroup(noNested2PartyIDs_0_1_2);
    }
    msg.addGroup(noOrders_0_0);
  }
  {
    FIX50SP2::ConfirmationRequest::NoOrders noOrders_0_1;
    // OrdAllocGrp.NoOrders
    multiset<string> OrdAllocGrp_NoOrders_8;
    FIX::ClOrdID ClOrdID_14("STRING_1768012163");
    noOrders_0_1.set(ClOrdID_14);
    OrdAllocGrp_NoOrders_8.insert(ClOrdID_14.getString());
    FIX::ListID ListID_11("STRING_582119249");
    noOrders_0_1.set(ListID_11);
    OrdAllocGrp_NoOrders_8.insert(ListID_11.getString());
    FIX::OrderAvgPx OrderAvgPx_8;
    OrderAvgPx_8.setString("15500719");
    noOrders_0_1.set(OrderAvgPx_8);
    OrdAllocGrp_NoOrders_8.insert(OrderAvgPx_8.getString());
    FIX::OrderBookingQty OrderBookingQty_8;
    OrderBookingQty_8.setString("17490778");
    noOrders_0_1.set(OrderBookingQty_8);
    OrdAllocGrp_NoOrders_8.insert(OrderBookingQty_8.getString());
    FIX::OrderID OrderID_14("STRING_1614105591");
    noOrders_0_1.set(OrderID_14);
    OrdAllocGrp_NoOrders_8.insert(OrderID_14.getString());
    FIX::OrderQty OrderQty_8;
    OrderQty_8.setString("19015031");
    noOrders_0_1.set(OrderQty_8);
    OrdAllocGrp_NoOrders_8.insert(OrderQty_8.getString());
    FIX::SecondaryClOrdID SecondaryClOrdID_14("STRING_2131802633");
    noOrders_0_1.set(SecondaryClOrdID_14);
    OrdAllocGrp_NoOrders_8.insert(SecondaryClOrdID_14.getString());
    FIX::SecondaryOrderID SecondaryOrderID_14("STRING_515092619");
    noOrders_0_1.set(SecondaryOrderID_14);
    OrdAllocGrp_NoOrders_8.insert(SecondaryOrderID_14.getString());
    all_values.push_back(OrdAllocGrp_NoOrders_8);

    // NestedParties2
    // Group NestedParties2.NoNested2PartyIDs
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_0;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_18;
      FIX::Nested2PartyID Nested2PartyID_18("STRING_1080792276");
      noNested2PartyIDs_1_1_0.set(Nested2PartyID_18);
      NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyID_18.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_18('6');
      noNested2PartyIDs_1_1_0.set(Nested2PartyIDSource_18);
      NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyIDSource_18.getString());
      FIX::Nested2PartyRole Nested2PartyRole_18(1293018255);
      noNested2PartyIDs_1_1_0.set(Nested2PartyRole_18);
      NestedParties2_NoNested2PartyIDs_18.insert(Nested2PartyRole_18.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_18);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_34;
        FIX::Nested2PartySubID Nested2PartySubID_34("STRING_2065686127");
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubID_34);
        NstdPtys2SubGrp_NoNested2PartySubIDs_34.insert(Nested2PartySubID_34.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_34(496816816);
        noNested2PartySubIDs_1_0_2_0.set(Nested2PartySubIDType_34);
        NstdPtys2SubGrp_NoNested2PartySubIDs_34.insert(Nested2PartySubIDType_34.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_34);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_35;
        FIX::Nested2PartySubID Nested2PartySubID_35("STRING_1573232556");
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubID_35);
        NstdPtys2SubGrp_NoNested2PartySubIDs_35.insert(Nested2PartySubID_35.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_35(907059127);
        noNested2PartySubIDs_1_0_2_1.set(Nested2PartySubIDType_35);
        NstdPtys2SubGrp_NoNested2PartySubIDs_35.insert(Nested2PartySubIDType_35.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_35);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_0_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_36;
        FIX::Nested2PartySubID Nested2PartySubID_36("STRING_1637230981");
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubID_36);
        NstdPtys2SubGrp_NoNested2PartySubIDs_36.insert(Nested2PartySubID_36.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_36(274771930);
        noNested2PartySubIDs_1_0_2_2.set(Nested2PartySubIDType_36);
        NstdPtys2SubGrp_NoNested2PartySubIDs_36.insert(Nested2PartySubIDType_36.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_36);

        noNested2PartyIDs_1_1_0.addGroup(noNested2PartySubIDs_1_0_2_2);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_0);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_1;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_19;
      FIX::Nested2PartyID Nested2PartyID_19("STRING_2100334427");
      noNested2PartyIDs_1_1_1.set(Nested2PartyID_19);
      NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyID_19.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_19('1');
      noNested2PartyIDs_1_1_1.set(Nested2PartyIDSource_19);
      NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyIDSource_19.getString());
      FIX::Nested2PartyRole Nested2PartyRole_19(1394747189);
      noNested2PartyIDs_1_1_1.set(Nested2PartyRole_19);
      NestedParties2_NoNested2PartyIDs_19.insert(Nested2PartyRole_19.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_19);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_37;
        FIX::Nested2PartySubID Nested2PartySubID_37("STRING_2138609656");
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubID_37);
        NstdPtys2SubGrp_NoNested2PartySubIDs_37.insert(Nested2PartySubID_37.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_37(1909200651);
        noNested2PartySubIDs_1_1_2_0.set(Nested2PartySubIDType_37);
        NstdPtys2SubGrp_NoNested2PartySubIDs_37.insert(Nested2PartySubIDType_37.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_37);

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_1;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_38;
        FIX::Nested2PartySubID Nested2PartySubID_38("STRING_1544200076");
        noNested2PartySubIDs_1_1_2_1.set(Nested2PartySubID_38);
        NstdPtys2SubGrp_NoNested2PartySubIDs_38.insert(Nested2PartySubID_38.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_38(31632781);
        noNested2PartySubIDs_1_1_2_1.set(Nested2PartySubIDType_38);
        NstdPtys2SubGrp_NoNested2PartySubIDs_38.insert(Nested2PartySubIDType_38.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_38);

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_1_2_2;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_39;
        FIX::Nested2PartySubID Nested2PartySubID_39("STRING_259385835");
        noNested2PartySubIDs_1_1_2_2.set(Nested2PartySubID_39);
        NstdPtys2SubGrp_NoNested2PartySubIDs_39.insert(Nested2PartySubID_39.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_39(399103540);
        noNested2PartySubIDs_1_1_2_2.set(Nested2PartySubIDType_39);
        NstdPtys2SubGrp_NoNested2PartySubIDs_39.insert(Nested2PartySubIDType_39.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_39);

        noNested2PartyIDs_1_1_1.addGroup(noNested2PartySubIDs_1_1_2_2);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_1);
    }
    {
      FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs noNested2PartyIDs_1_1_2;
      // NestedParties2.NoNested2PartyIDs
      multiset<string> NestedParties2_NoNested2PartyIDs_20;
      FIX::Nested2PartyID Nested2PartyID_20("STRING_1904999412");
      noNested2PartyIDs_1_1_2.set(Nested2PartyID_20);
      NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyID_20.getString());
      FIX::Nested2PartyIDSource Nested2PartyIDSource_20('1');
      noNested2PartyIDs_1_1_2.set(Nested2PartyIDSource_20);
      NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyIDSource_20.getString());
      FIX::Nested2PartyRole Nested2PartyRole_20(19632056);
      noNested2PartyIDs_1_1_2.set(Nested2PartyRole_20);
      NestedParties2_NoNested2PartyIDs_20.insert(Nested2PartyRole_20.getString());
      all_values.push_back(NestedParties2_NoNested2PartyIDs_20);

      // NstdPtys2SubGrp
      // Group NstdPtys2SubGrp.NoNested2PartySubIDs
      {
        FIX50SP2::ConfirmationRequest::NoOrders::NoNested2PartyIDs::NoNested2PartySubIDs noNested2PartySubIDs_1_2_2_0;
        // NstdPtys2SubGrp.NoNested2PartySubIDs
        multiset<string> NstdPtys2SubGrp_NoNested2PartySubIDs_40;
        FIX::Nested2PartySubID Nested2PartySubID_40("STRING_1058127433");
        noNested2PartySubIDs_1_2_2_0.set(Nested2PartySubID_40);
        NstdPtys2SubGrp_NoNested2PartySubIDs_40.insert(Nested2PartySubID_40.getString());
        FIX::Nested2PartySubIDType Nested2PartySubIDType_40(1768709924);
        noNested2PartySubIDs_1_2_2_0.set(Nested2PartySubIDType_40);
        NstdPtys2SubGrp_NoNested2PartySubIDs_40.insert(Nested2PartySubIDType_40.getString());
        all_values.push_back(NstdPtys2SubGrp_NoNested2PartySubIDs_40);

        noNested2PartyIDs_1_1_2.addGroup(noNested2PartySubIDs_1_2_2_0);
      }
      noOrders_0_1.addGroup(noNested2PartyIDs_1_1_2);
    }
    msg.addGroup(noOrders_0_1);
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
