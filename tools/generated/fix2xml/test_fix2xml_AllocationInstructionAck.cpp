#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
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
  ASSERT_TRUE(converter.parse_fixt_dico("../spec/fix/FIXT11.xml"));
  FIX50SP2::AllocationInstructionAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAck_0;
  set_field(msg, FIX::AllocID{"STRING_740923793"}, AllocationInstructionAck_0);
  set_field(msg, FIX::AllocIntermedReqType{1}, AllocationInstructionAck_0);
  set_field(msg, FIX::AllocRejCode{99}, AllocationInstructionAck_0);
  set_field(msg, FIX::AllocStatus{6}, AllocationInstructionAck_0);
  set_field(msg, FIX::AllocType{2}, AllocationInstructionAck_0);
  set_field(msg, FIX::EncodedText{"DATA_1637614949"}, AllocationInstructionAck_0);
  set_field(msg, FIX::EncodedTextLen{2031706242}, AllocationInstructionAck_0);
  set_field(msg, FIX::MatchStatus{'0'}, AllocationInstructionAck_0);
  set_field(msg, FIX::Product{13}, AllocationInstructionAck_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_1677081069"}, AllocationInstructionAck_0);
  set_field(msg, FIX::SecurityType{"STRING_ONITE"}, AllocationInstructionAck_0);
  set_field(msg, FIX::Text{"STRING_476769529"}, AllocationInstructionAck_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_1571275635"}, AllocationInstructionAck_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(6, 17, 30, 23, 9, 2010)}, AllocationInstructionAck_0);
  all_values.push_back(AllocationInstructionAck_0);

  all_compo_names.insert("AllocationInstructionAck");

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_0;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_1775859929"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{1365372011}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_221738740"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'R'}, AllocAckGrp_NoAllocs_0);
    FIX::AllocPrice AllocPrice_3;
    AllocPrice_3.setString("10719466");
set_field(noAllocs_0_0, AllocPrice_3, AllocAckGrp_NoAllocs_0);
    FIX::AllocQty AllocQty_3;
    AllocQty_3.setString("7592123");
set_field(noAllocs_0_0, AllocQty_3, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_215017212"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_449875675"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{970135291}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_586700489"}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocRejCode{1190799468}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{1}, AllocAckGrp_NoAllocs_0);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_1781396953"}, AllocAckGrp_NoAllocs_0);
    all_values.push_back(AllocAckGrp_NoAllocs_0);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_8;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1942846079"}, NestedParties_NoNestedPartyIDs_8);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_8);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1860770637}, NestedParties_NoNestedPartyIDs_8);
      all_values.push_back(NestedParties_NoNestedPartyIDs_8);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_21;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1990615870"}, NstdPtysSubGrp_NoNestedPartySubIDs_21);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1390368058}, NstdPtysSubGrp_NoNestedPartySubIDs_21);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_21);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_9;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_591245793"}, NestedParties_NoNestedPartyIDs_9);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_9);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{814160045}, NestedParties_NoNestedPartyIDs_9);
      all_values.push_back(NestedParties_NoNestedPartyIDs_9);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_22;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_142433317"}, NstdPtysSubGrp_NoNestedPartySubIDs_22);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{203748674}, NstdPtysSubGrp_NoNestedPartySubIDs_22);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_22);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_23;
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubID{"STRING_1814599816"}, NstdPtysSubGrp_NoNestedPartySubIDs_23);
        set_field(noNestedPartySubIDs_0_1_2_1, FIX::NestedPartySubIDType{78987873}, NstdPtysSubGrp_NoNestedPartySubIDs_23);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_23);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAck::NoAllocs noAllocs_0_1;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_1;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_970455286"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{1676827248}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocCustomerCapacity{"STRING_1544863087"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocPositionEffect{'F'}, AllocAckGrp_NoAllocs_1);
    FIX::AllocPrice AllocPrice_4;
    AllocPrice_4.setString("8947156");
set_field(noAllocs_0_1, AllocPrice_4, AllocAckGrp_NoAllocs_1);
    FIX::AllocQty AllocQty_4;
    AllocQty_4.setString("17666018");
