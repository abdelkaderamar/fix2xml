#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

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
  multiset<string> all_compo_names;
  multiset<string> AllocationReportAck_0;
  set_field(msg, FIX::AllocID{"STRING_1104577752"}, AllocationReportAck_0);
  set_field(msg, FIX::AllocIntermedReqType{4}, AllocationReportAck_0);
  set_field(msg, FIX::AllocRejCode{12}, AllocationReportAck_0);
  set_field(msg, FIX::AllocReportID{"STRING_2138284826"}, AllocationReportAck_0);
  set_field(msg, FIX::AllocReportType{4}, AllocationReportAck_0);
  set_field(msg, FIX::AllocStatus{3}, AllocationReportAck_0);
  set_field(msg, FIX::AllocTransType{'0'}, AllocationReportAck_0);
  set_field(msg, FIX::AvgPxIndicator{2}, AllocationReportAck_0);
  set_field(msg, FIX::ClearingBusinessDate{"LOCALMKTDATE_1545537646"}, AllocationReportAck_0);
  set_field(msg, FIX::EncodedText{"DATA_408747984"}, AllocationReportAck_0);
  set_field(msg, FIX::EncodedTextLen{281979033}, AllocationReportAck_0);
  set_field(msg, FIX::MatchStatus{'1'}, AllocationReportAck_0);
  set_field(msg, FIX::Product{6}, AllocationReportAck_0);
  FIX::Quantity Quantity_4;
  Quantity_4.setString("15315095");
