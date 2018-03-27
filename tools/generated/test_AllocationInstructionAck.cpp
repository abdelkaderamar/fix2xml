#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/AllocationInstructionAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstructionAck, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationInstructionAck msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationInstructionAck_0;
  FIX::AllocID AllocID_1("STRING_621911215");
  msg.set(AllocID_1);
  AllocationInstructionAck_0.insert(AllocID_1.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_1(4);
  msg.set(AllocIntermedReqType_1);
  AllocationInstructionAck_0.insert(AllocIntermedReqType_1.getString());
  FIX::AllocRejCode AllocRejCode_0(7);
  msg.set(AllocRejCode_0);
  AllocationInstructionAck_0.insert(AllocRejCode_0.getString());
  FIX::AllocStatus AllocStatus_0(6);
  msg.set(AllocStatus_0);
  AllocationInstructionAck_0.insert(AllocStatus_0.getString());
  FIX::AllocType AllocType_1(12);
  msg.set(AllocType_1);
  AllocationInstructionAck_0.insert(AllocType_1.getString());
  FIX::EncodedText EncodedText_2("DATA_1064143169");
  msg.set(EncodedText_2);
  AllocationInstructionAck_0.insert(EncodedText_2.getString());
  FIX::EncodedTextLen EncodedTextLen_2(698900571);
  msg.set(EncodedTextLen_2);
  AllocationInstructionAck_0.insert(EncodedTextLen_2.getString());
  FIX::MatchStatus MatchStatus_1('2');
  msg.set(MatchStatus_1);
  AllocationInstructionAck_0.insert(MatchStatus_1.getString());
  FIX::Product Product_4(10);
  msg.set(Product_4);
  AllocationInstructionAck_0.insert(Product_4.getString());
  FIX::SecondaryAllocID SecondaryAllocID_1("STRING_1769588482");
  msg.set(SecondaryAllocID_1);
  AllocationInstructionAck_0.insert(SecondaryAllocID_1.getString());
  FIX::SecurityType SecurityType_4("STRING_TBILL");
  msg.set(SecurityType_4);
  AllocationInstructionAck_0.insert(SecurityType_4.getString());
  FIX::Text Text_2("STRING_642016899");
  msg.set(Text_2);
  AllocationInstructionAck_0.insert(Text_2.getString());
  FIX::TradeDate TradeDate_2("LOCALMKTDATE_746687754");
  msg.set(TradeDate_2);
  AllocationInstructionAck_0.insert(TradeDate_2.getString());
  FIX::TransactTime TransactTime_2(FIX::UTCTIMESTAMP(6, 23, 0, 4, 82003));
  msg.set(TransactTime_2);
  AllocationInstructionAck_0.insert(TransactTime_2.getString());
  all_values.push_back(AllocationInstructionAck_0);

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_1("STRING_1366918169");
    noAllocs_0_0.set(AllocAccount_1);
    AllocAckGrp_NoAllocs_0.insert(AllocAccount_1.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_1(1759138855);
    noAllocs_0_0.set(AllocAcctIDSource_1);
    AllocAckGrp_NoAllocs_0.insert(AllocAcctIDSource_1.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_1("STRING_1454012026");
    noAllocs_0_0.set(AllocCustomerCapacity_1);
    AllocAckGrp_NoAllocs_0.insert(AllocCustomerCapacity_1.getString());
    FIX::AllocPositionEffect AllocPositionEffect_1('C');
    noAllocs_0_0.set(AllocPositionEffect_1);
    AllocAckGrp_NoAllocs_0.insert(AllocPositionEffect_1.getString());
    FIX::AllocPrice AllocPrice_1;
    AllocPrice_1.setString("13596929");
    noAllocs_0_0.set(AllocPrice_1);
    AllocAckGrp_NoAllocs_0.insert(AllocPrice_1.getString());
    FIX::AllocQty AllocQty_1;
    AllocQty_1.setString("18606972");
    noAllocs_0_0.set(AllocQty_1);
    AllocAckGrp_NoAllocs_0.insert(AllocQty_1.getString());
    FIX::AllocText AllocText_1("STRING_1012397507");
    noAllocs_0_0.set(AllocText_1);
    AllocAckGrp_NoAllocs_0.insert(AllocText_1.getString());
    FIX::EncodedAllocText EncodedAllocText_1("DATA_1775229825");
    noAllocs_0_0.set(EncodedAllocText_1);
    AllocAckGrp_NoAllocs_0.insert(EncodedAllocText_1.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_1(1252392);
    noAllocs_0_0.set(EncodedAllocTextLen_1);
    AllocAckGrp_NoAllocs_0.insert(EncodedAllocTextLen_1.getString());
    FIX::IndividualAllocID IndividualAllocID_1("STRING_2021685451");
    noAllocs_0_0.set(IndividualAllocID_1);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocID_1.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_0(249657392);
    noAllocs_0_0.set(IndividualAllocRejCode_0);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocRejCode_0.getString());
    FIX::IndividualAllocType IndividualAllocType_1(2);
    noAllocs_0_0.set(IndividualAllocType_1);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocType_1.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_1("STRING_962255295");
    noAllocs_0_0.set(SecondaryIndividualAllocID_1);
    AllocAckGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_1.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_3;
      FIX::NestedPartyID NestedPartyID_3("STRING_75998604");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyID_3.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_3('2');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyIDSource_3.getString());
      FIX::NestedPartyRole NestedPartyRole_3(1861650122);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyRole_3.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_3);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_3;
        FIX::NestedPartySubID NestedPartySubID_3("STRING_1518764869");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_3);
        NstdPtysSubGrp_NoNestedPartySubIDs_3.insert(NestedPartySubID_3.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_3(1483754956);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_3);
        NstdPtysSubGrp_NoNestedPartySubIDs_3.insert(NestedPartySubIDType_3.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_3);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_4;
      FIX::NestedPartyID NestedPartyID_4("STRING_1584128253");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyID_4.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_4('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyIDSource_4.getString());
      FIX::NestedPartyRole NestedPartyRole_4(82959062);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyRole_4.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_4);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_4;
        FIX::NestedPartySubID NestedPartySubID_4("STRING_486010046");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_4);
        NstdPtysSubGrp_NoNestedPartySubIDs_4.insert(NestedPartySubID_4.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_4(1909259305);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_4);
        NstdPtysSubGrp_NoNestedPartySubIDs_4.insert(NestedPartySubIDType_4.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_4);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_5;
      FIX::NestedPartyID NestedPartyID_5("STRING_171631766");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyID_5.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_5('2');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyIDSource_5.getString());
      FIX::NestedPartyRole NestedPartyRole_5(262858620);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyRole_5.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_5);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_5;
        FIX::NestedPartySubID NestedPartySubID_5("STRING_952801603");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_5);
        NstdPtysSubGrp_NoNestedPartySubIDs_5.insert(NestedPartySubID_5.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_5(1629776790);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_5);
        NstdPtysSubGrp_NoNestedPartySubIDs_5.insert(NestedPartySubIDType_5.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_5);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_6;
        FIX::NestedPartySubID NestedPartySubID_6("STRING_1214133760");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_6);
        NstdPtysSubGrp_NoNestedPartySubIDs_6.insert(NestedPartySubID_6.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_6(259329981);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_6);
        NstdPtysSubGrp_NoNestedPartySubIDs_6.insert(NestedPartySubIDType_6.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_6);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_7;
        FIX::NestedPartySubID NestedPartySubID_7("STRING_2125796867");
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubID_7);
        NstdPtysSubGrp_NoNestedPartySubIDs_7.insert(NestedPartySubID_7.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_7(426343080);
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubIDType_7);
        NstdPtysSubGrp_NoNestedPartySubIDs_7.insert(NestedPartySubIDType_7.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_7);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_1;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_2("STRING_2120027279");
    noAllocs_0_1.set(AllocAccount_2);
    AllocAckGrp_NoAllocs_1.insert(AllocAccount_2.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_2(990710726);
    noAllocs_0_1.set(AllocAcctIDSource_2);
    AllocAckGrp_NoAllocs_1.insert(AllocAcctIDSource_2.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_2("STRING_54089257");
    noAllocs_0_1.set(AllocCustomerCapacity_2);
    AllocAckGrp_NoAllocs_1.insert(AllocCustomerCapacity_2.getString());
    FIX::AllocPositionEffect AllocPositionEffect_2('F');
    noAllocs_0_1.set(AllocPositionEffect_2);
    AllocAckGrp_NoAllocs_1.insert(AllocPositionEffect_2.getString());
    FIX::AllocPrice AllocPrice_2;
    AllocPrice_2.setString("8649125");
    noAllocs_0_1.set(AllocPrice_2);
    AllocAckGrp_NoAllocs_1.insert(AllocPrice_2.getString());
    FIX::AllocQty AllocQty_2;
    AllocQty_2.setString("3037466");
    noAllocs_0_1.set(AllocQty_2);
    AllocAckGrp_NoAllocs_1.insert(AllocQty_2.getString());
    FIX::AllocText AllocText_2("STRING_2007557922");
    noAllocs_0_1.set(AllocText_2);
    AllocAckGrp_NoAllocs_1.insert(AllocText_2.getString());
    FIX::EncodedAllocText EncodedAllocText_2("DATA_1827167825");
    noAllocs_0_1.set(EncodedAllocText_2);
    AllocAckGrp_NoAllocs_1.insert(EncodedAllocText_2.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_2(1466496200);
    noAllocs_0_1.set(EncodedAllocTextLen_2);
    AllocAckGrp_NoAllocs_1.insert(EncodedAllocTextLen_2.getString());
    FIX::IndividualAllocID IndividualAllocID_2("STRING_2083556527");
    noAllocs_0_1.set(IndividualAllocID_2);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocID_2.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_1(1706082641);
    noAllocs_0_1.set(IndividualAllocRejCode_1);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocRejCode_1.getString());
    FIX::IndividualAllocType IndividualAllocType_2(1);
    noAllocs_0_1.set(IndividualAllocType_2);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocType_2.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_2("STRING_705518354");
    noAllocs_0_1.set(SecondaryIndividualAllocID_2);
    AllocAckGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_2.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_6;
      FIX::NestedPartyID NestedPartyID_6("STRING_516933982");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyID_6.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_6('1');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyIDSource_6.getString());
      FIX::NestedPartyRole NestedPartyRole_6(1090661983);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyRole_6.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_6);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_8;
        FIX::NestedPartySubID NestedPartySubID_8("STRING_551095393");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_8);
        NstdPtysSubGrp_NoNestedPartySubIDs_8.insert(NestedPartySubID_8.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_8(1576672029);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_8);
        NstdPtysSubGrp_NoNestedPartySubIDs_8.insert(NestedPartySubIDType_8.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_8);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_7;
      FIX::NestedPartyID NestedPartyID_7("STRING_361668702");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyID_7.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_7('7');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyIDSource_7.getString());
      FIX::NestedPartyRole NestedPartyRole_7(1842035848);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyRole_7.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_7);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_9;
        FIX::NestedPartySubID NestedPartySubID_9("STRING_177722064");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_9);
        NstdPtysSubGrp_NoNestedPartySubIDs_9.insert(NestedPartySubID_9.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_9(647353803);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_9);
        NstdPtysSubGrp_NoNestedPartySubIDs_9.insert(NestedPartySubIDType_9.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_9);

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstructionAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_6;
    FIX::PartyID PartyID_6("STRING_1391855825");
    noPartyIDs_0_0.set(PartyID_6);
    Parties_NoPartyIDs_6.insert(PartyID_6.getString());
    FIX::PartyIDSource PartyIDSource_6('3');
    noPartyIDs_0_0.set(PartyIDSource_6);
    Parties_NoPartyIDs_6.insert(PartyIDSource_6.getString());
    FIX::PartyRole PartyRole_6(21);
    noPartyIDs_0_0.set(PartyRole_6);
    Parties_NoPartyIDs_6.insert(PartyRole_6.getString());
    all_values.push_back(Parties_NoPartyIDs_6);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_14;
      FIX::PartySubID PartySubID_14("STRING_879227416");
      noPartySubIDs_0_1_0.set(PartySubID_14);
      PtysSubGrp_NoPartySubIDs_14.insert(PartySubID_14.getString());
      FIX::PartySubIDType PartySubIDType_14(26);
      noPartySubIDs_0_1_0.set(PartySubIDType_14);
      PtysSubGrp_NoPartySubIDs_14.insert(PartySubIDType_14.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_14);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_15;
      FIX::PartySubID PartySubID_15("STRING_1872288162");
      noPartySubIDs_0_1_1.set(PartySubID_15);
      PtysSubGrp_NoPartySubIDs_15.insert(PartySubID_15.getString());
      FIX::PartySubIDType PartySubIDType_15(5);
      noPartySubIDs_0_1_1.set(PartySubIDType_15);
      PtysSubGrp_NoPartySubIDs_15.insert(PartySubIDType_15.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_15);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_16;
      FIX::PartySubID PartySubID_16("STRING_1940756940");
      noPartySubIDs_0_1_2.set(PartySubID_16);
      PtysSubGrp_NoPartySubIDs_16.insert(PartySubID_16.getString());
      FIX::PartySubIDType PartySubIDType_16(26);
      noPartySubIDs_0_1_2.set(PartySubIDType_16);
      PtysSubGrp_NoPartySubIDs_16.insert(PartySubIDType_16.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_16);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_7;
    FIX::PartyID PartyID_7("STRING_713097713");
    noPartyIDs_0_1.set(PartyID_7);
    Parties_NoPartyIDs_7.insert(PartyID_7.getString());
    FIX::PartyIDSource PartyIDSource_7('5');
    noPartyIDs_0_1.set(PartyIDSource_7);
    Parties_NoPartyIDs_7.insert(PartyIDSource_7.getString());
    FIX::PartyRole PartyRole_7(78);
    noPartyIDs_0_1.set(PartyRole_7);
    Parties_NoPartyIDs_7.insert(PartyRole_7.getString());
    all_values.push_back(Parties_NoPartyIDs_7);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_17;
      FIX::PartySubID PartySubID_17("STRING_1179040110");
      noPartySubIDs_1_1_0.set(PartySubID_17);
      PtysSubGrp_NoPartySubIDs_17.insert(PartySubID_17.getString());
      FIX::PartySubIDType PartySubIDType_17(11);
      noPartySubIDs_1_1_0.set(PartySubIDType_17);
      PtysSubGrp_NoPartySubIDs_17.insert(PartySubIDType_17.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_17);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_18;
      FIX::PartySubID PartySubID_18("STRING_1354688946");
      noPartySubIDs_1_1_1.set(PartySubID_18);
      PtysSubGrp_NoPartySubIDs_18.insert(PartySubID_18.getString());
      FIX::PartySubIDType PartySubIDType_18(31);
      noPartySubIDs_1_1_1.set(PartySubIDType_18);
      PtysSubGrp_NoPartySubIDs_18.insert(PartySubIDType_18.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_18);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
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
