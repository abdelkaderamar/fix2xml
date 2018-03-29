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
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAck_0;
  FIX::AllocID AllocID_1("STRING_818152876");
  msg.set(AllocID_1);
  AllocationInstructionAck_0.insert(AllocID_1.getString());
  FIX::AllocIntermedReqType AllocIntermedReqType_1(1);
  msg.set(AllocIntermedReqType_1);
  AllocationInstructionAck_0.insert(AllocIntermedReqType_1.getString());
  FIX::AllocRejCode AllocRejCode_0(11);
  msg.set(AllocRejCode_0);
  AllocationInstructionAck_0.insert(AllocRejCode_0.getString());
  FIX::AllocStatus AllocStatus_0(1);
  msg.set(AllocStatus_0);
  AllocationInstructionAck_0.insert(AllocStatus_0.getString());
  FIX::AllocType AllocType_1(9);
  msg.set(AllocType_1);
  AllocationInstructionAck_0.insert(AllocType_1.getString());
  FIX::EncodedText EncodedText_2("DATA_148768844");
  msg.set(EncodedText_2);
  AllocationInstructionAck_0.insert(EncodedText_2.getString());
  FIX::EncodedTextLen EncodedTextLen_2(1550802634);
  msg.set(EncodedTextLen_2);
  AllocationInstructionAck_0.insert(EncodedTextLen_2.getString());
  FIX::MatchStatus MatchStatus_1('1');
  msg.set(MatchStatus_1);
  AllocationInstructionAck_0.insert(MatchStatus_1.getString());
  FIX::Product Product_3(5);
  msg.set(Product_3);
  AllocationInstructionAck_0.insert(Product_3.getString());
  FIX::SecondaryAllocID SecondaryAllocID_1("STRING_1853757728");
  msg.set(SecondaryAllocID_1);
  AllocationInstructionAck_0.insert(SecondaryAllocID_1.getString());
  FIX::SecurityType SecurityType_3("STRING_COFP");
  msg.set(SecurityType_3);
  AllocationInstructionAck_0.insert(SecurityType_3.getString());
  FIX::Text Text_2("STRING_508880655");
  msg.set(Text_2);
  AllocationInstructionAck_0.insert(Text_2.getString());
  FIX::TradeDate TradeDate_2("LOCALMKTDATE_412285414");
  msg.set(TradeDate_2);
  AllocationInstructionAck_0.insert(TradeDate_2.getString());
  FIX::TransactTime TransactTime_2(FIX::UTCTIMESTAMP(0, 47, 19, 6, 1, 2004));
  msg.set(TransactTime_2);
  AllocationInstructionAck_0.insert(TransactTime_2.getString());
  all_values.push_back(AllocationInstructionAck_0);

  all_compo_names.insert("AllocationInstructionAck");

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_0;
    FIX::AllocAccount AllocAccount_1("STRING_640456393");
    noAllocs_0_0.set(AllocAccount_1);
    AllocAckGrp_NoAllocs_0.insert(AllocAccount_1.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_1(920517993);
    noAllocs_0_0.set(AllocAcctIDSource_1);
    AllocAckGrp_NoAllocs_0.insert(AllocAcctIDSource_1.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_1("STRING_1972588848");
    noAllocs_0_0.set(AllocCustomerCapacity_1);
    AllocAckGrp_NoAllocs_0.insert(AllocCustomerCapacity_1.getString());
    FIX::AllocPositionEffect AllocPositionEffect_1('O');
    noAllocs_0_0.set(AllocPositionEffect_1);
    AllocAckGrp_NoAllocs_0.insert(AllocPositionEffect_1.getString());
    FIX::AllocPrice AllocPrice_1;
    AllocPrice_1.setString("6276202");
    noAllocs_0_0.set(AllocPrice_1);
    AllocAckGrp_NoAllocs_0.insert(AllocPrice_1.getString());
    FIX::AllocQty AllocQty_1;
    AllocQty_1.setString("4492542");
    noAllocs_0_0.set(AllocQty_1);
    AllocAckGrp_NoAllocs_0.insert(AllocQty_1.getString());
    FIX::AllocText AllocText_1("STRING_392294450");
    noAllocs_0_0.set(AllocText_1);
    AllocAckGrp_NoAllocs_0.insert(AllocText_1.getString());
    FIX::EncodedAllocText EncodedAllocText_1("DATA_1656024393");
    noAllocs_0_0.set(EncodedAllocText_1);
    AllocAckGrp_NoAllocs_0.insert(EncodedAllocText_1.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_1(179423628);
    noAllocs_0_0.set(EncodedAllocTextLen_1);
    AllocAckGrp_NoAllocs_0.insert(EncodedAllocTextLen_1.getString());
    FIX::IndividualAllocID IndividualAllocID_1("STRING_1064465574");
    noAllocs_0_0.set(IndividualAllocID_1);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocID_1.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_0(326693621);
    noAllocs_0_0.set(IndividualAllocRejCode_0);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocRejCode_0.getString());
    FIX::IndividualAllocType IndividualAllocType_1(2);
    noAllocs_0_0.set(IndividualAllocType_1);
    AllocAckGrp_NoAllocs_0.insert(IndividualAllocType_1.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_1("STRING_1819643525");
    noAllocs_0_0.set(SecondaryIndividualAllocID_1);
    AllocAckGrp_NoAllocs_0.insert(SecondaryIndividualAllocID_1.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_0);
    all_compo_names.insert("AllocAckGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_3;
      FIX::NestedPartyID NestedPartyID_3("STRING_919839193");
      noNestedPartyIDs_0_1_0.set(NestedPartyID_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyID_3.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_3('1');
      noNestedPartyIDs_0_1_0.set(NestedPartyIDSource_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyIDSource_3.getString());
      FIX::NestedPartyRole NestedPartyRole_3(1594137208);
      noNestedPartyIDs_0_1_0.set(NestedPartyRole_3);
      NestedParties_NoNestedPartyIDs_3.insert(NestedPartyRole_3.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_3);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_9;
        FIX::NestedPartySubID NestedPartySubID_9("STRING_540316590");
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubID_9);
        NstdPtysSubGrp_NoNestedPartySubIDs_9.insert(NestedPartySubID_9.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_9(1300411289);
        noNestedPartySubIDs_0_0_2_0.set(NestedPartySubIDType_9);
        NstdPtysSubGrp_NoNestedPartySubIDs_9.insert(NestedPartySubIDType_9.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_9);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_1;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_1;
    FIX::AllocAccount AllocAccount_2("STRING_23797920");
    noAllocs_0_1.set(AllocAccount_2);
    AllocAckGrp_NoAllocs_1.insert(AllocAccount_2.getString());
    FIX::AllocAcctIDSource AllocAcctIDSource_2(1049197246);
    noAllocs_0_1.set(AllocAcctIDSource_2);
    AllocAckGrp_NoAllocs_1.insert(AllocAcctIDSource_2.getString());
    FIX::AllocCustomerCapacity AllocCustomerCapacity_2("STRING_1712696703");
    noAllocs_0_1.set(AllocCustomerCapacity_2);
    AllocAckGrp_NoAllocs_1.insert(AllocCustomerCapacity_2.getString());
    FIX::AllocPositionEffect AllocPositionEffect_2('F');
    noAllocs_0_1.set(AllocPositionEffect_2);
    AllocAckGrp_NoAllocs_1.insert(AllocPositionEffect_2.getString());
    FIX::AllocPrice AllocPrice_2;
    AllocPrice_2.setString("13007329");
    noAllocs_0_1.set(AllocPrice_2);
    AllocAckGrp_NoAllocs_1.insert(AllocPrice_2.getString());
    FIX::AllocQty AllocQty_2;
    AllocQty_2.setString("8245722");
    noAllocs_0_1.set(AllocQty_2);
    AllocAckGrp_NoAllocs_1.insert(AllocQty_2.getString());
    FIX::AllocText AllocText_2("STRING_1268910747");
    noAllocs_0_1.set(AllocText_2);
    AllocAckGrp_NoAllocs_1.insert(AllocText_2.getString());
    FIX::EncodedAllocText EncodedAllocText_2("DATA_611488148");
    noAllocs_0_1.set(EncodedAllocText_2);
    AllocAckGrp_NoAllocs_1.insert(EncodedAllocText_2.getString());
    FIX::EncodedAllocTextLen EncodedAllocTextLen_2(256704407);
    noAllocs_0_1.set(EncodedAllocTextLen_2);
    AllocAckGrp_NoAllocs_1.insert(EncodedAllocTextLen_2.getString());
    FIX::IndividualAllocID IndividualAllocID_2("STRING_1573549393");
    noAllocs_0_1.set(IndividualAllocID_2);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocID_2.getString());
    FIX::IndividualAllocRejCode IndividualAllocRejCode_1(2077588308);
    noAllocs_0_1.set(IndividualAllocRejCode_1);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocRejCode_1.getString());
    FIX::IndividualAllocType IndividualAllocType_2(1);
    noAllocs_0_1.set(IndividualAllocType_2);
    AllocAckGrp_NoAllocs_1.insert(IndividualAllocType_2.getString());
    FIX::SecondaryIndividualAllocID SecondaryIndividualAllocID_2("STRING_346583738");
    noAllocs_0_1.set(SecondaryIndividualAllocID_2);
    AllocAckGrp_NoAllocs_1.insert(SecondaryIndividualAllocID_2.getString());
    all_values.push_back(AllocAckGrp_NoAllocs_1);
    all_compo_names.insert("AllocAckGrp.NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_4;
      FIX::NestedPartyID NestedPartyID_4("STRING_1793499368");
      noNestedPartyIDs_1_1_0.set(NestedPartyID_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyID_4.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_4('9');
      noNestedPartyIDs_1_1_0.set(NestedPartyIDSource_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyIDSource_4.getString());
      FIX::NestedPartyRole NestedPartyRole_4(204464156);
      noNestedPartyIDs_1_1_0.set(NestedPartyRole_4);
      NestedParties_NoNestedPartyIDs_4.insert(NestedPartyRole_4.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_4);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_10;
        FIX::NestedPartySubID NestedPartySubID_10("STRING_482744695");
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubID_10);
        NstdPtysSubGrp_NoNestedPartySubIDs_10.insert(NestedPartySubID_10.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_10(383887785);
        noNestedPartySubIDs_1_0_2_0.set(NestedPartySubIDType_10);
        NstdPtysSubGrp_NoNestedPartySubIDs_10.insert(NestedPartySubIDType_10.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_10);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_11;
        FIX::NestedPartySubID NestedPartySubID_11("STRING_1102775744");
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubID_11);
        NstdPtysSubGrp_NoNestedPartySubIDs_11.insert(NestedPartySubID_11.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_11(809438316);
        noNestedPartySubIDs_1_0_2_1.set(NestedPartySubIDType_11);
        NstdPtysSubGrp_NoNestedPartySubIDs_11.insert(NestedPartySubIDType_11.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_11);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_12;
        FIX::NestedPartySubID NestedPartySubID_12("STRING_1237286176");
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubID_12);
        NstdPtysSubGrp_NoNestedPartySubIDs_12.insert(NestedPartySubID_12.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_12(774935622);
        noNestedPartySubIDs_1_0_2_2.set(NestedPartySubIDType_12);
        NstdPtysSubGrp_NoNestedPartySubIDs_12.insert(NestedPartySubIDType_12.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_12);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_5;
      FIX::NestedPartyID NestedPartyID_5("STRING_852772891");
      noNestedPartyIDs_1_1_1.set(NestedPartyID_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyID_5.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_5('9');
      noNestedPartyIDs_1_1_1.set(NestedPartyIDSource_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyIDSource_5.getString());
      FIX::NestedPartyRole NestedPartyRole_5(595864344);
      noNestedPartyIDs_1_1_1.set(NestedPartyRole_5);
      NestedParties_NoNestedPartyIDs_5.insert(NestedPartyRole_5.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_5);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_13;
        FIX::NestedPartySubID NestedPartySubID_13("STRING_845922288");
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubID_13);
        NstdPtysSubGrp_NoNestedPartySubIDs_13.insert(NestedPartySubID_13.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_13(1136180934);
        noNestedPartySubIDs_1_1_2_0.set(NestedPartySubIDType_13);
        NstdPtysSubGrp_NoNestedPartySubIDs_13.insert(NestedPartySubIDType_13.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_13);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_6;
      FIX::NestedPartyID NestedPartyID_6("STRING_1599837740");
      noNestedPartyIDs_1_1_2.set(NestedPartyID_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyID_6.getString());
      FIX::NestedPartyIDSource NestedPartyIDSource_6('8');
      noNestedPartyIDs_1_1_2.set(NestedPartyIDSource_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyIDSource_6.getString());
      FIX::NestedPartyRole NestedPartyRole_6(37894532);
      noNestedPartyIDs_1_1_2.set(NestedPartyRole_6);
      NestedParties_NoNestedPartyIDs_6.insert(NestedPartyRole_6.getString());
      all_values.push_back(NestedParties_NoNestedPartyIDs_6);
      all_compo_names.insert("NestedParties.NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_14;
        FIX::NestedPartySubID NestedPartySubID_14("STRING_1042109276");
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubID_14);
        NstdPtysSubGrp_NoNestedPartySubIDs_14.insert(NestedPartySubID_14.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_14(1338627499);
        noNestedPartySubIDs_1_2_2_0.set(NestedPartySubIDType_14);
        NstdPtysSubGrp_NoNestedPartySubIDs_14.insert(NestedPartySubIDType_14.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_14);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_15;
        FIX::NestedPartySubID NestedPartySubID_15("STRING_1989623039");
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubID_15);
        NstdPtysSubGrp_NoNestedPartySubIDs_15.insert(NestedPartySubID_15.getString());
        FIX::NestedPartySubIDType NestedPartySubIDType_15(163536375);
        noNestedPartySubIDs_1_2_2_1.set(NestedPartySubIDType_15);
        NstdPtysSubGrp_NoNestedPartySubIDs_15.insert(NestedPartySubIDType_15.getString());
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_15);
        all_compo_names.insert("NstdPtysSubGrp.NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationInstructionAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_5;
    FIX::PartyID PartyID_5("STRING_98843798");
    noPartyIDs_0_0.set(PartyID_5);
    Parties_NoPartyIDs_5.insert(PartyID_5.getString());
    FIX::PartyIDSource PartyIDSource_5('G');
    noPartyIDs_0_0.set(PartyIDSource_5);
    Parties_NoPartyIDs_5.insert(PartyIDSource_5.getString());
    FIX::PartyRole PartyRole_5(9);
    noPartyIDs_0_0.set(PartyRole_5);
    Parties_NoPartyIDs_5.insert(PartyRole_5.getString());
    all_values.push_back(Parties_NoPartyIDs_5);
    all_compo_names.insert("Parties.NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_12;
      FIX::PartySubID PartySubID_12("STRING_2083669507");
      noPartySubIDs_0_1_0.set(PartySubID_12);
      PtysSubGrp_NoPartySubIDs_12.insert(PartySubID_12.getString());
      FIX::PartySubIDType PartySubIDType_12(33);
      noPartySubIDs_0_1_0.set(PartySubIDType_12);
      PtysSubGrp_NoPartySubIDs_12.insert(PartySubIDType_12.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_12);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_13;
      FIX::PartySubID PartySubID_13("STRING_642020318");
      noPartySubIDs_0_1_1.set(PartySubID_13);
      PtysSubGrp_NoPartySubIDs_13.insert(PartySubID_13.getString());
      FIX::PartySubIDType PartySubIDType_13(32);
      noPartySubIDs_0_1_1.set(PartySubIDType_13);
      PtysSubGrp_NoPartySubIDs_13.insert(PartySubIDType_13.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_13);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_14;
      FIX::PartySubID PartySubID_14("STRING_1839894325");
      noPartySubIDs_0_1_2.set(PartySubID_14);
      PtysSubGrp_NoPartySubIDs_14.insert(PartySubID_14.getString());
      FIX::PartySubIDType PartySubIDType_14(14);
      noPartySubIDs_0_1_2.set(PartySubIDType_14);
      PtysSubGrp_NoPartySubIDs_14.insert(PartySubIDType_14.getString());
      all_values.push_back(PtysSubGrp_NoPartySubIDs_14);
      all_compo_names.insert("PtysSubGrp.NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
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
