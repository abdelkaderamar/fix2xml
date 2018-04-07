#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  set_field(msg, FIX::AllocID{"STRING_258714095"}, AllocationInstructionAck_0);
  set_field(msg, FIX::AllocIntermedReqType{4}, AllocationInstructionAck_0);
  set_field(msg, FIX::AllocRejCode{12}, AllocationInstructionAck_0);
  set_field(msg, FIX::AllocStatus{6}, AllocationInstructionAck_0);
  set_field(msg, FIX::AllocType{14}, AllocationInstructionAck_0);
  set_field(msg, FIX::EncodedText{"DATA_1274167658"}, AllocationInstructionAck_0);
  set_field(msg, FIX::EncodedTextLen{409378568}, AllocationInstructionAck_0);
  set_field(msg, FIX::MatchStatus{'0'}, AllocationInstructionAck_0);
  set_field(msg, FIX::Product{3}, AllocationInstructionAck_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_1253812318"}, AllocationInstructionAck_0);
  set_field(msg, FIX::SecurityType{"STRING_FADN"}, AllocationInstructionAck_0);
  set_field(msg, FIX::Text{"STRING_695240703"}, AllocationInstructionAck_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_2049346396"}, AllocationInstructionAck_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(16, 32, 22, 17, 12, 2015)}, AllocationInstructionAck_0);
  all_values.push_back(AllocationInstructionAck_0);

  all_compo_names.insert("AllocationInstructionAck");

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_0;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1992843978"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{105737227}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_1192036849"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'R'}, AllocAckGrp_NoAllocs_0);
    FIX::AllocPrice AllocPrice_1;
    AllocPrice_1.setString("9630358");
set_field(noAllocs_0_0, AllocPrice_1, AllocAckGrp_NoAllocs_0);
    FIX::AllocQty AllocQty_1;
    AllocQty_1.setString("7144541");
set_field(noAllocs_0_0, AllocQty_1, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_424878730"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_1291573093"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{1529504889}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_970803737"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocRejCode{1550287188}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{2}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_420832462"}, AllocAckGrp_NoAllocs_0);
    all_values.push_back(AllocAckGrp_NoAllocs_0);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_6;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1524242912"}, NestedParties_NoNestedPartyIDs_6);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_6);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{135971003}, NestedParties_NoNestedPartyIDs_6);
      all_values.push_back(NestedParties_NoNestedPartyIDs_6);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_17;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_839706295"}, NstdPtysSubGrp_NoNestedPartySubIDs_17);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1389783322}, NstdPtysSubGrp_NoNestedPartySubIDs_17);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_17);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_18;
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubID{"STRING_1741631964"}, NstdPtysSubGrp_NoNestedPartySubIDs_18);
        set_field(noNestedPartySubIDs_0_0_2_1, FIX::NestedPartySubIDType{1534946998}, NstdPtysSubGrp_NoNestedPartySubIDs_18);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_18);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_19;
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubID{"STRING_1291646070"}, NstdPtysSubGrp_NoNestedPartySubIDs_19);
        set_field(noNestedPartySubIDs_0_0_2_2, FIX::NestedPartySubIDType{1274790734}, NstdPtysSubGrp_NoNestedPartySubIDs_19);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_19);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_2);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_7;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_1258523838"}, NestedParties_NoNestedPartyIDs_7);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_7);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{393594988}, NestedParties_NoNestedPartyIDs_7);
      all_values.push_back(NestedParties_NoNestedPartyIDs_7);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_20;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_841155222"}, NstdPtysSubGrp_NoNestedPartySubIDs_20);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1015277671}, NstdPtysSubGrp_NoNestedPartySubIDs_20);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_20);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_21;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_1011568653"}, NstdPtysSubGrp_NoNestedPartySubIDs_21);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{686515552}, NstdPtysSubGrp_NoNestedPartySubIDs_21);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_21);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_8;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_1121014899"}, NestedParties_NoNestedPartyIDs_8);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'5'}, NestedParties_NoNestedPartyIDs_8);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{525127230}, NestedParties_NoNestedPartyIDs_8);
      all_values.push_back(NestedParties_NoNestedPartyIDs_8);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_22;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_770576041"}, NstdPtysSubGrp_NoNestedPartySubIDs_22);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{950005960}, NstdPtysSubGrp_NoNestedPartySubIDs_22);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_22);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_1;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_1;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_1228140221"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{152597282}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocCustomerCapacity{"STRING_1920809698"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocPositionEffect{'R'}, AllocAckGrp_NoAllocs_1);
    FIX::AllocPrice AllocPrice_2;
    AllocPrice_2.setString("10341169");
