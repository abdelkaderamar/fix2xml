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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationReportAck msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationReportAck_0;
  FIX::AllocID AllocID_4("STRING_708408994");
  msg.set(AllocID_4);
  AllocationReportAck_0.insert(AllocID_4.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_4(6);
  msg.set(AllocIntermedReqType_4);
  AllocationReportAck_0.insert(AllocIntermedReqType_4.getString());
  FIX::AllocRejCode AllocRejCode_2(1);
  msg.set(AllocRejCode_2);
  AllocationReportAck_0.insert(AllocRejCode_2.getString());
  FIX::AllocReportID AllocReportID_1("STRING_234931753");
  msg.set(AllocReportID_1);
  AllocationReportAck_0.insert(AllocReportID_1.getString());
  FIX::AllocReportType AllocReportType_1(2);
  msg.set(AllocReportType_1);
  AllocationReportAck_0.insert(AllocReportType_1.getString());
  FIX::AllocStatus AllocStatus_2(0);
  msg.set(AllocStatus_2);
  AllocationReportAck_0.insert(AllocStatus_2.getString());
  FIX::AllocTransType AllocTransType_3('4');
  msg.set(AllocTransType_3);
  AllocationReportAck_0.insert(AllocTransType_3.getString());
  FIX::AvgPxIndicator AvgPxIndicator_3(1);
  msg.set(AvgPxIndicator_3);
  AllocationReportAck_0.insert(AvgPxIndicator_3.getString());
  FIX::ClearingBusinessDate ClearingBusinessDate_4("LOCALMKTDATE_674596501");
  msg.set(ClearingBusinessDate_4);
  AllocationReportAck_0.insert(ClearingBusinessDate_4.getString());
  FIX::EncodedText EncodedText_5("DATA_1013449830");
  msg.set(EncodedText_5);
  AllocationReportAck_0.insert(EncodedText_5.getString());
  FIX::EncodedTextLen EncodedTextLen_5(1556327090);
  msg.set(EncodedTextLen_5);
  AllocationReportAck_0.insert(EncodedTextLen_5.getString());
  FIX::MatchStatus MatchStatus_7('2');
  msg.set(MatchStatus_7);
  AllocationReportAck_0.insert(MatchStatus_7.getString());
  FIX::Product Product_8(4);
  msg.set(Product_8);
  AllocationReportAck_0.insert(Product_8.getString());
  FIX::Quantity Quantity_4;
  Quantity_4.setString("10833648");
  msg.set(Quantity_4);
  AllocationReportAck_0.insert(Quantity_4.getString());
  FIX::SecondaryAllocID SecondaryAllocID_4("STRING_471355209");
  msg.set(SecondaryAllocID_4);
  AllocationReportAck_0.insert(SecondaryAllocID_4.getString());
  FIX::SecurityType SecurityType_8("STRING_MIO");
  msg.set(SecurityType_8);
  AllocationReportAck_0.insert(SecurityType_8.getString());
  FIX::Text Text_5("STRING_1644514299");
  msg.set(Text_5);
  AllocationReportAck_0.insert(Text_5.getString());
  FIX::TradeDate TradeDate_5("LOCALMKTDATE_1915244686");
  msg.set(TradeDate_5);
  AllocationReportAck_0.insert(TradeDate_5.getString());
  FIX::TransactTime TransactTime_5(FIX::UTCTIMESTAMP(22, 15, 41, 5, 12, 2001));
  msg.set(TransactTime_5);
  AllocationReportAck_0.insert(TransactTime_5.getString());
  all_values.push_back(AllocationReportAck_0);

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_2;
    FIX::AllocAccount AllocAccount_8("STRING_2128543707");
    noAllocs_0_0.set(AllocAccount_8);
    AllocAckGrp_NoAllocs_2.insert(AllocAccount_8.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_8(1720576243);
    noAllocs_0_0.set(AllocAcctIDSource_8);
    AllocAckGrp_NoAllocs_2.insert(AllocAcctIDSource_8.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_8("STRING_858850555");
    noAllocs_0_0.set(AllocCustomerCapacity_8);
    AllocAckGrp_NoAllocs_2.insert(AllocCustomerCapacity_8.getString());
    FIX::AllocPositionEffect AllocPositionEffect_8('R');
    noAllocs_0_0.set(AllocPositionEffect_8);
    AllocAckGrp_NoAllocs_2.insert(AllocPositionEffect_8.getString());
    FIX::AllocPrice AllocPrice_8;
    AllocPrice_8.setString("5216687");
    noAllocs_0_0.set(AllocPrice_8);
    AllocAckGrp_NoAllocs_2.insert(AllocPrice_8.getString());
    FIX::AllocQty AllocQty_8;
    AllocQty_8.setString("15672595");
    noAllocs_0_0.set(AllocQty_8);
    AllocAckGrp_NoAllocs_2.insert(AllocQty_8.getString());
    FIX::AllocText AllocText_8("STRING_1542969052");
    noAllocs_0_0.set(AllocText_8);
    AllocAckGrp_NoAllocs_2.insert(AllocText_8.getString());
    FIX::EncodedAllocText EncodedAllocText_8("DATA_1456838092");
    noAllocs_0_0.set(EncodedAllocText_8);
    AllocAckGrp_NoAllocs_2.insert(EncodedAllocText_8.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_8(1802191303);
    noAllocs_0_0.set(EncodedAllocTextLen_8);
    AllocAckGrp_NoAllocs_2.insert(EncodedAllocTextLen_8.getString());
    FIX::IndividualAllocID IndividualAllocID_8("STRING_1104917304");
    noAllocs_0_0.set(IndividualAllocID_8);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocID_8.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_2(6008852);
    noAllocs_0_0.set(IndividualAllocRejCode_2);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocRejCode_2.getString());
    FIX::IndividualAllocType IndividualAllocType_8(2);
    noAllocs_0_0.set(IndividualAllocType_8);
    AllocAckGrp_NoAllocs_2.insert(IndividualAllocType_8.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_8("STRING_590646117");
    noAllocs_0_0.set(SecondaryIndividualAllocID_8);
    AllocAckGrp_NoAllocs_2.insert(SecondaryIndividualAllocID_8.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_2);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_18;
      FIX::NestedPartyID NestedPartyID_18("STRING_507153589");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyID_18.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_18('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyIDSource_18.getString());
      FIX::NestedPartyRole NestedPartyRole_18(730606557);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_18);
      NestedParties_NoNestedPartyIDs_18.insert(NestedPartyRole_18.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_18);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_33;
        FIX::NestedPartySubID NestedPartySubID_33("STRING_1082854398");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_33);
        NstdPtysSubGrp_NoNestedPartySubIDs_33.insert(NestedPartySubID_33.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_33(1201961766);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_33);
        NstdPtysSubGrp_NoNestedPartySubIDs_33.insert(NestedPartySubIDType_33.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_33);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_34;
        FIX::NestedPartySubID NestedPartySubID_34("STRING_2029718996");
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubID_34);
        NstdPtysSubGrp_NoNestedPartySubIDs_34.insert(NestedPartySubID_34.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_34(579885049);
        noNestedPartySubIDs_0_0_2_1.set(NestedPartySubIDType_34);
        NstdPtysSubGrp_NoNestedPartySubIDs_34.insert(NestedPartySubIDType_34.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_34);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_19;
      FIX::NestedPartyID NestedPartyID_19("STRING_969722804");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyID_19.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_19('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyIDSource_19.getString());
      FIX::NestedPartyRole NestedPartyRole_19(1606897583);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_19);
      NestedParties_NoNestedPartyIDs_19.insert(NestedPartyRole_19.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_19);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_35;
        FIX::NestedPartySubID NestedPartySubID_35("STRING_1186147223");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_35);
        NstdPtysSubGrp_NoNestedPartySubIDs_35.insert(NestedPartySubID_35.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_35(1252989052);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_35);
        NstdPtysSubGrp_NoNestedPartySubIDs_35.insert(NestedPartySubIDType_35.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_35);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_1;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_3;
    FIX::AllocAccount AllocAccount_9("STRING_604334091");
    noAllocs_0_1.set(AllocAccount_9);
    AllocAckGrp_NoAllocs_3.insert(AllocAccount_9.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_9(1918813680);
    noAllocs_0_1.set(AllocAcctIDSource_9);
    AllocAckGrp_NoAllocs_3.insert(AllocAcctIDSource_9.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_9("STRING_1594142097");
    noAllocs_0_1.set(AllocCustomerCapacity_9);
    AllocAckGrp_NoAllocs_3.insert(AllocCustomerCapacity_9.getString());
    FIX::AllocPositionEffect AllocPositionEffect_9('R');
    noAllocs_0_1.set(AllocPositionEffect_9);
    AllocAckGrp_NoAllocs_3.insert(AllocPositionEffect_9.getString());
    FIX::AllocPrice AllocPrice_9;
    AllocPrice_9.setString("14919062");
    noAllocs_0_1.set(AllocPrice_9);
    AllocAckGrp_NoAllocs_3.insert(AllocPrice_9.getString());
    FIX::AllocQty AllocQty_9;
    AllocQty_9.setString("3055090");
    noAllocs_0_1.set(AllocQty_9);
    AllocAckGrp_NoAllocs_3.insert(AllocQty_9.getString());
    FIX::AllocText AllocText_9("STRING_1596986144");
    noAllocs_0_1.set(AllocText_9);
    AllocAckGrp_NoAllocs_3.insert(AllocText_9.getString());
    FIX::EncodedAllocText EncodedAllocText_9("DATA_2013575022");
    noAllocs_0_1.set(EncodedAllocText_9);
    AllocAckGrp_NoAllocs_3.insert(EncodedAllocText_9.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_9(1872768554);
    noAllocs_0_1.set(EncodedAllocTextLen_9);
    AllocAckGrp_NoAllocs_3.insert(EncodedAllocTextLen_9.getString());
    FIX::IndividualAllocID IndividualAllocID_9("STRING_992471548");
    noAllocs_0_1.set(IndividualAllocID_9);
    AllocAckGrp_NoAllocs_3.insert(IndividualAllocID_9.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_3(1322929466);
    noAllocs_0_1.set(IndividualAllocRejCode_3);
    AllocAckGrp_NoAllocs_3.insert(IndividualAllocRejCode_3.getString());
    FIX::IndividualAllocType IndividualAllocType_9(1);
    noAllocs_0_1.set(IndividualAllocType_9);
    AllocAckGrp_NoAllocs_3.insert(IndividualAllocType_9.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_9("STRING_2097388853");
    noAllocs_0_1.set(SecondaryIndividualAllocID_9);
    AllocAckGrp_NoAllocs_3.insert(SecondaryIndividualAllocID_9.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_3);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_20;
      FIX::NestedPartyID NestedPartyID_20("STRING_1021179969");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyID_20.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_20('5');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyIDSource_20.getString());
      FIX::NestedPartyRole NestedPartyRole_20(2009543673);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_20);
      NestedParties_NoNestedPartyIDs_20.insert(NestedPartyRole_20.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_20);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_36;
        FIX::NestedPartySubID NestedPartySubID_36("STRING_540040881");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_36);
        NstdPtysSubGrp_NoNestedPartySubIDs_36.insert(NestedPartySubID_36.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_36(592666582);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_36);
        NstdPtysSubGrp_NoNestedPartySubIDs_36.insert(NestedPartySubIDType_36.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_36);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_37;
        FIX::NestedPartySubID NestedPartySubID_37("STRING_1057759440");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_37);
        NstdPtysSubGrp_NoNestedPartySubIDs_37.insert(NestedPartySubID_37.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_37(1622895279);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_37);
        NstdPtysSubGrp_NoNestedPartySubIDs_37.insert(NestedPartySubIDType_37.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_37);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_21;
      FIX::NestedPartyID NestedPartyID_21("STRING_1794628349");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyID_21.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_21('9');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyIDSource_21.getString());
      FIX::NestedPartyRole NestedPartyRole_21(55296681);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_21);
      NestedParties_NoNestedPartyIDs_21.insert(NestedPartyRole_21.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_21);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_38;
        FIX::NestedPartySubID NestedPartySubID_38("STRING_503320950");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_38);
        NstdPtysSubGrp_NoNestedPartySubIDs_38.insert(NestedPartySubID_38.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_38(1662194264);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_38);
        NstdPtysSubGrp_NoNestedPartySubIDs_38.insert(NestedPartySubIDType_38.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_38);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_39;
        FIX::NestedPartySubID NestedPartySubID_39("STRING_228181437");
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubID_39);
        NstdPtysSubGrp_NoNestedPartySubIDs_39.insert(NestedPartySubID_39.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_39(1689468173);
        noNestedPartySubIDs_1_1_2_1.set(NestedPartySubIDType_39);
        NstdPtysSubGrp_NoNestedPartySubIDs_39.insert(NestedPartySubIDType_39.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_39);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_40;
        FIX::NestedPartySubID NestedPartySubID_40("STRING_767699669");
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubID_40);
        NstdPtysSubGrp_NoNestedPartySubIDs_40.insert(NestedPartySubID_40.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_40(832515528);
        noNestedPartySubIDs_1_1_2_2.set(NestedPartySubIDType_40);
        NstdPtysSubGrp_NoNestedPartySubIDs_40.insert(NestedPartySubIDType_40.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_40);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_22;
      FIX::NestedPartyID NestedPartyID_22("STRING_1460798205");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyID_22.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_22('2');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyIDSource_22.getString());
      FIX::NestedPartyRole NestedPartyRole_22(1417909678);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_22);
      NestedParties_NoNestedPartyIDs_22.insert(NestedPartyRole_22.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_22);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_41;
        FIX::NestedPartySubID NestedPartySubID_41("STRING_519867122");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_41);
        NstdPtysSubGrp_NoNestedPartySubIDs_41.insert(NestedPartySubID_41.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_41(867412175);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_41);
        NstdPtysSubGrp_NoNestedPartySubIDs_41.insert(NestedPartySubIDType_41.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_41);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_42;
        FIX::NestedPartySubID NestedPartySubID_42("STRING_671312207");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_42);
        NstdPtysSubGrp_NoNestedPartySubIDs_42.insert(NestedPartySubID_42.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_42(245152029);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_42);
        NstdPtysSubGrp_NoNestedPartySubIDs_42.insert(NestedPartySubIDType_42.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_42);

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationReportAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_10;
    FIX::PartyID PartyID_10("STRING_1994241673");
    noPartyIDs_0_0.set(PartyID_10);
    Parties_NoPartyIDs_10.insert(PartyID_10.getString());
    FIX::PartyIDSource PartyIDSource_10('B');
    noPartyIDs_0_0.set(PartyIDSource_10);
    Parties_NoPartyIDs_10.insert(PartyIDSource_10.getString());
    FIX::PartyRole PartyRole_10(26);
    noPartyIDs_0_0.set(PartyRole_10);
    Parties_NoPartyIDs_10.insert(PartyRole_10.getString());
    all_values.push_back(Parties_NoPartyIDs_10);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_22;
      FIX::PartySubID PartySubID_22("STRING_646324560");
      noPartySubIDs_0_1_0.set(PartySubID_22);
      PtysSubGrp_NoPartySubIDs_22.insert(PartySubID_22.getString());
      FIX::PartySubIDType PartySubIDType_22(26);
      noPartySubIDs_0_1_0.set(PartySubIDType_22);
      PtysSubGrp_NoPartySubIDs_22.insert(PartySubIDType_22.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_22);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_23;
      FIX::PartySubID PartySubID_23("STRING_1037756369");
      noPartySubIDs_0_1_1.set(PartySubID_23);
      PtysSubGrp_NoPartySubIDs_23.insert(PartySubID_23.getString());
      FIX::PartySubIDType PartySubIDType_23(27);
      noPartySubIDs_0_1_1.set(PartySubIDType_23);
      PtysSubGrp_NoPartySubIDs_23.insert(PartySubIDType_23.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_23);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