set_field(noAllocs_0_1, AllocQty_4, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::AllocText{"STRING_11773442"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::EncodedAllocText{"DATA_1966662296"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::EncodedAllocTextLen{378330499}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_226790654"}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::IndividualAllocRejCode{269054323}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::IndividualAllocType{1}, AllocAckGrp_NoAllocs_1);
    set_field(noAllocs_0_1, FIX::SecondaryIndividualAllocID{"STRING_813491143"}, AllocAckGrp_NoAllocs_1);
    all_values.push_back(AllocAckGrp_NoAllocs_1);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_10;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_90943674"}, NestedParties_NoNestedPartyIDs_10);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'4'}, NestedParties_NoNestedPartyIDs_10);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1288918186}, NestedParties_NoNestedPartyIDs_10);
      all_values.push_back(NestedParties_NoNestedPartyIDs_10);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_24;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1718932703"}, NstdPtysSubGrp_NoNestedPartySubIDs_24);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{1002205175}, NstdPtysSubGrp_NoNestedPartySubIDs_24);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_24);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_11;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_673654135"}, NestedParties_NoNestedPartyIDs_11);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_11);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{245089585}, NestedParties_NoNestedPartyIDs_11);
      all_values.push_back(NestedParties_NoNestedPartyIDs_11);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_25;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_1881966677"}, NstdPtysSubGrp_NoNestedPartySubIDs_25);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1059249631}, NstdPtysSubGrp_NoNestedPartySubIDs_25);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_25);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_26;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_693173466"}, NstdPtysSubGrp_NoNestedPartySubIDs_26);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{2024399994}, NstdPtysSubGrp_NoNestedPartySubIDs_26);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_26);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_12;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_1262998305"}, NestedParties_NoNestedPartyIDs_12);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_12);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{2103387867}, NestedParties_NoNestedPartyIDs_12);
      all_values.push_back(NestedParties_NoNestedPartyIDs_12);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationInstructionAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_27;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_2037116883"}, NstdPtysSubGrp_NoNestedPartySubIDs_27);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{1500767307}, NstdPtysSubGrp_NoNestedPartySubIDs_27);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_27);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
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
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_784348847"}, Parties_NoPartyIDs_5);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'3'}, Parties_NoPartyIDs_5);
    set_field(noPartyIDs_0_0, FIX::PartyRole{83}, Parties_NoPartyIDs_5);
    all_values.push_back(Parties_NoPartyIDs_5);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_12;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1498215986"}, PtysSubGrp_NoPartySubIDs_12);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{1}, PtysSubGrp_NoPartySubIDs_12);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_12);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_13;
      set_field(noPartySubIDs_0_1_1, FIX::PartySubID{"STRING_872581819"}, PtysSubGrp_NoPartySubIDs_13);
      set_field(noPartySubIDs_0_1_1, FIX::PartySubIDType{3}, PtysSubGrp_NoPartySubIDs_13);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_13);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_2;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_14;
      set_field(noPartySubIDs_0_1_2, FIX::PartySubID{"STRING_1736856751"}, PtysSubGrp_NoPartySubIDs_14);
      set_field(noPartySubIDs_0_1_2, FIX::PartySubIDType{32}, PtysSubGrp_NoPartySubIDs_14);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_14);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_2);
    }
    msg.addGroup(noPartyIDs_0_0);
  }
  {
    FIX50SP2::AllocationInstructionAck::NoPartyIDs noPartyIDs_0_1;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_6;
    set_field(noPartyIDs_0_1, FIX::PartyID{"STRING_790141803"}, Parties_NoPartyIDs_6);
    set_field(noPartyIDs_0_1, FIX::PartyIDSource{'2'}, Parties_NoPartyIDs_6);
    set_field(noPartyIDs_0_1, FIX::PartyRole{18}, Parties_NoPartyIDs_6);
    all_values.push_back(Parties_NoPartyIDs_6);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_15;
      set_field(noPartySubIDs_1_1_0, FIX::PartySubID{"STRING_1755710256"}, PtysSubGrp_NoPartySubIDs_15);
      set_field(noPartySubIDs_1_1_0, FIX::PartySubIDType{19}, PtysSubGrp_NoPartySubIDs_15);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_15);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationInstructionAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_1_1_1;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_16;
      set_field(noPartySubIDs_1_1_1, FIX::PartySubID{"STRING_1350102044"}, PtysSubGrp_NoPartySubIDs_16);
      set_field(noPartySubIDs_1_1_1, FIX::PartySubIDType{27}, PtysSubGrp_NoPartySubIDs_16);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_16);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_1.addGroup(noPartySubIDs_1_1_1);
    }
    msg.addGroup(noPartyIDs_0_1);
  }
  // header
  multiset<string> header_3;
  set_header_field(msg.getHeader(), FIX::ApplVerID{"STRING_2"}, header_3);
  set_header_field(msg.getHeader(), FIX::BeginString{"STRING_467518325"}, header_3);
  set_header_field(msg.getHeader(), FIX::BodyLength{904774562}, header_3);
  set_header_field(msg.getHeader(), FIX::CstmApplVerID{"STRING_1632930893"}, header_3);
  set_header_field(msg.getHeader(), FIX::DeliverToCompID{"STRING_1160691791"}, header_3);
  set_header_field(msg.getHeader(), FIX::DeliverToLocationID{"STRING_781690909"}, header_3);
  set_header_field(msg.getHeader(), FIX::DeliverToSubID{"STRING_748445551"}, header_3);
  set_header_field(msg.getHeader(), FIX::LastMsgSeqNumProcessed{1520981426}, header_3);
  set_header_field(msg.getHeader(), FIX::MessageEncoding{"STRING_ISO-2022-JP"}, header_3);
  set_header_field(msg.getHeader(), FIX::MsgSeqNum{834415495}, header_3);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfCompID{"STRING_1410614662"}, header_3);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfLocationID{"STRING_90878787"}, header_3);
  set_header_field(msg.getHeader(), FIX::OnBehalfOfSubID{"STRING_1519217006"}, header_3);
  set_header_field(msg.getHeader(), FIX::OrigSendingTime{FIX::UTCTIMESTAMP(10, 52, 36, 12, 5, 2001)}, header_3);
  set_header_field(msg.getHeader(), FIX::PossDupFlag{false}, header_3);
  set_header_field(msg.getHeader(), FIX::PossResend{false}, header_3);
  set_header_field(msg.getHeader(), FIX::SecureData{"DATA_1708541138"}, header_3);
  set_header_field(msg.getHeader(), FIX::SecureDataLen{2050836544}, header_3);
  set_header_field(msg.getHeader(), FIX::SenderCompID{"STRING_617824576"}, header_3);
  set_header_field(msg.getHeader(), FIX::SenderLocationID{"STRING_1034927640"}, header_3);
  set_header_field(msg.getHeader(), FIX::SenderSubID{"STRING_579800805"}, header_3);
  set_header_field(msg.getHeader(), FIX::SendingTime{FIX::UTCTIMESTAMP(21, 29, 37, 27, 3, 2014)}, header_3);
  set_header_field(msg.getHeader(), FIX::TargetCompID{"STRING_1422647825"}, header_3);
  set_header_field(msg.getHeader(), FIX::TargetLocationID{"STRING_1410629318"}, header_3);
  set_header_field(msg.getHeader(), FIX::TargetSubID{"STRING_935324541"}, header_3);
  set_header_field(msg.getHeader(), FIX::XmlData{"DATA_23609728"}, header_3);
  set_header_field(msg.getHeader(), FIX::XmlDataLen{784127096}, header_3);
  all_values.push_back(header_3);
  all_compo_names.insert(".header");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  BOOST_LOG_TRIVIAL(debug) << "The resulting XML is";
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  BOOST_LOG_TRIVIAL(debug) << "Quickfix XML representation is";
  cout << "////////////////////////////////////////////" << endl;
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