set_field(noAllocs_0_1, AllocPrice_2, AllocAckGrp_NoAllocs_1);
    FIX::AllocQty AllocQty_2;
    AllocQty_2.setString("1941585");
set_field(noAllocs_0_1, AllocQty_2, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocText{"STRING_357536197"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::EncodedAllocText{"DATA_410876246"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::EncodedAllocTextLen{1889158632}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_493507200"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::IndividualAllocRejCode{374969657}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::IndividualAllocType{2}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::SecondaryIndividualAllocID{"STRING_1883290522"}, AllocAckGrp_NoAllocs_1);
    all_values.push_back(AllocAckGrp_NoAllocs_1);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_9;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_2116328277"}, NestedParties_NoNestedPartyIDs_9);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_9);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1243908708}, NestedParties_NoNestedPartyIDs_9);
      all_values.push_back(NestedParties_NoNestedPartyIDs_9);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_23;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_246380139"}, NstdPtysSubGrp_NoNestedPartySubIDs_23);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1637503696}, NstdPtysSubGrp_NoNestedPartySubIDs_23);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_23);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_24;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_716701051"}, NstdPtysSubGrp_NoNestedPartySubIDs_24);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{1087535361}, NstdPtysSubGrp_NoNestedPartySubIDs_24);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_24);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_25;
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubID{"STRING_505297720"}, NstdPtysSubGrp_NoNestedPartySubIDs_25);
        set_field(noNestedPartySubIDs_1_0_2_2, FIX::NestedPartySubIDType{1728269705}, NstdPtysSubGrp_NoNestedPartySubIDs_25);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_25);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_10;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1774050914"}, NestedParties_NoNestedPartyIDs_10);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_10);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{1784391559}, NestedParties_NoNestedPartyIDs_10);
      all_values.push_back(NestedParties_NoNestedPartyIDs_10);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_26;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_1562879747"}, NstdPtysSubGrp_NoNestedPartySubIDs_26);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{407483952}, NstdPtysSubGrp_NoNestedPartySubIDs_26);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_26);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_11;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_1101700457"}, NestedParties_NoNestedPartyIDs_11);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'6'}, NestedParties_NoNestedPartyIDs_11);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{560081235}, NestedParties_NoNestedPartyIDs_11);
      all_values.push_back(NestedParties_NoNestedPartyIDs_11);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_27;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_1274480082"}, NstdPtysSubGrp_NoNestedPartySubIDs_27);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{1594198216}, NstdPtysSubGrp_NoNestedPartySubIDs_27);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_27);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_28;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_1069185019"}, NstdPtysSubGrp_NoNestedPartySubIDs_28);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{1632016279}, NstdPtysSubGrp_NoNestedPartySubIDs_28);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_28);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

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
    multiset<string> Parties_NoPartyIDs_4;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_810860003"}, Parties_NoPartyIDs_4);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'E'}, Parties_NoPartyIDs_4);
    set_field(noPartyIDs_0_0, FIX::PartyRole{5}, Parties_NoPartyIDs_4);
    all_values.push_back(Parties_NoPartyIDs_4);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_8;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1861330354"}, PtysSubGrp_NoPartySubIDs_8);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{2}, PtysSubGrp_NoPartySubIDs_8);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_8);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_9;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_1361085911"}, PtysSubGrp_NoPartySubIDs_9);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_9);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_9);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    msg.addGroup(noPartyIDs_0_0);
  }

  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";cout << "////////////////////////////////////////////" << endl;
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
