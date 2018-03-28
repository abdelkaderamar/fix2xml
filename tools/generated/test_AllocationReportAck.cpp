#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/AllocationReportAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReportAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationReportAck msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationReportAck_0;
  FIX::AllocID AllocID_4("STRING_718791702");
  msg.set(AllocID_4);
  AllocationReportAck_0.insert(AllocID_4.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_4(4);
  msg.set(AllocIntermedReqType_4);
  AllocationReportAck_0.insert(AllocIntermedReqType_4.getString());
  FIX::AllocRejCode AllocRejCode_2(8);
  msg.set(AllocRejCode_2);
  AllocationReportAck_0.insert(AllocRejCode_2.getString());
  FIX::AllocReportID AllocReportID_1("STRING_877088955");
  msg.set(AllocReportID_1);
  AllocationReportAck_0.insert(AllocReportID_1.getString());
  FIX::AllocReportType AllocReportType_1(14);
  msg.set(AllocReportType_1);
  AllocationReportAck_0.insert(AllocReportType_1.getString());
  FIX::AllocStatus AllocStatus_2(0);
  msg.set(AllocStatus_2);
  AllocationReportAck_0.insert(AllocStatus_2.getString());
  FIX::AllocTransType AllocTransType_3('1');
  msg.set(AllocTransType_3);
  AllocationReportAck_0.insert(AllocTransType_3.getString());
  FIX::AvgPxIndicator AvgPxIndicator_3(1);
  msg.set(AvgPxIndicator_3);
  AllocationReportAck_0.insert(AvgPxIndicator_3.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_4("LOCALMKTDATE_936877421");
  msg.set(ClearingBusinessDate_4);
  AllocationReportAck_0.insert(ClearingBusinessDate_4.getString());
  FIX::EncodedText EncodedText_5("DATA_1517201067");
  msg.set(EncodedText_5);
  AllocationReportAck_0.insert(EncodedText_5.getString());
  FIX::EncodedTextLen EncodedTextLen_5(1865358044);
  msg.set(EncodedTextLen_5);
  AllocationReportAck_0.insert(EncodedTextLen_5.getString());
  FIX::MatchStatus MatchStatus_6('2');
  msg.set(MatchStatus_6);
  AllocationReportAck_0.insert(MatchStatus_6.getString());
  FIX::Product Product_7(4);
  msg.set(Product_7);
  AllocationReportAck_0.insert(Product_7.getString());
  FIX::Quantity Quantity_4;
  Quantity_4.setString("18648025");
  msg.set(Quantity_4);
  AllocationReportAck_0.insert(Quantity_4.getString());
  FIX::SecondaryAllocID SecondaryAllocID_4("STRING_1080529535");
  msg.set(SecondaryAllocID_4);
  AllocationReportAck_0.insert(SecondaryAllocID_4.getString());
  FIX::SecurityType SecurityType_7("STRING_SPCLT");
  msg.set(SecurityType_7);
  AllocationReportAck_0.insert(SecurityType_7.getString());
  FIX::Text Text_5("STRING_2100290411");
  msg.set(Text_5);
  AllocationReportAck_0.insert(Text_5.getString());
  FIX::TradeDate TradeDate_5("LOCALMKTDATE_361437379");
  msg.set(TradeDate_5);
  AllocationReportAck_0.insert(TradeDate_5.getString());
  FIX::TransactTime TransactTime_5(FIX::UTCTIMESTAMP(9, 3, 58, 4, 3, 2001));
  msg.set(TransactTime_5);
  AllocationReportAck_0.insert(TransactTime_5.getString());
  all_values.push_back(AllocationReportAck_0);

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_6("STRING_434644140");
    noAllocs_0_0.set(AllocAccount_6);
    AllocAckGrp_NoAllocs_1.insert(AllocAccount_6.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_6(755029122);
    noAllocs_0_0.set(AllocAcctIDSource_6);
    AllocAckGrp_NoAllocs_1.insert(AllocAcctIDSource_6.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_6("STRING_2121621953");
    noAllocs_0_0.set(AllocCustomerCapacity_6);
    AllocAckGrp_NoAllocs_1.insert(AllocCustomerCapacity_6.getString());
    FIX::AllocPositionEffect AllocPositionEffect_6('O');
    noAllocs_0_0.set(AllocPositionEffect_6);
    AllocAckGrp_NoAllocs_1.insert(AllocPositionEffect_6.getString());
    FIX::AllocPrice AllocPrice_6;
    AllocPrice_6.setString("3083148");
    noAllocs_0_0.set(AllocPrice_6);
    AllocAckGrp_NoAllocs_1.insert(AllocPrice_6.getString());
    FIX::AllocQty AllocQty_6;
    AllocQty_6.setString("6929300");
    noAllocs_0_0.set(AllocQty_6);
    AllocAckGrp_NoAllocs_1.insert(AllocQty_6.getString());
    FIX::AllocText AllocText_6("STRING_1363349392");
    noAllocs_0_0.set(AllocText_6);
    AllocAckGrp_NoAllocs_1.insert(AllocText_6.getString());
    FIX::EncodedAllocText EncodedAllocText_6("DATA_1023466979");
    noAllocs_0_0.set(EncodedAllocText_6);
    AllocAckGrp_NoAllocs_1.insert(EncodedAllocText_6.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_6(1570018963);
    noAllocs_0_0.set(EncodedAllocTextLen_6);
    AllocAckGrp_NoAllocs_1.insert(EncodedAllocTextLen_6.getString());
    FIX::IndividualAllocID IndividualAllocID_6("STRING_1318908193");
    noAllocs_0_0.set(IndividualAllocID_6);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocID_6.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_1(1765973899);
    noAllocs_0_0.set(IndividualAllocRejCode_1);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocRejCode_1.getString());
    FIX::IndividualAllocType IndividualAllocType_6(2);
    noAllocs_0_0.set(IndividualAllocType_6);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocType_6.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_6("STRING_1706697761");
    noAllocs_0_0.set(SecondaryIndividualAllocID_6);
    AllocAckGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_6.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_12;
      FIX::NestedPartyID NestedPartyID_12("STRING_1584609808");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyID_12.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_12('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyIDSource_12.getString());
      FIX::NestedPartyRole NestedPartyRole_12(191479423);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_12);
      NestedParties_NoNestedPartyIDs_12.insert(NestedPartyRole_12.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_12);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_23;
        FIX::NestedPartySubID NestedPartySubID_23("STRING_1141891028");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_23);
        NstdPtysSubGrp_NoNestedPartySubIDs_23.insert(NestedPartySubID_23.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_23(1272008959);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_23);
        NstdPtysSubGrp_NoNestedPartySubIDs_23.insert(NestedPartySubIDType_23.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_23);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_13;
      FIX::NestedPartyID NestedPartyID_13("STRING_360309048");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyID_13.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_13('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyIDSource_13.getString());
      FIX::NestedPartyRole NestedPartyRole_13(1633446338);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_13);
      NestedParties_NoNestedPartyIDs_13.insert(NestedPartyRole_13.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_13);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_24;
        FIX::NestedPartySubID NestedPartySubID_24("STRING_2086013961");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_24);
        NstdPtysSubGrp_NoNestedPartySubIDs_24.insert(NestedPartySubID_24.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_24(526487673);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_24);
        NstdPtysSubGrp_NoNestedPartySubIDs_24.insert(NestedPartySubIDType_24.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_24);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_25;
        FIX::NestedPartySubID NestedPartySubID_25("STRING_1419533489");
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubID_25);
        NstdPtysSubGrp_NoNestedPartySubIDs_25.insert(NestedPartySubID_25.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_25(1007208053);
        noNestedPartySubIDs_0_1_2_1.set(NestedPartySubIDType_25);
        NstdPtysSubGrp_NoNestedPartySubIDs_25.insert(NestedPartySubIDType_25.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_25);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_1;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_7("STRING_2000182127");
    noAllocs_0_1.set(AllocAccount_7);
    AllocAckGrp_NoAllocs_2.insert(AllocAccount_7.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_7(286425226);
    noAllocs_0_1.set(AllocAcctIDSource_7);
    AllocAckGrp_NoAllocs_2.insert(AllocAcctIDSource_7.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_7("STRING_1909809105");
    noAllocs_0_1.set(AllocCustomerCapacity_7);
    AllocAckGrp_NoAllocs_2.insert(AllocCustomerCapacity_7.getString());
    FIX::AllocPositionEffect AllocPositionEffect_7('F');
    noAllocs_0_1.set(AllocPositionEffect_7);
    AllocAckGrp_NoAllocs_2.insert(AllocPositionEffect_7.getString());
    FIX::AllocPrice AllocPrice_7;
    AllocPrice_7.setString("10414543");
    noAllocs_0_1.set(AllocPrice_7);
    AllocAckGrp_NoAllocs_2.insert(AllocPrice_7.getString());
    FIX::AllocQty AllocQty_7;
    AllocQty_7.setString("18839474");
    noAllocs_0_1.set(AllocQty_7);
    AllocAckGrp_NoAllocs_2.insert(AllocQty_7.getString());
    FIX::AllocText AllocText_7("STRING_1645039659");
    noAllocs_0_1.set(AllocText_7);
    AllocAckGrp_NoAllocs_2.insert(AllocText_7.getString());
    FIX::EncodedAllocText EncodedAllocText_7("DATA_1349769155");
    noAllocs_0_1.set(EncodedAllocText_7);
    AllocAckGrp_NoAllocs_2.insert(EncodedAllocText_7.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_7(429393770);
    noAllocs_0_1.set(EncodedAllocTextLen_7);
    AllocAckGrp_NoAllocs_2.insert(EncodedAllocTextLen_7.getString());
    FIX::IndividualAllocID IndividualAllocID_7("STRING_860905403");
    noAllocs_0_1.set(IndividualAllocID_7);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocID_7.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_2(225752487);
    noAllocs_0_1.set(IndividualAllocRejCode_2);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocRejCode_2.getString());
    FIX::IndividualAllocType IndividualAllocType_7(1);
    noAllocs_0_1.set(IndividualAllocType_7);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocType_7.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_7("STRING_32329948");
    noAllocs_0_1.set(SecondaryIndividualAllocID_7);
    AllocAckGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_7.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_2);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_14;
      FIX::NestedPartyID NestedPartyID_14("STRING_2066821475");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyID_14.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_14('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyIDSource_14.getString());
      FIX::NestedPartyRole NestedPartyRole_14(399610411);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_14);
      NestedParties_NoNestedPartyIDs_14.insert(NestedPartyRole_14.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_14);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_26;
        FIX::NestedPartySubID NestedPartySubID_26("STRING_1016116219");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_26);
        NstdPtysSubGrp_NoNestedPartySubIDs_26.insert(NestedPartySubID_26.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_26(591089834);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_26);
        NstdPtysSubGrp_NoNestedPartySubIDs_26.insert(NestedPartySubIDType_26.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_26);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_27;
        FIX::NestedPartySubID NestedPartySubID_27("STRING_253811109");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_27);
        NstdPtysSubGrp_NoNestedPartySubIDs_27.insert(NestedPartySubID_27.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_27(10523600);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_27);
        NstdPtysSubGrp_NoNestedPartySubIDs_27.insert(NestedPartySubIDType_27.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_27);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_28;
        FIX::NestedPartySubID NestedPartySubID_28("STRING_1863098793");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_28);
        NstdPtysSubGrp_NoNestedPartySubIDs_28.insert(NestedPartySubID_28.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_28(614120157);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_28);
        NstdPtysSubGrp_NoNestedPartySubIDs_28.insert(NestedPartySubIDType_28.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_28);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_15;
      FIX::NestedPartyID NestedPartyID_15("STRING_1105221391");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyID_15.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_15('1');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyIDSource_15.getString());
      FIX::NestedPartyRole NestedPartyRole_15(2023406968);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_15);
      NestedParties_NoNestedPartyIDs_15.insert(NestedPartyRole_15.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_15);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_29;
        FIX::NestedPartySubID NestedPartySubID_29("STRING_1875549156");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_29);
        NstdPtysSubGrp_NoNestedPartySubIDs_29.insert(NestedPartySubID_29.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_29(1295456810);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_29);
        NstdPtysSubGrp_NoNestedPartySubIDs_29.insert(NestedPartySubIDType_29.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_29);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_30;
        FIX::NestedPartySubID NestedPartySubID_30("STRING_2050959757");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_30);
        NstdPtysSubGrp_NoNestedPartySubIDs_30.insert(NestedPartySubID_30.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_30(1728247635);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_30);
        NstdPtysSubGrp_NoNestedPartySubIDs_30.insert(NestedPartySubIDType_30.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_30);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_31;
        FIX::NestedPartySubID NestedPartySubID_31("STRING_1581882036");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_31);
        NstdPtysSubGrp_NoNestedPartySubIDs_31.insert(NestedPartySubID_31.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_31(1813285214);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_31);
        NstdPtysSubGrp_NoNestedPartySubIDs_31.insert(NestedPartySubIDType_31.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_31);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationReportAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_9;
    FIX::PartyID PartyID_9("STRING_475852737");
    noPartyIDs_0_0.set(PartyID_9);
    Parties_NoPartyIDs_9.insert(PartyID_9.getString());
    FIX::PartyIDSource PartyIDSource_9('3');
    noPartyIDs_0_0.set(PartyIDSource_9);
    Parties_NoPartyIDs_9.insert(PartyIDSource_9.getString());
    FIX::PartyRole PartyRole_9(3);
    noPartyIDs_0_0.set(PartyRole_9);
    Parties_NoPartyIDs_9.insert(PartyRole_9.getString());
    all_values.push_back(Parties_NoPartyIDs_9);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_17;
      FIX::PartySubID PartySubID_17("STRING_1979142747");
      noPartySubIDs_0_1_0.set(PartySubID_17);
      PtysSubGrp_NoPartySubIDs_17.insert(PartySubID_17.getString());
      FIX::PartySubIDType PartySubIDType_17(21);
      noPartySubIDs_0_1_0.set(PartySubIDType_17);
      PtysSubGrp_NoPartySubIDs_17.insert(PartySubIDType_17.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_17);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
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