set_field(msg, Quantity_4, AllocationReportAck_0);
  set_field(msg, FIX::SecondaryAllocID{"STRING_112341955"}, AllocationReportAck_0);
  set_field(msg, FIX::SecurityType{"STRING_DUAL"}, AllocationReportAck_0);
  set_field(msg, FIX::Text{"STRING_2107770904"}, AllocationReportAck_0);
  set_field(msg, FIX::TradeDate{"LOCALMKTDATE_785531921"}, AllocationReportAck_0);
  set_field(msg, FIX::TransactTime{FIX::UTCTIMESTAMP(4, 27, 50, 20, 10, 2008)}, AllocationReportAck_0);
  all_values.push_back(AllocationReportAck_0);

  all_compo_names.insert("AllocationReportAck");

  // AllocAckGrp
  // Group AllocAckGrp.NoAllocs
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_0;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_2;
    set_field(noAllocs_0_0, FIX::AllocAccount{"STRING_926827190"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::AllocAcctIDSource{359371257}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::AllocCustomerCapacity{"STRING_1310131699"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::AllocPositionEffect{'R'}, AllocAckGrp_NoAllocs_2);
    FIX::AllocPrice AllocPrice_7;
    AllocPrice_7.setString("5411445");
set_field(noAllocs_0_0, AllocPrice_7, AllocAckGrp_NoAllocs_2);
    FIX::AllocQty AllocQty_7;
    AllocQty_7.setString("2672258");
set_field(noAllocs_0_0, AllocQty_7, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::AllocText{"STRING_2071107246"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::EncodedAllocText{"DATA_1378994976"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::EncodedAllocTextLen{258026981}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::IndividualAllocID{"STRING_1164946440"}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::IndividualAllocRejCode{442176147}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::IndividualAllocType{2}, AllocAckGrp_NoAllocs_2);
    set_field(noAllocs_0_0, FIX::SecondaryIndividualAllocID{"STRING_25041684"}, AllocAckGrp_NoAllocs_2);
    all_values.push_back(AllocAckGrp_NoAllocs_2);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_19;
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyID{"STRING_1769839474"}, NestedParties_NoNestedPartyIDs_19);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyIDSource{'3'}, NestedParties_NoNestedPartyIDs_19);
      set_field(noNestedPartyIDs_0_1_0, FIX::NestedPartyRole{1403577460}, NestedParties_NoNestedPartyIDs_19);
      all_values.push_back(NestedParties_NoNestedPartyIDs_19);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_41;
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubID{"STRING_1838530245"}, NstdPtysSubGrp_NoNestedPartySubIDs_41);
        set_field(noNestedPartySubIDs_0_0_2_0, FIX::NestedPartySubIDType{1515919415}, NstdPtysSubGrp_NoNestedPartySubIDs_41);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_41);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_0.addGroup(noNestedPartySubIDs_0_0_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_20;
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyID{"STRING_2127837652"}, NestedParties_NoNestedPartyIDs_20);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_20);
      set_field(noNestedPartyIDs_0_1_1, FIX::NestedPartyRole{153967689}, NestedParties_NoNestedPartyIDs_20);
      all_values.push_back(NestedParties_NoNestedPartyIDs_20);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_42;
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubID{"STRING_1386696818"}, NstdPtysSubGrp_NoNestedPartySubIDs_42);
        set_field(noNestedPartySubIDs_0_1_2_0, FIX::NestedPartySubIDType{1047311676}, NstdPtysSubGrp_NoNestedPartySubIDs_42);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_42);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_1.addGroup(noNestedPartySubIDs_0_1_2_0);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_0_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_21;
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyID{"STRING_626378864"}, NestedParties_NoNestedPartyIDs_21);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_21);
      set_field(noNestedPartyIDs_0_1_2, FIX::NestedPartyRole{486697273}, NestedParties_NoNestedPartyIDs_21);
      all_values.push_back(NestedParties_NoNestedPartyIDs_21);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_43;
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubID{"STRING_430845169"}, NstdPtysSubGrp_NoNestedPartySubIDs_43);
        set_field(noNestedPartySubIDs_0_2_2_0, FIX::NestedPartySubIDType{1413524464}, NstdPtysSubGrp_NoNestedPartySubIDs_43);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_43);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_0_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_44;
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubID{"STRING_1135980631"}, NstdPtysSubGrp_NoNestedPartySubIDs_44);
        set_field(noNestedPartySubIDs_0_2_2_1, FIX::NestedPartySubIDType{1740976868}, NstdPtysSubGrp_NoNestedPartySubIDs_44);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_44);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_0_1_2.addGroup(noNestedPartySubIDs_0_2_2_1);
      }
      noAllocs_0_0.addGroup(noNestedPartyIDs_0_1_2);
    }
    msg.addGroup(noAllocs_0_0);
  }
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_1;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_3;
    set_field(noAllocs_0_1, FIX::AllocAccount{"STRING_388365898"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::AllocAcctIDSource{1677125215}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::AllocCustomerCapacity{"STRING_2008202671"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::AllocPositionEffect{'O'}, AllocAckGrp_NoAllocs_3);
    FIX::AllocPrice AllocPrice_8;
    AllocPrice_8.setString("9086365");
set_field(noAllocs_0_1, AllocPrice_8, AllocAckGrp_NoAllocs_3);
    FIX::AllocQty AllocQty_8;
    AllocQty_8.setString("1187460");
set_field(noAllocs_0_1, AllocQty_8, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::AllocText{"STRING_1476935936"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::EncodedAllocText{"DATA_1350812691"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::EncodedAllocTextLen{1479837494}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::IndividualAllocID{"STRING_1501977621"}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::IndividualAllocRejCode{1191042837}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::IndividualAllocType{1}, AllocAckGrp_NoAllocs_3);
    set_field(noAllocs_0_1, FIX::SecondaryIndividualAllocID{"STRING_1808998339"}, AllocAckGrp_NoAllocs_3);
    all_values.push_back(AllocAckGrp_NoAllocs_3);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_22;
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyID{"STRING_910156040"}, NestedParties_NoNestedPartyIDs_22);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_22);
      set_field(noNestedPartyIDs_1_1_0, FIX::NestedPartyRole{1963056065}, NestedParties_NoNestedPartyIDs_22);
      all_values.push_back(NestedParties_NoNestedPartyIDs_22);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_45;
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubID{"STRING_1151378790"}, NstdPtysSubGrp_NoNestedPartySubIDs_45);
        set_field(noNestedPartySubIDs_1_0_2_0, FIX::NestedPartySubIDType{2117023754}, NstdPtysSubGrp_NoNestedPartySubIDs_45);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_45);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_46;
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubID{"STRING_1455072118"}, NstdPtysSubGrp_NoNestedPartySubIDs_46);
        set_field(noNestedPartySubIDs_1_0_2_1, FIX::NestedPartySubIDType{390591961}, NstdPtysSubGrp_NoNestedPartySubIDs_46);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_46);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_0.addGroup(noNestedPartySubIDs_1_0_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_23;
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyID{"STRING_1016851782"}, NestedParties_NoNestedPartyIDs_23);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_23);
      set_field(noNestedPartyIDs_1_1_1, FIX::NestedPartyRole{615110759}, NestedParties_NoNestedPartyIDs_23);
      all_values.push_back(NestedParties_NoNestedPartyIDs_23);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_47;
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubID{"STRING_710576709"}, NstdPtysSubGrp_NoNestedPartySubIDs_47);
        set_field(noNestedPartySubIDs_1_1_2_0, FIX::NestedPartySubIDType{1045955928}, NstdPtysSubGrp_NoNestedPartySubIDs_47);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_47);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_1_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_48;
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubID{"STRING_769589871"}, NstdPtysSubGrp_NoNestedPartySubIDs_48);
        set_field(noNestedPartySubIDs_1_1_2_1, FIX::NestedPartySubIDType{1846557341}, NstdPtysSubGrp_NoNestedPartySubIDs_48);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_48);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_1.addGroup(noNestedPartySubIDs_1_1_2_1);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_1_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_24;
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyID{"STRING_639449148"}, NestedParties_NoNestedPartyIDs_24);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_24);
      set_field(noNestedPartyIDs_1_1_2, FIX::NestedPartyRole{1376198908}, NestedParties_NoNestedPartyIDs_24);
      all_values.push_back(NestedParties_NoNestedPartyIDs_24);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_49;
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubID{"STRING_1469945266"}, NstdPtysSubGrp_NoNestedPartySubIDs_49);
        set_field(noNestedPartySubIDs_1_2_2_0, FIX::NestedPartySubIDType{137351804}, NstdPtysSubGrp_NoNestedPartySubIDs_49);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_49);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_50;
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubID{"STRING_618914176"}, NstdPtysSubGrp_NoNestedPartySubIDs_50);
        set_field(noNestedPartySubIDs_1_2_2_1, FIX::NestedPartySubIDType{799397555}, NstdPtysSubGrp_NoNestedPartySubIDs_50);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_50);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_1);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_1_2_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_51;
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubID{"STRING_1488164495"}, NstdPtysSubGrp_NoNestedPartySubIDs_51);
        set_field(noNestedPartySubIDs_1_2_2_2, FIX::NestedPartySubIDType{2098751670}, NstdPtysSubGrp_NoNestedPartySubIDs_51);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_51);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_1_1_2.addGroup(noNestedPartySubIDs_1_2_2_2);
      }
      noAllocs_0_1.addGroup(noNestedPartyIDs_1_1_2);
    }
    msg.addGroup(noAllocs_0_1);
  }
  {
    FIX50SP2::AllocationReportAck::NoAllocs noAllocs_0_2;
    // AllocAckGrp.NoAllocs
    multiset<string> AllocAckGrp_NoAllocs_4;
    set_field(noAllocs_0_2, FIX::AllocAccount{"STRING_153891528"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::AllocAcctIDSource{531723684}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::AllocCustomerCapacity{"STRING_1053461342"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::AllocPositionEffect{'F'}, AllocAckGrp_NoAllocs_4);
    FIX::AllocPrice AllocPrice_9;
    AllocPrice_9.setString("9788603");
set_field(noAllocs_0_2, AllocPrice_9, AllocAckGrp_NoAllocs_4);
    FIX::AllocQty AllocQty_9;
    AllocQty_9.setString("19636173");
set_field(noAllocs_0_2, AllocQty_9, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::AllocText{"STRING_1315451155"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::EncodedAllocText{"DATA_794432750"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::EncodedAllocTextLen{706643778}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::IndividualAllocID{"STRING_319346298"}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::IndividualAllocRejCode{763972856}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::IndividualAllocType{2}, AllocAckGrp_NoAllocs_4);
    set_field(noAllocs_0_2, FIX::SecondaryIndividualAllocID{"STRING_709938259"}, AllocAckGrp_NoAllocs_4);
    all_values.push_back(AllocAckGrp_NoAllocs_4);
    all_compo_names.insert("...NoAllocs");

    // NestedParties
    // Group NestedParties.NoNestedPartyIDs
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_0;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_25;
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyID{"STRING_2095683232"}, NestedParties_NoNestedPartyIDs_25);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_25);
      set_field(noNestedPartyIDs_2_1_0, FIX::NestedPartyRole{1136890046}, NestedParties_NoNestedPartyIDs_25);
      all_values.push_back(NestedParties_NoNestedPartyIDs_25);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_52;
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubID{"STRING_223521299"}, NstdPtysSubGrp_NoNestedPartySubIDs_52);
        set_field(noNestedPartySubIDs_2_0_2_0, FIX::NestedPartySubIDType{1906479917}, NstdPtysSubGrp_NoNestedPartySubIDs_52);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_52);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_53;
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubID{"STRING_357849986"}, NstdPtysSubGrp_NoNestedPartySubIDs_53);
        set_field(noNestedPartySubIDs_2_0_2_1, FIX::NestedPartySubIDType{862970447}, NstdPtysSubGrp_NoNestedPartySubIDs_53);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_53);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_1);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_0_2_2;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_54;
        set_field(noNestedPartySubIDs_2_0_2_2, FIX::NestedPartySubID{"STRING_916952039"}, NstdPtysSubGrp_NoNestedPartySubIDs_54);
        set_field(noNestedPartySubIDs_2_0_2_2, FIX::NestedPartySubIDType{1734048895}, NstdPtysSubGrp_NoNestedPartySubIDs_54);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_54);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_0.addGroup(noNestedPartySubIDs_2_0_2_2);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_0);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_1;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_26;
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyID{"STRING_1363138619"}, NestedParties_NoNestedPartyIDs_26);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyIDSource{'2'}, NestedParties_NoNestedPartyIDs_26);
      set_field(noNestedPartyIDs_2_1_1, FIX::NestedPartyRole{1871400699}, NestedParties_NoNestedPartyIDs_26);
      all_values.push_back(NestedParties_NoNestedPartyIDs_26);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_1_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_55;
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubID{"STRING_1038811213"}, NstdPtysSubGrp_NoNestedPartySubIDs_55);
        set_field(noNestedPartySubIDs_2_1_2_0, FIX::NestedPartySubIDType{1212081546}, NstdPtysSubGrp_NoNestedPartySubIDs_55);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_55);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_1.addGroup(noNestedPartySubIDs_2_1_2_0);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_1);
    }
    {
      FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs noNestedPartyIDs_2_1_2;
      // NestedParties.NoNestedPartyIDs
      multiset<string> NestedParties_NoNestedPartyIDs_27;
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyID{"STRING_1933320817"}, NestedParties_NoNestedPartyIDs_27);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyIDSource{'1'}, NestedParties_NoNestedPartyIDs_27);
      set_field(noNestedPartyIDs_2_1_2, FIX::NestedPartyRole{1743805230}, NestedParties_NoNestedPartyIDs_27);
      all_values.push_back(NestedParties_NoNestedPartyIDs_27);
      all_compo_names.insert("...NoAllocs...NoNestedPartyIDs");

      // NstdPtysSubGrp
      // Group NstdPtysSubGrp.NoNestedPartySubIDs
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_0;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_56;
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubID{"STRING_1008108960"}, NstdPtysSubGrp_NoNestedPartySubIDs_56);
        set_field(noNestedPartySubIDs_2_2_2_0, FIX::NestedPartySubIDType{575181915}, NstdPtysSubGrp_NoNestedPartySubIDs_56);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_56);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_0);
      }
      {
        FIX50SP2::AllocationReportAck::NoAllocs::NoNestedPartyIDs::NoNestedPartySubIDs noNestedPartySubIDs_2_2_2_1;
        // NstdPtysSubGrp.NoNestedPartySubIDs
        multiset<string> NstdPtysSubGrp_NoNestedPartySubIDs_57;
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubID{"STRING_655432245"}, NstdPtysSubGrp_NoNestedPartySubIDs_57);
        set_field(noNestedPartySubIDs_2_2_2_1, FIX::NestedPartySubIDType{176076467}, NstdPtysSubGrp_NoNestedPartySubIDs_57);
        all_values.push_back(NstdPtysSubGrp_NoNestedPartySubIDs_57);
        all_compo_names.insert("...NoAllocs...NoNestedPartyIDs...NoNestedPartySubIDs");

        noNestedPartyIDs_2_1_2.addGroup(noNestedPartySubIDs_2_2_2_1);
      }
      noAllocs_0_2.addGroup(noNestedPartyIDs_2_1_2);
    }
    msg.addGroup(noAllocs_0_2);
  }
  // Parties
  // Group Parties.NoPartyIDs
  {
    FIX50SP2::AllocationReportAck::NoPartyIDs noPartyIDs_0_0;
    // Parties.NoPartyIDs
    multiset<string> Parties_NoPartyIDs_10;
    set_field(noPartyIDs_0_0, FIX::PartyID{"STRING_1362076023"}, Parties_NoPartyIDs_10);
    set_field(noPartyIDs_0_0, FIX::PartyIDSource{'H'}, Parties_NoPartyIDs_10);
    set_field(noPartyIDs_0_0, FIX::PartyRole{40}, Parties_NoPartyIDs_10);
    all_values.push_back(Parties_NoPartyIDs_10);
    all_compo_names.insert("...NoPartyIDs");

    // PtysSubGrp
    // Group PtysSubGrp.NoPartySubIDs
    {
      FIX50SP2::AllocationReportAck::NoPartyIDs::NoPartySubIDs noPartySubIDs_0_1_0;
      // PtysSubGrp.NoPartySubIDs
      multiset<string> PtysSubGrp_NoPartySubIDs_21;
      set_field(noPartySubIDs_0_1_0, FIX::PartySubID{"STRING_1205361024"}, PtysSubGrp_NoPartySubIDs_21);
      set_field(noPartySubIDs_0_1_0, FIX::PartySubIDType{10}, PtysSubGrp_NoPartySubIDs_21);
      all_values.push_back(PtysSubGrp_NoPartySubIDs_21);
      all_compo_names.insert("...NoPartyIDs...NoPartySubIDs");

      noPartyIDs_0_0.addGroup(noPartySubIDs_0_1_0);
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
