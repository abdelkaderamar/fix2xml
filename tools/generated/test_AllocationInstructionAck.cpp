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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::AllocationInstructionAck msg;

  list<multiset<string>> all_values;
  multiset<string> AllocationInstructionAck_0;
  FIX::AllocID AllocID_1("STRING_1603759482");
  msg.set(AllocID_1);
  AllocationInstructionAck_0.insert(AllocID_1.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_1(3);
  msg.set(AllocIntermedReqType_1);
  AllocationInstructionAck_0.insert(AllocIntermedReqType_1.getString());
  FIX::AllocRejCode AllocRejCode_0(2);
  msg.set(AllocRejCode_0);
  AllocationInstructionAck_0.insert(AllocRejCode_0.getString());
  FIX::AllocStatus AllocStatus_0(4);
  msg.set(AllocStatus_0);
  AllocationInstructionAck_0.insert(AllocStatus_0.getString());
  FIX::AllocType AllocType_1(2);
  msg.set(AllocType_1);
  AllocationInstructionAck_0.insert(AllocType_1.getString());
  FIX::EncodedText EncodedText_2("DATA_1844770125");
  msg.set(EncodedText_2);
  AllocationInstructionAck_0.insert(EncodedText_2.getString());
  FIX::EncodedTextLen EncodedTextLen_2(1663156627);
  msg.set(EncodedTextLen_2);
  AllocationInstructionAck_0.insert(EncodedTextLen_2.getString());
  FIX::MatchStatus MatchStatus_2('0');
  msg.set(MatchStatus_2);
  AllocationInstructionAck_0.insert(MatchStatus_2.getString());
  FIX::Product Product_5(10);
  msg.set(Product_5);
  AllocationInstructionAck_0.insert(Product_5.getString());
  FIX::SecondaryAllocID SecondaryAllocID_1("STRING_1551169772");
  msg.set(SecondaryAllocID_1);
  AllocationInstructionAck_0.insert(SecondaryAllocID_1.getString());
  FIX::SecurityType SecurityType_5("STRING_REPO");
  msg.set(SecurityType_5);
  AllocationInstructionAck_0.insert(SecurityType_5.getString());
  FIX::Text Text_2("STRING_1983539134");
  msg.set(Text_2);
  AllocationInstructionAck_0.insert(Text_2.getString());
  FIX::TradeDate TradeDate_2("LOCALMKTDATE_1909515318");
  msg.set(TradeDate_2);
  AllocationInstructionAck_0.insert(TradeDate_2.getString());
  FIX::TransactTime TransactTime_2(FIX::UTCTIMESTAMP(8, 1, 16, 26, 8, 2015));
  msg.set(TransactTime_2);
  AllocationInstructionAck_0.insert(TransactTime_2.getString());
  all_values.push_back(AllocationInstructionAck_0);

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_2("STRING_1872389250");
    noAllocs_0_0.set(AllocAccount_2);
    AllocAckGrp_NoAllocs_0.insert(AllocAccount_2.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_2(1560202908);
    noAllocs_0_0.set(AllocAcctIDSource_2);
    AllocAckGrp_NoAllocs_0.insert(AllocAcctIDSource_2.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_2("STRING_1354956032");
    noAllocs_0_0.set(AllocCustomerCapacity_2);
    AllocAckGrp_NoAllocs_0.insert(AllocCustomerCapacity_2.getString());
    FIX::AllocPositionEffect AllocPositionEffect_2('R');
    noAllocs_0_0.set(AllocPositionEffect_2);
    AllocAckGrp_NoAllocs_0.insert(AllocPositionEffect_2.getString());
    FIX::AllocPrice AllocPrice_2;
    AllocPrice_2.setString("10950981");
    noAllocs_0_0.set(AllocPrice_2);
    AllocAckGrp_NoAllocs_0.insert(AllocPrice_2.getString());
    FIX::AllocQty AllocQty_2;
    AllocQty_2.setString("7274523");
    noAllocs_0_0.set(AllocQty_2);
    AllocAckGrp_NoAllocs_0.insert(AllocQty_2.getString());
    FIX::AllocText AllocText_2("STRING_1573531871");
    noAllocs_0_0.set(AllocText_2);
    AllocAckGrp_NoAllocs_0.insert(AllocText_2.getString());
    FIX::EncodedAllocText EncodedAllocText_2("DATA_117329873");
    noAllocs_0_0.set(EncodedAllocText_2);
    AllocAckGrp_NoAllocs_0.insert(EncodedAllocText_2.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_2(1571239684);
    noAllocs_0_0.set(EncodedAllocTextLen_2);
    AllocAckGrp_NoAllocs_0.insert(EncodedAllocTextLen_2.getString());
    FIX::IndividualAllocID IndividualAllocID_2("STRING_34324764");
    noAllocs_0_0.set(IndividualAllocID_2);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocID_2.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_0(1721089355);
    noAllocs_0_0.set(IndividualAllocRejCode_0);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocRejCode_0.getString());
    FIX::IndividualAllocType IndividualAllocType_2(1);
    noAllocs_0_0.set(IndividualAllocType_2);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocType_2.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_2("STRING_1801307246");
    noAllocs_0_0.set(SecondaryIndividualAllocID_2);
    AllocAckGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_2.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_0);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_6;
      FIX::NestedPartyID NestedPartyID_6("STRING_866562693");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyID_6.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_6('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyIDSource_6.getString());
      FIX::NestedPartyRole NestedPartyRole_6(2111000850);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyRole_6.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_6);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_13;
        FIX::NestedPartySubID NestedPartySubID_13("STRING_1744711826");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_13);
        NstdPtysSubGrp_NoNestedPartySubIDs_13.insert(NestedPartySubID_13.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_13(1514686974);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_13);
        NstdPtysSubGrp_NoNestedPartySubIDs_13.insert(NestedPartySubIDType_13.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_13);

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_7;
      FIX::NestedPartyID NestedPartyID_7("STRING_420225539");
      noNestedPartyIDs_0_1_1.set(NestedPartyID_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyID_7.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_7('1');
      noNestedPartyIDs_0_1_1.set(NestedPartyIDSource_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyIDSource_7.getString());
      FIX::NestedPartyRole NestedPartyRole_7(1276718644);
      noNestedPartyIDs_0_1_1.set(NestedPartyRole_7);
      NestedParties_NoNestedPartyIDs_7.insert(NestedPartyRole_7.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_7);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_14;
        FIX::NestedPartySubID NestedPartySubID_14("STRING_1525015960");
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubID_14);
        NstdPtysSubGrp_NoNestedPartySubIDs_14.insert(NestedPartySubID_14.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_14(1092898017);
        noNestedPartySubIDs_0_1_2_0.set(NestedPartySubIDType_14);
        NstdPtysSubGrp_NoNestedPartySubIDs_14.insert(NestedPartySubIDType_14.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_14);

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_8;
      FIX::NestedPartyID NestedPartyID_8("STRING_1090529513");
      noNestedPartyIDs_0_1_2.set(NestedPartyID_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyID_8.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_8('8');
      noNestedPartyIDs_0_1_2.set(NestedPartyIDSource_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyIDSource_8.getString());
      FIX::NestedPartyRole NestedPartyRole_8(1620079492);
      noNestedPartyIDs_0_1_2.set(NestedPartyRole_8);
      NestedParties_NoNestedPartyIDs_8.insert(NestedPartyRole_8.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_8);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_15;
        FIX::NestedPartySubID NestedPartySubID_15("STRING_755588051");
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubID_15);
        NstdPtysSubGrp_NoNestedPartySubIDs_15.insert(NestedPartySubID_15.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_15(1344985094);
        noNestedPartySubIDs_0_2_2_0.set(NestedPartySubIDType_15);
        NstdPtysSubGrp_NoNestedPartySubIDs_15.insert(NestedPartySubIDType_15.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_15);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_16;
        FIX::NestedPartySubID NestedPartySubID_16("STRING_1195275744");
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubID_16);
        NstdPtysSubGrp_NoNestedPartySubIDs_16.insert(NestedPartySubID_16.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_16(2110544083);
        noNestedPartySubIDs_0_2_2_1.set(NestedPartySubIDType_16);
        NstdPtysSubGrp_NoNestedPartySubIDs_16.insert(NestedPartySubIDType_16.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_16);

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_17;
        FIX::NestedPartySubID NestedPartySubID_17("STRING_2107114436");
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubID_17);
        NstdPtysSubGrp_NoNestedPartySubIDs_17.insert(NestedPartySubID_17.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_17(142890272);
        noNestedPartySubIDs_0_2_2_2.set(NestedPartySubIDType_17);
        NstdPtysSubGrp_NoNestedPartySubIDs_17.insert(NestedPartySubIDType_17.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_17);

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
    FIX::AllocAccount AllocAccount_3("STRING_690512788");
    noAllocs_0_1.set(AllocAccount_3);
    AllocAckGrp_NoAllocs_1.insert(AllocAccount_3.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_3(1533162660);
    noAllocs_0_1.set(AllocAcctIDSource_3);
    AllocAckGrp_NoAllocs_1.insert(AllocAcctIDSource_3.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_3("STRING_260220146");
    noAllocs_0_1.set(AllocCustomerCapacity_3);
    AllocAckGrp_NoAllocs_1.insert(AllocCustomerCapacity_3.getString());
    FIX::AllocPositionEffect AllocPositionEffect_3('O');
    noAllocs_0_1.set(AllocPositionEffect_3);
    AllocAckGrp_NoAllocs_1.insert(AllocPositionEffect_3.getString());
    FIX::AllocPrice AllocPrice_3;
    AllocPrice_3.setString("15674874");
    noAllocs_0_1.set(AllocPrice_3);
    AllocAckGrp_NoAllocs_1.insert(AllocPrice_3.getString());
    FIX::AllocQty AllocQty_3;
    AllocQty_3.setString("19813095");
    noAllocs_0_1.set(AllocQty_3);
    AllocAckGrp_NoAllocs_1.insert(AllocQty_3.getString());
    FIX::AllocText AllocText_3("STRING_1136196659");
    noAllocs_0_1.set(AllocText_3);
    AllocAckGrp_NoAllocs_1.insert(AllocText_3.getString());
    FIX::EncodedAllocText EncodedAllocText_3("DATA_1221311023");
    noAllocs_0_1.set(EncodedAllocText_3);
    AllocAckGrp_NoAllocs_1.insert(EncodedAllocText_3.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_3(281670077);
    noAllocs_0_1.set(EncodedAllocTextLen_3);
    AllocAckGrp_NoAllocs_1.insert(EncodedAllocTextLen_3.getString());
    FIX::IndividualAllocID IndividualAllocID_3("STRING_2002759352");
    noAllocs_0_1.set(IndividualAllocID_3);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocID_3.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_1(572421099);
    noAllocs_0_1.set(IndividualAllocRejCode_1);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocRejCode_1.getString());
    FIX::IndividualAllocType IndividualAllocType_3(2);
    noAllocs_0_1.set(IndividualAllocType_3);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocType_3.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_3("STRING_1667126896");
    noAllocs_0_1.set(SecondaryIndividualAllocID_3);
    AllocAckGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_3.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_1);

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_9;
      FIX::NestedPartyID NestedPartyID_9("STRING_1759874254");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyID_9.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_9('2');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyIDSource_9.getString());
      FIX::NestedPartyRole NestedPartyRole_9(1750416589);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_9);
      NestedParties_NoNestedPartyIDs_9.insert(NestedPartyRole_9.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_9);

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_18;
        FIX::NestedPartySubID NestedPartySubID_18("STRING_671814283");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_18);
        NstdPtysSubGrp_NoNestedPartySubIDs_18.insert(NestedPartySubID_18.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_18(1127948901);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_18);
        NstdPtysSubGrp_NoNestedPartySubIDs_18.insert(NestedPartySubIDType_18.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_18);

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstructionAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_3;
    FIX::PartyID PartyID_3("STRING_1762343796");
    noPartyIDs_0_0.set(PartyID_3);
    Parties_NoPartyIDs_3.insert(PartyID_3.getString());
    FIX::PartyIDSource PartyIDSource_3('G');
    noPartyIDs_0_0.set(PartyIDSource_3);
    Parties_NoPartyIDs_3.insert(PartyIDSource_3.getString());
    FIX::PartyRole PartyRole_3(62);
    noPartyIDs_0_0.set(PartyRole_3);
    Parties_NoPartyIDs_3.insert(PartyRole_3.getString());
    all_values.push_back(Parties_NoPartyIDs_3);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_8;
      FIX::PartySubID PartySubID_8("STRING_1971888855");
      noPartySubIDs_0_1_0.set(PartySubID_8);
      PtysSubGrp_NoPartySubIDs_8.insert(PartySubID_8.getString());
      FIX::PartySubIDType PartySubIDType_8(8);
      noPartySubIDs_0_1_0.set(PartySubIDType_8);
      PtysSubGrp_NoPartySubIDs_8.insert(PartySubIDType_8.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_8);

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_4;
    FIX::PartyID PartyID_4("STRING_445208729");
    noPartyIDs_0_1.set(PartyID_4);
    Parties_NoPartyIDs_4.insert(PartyID_4.getString());
    FIX::PartyIDSource PartyIDSource_4('E');
    noPartyIDs_0_1.set(PartyIDSource_4);
    Parties_NoPartyIDs_4.insert(PartyIDSource_4.getString());
    FIX::PartyRole PartyRole_4(57);
    noPartyIDs_0_1.set(PartyRole_4);
    Parties_NoPartyIDs_4.insert(PartyRole_4.getString());
    all_values.push_back(Parties_NoPartyIDs_4);

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_9;
      FIX::PartySubID PartySubID_9("STRING_477978430");
      noPartySubIDs_1_1_0.set(PartySubID_9);
      PtysSubGrp_NoPartySubIDs_9.insert(PartySubID_9.getString());
      FIX::PartySubIDType PartySubIDType_9(11);
      noPartySubIDs_1_1_0.set(PartySubIDType_9);
      PtysSubGrp_NoPartySubIDs_9.insert(PartySubIDType_9.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_9);

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_10;
      FIX::PartySubID PartySubID_10("STRING_848319147");
      noPartySubIDs_1_1_1.set(PartySubID_10);
      PtysSubGrp_NoPartySubIDs_10.insert(PartySubID_10.getString());
      FIX::PartySubIDType PartySubIDType_10(18);
      noPartySubIDs_1_1_1.set(PartySubIDType_10);
      PtysSubGrp_NoPartySubIDs_10.insert(PartySubIDType_10.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_10);

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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
